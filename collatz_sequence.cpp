#include <iostream>
#include <string>

using namespace std;

int main()
{
   int argc, result [1000];
   int num, i=1;

   cout<<"Enter a number:\n";
   cin>>num;

   if (num==1)
      cout << "Collatz Sequence is: 1" <<  endl;

while (num != 1) {

    result[i] = num;
    num % 2 == 0 ? num /= 2 : num = 3 * num +1 ;
    i++;
    result[i] = 1;
}


   cout << "Collatz Sequence is: " << result << "\n";
   return 0;

}
