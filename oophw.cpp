#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
class shape{
    protected:
double a,b;
public:
void get_data(){
    cout<<"enter a and b"<<endl;
    cin>>a>>b;

}
virtual void display_area()=0;
};
class traingle:public shape{
    public:
    void display_area(){
        cout<<(a*b)/2;
    }

};
class rectangle:public shape{
    public:
    void display_area(){
        cout<<a*b;
    }
};
int main(){
    shape *s;
    rectangle r;
    r.get_data();
    s=&r;
    system("color 0A");
    s->display_area();
    getch();
    traingle t;

    t.get_data();
    s=&t;
    system("color 0B");
    s->display_area();
}

