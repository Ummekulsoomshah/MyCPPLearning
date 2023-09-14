// #include <iostream>
// class A
// {
// private:
//     int a;

//  protected:
//     void setdat(int k)//islo protected bnaya take child class isko access krske
//     {
//         a = k;
//     }
// };
// class B : public A
// {
// public:
//     void setvalue(int x)
//     {
//         setdat(x);
//     }
// };
// // class C:private B{
// //    public:                                  //why this do not caue an error even i made it private????
// //    void seting(int y){
// //     setvalue(y);
// //    }

// // };
// // int main()
// // {
// //     C obj;
// //     obj.seting(4);
// // }
// int main(){
//      B obj;
//      obj.setvalue(6);

// }
// #include <iostream>
// class counter
// {
// protected:
//     unsigned int count;

// public:
//     counter()
//     {
//         count = 0;
//     }
//     counter(int c)
//     {
//         count = c;
//     }
//     unsigned int get_count() const
//     {
//         return count;
//     }
//     counter operator++()
//     {
//         return counter(++count);
//     }
// };
// class countdn : public counter
// {
// public:
//     counter operator--()
//     {
//         return counter(--count);
//     }
// };
// int main()
// {
//     countdn c1;
//     std::cout << "\nc1=" << c1.get_count();
//     ++c1;
//     ++c1;
//     ++c1;
//     std::cout << "\nc1=" << c1.get_count();
//     --c1;
//     --c1;
//     std::cout << "\nc1=" << c1.get_count() << std::endl;
// }
// #include<iostream>
// using namespace std;
// class A{
//     private:
//     string name;
//     int age;
//     public:
//     void intro(string n,int a ){
//         name=n;
//         age=a;

//     }
//     string get(){
//         return name;

//     }

// };
// class B:public A
// {
//     public:
//     void setnew(string n1,int a1){
//         intro(n1,a1);
//     }
//     // string get(){ can not do this
//     //     return n1;

//     // }

// };
// int main(){
//     B kul;
//     kul.setnew("kulsoom",20);
//     cout<<"hey"<<kul.get();

// }
// #include<iostream>
// using namespace std;
// class person{
//     private:
//     string name;
//     int age;
//     public:
//     person(string n,int a){
//         name=n;
//         age=a;
//     }
//     string getname(){
//         return name;
//     }
//     int getage(){
//         return age;
//     }

// };
// class superhero:public person{
//     public:
//     superhero(string name,int age):person(name,age){};

// };
// int main(){
//     superhero s("superman",30);
//     cout<<s.getname()<<endl;
//     cout<<s.getage()<<endl;
// }
#include <iostream>
using namespace std;

// DO NOT EDIT code below this line

class CelestialBody
{
public:
    CelestialBody(double s, double m, string c, string n)
    {
        size = s;
        mass = m;
        atm_composition = c;
        name = n;
    }

    double GetSize()
    {
        return size;
    }

    double GetMass()
    {
        return mass;
    }

    string GetComposition()
    {
        return atm_composition;
    }

    string GetName()
    {
        return name;
    }

private:
    double size;
    double mass;
    string atm_composition;
    string name;
};

// DO NOT EDIT code above this line

// add class definitions below this line

// DO NOT EDIT//////////////////////////////
// class Satellite : public CelestialBody
// {   //
//     ///////////////////////////////////////////

// private:
//     string host_star;

// public:
//     Satellite(double s, double m, string ac, string n, string hs) : CelestialBody(s, m, ac, n)
//     {
//         host_star = hs;
//     }
//     string GetHostStar()
//     {
//         return host_star;
//     }
// };

// // DO NOT EDIT///////////////////////////
// class Planet : public CelestialBody
// {   //
//     ////////////////////////////////////////

// private:
//     string host_planet;

// public:
//     Planet(double s, double m, string ac, string n, string hp) : CelestialBody(s, m, ac, n)
//     {
//         host_planet = hp;
//     }
//     string GetHostPlanet()
//     {
//         return host_planet;
//     }
// };
// class Satellite extends CelestialBody
// {
// private
//     String hostPlanet;
// public
//     Satellite(double s, double m, String c, String n, String h)
//     {
//         super(s, m, c, n);
//         hostPlanet = h;
//     }
// public
//     String getHostPlanet()
//     {
//         return hostPlanet;
//     }
// public
//     void setHostPlanet(String newHostPlanet) { hostPlanet = newHostPlanet; }
// }
// // add class definitions above this line

