#include <conio.h>
#include <string.h>
#include <dos.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <windows.h>
#include <iostream>
#define color SetConsoleTextAttribute

using namespace std;

void gotoxy (int x, int y){
	
	HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwpos;//Las coordenadas de donde estara almacenado el caracter
	dwpos.X=x;// posicion en horizontal
	dwpos.Y=y;// posicion en vertical
	SetConsoleCursorPosition(hcon,dwpos);//cambia de color el fondo
}
int main (){
	int t=0;
	do{
	for (int i=0; i<35;i++){
		
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	color(hCon,i);// cambio de color del fondo del simbolo de sistema
 
	
	
color(hCon, i);// cambia de color el caracter almacenado 	
 gotoxy(1,i);//posicion del caracter
cout<<" Hola Umg "<< endl;
gotoxy(10,i);//posicion del caracter
cout<<" Hola Umg "<< endl;
gotoxy(20,i);//posicion del caracter
cout<<" Hola Umg "<< endl;
gotoxy(30,i);//posicion del caracter
cout<<" Hola Umg "<< endl;
gotoxy(40,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(50,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(60,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(70,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(80,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(90,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(100,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(110,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(120,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(130,i);//posicion del caracter
cout<<"Hola Umg"<< endl;
gotoxy(140,i);//posicion del caracter
cout<<"Hola Umg"<< endl;

Sleep(300);//velocidad de ejecucion

system("cls");//limpia la pantalla
 
	}
	
}while (t==0);//condicion
 return 0;
}
