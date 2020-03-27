#include <iostream>
using namespace std;

class Matriks {
	private:
	int m, n;
public :
	int** matriks;
	Matriks ( int baris , int kolom ) {
	m = baris;
	n = kolom;

	matriks = new int *[m];
	for( int i =0; i<m; i++)
	matriks[i] = new int [n];
	}
       
void Baca_Anggota ( ) {
cout <<"Masukkan Anggota Matriks "<<m<<"x"<<n<<" = "<<endl;
int Anggota =0;
  for( int r =0; r< m; r++)
  	for ( int k =0; k<n;k++) {
	cin >> Anggota;
    matriks [r][k] = Anggota;
	}
}
    
void Tulis_Anggota ( ) {
	for(int s=0; s<m; s++) {
		cout<<"["<<"\t";
		for ( int p=0; p<n ; p++)
    	cout<< matriks[s][p]<<"\t";
    	cout<< "]" << endl;
    	}
    	cout<<endl;
	}
};

int main() {
Matriks A(3,3), B(3,3), C(3,3), D(3,3), E(3,3); //Matriks mxn
cout <<" ===== Masukkan Elemen Matriks A dan B ===== "<<endl<<endl;
A.Baca_Anggota( );
B.Baca_Anggota( );

cout <<"      ===== Matriks A ===== \n";
A.Tulis_Anggota( );

cout <<"      ===== Matriks B ===== \n";
B.Tulis_Anggota( );

cout<<endl<<endl;

for ( int k=0; k<3; k++)
	for ( int p=0; p<3; p++) {
	C.matriks[k][p] = A.matriks[k][p] + B.matriks[k][p]; //PENJUMLAHAN
	D.matriks[k][p] = A.matriks[k][p] - B.matriks[k][p]; //PENGURANGAN
}

for(int i=0; i<3; i++)
	for (int j=0; j<3; j++) {
	E.matriks[i][j]=0;
  		for (int k=0 ; k<3 ; k++)
   		E.matriks[i][j] += A.matriks[i][k] * B.matriks[k][j]; //PERKALIAN
	}
	
	
cout<< "Matriks A + Matriks B = "<<endl<<endl;
cout << "      ===== Matriks C ====="<<endl;
C.Tulis_Anggota();
cout<<endl<<endl;

cout<< "Matriks A - Matriks B = "<<endl<<endl;
cout << "      ===== Matriks D ====="<<endl;
D.Tulis_Anggota();
cout<<endl<<endl;

cout<< "Matriks A * Matriks B = "<<endl<<endl;
cout << "      ===== Matriks E ====="<<endl;
E.Tulis_Anggota();
cout<<endl<<endl;

return 0;
}
