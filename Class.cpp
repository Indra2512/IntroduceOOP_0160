#include <iostream>
using namespace std;

class lingkaran
{
    public:
    double jarijari;
    double luasLingkaran;

    void inputData(){
        cout << "masukkan jari-jari " << endl;
        cin >> jarijari;
        
    }
        double hitungLuas(){
            return 3.14*jarijari*jarijari;
        }
};
int main(){
    lingkaran bundar;
    bundar.inputData();
    cout << endl;
    cout << "luasnya adalah = " << bundar.hitungLuas() << endl;
    cout << endl;
}