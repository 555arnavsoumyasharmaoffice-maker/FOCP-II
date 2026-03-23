#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 3, 1};
    
    for(int i = 0; i < 5; i++) {
        int count = 0;
        int flag = 0;
        
        for(int j = 0; j < 5; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        for (int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                flag=1;
                break;
            }
        }
        
        if(flag == 0)
            cout << arr[i] << " occurs " << count << " times\n";
    }
    
    return 0;
}
