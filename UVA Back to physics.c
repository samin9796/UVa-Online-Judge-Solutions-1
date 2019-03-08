#include<stdio.h>
int main()
{
    double v,t,a,s;

    while(scanf("%lf%lf",&v,&t)!=EOF){
        if(t==0){
            printf("0\n");
        }
        else{
                a=v/t;
        s=(0.5)*(a)*(2*t)*(2*t);
        printf("%.0lf\n",s);
        }
    }
    return 0;
}
