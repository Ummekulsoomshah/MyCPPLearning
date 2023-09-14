#include<iostream>
class A{
public:
void f1(){};
void f2(){};
void f3(){};
};
class B:public A{
    public:
    void f1(){ };//function overriding:same function in both parent and child with diff function def mtlb body change ho
    void f2(int x);//function hiding:same function name with diff argument in diff class
    void f2(int x,int y){};//function overloading:same function name with diff argument in same class

};
int main(){
B obj;
obj.f1();//class B wala
obj.f2();//error bcz obj B ka object h toh usko yh function mljaegg B me hi toh wo dkhga k aesa function ki requirement nh puri hoi mtlb argmnt nh dla a
obj.f3();//error nh dga 
obj.f2(5);
obj.f2(9,8);
}