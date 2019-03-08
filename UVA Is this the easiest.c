#include<stdio.h>
int main()
{
    long long T,i,a[100],b[100],c[100];

    scanf("%lld",&T);
    i=0;
    while(i<T){
        scanf("%lld%lld%lld",&a[i],&b[i],&c[i]);
        i++;
    }
    i=0;
    while(i<T){
            if(a[i]<=0 || b[i]<=0 || c[i]<=0){
                printf("Case %lld: Invalid\n",i+1);
            }
        else if(a[i]>=b[i]+c[i] || b[i]>=a[i]+c[i] || c[i]>=a[i]+b[i]){
            printf("Case %lld: Invalid\n",i+1);
        }
        else if((a[i]==b[i]||a[i]==c[i]||b[i]==c[i]) && (a[i]!=b[i] ||a[i]!=c[i] ||b[i]!=c[i])){
            printf("Case %lld: Isosceles\n",i+1);
        }
        else if(a[i]==b[i] && b[i]==c[i]){
            printf("Case %lld: Equilateral\n",i+1);
        }
        else if(a[i]!=b[i] && b[i]!=c[i] && c[i]!=a[i]){
            printf("Case %lld: Scalene\n",i+1);
        }
        i++;
    }
    return 0;
}
