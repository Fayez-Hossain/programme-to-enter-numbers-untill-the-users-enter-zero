//programme to enter numbers untill the users enter zero
#include <stdio.h>
int main()
{
    int number,sum = 0;

    do{
        printf("enter a number:");
        scanf("%d",&number);
        sum = sum + number;
    }
    while(number !=0);
    printf("sum = %d",sum);

    return 0;
}
