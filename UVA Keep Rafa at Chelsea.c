#include<stdio.h>
int main()
{
    int T,i,m,count,j;
    char ch[530];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&m);
        getchar();
        if(m<3)printf("Case %d: Yay! Mighty Rafa persists!\n",i+1);
        else{
        	for(j=0;j<m;j++){
        	scanf("%c",&ch[j]);
        	getchar();
        	}
        count=0;
        for(j=0;j<m;j++){

            if(ch[j]== 'D' || ch[j]=='L'){
                count++;
            }
            else count=0;
            if(count==3)break;
        }
        if(count==3)printf("Case %d: %d\n",i+1,j+1);
        else if(j==m)printf("Case %d: Yay! Mighty Rafa persists!\n",i+1);
        }
    }
    return 0;
}
