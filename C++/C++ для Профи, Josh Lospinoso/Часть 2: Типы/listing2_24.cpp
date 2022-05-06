#include <cstdint>

struct PodStruct {
    uint64_t a;
    char b [256];
    bool c;
};

int main () {
    PodStruct initialized_pod1 {};      // Все поля приравниваются к нулю
    PodStruct initialized_pod2 = {};    // Все поля приравниваются к нулю

    PodStruct initialized_pod3 { 42, "Hello" };         // Поля a и b заданы, c = 0
    PodStruct initialized_pod4 { 42, "Hello", true };   // Все поля заданы
}