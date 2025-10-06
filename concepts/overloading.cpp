/*
    Function overloading allows you to have functions with similar names but different parameter types
    or number of parameters.
    It allows for use of a function multiple times with different arguments without overcrowding yourself with 
    multiple names.
*/

#include <iostream>
using namespace std;

void printSum(int a , int b) {
    cout<<"(int): "<<a+b <<"\n";
}

void printSum(double a , double b) {
    cout<<"(double): "<<a+b <<"\n";
}


int main() {
    printSum(5,10);
    printSum(6.5,8.5);    
}