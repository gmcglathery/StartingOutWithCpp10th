#include <iostream>
#include "report.hpp"
#include <windows.h>

int getScreenWidth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.srWindow.Right - csbi.srWindow.Left + 1;
}

Heading::Heading(std::string c, std::string r) : companyName(c), reportName(r) {}

void Heading::printOneLineHeader() {
    std::cout << companyName << " " << reportName << std::endl;
}

void Heading::printBoxedFormat() {
    int screenWidth = getScreenWidth();
    int paddingWidth = (screenWidth - static_cast<int>(companyName.length()) - static_cast<int>(reportName.length()) - 4) / 2;
    int starWidth = screenWidth - paddingWidth * 2 - companyName.length() - reportName.length() - 4;

    for (int i = 0; i < screenWidth; i++) {
        std::cout << "*";
    }

    std::cout << std::endl;
    std::cout << std::string(paddingWidth, ' ') << companyName << std::string(paddingWidth, ' ') << std::endl;
    std::cout << std::string(paddingWidth, ' ') << reportName << std::string(paddingWidth, ' ') << std::endl;

    for (int i = 0; i < screenWidth; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

std::string Heading::getPaddingString(const std::string& str, int totalWidth) {
    int leftPadding = totalWidth / 2;
    int rightPadding = totalWidth - leftPadding;
    return std::string(leftPadding, ' ') + str + std::string(rightPadding, ' ');
}