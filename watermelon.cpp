#include <iostream>
using namespace std;
int main(){
    cout<<"the watermelon problem"<<endl;
    int w;
    cout<<"enter the weight of watermelon:";
    cin>>w;
    if (w%2==0 && w>2){
        cout<<"yes"<<endl;
        for(int i=2; i<w/2;i+=2){
            cout<<i<<" "<<w-i<<endl;
        }
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}