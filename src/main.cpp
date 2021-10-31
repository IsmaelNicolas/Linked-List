#include "include/Includes.hpp"


int main()
{
    List::simple<std::string> vector; 

    vector.push_back("H");
    vector.push_back("o");
    vector.push_back("l");
    vector.push_back("a");
    vector.print_list();

    List::simple<List::simple<std::string>> matrix; 
    matrix.push_back(vector);
    matrix.push_back(vector);
    matrix.push_back(vector);
    matrix.push_back(vector);
    matrix.print_list();

    List::simple<List::simple<int>> m; 
    List::simple<int> row;

    for (int i = 1 ; i<10;i++)
    {
        row.push_back(i);
        if(i%3 == 0)
        {
            m.push_back(row);
            row.clean();
        }
    }
    m.push_back(row);
    //log(row);
    m.print_list();

    std::cin.ignore();
    return 0 ;
}