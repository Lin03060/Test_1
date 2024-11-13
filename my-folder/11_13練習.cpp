#include <iostream> 
#include <vector>
#include <algorithm> 
#include <string> 
using namespace std; 
 
 template <typename T>
  int binary_search(const vector<T>& data, T target)
{ 
  int left = 0, right = data.size() - 1; 
  while (left <= right)
{
  int mid = left + (right - left) / 2;
    if (data[mid] == target)
{
	return mid; 
	 }
else if (data[mid] < target)
{
	left = mid + 1;
 	 } 
else { 
 	right = mid - 1; 
}
	 } 
return -1; 
	 } 
int main() {

char T;
int n, q; 
cin >> T >> n >> q; 
	  
if (T == 'i') 
{  
	vector<int> data(n); 
	for (int i = 0; i < n; ++i) 
{ 
	cin >> data[i]; 
} 
	for (int i = 0; i < q; ++i) 
{
	int target; 
	cin >> target;
	cout << binary_search(data, target) << endl;
}
}
	 else if (T == 's') 
{
			 
	vector<string> data(n);
	for (int i = 0; i < n; ++i)
{
	cin >> data[i];
} 
	for (int i = 0; i < q; ++i) 
{
	string target; 
	cin >> target;
	cout << binary_search(data, target) << endl; 
}
}
	return 0; 
					 }
