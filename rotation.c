#include<stdio.h>
#include<math.h>

#define FORM 3.14/180

void rotation(int x, int y, int j, double c, double s) {
    int new[2];
    new[0] = floor(x * c + y * s);
    new[1] = floor(-x * s + y * c);
    printf(">> [%d](%d, %d)\n", j, new[0], new[1]);
}

int main() {
    int num;

    printf("Enter number of coordinates needed: ");
    scanf("%d", &num);

    int x[num], y[num], j;
    double s, c, angle;

    for (j = 0; j < num; j++) {
        printf("Enter the coordinates (x, y) [%d]: ", j);
        scanf("%d %d", &x[j], &y[j]);
    }

    printf("Enter rotation angle: ");
    scanf("%lf", &angle);

    c = cos(angle *FORM);
    s = sin(angle *FORM);
    
    for (j = 0; j < num; j++) {
        rotation(x[j], y[j], j, c, s);
    }

    return 0;
}
