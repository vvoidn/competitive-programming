//way too long probelmm
#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"71A:too long words"<<endl;
    cout<<"enter number of words to be tested"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string word;
        cout<<"enter the word"<<endl;
        cin>>word;

        int len= word.length();
        if (len>=10){
            cout<<word[0]<<(len-2)<<word[len-1]<<endl;
        }
        else{
            cout<<word<<endl;
        }
    }
    return 0;
}