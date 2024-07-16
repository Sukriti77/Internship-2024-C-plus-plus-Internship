#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;

    // Add elements to the vector
    for (int i = 1; i <= 10; ++i) {
        vec.push_back(i);
    }

    // Remove elements from the vector
    for (int i = 0; i < 5; ++i) {
        vec.pop_back();

        // Print current size and capacity after each pop_back
        cout << "After pop_back:" << endl;
        cout << "Current size: " << vec.size() << endl;
        cout << "Current capacity: " << vec.capacity() << endl;
        cout << "-----------------------------------" << endl;
    }

    // Optional: Reduce capacity to fit the size
    vec.shrink_to_fit();
    cout << "After shrink_to_fit:" << endl;
    cout << "Current size: " << vec.size() << endl;
    cout << "Current capacity: " << vec.capacity() << endl;

    return 0;
}
