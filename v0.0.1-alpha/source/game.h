#pragma once
#include<bits/stdc++.h>
#include<easyx.h>
#include<conio.h>
using namespace std;
void drawfloor(){
	setfillcolor(BLACK);
	fillrectangle(0,310,640,320);
}
void drawperson(int x,int y){
	cleardevice();
	setfillcolor(BLUE);
	fillrectangle(y,x,y+10,x+10);
}
void down(int &x,int &y){
	while(x<300){
		if(y>=640)y=630;
		if(y<=0)y=10;
		x+=1;
		drawperson(x,y);
		drawfloor();
		Sleep(1);
		if(_kbhit()){
			char ch=_getch();
			switch(ch){
			case 'a':
				y-=3;
				break;
			case 'd':
				y+=3;
				break;
			default:
				break;
			}
		}
	}
	
}
void jump(int &x,int &y){
	while(x>=250){
		if(y>=640)y=630;
		if(y<=0)y=10;
		cout<<x<<endl;
		x-=1;
		drawperson(x,y);
		drawfloor();
		Sleep(1);
		if(_kbhit()){
			char ch=_getch();
			switch(ch){
				case 'a':
					y-=3;
					break;
				case 'd':
					y+=3;
					break;
				default:
					break;
			}
		}
	
	}
		
}