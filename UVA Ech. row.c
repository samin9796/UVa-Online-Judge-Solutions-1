#include<stdio.h>
int main()
{
    int T,k,n,row,i,j;
    scanf("%d",&T);
    for(k=0;k<T;k++){
        scanf("%d",&n);
        row=0;
        for(i=1,j=1;i<=n;j++,i+=j){
            row++;
        }
        printf("%d\n",row);
    }
    return 0;
}
