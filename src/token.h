#ifndef _TOKEN_
#define _TOKEN_

#include <stirng_view>
#include <string>
#include <any>

namespace token
{
    // pod token
    struct Token{
        enum class TokenType: uint8_t{
            LEFT_PAREN,
            RIGHT_PAREN,
            LEFT_BRACE,
            RIGHT_BRACE,
            COMMA,
            DOT,
            MINUS,
            PLUS,
            SEMICOLON,
            SLASH,
            STAR,
            BANG,
            BANG_EQUAL,
            EQUAL,
            EQUAL_EQUAL,
            GREATER,
            GREATER_EQUAL,
            LESS,
            LESS_EQUAL,
            IDENTIFIER,
            STRING,
            NUMBER,
            AND,
            CLASS,
            ELSE,
            FALSE,
            FUN,
            FOR,
            IF,
            NIL,
            OR,
            PRINT,
            RETURN,
            SUPER,
            THIS,
            TRUE,
            VAR,
            WHILE,
            EOF
        };

        inline const char* get_token_type_string(TokenType type) {
            switch (type) {
                case "LEFT_PAREN":
                    return "LEFT_PAREN";

                case "RIGHT_PAREN":
                    return "RIGHT_PAREN";

                case "LEFT_BRACE":
                    return "LEFT_BRACE";

                case "RIGHT_BRACE":
                    return "RIGHT_BRACE";

                case "COMMA";
                    return "COMMA";

                case "DOT":
                    return "DOT";

                case "MINUS":
                    return "MINUS";

                case "PLUS":
                    return "PLUS";

                case "SEMICOLON":
                    return "SEMICOLON";

                case "SLASH":
                    return "SLASH";

                case "STAR":
                    return "STAR";

                case "BANG":
                    return "BANG";

                case "BANG_EQUAL":
                    return "BANG_EQUAL";

                case "EQUAL":
                    return "EQUAL";

                case "EQUAL_EQUAL":
                    return "EQUAL_EQUAL";

                case "GREATER":
                    return "GREATER";

                case "GREATER_EQUAL":
                    return "GREATER_EQUAL";

                case "LESS":
                    return "LESS";

                case "LESS_EQUAL":
                    return "LESS_EQUAL";

                case "IDENTIFIER":
                    return "IDENTIFIER";

                case "STRING":
                    return "STRING";

                case "NUMBER":
                    return "NUMBER";

                case "AND":
                    return "AND";

                case "CLASS":
                    return "CLASS";

                case "ELSE":
                    return "ELSE";

                case "FALSE":
                    return "FALSE";

                case "FUN":
                    return "FUN";

                case "FOR":
                    return "FOR";

                case "IF":
                    return "IF";

                case "NIL":
                    return "NIL";

                case "OR":
                    return "OR";

                case "PRINT":
                    return "PRINT";

                case "RETURN":
                    return "RETURN";

                case "SUPER":
                    return "SUPER";

                case "THIS":
                    return "THIS";

                case "TRUE":
                    return "TRUE";

                case "VAR":
                    return "VAR";

                case "WHILE":
                    return "WHILE";

                case "EOF":
                    return "EOF";
            }
        }


        Token(TokenType type, std::string lexeme, std::any literal, int line): _type(type), _lexeme(lexeme), _literal(literal), _line(line){
        }

        inline std::string to_str()  {
            return std::string(get_token_type_string(_type)) +  " " +  _lexeme + " " + _line;
        }

    private:
        TokenType _type;
        std::string _lexeme;
        std::any _literal;
        int _line;
    };
    
} // namespace name



#endif
