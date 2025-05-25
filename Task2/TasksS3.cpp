#include <iostream>
#include <algorithm>
#include <vector>
const int max_size=10000;
int main(){
//     //task  1 
//     //create function to calvulate the max num in array
// int n;
// std::cin>>n;
// int arr[max_size];
// for (int i=0; i<n ; i++)
// {
// std::cin>>arr[i];
// }
// auto max = [](int *arr, int size){
//     int m=arr[0];
// for(int i =0 ; i<size;i++){
//     if (m < arr[i]){
//         m = arr[i];
//     }
// }
// return m;
// };
// std::cout<<max(arr,n)<<std::endl;
// ///other solution with vector
//   std::vector<int> arr2 = {3, 10, 5, 7};

//     auto max_value = [](const std::vector<int>& v) {
//         return *std::max_element(v.begin(), v.end());
//     };

//     std::cout << "Max value: " << max_value(arr2) << std::endl;
//task 2 
// int n;
// std::cout<<"Enter the num of Array elemnts: "<<std::endl;
// std::cin>>n;
// int arr[max_size];
// std::cout<<"Enter the values of Array elemnts: "<<std::endl;
// for (int i=0; i<n ; i++)
// {
// std::cin>>arr[i];
// }
// auto search = [](int *arr, int size){
//     std::cout<<"Enter the num you search about it : "<<std::endl;
//     int s;
//     std::cin>>s;
// for(int i =0 ; i<size;i++){
//     if (s ==arr[i]){
//        return arr[i];
//     }
// }
// return -1;
// };
// if (search(arr,n) == -1){
// std::cout<<"Number not found"<<std::endl;
// return 0;
// }
// std::cout<<"number is found : "<<search(arr,n)<<std::endl;
//otheer solution using vector
// std::vector<int> arr2 = {4,6,8,2,3,10};
// auto se = [](std::vector<int>& v)->int{
//     int target;
//     std::cin>>target;
//     auto t= std::find(v.begin(),v.end(),target);
//     if (t != v.end()){
//             return std::distance( v.begin(),t);
//     }
//     else{
//         return -1 ;
//     }
// };
// auto st = se(arr2);
// if (st !=-1){
// std::cout<<"number is :" <<arr2[st]<<std::endl;

// }
// else{
//     std::cout<<"number is not found" <<std::endl;

// }
//task 3 : delete number in array
// std::vector<int> arr{9,8,4,7,2};
// int num_deleted = 4;
// arr.erase(std::remove(arr.begin(),arr.end(),num_deleted),arr.end());
// for (int i : arr){
// std::cout<<i<<std::endl;
// }
// //- merge two arrays together
// std::vector<int> v1{8,4,9,0};
// std::vector<int> v2{3,7,1,0};
// v1.insert(v1.end(),v2.begin(),v2.end());
// for (int val : v1){
//     std::cout<<val<<std::endl;
// }
//find the even and odd numbers in the array
// std::vector<int> f{3,6,1,9,4,20,10,2};
// std::vector<int>evens;
// std::vector<int>odds;
// //int even= std::count_if(f.begin(),f.end(),[](int x){return x%2 == 0;}); //find how many even values
// std::copy_if(f.begin(),f.end(),std::back_inserter(evens),[](int x){
// return x%2 == 0;
// });
// std::copy_if(f.begin(),f.end(),std::back_inserter(odds),[](int x){
// return x%2 == 1;
// });
// std::cout<<"the even values in the array are: "<<std::endl;
// for(int v : evens){std::cout<<v<<std::endl;}
// std::cout<<"the odd values in the array are: "<<std::endl;
// for(int v : odds){std::cout<<v<<std::endl;}
//Simple Lambda: Write a lambda function to calculate the square of a given number.
// auto squre = [](int x){
//     return x*x;
// };
// int num;
// std::cout<<"Enter the num: ";
// std::cin>>num;
// std::cout<<"the squre of "<<num<<std::endl;
// std::cout<<squre(num)<<std::endl;
// //using vectors 
// std::vector<int> n{6,9,3,2,1};
// std::cout<<"here is the squre of all elemnts in array "<<num<<std::endl;
// std::for_each(n.begin(),n.end(),[](int x){
// std::cout<<x*x<<std::endl;
// });
//Sort with Lambda: Use lambda functions to sort an array of integers in ascending and descending order.
std::vector<int> g{4,9,0,10,2,34,3};
std::sort(g.begin(),g.end(),[](int a, int b){
      return a<b;
});
std::cout<<"print the values of Array in Ascending "<<std::endl;
for(int i: g){
    std::cout<<i<<std::endl;

}
std::sort(g.begin(),g.end(),[](int a, int b){
      return a>b;
});
std::cout<<"print the values of Array in Deascending "<<std::endl;
for(int i: g){
    std::cout<<i<<std::endl;

}
}