#ifndef _SCANNER_
#define _SCANNER_

#include <string_view>
#include <list>
#include <token.h>


namespace scanner{
    #define LOG_TAG "[scanner]"

    struct Scanner{
        Scanner(std::string_view source): _source(source)  {

        }
        Scanner() = delete;
        Scanner(const Scanner& rhs) = delete;
        Scanner(const Scanner&& rhs) = delete;
        ~Scanner() = delete;

    public:
        std::list<token::Token> scan_tokens() noexcept;

    private:
        std::string _source;
        std::list<token::Token> _tokens;
    };

    
}


#endif