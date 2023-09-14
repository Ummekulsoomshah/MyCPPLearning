// #include <iostream>
// using namespace std;
// class words{
//     public:
//     words(string str,int n){
//         word=str;
//         count=n;

//     }
//     void printer(){
//         cout<<"the number of vowels in"<<word;
//         cout<<"is"<<countvowels(word,count)<<endl;

//     }
//     private:
//     string word;
//     int count;
//     bool isvowel(char ch){
//         ch==toupper(ch);
//         return (ch=="A" || ch=='E' || ch=="I" || ch=="O" || ch=="U");
//     }
//     int countvowels(string str,int n){
//         if(n==1){
//             return isvowel(str[n-1]);

//         }
//         return countvowels(str,n-1)+isvowel(str[n-1]);
//     }


// };
// int main(){
//     string s="house";
//     words vowels(s,s.length());
//     vowels.printer();
// }
// #include<iostream>
// using namespace std;
// class person{
//     string name;
//     int age;
//     int salary;
//     public:
//     void setdata(string n,int a,int s){
//         name=n;
//         age=a;
//         salary=s;
//     }
//     int getage(){
//         return age;
//     }
//     int getsalary(){
//         return salary;
//     }
//     string getname(){
//         return name;
//     }




// };
// int main(){
//     person kulsoom;
//     kulsoom.setdata("umme Kulsoom",20,2000000000);
//     cout<<kulsoom.getage();
//     cout<<kulsoom.getname();

// }
// #include<iostream>
// #include<typeinfo>
// using namespace std;
// class player{
//     public:
//     player(){
//         health=100;
//         score=0;
//         level=1;
//     }
//     private:
//     int health ,score,level;


// };
// int main(){
//     player maroi;
//     player lungi;
//     cout<<boolalpha;
//     cout<<(typeid(maroi)==typeid(lungi))<<endl;
// }
// #include<iostream>
// using namespace std;
// class player
// {
//     public:
//     player(){
//     health=100;
//     score=0;
//     level=1;}
//     static bool compareplayer(player p1,player p2){
//         if ((p1.health==p2.health)&&(p1.score==p2.score)&&(p1.level==p2.level)){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     void nextlevel(){
//         level++;
//     }
//     private:
//     int health ,score,level;



// };



// int main(){
//     player maroi;
//     player lungi;
//     maroi.nextlevel();
//     cout<<boolalpha;
//     cout<<player::compareplayer(maroi,lungi)<<endl;

// }
#include<iostream>
using namespace std;
class player{
    private:
    int health,score;
    static int level;

};
int main(){

}