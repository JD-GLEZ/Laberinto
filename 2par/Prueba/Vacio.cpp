#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


void main()
{
	int x[10]={'\0'};
    //char x[10]="Hawai";
    //strcpy(x,"Hawai");
    if (x[5]=='\0')
    {
        printf("Hi");
        for(int i=0;i<10;i++)
        {
        printf("%c",x[i]);
        }
    }
    else
    {
        for(int i=0;i<10;i++)
        {
        printf("%c",x[i]);
        }
        printf("BUUUUUUUUUUUU");
    }
    getch();
}