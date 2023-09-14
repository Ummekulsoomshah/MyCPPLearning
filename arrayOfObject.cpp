#include <iostream>
class employee
{
    int id;
    int salry;

public:
    void setdata(void)
    {
        salry = 122;
        std::cout << "enter id " << std::endl;
        std::cin >> id;
    }
    void getid(void)
    {
        std::cout << "the id of this employee is" << id << std::endl;
        
    }
};
int main(){
    employee fb[4];
    for(int i=0;i<4;i++)
    {
        fb[i].setdata();
        fb[i].getid();
    }

}
