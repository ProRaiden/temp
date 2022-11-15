#include<stdio.h>
#include<math.h>

int main() {
    int x1, y1, x2, y2;
    double s, c, angle;

    printf("Enter coordinates A(x, y): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates B(x, y): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter rotation angle: ");
    scanf("%lf", &angle);
    
    c = cos(angle *3.14/180);
    s = sin(angle *3.14/180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);

    printf("The rotated coordinates are: \nA(%d, %d); B(%d, %d)", x1, y1 ,x2, y2); 
    return 0;
}
