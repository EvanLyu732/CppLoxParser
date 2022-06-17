#include <scanner.h>
#include <token.h>

namespace scanner{

    int Scanner::_start{0};
    int Scanner::_current{0};
    int Scanner::_line{1};

    std::list<token::Token> Scanner::scan_tokens() noexcept{
        while (!is_at_end())
          _start = _current;
           scan_token();
           token::Token token{token::Token::TokenType::_EOF, "", nullptr, _line};
          _tokens.push_back(token);
    }

    char Scanner::advance() noexcept {
        // if ()
        //TODO
        return this->_source.at(_current++);
    }

    void add_token_for_literal(token::Token::TokenType type, std::any literal) {

    }

    void add_token(token::Token::TokenType type)  {
        add_token_for_literal(type, nullptr);
    }


    void Scanner::scan_token() noexcept{
        const char c =  advance();
        using TokenType = token::Token::TokenType;

        switch (c) {
            case '(':
                add_token(TokenType::LEFT_PAREN);
                break;
            case ')':
                add_token(TokenType::RIGHT_PAREN);
                break;
            case '{':
                add_token(TokenType::LEFT_BRACE);
                break;
            case '}':
                add_token(TokenType::RIGHT_BRACE);
                break;
            case ',':
                add_token(TokenType::COMMA);
                break;
            case '.':
                add_token(TokenType::DOT);
                break;
            case '-':
                add_token(TokenType::MINUS);
                break;
            case '+':
                add_token(TokenType::PLUS);
                break;
            case ';':
                add_token(TokenType::SEMICOLON);
                break;
            case '*':
                add_token(TokenType::STAR);
                break;

        }

    }

    bool Scanner::is_at_end() noexcept{
        return _current >= _source.size();
    }

}