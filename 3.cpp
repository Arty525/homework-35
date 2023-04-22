#include <iostream>
#include <filesystem>
#include <vector>

auto getFiles = [](std::filesystem::path path, const std::string extension) {
    std::vector<std::filesystem::path> files;
    for (auto& p : std::filesystem::recursive_directory_iterator(path)) {
        if (std::filesystem::is_regular_file(p) && !p.path().extension().compare(extension)) {
            files.push_back(p.path().filename());
        }
    }
    return files;
};

int main() {
    std::filesystem::path path /*= "C:\\Users\\Public\\Documents"*/;
    std::string extension /*= ".txt"*/;
    std::cout << "Path: ";
    std::cin >> path;
    std::cout << "Extension: ";
    std::cin >> extension;
    auto f = getFiles(path, extension);
    for (auto i : f) {
        std::cout << i << std::endl;
    }
    return 0;
}
