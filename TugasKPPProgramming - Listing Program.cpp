// NAMA     : RIGEL RAMADHANI WALONI
// NRP		: 5024221058
// JURUSAN	: TEKNIK KOMPUTER

#include <iostream>
#include <cmath>

using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int main()
{
	double elevasiXmax;
	int X_max,V0;
	float Vtan,V0_after,Vtan_after;
	
	elevasiXmax=SUDUT*2*3.14159/180;
	
	cin >> Vtan;
	if(Vtan>=1 && Vtan<=10)
	{
		V0=Vtan-1;
	}else if(Vtan>=11 && Vtan<=20)
	{
		V0=Vtan-3;
	}else if(Vtan>=21 && Vtan<=30)
	{
		V0=Vtan-5;
	}else
	{
		cout << "!! Batas input kecepatan tangensial hanya sampai 30 !!" << endl;
	}
	
	X_max=pow(V0,2)*sin(elevasiXmax);
	X_max=X_max/GRAVITASI;
	
	cout << X_max << " ";
	
	V0_after=sqrt(X_max*GRAVITASI/sin(elevasiXmax));
	
	if(Vtan>=1 && Vtan<=10)
	{
		Vtan_after=V0_after+1;
	}else if(Vtan>=11 && Vtan<=20)
	{
		Vtan_after=V0_after+3;
	}else if(Vtan>=21 && Vtan<=30)
	{
		Vtan_after=V0_after+5;
	}
	
	cout << Vtan_after;
}
