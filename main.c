#include "animacao.h"
#include <stdbool.h>
#include <time.h>

void mostrarCursor(bool mostrar) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    GetConsoleCursorInfo(consoleHandle, &info);
    info.bVisible = mostrar;
    SetConsoleCursorInfo(consoleHandle, &info);
}

int main()
{
    int minimo = 1, maximo = 3;
    int escolha;
    srand(time(NULL));

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
    system("chcp 65001");
    mostrarCursor(false);
    system("cls");
    while(true){
        escolha = (rand() % (maximo - minimo + 1)) + minimo;
        if(escolha == 1){
            animacao1();
        }
        else if(escolha == 2){
            animacao2();
        }
        else{
            animacao3();
        }
    }

    return 0;
}
