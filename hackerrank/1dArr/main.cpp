#include <iostream>
#include <stdio.h>

using namespace std;
bool win(int n, int m, int *arr);

int main () {
    
   freopen("1dArr.in", "r", stdin);
   freopen("1dArr.out", "w", stdout);
    
    int tc = 0;
    cin >> tc;
    int c = 1;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        
        int arr[n];

        
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        // cout << "TC : " << c << endl;
        // cout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            // cout << arr[i] << " "; 
        }
        // cout << endl;
        bool res = win(n, m, arr);

        if(res){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
        c++;
    } 
    
    return 0;
}

bool win(int n, int m, int *arr) {
        
}