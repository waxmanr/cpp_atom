#include <iostream>
#include <string>

using namespace std;

int main()
{
   int result [30] = {}, num, i = 0;

   cout << "Enter a number:\n";
   cin >> num;
   cout << "num = " << num << endl;

   cout << "Result: ";

   while (num > 1) {
     result [i] = num; i++;
     num % 2 == 0 ? num /= 2 : num = (3 * num) + 1;
   }
  result [i] = num;

  for (int m = 0; m<30; m++) {
    cout << result [m] << " ";
  }
  cout << endl;
  return 0;

}
