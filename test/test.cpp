#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/include/List.hpp"



TEST_CASE("PRUEBA LISTA ENLAZADA","[list]")
{
    List::simple<int> tst_1;
    List::simple<int> tst_2;
    List::simple<int> tst_3;

    tst_1.push_back(3);
    tst_2.push_back(3);
    tst_3.push_back(1);
    tst_3.push_back(2);

    REQUIRE(tst_1 == tst_2);
    REQUIRE(tst_1 == tst_3);

}