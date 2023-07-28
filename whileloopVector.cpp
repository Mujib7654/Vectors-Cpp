#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n;

    int i=0;
    while(i<5){
        int num;
        cin>>num;
        n.push_back(num);
        i++;
    }

    i = 0; 
    while(i<n.size()){
        cout<<n[i++]<<" ";
    }
    cout<<endl;
    return 0;
}
