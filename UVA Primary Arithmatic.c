#include<stdio.h>
int main()
{
    int count,carry;
    long long int a,b,t1,t2;

    while(scanf("%lld%lld",&a,&b)!=EOF){
        if(a==0 && b==0)break;
        count=0;
        carry=0;

        while(a!=0 || b!=0){

            t1=a%10;
            t2=b%10;
            if(a==0)t1=0;
            if(b==0)t2=0;
            a=a/10;
            b=b/10;

            if(t1+t2+carry>9){
                count++;
                carry=1;
            }
            else carry=0;
        }
        if(count==0)printf("No carry operation.\n");
        else if(count==1)printf("1 carry operation.\n");
        else printf("%d carry operations.\n",count);
    }
    return 0;
}
