#include <stdio.h>
#include "logica_proposicional.h"

void showLogicaProposicionalSubmenu(){
    printf("Menu");
}

int not(int value){
    return !value;
}

int and(int value1, int value2){
    return value1 && value2;
}

int or(int value1, int value2){
    return value1 || value2;
}

int xor(int value1, int value2){
    return value1 ^ value2;
}

int ifJust(int value1, int value2){
    return or(not(value1), value2);
}

int ifJustIf(int value1, int value2){
    return value1 == value2;
}
