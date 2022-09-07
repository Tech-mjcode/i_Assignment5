#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int check = num*2;
    for(i=1;i<=check ;i+=2)
    {
        //if(i%2!=0)
            printf("%d\n",i);
    }
    return 0;
}
