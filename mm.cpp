#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream obj;
    obj.open("abc1.txt",ios::out|ios::app);
    obj<<"hey guys";
}