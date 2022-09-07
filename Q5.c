#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int check = num*2-1;
    for(i=check;i>=1 ;i-=2)
    {
        //if(i%2!=0)
            printf("%d\n",i);
    }
    return 0;
}
