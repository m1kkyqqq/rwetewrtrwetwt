// rwetewrtrwetwt.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <algorithm>
class Player {
public:
    std::string name;
    int score;
};

bool comparePlayers(const Player& p1, const Player& p2) {
    return p1.score > p2.score; // сортировка по убыванию очков
}
int main()
{
    int numPlayers;
    std::cout << "Enter the number of players: ";
    std::cin >> numPlayers;

    Player* players = new Player[numPlayers];

    for (int i = 0; i < numPlayers; ++i) {
        std::cout << "Enter player " << i + 1 << "'s name: ";
        std::cin >> players[i].name;
        std::cout << "Enter player " << i + 1 << "'s score: ";
        std::cin >> players[i].score;
    }

    std::sort(players, players + numPlayers, comparePlayers);

    std::cout << "\nPlayers sorted by score:\n";
    for (int i = 0; i < numPlayers; ++i) {
        std::cout << players[i].name << ": " << players[i].score << std::endl;
    }

    delete[] players;

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
