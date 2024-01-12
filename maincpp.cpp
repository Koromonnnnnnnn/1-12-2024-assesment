#include <iostream>
#include <string>
using namespace std;

bool Loop = true;

int main()
{
    string prefference;

    while(Loop){
        cout << "Which do you preffer; Platformers or Shooter games?" << endl;
        cin >> prefference;
        if (prefference == "platformers" || "Platformers")
        {
            cout << "Nice! Would you want the bad guys to be aNliens or mushrooms?" << endl;
            cin >> prefference;
            if (prefference == "aliens" || "Aliens")
            {
                cout << "I suggest playing Metroid" << endl;
                break;
            }
            else if (prefference == "mushrooms" || "Mushrooms")
            {
                cout << "I suggest playing Mario Bros" << endl;
                break;
            }
        }
        if (prefference == "shooter" || "Shooter")
        {
            cout << "Nice! Would you want the bad guys to be aliens or mushrooms?" << endl;
            cin >> prefference;
            if (prefference == "aliens" || "Aliens")
            {
                cout << "I suggest playing Halo" << endl;
                break;
            }
            else if (prefference == "mushrooms" || "Mushrooms")
            {
                cout << "I suggest playing The Last of Us" << endl;
                break;
            }
        }
    }
}