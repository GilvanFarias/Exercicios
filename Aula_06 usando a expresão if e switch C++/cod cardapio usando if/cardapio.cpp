#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	float cod, quanItem, pedidoConcluido;
	
	cout << "********************CARDAPIO**************************" << endl;
	cout << "Digite o c�digo para escolher um item do CARD�PIO " << endl;
	cout << " 100 - Hamb�rguer - R$ 5,50" << endl;
	cout << " 101 - Cachorro-Quente - R$ 4,50" << endl;
	cout << " 102 - Milkshake - R$ 5,50" << endl;
	cout << " 103 - Pizza brotinho - R$ 5,50" << endl;
	cout << " 104 - Cheeseburguer - R$ 5,50" << endl;
	cout << "*******************************************************" << endl;
	
	cout << " Digite o c�digo do seu item " << endl;
	cin >> cod;
	
	if ( cod == 100){
		
		cout << " Quantos Hamb�guer voc� deseja?  " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 5.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}else if( cod == 101){
		
		cout << " Quantos Cachorro-Quente voc� deseja? " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 4.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}if ( cod == 102){
		
		cout << " Quantos Milkshake voc� deseja? " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 5.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}else if ( cod == 103){
		
		cout << " Quantos Pizza brotinho voc� deseja? " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 5.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}else if ( cod == 104){
		
		cout << " Quantos Cheeseburguer voc� deseja? " << endl;
		cin >> quanItem;
		
		pedidoConcluido = quanItem * 5.50;
		
		cout << " Total a pagar:R$ " << pedidoConcluido;
		
	}
	
	
	
}
