#include <stdio.h>
void main()
{
  int row1, column1, row2, column2, i, j, k, sum = 0, a[10][10], b[10][10], c[10][10];

  printf("Number of rows in first matrix :\n");
  scanf("%d", &row1);

  printf("Number of columns in first matrix :\n");
  scanf("%d", &column1);

  printf("Elements of first matrix : \n");

  for (i = 0; i < row1; i++)
  {
    for (j = 0; j < column1; j++)
      scanf("%d", &a[i][j]);
  }

  printf("Number of rows of second matrix :\n");
  scanf("%d", &row2);

  printf("Number of columns of second matrix :\n");
  scanf("%d", &column2);

  if (row1!=row2 || column1!=column2)
    printf("Matrices with entered orders cannot be added.\n");
  else
  {
    printf("Elements of second matrix : \n");

    for (i = 0; i < row2; i++)
    {
      for (j = 0; j < column2; j++)
        scanf("%d", &b[i][j]);
    }

    for (i = 0; i < row1; i++) {
      for (j = 0; j < column1; j++) {
        sum=a[i][j]+b[i][j];
        c[i][j] = sum;
        }
        sum = 0;
      }

    printf("After Addition, the result is : \n");

    for (i = 0; i < row1; i++) {
      for (j = 0; j < column1; j++)
        printf("%d ", c[i][j]);

      printf("\n");
    }
  }
}
