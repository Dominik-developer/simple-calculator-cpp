#include <iostream>
#include <cstdlib>
#include <cmath>
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

    void sleep(int milliseconds) {
        std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
    }   

    void line() {
        cout << "------------------------------" << endl;
    }

    void backToMenu() {
        clearConsole();
        menu();
    }

    void end() {
        exit(0); 
    }

    void nextAction() {
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

            default: 
                cout << "Error occur during choosing the action" << endl;
                sleep(100);
                cout << "Automatic return to menu in progress ";
                sleep(1000);
                cout << "wait..." << endl;
                sleep(1000);
                backToMenu();
        }
    }

    void addition(){
        clearConsole();

        cout << "Enter first number: ";
        cin >> firstNumber;
    
        cout << "Enter second number: ";
        cin >>  secondNumber;

        result = firstNumber + secondNumber;
        cout << "Result of the equation: " << firstNumber << " + " << secondNumber << " equals: " << result;
        cout << endl;

        line();
        nextAction();
    }

    void subtraction() {

        clearConsole();

        cout << "Enter first number: ";
        cin >> firstNumber;
    
        cout << "Enter second number: ";
        cin >>  secondNumber;

        result = firstNumber - secondNumber;
        cout << "Result of the equation: " << firstNumber << " - " << secondNumber << " equals: " << result;
        cout << endl;

        line();
        nextAction();
    }

    void menu() {
        int choice; 

        clearConsole();

        cout << "Simple calculator in C++" << endl;
        
        line();

        cout << "What do you want today - select by typing a number below";
        cout << endl << endl;

        cout<<"1- adding two numbers" << endl;
        cout<<"2- subtraction two numbers" << endl;
        cout<<"3- close program" << endl;
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

            default: 
                cout << "Error occur during choosing the action" << endl;
                sleep(100);
                cout << "Automatic return to menu in progress" << endl;
                sleep(1000);
                cout << "wait..." << endl;
                sleep(1000);
                backToMenu();
        }
    }
};

int main(int argc, char const *argv[]) {

    calculator calc; // class calculator, object calc
    calc.menu(); // object calc, method menu
    
}
