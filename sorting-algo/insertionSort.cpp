void insertionSort (vector<int>& v) 
{
    int n = v.size();
    for( int i = 0 ;i < n ; i++ ) {
        int temp = v[i];    
        int j = i;
        while(  j > 0  && temp < v[ j -1]) {
            v[ j ] = v[ j-1];   
            j= j - 1;
        }
        v[ j ] = temp;       
    }  
}

int main() {
    vector<int> v = {13,46,24,52,20,9};
     insertionSort(v);
    
    for (auto it:v){
        cout<<it<< " ";
    }

    return 0;
}
