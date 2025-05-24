#include <cassert>
#include <iostream>
#include <vector>
//task 1
//find the largest number among three numbers
/*
int main(){
    int x=9,y=8,z=40;
    if (x>y && x>z){
        std::cout << x<<" is the largest number" << std::endl;
    }
    else if (y>x && y>z){
        std::cout <<y<< " is the largest number" << std::endl;
    }
    else{
        std::cout <<z<< " is the largest number" << std::endl;
    }


    }
*/
//task 2
//right angle triangle
/*
int main(){
    int x=3,y=4,z=5;
    if (x*x + y*y == z*z){
        std::cout << "right angle triangle" << std::endl;
    }
    else{
        std::cout << "not a right angle triangle" << std::endl;
    }
}*/
//task 3
//is letter vowel or consonant
/*
int main(){
    char c='a';
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        std::cout << c << " is a vowel" << std::endl;
    }
    else{
        std::cout << c << " is a consonant" << std::endl;
    }
}*/
//task 4
//multiplication table
/*
int main(){
    int x =5;
    for (int i=0; i<=12; i++){
        std::cout << x << " * " << i << " = " << x*i << std::endl;
    }
}*/
//task 5
//sum of digits
/*
int main(){
    int x= 12345;
    int sum=0;
    while(x>0){
        sum+= x%10;
        x/=10;
    }
    std::cout << "sum of digits is " << sum << std::endl;
}*/
//task 6
//change from decimal to binary 
/*
int main(){
    int x= 10;
    int binary[32];
    int i=0;
    while(x>0){
        if (x%2 == 0){
            binary[i]=0;
        }
        else{
        binary[i]=1;
        }
        x/=2;
        i++;
    }
    for (int j=i-1; j>=0; j--){
        std::cout << binary[j];
    }
}*/
//task 7
//change from binary to decimal

//task 8
//calculate the value of ASCII
// int getValue(std::string s){
// int result = 0;
// for (int i=0; i<s.size()-1; i++){
//     result += abs(s[i] - s[i+1]);
// }
// return result;
// }
// int main(){
// std::cout<<getValue("hello")<<std::endl;
// assert(getValue("hello") == 13);
// std::cout<<"success"<<std::endl;
// }

//task 9
//final  value of experesion
int finalvalue(std::vector<std::string> s){
    int result = 0;
    for (std::string var: s){
        if (var == "X++" || var== "++X"){
            result++;
        }
        else {
            result--;
        }
    }
    return result;
}
int main(){
    std::vector<std::string> s = {"X--", "++X", "X--", "--X"};
    std::cout << finalvalue(s) << std::endl;
    assert(finalvalue(s) == 0);
    std::cout << "success" << std::endl;
}