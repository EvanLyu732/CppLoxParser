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

    void LoxParser::run_prompt() {
        for (;;) {
            std::cout << ">" << '\n';
            std::istringstream input_line;
            std::getline(std::cin, input_line);
            auto input_line_str = input_line.str();
            if (input_line_str.empty()) {
                continue;
            } else {
                run(input_line_str);
        }
    }

    void LoxParser::run(std::string prompt_command) {

    }


}
