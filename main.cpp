#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class calculator {

public:

    int firstNumber;
    int secondNumber;
    int result;

    void clearConsole() {
        for (int i = 0; i < 100; i++) {
        std::cout << std::endl;
        }
    }
    void line(){
        cout << "------------------------------" << endl;
    }

    int backToMenu() {

        clearConsole();
        menu();
    }

    void end() {
        return 0;
    }

    int addition(){

        clearConsole();

        cout << "Enter first number: ";
        cin >> firstNumber;
    
        cout << "Enter second number: ";
        cin >>  secondNumber;

        result = firstNumber + secondNumber;
        cout << "Result of the equation: " << firstNumber << " + " << secondNumber << "equals: " << result;
        cout << endl;

        line();
        nextAction();

    }

    int subtraction() {

        clearConsole();

        cout << "Enter first number: ";
        cin >> firstNumber;
    
        cout << "Enter second number: ";
        cin >>  secondNumber;

        result = firstNumber - secondNumber;
        cout << "Result of the equation: " << irstNumber << " - "<< secondNumber << "equals: " << result;
        cout << endl;

        line();
        nextAction();
    }

    void nextAction(){
        
        int nextAction;

        clearConsole();

        cout << "1- go back to menu" << endl;
        cout << "2- close program";
        cout << endl << endl;

        cout << "You choose: " << endl;
        cin >> nextAction;

        switch(nextAction){

            case 1: backToMenu();
            break;

            case 2: end();
            break;

            default: cout << "Error occur during choosing the action" << endl;

                Sleep(10);
                cout << "Automatic return to menu in progress";
                Sleep(10);
                cout << "wait..."
                backToMenu();

        }

    }

    void menu() {

        int choice; 

        clearConsole();

        cout << "Simple calculator in C++" << endl;
        line();

        cout << "What do you want today - select by typing a number below";
        cout << endl << endl;

        cout<<"1- adding two numbers" << endl;
        cout<<"2- subtraction two numbers";
        cout<<"3- close program"
        cout << endl << endl;
        
        cout << "You choose: " << endl;
        cin >> choice;

        switch (choice) {
            case 1: addition();
            break;

            case 2: subtraction();
            break;

            case 3: end();
            break;

            default: cout << "Error occur during choosing the action" << endl;

                Sleep(10);
                cout << "Automatic return to menu in progress";
                Sleep(10);
                cout << "wait..."
                backToMenu();
        }
}

};



int main(int argc, char const *argv[])  {
    
    calculator.menu();
    
}
