#include<stdio.h>
int main()
{
    int T,a,b,i,n1,n2;

    while(scanf("%d",&T)!=EOF){
        if(T==0)break;

        scanf("%d%d",&a,&b);

        for(i=0;i<T;i++){
            scanf("%d%d",&n1,&n2);

            if(n1>a && n2>b)printf("NE\n");
            else if(n1>a && n2<b)printf("SE\n");
            else if(n1<a && n2>b)printf("NO\n");
            else if(n1<a && n2<b)printf("SO\n");
            else printf("divisa\n");
        }
    }
    return 0;
}
