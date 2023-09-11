

#include <stdio.h>

int main()
{
    
    int a[3][3], b[3][3],c[3][3];
    int i,j;
    
    printf("ENTER THE VALUE FOR MATRIX 1:\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the value for index[%d][%d]=\t",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
     printf("ENTER THE VALUE FOR MATRIX 2:\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the value for index[%d][%d]=\t",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    //for the sum
    printf("THE SUM OF MATRIX1 AND MATRIX 2 IS GIVEN BELOW\n\n");
     
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
            
        }
        printf("\n");
     }
     
    return 0;
}
