#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
}

char opc;
int x=60, y=13;

int main(){
	while(opc!='z'){
		system ("cls");
		gotoxy(x,y);
		cout<<"*";
		opc=getch();
		switch(opc){
			case'w': y--;
			break;
			case 's':y++;
			break;
			case'a':x--;
			break;
			case 'd':x++;
			break;
			default: system ("cls");
		}
	}
}