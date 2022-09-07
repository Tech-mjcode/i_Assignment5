#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int check = num*2;
    for(i=2;i<=check ;i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}
