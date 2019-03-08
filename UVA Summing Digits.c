#include<stdio.h>
int main()
{
    long long i=0,j=0,n,sum,z,p[100000];

    char s;

    while(scanf("%lld",&n)!=EOF){
       if(n==0){break;}
        sum=0;
        j++;
        while(1){
           if(s=='t' && sum>9){
           n=sum;
           sum=0; }
           else if(s=='t' && sum<10){break;}

        while(n!=0){
            z=n%10;
            sum=sum+z;
            n=n/10;
            s='t';
        }
        }
        p[i]=sum;
        s='\0';
        i++;
    }
    i=0;
    while(i<j){
        printf("%lld\n",p[i]);
        i++;
    }
    return 0;
}
