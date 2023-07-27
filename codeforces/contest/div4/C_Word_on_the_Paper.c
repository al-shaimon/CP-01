#include <stdio.h>
#include <string.h>

int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    char arr[8][8];
    scanf("%s",arr[8][8]);
    for(int i=0 ;i<8; i++){
      for(int j=0;j<8; j++){
        printf("%c",arr[i][j]);
      }
    }
    printf("\n");
  }
  
  return 0;
}