/*
Week 2: STL (Standard Template Library) Overview

Containers:
1. Sequence Containers: vector, deque, list
2. Associative Containers: set, multiset, map
3. Container Adapters: stack, queue, priority_queue

In this example, we focus on:
- The `array` container from the STL
- Demonstration of common `array` operations

*/
#include <iostream>
#include <array>
#include <algorithm> // For sort, reverse

using namespace std;

int main() {
    // Initialize an array of strings with one element
    array<string, 1> s = {"sukriti"};
    cout << "Array s[0]: " << s[0] << endl;

    // Initialize an empty array of characters with a size of 5
    array<char, 5> c;

    // Initialize an array of integers with 5 elements
    array<int, 5> a = {3, 5, 2, 10, 2};

    // Get and display the size of the array 'a'
    int size = a.size();
    cout << "Size of array a: " << size << endl;

    // Access and display the element at index 2 using the 'at' method
    cout << "Element at index 2: " << a.at(2) << endl;

    // Access and display the first and last elements of the array 'a'
    int first = a.front();
    int last = a.back();
    cout << "First element: " << first << " Last element: " << last << endl;

    // Initialize two arrays of integers
    array<int, 3> a1 = {1, 2, 2};
    array<int, 3> a2 = {4, 5, 6};

    // Display the elements of array 'a1' before swapping
    cout << "Array a1 before swap:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << a1[i] << " ";
    }
    cout << endl;

    // Swap the contents of arrays 'a1' and 'a2'
    a1.swap(a2);

    // Display the elements of array 'a1' after swapping
    cout << "Array a1 after swap:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << a1[i] << " ";
    }
    cout << endl;

    // Sort the elements of array 'a'
    sort(begin(a), end(a));
    cout << "Sorted array a:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Initialize an empty array of integers with 3 elements
    array<int, 3> a3 = {};

    // Check if the array 'a3' is empty
    int empty = a3.empty();
    cout << "Is array a3 empty? " << (empty ? "Yes" : "No") << endl;

    // Reverse the elements of the sorted array 'a'
    reverse(a.begin(), a.end());
    cout << "Reversed array a:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

