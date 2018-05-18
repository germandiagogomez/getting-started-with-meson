#include "mylib.hpp"
#include <boost/filesystem.hpp>

boost::optional<std::string> myLibApi() {
    return boost::filesystem::current_path().string();
}
