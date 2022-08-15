#include "bad_lengthr.h"

bad_length::bad_length(const std::string& word) : std::runtime_error(word) {};