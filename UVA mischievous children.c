#include<stdio.h>
#include<string.h>
int main()
{
    long long int len,r,i,k,j,count,t,res,T,v;
    char ch[1000];

    scanf("%lld",&T);
    getchar();

    for(v=0;v<T;v++){
    gets(ch);

        len=strlen(ch);
        r=1;
        for(i=len;i>=2;i--){
          r=r*i;
        }
        res=r;
        for(i=0;i<len-1;i++){
                count=1;
            for(j=i+1;j<len;j++){
                if(ch[i]==ch[j] && ch[j]!=48){
                    count++;
                    ch[j]=48;
                }
            }
            if(count>1){
                    t=1;
                for(k=count;k>=2;k--){
                   t*=k;
                }
            res=res/t;
            }

        }
        printf("Data set %lld: %lld\n",v+1,res);
    }
    return 0;
}
