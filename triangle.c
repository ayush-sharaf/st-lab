#include <stdio.h> 
int main()
{
    int a, b, c;
    char istriangle;
    printf("enter 3 integers which are sides of triangle\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("a=%d\t, b=%d\t, c=%d\n", a, b, c);
    if (a < b + c && b < a + c && c < a + b)
        istriangle = 'y';
    else
        istriangle = 'n';
    if (istriangle == 'y')
        if ((a == b) && (b == c))
            printf("Equilateral triangle\n");
        else if ((a != b) && (a != c) && (b != c))
            printf("Scalene triangle\n");
        else
            printf("Isosceles triangle\n");
    else
        printf("Not a triangle\n");
    return 0;
}