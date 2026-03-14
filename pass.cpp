#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int nilai[n];
    for(int i = 0; i < n; i++){
        cout << "Masukkan nilai ke-i+1: ";
        cin >> nilai[i];
    }
    
    cout << "Status kelulusan" << "\n";
    
    for(int i = 0; i < n; i++){
        
        if(nilai[i] > 70) cout << "Mahasiswa ke " << i+1 << " dinyatakan lulus" << endl;
        else cout << "Mahasiswa ke " << i+1 << " dinyatakan tidak lulus" << endl;
        
    }
    
    
    return 0;
}