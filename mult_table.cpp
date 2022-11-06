#include <iostream>
#include <vector>

/* This code receives a number from the user and
generates a multiplication table using vectors */

void set_rowcol(std::vector<int> &param){
    int size = param.size();
    for (int i=1; i<=size; i++ ){
        param[i-1] = i;
    }
}

void print_vec(std::vector<int> &param){
    for (int i:param){
        std::cout << i << std::endl;
    }
}

int main(){
    int table_num;
    std::cout << "Enter an integer to generate a multiplication table: ";
    std::cin >> table_num;
    std::vector<int> row_table(table_num); // Row table numbers
    std::vector<int> col_table(table_num); //Column table numbers

    // Setting row values
    set_rowcol(row_table);
    print_vec(row_table);
}