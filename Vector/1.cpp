#include <iostream>
#include <vector>	//STL'vestor container(class)'s header file
#include <string>	//STL's string in namespace std
using namespace std;	//vector is defined in namespace std

int main()
{
    //vector<T> v, define a empty vector named v, contain some type T's objects
    vector<int> v;	//empty vector v, type int
    vector<int> v2(v);	//use v to init v2, must be same type(int)
    vector<int> v3 = v;	//like v2(v), v is not must be empty
    
    //vector<T> v(n, value), contain n element, every value is value
    vector<int> v4(10, 100);	//v4 contains 10 element, every value is 100
    vector<int> v5(10); 	//v5 contains 10 empty elements, inital value is diffrent by type, like int be 0, string be "", constructor

    vector<string> v6;		//v6 is a string's vector
    v6.push_back("Hello world!");	//v6.push_back(T t),insert into final
    cout << v6[0] << endl;
    
    v5.push_back(50);	//v5 now have 11 element, last is 50
    cout << v5.back() << endl;
    

    v4.pop_back();	//void function, delete from final
    cout << v4.size() << endl;
    int nNum = v4[2];	//use array's style to visit the third element, fist from 0
    int nNum2 = v4.at(2);	//like v4[2], but more safe, if over bound, will some error tips
    cout << nNum << " " << nNum2 << endl;
    
    cout << v4.front() << endl;	//v4.front(), return the first element
    cout << v6.back() << endl;	//return the last element

    cout << v4.empty() << endl;	//(bool) if empty

    cout << (v == v2) << endl;
    cout << (v >= v2) << endl;

    return 0;

}
