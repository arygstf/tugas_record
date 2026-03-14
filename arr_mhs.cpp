#include <bits/stdc++.h>
#include <queue>
using namespace std;

struct Mahasiswa{
    string nrp, nama, prodi, departemen, fakultas;
    int semester;
};

struct list_todo{
    int priority;
    string str;
    
    bool operator < (const list_todo & other) const{
        if(priority != other.priority){
            return priority < other.priority;
        }
        return str < other.str;
    }
    
};

int main() {

    Mahasiswa m;

    cout << "Masukkan NRP: ";
    cin >> m.nrp;
    cin.ignore();

    cout << "Nama: ";
    getline(cin, m.nama);

    cout << "Program Studi: ";
    getline(cin, m.prodi);

    cout << "Fakultas: ";
    getline(cin, m.fakultas);

    cout << "Semester: ";
    cin >> m.semester;
    cout << "\n";

    cout << m.nrp << " | " << m.nama << " | " << m.prodi << " | " << m.fakultas << " | " << "Semester: " << m.semester << "\n";
    cout << "-----------------------------------------------------";
    cout << "\n";
    
    priority_queue<int> daftar;
    
    cout << "Tambah Tugas?" << "\n" << "T: Tambah Tugas" << "\n" << "N: Tidak" << "\n";
    char choice;
    cin >> choice;
    
    priority_queue<list_todo> list_pq;
    
    while (choice == 'T'){
        
        cout << "Tambah berapa tugas?\n";
        int n; cin >> n;
        
        for(int i = 0; i < n; i++){
            cout << "Masukkan nama tugas: ";
            string T;
            getline(cin >> ws, T);
            
            cout << "Berikan skala prioritas" << "\n" << "(Urutan dengan nilai tertinggi akan berada pada urutan teratas): ";
            
            int P;
            cin >> P;
            
            list_pq.push({P, T});     
        }
        
        cout << "Sekarang mau apa?\n" << "L: Tampilkan list tugas" << "\n" << "T: Tambahkan tugas" << "\n" << "D: Hapus urutan tugas teratas" << "\n" << "E: Exit" << "\n";
        cin >> choice;
        
        priority_queue<list_todo> pq_copy = list_pq;
        
        if(choice == 'L'){
            while(!pq_copy.empty()){
                cout << pq_copy.top().str << " | ";
                cout << pq_copy.top().priority;
                cout << "\n";
                pq_copy.pop();
            }
            cout << "Sekarang mau apa?\n" << "L: Tampilkan list tugas" << "\n" << "T: Tambahkan tugas" << "\n" << "D: Hapus urutan tugas teratas" << "\n" << "E: Exit" << "\n";
            cin >> choice;
        }
        
        if(choice == 'D'){
            list_pq.pop();
            cout << "Sekarang mau apa?\n" << "L: Tampilkan list tugas" << "\n" << "T: Tambahkan tugas" << "\n" << "D: Hapus urutan tugas teratas" << "\n" << "E: Exit" << "\n";
            cin >> choice;
        }
    }
    
    
    
    
    
    

    return 0;
}
