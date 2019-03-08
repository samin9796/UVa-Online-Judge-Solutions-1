#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,t,temp,r,i,count,p;
    double z;
    while(scanf("%d%d",&a,&b)!=EOF){
        t=a;
        count=0;
        for(;t<=b;t++){
            temp=t*t+t+41;
            if(temp%2==0 || temp%3==0 || temp%5==0){
            	count++;
            	continue;
            }

            r=sqrt(temp);
            for(i=2;i<=r;i++){
                if(temp%i==0){
                    count++;
                    break;
                }
            }
        }
        p=(b-a-count+1)*100;

        z=(double)p/((double)b-(double)a+1);
        printf("%.2lf\n",z);
    }
    return 0;
}
