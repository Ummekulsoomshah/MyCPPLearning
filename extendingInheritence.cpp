// #include<iostream>
// using namespace std;
// class person{
//     private:
//     string n;
//     int a;
//     string o;

//     public:
//     person(string n1,int a1,string o1){
//         n=n1;
//         a=a1;
//         o=o1;
//     }
//     string getname(){
//         return n;

//     }
//     int getage(){
//         return a;
        
//     }
//     string getstar(){
//         return o;
        
//     }

// };
// class superhero:public person
// {
//     public:
//     superhero(string n,int a,string o,string s):person(n,a,o){
//         secret_identity=s;
//     }
//     string getsecret(){
//         return secret_identity;
//     }
    
    
//     private:
//     string secret_identity;


// };
// int main(){
//     superhero kul("kulsoom",20,"aries","coder");
//     cout<<kul.getname()<<" is of age "<<kul.getage()<<" she has a unique star "<<kul.getstar()<<" and she is by profession "<<kul.getsecret();



// }
// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     string n;
//     public:
//     A(int a1,string n1){
//         a=a1;
//         n=n1;
//     }
//     void sayhello(){
//         cout<<"hello "<<n;
//     }
//     string getname(){
//         return n;
//     }



// };
// class B:public A{
//     public:
//     B(int a,string n):A(a,n){

//     }
//     void sayhello(){
//         cout<<"hello dear "<<getname();
//     }
// };
// int main(){
//     B b(20,"kulsoom");
//     b.sayhello();//override toh krdya function hm overridden or pichle func ko bh call krskte hn
//     b.A::sayhello();


//}
// #include<iostream>
// using namespace std;
// class line{
//     public:
//     line(int l){
//         length=l;
//     }
//     int getlength(){
//         return length;
//     }
//     void drawline(){
//         for(int i=0;i<length;i++){
//             cout<<"*";

//         }
//         cout<<endl;
//     }
//     private:
//     int length;
    
//     };
//     class box:public line{
//         public:
//         box(int l,int w):line(l){
//             width=w;

//         }
//         int getwidth(){
//             return width;
//         }
//         void drawbox(){
//             for(int i=0;i<width;i++){
//                 drawline();
//             }}
//         private:
//         int width;


//     };
//     int main(){
//         box box(8,4);
//         box.drawbox();
//     }