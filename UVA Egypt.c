#include<stdio.h>
int main()
{
    int a,b,c,i,d[100000],p;
    i=0;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        if(a==0 && b==0 && c==0){
            i--;
            break;
        }
        if(a>=30000 && b>=30000 && c>=30000 && a<0 && b<0 && c<0){
            continue;
        }
        if(c*c==b*b+a*a || a*a==b*b+c*c || b*b==a*a+c*c){
            d[i]='r';
        }
        i++;
    }
    p=i;
    i=0;
    while(i<=p){
        if(d[i]=='r'){
                printf("right\n");
                }
                else{
                    printf("wrong\n");
                }
        i++;

    }
    return 0;
}
