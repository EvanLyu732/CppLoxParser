#ifndef LOX_PARSER
#define LOX_PARSER

#include <exception>
#include <string_view>
#include "scanner.h"

namespace parser{
    #define LOG_TAG "[lox_parser]"

    struct LoxParser{

        LoxParser() = delete;
        LoxParser(::scanner::Scanner sc) {

        };
        ~LoxParser() = default;

        void run_file(std::string_view path) noexcept(false);

        void run_prompt() noexcept(false);

        void run(std::string prompt_command) noexcept;

    };

}


#endif
