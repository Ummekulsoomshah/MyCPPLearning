// #include<iostream>
// using namespace std;
// class arithmetic
// {
// protected:
// int num1, num2;
// public:
// void getdata()
// {
// cout<<"For Addition:";
// cout<<"\nEnter the first number: ";
// cin>>num1;
// cout<<"\nEnter the second number: ";
// cin>>num2;
// }
// };
// class plus:public arithmetic
// {
// protected:
// int sum;
// public:
// void add()
// {
// sum=num1+num2;
// }
// };
// class minus
// {
// protected:
// int n1,n2,diff;
// public:
// void sub()
// {
// cout<<"\nFor Subtraction:";
// cout<<"\nEnter the first number: ";
// cin>>n1;
// cout<<"\nEnter the second number: ";

// cin>>n2;
// diff=n1-n2;
// }
// };
// class result:public plus, public minus
// {
// public:
// void display()
// {
// cout<<"\nSum of "<<num1<<" and "<<num2<<"= "<<sum;
// cout<<"\nDifference of "<<n1<<" and "<<n2<<"= "<<diff;
// }
// };
// int main()
// {
// result z;
// z.getdata();
// z.add();
// z.sub();
// z.display();}
// #include <iostream>

// class arithmetic
// {
// protected:
//     int num1, num2;

// public:
//     void getdata()
//     {
//         std::cout << "For Addition:\n";
//         std::cout << "Enter the first number: ";
//         std::cin >> num1;
//         std::cout << "Enter the second number: ";
//         std::cin >> num2;
//     }
// };

// class plus : public arithmetic
// {
// protected:
//     int sum;

// public:
//     void add()
//     {
//         sum = num1 + num2;
//     }
// };

// class minus
// {
// protected:
//     int n1, n2, diff;

// public:
//     void sub()
//     {
//         std::cout << "\nFor Subtraction:\n";
//         std::cout << "Enter the first number: ";
//         std::cin >> n1;
//         std::cout << "Enter the second number: ";
//         std::cin >> n2;
//         diff = n1 - n2;
//     }
// };

// class result : public plus, public minus
// {
// public:
//     void display()
//     {
//         std::cout << "\nSum of " << num1 << " and " << num2 << " = " << plus::sum;
//         std::cout << "\nDifference of " << minus::n1 << " and " << minus::n2 << " = " << minus::diff;
//     }
// };

// int main()
// {
//     result z;
//     z.getdata();
//     z.add();
//     z.sub();
//     z.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class complex{
// private:
// float real,img;
// public:
// complex()
// {real=0;
// img=0;}
// complex(float m,float n){
//     real=m;
//     img=n;
// }
// // complex(float r)//single parameter parameterized constructor
// // {
// // real=img=r;
// // }
// complex(complex &c){
//     real=c.real;
//     img=c.img;
// }
// complex sum(complex c){
//     complex t;
//     t.real=real+c.real;
//     t.img=img+c.img;
//     return t;
// }
// void show(){
//     if(img>0){
//         cout<<real<<"+"<<img<<"i";
//     }
//     else{
//         img=-img;
//         cout<<real<<"-"<<img<<"i";
//     }
// }
// };
// int main(){
// complex c1(2,3),c2(1,2);
// complex c3;
// c3=c2.sum(c1);
// c3.show();
// }
// #include<iostream>
// using namespace std;

// class complex
// {
// float real,img;
// public:
// complex()//default constructor
// {
// real=img=0;
// }
// complex(float r)//single parameter parameterized constructor
// {
// real=img=r;
// }
// complex(float r,float i) //two parameter parameterized constructor
// {
// real=r;img=i;
// }
// complex(complex&c)//copy constructor
// {
// real=c.real;
// img=c.img;
// }
// complex sum(complex c )
// {

// complex t;
// t.real=real+c.real;
// t.img=img+c.img;
// return t;
// }
// void show()
// {
// if(img>0)
// cout<<real<<"+i"<<img<<endl;
// else
// {
// img=-img;
// cout<<real<<"-i"<<img<<endl;
// }
// }
// };
// int main()
// {
// complex c1(1,2);
// complex c2(2,2);
// complex c3;
// c3=c1.sum(c2);
// c3.show();
// }
// #include<iostream>
// using namespace std;
// class A{
// public:
// int a,b;
// void getnum(){
//     cout<<"enter no"<<endl;
//     cin>>a;

// }
// };
// class B:public A{
// public:
// void square(){
//     getnum();
//     cout<<"sqaue of a is"<<a*a;}
// };
// class C:public A{
//     public:
//     void cun(){
//     getnum();
// cout<<"cube of a is"<<a*a*a;
//     }

// };
// int main(){
// B b1;
// b1.square();
// C c1;
// c1.cun();
// }
#include<iostream>
using namespace std;
class arithmetic{
    protected:
    int num1,num2;
    public:
    void getdata(){
        cout<<"for add";
        cout<<"enter first no"<<endl;
        cin>>num1;
        cout<<"enter second no"<<endl;
        cin>>num2;
    }
};
class plus1:public arithmetic{
protected:
int sum;
public:
void add(){
    sum=num1+num2;
}

};
class minus1{
    protected:
    int n1,n2,diff;
    public:
    void sub(){
        cout<<"for subtraction"<<endl;
        cout<<"enter value of a";
        cin>>n1;
        cout<<"enter value of b"<<endl;
        cin>>n2;
        diff=n1-n2;
    }
};
class result:public plus1,public minus1{
    public:
    void display(){
        cout<<"sum is"<<sum;
        cout<<"subt is"<<diff;
    }

};

int main(){
result z;
z.getdata();
z.add();
z.sub();
z.display();
}
