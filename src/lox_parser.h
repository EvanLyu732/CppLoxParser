#ifndef LOX_PARSER
#define LOX_PARSER

#include <exception>
#include <string_view>
#include "scanner.h"

namespace parser{
    #define LOG_TAG "[lox_parser]"

    struct LoxParser{
    public:
        LoxParser() = delete;
        LoxParser(::scanner::Scanner sc) {

        };
        ~LoxParser() = default;

        void run_file(std::string_view path) noexcept(false);

        void run_prompt() noexcept;

        void run(std::string_view prompt_command) noexcept;

        struct Error{
            int line_number;
            std::string_view content;
            std::string_view where;
        };

        void report(Error e) const noexcept;

    private:
        inline static bool had_error{false};

    };

}


#endif
