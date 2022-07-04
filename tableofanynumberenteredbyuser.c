#include<stdio.h>
int main()
{
    int n,i,m;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("the table is:\n");
    for (i = 1; i <= 10; i++)
    {
        m=n*i;
        printf("%d\n",m);
    }
    
    
    return 0;
}
