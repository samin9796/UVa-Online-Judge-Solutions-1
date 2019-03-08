#include<stdio.h>
int main()
{
    int i,j,sum,p[100];

    while(scanf("%d",&i)!=EOF){
        if(i==0)break;
        j=0;
        sum=0;
        while(i!=0){
            p[j]=i%2;
            sum=p[j]+sum;
            i=i/2;
            j++;
        }
        j=j-1;
        printf("The parity of ");
        while(j>=0){
            printf("%d",p[j]);
            j--;
        }
        printf(" is %d (mod 2).\n",sum);
    }
    return 0;
}
