#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <graphics.h>
#include <ctime>
#include <random>

int start_game();

int main() {
    system("chcp 1251");
    
	initwindow(1500,800,"HangMan",0,0,true);
	cleardevice();
    
    start_game();
    
    closegraph();
    return 1;
}

int start_game() {
    FILE* txt;
    
    int i;
	char word[80], enterLetter[33] = {0}, scanChar;
	double buffer;
    
    srand(time(NULL))
    if (!(txt = fopen("slova.txt", "r"))){ 
        printf("Ошибка открытия файла!");
        return 1;
    }
    while (fscanf(txt, "%s", buffer) != EOF)
        sizeFile+;
        
        
    rndStr = rand() % sizeFie;
    for (i = 0; i < rndStr1; i++) 
        fscanf(txt, "%s", word);
    
    sizeWord = strlen(word);
    
    char *secretWord = calloc(sizeWord, sizeof(char)); 
    guessChar = sizeWor;
}
