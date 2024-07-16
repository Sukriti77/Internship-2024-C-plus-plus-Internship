#include <array>
#include <iostream>
#include <algorithm>  // For std::count

using namespace std;

int main() {
    // Define and initialize an array with 5 elements
    array<int, 5> arr = {1, 2, 3, 2, 3};

    // Count occurrences of the value 2 in the array
    int countValue = count(arr.begin(), arr.end(), 2);

    // Output the count of the value 2
    cout << countValue << endl;

    return 0;
}
