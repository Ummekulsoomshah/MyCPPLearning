//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  class meal{
// public:
// void adddrink(string drink){
//     drinks.push_back(drink);
// }
// void printdrinks(){
//     if(drinks.size()==0){
//         cout<<"drinks:none"<<endl;
//     }
//     else if(drinks.size()==1){
//         cout<<"drinks"<<drinks.at(0)<<endl;
//     }
//     else if(drinks.size()==2){
//         cout<<"drinks"<<drinks.at(0)<<"and"<<drinks.at(1)<<endl;
//     }
//     else{
//         cout<<"drinks :"<<endl;
//         for(int i=0;i<drinks.size()-1;i++){
//             cout<<drinks.at(i)<<", ";
//         }
//         cout<<"and "<<drinks.at(drinks.size()-1)<<endl;
//     }
// }
// void printmeal(){
//     printdrinks();
// }
// private:
// vector<string> drinks;
//  };
//  int main(){
//  meal dinner;
//  dinner.adddrink("kofte");
//  dinner.printdrinks();
//  }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
// int main(){
// cout<<factorial(5)<<endl;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n<=1){
//         return n;
//     }
//     else{
//         return (factorial(n-1)+factorial(n-2));
//     }
// }
// int main(){
// cout<<factorial(3)<<endl;
// }
// #include<iostream>
// using namespace std;
// enum days_of_week{sun,mon,tue,wed,thu,fri,sat};
// int main(){
// days_of_week day1,day2;
// day1=mon;
// day2=sat;
// int diff=day1-day2;
// }
// #include <iostream>
// #include <conio.h>
// using namespace std;
// enum itsword
// {
//     NO,
//     YES
// };
// int main()
// {
//     itsword w = NO;
//     char ch = 'a';
//     int wordcount = 0;
//     cout << "enter a phrase" << endl;
//     do
//     {
//         ch = getch();
//         if (ch == ' ' || ch == '\r')
//         {
//             if (w = YES)
//             {
//                 wordcount++;
//                 w = NO;
//             }
//         }
//         else

//             if (w = NO)
//            ;

//         w = YES;

//     } while (ch != '\r');

//     cout << "word count is" << wordcount << endl;
// }
// #include <iostream>
// using namespace std;
// const int jack = 11;
// const int queen = 11;
// const int king = 11;
// const int ace = 11;
// enum Suit
// {
//     clubs,
//     diamonds,
//     hearts,
//     spades
// };
// struct card
// {
//     int number;
//     Suit suit;
// };
// int main()
// {
//     card temp, chosen, prize;
//     int position;

//     card card1 = {7, clubs};
//     cout << "card 1 is the seven of clubs";

//     card card2 = {jack, hearts};
//     cout << "card 2 is the jack of hearts";

//     card card3 = {ace, spades};
//     cout << "card 3 is the ace of spades";

//     prize = card3;
//     cout << "i am swapping card 1 and card 3";
//     temp = card3;
//     card3 = card1;
//     card1 = temp;

//     cout << "i am swapping card 2 and card 3";
//     temp = card3;
//     card3 = card2;
//     card2 = temp;

//     cout << "i am swapping card 1 and card 2";
//     temp = card2;
//     card2 = card1;
//     card1 = temp;

//     cout << "now,where(1,2,3) is the ace of spades?";
//     cin >> position;

//     switch (position)
//     {
//     case 1:
//         chosen = card1;
//         break;
//     case 2:
//         chosen = card2;
//         break;
//     case 3:
//         chosen = card3;
//         break;
//     }
//     if (chosen.number == prize.number && chosen.suit = prize.suit)
//         cout << "that's right you win";
//     else
//         cout << "sorry you lose";
// }
#include<iostream>
using namespace std;

const int jack = 11;
const int queen = 11;
const int king = 11;
const int ace = 11;

enum Suit {
    clubs,
    diamonds,
    hearts,
    spades
};

struct card {
    int number;
    Suit suit;
};

int main() {
    card temp, chosen, prize;
    int position;

    card card1 = { 7, clubs };
    cout << "card 1 is the seven of clubs"<<endl;

    card card2 = { jack, hearts };
    cout << "card 2 is the jack of hearts"<<endl;

    card card3 = { ace, spades };
    cout << "card 3 is the ace of spades"<<endl;

    prize = card3;
    cout << "i am swapping card 1 and card 3"<<endl;
    temp = card3;
    card3 = card1;
    card1 = temp;

    cout << "i am swapping card 2 and card 3"<<endl;
    temp = card3;
    card3 = card2;
    card2 = temp;

    cout << "i am swapping card 1 and card 2"<<endl;
    temp = card2;
    card2 = card1;
    card1 = temp;

    cout << "now, where (1, 2, 3) is the ace of spades? "<<endl;
    cin >> position;

    switch (position) {
    case 1:
        chosen = card1;
        break;
    case 2:
        chosen = card2;
        break;
    case 3:
        chosen = card3;
        break;
    }

    if (chosen.number == prize.number && chosen.suit == prize.suit)
        cout << "That's right, you win"<<endl;
    else
        cout << "Sorry, you lose"<<endl;

    return 0;
}
