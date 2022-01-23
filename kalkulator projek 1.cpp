#include <iostream>
using namespace std;
//belajar c++
int main ()
{
	float a,b,hasil;
	char aritmatika;
	
	cout << "Selamat Datang diprgram kalkulator \n\n";
	
	cout << "Masukan Bilangan Pertama :";
	cin>> a;
	cout << "Masukan Oprasi Hitungan :";
	cin>> aritmatika;
	cout << "Masukan Bilangan Kedua :";
	cin>> b;
	
	cout <<"Hasil Dari"<<a<<aritmatika<<b<<"=";
	
	if (aritmatika == '+'){
		hasil=a+b;
	}else if (aritmatika == '-'){
		hasil=a-b;
	}else if (aritmatika == '*'){
		hasil=a*b;
	} else if (aritmatika == '/'){
		hasil=a/b;
	} else { cout << "Oprasi Hitung Anda Salah!!";
	} 	
	
	cout <<hasil<<endl;
	
	cin.get();
}
	