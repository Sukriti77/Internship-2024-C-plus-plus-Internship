#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;  // Create an empty vector of integers

    // Print initial capacity of the vector
    cout << "Initial capacity: " << vec.capacity() << endl;

    // Reserve space for 10 elements
    vec.reserve(10);
    cout << "Capacity after reserve(10): " << vec.capacity() << endl;

    // Add elements to the vector
    for (int i = 1; i <= 5; ++i) {
        vec.push_back(i);  // Add an element to the end of the vector

        // Display the element added, the current size, and the current capacity of the vector
        cout << "Pushed back: " << i << endl;
        cout << "Current size: " << vec.size() << endl;
        cout << "Current capacity: " << vec.capacity() << endl;
        cout << "-----------------------------------" << endl;
    }

    // Reserve more space to see the change in capacity
    vec.reserve(20);
    cout << "Capacity after reserve(20): " << vec.capacity() << endl;

    // Add more elements to the vector
    for (int i = 6; i <= 10; ++i) {
        vec.push_back(i);  // Add an element to the end of the vector

        // Display the element added, the current size, and the current capacity of the vector
        cout << "Pushed back: " << i << endl;
        cout << "Current size: " << vec.size() << endl;
        cout << "Current capacity: " << vec.capacity() << endl;
        cout << "-----------------------------------" << endl;
    }

    // Optionally, reduce the capacity to fit the size
    vec.shrink_to_fit();
    cout << "Capacity after shrink_to_fit(): " << vec.capacity() << endl;

    // Print final elements in the vector
    cout << "Final elements in the vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

