#include<stdio.h>
int main()
{
    int T,i,n,j,age[15],p;
    scanf("%d",&T);
    i=0;
    while(i<T){
        scanf("%d",&n);
        j=0;

        while(j<n){
            scanf("%d",&age[j]);
            j++;
        }
        p=j+1;
        p=j/2;
        printf("Case %d: %d\n",i+1,age[p]);
        i++;
    }
    return 0;
}
