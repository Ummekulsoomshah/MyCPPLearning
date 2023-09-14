// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
// ifstream obj;
// obj.open("myfile5.txt");

// // if(obj.is_open()){
// //     cout<<"success"<<endl;

// // }
// // else if(!obj.is_open()){
// //     cout<<"not success"<<endl;
// // }
// obj.close();
// }
#include<iostream>
#include<fstream>
using namespace std;
int main(){
try{
    ifstream obj;
obj.open("myfile5.txt");
if(!obj){
    throw runtime_error("file failed to open");
}
obj.close();
cerr<<"file opend and close";

}
catch (exception& e){
    cerr<<e.what()<<endl;
}




}