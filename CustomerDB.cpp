
#include <iostream>
#include <cassert>
#include "String.h"
#include "CustomerDB.h"

using namespace std;
const int default_capacity = 1;

Customer::Customer(String name) { // done, please do not edit
	this->bottles = 0;
	this->rattles = 0;
	this->diapers = 0;
	this->custom1 = 0;
	this->custom2 = 0;
	this->name = name;
}

CustomerDB::CustomerDB(void) { // done, please do not edit
	this->capacity = default_capacity;
	this->data = new Customer[this->capacity];
	this->length = 0;
}

int CustomerDB::size(void) {
	return this->length;
}

CustomerDB::~CustomerDB(void) { // done, please do not edit
	delete[] this->data;
}

void CustomerDB::clear(void) { // done, please do not edit
	delete[] this->data;
	this->capacity = default_capacity;
	this->data = new Customer[this->capacity];
	this->length = 0;
}

Customer& CustomerDB::operator[](int k) { // done, please do not edit
	assert(k >= 0 && k < this->length);
	return this->data[k];
}




Customer& CustomerDB::operator[](String name) { // not done, your effort goes here
	//this function is used for the [] operator (returns the indexed value)
	
	//linear search to see if it exists
	//if found, return this->data[i] (address to the name)
	for(int i =0; i < this->length; i++){
			if(this->data[i].name == name){
				return this->data[i];
			}
		}

	//if not found then create new member

	if((this->length)+1 > this -> capacity){


		int newcap = this->capacity *2; //amortized doubling. (don't update meta data before doubling)

		Customer* ptr = new Customer[newcap]; // create new Customer data set with new capacity;
		this->capacity = newcap; // update capacity

		for(int i =0; i < this->length; i++){
			ptr[i] = this->data[i]; //place all the old values of the customer DB into the new space
			//Note: We are transferring address locations. Not Name Values
			}

		this->~CustomerDB(); //delete the old Customer DB
		this->data = ptr; // the data now points to the ptr (in theory we're still using the same memory space)
	}


		Customer Customer(name); //create new Customer with everyhting initalized to 0
		this->data[this->length] = Customer; //insert new Customer into the last positoin
		this->length +=1; //increase the length
		return this->data[this->length-1];  // return the address of the new customer




}




bool CustomerDB::isMember(String name) { // not done, your effort goes here
	//linear search to find member of the String
	//Assuming that the CustomerDB is not pre-sorted

	for(int i =0; i < this->length; i++){
		if(this->data[i].name == name){
			//Comparing two Strings with the == operator
			return true; //if found
		}
	}
		return false; // else return false

	}


