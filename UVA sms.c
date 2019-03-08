#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,g,count,sum,space,h,t;
    char p[125],ch;
    scanf("%d",&T);
    ch=getchar();
    for(i=0;i<T;i++){
        gets(p);
        j=0;
        sum=0;
        space=0;
        while(p[j]!='\0'){
            t=toascii(p[j]);
            g=97;
            count=1;
            while(t!=g){
                if(t==32){
                    h=2;
                    space++;
                    break;
                }
                else{

                    count++;
                    g++;
                    if(count==4 && g!=115 && g!=122)count=1;

                    else if(count==5 && g==116 )count=1;

                }

            }
            if(h!=2){
                    sum+=count;

            }
             h=0;
            j++;
        }
        printf("Case #%d: %d\n",i+1,(sum+space));
    }
    return 0;
}
