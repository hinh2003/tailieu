/*
Dinh nghia lop sinh vien gom 2 thanh phan :
-privare : namSinh , HoTen
Phuong Thuc(public):
       nhap();
       in();
       kiemtra(SINHVIEN b) de kiem tra xem sinh vien a co lon hon sinh vien b khong ;
*/

#include<bits/stdc++.h>
using namespace std ;

class SINHVIEN{
    private:
    string HoTen;
    int NamSinh ;
    public :
    void nhap();
    void in();
    void nhapN(int n , SINHVIEN *a);
    void inN(int n , SINHVIEN *a) ;
    void xapsep(int n , SINHVIEN *a);
    

};

void SINHVIEN::nhap(){
    cout<<"Nhap ho ten " ; getline(cin,this->HoTen);
    cout<<"Nhap nam sinh " ;cin>>this->NamSinh ;
    cin.ignore();
}
void SINHVIEN::in(){
    cout<<"Sinh vien Ten "<<this->HoTen<<endl  ;
    cout<<"Nam sinh "<<this->NamSinh<<endl  ;
}
void SINHVIEN::nhapN(int n , SINHVIEN *a){
    for(int i = 0 ; i < n ; i++){
        cout<<"Sinh vien thu "<<i+1<<endl ;
        a[i].nhap();
    }
}
void SINHVIEN::inN(int n , SINHVIEN *a){
    for(int i = 0 ; i < n ; i++){
        cout<<"Thong tin sinh vien thu "<<i+1<<endl ;
        a[i].in();
    }
}
void SINHVIEN::xapsep(int n , SINHVIEN *a){
    SINHVIEN temp;
    for(int i = 0 ; i <n ;i ++){
        for(int j = i+1 ; j <n ; j++){
            if( a[i].NamSinh > a[j].NamSinh){
                temp = a[i] ;
                a[i] = a[j] ;
                a[j] = temp ;
                
            }
            
        }
    }
}


int main(){
    SINHVIEN sv ;
    int n;
    do{
        cout<<"Nhap so luong hoc sinh " ;
        cin>>n;
    } while(n<0||n>100);
    SINHVIEN a[n];
    cin.ignore();
    sv.nhapN(n,a);
    sv.xapsep(n,a);
    sv.inN(n,a);

}