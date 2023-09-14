// #include<iostream>
// int main(){
//     int a;
//     double b;
//     char c;
//     float d;
//     double e;
//     scanf("%d %lld %c %f %lf",&a,&b,&c,&d,&e);
//     printf("%d\n%lld\n%c\n%f\n%lf",a,b,c,d,e);
    
// }
// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() 
// {
//     // Complete the code.
//  int a;
//  long long int b;
//  char c;
//  float d;
//  double e;

//  scanf("%d %lld %c %f %lf",&a,&b,&c,&d,&e);

//  printf("%d\n%lld\n%c\n%f\n%lf",a,b,c,d,e);

// return 0;
// }
// #include<iostream>
// int main(){
//     int n;

//     std::cin>>n;
//     if(n==1){
//         std::cout<<"one";
//     }
//     else if(n==2){
//         std::cout<<"two";
//     }else if(n==3){
//         std::cout<<"three";}
//     else if(n==4){
//     std::cout<<"four";}
//     else if(n==5){
//         std::cout<<"five";}
//     else if(n==6){
//         std::cout<<"six";}
//     else if(n==7){
//         std::cout<<"seven";}
//     else if(n==8){
//         std::cout<<"eight";}
//     else if(n==9){
//         std::cout<<"nine";}
    
//     else if(n>9){
//         std::cout<<"Greater than 9";
//     }
        
    
// }
// #include<iostream>
// int main(){
//     int a,b,n;
//     scanf("%d %d",&a,&b);
    
//     for(n=a;n<=b;n++){
//         if(n==1){
//         std::cout<<"one"<<std::endl;
//     }
//     else if(n==2){
//         std::cout<<"two"<<std::endl;
//     }else if(n==3){
//         std::cout<<"three"<<std::endl;}
//     else if(n==4){
//     std::cout<<"four"<<std::endl;}
//     else if(n==5){
//         std::cout<<"five"<<std::endl;}
//     else if(n==6){
//         std::cout<<"six"<<std::endl;}
//     else if(n==7){
//         std::cout<<"seven"<<std::endl;}
//     else if(n==8){
//         std::cout<<"eight"<<std::endl;}
//     else if(n==9){
//         std::cout<<"nine"<<std::endl;}
//     else if((n>9) && (n%2==0)){
//         std::cout<<"even"<<std::endl;
//     }
//     else if((n>9) && (n%2!=0)){
//         std::cout<<"odd"<<std::endl;
//     }
//     }
    

// }
// #include<iostream>
// int max(int a,int b,int c,int d){
//     int gre;
    
//     if((a>b) && (a>c) && (a>d)){
//         gre = a;

//     }
//     else if((b>a) && (b>c) && (b>d)){
//         gre=b;
//     }else if((c>a) && (c>b) && (c>d)){
//         gre=c;
//     }else if((d>a) && (d>b) && (d>c)){
//         gre=d;
//     }
//     return gre;

// }
// int main(){
//     int a1,a2,a3,a4;
//     scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
//     int ans=max(a1,a2,a3,a4);

//     printf("%d",ans);
//     return 0;
// }

// #include<iostream>
// //#include <cstdio>
// using namespace std;

// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */
// int max_of_four(int a,int b,int c,int d)
// {
//     int gre;
//     if(a>b && a>c && a>d)
//     {
//         gre = a;
//     }
//     else if(b>a && b>c && b>d)
//     {
//         gre = b;
//     }
//     else if(c>a && c>b && c>d)
//     {
//         gre = c;
//     }
//     else if(d>a && d>b && d>c)
//     {
//         gre = d;
//     }
// return gre;
// }

// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int ans = max_of_four(a, b, c, d);
//     printf("%d", ans);
    
//     return 0;
// }
//max value seraching
// #include<iostream>
// int max(int x,int y,int z);//initicialize the function
// int main(){
//     std::cout<<"enter values";
//     int int1,int2,int3;
//     std::cin>>int1>>int2>>int3;
//     std::cout<<"the max value is"<<max(int1,int2,int3);
// }

//     int max(int a,int b,int c){//real defining the function
//         int maxv=a;
//         if(b>maxv){
//             maxv=b;
//         }
//         //else if(z>maxv){//don't use this bcz j y bra hoga x se toh yh yhi rukjaega or y print kregdega even z bra ho bhle x and y both se 
//         if(c>maxv){//we use if bcz isse yh hr condition ko check krne k bd hi final decison dega
//             maxv=c;
//         }
//         return maxv;
//     }
//min value seraching
// #include<iostream>
// int min(int a,int b,int c);
// int main(){
//     int x,y,z;
//     std::cin>>x>>y>>z;
//     std::cout<<"the min value is"<<min(x,y,z);

// }
// int min(int a,int b,int c){
//     int minv=b;
//     if (a<minv){
//         minv=a;
//     }
//     if (c<minv){
//         minv=c;
//     }
//     return minv;

// }
//not getting the program
// #include<iostream>
// #include<iomanip>
// #include<iostream>
// int main(){
//     for(unsigned int c=1;c<=20;c++){
//         std::cout<<(1+rand()%6);
//         if(c%5==0){
//             std::cout<<"\t"<<std::endl;
//         }

//     }
// }
// #include<iostream>
// int square(int );
// int main(){
//     int a=10;
//     std::cout<<a<<"squared"<<square(a)<<std::endl;

// }
// int square(int x){
//     return x*x;
// }
#include<iostream>
int main(){
    int a,b,c;
    std::cin>>a>>b;
}
 





    


