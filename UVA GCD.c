#include<stdio.h>
int main()
{
    int n,g,i,j,k,gcda;

    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        g=0;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){

           gcda=gcd(i,j);

         g+=gcda;
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
int gcd(long a,long b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
