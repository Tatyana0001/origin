#include "figure_error.h"

figure_error::figure_error (const std::string& word) : std::domain_error(word) {};