#include <stdio.h>
#include<cstdio>
#include <conio.h>
#include <stdlib.h>
#define MAX_SIZE 50

struct SINHVIEN
{
    int namsinh ;
    char hoten[20] ;
};
typedef SINHVIEN SV;
void nhapsinhvien(SV &sv){
    printf("\nNhap ten :") ; fflush(stdin); gets(sv.hoten) ; 
    printf("\nNhap nam sinh : ");scanf("%d", &sv.namsinh);
}
void nhapsinhvienN(SV a[], int n){
    for(int i = 0 ; i < n; i++){
        printf("\nNhap SV thu %d:", i+1);
        nhapsinhvien(a[i]);fflush(stdin);
    }
}
void xuat(SV sv){
     printf("\nHo ten SV: %s", sv.hoten);
    printf("\nnamsinh: %s", sv.namsinh);
    fflush(stdin);
    
}
void xuatN(SV a[], int n){
    
    for(int i = 0;i < n;i++){
        printf("\nThong tin SV thu %d:", i++);
        xuat(a[i]);
        fflush(stdin);
    }
   
}

 


int main(){
    int n ;
    do{
        printf("Nhap so luong sinh vien \n");
        scanf("%d" ,&n);
    }while(n > 50 || n < 0);
    SV a[n] ;
    nhapsinhvienN(a,n);
    xuatN(a,n);
   
    
 
    getch();
    

    


}