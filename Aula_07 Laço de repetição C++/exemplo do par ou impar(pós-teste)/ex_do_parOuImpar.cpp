#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int num;
	
	cout << " Informe um n�mero qualquer: " << "\n";
	cin >> num;
	
	do{
		
		if (num%2 == 0){
			
			cout << " Este n�mero � par " "\n";
			
		}else{
		
			cout << "Este n�mero � impar" "\n";
		
		}
		
		cout << " Informe um n�mero qualquer ";
		cin >> num;
		
	}while (num!=-1);
	
	
	
}
