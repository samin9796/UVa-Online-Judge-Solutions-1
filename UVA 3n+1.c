#include<stdio.h>
int main()
{
    int i,j,n,count,t=0,z,p[1000],s[1000],x=0;
    char ch=' ';

    while(1){
        scanf("%d%d",&i,&j);
        s[x]=i;
        if(i>j){
            i=j;
            j=s[x];
            s[x]=i;
        }

        while(i<=j){
            n=i;

            count=1;
            while(1){
                if(n%2==0){
                    n=n/2;
                    count++;
                    if(n==1){
                        p[t]=count;
                        break;

                    }
                }
                else if(n%2==1){
                    if(n!=1){
                            n=(3*n)+1;

                    count++;
                    }
                    if(n==1){
                        p[t]=count;
                        break;

                    }
                }
            }
            i++;
            t++;
        }

        if(i>j){
                z=p[0];
        t=1;
            while(t>0 && t<=(j-s[x]+1)){
                if(z<p[t]){
                    z=p[t];
                }



                t++;
            }
            printf("%d%c%d%c%d\n",s[x],ch,j,ch,z);

        }
    x++;
    }
    return 0;
}
