#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int a,b,ans,choice;
    time_t t;
    int sum = 0;

    srand((unsigned) time(&t));

    for(int i = 0; i < 1; i++)
    {
        a = (rand() % 100);
        b = (rand() % 100);
        sum += a+b;
    printf("what is  %d + %d = ? \n", a,b);
    }

    scanf("%d", &ans);
    if(ans == sum)
    {
        printf("Correct!\n\nPress 1 to Exit OR 2 to Continue : ");
        scanf("%d", &choice);
        if(choice == 2)
        {
            main();
        }

    }
    else
    {
        printf("Wrong! Answer is %d \n\nPress 1 to Exit OR 2 to Continue : ", sum);
        scanf("%d", &choice);
        if(choice == 2)
        {
            main();
        }

    }

        return 0;
    }
