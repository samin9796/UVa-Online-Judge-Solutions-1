#include<stdio.h>
int main()
{
    int T,a[25],b[25],c[25],i;
    scanf("%d",&T);
    i=0;
    while(i<T && T<20){
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
        if(a[i]>=10000 && a[i]<=1000 && b[i]>=10000 && b[i]<=1000 && c[i]>=10000 && c[i]<=1000){break;}
        i++;
    }
    i=0;
    while(i<T && T<20){
            if(a[i]>=10000 && a[i]<=1000 && b[i]>=10000 && b[i]<=1000 && c[i]>=10000 && c[i]<=1000){break;}
        if((a[i]>b[i] && b[i]>c[i]) || (c[i]>b[i] && b[i]>a[i])){
            printf("Case %d: %d\n",i+1,b[i]);
        }
        else if((b[i]>a[i] && a[i]>c[i]) || (c[i]>a[i] && a[i]>b[i] )){
            printf("Case %d: %d\n",i+1,a[i]);
        }
        else if((a[i]>c[i] && c[i]>b[i]) || (b[i]>c[i] && c[i]>a[i])){
            printf("Case %d: %d\n",i+1,c[i]);
        }
        else if(a[i]==b[i] && b[i]==c[i]){
            printf("Case %d: %d\n",i+1,c[i]);
        }
        else if(a[i]==b[i] && b[i]!=c[i]){
            printf("Case %d: %d\n",i+1,b[i]);
        }
        else if(a[i]==c[i] && c[i]!=b[i]){
            printf("Case %d: %d\n",i+1,c[i]);
        }
        else if(b[i]==c[i] && c[i]!=a[i]){
            printf("Case %d: %d\n",i+1,c[i]);
        }
        i++;
    }
    return 0;
}