// int
// main()
// {

//     // DO NOT EDIT code below this line

//     Satellite s(2651, 3716, "helium", "Moon", "Earth");
//     Planet p(5349, 8910, "nitrogen", "Earth", "Sun");
//     Satellite s2(3199, 13452, "nitrogen", "Titan", "Saturn");
//     Planet p2(82713, 56834, "hydrogen", "Saturn", "Sun");
//     cout << "Satellite name = " << s.GetName() << ", size = " << s.GetSize();
//     cout << ", mass = " << s.GetMass() << ", atmospheric composition = " << s.GetComposition();
//     cout << ", host planet = " << s.GetHostPlanet() << endl;
//     cout << "Planet name = " << p.GetName() << ", size = " << p.GetSize();
//     cout << ", mass = " << p.GetMass() << ", atmospheric composition = " << p.GetComposition();
//     cout << ", host star = " << p.GetHostStar() << endl;
//     cout << "Satellite name = " << s2.GetName() << ", size = " << s2.GetSize();
//     cout << ", mass = " << s2.GetMass() << ", atmospheric composition = " << s2.GetComposition();
//     cout << ", host planet = " << s2.GetHostPlanet() << endl;
//     cout << "Planet name = " << p2.GetName() << ", size = " << p2.GetSize();
//     cout << ", mass = " << p2.GetMass() << ", atmospheric composition = " << p2.GetComposition();
//     cout << ", host star = " << p2.GetHostStar() << endl;

//     // DO NOT EDIT code above this line

//     return 0;
// }
// #include <iostream>
// using namespace std;

// //DO NOT EDIT code below this line

// class CelestialBody {
// public:
//     CelestialBody(double s, double m, string c, string n) {
//         size = s;
//         mass = m;
//         atm_composition = c;
//         name = n;
//     }

//     double GetSize() {
//         return size;
//     }

//     double GetMass() {
//         return mass;
//     }

//     string GetComposition() {
//         return atm_composition;
//     }

//     string GetName() {
//         return name;
//     }

// private:
//     double size;
//     double mass;
//     string atm_composition;
//     string name;
// };

// //DO NOT EDIT code above this line

// //add class definitions below this line

// class Satellite : public CelestialBody {
// public:
//     Satellite(double s, double m, string c, string n, string hp) : CelestialBody(s, m, c, n) {
//         host_planet = hp;
//     }

//     string GetHostPlanet() {
//         return host_planet;
//     }

// private:
//     string host_planet;
// };

// // class Planet : public CelestialBody {
// public:
//     Planet(double s, double m, string c, string n, string hs) : CelestialBody(s, m, c, n) {
//         host_star = hs;
//     }

//     string GetHostStar() {
//         return host_star;
//     }

// private:
//     string host_star;
// };

// //add class definitions above this line

// int main() {

//     //DO NOT EDIT code below this line

//     Satellite s(2651, 3716, "helium", "Moon", "Earth");
//     Planet p(5349, 8910, "nitrogen", "Earth", "Sun");
//     Satellite s2(3199, 13452, "nitrogen", "Titan", "Saturn");
//     Planet p2(82713, 56834, "hydrogen", "Saturn", "Sun");
//     cout << "Satellite name = " << s.GetName() << ", size = " << s.GetSize();
//     cout << ", mass = " << s.GetMass() << ", atmospheric composition = " << s.GetComposition();
//     cout << ", host planet = " << s.GetHostPlanet() << endl;
//     cout << "Planet name = " << p.GetName() << ", size = " << p.GetSize();
//     cout << ", mass = " << p.GetMass() << ", atmospheric composition = " << p.GetComposition();
//     cout << ", host star = " << p.GetHostStar() << endl;
//     cout << "Satellite name = " << s2.GetName() << ", size = " << s2.GetSize();
//     cout << ", mass = " << s2.GetMass() << ", atmospheric composition = " << s2.GetComposition();
//     cout << ", host planet = " << s2.GetHostPlanet() << endl;
//     cout << "Planet name = " << p2.GetName() << ", size = " << p2.GetSize();
//     cout << ", mass = " << p2.GetMass() << ", atmospheric composition = " << p2.GetComposition();
//     cout << ", host star = " << p2.GetHostStar() << endl;

