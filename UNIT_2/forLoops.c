#include<stdio.h>
int main()
{
    int num;
    int i;
    printf("Enter a number");
    scanf("%d",&num);
    printf("\nMultiplication Table Using While Loop:\n");
    i = 1;
    while(i<= 10)
    {
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
    printf("\nMultiplication Table using Do-while Loop:\n");
    i=1;
    do
    {
        printf("%d*%d=%d\n",num,i,num*i);
    i++;
    }while(i<=10);
    printf("\nMultiplication Table Using For Loop:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}
