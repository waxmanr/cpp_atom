#include <iostream>

int main()
{
    const int numStudents(5);
    int scores[numStudents] = { 84, 92, 76, 81, 56 };
    int maxScore = 0, maxIndex = 0; // keep track of our largest score
    for (int student = 0; student < numStudents; ++student) {
        if (scores[student] > scores[maxIndex]) {
            maxScore = scores[student];
            maxIndex = student;
        }
    }

    std::cout << "The best score was " << maxScore << '\n';
    std::cout << "The best score's index is " << maxIndex << '\n';

    return 0;
}
