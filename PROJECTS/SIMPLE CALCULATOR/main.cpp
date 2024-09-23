#include<iostream>
#include<fstream>
using namespace std;


class Calculator
{
    private:
        float operand1;
        float operand2;
        float Result;
        long Operation_number;
        static long NextOperaionNumber;
    public:
        Calculator()
        {
            cout << "Enter the First Operand : ";
            cin >> operand1;
            cout << "Enter the Second Operand : ";
            cin >> operand2;
        }
        float add()
        {
            Result = operand1+operand2;
            Operation_number = NextOperaionNumber;
            NextOperaionNumber++;
            ofstream outFile ("Calculator.txt", ios::app);
            outFile << "\nOperation number " << Operation_number << endl;
            outFile << "Addition Operation called." << endl;
            outFile << "Operand 1 : " << operand1 << endl;
            outFile << "Operand 2 : " << operand2 << endl;
            outFile << "Result : " << Result << endl;
            outFile.close();
            return Result;
        }
        float subtract()
        {
            Result = operand1-operand2;
            Operation_number = NextOperaionNumber;
            NextOperaionNumber++; 
            ofstream outFile("Calculator.txt", ios::app);
            outFile << "\nOperation number " << Operation_number << endl;
            outFile << "Subtraction Operation called." << endl;
            outFile << "Operand 1 : " << operand1 << endl;
            outFile << "Operand 2 : " << operand2 << endl;
            outFile << "Result : " << Result << endl;
            outFile.close();
            return Result;
        }
        float multiply()
        {
            Result = operand1*operand2;
            Operation_number = NextOperaionNumber;
            NextOperaionNumber++; 
            ofstream outFile("Calculator.txt", ios::app);
            outFile << "\nOperation number " << Operation_number << endl;
            outFile << "Multiplication Operation called." << endl;
            outFile << "Operand 1 : " << operand1 << endl;
            outFile << "Operand 2 : " << operand2 << endl;
            outFile << "Result : " << Result << endl;
            outFile.close();
            return Result;
        }
        float Division()
        {
            if(operand2==0)
                cout << "Dinominator Cannot be Zero..!";
            else
            {
                
                Result = operand1/operand2;
                Operation_number = NextOperaionNumber;
                NextOperaionNumber++;
                ofstream outFile("Calculator.txt", ios::app);
                outFile << "\nOperation number " << Operation_number << endl;
                outFile << "Divition Operation called." << endl;
                outFile << "Operand 1 : " << operand1 << endl;
                outFile << "Operand 2 : " << operand2 << endl;
                outFile << "Result : " << Result << endl;
                outFile.close();
                return Result;
            }
        }
};


long Calculator::NextOperaionNumber = 1;

int main()
{
    int choice;
    float input1;
    float input2;

    do
    {
        cout << "\n\n\t\t\t******** SIMPLE CALCULATOR ********";
        cout << "\n1.Addition.";
        cout << "\n2.Subtraction.";
        cout << "\n3.Mutiplication.";
        cout << "\n4.Divition.";
        cout << "\n5.Exit.";

        cout << "\n\nEnter your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                Calculator C;
                cout << "The Addition : " << C.add();
                break;
            }
            case 2:
            {
                Calculator C;
                cout << "The Subtraction : " << C.subtract();
                break;
            }
            case 3:
            {
                Calculator C;
                cout << "The multiplication : " << C.multiply();
                break;
            }
            case 4:
            {
                Calculator C;
                cout << "The Division : " << C.Division();
                break;
            }
            case 5:
                cout << "Exiting...";
                break;
        }
    }while(choice!=5);
}