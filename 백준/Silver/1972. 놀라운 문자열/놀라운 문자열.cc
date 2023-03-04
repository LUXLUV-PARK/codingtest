#include <iostream>
#include <set>
using namespace std;

int main()
{
    while (true)
    {
        string s;
        cin >> s;
        if (s == "*")
        {
            break;
        }

        bool a = false;
        for (int i = 1; i < s.size() && !a; i++)
        {
            set<string> str;
            int j = 0, k = i + j;
            while (!a && k < s.size())
            {
                string tmp;
                tmp += s[j];
                tmp += s[k];
                if (!str.empty())
                {
                    if (str.find(tmp) != str.end())
                    {
                        a = true;
                        cout << s << " is NOT surprising.\n";
                        break;
                    }
                }
                str.insert(tmp);
                j++; k++;
            }
        }
        if (!a)
        {
            cout << s << " is surprising.\n";
        }
    }
    return 0;
}