#include<cstdio>
const int maxn=100000;
int B[maxn];

void print_subset(int n, int *B, int cur){
    if(cur==n+1){ 
        for(int i=1;i<=n;i++){
            if(B[i])    printf("%d",i);
        }
        printf("\n");
    }
    else{
        for(int i=0; i<=1;i++){
            B[cur]=i;
            print_subset(n, B, cur+1);
        }
    } 
}

int main(){
    int n;
    scanf("%d",&n);
    print_subset(n,B,1);
    return 0;
}