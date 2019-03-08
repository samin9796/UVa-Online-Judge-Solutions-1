#include<stdio.h>
int main()
{
    long long int T,i,a,b,c,d;

    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        if(a==b && b==c && c==d)printf("square\n");
        else if((a==c && b==d) || (a==b && c==d) || (a==d && b==c))printf("rectangle\n");
        else if(a>=b+c+d || b>=a+c+d || c>=a+b+d || d>=a+b+c)printf("banana\n");
        else printf("quadrangle\n");
    }
    return 0;
}
