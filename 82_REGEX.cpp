#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <string> fn;
    vector <string> email;
    vector <string> gmail;

    for (int i = 0; i < n; ++i)
        cin>>fn[i]>>email[i];

    for (int i = 0; i < n; ++i)
    {
        if(regex_match(email[i], regex("(.*)@gmail.com")))
            gmail.push_back(fn[i]);
    }

    sort(gmail.begin(), gmail.end());

    for (int i = 0; i < gmail.size(); ++i)
    {
        cout<<gmail[i]<<endl;
    }
    return 0;
}
