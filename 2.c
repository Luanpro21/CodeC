#include <stdio.h>
#include <conio.h>
 
void main()
{
    int n,i;
    float S = 0;
    do
    {
        printf("\nNhap n > 0: ");
        scanf("%d",&n);
    }
    while (n <= 0);
 
    for(i = 1;i <= n;i++)
    {
        S +=1/(float)i;
    }
    printf("\nS = %f", S);
    getch();
}