// #include <iostream>
// class complex
// {
// private:
//     int a, b;

// public:
//     complex()//contructor have the same name as class
//     {
//         std::cout << "hello kulsoom";
//     }
// };
// int main()
// {
//     complex c1;//no call to constructor jese hi object bnega wese hi constructor call hojaega
// }

// in order to pass arguments to constructor
//  #include<iostream>
//  class complex{
//      private:
//      int a,b;
//      public:
//      complex(int x,int y){//parametrized constructor
//          a=x;b=y;
//      }
//      complex(int k){
//          a=k;
//      }
//      complex(){//default constructor

//     }

// };
// int main(){
//     complex c1(3,4),c2(5);//c2 ka constructor nh h bcz we don't have a constructor jo ak argument leta ho so we have to make it //complex c1(3,4) ==complex c1=complex(3,4) //c2(5)==c2=5
//     complex c3;//yh bh error couase krega bcz aesa koi constructor ho jjo koi argument nh le

// }
// #include <iostream>
// class complex
// {

// private:
//     int a, b;

// public:
//    complex() {}
//     complex(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     complex(int k)
//     {
//         a = k;
//     }
//     void setdata(complex c)

    
//     {
//         a = c.a;
//         b = c.b;

//     }
//     void display(){
//         std::cout<<"c4="<<a<<"+"<<b<<"i";
//     }

// };
// int main()
// {
//     complex c1(3, 4), c2, c3(2),c4;
//     c4.setdata(c1);
//     c4.display();

// }
// // #include <iostream>
// // class counter
// // {
// // private:
// //     unsigned int count;

// // public:
// //     counter() { count=2; //agr yh nh krte to phr wo int  ,b phr set data krte phr main me c1 or c2 ko 0 dete lkn agr constructor ki mdad se aesa nh
    
// //     }
// //     void inc_count()
// //     {
// //         count++;
// //     }
// //     int get_count()
// //     {
// //         return count;
// //     }
// // };
// // int main()
// // {
// //     counter c1, c2;
// //     std::cout << "c1=" << c1.get_count();
// //     std::cout << "c2=" << c2.get_count();

// //     c1.inc_count();
// //     c2.inc_count();
// //     c2.inc_count();

// //     std::cout << "c1=" << c1.get_count();
// //     std::cout << "c2=" << c2.get_count();
// // }
// // #include<iostream>
// // class bro{
// // private:
// // int count;
// // public:
// // bro():count(0){
// //     std::cout<<"i am constructor"<<std::endl;
// // }
// // };
// // int main(){
// //     bro c1,c2;
// // }
// // #include<iostream>
// // class vectors{
// //     int a,b,c;
// //     public:
// //     void print(){
// //         std::cout<<"the value of vector is"<<a<<"i+"<<b<<"j+"<<c<<"k"<<std::endl;

// //     }
// //     vectors(){a=0;b=0;c=0;
// //     std::cout<<"a";}

// // };
// #include <iostream>
// class Int
// {
// private:
//     int i,i2;

// public:
//     Int()
//     {
//         i = 0;
//     }
//     Int(int ii,int iii)
//     {
//         i = ii;i2=iii;
//     }
//     void add(Int a, Int b)
//     {
//         i = a.i + b.i;
//     }
//     void display()
//     {
//         std::cout << i;
//     }
// };
// int main()
// {
//     Int c1(3,7), c2(11,5), c3;
//     c3.add(c1, c2);
//     std::cout << "c3=";
//     c3.display();
// }
// #include<iostream>
// #include<conio.h>
// const char  ESC=27;
// const double TOLL=0.5;
// class TOLLBOOTH{
//     unsigned int totalcar;
//     double totalcash;
//     public:
//     TOLLBOOTH(){
//         totalcar=0;totalcash=0;
//     }
//     void paying(){
//         totalcar+=1;totalcash+=0.5;

//     }
//     void nonpaying(){
//         totalcar+=1;
//     }
//     void display()const {
//         std::cout<<"total cash"<<totalcash<<"total car"<<totalcar;

//     }


// }; 
// int main()
// {
//     TOLLBOOTH booth1;
//     char ch;
//     std::cout<<"press 0 for nonpaying car"<<"press 1 for paying car"<<"press esc to exit";
//     do{
//         ch=getche();
//         if (ch=='0') {
//             booth1.nonpaying();
//         }
//         if (ch=='1'){
//             booth1.paying();
//         }
//     }while(ch!=ESC);
//     booth1.display();


// } 
// //
// #include <iostream>
// #include <math.h>
// class Int
// {
// private:
//     int i,i2;
    

// public:
// int r;

//     Int()
//     {
//         i = 0;
//     }
//     Int(int ii,int iii)
//     {
//         i = ii;i2=iii;
//     }
//     void add(Int a, Int b)
//     {
//         i = (b.i - a.i);
//         i2 = b.i2 - a.i2;
//     }
//     void sqrtt(Int c){
//         i=sqrt(c.i+c.i2);

//     }
    
//     void display()
//     {
//         std::cout << i;
//     }
// };
// int main()
// {
//     Int c1(3,7), c2(11,5), c3,c4;
//     c3.add(c1, c2);
//     c4.sqrtt(c3);

    
    
//     std::cout << "c3=";
//     c4.display();
// }
// #include<iostream>
// #include<math.h>

// class point{
// int x,y;
// float r
// public:
// point(int a,int b){
//     x=a;
//     y=b;
// }
// void sqrtt(point a,point b){
//     x=b.x-a.x;
//     y=b.y-a.y;
// }
// void add(point a){
//     r=sqrt(a.x+a.y);
// }
// void display(){
//     std::cout<<"the sqrt is"<<r;
// }
    
// };
// int main(){
//     point c1,c2,c3,c4;
//     c3.sqrtt(c1,c2);
//     c4.add()

// }
#include<iostream>
class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;

    }
    void display(){
        std::cout<<"the point is"<<x<<y<<std::endl;
    }

};
int main(){
    point p(1,1);
        p.display();

        point q(4,6);
        q.display();
    }

