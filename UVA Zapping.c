#include<stdio.h>
int main()
{
    int a,b,t1,t2;

    while(scanf("%d%d",&a,&b)!=EOF){

        if(a==-1 && b==-1)break;

       if(b>a)t1=b-a;
       else t1=a-b;

        if(a<b)t2=((a+100)-b);
        else t2=((b+100)-a);

        if(t1<t2)printf("%d\n",t1);
        else printf("%d\n",t2);
    }
    return 0;
}
