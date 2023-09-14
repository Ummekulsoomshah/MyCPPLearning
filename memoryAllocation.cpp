// #include<iostream>
// class shop{
//     int itemId[100];
//     int itemprize[100];
//     int counter;
//     public:
//     void initcounter(void){counter =0;}
//     void setprize(void){
//         std::cout<<"enter id of your item no"<<counter+1<<std::endl;
//         std::cin>>itemId[counter];
//         std::cout<<"enter prize of your item"<<std::endl;
//         std::cin>>itemprize[counter];
//         counter++;
//     }
//     void displayprize(void){
//         for(int i=0;i<counter;i++){
//             std::cout<<"the prize of item with id "<<itemId[i]<<"is "<<itemprize[i]<<std::endl;
//         }
//     }

// };
// int main(){
//     shop dukaan;
//     dukaan.initcounter();
//     dukaan.setprize();
//     dukaan.setprize();
//     dukaan.setprize();
//     dukaan.displayprize();
   
// }
// 
// #include<iostream>
// float getavg(float);
// int main(){
// float data=1,avg;//data ko assign kyn kyaa h 1 se
// while (data!=0)
// {
//     std::cout<<"enter a no";
//     std::cin>>data;
//     avg=getavg(data);
//     std::cout<<"new avg is"<<avg<<std::endl;
// }
// }

// float getavg(float newdata){
//     static float total=0;
//     static int count=0;
//     count++;
//     total+=newdata;
//     return total/count;
// }
#include<iostream>
using namespace std;

int x;
int& setx();
int main(){
    setx()=67;
    std::cout<<"x="<<x<<std::endl;

}
int& setx(){
    return x;
}