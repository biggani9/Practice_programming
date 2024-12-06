#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,x = 0;
    string chr ;



    cin >> n;

    if ( n>=1 && n <= 150 )
    {
        for (int i =1;i<=n;i++)
        {

    cin >> chr;

    if (chr == "X++" || chr == "x++")
    {
        x++;

    }
    else if ( chr == "++X" || chr == "++x")
    {
      ++x;
    }
     else if ( chr == "X--" || chr == "x--")
    {
      x--;
    }
    else if ( chr == "--X" || chr == "--x")
    {
      --x;
    }
    else
        {
            cout << "wrong operation ";
            return 0 ;
    }

        }
      cout << x;

    }

    return 0;
}


