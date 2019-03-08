#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,r,k,len,count,p;
    double sum,a,result,t;
    char ch[100];
    scanf("%d",&n);

    for(i=0;i<n;i++){
            sum=0;
        for(j=0;j<12;j++){
            scanf("%lf",&a);
            sum=sum+a;
        }
    result=sum/12.0;
    r=result*100.0;

    for(k=0;r!=0;k++){
        ch[k]=r%10;
        r=r/10;
    }
    for(p=0;p<=k-1;p++)printf("%c\n",ch[p]);
    len=strlen(ch);

        if(len%3==2){
                count=0;
            printf("%c%c,",ch[0],ch[1]);
            for(p=2;p<k-2;p++){
                if(count==3 && p!=k-3){
                    printf(",");
                    count=0;
                }
                printf("%c",ch[p]);
        count++;
            }
        }

    if(len%3==1){
                count=0;
            printf("%c,",ch[0]);
            for(p=1;p<k-2;p++){
                if(count==3 && p!=k-3){
                    printf(",");
                    count=0;
                }
                printf("%c",ch[p]);
        count++;
            }
        }

        if(len%3==0){
                count=0;
            for(p=0;p<k-2;p++){
                if(count==3 && p!=k-3){
                    printf(",");
                    count=0;
                }
                printf("%c",ch[p]);
        count++;
            }
        }
        printf(".%c%c\n",ch[k-2],ch[k-1]);

    }
    return 0;
}
