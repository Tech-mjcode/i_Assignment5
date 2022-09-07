#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("Cube of %d = %d \n",i,i*i*i);
    }
    return 0;
}
