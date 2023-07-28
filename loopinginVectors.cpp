#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> v;

    // for using for loop

    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }

    cout<<endl;

    //insert 6 at second position

    v.insert(v.begin()+2,6);

    //for each loop

    for(int element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);

    //while loop

    int index=0;
    while(index<v.size()){
        cout<<v[index++]<<" ";
    }
    cout<<endl;


    return 0;
}