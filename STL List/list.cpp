#include <iostream>
#include <list>
using namespace std;

int main() {
    // Initialize an empty list of integers
    list<int> l;

    // Add elements to the list
    l.push_back(10);  // Add 10 to the end of the list
    l.push_front(12); // Add 12 to the front of the list
    l.push_back(20);  // Add 20 to the end of the list
    l.push_front(8);  // Add 8 to the front of the list

    // Display the current elements of the list
    cout << "List elements: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Remove the first element from the list
    l.erase(l.begin());
    cout << "After erasing the first element: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Add more elements to the list
    l.push_back(30);
    l.push_back(40);
    l.push_front(5);
    l.push_front(1);

    // Display the updated list
    cout << "Updated list elements: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Remove the last element from the list
    l.pop_back();
    cout << "After popping the last element: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Remove the first element from the list
    l.pop_front();
    cout << "After popping the front element: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Check if the list is empty
    cout << "Is the list empty? " << (l.empty() ? "Yes" : "No") << endl;

    // Get the size of the list
    cout << "Size of the list: " << l.size() << endl;

    // Clear all elements from the list
    l.clear();
    cout << "After clearing, is the list empty? " << (l.empty() ? "Yes" : "No") << endl;

    // Add elements again for further demonstration
    l.push_back(100);
    l.push_back(200);
    l.push_back(300);
    l.push_back(400);
    l.push_back(500);

    // Display the current elements of the list
    cout << "List after re-adding elements: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Insert elements at a specific position
    auto it = l.begin();
    ++it;  // Move iterator to the second position
    l.insert(it, 150);  // Insert 150 before the second element

    // Display the list after insertion
    cout << "After inserting 150 at the second position: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Reverse the elements of the list
    l.reverse();
    cout << "List after reversing: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Sort the list in ascending order
    l.sort();
    cout << "Sorted list: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Remove all occurrences of a specific value (e.g., 300)
    l.remove(300);
    cout << "List after removing all occurrences of 300: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Display the final size of the list
    cout << "Final size of the list: " << l.size() << endl;

    return 0;
}
