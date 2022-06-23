#include <iostream>
using namespace std;
int main(){
    char opsi;
    cout << "Pencari rumus matematika v1.0"<<endl;
    cout << "NOTE:Masukkan hurufnya saja! Misalnya:(a)"<<endl;
    cout << "a.Rumus luas segitiga"<<endl;
    cout << "b.Rumus keliling segitiga"<<endl;
    cout << "c.Rumus luas persegi"<<endl;
    cout << "d.Rumus keliling persegi"<<endl;
    cout << "e.Contact Us"<<endl;
    cout << "f.About Me"<<endl;
//Ambil inputan dr user
cout << "Masukkan pilihan kamu(a,b,c,d,e,f):";
cin >> opsi;
if(opsi=='A' || opsi=='a'){
    cout << "Rumus luas segitiga yaitu alas x tinggi :2"<<endl;
    cout << "contoh:"<<endl;
    cout << "Alas=30cm dan tinggi:12cm"<<endl;
    cout << "Luas=alas x tinggi : 2"<<endl;
    cout << "Luas=30 x 12 :2 "<< endl; 
    cout << "Luas=360 : 2" << endl;
    cout << "==Atau=="<<endl;
    cout << "Luas=15(30:2) x 12"<<endl;
    cout << "Luas=180 cm2"<<endl;
   
}
else if(opsi=='B' || opsi=='b'){
    cout << "Rumus keliling segitiga yaitu sisi(1)+sisi(2)+sisi(3)"<<endl;
    cout << "contoh="<<endl;
    cout << "sisi(1)=15 cm,sisi(2)=20cm,sisi(3)=25 cm"<<endl;
    cout << "Keliling=sisi(1)=15 cm,sisi(2)=20cm,sisi(3)=25 cm"<<endl;
    cout << "Keliling=15 + 20 + 25"<<endl;
    cout << "Keliling=35 + 25"<<endl;
    cout << "Keliling=60 cm";
}
else if(opsi=='C' || opsi=='c'){
    cout << "Rumus luas persegi/segi empat yaitu luas=sisi x sisi/(sisi pangkat 2)"<<endl;
    cout << "contoh:"<<endl;
    cout << "sisi=15 cm"<<endl;
    cout << "Luas=sisi x sisi"<<endl;
    cout << "Luas=15 x 15"<<endl;
    cout << "Luas=225 cm2";
}
else if(opsi=='D' || opsi=='d'){
    cout << "Rumus keliling persegi/segi empat yaitu keliling=4 x sisi"<<endl;
    cout << "contoh="<<endl;
    cout << "sisi=20 cm"<<endl;
    cout << "Keliling=4 x s"<<endl;
    cout << "Keliling=4 x 20"<<endl;
    cout << "Keliling=80 cm";
}
else if(opsi=='E' || opsi=='e')
{
    cout << "###########Contact:#########"<<endl;
	cout << "Instagram:https://www.instagram.com/andrafisha"<<endl;
	cout << "Email:projeksederhanadev@gmail.com"<<endl;
	cout << "Github:[coming soon]"<<endl;
	cout << "Netlify:[coming soon]"<<endl;
}

else if(opsi=='F' || opsi=='f'){
	cout << "==Disini tidak ada apa-apa yaa,mohon maaf==";
	
}
else{
    cout << "====Program finished===="<<endl;
    cout << "************************************************************************************"<<endl;
    cout << "*Terimakasih telah menggunakan produk kami,moga2 program ini bisa bermanfaat.Aamiin*"<<endl;
    cout << "************************************************************************************"<<endl;
}
cin.get();
return 0;
}