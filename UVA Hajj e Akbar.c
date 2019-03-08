#include<stdio.h>
int main()
{
    int i;
    char ch[10];

    i=0;
    while(scanf("%s",&ch)!=EOF){
        if(ch[0]=='*')break;
        else if(ch[0]=='H')printf("Case %d: Hajj-e-Akbar\n",i+1);
        else printf("Case %d: Hajj-e-Asghar\n",i+1);
        i++;
    }
    return 0;
}
