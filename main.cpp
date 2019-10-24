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
public:
    void createClone(vector<warrior> *clones);
    void lifespan(vector<warrior> *clones);
    void input(vector<warrior> *clones);
    void API();
};

void StartWars::API()
{
    vector<warrior> clones, *clonePointer;
    clonePointer = &clones;

    createClone(clonePointer);
    input(clonePointer);
    lifespan(clonePointer);
}

void StartWars::createClone(vector<warrior> *clones)
{
    int input;
    cout << "how many clones should there be" << endl;
    cin >> input;

    clones->reserve(input);
}

void StartWars::input(vector<warrior> *clones)
{
    for (int i = 0; i < clones->capacity(); i++)
    {
        clones->push_back(warrior());

        cout << "what is the id" << endl;
        cin >> clones->at(i).id;

        cout << "what is the name" << endl;
        cin >> clones->at(i).name;

        cout << "what is their lifespan" << endl;
        cin >> clones->at(i).timeCounter;
    }

}

void StartWars::lifespan(vector<warrior> *clones)
{
    int i = 0;
    while (clones->size() != 0)
    {
        for (i = clones->size(); i < clones->size(); i++)
        {
            cout << "Code here is not being reached!!" << endl;
            clones->at(i).timeCounter--;
            if(clones->at(i).timeCounter <= 0){
                cout << "Clone " << clones->at(i).id << clones->at(i).name <<
                                 " has this much time left has perished." << endl;
                //this clone has died
                //delete them
                clones->erase(clones->begin() + i);
            }else{
                //still alive
                cout << "clone " << clones->at(i).id << clones->at(i).name <<
                     " has this much time left:" << clones->at(i).timeCounter << endl;
            }

        }
    }
}

int main() {
    StartWars start;
    start.API();

    return 0;
}