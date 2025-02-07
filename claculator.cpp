#include <iostream>     //  these are needed for the code to run
using namespace std;

//  the different fuctions of the calculator will be here :)
float num1;
float num2;
string opperation;
bool control = false;
//  Addition section in the code
float addition(float x, float y){       //  Putting void means that theres no return
    float answer = x + y;
    return answer;
}
//  Subtraction section in the code
float subtraction(float x, float y){
    float answer = x - y;
    return answer;
}
//  Division section in the code
float division(float x, float y){
    float answer = x / y;
    return answer;
}
//  Multplication section in the code
float multplication(float x, float y){
    float answer = x * y;
    return answer;
}
    //  Section to input items
    int main(){
        while (true) {
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Enter another number: ";
            cin >> num2;
            cout << "Enter the opperation you would like to do (+,-,/,*): ";
            cin >> opperation;
            if (opperation == "+") {
                cout << "Your answer of the equation is " << addition(num1, num2) << endl;
            } else if (opperation == "-") {
                cout << "Your answer of the equation is " << subtraction(num1, num2) << endl;
            } else if (opperation == "/") {
                cout << "Your answer of the equation is " << division(num1, num2) << endl;
            } else if (opperation == "*") {
                cout << "Your answer of the equation is " << multplication(num1, num2) << endl;
            }else{
                cout << "Input an actual command" << endl;
            }
            return 0;
        }
    }
