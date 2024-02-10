#include "ScalarConversion.hpp"

ScalarConverter::ScalarConverter() {} //private olmalı mi !!!!

// kullanmıcan şeyi niye aldın vooyynn
ScalarConverter::ScalarConverter(const std::string& name) { (void)name; }

ScalarConverter::ScalarConverter(const ScalarConverter& ref) { *this = ref; }

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& ref){
    this->_name = ref._name;
    return (*this);
}

bool ScalarConverter::is_wrong_number(std::string& s){
    size_t i;

    // Kontrol 1: İlk karakter + veya - ise, bu karakterin sayı içinde sadece bir kez geçmesi gerekiyor.
    if (s[0] == '-' || s[0] == '+')
        if((std::count(s.begin(), s.end(), '-') + (std::count(s.begin(), s.end(), '+')) != 1)) // - ve + toplamı bir e eşit degilse
            return (true);

    // f ye buyuk esit mi diye bakarak dene !!!!
    // Kontrol 2: 'f' harfi veya '.' karakteri birden fazla kez geçmemeli. Ayrıca, 'f' varsa son karakter 'f' olmalı.
    if ((std::count(s.begin(), s.end(), 'f') > 1 || std::count(s.begin(), s.end(), '.') > 1) ||
        (std::count(s.begin(), s.end(), 'f') == 1 && s[s.size() - 1] != 'f'))
        return (true);
    
    // Kontrol 3: Karakter dizisi içinde sadece sayısal karakterler, '+' veya '-', 'f' veya '.' karakterleri olmalı.
    for (i = 0; i < s.size(); i++)
        if (!isdigit(s[i]) && s[0] != '-' && s[0] != '+' && (s[i] != 'f') && s[i] != '.')
            return (true);

    return (false);
}

// bilimsel sayıysa bir donecek
bool ScalarConverter::is_it_for_science(std::string& s){
    return (s == "nan" || s == "nanf" || s == "-inf" || s == "inf" || s == "+inf" || s == "-inff" || s == "inff" || s == "+inff");
}
//str: Fonksiyon, bir string referansı (&) alır. Bu, fonksiyonun orijinal stringi değiştirmeden onun içeriğine erişmesine ve üzerinde işlem yapmasına imkan sağlar
static void converter_to_char(std::string& str){
    //string ifade char* a donusturulur (str.s_str)
    //atoi ile int degere donusturulur
    //static_cast ile belirtilen type(char) a donusum daglanır
    char c = static_cast<char>(std::atoi(str.c_str()));

    if (ScalarConverter::is_it_for_science(str))
        std::cout << "impossible" << std::endl;
    else if (c < 32 || c > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << c << "'" << std::endl;
}

static void converter_to_int(std::string& str){
    if (ScalarConverter::is_it_for_science(str))
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::atoi(str.c_str()) << std::endl;
}

// bunları madem float a yada double ye ceviriyoruz peki yazarken niye .0f falan ekliyoruz !!!!
static void	converter_to_float(std::string &str){
	float number = std::strtof(str.c_str(), 0);

    if (number == static_cast<int>(number))
        std::cout << number << ".0f" << std::endl;
    else
        std::cout << number << "f" << std::endl;
}

static void converter_to_double(std::string& str){
    double number = std::strtod(str.c_str(), 0);

    // bu donusume ne gerek vardı !!!!
    if (number == static_cast<int>(number))
        std::cout << number << ".0" << std::endl;
    else
        std::cout << number << std::endl;
}

void ScalarConverter::convert(std::string str){
	std::cout << "char: ", converter_to_char(str);
	std::cout << "int: ", converter_to_int(str);
	std::cout << "float: ", converter_to_float(str);
	std::cout << "double: ", converter_to_double(str);
}

