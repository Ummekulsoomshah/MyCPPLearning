//when calling the same fuction multiple times use inline function..but without this we can proceed every thing ..infact it is not recoended in many of the cases
// #include<iostream>
// inline  int product(int a,int b){
//     return a*b;


// }
// int main(){
//     int x,y;
//     std::cin>>x>>y;
//     std::cout<<"the product of x and y is"<<product(x,y);
//     std::cout<<"the product of x and y is"<<product(x,y);//as we are calling the product function mulitiple tims so here is recomended th in line function
//     std::cout<<"the product of x and y is"<<product(x,y);
//     std::cout<<"the product of x and y is"<<product(x,y);
//     std::cout<<"the product of x and y is"<<product(x,y);
//     std::cout<<"the product of x and y is"<<product(x,y);

// }
//using the static variable(always remember the variable)
// #include<iostream>
// int extra(int a,int b){
//     static int c=0;//making c more and more
//     c=c+1;
//     return a*b;


// }
// int main(){
//     int x,y;
//     int z=0;

//     std::cin>>x>>y;
//     z+=1;
//     std::cout<<"the product of x and y is"<<extra(x,y);
// }
// #include<iostream>
// float moneyRECEVD(int money,float factor=1.04){//factor will be modified 
//     return money*factor;

// }

// int main(){
//     
//     int money=1000;
//     std::cout<<"if you have "<<money<<"you will recieve "<<moneyRECEVD(money)<<std::endl;//factor as it is 1.04 will be used 
//     std::cout<<"if there is a vip have"<<money<<"will recieve"<<moneyRECEVD(money,1.11)<<std::endl;//factor will be modified to 1.11


// }
//contant arguments
//int momo(const char *p){//momo function with argument char type p with contant value..for pointer espacially

//}





