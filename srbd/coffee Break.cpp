#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int maxi = 0;
        int hour =( s[0] - '0') * 10 +( s[1] - '0');
        int minute = ( s[3] - '0') * 10 +( s[4] - '0');
        if(hour==0 && minute==0)
        {
            cout <<"00:00"<< endl;
        }
        else if ( hour <=11 && minute <=11)
        {
            cout << "11:11" << endl;
        }
        else if(hour <=22 && minute <=22)
        {
            cout << "22:22" << endl;
        }
        else 
        {
            cout << "00:00" << endl;
        }
    }
}