#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
    std::cout << "=== Array Sorting and Searching Example ===\n";

    std::vector<int> numbers = {4, 9, 1, 2, 14, 7, 3, 11, 5};

    std::cout << "Original array: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";

    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted array: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";

    std::cout << "\n=== Searching Examples ===\n";

    std::vector<int> searchTargets = {4, 10, 1, 15};

    for (int target : searchTargets)
    {
        bool found = std::binary_search(numbers.begin(), numbers.end(), target);
        if (found)
        {
            std::cout << "Element " << target << " found in the sorted array.\n";
        }
        else
        {
            std::cout << "Element " << target << " not found in the array.\n";
        }
    }

    std::cout << "\n=== String Sorting Example ===\n";

    std::vector<std::string> words = {"banana", "apple", "cherry", "date", "elderberry"};
    std::cout << "Original words: ";
    for (const std::string &word : words)
    {
        std::cout << word << " ";
    }
    std::cout << "\n";

    std::sort(words.begin(), words.end());

    std::cout << "Sorted words: ";
    for (const std::string &word : words)
    {
        std::cout << word << " ";
    }
    std::cout << "\n";

    std::cout << "\n=== String Searching Example ===\n";

    std::vector<std::string> searchWords = {"apple", "grape", "cherry", "kiwi"};

    for (const std::string &word : searchWords)
    {
        bool found = std::binary_search(words.begin(), words.end(), word);
        if (found)
        {
            std::cout << "Word \"" << word << "\" found in the sorted list.\n";
        }
        else
        {
            std::cout << "Word \"" << word << "\" not found in the list.\n";
        }
    }

    return 0;
}