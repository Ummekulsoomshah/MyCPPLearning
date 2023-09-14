// #include <iostream>
// using namespace std;
// int main()
// {
// int intVar = 1500000000; //1,500,000,000
// intVar = (intVar * 10) / 10; //result too large
// cout << "intVar = " << intVar << endl; //wrong answer
// intVar = 1500000000; //cast to double
// // intVar = (static_cast<double>(intVar) * 10) / 10;
// cout << "intVar = "<< intVar << endl; //right answer
// return 0;
#include<iostream>
using namespace std;
int main()
{
int signedVar = 1500000000; //signed
unsigned int unsignVar = 1500000000; //unsigned
signedVar = (signedVar * 2) / 3; //calculation exceeds range
unsignVar = (unsignVar * 2) / 3; //calculation within range
cout << "signedVar = " << signedVar << endl; //wrong
cout << "unsignVar = " << unsignVar << endl; //OK
return 0;
}