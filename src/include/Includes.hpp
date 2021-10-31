#if !defined(INCLUDES_HPP)
#define INCLUDES_HPP

#pragma region Libraries
    #include <iostream>
    //#include <cstddef>
    #include "List.hpp"
    #include "Operations.hpp"
    #include "Matrix.hpp"
#pragma endregion

#pragma region Define

    #define log(val) std::cout<<val<<std::endl;
    #define log_1(val,val_1) std::cout<<val<<val_1<<std::endl;

#pragma endregion

#endif // INCLUDES_HPP
