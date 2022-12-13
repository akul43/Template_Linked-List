# Template Linked List
Implemented from scratch a Template Linked-List in C++. 

It allows for the creation of linked lists with elements of any data type, as long as the type is specified when the linked list is declared. The linked list is made up of nodes, which are objects that contain the data for each element in the list, as well as a pointer to the next node in the list. The linked list is implemented using a class that provides methods for manipulating elements in the list. It is a useful data structure for storing and organizing data in a flexible and efficient manner.

## Functionality
A list of the Linked-List functions:


	void push_back(const T &element);  //Adds element by reference to the end of the list
	void push_front(const T &element); //Adds element by reference to the front of the list
	void display(); //Display list on console
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
