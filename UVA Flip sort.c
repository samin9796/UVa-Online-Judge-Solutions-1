#include<stdio.h>
int main()
{
    int T,i,a[1010],j,sum,count,k;
    while(scanf("%d",&T)!=EOF){
        for(i=0;i<T;i++){
            scanf("%d",&a[i]);
        }
        j=i;
        sum=0;
        count=0;
        i=0;
        while(i<j){
            k=i+1;
            while(k<=j){
                if(a[i]>a[k]){
                    count++;
                }
                k++;
            }
            sum+=count;
            count=0;
            i++;
        }
        printf("Minimum exchange operations : %d\n",sum);
    }
    return 0;
}
