#include <iostream>
using namespace std;

class hewan {
    private:
    string jenisKelamin;
    public:
    string tipe;
    string umur;

    void inputData() {
        cout << "masukkan jenis kelamin" << endl;
        cin >> jenisKelamin;
        cout << "masukkan tipe = " << endl;
        cin >> tipe;
        cout << "masukkan umur = " << endl;
        cin >> umur;
    }
    void tampilHewan(){
        cout << "jenis kelaminnya adalah " << jenisKelamin << endl;
        
    }
};

int main() {
    hewan Bibo;
    Bibo.inputData();
    cout << "umurnya adalah " << Bibo.umur << endl;
    cout << "tipenya adalah " << Bibo.tipe << endl;
    Bibo.tampilHewan();

}