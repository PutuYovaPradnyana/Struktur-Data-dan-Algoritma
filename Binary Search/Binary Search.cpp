#include <iostream>
using namespace std;
int main()
{
	int nilai [10]={1,2,3,4,5,6,7,8,9,10};
	for (int z=0; z<10; z++){
		cout<<nilai[z]<<" ";
	}
	int cari;
	cout <<"\nMasukan nilai yang anda cari : ";
	cin>>cari;
	int awal,tengah,akhir,indikator=0;
	awal=0; akhir=10-1;
	while(indikator==0 && awal<=akhir){
		tengah=(awal+akhir)/2;
		if(nilai[tengah]==cari){
			indikator=1;
			break;
		}
		else if(nilai[tengah]<cari){
			awal=tengah+1;
		}
		else {
			akhir=tengah-1;
		}
	}
	if(indikator==1){
		cout <<"\nNilai yang ditemukan pada index ke : " <<tengah<<endl;
	}
	else {
		cout <<"\ndata tidak ditemukan";
	}
}
