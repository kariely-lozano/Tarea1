#include <iostream>

using namespace std;

int main ( int argc, char const ** argv[]) {
	
	int nota = 0 ;
	
	
	cout<< " Ingrese la nota  " <<endl;
	cin>>nota;
	
	if (nota > 100 || nota < 0 ) {
		cout<< " Ingrese una nota entre 0 - 100 " ;
		return 0;
	}

	if (nota >= 96 && nota <= 100 ) {
		cout << " Felicidades una A++ " ;
	}
	
    if (nota >= 91 && nota <= 95 ) {
		cout<< " Felicidades una A+ " ;
	}
	if (nota >= 86 && nota <= 90 ) {
		cout<< " Felicidades una A " ;
	}
	if (nota >= 81 && nota <= 85 ) {
		cout<< " Felicidades una A- " ;
	}
	if (nota >= 76 && nota <= 80 ) {
		cout<< " Muy bien una B+ " ;
	}
	if (nota >= 71 && nota <= 75 ) {
		cout<< " Muy bien una B " ;
	}
	if (nota >= 66 && nota <= 70 ) {
		cout<< " Muy bien una B- " ;
	}
	if (nota >= 56 && nota <= 65 ) {
		cout<< " Bien una C " ;
	}
	if (nota >= 51 && nota <= 55 ) {
		cout<< " Bien una C- " ;
	}
	if (nota >= 46 && nota <= 50 ) {
		cout<< " Tienes que mejorar, sacaste una D+ " ;
	}
	if (nota >= 41 && nota <= 45 ) {
		cout<< " Tienes que mejorar, sacaste una D " ;
	}
	if (nota >= 36 && nota <= 40 ) {
		cout<< " Tienes que mejorar, sacaste una D- " ;
	}
	if (nota >= 31 && nota <= 35 ) {
		cout<< " sacaste una E+ " ;
	}
	if (nota >= 26 && nota <= 30 ) {
		cout<< " sacaste una E " ;
	}
	if (nota >= 21 && nota <= 25 ) {
		cout<< " sacaste una E- " ;
	}
	if (nota >= 16 && nota <= 20 ) {
		cout<< " sacaste una F+ " ;
	}
	if (nota >= 11 && nota <= 15 ) {
		cout<< " sacaste una F " ;
	}
	if (nota >= 6 && nota <= 10 ) {
		cout<< " sacaste una F " ;
	}
	if (nota >= 1 && nota <= 5 ) {
		cout<< " sacaste una F- " ;
	}
	if (nota >= 0 && nota <= 0 ) {
		cout<< " sacaste una F-- " ;
	}
	return  0 ;
}
