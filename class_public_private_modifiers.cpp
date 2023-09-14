// #include<iostream>
// class student{
//     public:
//     int id;
//     int no;
//     std::string section;

//     void print(){
//         std::cout<<id<<no<<section<<std::endl;
//     }
// };
// int main(){
//     student ravi{23,4,"b"};
//     ravi.section="c";
//     ravi.print();
// }
// #include<iostream>
// class Employee{
//     public:
//     std::string name;
//     int salary;
//     char dept;

//     void print(){
//         std::cout<<name<<"having salry of about"<<salary<<".will get the promotion in department named"<<dept;
//     }

// };
// int main(){
//     Employee kulsoom{"umme kulsoom",100000000,'s'};
//     Employee momo{"mumtaz",10000000,'p'};//declaring two variables

//     kulsoom.print();
//     momo.print();

// }
// #include<iostream>
// class Intpair{
//     public:
//     int f1;
//     int f2;
//     void set(int first,int second){
//         f1=first;
//         f2=second;
//     }
//     void print(){
//         std::cout<<"pair("<<f1<<","<<f2<<")"<<std::endl;
//     }
// };
//     int main(){
//         Intpair p1;
//         p1.set(1,1);
//         Intpair p2;
//         p2.set(2,2);
//         p1.print();
//         p2.print();
//     }

// #include<iostream>
// class Employee
// {
//     private:
//         int a,b,c;
//     public:
//         int d,e;
//         void setdata(int a1,int b1,int c1);
//         void getdata(){
//             std::cout<<"the value of a is "<<a<<std::endl;
//             std::cout<<"the value of b is "<<b<<std::endl;
//             std::cout<<"the value of c is "<<c<<std::endl;
//             std::cout<<"the value of d is "<<d<<std::endl;
//             std::cout<<"the value of e is "<<e<<std::endl;

//         }

// };
// void Employee :: setdata(int a1,int b1,int c1){//::=scope resoution operator
//     a=a1;
//     b=b1;
//     c=c1;

// }
// int main(){
//     Employee kulsoom;
//     kulsoom.d=5;
//     kulsoom.e=6;
//     kulsoom.setdata(2,3,4);
//     kulsoom.getdata();
// }

#include<iostream>
class Hero{
    private:
    int health;
    char level;
    public:


    void print(){
        std::cout<<health<<std::endl;
    }
    // int gethealth(){
    //     return health;
    // }
    // char getlevel(){
    //     return level;
    // }
    void sethealth(int h){
        health=h;
    }
    // void setlevel(char l){
    //     level=l;
    // }

};
int main(){
    Hero kulsoom;
    kulsoom.sethealth(8);
    // kulsoom.health=80;
    // kulsoom.level='o';
    std::cout<<"health is"<<kulsoom.print()<<std::endl;
    // std::cout<<"level is"<<kulsoom.getlevel()<<std::endl;
}

// #include<iostream>
// class alphabates{
//     private:
//     int a,b,c,d,e;
//     public:
//     void setdata(int a1,int a2,int a3,int a4,int a5){
//     a=a1;
//     b=a2;
//     c=a3;
//     d=a4;
//     e=a5;

//     }
//     void print(){
//         std::cout<<"the value of a is "<<a<<std::endl;
//         std::cout<<"the value of b is "<<b<<std::endl;
//         std::cout<<"the value of c is "<<c<<std::endl;
//         std::cout<<"the value of d is "<<d<<std::endl;
//         std::cout<<"the value of e is "<<e<<std::endl;

//     }
// };
// int main(){
//     alphabates dod;
//         dod.setdata(2,3,4,5,6);
//         dod.print();

// }

// #include<iostream>
// class Point3d{
//     int m_x,m_y,m_z;
//     public:
//     void setvalues(int x,int y,int z){
//         m_x=x;
//         m_y=y;
//         m_z=z;
//     }
//     void print(){
//         std::cout<<"<"<<m_x<<","<<m_y<<","<<m_z<<">"<<std::endl;
//     }
//     bool isequal(const Point3d& p){
//         return (m_x==p.m_x && m_y==p.m_y && m_z==p.m_z);

//     }
// };
// int main(){
//     Point3d point1;
//     point1.setvalues(1,2,3);

//     Point3d point2;
//     point2.setvalues(1,2,3);

//     if (point1.isequal(point2)){
//         std::cout<<"p1 and p2 are equal"<<std::endl;
//     }
//     else{
//         std::cout<<"thy are not equal"<<std::endl;
//     }

//     Point3d point3;
//     point3.setvalues(3,4,5);
//     if (point1.isequal(point3)){
//         std::cout<<"p1 and p3 are equal"<<std::endl;
//     }
// //     else{
// //         std::cout<<"thy are not equal"<<std::endl;
// //     }

// // }

// #include<iostream>
// class Point3d{
//     int  m_x,m_y,m_z;
//     public:
//     void setvalues(int x,int y,int z){
//         m_x=x;
//         m_y=y;
//         m_z=y;
//     }
//     void print(){
//         std::cout<<"<"<<m_x<<","<<m_y<<","<<m_z<<">"<<std::endl;
//     }
//     bool isequal(const Point3d& p){
//         return (m_x==p.m_x && m_y==p.m_y && m_z==p.m_z);
//     }

// };
// int main(){
//     Point3d point1;
//     point1.setvalues(1,2,3);

//     Point3d point2;
//     point2.setvalues(1,2,3);

//     if (point1.isequal(point2)){
//         std::cout<<"they are equal"<<std::endl;
//     }

//     Point3d point3;
//     point3.setvalues(1,9,3);
//     if (point3.isequal(point2)){
//         std::cout<<"they are equal "<<std::endl;
//     }

// }
// #include<iostream>
// class distance{
//     private:
//     int feet;
//     float inch;
//     public:
//     void setdata(int f,float i){
//         feet=f;
//         inch=i;
//     }
//     void getdata(){
//         std::cout<<"enter the feet"; std::cin>>feet;

//         std::cout<<"enter the inch";  std::cin>>inch;

//     }
//     void showdist(){
//         std::cout<<"the feet are"<<feet<<std::endl;
//         std::cout<<"thr inches are"<<inch<<std::endl;
//     }

// };
// int main(){
//     distance s1,s2;
//     s1.setdata(1,2);
//     s2.getdata();

//     s1.showdist();
//     s2.showdist();
// }
// #include<iostream>
// class binary{
//     std::string s1;
//     public:
//     void read(void){
//     std::cout<<"enter a binary no"<<std::endl; std::cin>>s1;
//     }
//     void chk_bin(void){
//         for(int i=0;i<s1.length();i++){
//             if(s1.at(i)!='0'&& s1.at(i)!='1'){//s1.at(i)=string k ander jo i index pe charcetr h
//                 std::cout<<"incorrect format";
//                 exit(0);
//             }
//         }
//     }
//     void ones(void){
//         for(int i=0;i<s1.length();i++){
//             if(s1.at(i)=='0'){
//                 s1.at(i)='1';

//             }
//             else if(s1.at(i)=='1'){
//                 s1.at(i)='0';
//             }
//         }

//     }
//     void display(void){
//         for(int i=0;i<s1.length();i++){
//             std::cout<<s1.at(i);
//         }
//     }

// };
// int main(){
//     binary b;
//     b.read();
//     b.chk_bin();
//     b.ones();
//     b.display();
// }
