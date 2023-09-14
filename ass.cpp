// #include<iostream>
// int main(){
//     int s=0;
//     for(int i=0;i<11;i++){
//         std::cout<<i<<std::endl;
//         s+=i;
//     }
//     std::cout<<"the sum is"<<s;

// }

// #include <iostream>
// int main()
// {
//     int n;
//     std::cout << "how many values you want" << std::endl;
//     std::cin >> n; // yhn n put krne se infinite loop chlgya
//     int value;
//     int max = value;
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << "enter value ";
//         std::cin >> value;
        
//         if (value > max)
//         {
//             max = value;
//         }
//     }

//     std::cout << value;
// }

// #include <iostream>
// int main()
// {
//     int n;
//     std::cout << "how many values you want" << std::endl;
//     std::cin >> n; // yhn n put krne se infinite loop chlgya
//     int value;
//     int min = value;
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << "enter value ";
//         std::cin >> value;
        
//         if (value < min)
//         {
//             min = value;
//         }
//     }

//     std::cout << value;
// }



// #include<iostream>
// int main(){
//     int x;
//     int n=1;
//     std::cout<<"enter a no ";
//     std::cin>>x;
//     for(int i=x;i>1;i--){
//         n*=i;

//     }
//     std::cout<<"the fact of "<<x<< " is "<<n;
// }
// #include<iostream>
// int main(){
// int a,b;
// std::cout<<"enter aand b"<<std::endl;
// std::cin>>a>>b;
// int temp=a;
// a=b;
// b=temp;
// std::cout<<a<<std::endl;
// std::cout<<b<<std::endl;
// }
// #include<iostream>
// int main(){
// int n;
// std::cin>>n;
// for(int i=1;i<n;i++){
    
//     std::cout<<"1/"<<i<<"+";
// }
// std::cout<<"1/"<<n;
// }
// #include<iostream>
// int main(){
//     int r=1;
// for(int i=1;i<6;i++){
//     while(i==0){
//         r*=i;
//         --i;
//     }
//     std::cout<<i<<" "<<r<<std::endl;
// }
// }
// #include <iostream>

// int main() {
//     int r = 1;
//     for (int i = 1; i < 6; i++) {
//         while (i != 0) {
//             r *= i;
//             --i;
//         }
//         std::cout << i << " " << r << std::endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int m[10];
//     for(int i=0;i<4;i++){
//         cin>>m[i];
//         cout<<"the value at index"<<i<<" is "<<m[i]<<endl;

//     }
//     int max=m[1];
//     for(int i=0;i<4;i++){
//         if(max<m[i]){
//             max=m[i];
//         }
        
//     }
//     cout<<"the max value is"<<max<<endl;
//     int min=m[1];
//     for(int i=0;i<4;i++){
//         if(min>m[i]){
//             min=m[i];
//         }
        
//     }
//     cout<<"the min value is"<<min<<endl;
//     int search;
//     cout<<"enter the value you want to search"<<endl;
//     cin>>search;
//     for(int i=0;i<<4;i++){
//         if(search==m[i]){
//             search=m[i];
//             cout<<"the value you wanted to search is"<<m[i]<<endl;
//             int update;
//         cout<<"the value you want to update"<<endl;
//         cin>>update;
//         m[i]=update;
//         }
        
//         }
//         for(int i=0;i<4;i++){
//             cout<<m[i];
//         }
//     }
    


// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     cout<<cos(a);
//     cout<<sin(a);
//     cout<<tan(a);
//     cout<<acos(a);
//     cout<<asin(a);
//     cout<<atan(a);
//     cout<<cosh(a);
//     cout<<sinh(a);
//     cout<<tanh(a);
//     cout<<acosh(a);
//     cout<<asinh(a);
//     cout<<atanh(a);
//     cout<<exp(a);
//     // float b;
//     // double frexp(b);
//     // cout<<frexp(b);
//     // cout<<idexp(a);
//     cout<<log(a);
//     cout<<log10(a);
//     // cout<<modf(a);
//     cout<<exp2(a);
//     cout<<expm1(a);
//     cout<<ilogb(a);
//     cout<<log1p(a);
//     cout<<logb(a);
//     int b;
//     cout<<"enter power";
//     cin>>b;
//     cout<<scalbn(a,b);
//     cout<<scalbln(a,b);


// }