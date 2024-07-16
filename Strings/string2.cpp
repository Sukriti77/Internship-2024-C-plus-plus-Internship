#include <iostream>
#include <string>

int main() {
    // Define initial strings for demonstration
    std::string str = "Hello, World!";
    std::string from = "World";
    std::string to = "C++";

    // -----------------------------------------------
    // Demonstrate the substr() function
    // -----------------------------------------------

    // Extract a substring starting at index 7 with a length of 5 characters
    std::string sub = str.substr(7, 5);
    std::cout << "Substring extracted: " << sub << std::endl;

    // -----------------------------------------------
    // Demonstrate the erase() function
    // -----------------------------------------------

    // Erase 7 characters from index 5
    std::string s = str.erase(5, 7);
    std::cout << "String after erase operation: " << s << std::endl;

    // -----------------------------------------------
    // Demonstrate the append() function
    // -----------------------------------------------

    // Append " class" to the string 'to'
    to.append(" class");
    std::cout << "String after append operation: " << to << std::endl;

    // -----------------------------------------------
    // Demonstrate the compare() function
    // -----------------------------------------------

    // Define additional strings for comparison
    std::string s1 = "sukriti";
    std::string s2 = "sukriti";

    // Compare 's1' with 's2'
    int ans = s1.compare(s2);
    std::cout << "Result of comparison: " << ans << std::endl;
    // Output will be 0 if strings are equal

    // -----------------------------------------------
    // Demonstrate the find_first_of() and find_last_of() functions
    // -----------------------------------------------

    // Find the position of the first vowel in 's1'
    size_t pos = s1.find_first_of("aeiou");
    // Find the position of the last vowel in 's1'
    size_t pos1 = s1.find_last_of("aeiou");

    std::cout << "Position of first vowel: " << pos << std::endl;
    std::cout << "Position of last vowel: " << pos1 << std::endl;

    return 0;
}
