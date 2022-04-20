#include <iostream>

int main () {
    std::string first_name;
    int age;

    while (std::cout << "Введите имя адресата: " &&
           std::cin >> first_name &&
           std::cout << "Введите возраст адресата: " &&
           std::cin >> age) {
        std::cout << "Дорогой " << first_name << ", "
                  << "Как дела? У меня все хорошо. Я скучаю по тебе." << std::endl;
        
        std::string friend_name;
        std::cout << "Давно ли ты встречал "; std::cin >> friend_name; std::cout << "?" << std::endl;
        std::cout << "Если ты увидишь " << friend_name << ", пожалуйста попроси е(го/е) позвонить мне" << std::endl;
        
        std::cout << "Я слышал, ты только что отметил день рожения и тебе исполнилось " << age << " лет" << std::endl;
        if (age <= 0 || age > 110) std::cout << "ты шутишь!" << std::endl;
        if (age < 12) std::cout << "На следющий год тебе исполнится " << age + 1 << " лет" << std::endl;
        if (age == 17) std::cout << "В следующем году ты сможешь голосовать" << std::endl;
        if (age > 70) std::cout << "Я надеюсь, что ты не скучаешь на пенсии" << std::endl;
        std::cout << "Искренне твой " && std::cin;
    }
}