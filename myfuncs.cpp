#include<iostream>
int check(int a);
void g();
int main(){
    int num1,num2;
    std::cout<<"enter vlue of num1"<<std::endl;
    std::cin>>num1;
    std::cout<<check(num1)<<std::endl;
    std::cout<<"enter the value of num2"<<std::endl;
    std::cin>>num2;
    
    g();
    return 0;

    
}
int check(int a){
    if (a==2){
        for(int i=0;i<=7;i++){

        std::cout<<"okay that is fine"<<std::endl;
        }

    }
    else{
        std::cout<<"ooho what are you doing"<<std::endl;
    }


}
void g(){
    std::cout<<"kulsoom is very cool"<<std::endl;
}

