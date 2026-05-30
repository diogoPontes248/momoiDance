#include "animacao.h"

void animacao1(){
    for(int i = 0; i < ANIMELOOP1; i++){
        frames1_animacao1();
        Sleep(VELOCIDADE1);
        system("cls");
        frames2_animacao1();
        Sleep(VELOCIDADE1);
        system("cls");
        frames3_animacao1();
        Sleep(VELOCIDADE1);
        system("cls");
        frames4_animacao1();
        Sleep(VELOCIDADE1);
        system("cls");
        frames5_animacao1();
        Sleep(VELOCIDADE1);
        system("cls");
    }
}

void animacao2(){
    for(int i = 0; i < ANIMELOOP2_1; i++){
        for(int i = 0; i < ANIMELOOP2_2; i++){
            frames1_animacao2();
            Sleep(VELOCIDADE2_1);
            system("cls");
            frames2_animacao2();
            Sleep(VELOCIDADE2_1);
            system("cls");
        }
        frames3_animacao2();
        Sleep(VELOCIDADE2_1);
        system("cls");
        frames4_animacao2();
        Sleep(VELOCIDADE2_1);
        system("cls");
        frames5_animacao2();
        Sleep(VELOCIDADE2_2);
        system("cls");
        frames4_animacao2();
        Sleep(VELOCIDADE2_1);
        system("cls");
        frames3_animacao2();
        Sleep(VELOCIDADE2_1);
        system("cls");
    }
}

void animacao3(){
    for(int i = 0; i < ANIMELOOP3; i++){
        frames1_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
        frames2_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
        frames3_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
        frames4_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
        frames5_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
        frames6_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
        frames7_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
        frames8_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
        frames7_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
        frames6_animacao3();
        Sleep(VELOCIDADE3);
        system("cls");
    }
}
