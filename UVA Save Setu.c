#include<stdio.h>
int main()
{
    long int T,i,count,sum=0;
    char ch;
    scanf("%d",&T);
    getchar();

    for(i=0;i<T;i++){
        ch=getchar();
        getchar();
        getchar();
        getchar();
        getchar();
        getchar();
        getchar();
        if(ch=='d'){
                scanf("%d",&count);
                sum+=count;
                getchar();
        }
        else printf("%d\n",sum);

    }
    return 0;
}
