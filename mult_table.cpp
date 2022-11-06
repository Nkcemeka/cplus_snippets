#include <iostream>
#include <vector>

/* This code receives a number of the user and
generates a multiplication table using vectors */

void set_rowcol(std::vector<int> &param){
    /* pass */
}

int main(){
    int table_num;
    std::cout << "Enter an integer to generate a multiplication table: ";
    std::cin >> table_num;
    std::vector<int> row_table(table_num); // Row table numbers
    std::vector<int> col_table(table_num); //Column table numbers
}