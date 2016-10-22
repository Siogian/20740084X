/* input some lines string , record the lines, an all chars; enter 'q' end*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> v;
    string s;
    while(getline(cin, s))	//getline(stream, string), '\n' end
    {
        if(s == "q")
        {
            break;
        }
        v.push_back(s);
    }
    int totalChars = 0;
    for(int i = 0; i < v.size(); i++)
    {
        cout << i+1 << " " << v.at(i) << " "<< v.at(i).size() << endl;
        totalChars += v.at(i).size();
    }
    cout << v.size() << " lines, total chars " << totalChars << endl;
    return 0;
}
