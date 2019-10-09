#include<cstdio>
#include<algorithm>
using std::next_permutation;
using std::sort;

int main(){
    int n;
    scanf("%d",&n);
    int p[10];
    for(int i=0; i<n; i++) scanf("%d",&p[i]);
    sort(p,p+n);
    do{
        for(int i=0;i<n;i++) printf("%d",p[i]);
        printf("\n");
    }while(next_permutation(p,p+n));
    return 0;
}