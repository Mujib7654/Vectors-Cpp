//find the last occurrence of an element x in a given vector
//size 6

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v(6);
    for(int i=0; i<6; i++){
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;

    //Traversing our vector from 1st element

    // int occurrence = -1;
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]==x){
    //         occurrence=i;
    //     }
    // }
    // cout<<occurrence<<endl;

    //Traversing our vector from last element
    int occurrence = -1;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
            occurrence=i;
            break;
        }
    }
    cout<<occurrence<<endl;

    return 0;
}