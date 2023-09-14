#include <iostream>//with user defined data
using namespace std;
class complex
{
    int a;
    int b;

public:
complex(){a=0;b=0;}
complex(int a1,int b1){
    a=a1;
    b=b1;
}
    void getdata(){
        cout<<"enter a"<<endl;
        cin>>a;
        cout<<"enter b"<<endl;
        cin>>b;

    }
    void sum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print()
    {
        std::cout << "your complex no is" << a << "+" << b << "i" << std::endl;
    }
};
int main()
{
    complex c1, c2(1,2),c3;
    c1.getdata();
   
    

    c3.sum(c1, c2);
    c3.print();
}
// #include <iostream>//with the given data
// class complex
// {
//     int a;
//     int b;

// public:
//     void setdata(int v1,int v2)
//     {
//         a=v1;
//         b=v2;
//     }
//     void setdatasum(complex o1, complex o2)
//     {
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }
//     void print()
//     {
//         std::cout << "your complex no is" << a << "+" << b << "i" << std::endl;
//     }
// };
// int main()
// {
//     complex c1, c2, c3;
//     c1.setdata(1,2);
//     c1.print();

//     c2.setdata(2,3);
//     c2.print();

//     c3.setdatasum(c1, c2);
//     c3.print();
// }
// #include <iostream>
// class vectrs
// {
//     int a, b, c;

// public:
//     void setdat(int v1, int v2, int v3)
//     {
//         a = v1;
//         b = v2;
//         c = v3;
//     }
//     void sumvectrs(vectrs c1, vectrs c2)
//     {
//         a = c1.a + c2.a ;
//         b = c1.b + c2.b ;
//         c = c1.c + c2.c ;
//     }
//     void print()
//     {
//         std::cout << "you vector is" << a << "i+" << b << "j+" << c << "k" << std::endl;
//     }
// };
// int main()
// {
//     vectrs c1, c2, c3;
//     c1.setdat(1, 2, 3);
//     c1.print();

//     c2.setdat(1, 2, 3);
//     c2.print();

//     c3.sumvectrs(c1, c2);
//     c3.print();
// }
// #include <iostream>

// class Something
// {
// private:
//     int m_value1;
//     int m_value2;
//     int m_value3;

// public:
//     void setValue1(int value) { m_value1 = value; }
//     int getValue1() { return m_value1; }
// };

// int main()
// {
//     Something something;
//     something.setValue1(5);
//     std::cout << something.getValue1() << '\n';
// }