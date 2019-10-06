#include <stdio.h>
#include <map>
#include <queue>
#include <set>
#include <vector>

using std::map;
using std::queue;
using std::set;
using std::vector;
using std::priority_queue;
using std::greater;

typedef long long LL;
const int coeff[3]={2,3,5};

int main(){
    priority_queue<LL, vector<LL>, greater<LL> > pq;
    set<LL> s;
    pq.push(1);
    s.insert(1);
    for(int i=1; ; i++){
        LL x=pq.top(); pq.pop();
        if(i==1500){
            printf("the 1500th ugly number is %LL",x);
            break;
        }
        for (int j=0; j<3; j++){
            LL x2=x*coeff[j];
            if(s.count(x2)){
                s.insert(x2);
                pq.push(x2);
            }
        }
    }
    return 0;
}