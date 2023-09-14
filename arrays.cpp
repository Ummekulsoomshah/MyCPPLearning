// #include<iostream>
// int main(){
//     int marks[4]={2,3,55,6};
    // std::cout<<marks[0];
    // std::cout<<marks[1];
    // std::cout<<marks[2];

    // for(int i=0;i<=4;i++)
    // {
    //     std::cout<<marks[i]<<std::endl;
    // }
    // int i=0;
    // while(i<=4){
    //     std::cout<<marks[i]<<std::endl;
    //     i++;
    // }

    // int mathmarks[3];
    // mathmarks[0]=34;
    // mathmarks[1]=25;
    // mathmarks[2]=45;
    
    // int i=0;
    // do{
    //     std::cout<<mathmarks[i]<<std::endl;
    //     i++;
    // }while(true);

// 
// #include<iostream>
// int main(){
//     int arr[3];
//     arr[0]=1;
//     arr[1]=7;
//     arr[2]={};//agr koi value nh dete toh by default zero dljata
//     std::cout<<arr[0]<<std::endl;
//     std::cout<<arr[1]<<std::endl;
//     std::cout<<arr[2]<<std::endl;
// }
//  #include<iostream>
// int main(){
//     int arr[5]{};
//     double arr1[5]{};
//     std::string arr2[5]{};
//     std::cout<<arr[0];
//     std::cout<<arr;
    
// }
//  #include<iostream>
// int main(){
//     int arr[5]={2,3,5};
//     int arr1[]={2,3,5};
//     std::cout<<arr[2]<<std::endl;
//     std::cout<<arr1[2]<<std::endl;
// }
//  #include<iostream>//now the students become the index so that we can use them in real world
// enum student{
//     kulsoom,
//     aelia,
//     maria,
//     maheer,
//     zunaira,
//     amna,
//     l//this couts the no of elements have been specified
// };

// int main(){
//     int testmarks[l]{};
//     testmarks[kulsoom]=78;
//     std::cout<<testmarks[4];

// }
//  #include<iostream>//now the students become the index so that we can use them in real world
// namespace studentName {
// enum student{
//     kulsoom,
//     aelia,
//     maria,
//     maheer,
//     zunaira,
//     amna,
//     l//this couts the no of elements have been specified
// };
// }
// int main(){
//     int testmarks[studentName::l]{};
//     testmarks[studentName::kulsoom]=90;

// }
// #include<iostream>
// void passvalue(int value){//dosent changes 
//     value=99;
// }
// void passArray(int prime[5]){//changes the array directly
//     prime[0]=11;
//     prime[1]=15;
//     prime[2]=17;
//     prime[3]=7;
//     prime[4]=61;

// }
// int main(){
//     int value=1;
//     std::cout<<"the value before calling function"<<value<<std::endl;
//     passvalue(value);
//     std::cout<<"the value after calling function"<<value<<std::endl;//both gives the same value of loca variable value
//     int prime[5]{1,2,3,4,5};
//     std::cout<<"the value before calling function"<<prime[3]<<std::endl;
//     passArray(prime);
//     std::cout<<"the value after calling function"<<prime[3]<<std::endl;//the value would be chsnged bcz of pointers in arrays

// }
// #include<iostream>
// int main(){
// int arr[2];
// arr[1]=0;
// arr[0]=8;
// std::cout<<"the value of arr elemnt at index 0 is"<<arr[0];


// }
// #include<iostream>
// enum students{
//     kaly,
//     cindrella,
//     sleeping_beauty,
//     bardie_diaries,
//     max_beauties


// };
// int main(){
//     int a[max_beauties]={};
//     a[bardie_diaries]=99;
//     std::cout<<"the value of barbie diaries is"<<a[bardie_diaries];
// }
// #include<iostream>//doing swapig with the help of array

// void arrayswap(int momo[2]){
//     int temp;
//     temp=momo[1];
//     momo[1]=momo[0];
//     momo[0]=temp;
// }
// int main(){
    
//     int prime[2]{3,4};
//     std::cout<<"befor change "<<prime[1]<<"  "<<prime[0]<<std::endl;
    
//     arrayswap(prime);
//     std::cout<<"after change "<<prime[1]<<"  "<<prime[0]<<std::endl;

// }
//to find the size of array
// #include<iostream>
// #include<iterator>


// int main(){
//     int array[]{1,2,34};
//     std::cout<<"the size of array is "<<std::size(array)<<" elements";//the error comes that size is not member of namespace 
// }
// #include<iostream>
// int main(){
//     int prime[5]{1,2,3,4,5};
//     prime[5]=15;
//     std::cout<<prime[5]<<"  "<<prime[4]<<std::endl;
// }
// #include<iostream>
// enum animals{
//     chiken,
//     sher,
//     kawa,
//     hathi,
//     panda,
//     bndr,
//     max_janwr

// };
// int main(){
//     int  array[max_janwr]{2,4,2,4,2,2};
//     std::cout<<"the no of legs of sher is"<<array[sher];
    

// }

// #include<iostream>
// int main(){
// constexpr int scores[]{ 84, 92, 76, 81, 56 };
// //constexpr int numStudents{ static_cast<int>(std::size(scores)) };
// const int numStudents{ sizeof(scores) / sizeof(scores[0]) }; // use this instead if not C++17 capable
// int totalScore{ 0 };

// // use a loop to calculate totalScore
// for(int student{ 0 }; student < numStudents; ++student)
//     totalScore += scores[student];

// auto averageScore{ static_cast<double>(totalScore) / numStudents };
// std::cout<<averageScore;
// }

// #include<iostream>//it also give the same result
// int main(){
// int scores[]{ 84, 92, 76, 81, 56 };
// //constexpr int numStudents{ static_cast<int>(std::size(scores)) };
// int numStudents{ sizeof(scores) / sizeof(scores[0]) }; // use this instead if not C++17 capable
// int sumScore{ 0 };

// // use a loop to calculate totalScore
// for(int student{ 0 }; student < numStudents; ++student)
//     sumScore += scores[student];

// double averageScore{double (sumScore) / numStudents };
// std::cout<<averageScore;
// }
// #include<iostream>
// int main(){
//     int students[]{1,2,3,4,5,6};
//     int no_students=sizeof(students)/sizeof(students[0]);
//     int total=0;
//     for(int i=0;i<=no_students;i++)
//     total+=students[i];
//     auto avg=total/no_students;
//     std::cout<<avg;
// }
// #include<iostream>
// int main(){
//     int arr[]{1,2,9,38,4};
//     int totalnum=sizeof(arr)/sizeof(arr[0]);
//     int max_score=0;
//     for(int i=0;i<totalnum;i++){
//         if (arr[i]>max_score){
//             max_score=arr[i];
//         }
//     }
//         std::cout<<"the best score was"<<max_score;
    
// }
