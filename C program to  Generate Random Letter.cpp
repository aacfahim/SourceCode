#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t t;
    char word[100];

    srand((unsigned) time(&t));

    char var = ( rand() % 26 ) + 'A'; 
                                            
    printf("\nWrite a letter using: ");
    putchar(var);    

    printf("\n");
    scanf("%c", &word);


    return 0;
}