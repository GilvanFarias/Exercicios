#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int cont=0, num=0;
	
	cout<< " Digite um número ";
	cin>> num;
	
	while(num > cont ){
		
		num --;
		cout<< num<<"";
		
		
	}
}
