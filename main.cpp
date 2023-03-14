#include <iostream>

using namespace std;

int main()
{
    float eval;
    cout << "enter your eval: " << endl;
    cin >> eval;

    if (eval<= 100 && eval >=85)
        cout << "Your grade is A" << endl;
    else
      if (eval<85 && eval >=75)
       cout << "Your grade is B" << endl;
    else
       if (eval<75 && eval>=65)
       cout << "Your grade is C" << endl;
    else
       if (eval<65 && eval>=60)
       cout << "Your grade is D" << endl;
    else
       if (eval<60 && eval>=0)
       cout << "Your grade is F" << endl;
    else
       cout << "enter number between 0 to 100" << endl;

    return 0;
}
