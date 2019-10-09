#include<cstdio>
const int maxn=100000;
int A[maxn];
void print_permutation(int n, int *A, int cur) 
    {
        if(cur==n){
            for (int i=0; i<n; i++) printf("%d", A[i]);
            printf("\n");
        }
        else for(int j=1;j<=n;j++){
            int ok=1;
            for(int i=0; i<cur; i++){
                if(A[i]==j) ok=0;
            }
            if(ok){
                A[cur]=j;
                print_permutation(n, A, cur+1);
            }
        }
    }
int main(){
    int n;
    scanf("%d",&n);
    print_permutation(n, A, 0);
    return 0;
}