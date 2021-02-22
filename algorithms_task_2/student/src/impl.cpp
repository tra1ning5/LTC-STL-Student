#include "impl.h"

bool startsWith(const std::string &source, const std::string &prefix)
{
    return source.find(prefix) != std::string::npos;
}
