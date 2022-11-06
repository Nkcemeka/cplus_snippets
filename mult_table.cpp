#include <iostream>
#include <vector>
#include <string>

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

void gen_table(std::vector<int> &rows, std::vector<int> &cols){
    std::cout << "   \t";
    // Printing the columns
    for (int i : cols){
        int length_int = std::to_string(i).length(); // get the length of the integer
        std::cout << i << "\t";
    }

    std::cout << "" << std::endl; // New line

    // Drawing an horizontal line
    std::string line(100,'-');
    std::cout << line << std::endl;

    // Performing the Multiplication

    for (int i:rows){
        std::cout << i << " | \t";
        for (int j:cols){
            std::cout << i*j << "\t";
        }
        std::cout << "" << std::endl; // Go to a new line
    }
}

int main(){
    int table_num;
    std::cout << "Enter an integer to generate a multiplication table: ";
    std::cin >> table_num;
    std::vector<int> row_table(table_num); // Row table numbers
    std::vector<int> col_table(table_num); //Column table numbers

    // Setting row values and col values
    set_rowcol(row_table);
    set_rowcol(col_table);

    // Generating Multiplication Table
    gen_table(row_table, col_table);
}