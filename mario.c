#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height;
    do
    {
        
        height= get_int("Height: ");
    }
    while(height>8 || height<1);
    for(int i=0; i<height; i++)
    {
        for (int b=0; b<height-(i+1); b++)
        {
            printf(" ");
        }
        for (int c=0; c<i+1; c++)
        {
            printf("#");
        }
        printf("  ");
        for (int d=0; d<i+1; d++)
        {
            printf("#");
        }
        printf("\n");
    }
}
