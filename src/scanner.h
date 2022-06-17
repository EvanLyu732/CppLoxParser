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
        void scan_token() noexcept;
        bool is_at_end() noexcept;

    private:
        std::string _source;
        std::list<token::Token> _tokens;

        char advance() noexcept;

        // keep track of token
        static int _start;
        static int _current;
        static int _line;
    };

    
}


#endif