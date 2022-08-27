#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    array<int, 4> arr;

    arr = {2, 3, 5, 6};

    cout << arr.at(3) << endl;
    cout <<arr.size()<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<"empty or not "<<arr.empty()<<endl;;
    
    for( int i:arr)
{
    cout<<i<<" ";
}
    return 0;
}
