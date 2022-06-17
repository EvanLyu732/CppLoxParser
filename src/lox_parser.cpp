#include <lox_parser.h>
#include <filesystem>
#include <string>
#include <fstream>
#include <iostream>

namespace parser {
    void LoxParser::run_file(std::string_view path) try {
        std::filesystem::path file_path(path);
        std::ifstream file(file_path, std::ios::in | std::ios::binary);
        const auto file_size = std::filesystem::file_size(file_path);
        std::string result(file_size, '\0');
        file.read(result.data(), file_size);
    } catch (std::exception& e) {
    }

    void LoxParser::run_prompt() noexcept {
        for (;;) {
            std::cout << ">" << '\n';
            std::string input_line;
            std::getline(std::cin, input_line);
            if (input_line.empty()) {
                continue;
            } else {
                run(input_line);
            }
        }
    }

    void LoxParser::run(std::string_view prompt_command) noexcept {

    }


    // TODO: Error handling in running command; report line + 
    // where + message  = 0
    void LoxParser::report(LoxParser::Error e) const noexcept {

        // set had_error = true; reset had_error = false and execute std::terminate; 

    }

}
