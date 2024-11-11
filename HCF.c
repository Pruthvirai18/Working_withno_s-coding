#include<stdio.h>
int Hcf(int num1,int num2)
{
int i,hcf;
for(i=1;i<=num1||i<=num2;i++)
{
    if(num1%i==0&&num2%i==0)
    hcf=i;
}
return hcf;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("HCF is %d",Hcf(a,b));
    return 0;
}
