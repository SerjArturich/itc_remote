#include <iostream>
#include <fstream>
#include <regex>
#include <string>
#include <vector>
#include <stack>

using namespace std;

struct Node1 {
    vector<string> html_tags;
    vector<int> numbers_count;
};

struct Node {
    string text;
    int first;
    int number;
};

string trim(string p, bool extE = false, bool extB = false) {
    extB ? p.erase(0,2) :  p.erase(0,1);
    extE ? p.erase(p.size()-2) : p.erase(p.size()-1);
    return p;
}

int checkNum(string tag) {

    static stack<Node> stack;
    Node tamp;
    tamp.text = tag;
    tamp.first = 1;
    tamp.number = 1;

    if (tag.size() == 0) {
        return stack.top().number + 1;
    }
    if (!stack.empty()) {
        if (tag.compare(stack.top().text) == 0) {    
            Node tamp = stack.top();
            stack.pop();
            return tamp.first;
        } else {
            tamp.number = stack.top().number + 1;
        }
    }

    stack.push(tamp);
    return tamp.number;
}

void print(Node1 temp, ofstream &fout){

    int it = 1;
    int** matrix = new int*[temp.numbers_count.size()];
    for (int i = 0; i < temp.numbers_count.size(); ++i){
        matrix[i] = new int[temp.numbers_count[i]];
    }
    matrix[0][0] = 1;
    fout << matrix[0][0] << temp.html_tags[0] << endl;


    do
    {
        for(int i = 0; i < temp.numbers_count[it] - 1; ++i){
            matrix[it][i] = matrix[it - 1][i];
            fout << matrix[it][i] << '.';
        }
        if(temp.numbers_count[it - 1] < temp.numbers_count[it]){
            matrix[it][temp.numbers_count[it] - 1] = 1;
        } else {
            matrix[it][temp.numbers_count[it] - 1] = ++ matrix[it - 1][temp.numbers_count[it] - 1];
        }
        fout << matrix[it][temp.numbers_count[it] - 1] << temp.html_tags[it] << endl;
        ++it;
    } while (it != temp.numbers_count.size());

    for (int i = 0; i < temp.numbers_count.size(); i++){
        delete[] matrix[i];
    }
	delete[] matrix;   
}

int main () {
    const char* path_html = "index.html";
    const char* path_txt = "html.txt";
    regex reg_close("(<)(/)([a-z]*)(>)");
    regex reg_open("(<)([a-z]*)(>)");
    regex reg_unique("(<)([a-z]*)(/)(>)");
    smatch part;
    Node1 arrays;
    ifstream in_file;

    in_file.open(path_html);

    if (in_file.is_open())
    {
        string str;
        int current_tag;
        while (!in_file.eof())
        {
            str = "";
            getline(in_file,str);
            while (regex_search (str,part,reg_open)) {
                string tag_from_file = trim(part[0]);
                current_tag = checkNum(tag_from_file);
                arrays.numbers_count.push_back(current_tag);          
                arrays.html_tags.push_back(part[0]);
                str = part.suffix().str();
            }
            while (regex_search (str,part,reg_close)) {
                string tag_from_file = trim(part[0], false, true);
                current_tag = checkNum(tag_from_file);
                str = part.suffix().str();
            }
            while (regex_search (str,part,reg_unique)) {
                string tag_from_file = part[0];
                current_tag = checkNum("");
                arrays.numbers_count.push_back(current_tag);
                arrays.html_tags.push_back(part[0]);
                str = part.suffix().str();
            }
        }
    } else {
        cout << "File can't be opened." << endl;
        return -1;
    }
    in_file.close();
    
    ofstream out_file;
    out_file.open(path_txt);

    if (out_file.is_open()) {
        print(arrays,out_file);
    } else {
        cout << "File can't be opened." << endl;
        return -1;
    }
    out_file.close();
    return 0;
}