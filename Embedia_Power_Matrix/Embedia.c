
//function to calculate the power givn a base and an exponent
int calc_power (int base , int exponent)
{
    int result =1;
    int i;
    for (i=1; i<=exponent ; i++)
        {
            result*=base;
        }
    return result ;
}
/**********************/
//function to covert a character representing a digit to its corresponding numerical value
int char_to_digit(char *c)
{
    int num=0;
    int i=0;
    while(c[i]!=0)
        {
            num*=10;
            num+=c[i]-'0';
            i++;
        }
        return num;
}
/***********************/
/* function to determine if a given matrix is an embedia power matrix*/
int is_Embedia_power_matrix (char *matrix[][3], int num_rows, int num_cols)
{
    int i,j;
    int counter_true =0;
    for ( i=1; i<num_rows-1  ; i++)
        {
            for( j=0; j<num_cols ;j++)
                {
                    int current_elemt = char_to_digit(matrix[i][j]);
                    int elemt_above = char_to_digit(matrix[i-1][j]);
                    int elemt_below = char_to_digit(matrix[i+1][j]);
                    int power = calc_power(  elemt_below ,  elemt_above);

                    if (current_elemt == power)
                        {
                            counter_true++ ;
                        }
                        else
                        {
                            return 0 ;
                        }
                }
        }
        if (counter_true == 3 )
            {
                return 1 ;
            }

}
