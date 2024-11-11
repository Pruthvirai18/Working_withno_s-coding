#include<stdio.h>
int Hcf(int num1,int num2)
{
    while(num1!=num2)
    {
    if(num1>num2)
    num1=num1-num2;
    else if(num1<num2)
    num2=num2-num1;
    }
    return num1;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("HCF is %d",Hcf(m,n));
    return 0;
}

