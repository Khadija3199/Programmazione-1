lude<iostream>
#include<fstream>
using namespace std;

main(){
	int C[7][8],B[7][8],A[15],a,somma;
	ifstream in ("input.txt");
	for(int i=0; i<7; i++){
		for(int j=0; j<8; j++){
			in>>a;
			C[i][j]=a;
			cout << C[i][j] <<"\t";
		}
		cout << endl;
	}
	in.close();
	cout << endl;
	for(int i=0; i<7; i++){
		somma = 0;
		for(int j=0; j<8; j++){
			somma=somma+C[i][j]; // somma riga
		}
		A[i]=somma;
	}
	
	for(int i=0; i<8; i++){
		somma = 0;
		for(int j=0; j<7; j++){
			somma=somma+C[j][i]; // somma colonne
		}
		A[i+7]=somma;
	}

	for(int i=0; i<7; i++){
		for(int j=0; j<8; j++){
			B[i][j]=A[i]-A[j+7];
			cout << B[i][j] <<"\t";
		}
		cout << endl;
	}

}
    