#ifndef _SCANNER_
#define _SCANNER_

#include <string_view>
#include <list>


namespace scanner{
    #define LOG_TAG "[scanner]"

    struct Scanner{
        Scanner(std::string_view source) {

        }
        Scanner() = delete;
        ~Scanner() = delete;

        struct Token{
        }

    }

    
}


#endif