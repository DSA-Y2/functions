/*
 Lambda functions are anonymous functions meaning they don't have names.
 They're used for simple tasks that would otherwise need defining a function traditionally.

 syntax:
    [capture](parameters) -> return_type { body }

    capture:
     local variables from the surrouding scope that are captured on creation 
    parameters:
      regular function parameters
    return_type:
      regular function
*/

#include <iostream> 
using namespace std;

int main() {
    int value = 5;

    []() {
     cout<<"Automatically called lambda function \n";
    }();

    auto multiply = [value](int multipler){
        return value * multipler;
    };

    cout<<multiply(5) << "\n";
    cout<<multiply(6);
}