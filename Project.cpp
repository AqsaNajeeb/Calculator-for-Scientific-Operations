#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	cout<< endl<<"************Calculator for Scientific Operations************"<< endl<< endl;
	int num1, num2, choice, select, exp, root;
	double angleInRadian, ln, base;
	char ch;
	do {
	cout << endl;
	cout<<"Choose any Operation..."<< endl;
	cout << setw(35) << "1 : Arithmetic Operations" << endl;
	cout << setw(37) << "2 : Trigonometric Functions" << endl;
	cout << setw(35) << "3 : Logarithmic Functions" << endl;
	cout << setw(29) << "4 : Power Functions" << endl;
	cout << setw(28) << "5 : Root Functions" << endl;
	cout << setw(18) << "6 : Exit" << endl<< endl;
	cin>>choice;
	
	if(choice == 1) {
		cout << endl;
		cout << setw(22) << "1 : Addition" << endl;
	    cout << setw(25) << "2 : Subtraction" << endl;
	    cout << setw(28) << "3 : Multiplication" << endl;
	    cout << setw(22) << "4 : Division" << endl << endl;
	    cin>>select;
	    
	    cout<<"\nEnter first number: ";
	    cin>>num1;
	    cout<<"Enter second number: ";
	    cin>>num2;
	    cout << endl << endl;
	    
	    switch(select) {
	    	case 1 : 
	    	   cout << "Result = " << num1+num2 << endl;
	    	   break;
	    	case 2 : 
	    	   cout << "Result = " << num1-num2 << endl;
	    	   break;
	    	case 3 : 
	    	   cout << "Result = " << num1*num2 << endl;
	    	   break;
	    	case 4 : 
	    	{
			
	    	   if(num2 == 0)
	    	   {
	    	   	cout<<"Invalid Division!! (not divisible by 0)"<<endl;
	    	   	cout<<"Enter another second number: ";
	    	   	cin>>num2;
	    	   	cout << "Result = " << num1/num2 << endl;

			   }
			   else {
			   	cout << "Result = " << num1/num2 << endl;
			   }
	    }
	    	   break;
	    	default :
	    		cout << "Invalid choice!!" << endl;
		}
	}
	else if(choice == 2) {
		cout << endl;
		cout << setw(27) << "1 : Sine Function" << endl;
		cout << setw(29) << "2 : Cosine Function" << endl;
		cout << setw(30) << "3 : Tangent Function" << endl;
		cin>>select;
		
		cout<<"\nEnter angle in Radian: ";
	    cin>>angleInRadian;
	    cout << endl << endl;
	    
	      switch(select) {
	    	case 1 : 
	    	   cout << "Result = " << sin(angleInRadian) << endl;
	    	   break;
	    	case 2 : 
	    	   cout << "Result = " << cos(angleInRadian) << endl;
	    	   break;
	    	case 3 : 
	    	   cout << "Result = " << tan(angleInRadian) << endl;
	    	   break;
	    	default :
	    		cout << "Invalid choice!!" << endl;
		}
	}
	else if(choice == 3) {
		cout << endl;
		cout << setw(31) << "1 : Natural Logarithm" << endl;
		cout << setw(31) << "2 : Base-10 Logarithm" << endl;
		cin>>select;
		
		cout<<"\nEnter log number: ";
	    cin>>ln;
	    cout << endl << endl;
	    
	     switch(select) {
	    	case 1 : 
	    	   cout << "Result = " << log(ln) << endl;
	    	   break;
	    	case 2 : 
	    	   cout << "Result = " << log10(ln) << endl;
	    	   break;
	    	default :
	    		cout << "Invalid choice!!" << endl;
		}
	}
	else if(choice == 4) {
		cout << endl;
		cout << setw(28) << "1 : Power Function" << endl;
		cin>>select;
		
		cout<<"\nEnter base number: ";
	    cin>>base;
	    cout<<"Enter exponent number: ";
	    cin>>exp;
	    cout << endl << endl;
	    
	     switch(select) {
	    	case 1 : 
	    	   cout << "Result = " << pow(base,exp) << endl;
	    	   break;
	    	default :
	    		cout << "Invalid choice!!" << endl;
		}
	}
	else if(choice == 5) {
		cout << endl;
		cout << setw(25) << "1 : Square Root" << endl;
		cout << setw(23) << "2 : Cube Root" << endl;
		cin>>select;
		
		cout<<"\nEnter positive root number: ";
	    cin>>root;
	    cout << endl << endl;
	    RootFunc:
	    if(root>0) {
	     switch(select) {
	    	case 1 : 
	    	   cout << "Result = " << sqrt(root) << endl;
	    	   break;
	    	case 2 : 
	    	   cout << "Result = " << cbrt(root) << endl;  //cube root
	    	   break;
	    	default :
	    		cout << "Invalid choice!!" << endl;
		}	}
		else {
			cout<<"Invalid Input!!\nEnter positive root number again: ";
			cin>>root;
		    goto RootFunc;
		} }
	else if(choice == 6) {
		exit(0);
	}
	else {
		cout << "Invalid choice!!" << endl;
	}
	
	cout<<"Press key to continue (y/Y)...";
	cin>>ch;
	
	} while(ch == 'y' || ch == 'Y');

	return 0;
}
