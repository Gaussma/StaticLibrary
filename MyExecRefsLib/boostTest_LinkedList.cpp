
#define BOOST_TEST_MODULE mytests
#include <boost/test/included/unit_test.hpp>
#include <iostream>
#include "../MathFuncsLib/LinkedList.h"
#include <cstdlib>

using namespace std;


BOOST_AUTO_TEST_CASE(Length)
{
	
	MathFuncs::LinkedList l1;
	l1.add(1);
	l1.add(2);
	l1.add(5);

	//To avoid Length and checkLength function are both wrong ,
	//we should not compare these two function directly, 
	 //we can use
	//the following boost test to check the correctness one by one !  

	BOOST_CHECK(l1.length == 3);
	BOOST_CHECK(l1.checkLength() == 3);
}
BOOST_AUTO_TEST_CASE(getFunction) {
	MathFuncs::LinkedList l2;
	l2.add(1);
	l2.add(2);
	l2.add(5);
	l2.add(6);
	l2.add(8);
	l2.add(9);
	BOOST_CHECK(l2.get(0) == 9);// 9 is the head->data. 
	BOOST_CHECK(l2.get(1) == 8); 
	BOOST_CHECK(l2.get(2) == 6);
	BOOST_CHECK(l2.get(3) == 5);
	BOOST_CHECK(l2.get(4) == 2);
	BOOST_CHECK(l2.get(5) == 1);


}
BOOST_AUTO_TEST_CASE(findFunction) {
	MathFuncs::LinkedList l2;
	l2.add(1);
	l2.add(2);
	l2.add(5);
	l2.add(6);
	// list is 5->2->1 
	BOOST_CHECK(l2.find(1) == true);
	BOOST_CHECK(l2.find(2) == true);
	BOOST_CHECK(l2.find(5) == true);
	BOOST_CHECK(l2.find(6) == true);
	BOOST_CHECK(l2.find(8) == false);


}

BOOST_AUTO_TEST_CASE(removeFunction) {
	MathFuncs::LinkedList l2;
	l2.add(1);
	l2.add(2);
	l2.add(5);
	l2.add(8);
	l2.add(13);
	// list is  13->8->5->2->1  
	BOOST_CHECK(l2.length == 5);//make sure the length is 5. 
	BOOST_CHECK(l2.checkLength() == 5);
	BOOST_CHECK(l2.remove(0) == 13);//true  
	// current list is 8->5->2->1  
	BOOST_CHECK(l2.length == 4); //check the length after the deletion
	BOOST_CHECK(l2.checkLength() == 4);
    //check the length to verify the correctness of deletion ! 
	//check after removal , the structure of the linked list
	// current list is 8->5->2->1  
	BOOST_CHECK(l2.get(2) == 2);
	BOOST_CHECK(l2.remove(1) == 5);
	// current list is 8->2->1  
	BOOST_CHECK(l2.length == 3);
	BOOST_CHECK(l2.get(2) == 1);
	BOOST_CHECK(l2.get(1) == 2);
	BOOST_CHECK(l2.get(0) == 8);
	BOOST_CHECK(l2.find(5) == false); // 5 get removed !  






}