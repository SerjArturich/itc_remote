#include<stdio.h> 
#include<stdlib.h> 
#include<graphics.h> 

using namespace std;
float Radius(int x, int y, int a, int b){
	float radius = sqrt((x - a) * (x - a) + (y - b) * (y - b));
	return radius;
}
int main() 
{ 
    int gd = 10, gm; 
    initgraph(&gd, &gm, NULL); 
    setcolor(2);
 
    circle(325, 250, Radius(30,30,0,0)); 
    circle(325, 250, Radius(60,60,0,0));
    circle(325, 250, Radius(90,90,0,0));
    circle(325, 250, Radius(120,120,0,0));
    circle(325, 250, Radius(150,150,0,0));
    circle(325, 250, Radius(180,180,0,0));

    line(0,250,650,250);
    line(325,0,325,500);
    
     getch();

    delay(500000); 
    closegraph(); 
    return 0; 
} 
