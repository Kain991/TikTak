#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;
class Environment {
public:
    Environment(){
        for(int i =0; i < 3 ;i++){
            for(int j = 0 ;j < 3 ;j++){
                board[i][j] = ' ';
            }
        }
    }
    char board[3][3];
    void drawboard();
    char checkwinner();
    bool checkturn(int y , int x);

};
class Player : public Environment{
public:
    void playwithhuman();
    void playwithbot();
};
bool Environment :: checkturn(int y , int x) {
    if(board[y][x] == ' '){
        return true;
    }
    else return false;
}


int main() {
    Player player;

    int choice;
    while(choice != 4){
        cout<<"1.Player vs. Player\n"
            <<"2.Player vs. Bot\n"
            <<"3.Player vs. AdvBot\n"
            <<"4.Quit\n";
        cin>>choice;
        if(choice == 1){
            player.playwithhuman();
        }
        else if(choice == 2){
            player.playwithbot();
        }
        else if(choice == 3){

        }
        else {
            break;
        }

    }
}
