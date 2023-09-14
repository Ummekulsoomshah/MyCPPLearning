// #include<iostream>
// using namespace std;
// int main(){
//     int i=3;
//     cout<<"welcome";
//     try{
//         throw 10;
//         cout<<"in try";//wil not be printed bcz throw k bd kuch print nh hota
//     }
//     catch(double e){
//         cout<<"exception no:"<<e;
//     }
//     catch(int e){
//         cout<<"exception no"<<e;
//     }
//     cout<<"last line";

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=3;
//     cout<<"welcome";
//     try{
//         if(i==1)
//         throw 1;
//         if(i==2)
//         throw 2;
//         if(i=3)
//         throw 3;

//     }
//     catch(...){
//         cout<<"exception no";
//     }

// }

#include<iostream>
using namespace std;
void fun(){
    throw 10;
}
int main(){

    int i=3;
    cout<<"welcome";
    try{
        
        if(i=3)
        fun();
        throw 3;

    }
    catch(int e){
        cout<<"exception no"<<e;
    }

}