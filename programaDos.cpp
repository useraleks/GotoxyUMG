#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ANCHO 80
#define ALTO 25
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void borrar_caracter(int x, int y) {
    gotoxy(x, y);
    printf(" ");
}

void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {
    char palabra[] = "HOLA MI UMG";
    int longitud = strlen(palabra);
    int x = ANCHO / 2 - longitud / 2;
    int y = 0;
    int i, j;
    int color;

    srand(time(NULL));

    while (1) {
        system("cls");

        
        color = 1 + rand() % 15;
        setColor(color); //genera un color al caracter

    
        for (i = 0; i < longitud; i++) {//dibuja la palabra
            gotoxy(x + i, y);
            printf("%c", palabra[i]);
        }

    
        for (i = 0; i < longitud / 2; i++) {//borra el caracter 
            j = rand() % longitud;
            borrar_caracter(x + j, y);
        }

        y++;

     
        if (y >= ALTO) {//reiniciar cuando toca el final de la pantalla 
            y = 0;
            x = rand() % (ANCHO - longitud);
        }

        Sleep(50);//velocidad de ejecucion
    }

    return 0;
}
