#include <stdio.h>
#include <stdlib.h>
/*未写入结束程序的语句，必须手动结束程序*/

long f(int n)
{
    long a;

    if(n>1){
        a=n*f(n-1);
    }
    else{
        a=1;
    }

    return a;
}
int main()
{
    int n;
    printf("将计算n!,请输入一个数:\n");
    scanf("%d",&n);
    printf("\n%d!=%ld\n",n,f(n));
    printf("********************************\n\n\n");

    return main();//递归
}
