
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<< "Enter the length you want to get the sum: ";
    cin>> n;
    int sum = 0;


    // //sum of 1+2+3+4+.......+n
    // for(int i = 1; i <= n; i++){
    //         sum = sum + i;


    // }

    // //sum of the even numbers 2+4+6+...........
    // for(int i = 1; i <= n; i++){
    //     if(i % 2 == 0){
    //         sum = sum + i;

    //     }

    // }

    // //sum of the odd numbers 1+3+5+7+..........
    // for(int i = 1; i <= n; i++){
    //     if(i % 2 != 0){
    //         sum = sum + i;

    //     }

    // }

    // //sum of the even numbers
    // for(int i = 1; i <= n; i++){
    //     if(i % 2 == 0){
    //         sum = sum + i;

    //     }

    // }

    // // sum of the squared numbers  1^2 + 2^2 + 3^2 + ...........
    // for(int i =1; i<= n ; i = i+1){
    //     sum = sum + pow(i, 2);
    // }

    // sum of the 1^5+ 2^5 + 3^5.......n^5 numbers 
    // for(int i =1; i<= n ; i = i+1){
    //     sum = sum + pow(i, 5);
    // }

    // double sum = 0;
    // // sum of 1+ 1/2 + 1/3 + ...........  + 1/n 
    // for(double i =1; i<= n ; i = i+1){
    //     sum = sum + 1/i;
    // }

    // // multiplication of  of 1 *2 * 3 * 4 * ...........* n
    // int mul = 1;
    // for (int i =1 ; i <= n; i++){
    //     mul = mul * i;
    // }
    // cout<< mul << endl;

    // // multiplication of  of 1^2 * 2^2 * 3^2 * 4^2 * ...........* n^2
    // int mul = 1;
    // for (int i = 1 ; i <= n ; i++){
    //     mul = mul * i * i;
    // }
    // cout<< mul << endl;


    int odd_sum = 0;
    int even_sum = 0;
    // sum of 1-2+3-4+5-............
    for(int i =1 ; i<=n ; i++){
        if(i % 2 == 0)
            even_sum = even_sum + i;

        else
            odd_sum = odd_sum + i;
        
        sum = odd_sum - even_sum;
    }


    cout<< sum << endl;








    return 0;
}