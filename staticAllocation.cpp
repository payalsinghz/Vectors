#include<iostream>
using namespace std;
void func(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    func();
    return 0;
}