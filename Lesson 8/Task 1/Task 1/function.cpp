#include <string>
#include "function.h"
#include "bad_lengthr.h"

int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length) {
        throw bad_length("Вы ввели слово запретной длины. До свидания ");
    }
    else return str.length();
}