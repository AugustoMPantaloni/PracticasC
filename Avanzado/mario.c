#include <stdio.h>

int main(void)
{
    int height;
    printf("Height:\n");
    scanf("%d", &height);

    while( height <= 0)
    {
        printf("These are not valid values, please enter a positive integer.\n");
        while(getchar() != '\n');
        scanf("%d", &height);
    }

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }

        printf(" ");

        for(int k = 1; k <= i; k++ ){
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
