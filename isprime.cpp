#include <iostream>
#include <string>
#include <map>
#include <math.h>

using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;
    else if (n == 2 || n == 3)
        return true;
    else if (n % 2 == 0)
        return false;
    else
        {
            for ( int i = 5 ; i < sqrt(n) ; i +=  2 )
            {
                if (n % i == 0)
                    return false;
            }

        }
        return true ;
}

int main()
{
    int cases;
    cin >> cases;
    string str;
    map<char,int>M;
    for ( int z = 1 ; z  <= cases ; z++)
    {
        M.clear();
        cin >> str;
        for (unsigned int j = 0 ; j < str.size() ; j ++)
        {
            M[str[j]]++;
        }

        map<char,int>::iterator it;
        string str2 = "";
        for (it = M.begin() ; it != M.end() ; it++)
        {
            if (isprime((*it).second))
                str2 += (*it).first;

        }

        

            if ( str2.size() > 0)
                cout << "Case "<< z << ": " << str2 << endl;
            else
                cout << "Case "<< z << ": " <<"empty" << endl;
    }

   
}