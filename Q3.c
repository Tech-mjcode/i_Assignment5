#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i=num;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
