void bubbleSort( vector<int>& v ) {
    int n = v.size();
    for(int k = 0; k< n-1; k++) {
        int temp;
        for(int i = 0; i < n-k-1; i++) {
            if(v[ i ] > v[ i+1] ) {
                temp = v[ i ];
                v[ i ] = v[ i+1 ];
                v[ i + 1] = temp;
            }
        }
    }
}

int main() {
    vector<int> v = {13,46,24,52,20,9};
     bubbleSort(v);
    
    for (auto it:v){
        cout<<it<< " ";
    }

    return 0;
}
