// #include<iostream>
// using namespace std;
// class counter{
//     protected:
//     unsigned int count;
//     public:
//     counter():count(0){}
//     counter(int c):count(c){}
//     unsigned int get_count() const{return count;}
//     counter operator++(){return counter(++count);}
// };
// class countdn:public counter{
// public:
// counter operator--(){return counter(--count);}
// };
// int main(){
// countdn c1;
// cout<<"c1="<<c1.get_count()<<endl;
// ++c1;++c1;++c1;
// cout<<"c1="<<c1.get_count()<<endl;
// }
// #include<iostream>
// using namespace std;
// class Distance{
// private:
// int feet;
// float inches;
// public:
// Distance():feet(0),inches(0.0){}
// Distance(int ft,float in):feet(ft),inches(in){}
// void getdist(){
//     cout<<"enter feet";cin>>feet;
//     cout<<"enter inches";cin>>inches;
// }
// void showdist()const {cout<<feet<<"\'-"<<inches<<'\"';}
// Distance operator+(Distance)const;
// };
// Distance Distance::operator+(Distance d2) const{
//     int f=feet+d2.feet;
//     float i=inches+d2.inches;
//     if(i>=12.0){
//         i-=12.0;
//         f++;
//     }
//     return Distance(f,i);
// }

// int main(){
// Distance dist1,dist4,dist3;
// dist1.getdist();
// Distance dist2(11,6.25);
// dist3=dist1+dist2;
// dist4=dist1+dist2+dist3;
// cout<<"dist1=";
// dist1.showdist();
// cout<<endl;
// cout<<"dist2=";
// dist2.showdist();
// cout<<endl;
// cout<<"dist3=";
// dist3.showdist();
// cout<<endl;
// cout<<"dist4=";
// dist4.showdist();
// cout<<endl;

// }
#include<iostream>
using namespace std;
class stack
{
protected:
    enum
    {
        MAX = 3
    };
    int st[MAX];
    int top;

public:
    stack() { top = -1; }
    void push(int var)
    {
        st[++top] = var;
    }
    int pop()
    {
        return st[top--];
    }
};
class stack2 : public stack
{
public:
    void push(int var)
    {
        if (top >= MAX - 1)
        {
            cout << "error stack is full";
            exit(1);
        }
        stack::push(var);
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "error:stack is empty";
            exit(1);
        }
        return stack::pop();
    }
};
int main()
{
    stack2 s1;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout << endl
         << s1.pop();
    cout << endl
         << s1.pop();
    cout << endl
         << s1.pop();
    cout << endl
         << s1.pop();
    cout << endl;
    cout << "chutti";
}