#pragma once
#include <iostream>

class figure_error : public std::domain_error {
public:
    figure_error(const std::string& word);
};