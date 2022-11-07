/*
Dinh nghia lop sinh vien gom 2 thanh phan :
-privare : namSinh , HoTen
Phuong Thuc(public):
       nhap();
       in();
       kiemtra(SINHVIEN b) de kiem tra xem sinh vien a co lon hon sinh vien b khong ;
*/

#include<iostream>



using namespace std ;

class SINHVIEN
{
private:
	
    string HoTen ;
    int NamSinh ;


public:
	int n ;
	
	SINHVIEN *a ;
    void nhap();
    void in();
    void nhapN();
    void inN();
   
};

void SINHVIEN::nhap()
{
    
    cin.ignore(1);
    cout<<"Nhap ten sinh Vien"<<endl ;
    getline(cin,HoTen);
    fflush(stdin);

	cout<<"Nhap Nam Sinh"<<endl ;
    cin>>this->NamSinh ; fflush(stdin);
    
    
}
void SINHVIEN ::in(){
    cout<<"Sinh Vien  :" <<this->HoTen<<endl ;
    cout<<"Nam Sinh :" <<this->NamSinh<<endl;
}
void SINHVIEN ::nhapN(){
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap sinh vien thu  "<<(i+1)<<endl;
      a[i].nhap();
    }
    
}
void SINHVIEN ::inN(){
    for (int i = 0; i < n; i++)
	{
	cout<<"Sinh vien thu "<<(i+1)<<endl ;
   a[i].in();
}    
}

int main(){
	SINHVIEN sv ;
	int n ;
    SINHVIEN *a;
	do{
		cout<<"Nhap so luong sinh vien : " ;
		cin>>n ;
	}while(n< 0 || n>100);
    sv.nhapN(n,a);
    sv.inN(n,a);
    


   
   
}


