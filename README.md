# Template Linked List
Linked List using Templates. Data Structure contains default insert/delete/get/set functions.

## Functionality
Linked List data structure using templates allows the user to create a linkedlist with any data type.


	void push_back(const T &element);  //Adds element by reference to the end of the list
	void push_front(const T &element); //Adds element by reference to the front of the list
	void display(); //Display on console
	bool insert(const T &element, unsigned position); //Instert an element in your list at the specified position
	bool erase(unsigned position); //Deletes an element by passing its position
	bool erase(const T &element); //Deletes an element by passing it by reference
	unsigned size() const; //Returns the number of nodes in the list
	void pop_back(); //Delete last node in list
	void pop_front(); //Delete first node in list
	T& get_element(unsigned position) const; //Get the element of the list at the specified iterator passed
	T& get_front() const; //Get the first element of the list
	T& get_back() const; //Get last element of the list
	void createNode(T value); //This function randomly creates a node in the list by passing it a T value
