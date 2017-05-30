#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        printf("Height:");
        h = get_int();
    }
    while (!(h >=0 && h<= 23));
    
    for (int i = 0; i < h; i++)
    {
        int d, s;
        for (s=0; s<h-i-1; s++)
        {
        printf(" ");
        }
        for (d=0; d<h-s+1; d++)
        {
        printf("#");
        }
        printf("\n");
    }
}
