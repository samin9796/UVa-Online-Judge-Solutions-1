#include<stdio.h>
int main()
{
    long long int n,row,i,j;
    long int T,k;
    scanf("%d",&T);

    for(k=0;k<T;k++){
        scanf("%lld",&n);
        if(n<1000000){
                row=0;
        for(i=1,j=1;i<=n;j++,i+=j){
            row++;
        }
        }
        else if(n<1000000000000){
            row=1413;
        for(i=1000405,j=1414;i<=n;j++,i+=j){
            row++;
        }
        }
        else if(n<1000000000000000000){
                row=1414213;
        for(i=1000001326005,j=1414214;i<=n;j++,i+=j){
            row++;
        }

        }
        printf("%lld\n",row);
    }
    return 0;
}
