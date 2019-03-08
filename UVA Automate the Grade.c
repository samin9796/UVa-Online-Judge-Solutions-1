#include<stdio.h>
int main()
{
    int T,i,t1,t2,f,att,ct1,ct2,ct3,p;
    scanf("%d",&T);
    i=0;
    while(i<T){
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&att,&ct1,&ct2,&ct3);
        if((ct1>=ct2 && ct2>=ct3) || (ct2>=ct1 && ct1>=ct3)){

            p=t1+t2+f+att+((ct1+ct2)/2);
        }
        else if((ct1>=ct3 && ct3>=ct2) || (ct3>=ct1 && ct1>=ct2)){

            p=t1+t2+f+att+((ct1+ct3)/2);
        }
        else if((ct2>=ct3 && ct3>=ct1) || (ct3>=ct2 && ct2>=ct1)){

            p=t1+t2+f+att+((ct2+ct3)/2);
        }
        if(p>=90){printf("Case %d: A\n",i+1); }
        else if(p>=80){printf("Case %d: B\n",i+1); }
        else if(p>=70){printf("Case %d: C\n",i+1); }
        else if(p>=60){printf("Case %d: D\n",i+1); }
        else{printf("Case %d: F\n",i+1); }
        i++;
    }
    return 0;
}
