#include<stdio.h>
int main()
{
    int x,T,i,a,b,c,sum,y,z;

    scanf("%d",&T);
    i=0;
    while(i<T){
        scanf("%d%d%d",&a,&b,&c);
        z=a+b;
        sum=0;
        x=2;
        while(x!=0){
            x=z/c;
            y=z%c;
            sum=sum+x;
            z=x+y;
        }
        printf("%d\n",sum);

        i++;
    }
    return 0;
}
