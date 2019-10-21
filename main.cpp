#include <iostream>
#include <vector>
using namespace std;

class StartWars {
private:
    struct warrior{
        int id;
        string name;
        int timeCounter;
    };
    vector<warrior> clones;
public:
    void createClone();
    void lifespan();
    void input();
};

void StartWars::createClone()
{
    int input;
    cout << "how many clones should there be" << endl;
    cin >> input;

    clones.reserve(input);
}

void StartWars::input()
{
    cout << "what is the id" << endl;

    cout << "what is the name" << endl;

    cout << "what is their " << endl;
}

int main() {
    StartWars start;

    return 0;
}