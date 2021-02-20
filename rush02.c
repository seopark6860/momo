#include <unistd.h>

void ft_putchar(char c){
        write(1, &c, 1);
}

void ft_nputchar1(int max_row, int col, int max_col){	// 첫번째 행
        int r;
        r = 0;

        while(r < max_row){
                if(r != 0 && r != max_row-1){
                        ft_putchar('B');
                } 
				else {
                        ft_putchar('A');
                }
                r++;
        }
}

void ft_nputchar2(int max_row, int col){
        int x;
        x = 0;

        while(x < max_row){

				if(x!=0 &&  x != max_row-1){
					ft_putchar(' ');
				}
				else{
                        ft_putchar('B');
                }
                x++;
        }
}

void ft_nputchar3(int max_row, int max_col, int col){	//마지막 행
        int r;
        r = 0;

        while(r < max_row){
                if(r != 0 && r != max_row-1){
                        ft_putchar('B');
                } else {
                        ft_putchar('C');
                }
                r++;
        }
}

void rush(int row, int col){
        int c;
        c = 0;

        while(c < col){
                if(c == 0){
                	ft_nputchar1(row, col, c);
				}
                else if(c == col-1){
                        ft_nputchar3(row, col, c);
                } else {
                        ft_nputchar2(row, c);
                }
                c++;
                ft_putchar('\n');
		}
}

int main()
{
        rush(5, 3);
        return (0);
}
