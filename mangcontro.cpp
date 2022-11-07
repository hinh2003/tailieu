#include<iostream>
#define MAX_SIZE 100

using namespace std ;
void nhapmang(int n , int *arr){
    for (int i = 0; i < n; i++)
    {
        cout<<"Phan tu arr["<<i<<"]="<<endl ;
        cin>> *(arr+i) ;
    }
}
void xuatmang(int n , int *arr){
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<endl ;
    }
}
int main(){
    int arr[MAX_SIZE] ;
    int n ;
    cin >>n ;
    nhapmang(n,arr);
    xuatmang(n,arr);

}