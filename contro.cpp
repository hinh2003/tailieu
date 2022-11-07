#include<iostream>

using namespace std ;

int main(){
    int x = 10 ;
    cout <<x<<endl ; //in gtri x
    cout <<&x<<endl ; // in dia chi x   
    cout << *&x<<endl ; //in gia tri tai dia chi x
   *&x = 20 ;
    cout << *&x<<endl ; //
    cout << x<<endl ; 
    int *iPrt = &x ; // khai bao con tro iPrt bang dia chi bien x 
    cout<< *iPrt<<endl ;
    cout<< iPrt<<endl ;
    *iPrt = 100 ;
    cout<< x ;



}