#include<stdio.h>
int main()
{
    int a[20],b[20],t,i;

    scanf("%d",&t);
    i=0;

    while(i<t && t<15){
    scanf("%d%d",&a[i],&b[i]);
 if(a[i]<-1000000001 || a[i]>1000000001 || b[i]<-1000000001 || b[i]>1000000001){
        continue;
    }
    i++;
    }

    i=0;
    while(i<t && t<15){
        if(a[i]>b[i]){
            printf(">\n");
        }
        else if(a[i]<b[i]){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
        i++;
    }
    return 0;
}
