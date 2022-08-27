#include "helper.h"
#include "stdio.h"

void putPixel(int posX, int posY, Color color) {
    DrawPixel(posX + GetRenderWidth() / 2, -posY + GetRenderHeight() / 2, color);
}


void logIt(int num){
    printf("%d",num);
}