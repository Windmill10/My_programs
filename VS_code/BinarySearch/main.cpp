#include"main.h"


int BinarySearch(int arr[], int target, int arrsize){
    int high = arrsize - 1, low = 0, mid;
    
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(target > arr[mid]){
            low = mid + 1;
        }else if(target < arr[mid]){
            high = mid - 1;
        }
    
    }
    return -1;


}

int main(){
    int nums[20], target;
    for(int i = 0; i < 20; i++){
        nums[i] = i;
    }
    std::cin >> target;
    int result = BinarySearch(nums, target, sizeof(nums)/sizeof(nums[0]));
    if(result != -1){
        cout << "Element is found at index" << result;
    }else{
        cout << "Element not found";
    }
}