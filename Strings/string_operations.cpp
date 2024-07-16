#include <iostream>
#include <string>

int main() {
    // Define initial strings for demonstration
    std::string str = "Hello, World!";
    std::string from = "World";
    std::string to = "C++";

    // -----------------------------------------------
    // Demonstrate the replace() function
    // -----------------------------------------------

    // Find the position of the substring 'from' in 'str'
    size_t start_pos = str.find(from);
    if (start_pos != std::string::npos) {
        // Replace 'from' with 'to' in the string
        str.replace(start_pos, from.length(), to);
    }

    // Output the string after replacement
    std::cout << "String after replacement: " << str << std::endl;

    // -----------------------------------------------
    // Demonstrate the concatenation of strings
    // -----------------------------------------------

    // Define additional strings for concatenation
    std::string str1 = "Hello, ";
    std::string str2 = "world!";

    // Concatenate 'str1' and 'str2' and store in 'result'
    std::string result = str1 + str2;

    // Output the concatenated string
    std::cout << "Concatenated string: " << result << std::endl;

    // -----------------------------------------------
    // Demonstrate the find() function
    // -----------------------------------------------

    // Find the position of 'str2' within 'str1'
    size_t found = str1.find(str2);
    if (found != std::string::npos) {
        // Output the position of the substring
        std::cout << "Substring found at index: " << found << std::endl;
    } else {
        // Notify that the substring was not found
        std::cout << "Substring not found..." << std::endl;
    }

    // -----------------------------------------------
    // Demonstrate the replace() function with a different string
    // -----------------------------------------------

    // Define a new string for replacement demonstration
    std::string str3 = "welcome to miet";

    // Replace a portion of 'str3' from position 3, with length 4, with the string "abcd"
    str3.replace(3, 4, "abcd");

    // Output the string after replacement
    std::cout << "String after replace operation: " << str3 << std::endl;

    return 0;
}
