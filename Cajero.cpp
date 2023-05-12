#include <iostream>
using namespace std;

void bill200(int&, int&, int&);
void bill100(int&, int&, int&);
void bill50(int&, int&, int&);

int main (){
	int sa=0, re=0, si=0, tb50=100, tb100=100, tb200=100, b50=50, b100=100, b200=200, a=0, b=0, c=0;
	for (int i=0; i<100; i++){
		si=si+b50+b100+b200;
	}
	cout << "El saldo inicial es: " << si;
	sa=si;
	while(sa!=0){
		cout << "\nIntroduce la cantidad a retirar: ";
		cin >> re;
		if(re>sa){
			cout << "\nEl cajero no tiene suficientes fondos para el retiro, el fondo disponible es: ";
		}
		if(re%50==0 && re<=4000 && re<=sa){
			sa=sa-re;
			do{
				bill200(re,tb200,a);
				bill100(re,tb100,b);
				bill50(re,tb50,c);
				if(a>=1){
					cout << "La cantidad de billetes de 200 recibida es: " << a << "\n";
					a=0;
				}
				if(b>=1){
					cout << "La cantidad de billetes de 100 recibida es: " << b << "\n";
					b=0;
				}
				if(c>=1){
					cout << "La cantidad de billetes de 50 recibida es: " << c << "\n";
					c=0;
				}
			}while(re!=0);
		}
		cout << sa << "\n";
	}
}

void bill200(int& re, int& tb200, int& a){
	while(re!=0 && tb200!=0){
		if(re>=200){
			tb200--;
			re=re-200;
			a++;
		}
		if(re<200){
			break;
		}
	}	
}

void bill100(int& re, int& tb100, int& b){
	while(re!=0 && tb100!=0){
		if(re>=100){
			tb100--;
			re=re-100;
			b++;
		}
		if(re<100){
			break;
		}
	}	
}

void bill50(int& re, int& tb50, int& c){
	while(re!=0 && tb50!=0){
		if(re>=50){
			tb50--;
			re=re-50;
			c++;
		}
	}	
}
