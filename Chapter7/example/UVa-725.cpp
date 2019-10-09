#include <cstdio>
#include <set>
using std::set;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<=9; i++){
        for(int j=0; j!=i&&j<=9;j++){
            for (int k=0; k!=i&&k!=j&&k<=9;k++){
                for (int l=0; l!=i&&l!=j&&l!=k&&l<=9; l++){
                    for (int m=0; m!=i&&m!=j&&m!=k&&m!=l&&m<=9;m++){
                        int div=i+10*j+100*k+1000*l+10000*m;
                        int sum=div*n;
                        if(sum>=100000) continue;
                        else{
                            set<int> a;
                            for(int b=4; b>=0; b--){
                                a.insert(sum/(10^b));
                                sum=sum-10^b*(sum/(10*b));
                            }
                            a.insert(m);
                            a.insert(l);
                            a.insert(k);
                            a.insert(j);
                            a.insert(i);
                            if(a.size()!=10) continue;
                            else{
                                for(int c=0;c<5;c++){
                                    scanf("a[c]");
                                }
                                scanf("/");
                                for(int c=5;c<10;c++){
                                    scanf("a[c]");
                                }
                                scanf("\n");
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}