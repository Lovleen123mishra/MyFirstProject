#include <iostream>
using namespace std;
int main()
{
    int a = 1,c, b = 10, n;
    srand(time(0));
    c= rand()% 10;
    cout<<"\n-----------------------";
    cout<<"\nLET'S PLAY WITH NOs.";
    cout<<"\n-----------------------\n";

    cout << "\nGuess the no between 1 to 10: \n";
    while (n != c)
    {
        cin >> n;

        if (n < c && n > a)
        {
            cout << "!! Too Low!!...Please try again: \n";
        }
        else if (n == c)
        {
            cout << "`````Correct Guess```````..yay you did it\n";
        }
        else if (n > c && n < b)
        {
            cout << "!! Too High !!....please try again\n";
        }
        else
        {
            cout << "Please guess the no between given limit\n";
        }
    }

    return 0;
}