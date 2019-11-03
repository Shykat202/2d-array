#include <stdio.h>
int main()
{
    char choice;
    int ar[100][100],br[100][100],tr[100][100],sr[100][100],r,c,i,j,sum=0;

    printf("Select the option below:\n\t");
    printf("Enter A:Sum of all element of a matrix.\n\tEnter B:Transpose of a matrix.\n\tEnter C:Sum of two matrix\n");
    scanf("%c",&choice);

    switch(choice){
default:
    printf("You enter the wrong input.");
    break;

case 'A':
    //int ar[100][100],r,c,i,j,sum=0;
    printf("Enter the rows: ");
    scanf("%d",&r);
    printf("Enter the columns: ");
    scanf("%d",&c);
    printf("\tEnter %d rows and %d columns\n",r,c);
    printf("\n\tThe element of the matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum+=ar[i][j];
        }
    }
    printf("\t\nThe sum of the element in the matrix is %d\n",sum);
    break;
case 'B':
    printf("Enter rows number: ");
    scanf("%d",&r);
    printf("Enter columns number: ");
    scanf("%d",&c);
    printf("Enter the %d rows and %d columns:\n",r,c);
    printf("Enter the element of the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            tr[i][j]=ar[j][i];
        }
    }
    printf("\nThe transpose of the matrix is:");
    for(i=0;i<c;i++){
            printf("\n");
        for(j=0;j<r;j++){
            printf("%d\t",tr[i][j]);
        }
    }
    break;
case 'C':
    printf("Enter rows number: ");
    scanf("%d",&r);
    printf("Enter columns number: ");
    scanf("%d",&c);
    printf("Enter the %d rows and %d columns:\n",r,c);
    printf("\t\nEnter the elements of the first matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&br[i][j]);
        }
    }
    printf("\t\nEnter the element of the second matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sr[i][j]=ar[i][j]+br[i][j];
        }
    }
    printf("\nThe sum of the two matrix are:");
    for(i=0;i<r;i++){
            printf("\n");
        for(j=0;j<c;j++){
            printf("%d\t",sr[i][j]);
        }
    }
    break;
    }
}
