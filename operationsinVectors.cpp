#include<iostream>
#include<vector>
using namespace std;

int main() {


    //define
    vector<int> v;

    cout<<"Size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;

    //resize operation
    v.resize(5);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;

    v.resize(10);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"Size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;


    return 0;
}