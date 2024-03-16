//Esraa Yasser Muhammed
// Embedia Academy
/**********/
#include <stdio.h>
#include <stdlib.h>
#include"Embedia.h"
int main()
{
    char *matrix_1[][3]= {
     {"3","2","2"},
     {"8","9","25"},
     {"2","3","5"}
} ;
    int num_rows_1= 3 ;
    int num_cols_1= 3 ;

    if (is_Embedia_power_matrix(matrix_1,num_rows_1,num_cols_1)){
        printf("Test case 1 : Embedia Power Matrix\n");
    }
    else {
            printf("Test case 1 : Not an Embedia Power Matrix\n");
}

     char *matrix_2[][3]= {
     {"1","3","5"},
     {"3","7","11"},
     {"5","11","17"}
};

    int num_rows_2= 3 ;
    int num_cols_2= 3 ;
    if (is_Embedia_power_matrix(matrix_2,num_rows_2,num_cols_2)){
        printf("Test case 2 : Embedia Power Matrix\n");
    }
    else {        printf("Test case 2 : Not an Embedia Power Matrix\n");
}

         char *matrix_3[][3]= {
            {"3","4","2"},
            {"512","256","49"},
             {"8","4","7"}
} ;

    int num_rows_3= 3 ;
    int num_cols_3= 3 ;
    if (is_Embedia_power_matrix(matrix_3,num_rows_3,num_cols_3)){
        printf("Test case 3 : Embedia Power Matrix\n");
    }
    else {        printf("Test case 3 : Not an Embedia Power Matrix\n");
}
    return 0;
}
