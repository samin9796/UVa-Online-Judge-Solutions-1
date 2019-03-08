#include<stdio.h>
#include<math.h>
int main()
{
    double d,z,a,b;
    int count,n=1;

    while(n<=201){
        scanf("%lf%lf",&a,&b);
        count=0;
        if(a==0 && b==0){break;}

        while(a!=b+1 && a<=b && b<=100000){
            d=pow(a,0.5);
            z=d-(int)d;

            if(z==0){
            count++;
            }


            a++;}

            printf("%d\n",count);
       n++;

    }
    return 0;
}