//     //DO NOT EDIT code above this line

//     return 0;
// }
// #include <iostream>
// using namespace std;

// //DO NOT EDIT code below this line

// class Parent1 {
//   public:
//     string Identify() {
//       return "This function is called from Parent1";
//     }
// };

// class Parent2 : public Parent1 {
//   public:
//     string Identify() {
//       return "This function is called from Parent2";
//     }
// };

// //DO NOT EDIT code above this line

// //add class definitions below this line

// class Child:public Parent2{
// public:
// string Identify(){
//   return "This function is called from Child";
// }
// string Identify2(){
//   return Parent2::Identify();
// }
// string Identify3(){
//   return Parent1::Identify();
// }
// };

// //add class definitions above this line

// int main() {

//   //DO NOT EDIT code below this line

//   Child c;
//   cout << c.Identify() << endl;
//   cout << c.Identify2() << endl;
//   cout << c.Identify3() << endl;

//   //DO NOT EDIT code above this line

//   return 0;

// }
// #include <iostream>
// using namespace std;

// //DO NOT EDIT code below this line

// class Parent1 {
// public:
//   string Identify() {
//     return "This function is called from Parent1";
//   }
// };

// class Parent2 : public Parent1 {
// public:
//   string Identify() {
//     return "This function is called from Parent2";
//   }
// };

// //DO NOT EDIT code above this line

// //add class definitions below this line

// class Child : public Parent2 {
// public:
//   string Identify() {
//     return "This function is called from Child";
//   }

//   string Identify2() {
//     return Parent2::Identify();
//   }

//   string Identify3() {
//     return Parent1::Identify();
//   }
// };

// //add class definitions above this line

// int main() {

//   //DO NOT EDIT code below this line

//   Child c;
//   cout << c.Identify() << endl;
//   cout << c.Identify2() << endl;
//   cout << c.Identify3() << endl;

//   //DO NOT EDIT code above this line

//   return 0;

// }
// #include <iostream>
// using namespace std;

// //DO NOT EDIT code below this line

// class PiggyBank {
//   public:
//     PiggyBank(int o, int f, int tn, int tw) {
//       ones = o;
//       fives = f;
//       tens = tn;
//       twenties = tw;
//     }

//     int GetOnes() {
//       return ones;
//     }

//     void SetOnes(int new_ones) {
//       ones = new_ones;
//     }

//     int GetFives() {
//       return fives;
//     }

//     void SetFives(int new_fives) {
//       fives = new_fives;
//     }

//     int GetTens() {
//       return tens;
//     }

//     void SetTens(int new_tens) {
//       tens = new_tens;
//     }

//     int GetTwenties() {
//       return twenties;
//     }

//     void SetTwenties(int new_twenties) {
//       twenties = new_twenties;
//     }

//   private:
//     int ones;
//     int fives;
//     int tens;
//     int twenties;
// };

// //DO NOT EDIT code above this line

// //add class definitions below this line

// //DO NOT EDIT/////////////////////
// class Cash : public PiggyBank { //
// //////////////////////////////////
// public:
// Cash(int o,int u,int j,int a):PiggyBank(o,u,j,a){}
// void DisplayBills() {
//   cout << "Ones: " << GetOnes() << endl;
//   cout << "Fives: " << GetFives() << endl;
//   cout << "Tens: " << GetTens() << endl;
//   cout << "Twenties: " << GetTwenties() << endl;
// }

// void DisplayCashTotal() {
//   int total = GetOnes() + (GetFives() * 5) + (GetTens() * 10) + (GetTwenties() * 20);
//   cout<< total << endl;
// }

// };

// //add class definitions above this line

// int main() {

//   //DO NOT EDIT code below this line

//   Cash c(1, 2, 3, 4);
//   c.DisplayBills();
//   c.DisplayCashTotal();
//   Cash c2(9, 8, 7, 6);
//   c2.DisplayBills();
//   c2.DisplayCashTotal();

//   //DO NOT EDIT code above this line

//   return 0;

