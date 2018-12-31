#include <iostream>

//#include "MathFuncsLib.h"
#include "../MathFuncsLib/LinkedList.h"

using namespace std;

int main()
{
	/*
	double a = 7.4;
	int b = 99;

	cout << "a + b = " <<
		MathFuncs::MyMathFuncs::Add(a, b) << endl;
	cout << "a - b = " <<
		MathFuncs::MyMathFuncs::Subtract(a, b) << endl;
	cout << "a * b = " <<
		MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
	cout << "a / b = " <<
		MathFuncs::MyMathFuncs::Divide(a, b) << endl;
		*/

	
	MathFuncs::LinkedList l2;
	l2.add(1);
	l2.add(2);
	l2.add(5);
	l2.add(8);
	l2.add(13);

	cout << l2.length << " length " << endl; 
	// list is  13->8->5->2->1  

	/*
	BOOST_CHECK(l2.length == 5);
	BOOST_CHECK(l2.checkLength() == 5);
	BOOST_CHECK(l2.remove(0) == 13);//true  
	// current list is 8->5->2->1  
	BOOST_CHECK(l2.length == 4); //after deletion 
	BOOST_CHECK(l2.checkLength() == 4);

	*/    

	return 0;
}