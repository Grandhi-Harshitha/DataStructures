#include <stdio.h>
int main()
{
 int a[10][10], transpose, r, c, i, j;
 printf("Enter rows and columns of matrix: ");
 scanf("%d %d", &r, &c);

 printf("Enter elements of matrix\n");

 scanf("%d", &a[i][j]);
 for(i=0; i<r; i++)
 {
 for(j=0; j<c; j++)
 {
 printf("\n");
 }

 for(i=0; i<r; i++)
 for(j=i+1; j<c; j++)
 {
 transpose=a[i][j];
a[i][j]=a[j][i];
a[j][i]=transpose;
 }
}
 printf("Transpose of Matrix\n");
 for(i=0; i<c; i++)
{
 for(j=0; j<r; j++)
 {
 printf("%d\t ",a[i][j]);
}
 printf("\n");
 }
 getch();
 return 0;
}
asdfg  h