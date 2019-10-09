#include<cstdio>
int total;
const int maxn=100000+50;
int C[maxn];

void search(int cur){
    if(cur==10) {
        total++;
        for(int i=0;i<10;i++){
            printf("%d",C[i]);
        }
        printf("\n");
    }
    else{
        for(int i=0;i<10;i++){
            C[cur]=i;
            int ok=1;
            for(int j=0;j<cur;j++){
                if(C[cur]==C[j]||C[cur]-C[j]==cur-j||C[cur]-C[j]==j-cur){
                    ok=0;break;
                }
            }
            if(ok)  search(cur+1);
        }
    } 
}

int main(){
    
    search(0);
    printf("%d\n",total);
    return 0;
}