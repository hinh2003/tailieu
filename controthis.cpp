#include <iostream>

using namespace std ;

class PhanSo{
    private :
    int Tuso , Mauso ;
public:
void RutGon();
void Nhap();
void Xuat();

};
// cách 1 con trỏ this : trỏ đến các thành phân hiện tại của class hiện tại
//trỏ đến đối tượng hiện tại

void PhanSo ::Nhap(){
    cout<<"Nhap tu so: ";
    //cin>>Tuso ;
    cin>> this->Tuso ;
    cout<<"Nhap mau so" ;
 //   cin>>Mauso ;
    cin>> this->Mauso ;

}
//cách 2 Chả về object(đối tượng) hiện tại
void PhanSo ::Xuat(){
    cout<<this->Tuso <<"/"<<this->Mauso ;
}
int main(){

  PhanSo ps ;
   ps.Nhap();
   ps.Xuat() ;
}