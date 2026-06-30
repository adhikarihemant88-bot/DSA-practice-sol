#include <bits/stdc++.h>
using namespace std;
int main() {
    int n =4;
    for(int i=1;i<=n;i++){
        int val = i;
        int sp = 2*(n-val);
        for (int j=1;j<=i;j++) {
            cout<<j;
            val =j;
        }
        for(int j=0;j<sp;j++){
            cout<<' ';
        }
        while(val) {
            cout<<val;
            val--;
        }
        cout<<endl;
    }
}

// output:
// 1      1
// 12    21
// 123  321
// 12344321
