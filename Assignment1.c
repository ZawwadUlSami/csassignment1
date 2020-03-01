#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

    int count_var=0;
    int carry_var=0;
    int a;
    int b;
    int x;
    int y;
    scanf("%d",&a);
    scanf("%d",&b);


    int length_a = (floor(log10(abs(a))) + 1);
    int length_b = (floor(log10(abs(b))) + 1);


    while (length_a!=0 || length_b!=0){
        x =0;
        y=0;

        if (length_a>0)
            x = (int(a[length_a-1]) + int(0);
            length_a = length_a-1;
        else if (length_b>0)
            y = int(b[length_b-1]) + int("0");
            length_b = length_b-1;

        int sum = x +y + carry_var;

        if (sum>=10)
            carry_var = 1;
            count_var = count_var +1;
        else
            carry_var=0;

    }

    return 0;
}
