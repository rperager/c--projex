#include <iostream>
using namespace std; 

// You are working on a Queue management system and need to create the class to hold the queue data, which are customer IDs (integers).
// You make a Queue class, which has a size attribute, and an array, to hold the data of the queue.
// The class has a remove() method to remove the front item of the queue, a print() method to output the queue.
// You need to create an add() method for the Queue class, that will take an item and add it to the end of the queue.


class Queue { 
	int size; 
	int* queue; //int pointer 
	
	public:
	Queue() {
		size = 0;
		queue = new int[100];
	}
	void remove() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		else { 
			for (int i = 0; i < size - 1; i++) { 
				queue[i] = queue[i + 1]; //shifting everything in the queue 1 left => removing first item from queue
			} 
			size--; 
		} 
	} 
	void print() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		for (int i = 0; i < size; i++) { 
			cout<<queue[i]<<" <- ";
		} 
		cout <<endl;
	}
	
  void add(int item){
		queue[size + 1] = item;
		size++;
	}
	
}; 

int main() { 
  //main is being used as test cases. Should produce an output of 42 <- 2 <- 8 <- 1 <- 2 <- 8 <- 1 <- 128 <- 1 <- 128 <- 
	Queue q; 
	q.add(42); q.add(2); q.add(8); q.add(1); 
	q.print();
	q.remove(); 
	q.add(128); 
	q.print(); 
	q.remove(); 
	q.remove(); 
	q.print(); 

	return 0; 
} 
