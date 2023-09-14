// #include<iostream>
// using namespace std;
// void greet();
// int main(){
// greet();
// greet();
// }
// void greet(){
//     cout<<"hello";
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<3;i++){
//         cout<<"xoxoxoxox"<<endl;
//         for(int i=0;i<2;i++){
//             cout<<"oxo"<<endl;
            
//         }
//     }

// }



//k print
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5;i>=1;i--){
//         cout<<"*";
//         for(int j=1;j<=i;j++){
//             cout<<" ";

//         }
//         cout<<"*"<<endl;
//     }
//     for(int i=1;i<=5;i++){
//         cout<<"*";
//         for(int j=i;j>=1;j--){
//             cout<<" ";
//         }
//         cout<<"*"<<endl;
//     }
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }

// }


// squar
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<4;i++){
//         if(i==0 || i==3){
//             cout<<"******"<<endl;}
//         else{
//             cout<<"*";
//             for(int j=0;j<4;j++){
//                 cout<<" ";

//             }
//             cout<<"*"<<endl;

//         }
        
//     }

// }
// hollow traingle

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"*"<<endl;
//     for(int i=0;i<6;i++){
//         if(i==5){
//             cout<<"*******";
//         }
//         else{
//                 cout<<"*";
//             for(int j=0;j<i;j++){
//                 cout<<" ";

//             }
//             cout<<"*"<<endl;
//         }
//     }

// }
// hollow traingle
#include<iostream>
using namespace std;
int ht=5;

int main(){

    for(int i=0;i<5;i++){
        for(int j=ht;j>=1;j--){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
        ht--;
    }

}
// A
//  #include<iostream>
//  int main(){
//      const int ht=20;
//      int spaces=ht;
//      int x=1;
//      for (int i=0;i<ht;i++){
//          for (int j=0;j<spaces;j++){
//              std::cout<<" ";
//          }
//          std::cout<<"*";
//          if(i==10){
//             std::cout<<"********";
//          }
//          else{
//          for(int k=0;k<x;k++){
            
//              std::cout<<" ";
//          }
//          std::cout<<"*"<<std::endl;
//          spaces--;
//          x+=1;
//      }}
//  }
//N
// #include<iostream>
// using namespace std;
// int s=5;
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<"*";
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         for(int k=s;k>=1;k--){
//             cout<<" ";

//         }
//         s--;
//         cout<<"*"<<endl;
//     }

// }
