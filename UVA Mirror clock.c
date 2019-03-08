#include<stdio.h>
int main()
{
    int T,i,h,m;
    char ch;

    scanf("%d",&T);
    i=0;
    while(i<T){
        scanf("%d%c%d",&h,&ch,&m);
        if(m==0){
                if(h==12){printf("12:00\n");}
                else if(h<=2){printf("%d:00\n",(12-h));}
                else {printf("0%d:00\n",(12-h));}
                }

        else if(h==11){
                if(60-m<10){printf("%d:0%d\n",12,(60-m));}
            else{printf("%d:%d\n",12,(60-m));}
        }
        else if(h==12){
                if(60-m<10){printf("%d:0%d\n",11,(60-m));}
            else{printf("%d:%d\n",11,(60-m));}
        }
        else if(h==1){if(60-m<10){printf("%d:0%d\n",10,(60-m));}
                else{printf("%d:%d\n",10,(60-m));}}
        else{
                if(60-m<10){printf("0%d:0%d\n",(11-h),(60-m));}
                else{printf("0%d:%d\n",(11-h),(60-m));}
        }
        i++;
    }
    return 0;
}
