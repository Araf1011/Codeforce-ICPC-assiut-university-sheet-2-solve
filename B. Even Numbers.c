#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d", &N);

    for(i=2;i<=N;i=i+2){
        printf("%d\n",i);
    }
     if(N == 1)
    {
        printf("-1",i);
    }

    return 0;
}