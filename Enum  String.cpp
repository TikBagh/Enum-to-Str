
#include <iostream>
#include <string>

enum Car { BMW, Mercedes, Audi };


std::string EnumToString(Car car) {
    switch (car) {
    case BMW: return "BMW";
    case Mercedes: return "Mercedes";
    case Audi: return "Audi";
    default: return "UNKNOWN";
    }
}


Car StringToEnum(const std::string& str) {
    if (str == "BMW") return BMW;
    if (str == "Mercedes") return Mercedes;
    if (str == "Audi") return Audi;
    
}

int main() {
    Car myCar = BMW;

    
    std::string enumStr = EnumToString(myCar);
    std::cout << "Enum to string: " << enumStr << std::endl;

    
    std::string str = "Audi";
    Car Enum = StringToEnum(str);
    std::cout << "String to enum: " << Enum << std::endl;

    return 0;
}