// }
// #include <iostream>
// using namespace std;

// // DO NOT EDIT code below this line

// class Person
// {
// public:
//     Person(string n, string a)
//     {
//         name = n;
//         address = a;
//     }

//     string GetName()
//     {
//         return name;
//     }

//     void SetName(string new_name)
//     {
//         name = new_name;
//     }

//     string GetAddress()
//     {
//         return address;
//     }

//     void SetAddress(string new_address)
//     {
//         address = new_address;
//     }

//     string Info()
//     {
//         return name + " lives at " + address + ".\n";
//     }

// private:
//     string name;
//     string address;
// };

// // DO NOT EDIT code above this line

// // add class definitions below this line

// // DO NOT EDIT/////////////////////////////////////////////////
// class CardHolder : public Person
// {       //
// public: //
//     CardHolder(string n, string a, int an) : Person(n, a)
//     {                        //
//         account_number = an; //
//         balance = 0;         //
//         credit_limit = 5000; //
//     }                        //
//                              //////////////////////////////////////////////////////////////
//     void setaccount_number(int a)
//     {
//         account_number = a;
//     }
//     void setbalance(double b)
//     {
//         balance = b;
//     }
//     void setcredit_limit(int cl)
//     {
//         credit_limit = cl;
//     }
//     int getaccount_number()
//     {
//         return account_number;
//     }
//     double GetBalance()
//     {
//         return balance;
//     }
//     int getcredit_limit()
//     {
//         return credit_limit;
//     }
//     void Sale(double x)
//     {
//         balance += x;
//     }
//     void Payment(double p)
//     {
//         balance -= p;
//     }

// private:
//     int account_number, credit_limit;
//     double  balance;
// };

// // DO NOT EDIT/////////////////////////////////////////////////////////////
// class PlatinumClient : public CardHolder
// {       //
// public: //
//     PlatinumClient(string n, string a, int an) : CardHolder(n, a, an)
//     {                     //
//         cash_back = 0.02; //
//         rewards = 0;      //
//     }                     //
//     //////////////////////////////////////////////////////////////////////////
//     void setrewards(int r)
//     {
//         rewards = r;
//     }
//     void setcash_back(double cb)
//     {
//         cash_back = cb;
//     }
//     double getcash_back()
//     {
//         return cash_back;
//     }
//     int GetRewards()
//     {
//         return rewards;
//     }
//     void Sale(double Price)
//     {
//         double rewards1=Price *cash_back;
//         rewards+=rewards1;
        
        
//         setbalance(GetBalance()+Price);
//     }

// private:
//     double cash_back;
//     int rewards;};

//     // add class definitions above this line

//     int main()
//     {

//         // DO NOT EDIT code below this line

//         PlatinumClient pc("Sarah", "101 Main Street", 123364);
//         pc.CardHolder::Sale(100);
//         cout << pc.GetRewards() << endl;
//         pc.Sale(100);
//         cout << pc.GetRewards() << endl;
//         cout << pc.GetBalance() << endl;
//         pc.Payment(50);
//         cout << pc.GetBalance() << endl;
//         cout << pc.Info() << endl;

//         // DO NOT EDIT code above this line

//         return 0;
//     }
// #include <iostream>
// #include <string>

// using namespace std;

// class Person {
// public:
//   Person(string n, string a) {
//     name = n;
//     address = a;
//   }
  
//   string GetName() {
//     return name;
//   }

//   void SetName(string new_name) {
//     name = new_name;
//   }

//   string GetAddress() {
//     return address;
//   }

//   void SetAddress(string new_address) {
//     address = new_address;
//   }

//   string Info() {
//     return name + " lives at " + address + ".\n";
//   }
  
// private:
//   string name;
//   string address;
// };

// class CardHolder : public Person {
// public:
//   CardHolder(string n, string a, int an) : Person(n, a) {
//     account_number = an;
//     balance = 0;
//     credit_limit = 5000;
//   }
  
//   int GetAccountNumber() {
//     return account_number;
//   }
  
//   void SetAccountNumber(int new_account_number) {
//     account_number = new_account_number;
//   }
  
//   double GetBalance() {
//     return balance;
//   }
  
//   void SetBalance(double new_balance) {
//     balance = new_balance;
//   }
  
