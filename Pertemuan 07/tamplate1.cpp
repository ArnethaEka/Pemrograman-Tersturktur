#include <iostream>
using namespace std;

int jumlah(int a, int b){
	return a+b;
}

double jumlah(double a, double b){
	return a+b;
}

tamplate <typename T>
T jumlah(T a, T b){
	return a+b;
}

int main(){
	int a=10, b=20;
	dpuble x= 2.5, y= 7.3;
	
	cout << jumlah(a,b) << endl;
	cout << jumlah(x,y) << endl;
}
