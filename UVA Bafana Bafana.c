#include<stdio.h>
int main()
{
    int T,i,n,k,p;
    scanf("%d",&T);
    i=0;
    while(i<T){
        scanf("%d%d%d",&n,&k,&p);
        while(p!=0){
            k++;
            p--;
            if(k>n){
                k=1;
            }
        }
        printf("Case %d: %d\n",i+1,k);
        i++;
    }
    return 0;
}
