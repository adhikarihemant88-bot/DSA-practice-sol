#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int bottom = 2 * n - i;
            int right = 2 * n - j;

            cout <<n - min({top, left, bottom, right}) + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}


// output
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 
