#include<stdio.h>
int main()
{
    int i,T,sum[120],a[120],b[120];

    scanf("%d",&T);
    i=0;
    while(i<T && T>=1 && T<=100){
        scanf("%d%d",&a[i],&b[i]);

        sum[i]=0;
        if(a[i]%2==1 && a[i]>=0 && a[i]<=b[i] && b[i]<=100){
            while(a[i]<=b[i]){
                sum[i]=a[i]+sum[i];
                a[i]=a[i]+2;
            }
        }
        else if(a[i]%2==0 && a[i]>=0 && a[i]<=b[i] && b[i]<=100){
            a[i]=a[i]+1;
            while(a[i]<=b[i]){
                sum[i]=a[i]+sum[i];
                a[i]=a[i]+2;
            }

        }
        i++;
    }
    i=0;
    while(i<T){
        printf("Case %d: %d\n",i+1,sum[i]);
        i++;
    }
    return 0;
}
