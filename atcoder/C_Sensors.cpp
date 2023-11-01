#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
const int N = 1005;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int vis[N][N];
char grid[N][N];
int n, m;

bool isValid(int x, int y)
{
  if (x < 0 || y < 0 || x >= n || y >= m)
    return false;
  if (grid[x][y] == '.')
    return false;
  return true;
}

void dfs(int x, int y)
{
  vis[x][y] = 1;
  for (int i = 0; i < 8; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (isValid(nx, ny) && !vis[nx][ny])
      dfs(nx, ny);
  }
}

int main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> grid[i][j];
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (grid[i][j] == '#' && !vis[i][j])
      {
        cnt++;
        dfs(i, j);
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
