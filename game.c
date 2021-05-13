#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int show(char comp, char you){
    if (you==comp)
    {
        return 0;
    }

    if (you=='p' && comp=='r')
    {
        return 1;
    }
    else if(you=='r' && comp=='p')
    {
        return -1;
    }
    if (you=='p' && comp=='s')
    {
        return -1;
    }
    else if (you=='s' && comp=='p')
    {
        return 1;
    }
    if (you=='s' && comp=='r')
    {
        return -1;
    }
    else if (you=='r' && comp=='s')
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number<33)
    {
        comp='r';
    }
    else if (number>33 && number <66)
    {
        comp='p';

    }
    else
    {
        comp ='s';
    }
    printf("Enter r for rock ,p for paper,s for sizer \n");
    scanf("%c", &you);
    int result=show(comp,you);
    if (result==0)
    {
        printf("Game Draw ! \n");
    }
    else if (result==1)
    {
        printf("You Win ! \n");
    }
    else
    {
        printf("You Loose! \n");
    }
    printf("You choose %c and computer choose %c",you,comp);
    
    
    

    return 0;
}