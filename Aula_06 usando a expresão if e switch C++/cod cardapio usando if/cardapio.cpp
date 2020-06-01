#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	float cod, quanItem, pedidoConcluido;
	
	cout << "********************CARDAPIO**************************" << endl;
	cout << "Digite o código para escolher um item do CARDÁPIO " << endl;
	cout << " 100 - Hambúrguer - R$ 5,50" << endl;
	cout << " 101 - Cachorro-Quente - R$ 4,50" << endl;
	cout << " 102 - Milkshake - R$ 5,50" << endl;
	cout << " 103 - Pizza brotinho - R$ 5,50" << endl;
	cout << " 104 - Cheeseburguer - R$ 5,50" << endl;
	cout << "*******************************************************" << endl;
	
	cout << " Digite o código do seu item " << endl;
	cin >> cod;
	
	if ( cod == 100){
		
		cout << " Quantos Hambúguer você deseja?  " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 5.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}else if( cod == 101){
		
		cout << " Quantos Cachorro-Quente você deseja? " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 4.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}if ( cod == 102){
		
		cout << " Quantos Milkshake você deseja? " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 5.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}else if ( cod == 103){
		
		cout << " Quantos Pizza brotinho você deseja? " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 5.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}else if ( cod == 104){
		
		cout << " Quantos Cheeseburguer você deseja? " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 5.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}
	
	
	
}
