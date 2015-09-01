#include <iostream>
#include <string>

using namespace std;

int main()
{
   string result, test;
   int num, i = 0;

   cout << "Enter a number:\n";
   cin >> num;
   cout << "num = " << num << endl;

   cout << "Result: ";

   while (num > 1) {
     //string convStr = to_string(num);
     result += to_string(num); i++;
     result += " ";
     num % 2 == 0 ? num /= 2 : num = (3 * num) + 1;
   }
   result += to_string(num);

//  for (int m = 0; m<30; m++) {
//    cout << result [m] << " ";
//  }
  cout << result << endl;
  return 0;

}
