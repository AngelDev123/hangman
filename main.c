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

}
