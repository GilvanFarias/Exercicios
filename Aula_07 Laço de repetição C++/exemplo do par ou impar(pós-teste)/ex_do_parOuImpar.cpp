#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int num;
	
	cout << " Informe um número qualquer: " << "\n";
	cin >> num;
	
	do{
		
		if (num%2 == 0){
			
			cout << " Este número é par " "\n";
			
		}else{
		
			cout << "Este número é impar" "\n";
		
		}
		
		cout << " Informe um número qualquer ";
		cin >> num;
		
	}while (num!=-1);
	
	
	
}
