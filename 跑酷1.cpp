#include<bits/stdc++.h>
#include<easyx.h>
#include<conio.h>
#include"game.h"
using namespace std;
int main(){
	initgraph(640,320);
	setbkcolor(WHITE);
	cleardevice();
	int x=300,y=10;
	while(1){
		down(x,y);
		drawperson(x,y);
		drawfloor();
		char ch=_getch();
		switch(ch){
		    case 'w':
				jump(x,y);
				break;
			case 'a':
				y-=5;
				break;
			case 'd':
				y+=5;
				break;
			default:
				break;
		}
	}
	return 0;
}