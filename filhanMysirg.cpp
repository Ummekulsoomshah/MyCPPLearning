// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     // write 
//     // ofstream obj;
//     // obj.open("myfile.txt");
//     // obj<<"hey guys";
//     // read without space 
    
//     // ifstream obj1;
//     // char ch;
//     // obj1.open("myfile.txt");
//     // obj1>>ch;
//     // while (!obj1.eof())
//     // {
//     //     cout<<ch;
//     //     obj1>>ch;
//     // }
//     // obj1.close();

    
// //    read with space 
//     ifstream obj1;
//     char ch;//igonre the space betweern string
//     obj1.open("myfile.txt");
    
//     ch=obj1.get();

    
//     while(!obj1.eof()){
//         cout<<ch;//igonre the space betweern string
//         ch=obj1.get();
//         // obj1>>ch;
//     }
//     obj1.close();
// }






// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     // ofstream obj1;
//     string line;
//     // obj1.open("myfile2.txt");
//     // while (obj1)
//     // {
//     //     getline(cin,line);
//     //     if(line=="q"){
//     //         break;
//     //     }
//     //     obj1<<line<<endl;

//     // }
//     ifstream obj2;
//     obj2.open("myfile2.txt");
//     while (getline(obj2,line))
//     {
//         cout<<line<<endl;
//     }
//     obj2.close();
 
// }


