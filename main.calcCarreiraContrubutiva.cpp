#include<iostream>
#include<cmath>
#include<iomanip>
#include<cctype>

using namespace std;







void tipoDesgasteProfissao(int tipoProfissao){

		if (tipoProfissao==1)
			cout << "profissao de desgaste rápido";
		else
	 		cout << "profissão de desgaste normal";
		
}
	

void calculoPenalizacao1 (int idade, int carreiraContributiva){
	int penalizacao1,soma;
	
	soma = idade + carreiraContributiva;
		if (soma == 90){
			penalizacao1= 0.60 * soma;
			cout<<penalizacao1;
		}	
}


void calculoPenalizacao2 (int idade, int carreiraContributiva){

	int penalizacao2, soma2;
 	soma2 = idade + carreiraContributiva;
		if (soma2 == 100) {
			penalizacao2= 0.60 * soma2;
			cout<< penalizacao2;
		}	
	}


int main(){

int tipoProfissao; //booleano
int idade, carreiraContributiva, calculoPenalizacao1, calculoPenalizacao2;
cout<<"Tipo de profissão considerada de desgaste rápido?"<<endl;
cin>>tipoProfissao;

cout<<"Digite sua idade atual"<<endl;
cin>>idade;

cout<<"Digite seu tempo de carreira contributiva atual"<<endl;
cin>>carreiraContributiva;

tipoDesgasteProfissao (tipoProfissao);


if (tipoProfissao==1){
	if (idade>55 && carreiraContributiva>30) {
		cout<<"pode reformar"<<endl;
		}
	if (idade>50 && carreiraContributiva>40) {
		cout<<"pode reformar"<<endl;
		}
	else {
		cout<<""<<calculoPenalizacao1<<endl;
		}		
	}



if (tipoProfissao==0){
	if (idade>66) {
		cout<<"pode reformar"<<endl;
		}
		if (idade>60 && carreiraContributiva>40) {
			cout<<"pode reformar"<<endl;
			}
	else{
		cout<<""<<calculoPenalizacao2<<endl;
		} 
}

		
	return 0;
}
