#include<stdio.h>
#include<string.h>
int main()
{
    char n[1050];
    int i,l,sum1,sum2,sum;
    while(scanf("%s",&n)!=EOF){
        l=strlen(n);
        if(n[0]=='0' && l==1)
            break;
        i=0;
        sum1=0;
        while(i<l){

            sum1=n[i]+sum1-'0';
            i=i+2;
        }
        i=1;
        sum2=0;
        while(i<l){
            sum2=n[i]+sum2-'0';
            i=i+2;
        }
        sum=sum1-sum2;
        if(sum%11==0){
            printf("%s is a multiple of 11.\n",n);
        }
        else{
            printf("%s is not a multiple of 11.\n",n);
        }
    }
    return 0;
}
