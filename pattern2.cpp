#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    for(int i=5;i>0;i--){
        int sp = 2*(n-i);
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        for(int j=0;j<sp;j++){
            cout<<' ';
        }
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=1;i<=5;i++){
        int sp = 2*(n-i);
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        for(int j=0;j<sp;j++){
            cout<<' ';
        }
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}

// output:
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


int main() {
    int n=5;
        for(int i=1;i<=n;i++){
        int sp = 2*(n-i);
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        for(int j=0;j<sp;j++){
            cout<<' ';
        }
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        int sp = 2*(n-i);
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        for(int j=0;j<sp;j++){
            cout<<' ';
        }
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        cout<<endl;
    }

}

// output
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

