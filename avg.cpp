#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int nilai[n];
    
    for(int i = 0; i < n; i++){
        cin >> nilai[i];
    }
    
    int total = 0;
    float avg = 0;
    
    for(int i : nilai){
        total += i;
    }
    
    avg = (float)total / n;
    
    cout << "Total nilai:" << " " << total << "\n";
    cout << "Rata-rata:" << " " << avg << "\n";
    
    
    
    return 0;
}