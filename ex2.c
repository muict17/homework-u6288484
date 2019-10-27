#include<stdio.h>
int main()
{
  int n,m;

  scanf("%d %d",&n,&m);

  int a[n][m];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      a[n][m]=0;
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&a[i][j]);
      // printf("%d ",a[n][n]);
    }
  }
  printf("----------------------\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("|%d|",a[i][j]);
      }
    printf("\n");
    printf("----------------------\n");
  }
  
  printf("===============================\n");
  printf("----------------------\n");

  for(int i=0;i<n;i++){
    if(i%2==0) {
      for(int j=0;j<m;j++){
        if(i%2==0) 
          printf("|%d|",a[i][j]);

        }
    }  
    else {
      for(int j=m-1;j>=0;j--){
        printf("|%d|",a[i][j]);
      }
    }
      
      
    printf("\n");
    printf("---------------\n");
  }
  return 0;   \\\รกไปมะ
}
