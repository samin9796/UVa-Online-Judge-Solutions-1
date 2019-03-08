#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int T,m,len,integer,k,i,j;
    char ch[10020],ara[105][105];
    float floa_t,check;

    scanf("%d",&T);
    getchar();

    for(m=0;m<T;m++){
        gets(ch);
        len=strlen(ch);
        floa_t=sqrt(len);
        integer=floa_t;
        check=floa_t-integer;
        if(check!=0)printf("INVALID");
        else{
                k=0;
            for(i=0;i<integer;i++){
                for(j=0;j<integer;j++){
                      ara[i][j]=ch[k];
                k++;
                }
            }
        for(j=0;j<integer;j++){
            for(i=0;i<integer;i++){
                printf("%c",ara[i][j]);
            }
        }
        }
        printf("\n");
    }
    return 0;
}
