// #include <iostream>
// class complex
// {
//     int a, b;

// public:
//     friend complex sum(complex o1, complex o2);

//     void setdat(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void printdat()
//     {
//         std::cout << "the value of ais" << a << "and b is" << b << std::endl;
//     }
//     // void sum(complex o1,complex o2){
//     //     a=o1.a+o2.a;
//     //     b=o1.b+o2.b;

//     // }
// };
// complex sum(complex o1, complex o2)
// { // and we did not do complex::complex sum bcz this is for member function definition
//     complex o3;
//     o3.setdat((o1.a + o2.a), (o1.b + o2.b)); // hm directly
//     return o3;
// }
// int main()
// {
//     complex c1, c2, c3;
//     c1.setdat(1, 2);
//     c1.printdat();

//     c2.setdat(1, 2);
//     c2.printdat();

//     c3 = sum(c1, c2); // we did so bcz friend function has no caler object like we can do c.funct for member fumctio but not for frnd function
//     c3.printdat();
// }
// #include<iostream>
// class complex{
//     private:
//     int a,b;
//     public:
//     void setdata(int x,int y){
//         a=x;
//         b=y;

//     }
//     void showdata(){
//         std::cout<<"a="<<a<<"b="<<b<<std::endl;
//     }
//     friend void fun(complex );

// };
// void fun(complex c){
//     std::cout<<"sum is"<<c.a+c.b<<std::endl;

// }
// int main(){
//     complex c1;
// c1.setdata(1,2);
// c1.showdata();
// fun(c1);

// }
// #include<iostream>
// class vectors{
//     int a,b,c;
//     public:
//     // void setdata(int x,int y,int z){
//         a=x;
//         b=y;
//         c=z;
//     }
//     void printdat(){
//         std::cout<<"the valuw of vector is"<<a<<"i+"<<b<<"j+"<<c<<"k"<<std::endl;
//     }
//     // void sumvectors(vectors o1,vectors o2){
//     //     a=o1.a+o2.a;
//     //     b=o1.b+o2.b;
//     //     c=o1.c+o2.c;

//     // }

// };

// int main(){
// vectors a1,a2,a3;
// a1.setdata(1,2,6);
// a1.printdat();

// a2.setdata(1,2,6);
// a2.printdat();

// a3.sumvectors(a1,a2);
// a3.printdat();

// }
// #include <iostream>
// class complex;
// class calculator
// {
// public:

//     int sumrealcomplex(complex, complex);
//     int sumcomplcomplex(complex, complex);
// };
// class complex
// {
//     int a, b;

// public:
// //individually frnd bnana
// friend int calculator::sumrealcomplex(complex o1, complex o2);
// friend int calculator::sumcomplcomplex(complex o1, complex o2);

// //puri class ke function ko frnd bnana
//     friend class calculator;
//     void setdata(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void print()
//     {
//         std::cout << "the complex no are" << a << "+" << b << "i" << std::endl;
//     }
// };
// int calculator::sumrealcomplex(complex o1, complex o2)
// {
//     return (o1.a + o2.a);
// }
// int calculator::sumcomplcomplex(complex o1, complex o2)
// {
//     return (o1.b + o2.b);
// }
// int main()
// {
//     complex o1, o2;
//     o1.setdata(1, 3);
//     o2.setdata(2, 8);
//     calculator c;
//     int result = c.sumrealcomplex(o1, o2);
//     std::cout << "the sum of real part of o1 and o2" << result << std::endl;
//     int result1 = c.sumcomplcomplex(o1, o2);
//     std::cout << "the sum of compl part of o1 and o2" << result1 << std::endl;
// }
// #include<iostream>
// class complex;
// class clacult{
//     public:
//     int sumcomplex(complex,complex);
//     int sumreal(complex,complex);

// };
// class complex{
//     int a,b;
//     public:
//     void setdat(int v1,int v2){
//         a=v1;
//         b=v2;

//     }
//     friend class calcult;

// };
// int calcult::sumreal(complex o1,complex o2){
//    return(o1.a+o2.a); }
// int calcult::sumcomplex(complex o1,complex o2){
//     return(o1.b+o2.b);
// }
// int main(){
// }
