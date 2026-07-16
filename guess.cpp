#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess = 0;
    int trise = 0;

    while (guess != secret)
    {
        cout << "Entre chislo 1/100: ";
        cin >> guess;
        trise++;
        if (guess < secret)
        {
            cout << "malo" << endl;
        }
        else if (guess > secret)
        {
            cout << "mnogo" << endl;
        }
    }
    cout << "Correct!!!";
    cout << " Za " << trise << endl;
}
