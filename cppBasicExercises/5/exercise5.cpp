#include <iostream>
#include <limits>
#include <cstddef>

int main() {
    std::cout << "short: " << std::dec << std::numeric_limits<short>::max() << " ; " << std::dec << std::numeric_limits<short>::min() << "\n"            << "int: " << std::dec << std::numeric_limits<int>::max() << " ; " << std::dec << std::numeric_limits<int>::min() << "\n"
              << "streamsize: " << std::dec << std::numeric_limits<std::streamsize>::max() << " ; " << std::dec << std::numeric_limits<std::streamsize>::min() << "\n"
              << "size_t: " << std::dec << std::numeric_limits<std::size_t>::max() << " ; " << std::dec << std::numeric_limits<size_t>::min() << "\n"
              << "float: " << std::numeric_limits<float>::max() << " ; " << std::dec << std::numeric_limits<float>::min() << "\n"
              << "double: " << std::defaultfloat << std::numeric_limits<double>::max() << " ; " << std::dec << std::numeric_limits<double>::min() << "\n";
    return 0;
}