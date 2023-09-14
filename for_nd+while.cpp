// #include<iostream>
// int main(){
    // int i=1;
    // std::cout<<i<<std::endl;
    // i++;
    // std::cout<<i<<std::endl;
    // i++;
    // std::cout<<i<<std::endl;
    // i++;
    // std::cout<<i<<std::endl;
    // i++;
    // for(initialization:validation;updation)
    // {
    //     loop body(cpp code)
    // }
    // for (int i = 0; i <= 8; i++)
    // {
    //     std::cout<<i<<std::endl;
    // }
    //ex of infinite loop
    // for (int i = 0; 0 < 8; i++)
    // {
    //     std::cout<<i<<std::endl;
    // }
    // for(int i=9;i<90;i++)
    // {
    //     std::cout<<i<<std::endl;
    // }
    //for more than one increement
    // for(int i=9;i<90;i++)
    // {
    //     std::cout<<i<<std::endl;
    //     i++;
    // }
    // while(condition){
    //     body;
    //     increament;
    // }
    // int i=0;
    // while(i<=70){
    //     std::cout<<i<<std::endl;
    //     i++;
    // }
    //ex of infinite while loop
    // int i=0;
    // while(true){
    //     std::cout<<i<<std::endl;
    //     i++;
    // }
    //do while loop
    // int i=0;
    // do{
    //     std::cout<<i<<std::endl;
    //     i++;
    // }while(false);
    //table of 5

    // int i=1,a=5;
    // while(i<=10){
    //     std::cout<<a<<"x"<<i<<"="<<a*i<<std::endl;
    //     i++;
    //         }
    // int a=5;
    // for(int i=1;i<=10;i++){
    //     std::cout<<a<<"x"<<i<<"="<<a*i<<std::endl;

    // }


//}
// #include<iostream>
// #include<iomanip>
// int main(){
//     unsigned long n;
//     std::cout<<"enter n";
//     std::cin>>n;
//     for(int i=1;i<=200;i++){
//         std::cout<<std::setw(5)<<i*n<<" ";
//         if (i%10==0){
//             std::cout<<std::endl;}
        
//     }
// }
// #include<iostream>
// int main(){
// int i=0;
// while(i>-1*i){
//     std::cout<<"kkk"<<std::endl;
//     i--;
// }
// }
// #include<iostream>
// int main(){


// int i=5;
// while(i>-1*i){
//     std::cout<<"hello"<<std::endl;
//     i--;

// }}
// #include<iostream>
// using namespace std;
// int main(){
//     srand(time(NULL));
//     while(true){
//         cout<<"this is an infinite loop"<<endl;
//         int randNum=rand()%100+1;
//         if (randNum>75){
//             cout<<"the loop ends"<<endl;
//             break;
//         }
//     }
//     cout<<"the program ends"<<endl;


// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<10;i++){
//         for(int j=0;j<10;j++){
//             if(i%2==0){
//                 cout<<"<";
//             }
//             if(i%2!=0){
//                 cout<<">";
//             }
//         }
//         cout<<endl;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=0;j<i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int row=0;
//     while(row<7){
//         int col=0;
//         while (col<11){
//             cout<<"#";
//             col++;

//         }
//         cout<<""<<endl;
//         row++;
        
        
//     }

// }
#include<iostream>
using namespace std;
int main(){
    for(int i=2;i<9;i++){
        for(int i=2;i<4;i++){
            cout<<"*";
        }
        cout<<endl;
    }

}

