#include <iostream>
using namespace std;

int infinite(int arr[],int n){

    int start=0;
    int end=1;

    while(end<n && arr[end]==0){

        start=end;
        end=end*2;
    }
    return binary(arr,start,end);
}

int binary(int arr[], int start, int end)
{
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == 1)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (1 < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "enter th size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    cout<<infinite(arr,n)<<endl;

    return 0;
}