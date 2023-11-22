#include <bits/stdc++.h>
using namespace std;

int minDiff(int A[], int N, int B[], int M)
{
  // Sort both arrays
  sort(A, A + N);
  sort(B, B + M);

  // Initialize pointers and answer
  int i = 0, j = 0, ans = INT_MAX;

  // Loop until one of the pointers reaches the end
  while (i < N && j < M)
  {
    // Update answer
    ans = min(ans, abs(A[i] - B[j]));

    // Move the smaller element's pointer
    if (A[i] < B[j])
    {
      i++;
    }
    else
    {
      j++;
    }
  }

  // Return the final answer
  return ans;
}

int main()
{
  // Input arrays
  int A[] = {82, 76, 82, 82, 71, 70};
  int B[] = {17, 39, 67, 2, 45, 35, 22, 24};

  // Array sizes
  int N = sizeof(A) / sizeof(A[0]);
  int M = sizeof(B) / sizeof(B[0]);

  // Output the minimum difference
  cout << "The minimum difference is " << minDiff(A, N, B, M) << endl;

  return 0;
}
