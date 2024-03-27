#include <iostream>
using namespace std;

Template <class T>

class PerhitunganKabisat {
	private:
		T* tahun;
		
	public:
		PerhitunganKabisat(T* tahun) : tahun(tahun){
		}
}; 


		T* getTahun() const{
			retun tahun;
			
			}
			
			void setTahun(T* Tahun){
				this->tahun = tahun;
			}
			
			
bool HitungKabisat() const{
	if(*tahun % 4 == 0){
		if (*tahun % 100 == 0){
			if (*tahun % 400 == 0){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return true;
		}
    }
    else{
    	return false;
	}
}

int main(){
	int tahun;
	cout << "Masukkan Tahun : ";
	cin >> tahun;
	
	if (Kabisat.HitungKabisat()){
		cout << *Kabisat.getTahun() << " adalah tahun kabisat" << endl;
	}
	else {
		cout << *Kabisat.getTahun()<< " bukan tahun kabisat" << endl;
	}
	
	return 0;
}

