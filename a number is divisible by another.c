#include<stdio.h>
int main()
{
    int num;
    int num2;
    printf("Enter 1st number\n");
    scanf("%d",&num);
    printf("Enter 2nd number\n");
    scanf("%d",&num2);

    if (num % num2 == 0){
        printf("%d is divided by %d",num,num2);
    }
    else {
        printf("%d is not divided by %d",num,num2);

    }
        return 0;
}
