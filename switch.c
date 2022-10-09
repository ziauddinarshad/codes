#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);

    switch(num){case 8:
    printf("i am beautiful");
    break;
     case 26:
        printf("i am cute");
        break;
        default:
        printf("nothing matched");
        break;


    }

}
