#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen = myConstants::gravity * seconds * seconds / 2;
    double heightNow = initialHeight - distanceFallen;

    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

double calculateAndPrintHeight(double initialHeight, int t)
{
    double heightNow = calculateHeight(initialHeight, t);
    std::cout << "At " << t << " seconds, the ball is at height: " << heightNow << "\n";
    return heightNow;
}

int main()
{
    using namespace std;
    cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    cin >> initialHeight;
    double heightNow = initialHeight;
    int t = 0;
    while (heightNow > 0) {
      heightNow = calculateAndPrintHeight(heightNow, t);
      ++t;
    }

    return 0;
}
