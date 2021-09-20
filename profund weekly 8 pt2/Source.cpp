#include<stdio.h>

int hourglass(int num) {

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= 2 * num - i; j++)
        {
            if (j >= i)printf("*");
            else printf(" ");
        }

        printf("\n");
    }
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= num + i; j++)
        {
            if (j >= num - i) printf("*");
            else printf(" ");

        }

        printf("\n");
    }
    return num;



}
int main()
{
    int num;
    scanf_s("%d", &num);
    hourglass(num);
    return 0;
}
