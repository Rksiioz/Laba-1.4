#include "Train.h"

std::string readFileIntoString(const std::filesystem::path& path) {
    std::ifstream fileStream(path);
    if (!fileStream.is_open()) {
        std::cerr << "Could not open file: " << path << std::endl;
        return "";
    }

    std::stringstream buffer;
    buffer << fileStream.rdbuf();

    return buffer.str();
}

Train::Train() : Stack()
{
}

void Train::fromFile(std::filesystem::path path) {
    std::string content = readFileIntoString(path);
    for(int i = 0; i < content.size(); i++) {
        auto vagonType = content.at(i);
        this->push(vagonType);
    }
}

std::string Train::toString() {
    std::string result = "";
    auto current = this->last;

    while (current != NULL) {
        result += current->value;
        current = current->next;
    }

    return result;
}

void Train::read() {
    std::cout << std::endl << std::endl;
    std::cout << "Create a train: ";
    std::string content;
    std::cin >> content; std::cout << std::endl;
    for(char vagonType : content) {
        this->push(vagonType);
    }
}

void Train::display() {
    std::cout << toString() << std::endl;
}
