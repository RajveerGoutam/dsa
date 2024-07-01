#include <bits/stdc++.h>		//Occurence of a element in sorted array (using Binary search)
using namespace std;

int
occurence (int a[], int n, int target)
{
  //first position
  int start = 0, end = n - 1, mid, first = -1, last = -1;
  while (start <= end)
	{
	  mid = start + (end - start) / 2;
	  if (a[mid] == target)
		{
		  first = mid;
		  end = mid - 1;
		}
	  else if (a[mid] < target)
		start = mid + 1;
	  else
		end = mid - 1;
	}
  int f = first;
  //last position
  start = 0, end = n - 1, mid, first = -1, last = -1;
  while (start <= end)
	{
	  mid = start + (end - start) / 2;
	  if (a[mid] == target)
		{
		  last = mid;
		  start = mid + 1;
		}
	  else if (a[mid] < target)
		start = mid + 1;
	  else
		end = mid - 1;
	}
  return last - f + 1;
}

int main ()
{
  int n, i, target;
  cout << "Enter element size: ";
  cin >> n;
  int a[n];
  cout << "Enter elements: ";
  for (i = 0; i < n; i++)
	cin >> a[i];

  cout << "Enter the element whose occurence to be known: ";
  cin >> target;
  cout << "Occurence= " << occurence (a, n, target);
  return 0;
}
