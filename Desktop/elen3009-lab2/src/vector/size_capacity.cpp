
// size_capacity.cpp
// Vector size versus capacity

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vec;
	cout << "vec: size: " << vec.size()
	<< " capacity: " << vec.capacity() << endl;

	for(int i = 0; i < 24; i++) {
		vec.push_back(i);
		cout << "vec: size: " << vec.size()
		<< " capacity: " << vec.capacity() << endl;
	}

	return 0;
}

///size has to do with number of elements in the vector.
///capacity of a vector refers to the memory space allocated to a vector depending on the size of the vector.This leaves room of growth(in terms of number of elements of the vector.)
///memory can be reallocated if no extra memory is needed or allocated if extra memory is needed. Max_size gives the maximum number of elements that can stored in the currently allocated memory space.