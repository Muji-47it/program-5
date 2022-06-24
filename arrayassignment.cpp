#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={32,4,2,3,5};
    int min;
    min=arr[0];
    for (int i = 0; i < 4; i++)
    {
        if(arr[i]<min)
      min=arr[i];
    }
    cout<<min;   
}
