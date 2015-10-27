#include <iostream>

int main()
{
    // First, read in valid input from user
    int number;
    do
    {
        std::cout << "Enter a number: ";
        std::cin >> number;

        // if the user entered an invalid character
        if (std::cin.fail())
        {
            std::cin.ignore('\n', 32767); // ignore any characters in the input buffer
            std::cin.clear(); // reset any error flags
        }
    } while (number < 1 || number > 9);

    // Next, print the array
    const int arrayLength(9);
    int array[arrayLength] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    for (int index=0; index < arrayLength; ++index)
        std::cout << array[index] << " ";

    std::cout << "\n";

    // Then, search the array to find the matching number and print the index
    for (int index=0; index < arrayLength; ++index)
    {
        if (array[index] == number)
        {
            std::cout <<  "The number " << number << " has index " <<  index << "\n";
            break; // since each # in the array is unique, no need to search rest of array
        }
    }

    return 0;
} // also gets stuck in loop, just like mine.
