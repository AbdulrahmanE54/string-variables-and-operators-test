#include <iostream>
using namespace std;

int main()
{
    string chosen = "yes";
    int a;int b;

    int result; //fancy
    a = 7;
    b = 5;
    a = a + 40;
    result = a - b; // this adds up to 42
        cout << "the answer to life, the universe and everything" << endl;
        cin >> chosen;
    if ( chosen == "yes") //this is true
    {
        cout << result; // this is cool
    }

   else if ( chosen == "crasH!!!" )
    {
        cout << "dude, that'll crash this computer";
    }
    else
    {
        cout << "ur bad"; //this is an insult
    }

    return 0;

}
