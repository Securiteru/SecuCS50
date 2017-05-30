#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
   float change;
   do
   {
        printf("O hai! How much change is owed?");
        change = get_float();

        change = round(change* 100);
    }
    while (!(change>=0));
    
    int c=0;
    do
    {
        if(change >=25)
        {
            change -=25;
            c++;
        }
        else if(change >=10)
        {
            change -=10;
            c++;
        }
        else if(change >=5)
        {
            change -=5;
            c++;
        } 
        else if (change >=1)
        {
            change -=1;
            c++;
        }
        
    while(change>0);
    printf("%d\n", c);
}   
