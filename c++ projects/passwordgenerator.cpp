#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Passwordgenerator
{
public:
    int amount;
    string capital[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    string small[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    string number[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string symbols[6] = {"!", "@", "#", "$", "%", "&"};
    RandomNum(int endof)
    {
        int randomnum;
        return randomnum = (rand() % endof);
        srand(time(0));
    };
};
Passwordgenerator pass;
void generat()
{
    int time = pass.amount;
    for (int a = 0; a < time; a++)
    {
        int b = pass.RandomNum(4);
        if (b == 0)
        {
            int caprandomnum = pass.RandomNum(26);
            string x = pass.capital[caprandomnum];
            cout << x;
        }
        else if (b == 1)
        {
            int smarandomnum = pass.RandomNum(26);
            string y = pass.small[smarandomnum];
            cout << y;
        }
        else if (b == 2)
        {
            int symrandomnum = pass.RandomNum(6);
            string q = pass.symbols[symrandomnum];
            cout << q;
        }
        else
        {
            int randomnum = pass.RandomNum(10);
            string z = pass.number[randomnum];
            cout << z;
        }
    };
};
int main()
{
    int Amount, restart;
    cout << "How many characters your password should have?" << endl;
    cin >> pass.amount;
    cout << "Your password is : ";
    generat();
    cout << "" << endl;
    cout << "do you want to create more password ? (press 1 for yes)" << endl;
    cin >> restart;
    if (restart == 1)
    {
        main();
    }
    else
    {
        cout << "Good Luck";
    }
    return 0;
}
