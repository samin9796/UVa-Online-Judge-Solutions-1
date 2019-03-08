#include<stdio.h>
int main()
{
    int T,i,len;
    char ch[7];

    scanf("%d",&T);
    getchar();
    for(i=0;i<T;i++){
        gets(ch);
        len=strlen(ch);
        if(len==5)printf("3\n");
        else if((ch[0]=='t' && ch[1]=='w') || (ch[0]=='t' && ch[2]=='o') || (ch[1]=='w' && ch[2]=='o') ) printf("2\n");
        else printf("1\n");
    }
    return 0;
}
