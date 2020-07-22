#include<bits/stdc++.h>
using namespace std;

void slowsortUtil(vector<int>& arr, int l, int h, int& count, int& swaps)
{
    count++;
    if(l >= h)  return;
	int m = l + (h-l)/2;
	slowsortUtil(arr, l, m, count, swaps);
	slowsortUtil(arr, m+1, h, count, swaps);
	if(arr[h] < arr[m]){
		swap(arr[h], arr[m]);
		swaps++;
	}
	
	slowsortUtil(arr, l, h-1, count, swaps);
}

void slowsort(vector<int>& arr)
{
    int count = 0;
    int swaps = 0;
	slowsortUtil(arr, 0, arr.size() - 1, count, swaps);
	cout << "It made " << count << " recursive calls\n";
	cout << "It made " << swaps << " swaps \n";
 }




int main()
{ 
    int t;
    cin >> t;
    srand(time(0));
    vector<int> arr;
    for(int i=0;i<t;i++)
        arr.push_back(rand()%5000);
	
	slowsort(arr);
	for(int i=0;i<arr.size(); i++)
		cout << arr[i] << " ";
	return 0;
}
