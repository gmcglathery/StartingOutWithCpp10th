#ifndef REPORT_HPP
#define REPORT_HPP

#include <string>

class Heading {
private:
    std::string companyName;
    std::string reportName;

public:
    Heading(std::string c = "ABC Industries", std::string r = "Report");
    void printOneLineHeader();
    void printBoxedFormat();

private:
    std::string getPaddingString(const std::string& str, int totalWidth);
};

#endif
