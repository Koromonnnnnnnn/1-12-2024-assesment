#include <iostream>
#include <string>
using namespace std;

bool Loop = true;

int main()
{
    string preference;

    while (Loop)
    {
        cout << "Which do you prefer: Platformers or Shooter games?" << endl;
        cin >> preference;
        if (preference == "platformers" || preference == "Platformers")
        {
            cout << "Nice! Would you want the bad guys to be aliens or mushrooms?" << endl;
            cin >> preference;
            if (preference == "aliens" || preference == "Aliens")
            {
                cout << "I suggest playing Metroid" << endl;
                break;
            }
            else if (preference == "mushrooms" || preference == "Mushrooms")
            {
                cout << "I suggest playing Mario Bros" << endl;
                break;
            }
        }
        else if (preference == "shooter" || preference == "Shooter")
        {
            cout << "Nice! Would you want the bad guys to be aliens or mushrooms?" << endl;
            cin >> preference;
            if (preference == "aliens" || preference == "Aliens")
            {
                cout << "I suggest playing Halo" << endl;
                break;
            }
            else if (preference == "mushrooms" || preference == "Mushrooms")
            {
                cout << "I suggest playing The Last of Us" << endl;
                break;
            }
        }
    }
    return 0;
}
