#include<stdio.h>
int main()
{
    int n,p,j,count,i,ara[100000],x,m,z,k,right[100000],good[100000],q[100000],t,l;
    char u,s;

    while(scanf("%d",&n)!=EOF){
        p=n;
        j=0;
        count=0;
        while(p!=1){
            for(i=2;i<p;i++){
                if(p%i==0){
                    count++;
                    break;
                }
            }
            if(count==0){
                ara[j]=p;
                j++;
            }
            p--;
            count=0;
        }
        x=4;
        m=j;
        z=j;
        k=0;
        while(x<=n-4){
            j=m;
            u='v';
            z=j;

            while(x>ara[j-1] && j!=0 && u!='w'){
            while(z!=0 && ara[z-1]<x){
                if(ara[j-1]+ara[z-1]==x){
                        u='w';
                    right[k]=ara[j-1];
                    good[k]=ara[z-1];

                    q[k]=x;
                    k++;
                    break;
                }
                z--;

            }
            j--;
            z=m;
            }
            u='v';
            x++;
        }
        t=k-1;
        k=0;
        l=0;
        s='v';

        while(k<=t && s!='w'){
                l=0;
            while(l<=t){
                if(q[k]+q[l]==n){
                    s='w';
                    break;
                }
                l++;

            }
            k++;

        }

        if(right[k-1]+good[k-1]+right[l]+good[l]==n)printf("%d %d %d %d\n",right[k-1],good[k-1],right[l],good[l]);
        else printf("Impossible.\n");
    }
    return 0;
}
