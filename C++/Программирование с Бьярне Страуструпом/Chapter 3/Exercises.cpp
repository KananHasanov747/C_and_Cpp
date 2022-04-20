#include <iostream>

using namespace std;

// Упражнение №11
int main () {
    int one_cent, five_cent, ten_cent, twenty_five_cent, fifty_cent, sum;

    while (cout << "Сколько у вас одноцентовых монет? " && cin >> one_cent &&
           cout << "Сколько у вас пятицентовых монет? " && cin >> five_cent &&
           cout << "Сколько у вас десятицентовых монет? " && cin >> ten_cent &&
           cout << "Сколько у вас двадцатипятицентовых монет? " && cin >> twenty_five_cent &&
           cout << "Сколько у вас пятидесятицентовых монет? " && cin >> fifty_cent) {
        cout << "У вас "; (one_cent != 1) ? cout << one_cent << " одноцентовых монет" << endl : cout << one_cent << " одноцентовая монета" << endl;
        cout << "У вас "; (five_cent != 1) ? cout << five_cent << " пятицентовых монет" << endl : cout << five_cent << " пятицентовая монета" << endl;
        cout << "У вас "; (ten_cent != 1) ? cout << ten_cent << " десятицентовых монет" << endl : cout << ten_cent << " десятицентовая монета" << endl;
        cout << "У вас "; (twenty_five_cent != 1) ? cout << twenty_five_cent << " двадцатипятицентовых монет" << endl : cout << twenty_five_cent << " двадцатипятицентовая монета" << endl;
        cout << "У вас "; (fifty_cent != 1) ? cout << fifty_cent << " пятидесятицентовых монет" << endl : cout << fifty_cent << " пятидесятицентовая монета" << endl;
        
        sum = one_cent + five_cent * 5 + ten_cent * 10 + twenty_five_cent * 25 + fifty_cent * 50;
        cout << "Общая стоимость ваших монет равна "; (sum > 100) ? cout << sum / 100 << " доллар(а) " << sum - (sum / 100 * 100) << " центам" << endl : cout << sum << " центам" << endl;
    } 
}