//   double GetCreditLimit() {
//     return credit_limit;
//   }
  
//   void SetCreditLimit(double new_credit_limit) {
//     credit_limit = new_credit_limit;
//   }
  
//   void Sale(double sale_price) {
//     balance += sale_price;
//   }
  
//   void Payment(double amount) {
//     balance -= amount;
//   }
  
// private:
//   int account_number;
//   double balance;
//   double credit_limit;
// };

// class PlatinumClient : public CardHolder {
// public:
//   PlatinumClient(string n, string a, int an) : CardHolder(n, a, an) {
//     cash_back = 0.02;
//     rewards = 0;
//   }
  
//   double GetCashBack() {
//     return cash_back;
//   }
  
//   void SetCashBack(double new_cash_back) {
//     cash_back = new_cash_back;
//   }
  
//   double GetRewards() {
//     return rewards;
//   }
  
//   void SetRewards(double new_rewards) {
//     rewards = new_rewards;
//   }
  
//   void Sale(double sale_price) {
//     double cash_back_amount = sale_price * cash_back;
//     rewards += cash_back_amount;
//     CardHolder::SetBalance(CardHolder::GetBalance() + sale_price);
//   }
  
// private:
//   double cash_back;
//   double rewards;
// };

// int main() {
//   PlatinumClient pc("Sarah", "101 Main Street", 123364);
//   pc.Sale(100);
//   cout << pc.GetRewards() << endl;
//   pc.Sale(100);
//   cout << pc.GetRewards() << endl;
//   cout << pc.GetBalance() << endl;
//   pc.Payment(50);
//   cout << pc.GetBalance() << endl;
//   cout << pc.Info() << endl;
//   return 0;
// }
#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Person {
  public:
    Person(string n, string a) {
      name = n;
      address = a;
    }
  
    string GetName() {
      return name;
    }

    void SetName(string new_name) {
      name = new_name;
    }

    string GetAddress() {
      return address;
    }

    void SetAddress(string new_address) {
      address = new_address;
    }

    string Info() {
      return name + " lives at " + address + ".\n";
    }
  
  private:
    string name;
    string address;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////////////////////////////////
class CardHolder : public Person {                          //
  public:                                                   //
    CardHolder(string n, string a, int an) : Person(n, a) { //
      account_number = an;                                  //
      balance = 0;                                          //
      credit_limit = 5000;                                  //
    }                                                       //
//////////////////////////////////////////////////////////////
  void setaccount_number(int a)
    {
        account_number = a;
    }
    void setbalance(double b)
    {
        balance = b;
    }
    void setcredit_limit(int cl)
    {
        credit_limit = cl;
    }
    int getaccount_number()
    {
        return account_number;
    }
    double GetBalance()
    {
        return balance;
    }
    int getcredit_limit()
    {
        return credit_limit;
    }
    void Sale(double x)
    {
        balance += x;
    }
    void Payment(double p)
    {
        balance -= p;
    }

private:
    int account_number, credit_limit;
    double  balance;
};


  
  
//DO NOT EDIT/////////////////////////////////////////////////////////////
class PlatinumClient : public CardHolder {                              //
  public:                                                               //
    PlatinumClient(string n, string a, int an) : CardHolder(n, a, an) { //
      cash_back = 0.02;                                                 //
      rewards = 0;                                                      //
    }                                                                   //
//////////////////////////////////////////////////////////////////////////

void setrewards(int r)
    {
        rewards = r;
    }
    void setcash_back(double cb)
    {
        cash_back = cb;
    }
    double getcash_back()
    {
        return cash_back;
    }
    int GetRewards()
    {
        return rewards;
    }
    void Sale(double Price)
    {
        double rewards1=Price *cash_back;
        rewards+=rewards1;
        
        
        setbalance(GetBalance()+Price);
    }

private:
    double cash_back;
    int rewards;};

  
  
  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  PlatinumClient pc("Sarah", "101 Main Street", 123364);
  pc.CardHolder::Sale(100);
  cout << pc.GetRewards() << endl;
  pc.Sale(100);
  cout << pc.GetRewards() << endl;
  cout << pc.GetBalance() << endl;
  pc.Payment(50);
  cout << pc.GetBalance() << endl;
  cout << pc.Info() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}