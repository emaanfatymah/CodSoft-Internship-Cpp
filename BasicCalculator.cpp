#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    int operation;
    
	cout<< "			***********************" <<endl;
    cout<< " 	                *   Basic Calculator  *" <<endl;
    cout<< "			***********************" <<endl;
   
    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    cout<<endl<<endl<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl; 
    cout<<endl<<endl<<"Choose an operation: ";
    cin>>operation;

    switch (operation) {
        case 1:
            result=num1 + num2;
            cout<<"Result: "<<num1<<" + "<<num2<<" = "<<result<<endl;
            break;
        case 2:
            result=num1 - num2;
            cout<<"Result: "<<num1<<" - "<<num2<<" = "<<result<<endl;
            break;
        case 3:
            result=num1 * num2;
            cout<<"Result: "<<num1<<" * "<<num2<<" = "<<result<<endl;
            break;
        case 4:
            if(num2 != 0){
                result=num1 / num2;
                cout<<"Result: "<<num1<< " / "<<num2<<" = "<<result<<endl;
            } else{
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
            break;
        default:
            cout<<"Error: Invalid operation. Please choose 1,2,3 and 4"<<endl;
    }

    return 0;
}

