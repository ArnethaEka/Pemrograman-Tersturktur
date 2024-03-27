#include <iostream>
using namespace std;


class Mahasiswa{
	public:
		string nama, npm;
		
		void perkenalan(){
			cout<< "Nama: " << nama <<endl;
			cout<< "NPM: " << npm; 
		}
};

int main(){
	Mahasiswa Mhs;
	
	cin>> Mhs.nama;
	cin>> Mhs.npm;
	
	cout<< Mhs.nama <<" "<< Mhs.npm;
}
