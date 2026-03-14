#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int nilai[n];
    
    for(int i = 0; i < n; i++){
        cout << "Masukan ke - i : ";
        cin >> nilai[i];
    }
    
    for(int i : nilai){
        cout << i << " ";
    }
    
    
    
    
    return 0;
}