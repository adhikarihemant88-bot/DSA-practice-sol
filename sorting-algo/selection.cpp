#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& v){
    int n = v.size();
    for(int i =0 ;i<n-1;i++) {
        int in = i;
        for(int j =i;j<n;j++){
            if(v[in]>v[j]){
                in = j;
            }
        }
        if(i!=in){
            swap(v[i],v[in]);
        }
    }
}

int main() {
    vector<int> v = {13,46,24,52,20,9};
     selectionSort(v);
    
    for (auto it:v){
        cout<<it<< " ";
    }

    return 0;
}
