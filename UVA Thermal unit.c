#include<stdio.h>
int main()
{
    double f,C;
    int T,i,d,c;

    scanf("%d",&T);
    i=0;
    while(i<T){
        scanf("%d%d",&c,&d);
        f=((9.0/5.0)*c)+32;
        f=d+f;
        C=f-32.0;

        C=((f-32)*(5.0/9.0));
        printf("Case %d: %.2lf\n",i+1,C);
        i++;
    }
    return 0;
}
