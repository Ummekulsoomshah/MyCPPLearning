//function overloading means c++ will manage according to the requirment that which fuction is to be used

#include<iostream>
int sum(int x,int y){
    std::cout<<"hey";
    return x+y;

}
int sum(int x,int y,int z){
    std::cout<<"hello";
    return x+y+z;
    
}
int main(){
    int a=1,b=2,c=3;
    std::cout<<sum(a,b);//for 2 arguments hey function is used
    std::cout<<sum(a,b,c);//for 3 argumnts the hello function is used
}