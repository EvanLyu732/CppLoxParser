#ifndef _TOKEN_
#define _TOKEN_

#include <string_view>
#include <string>
#include <any>

namespace token
{
    struct Token{
    public:
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
            _EOF
        };

        inline const char* get_token_type_string(Token::TokenType type) {
            switch (type) {
                case Token::TokenType::LEFT_PAREN:
                    return "LEFT_PAREN";

                case Token::TokenType::RIGHT_PAREN:
                    return "RIGHT_PAREN";

                case Token::TokenType::LEFT_BRACE:
                    return "LEFT_BRACE";

                case Token::TokenType::RIGHT_BRACE:
                    return "RIGHT_BRACE";

                case Token::TokenType::COMMA:
                    return "COMMA";

                case Token::TokenType::DOT:
                    return "DOT";

                case Token::TokenType::MINUS:
                    return "MINUS";

                case Token::TokenType::PLUS:
                    return "PLUS";

                case Token::TokenType::SEMICOLON:
                    return "SEMICOLON";

                case Token::TokenType::SLASH:
                    return "SLASH";

                case Token::TokenType::STAR:
                    return "STAR";

                case Token::TokenType::BANG:
                    return "BANG";

                case Token::TokenType::BANG_EQUAL:
                    return "BANG_EQUAL";

                case Token::TokenType::EQUAL:
                    return "EQUAL";

                case Token::TokenType::EQUAL_EQUAL:
                    return "EQUAL_EQUAL";

                case Token::TokenType::GREATER:
                    return "GREATER";

                case Token::TokenType::GREATER_EQUAL:
                    return "GREATER_EQUAL";

                case Token::TokenType::LESS:
                    return "LESS";

                case Token::TokenType::LESS_EQUAL:
                    return "LESS_EQUAL";

                case Token::TokenType::IDENTIFIER:
                    return "IDENTIFIER";

                case Token::TokenType::STRING:
                    return "STRING";

                case Token::TokenType::NUMBER:
                    return "NUMBER";

                case Token::TokenType::AND:
                    return "AND";

                case Token::TokenType::CLASS:
                    return "CLASS";

                case Token::TokenType::ELSE:
                    return "ELSE";

                case Token::TokenType::FALSE:
                    return "FALSE";

                case Token::TokenType::FUN:
                    return "FUN";

                case Token::TokenType::FOR:
                    return "FOR";

                case Token::TokenType::IF:
                    return "IF";

                case Token::TokenType::NIL:
                    return "NIL";

                case Token::TokenType::OR:
                    return "OR";

                case Token::TokenType::PRINT:
                    return "PRINT";

                case Token::TokenType::RETURN:
                    return "RETURN";

                case Token::TokenType::SUPER:
                    return "SUPER";

                case Token::TokenType::THIS:
                    return "THIS";

                case Token::TokenType::TRUE:
                    return "TRUE";

                case Token::TokenType::VAR:
                    return "VAR";

                case Token::TokenType::WHILE:
                    return "WHILE";

                case Token::TokenType::_EOF:
                    return "EOF";
            }
        }


        Token(TokenType type, std::string lexeme, std::any literal, int line): _type(type), _lexeme(lexeme), _literal(literal), _line(line){
        }

        ~Token() = default;
    private:
        TokenType _type;
        std::string _lexeme;
        std::any _literal;
        int _line;


    public:
        inline std::string to_str()  {
            return std::string(get_token_type_string(_type)) +  " " +  _lexeme + " " + std::to_string(_line);
        }

    };
    
} // namespace name



#endif
