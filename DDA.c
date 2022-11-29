#include<conio.h>
#include<stdio.h>


void main() {
    float x, y, dx, dy, steps;  
    int x0, x1, y0, y1;
    printf("Enter Value of x0: ");
    scanf("%d", &x0);
    printf("Enter Value of x1: ");
    scanf("%d", &x1);
    printf("Enter Value of y0: ");
    scanf("%d", &y0);
    printf("Enter Value of y1: ");
    scanf("%d", &y1);
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx >= dy) {
        steps = dx;
    } else {
        steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    int i = 1;
    while(i <= steps) {
        printf(">> (%d, %d)\n", x, y);
        x += dx;
        y += dy;
        i = i+1;
    }
    getch();
}
