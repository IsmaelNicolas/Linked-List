#include "include/Includes.hpp"


int main()
{
    /*
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
    */
    
    /*
    Node<int> nd_1(3);
    Node<int> nd_2(4);
    Node<int> nd_3(3);

    log((nd_1 == nd_2? "1=2":"no"));
    log((nd_1 == nd_3? "1=3":"no 2"));

    List::simple<int> vct_1;
    List::simple<int> vct_2;
    List::simple<int> vct_3;

    for(int i = 0 ; i<10 ;i++)
    {
        vct_1.push_back(i);
        vct_3.push_back(i);
    }

    for(int i = 9 ; i>=0 ;i--)
    {
        vct_2.push_back(i);
    }

    log(vct_1);
    log(vct_2);
    log(vct_3);

    log((vct_1 == vct_2? "1=2":"1<>2"));
    log((vct_1 == vct_3? "1=3":"1<>3"));
    */

    List::simple<int> vct_1;
    List::simple<int> vct_2;
    vct_1 += 10;
    vct_1 += 9;
    vct_1 += 1;
    vct_1 += 12;
    vct_2 += 10;
    vct_2 += 10;
    

    log((vct_1>vct_2? "vct_1>vct_2":"vct_1<vct_2"));
    log((vct_1<vct_2? "vct_1<vct_2":"vct_1>vct_2"));
    



    log("FIN")
    std::cin.ignore();
    return 0 ;
}