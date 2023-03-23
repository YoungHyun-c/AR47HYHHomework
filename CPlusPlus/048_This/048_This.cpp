// 048_This.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
public:
    Player()
    {

    }
    void Damage(int _Att)
    {
        Hp -= _Att;
    }
    inline int GetHp()
    {
        return Hp;
    }
    inline void SetHp(int _Value)
    {
        Hp = _Value;
    }
    inline int GetAtt()
    {
        return Att;
    }
    inline void SetAtt(int _Value)
    {
        Att = _Value;
    }

protected:

private:
    int Hp = 100;
    int Att = 10;
};

int main()
{
    Player NewPlayer0 = Player();
    Player NewPlayer1 = Player();


    NewPlayer0.Damage(20);

    NewPlayer1.Damage(50);

    /*Player NewPlayer = Player();
    NewPlayer.SetAtt(100);
    NewPlayer.SetHp(100);*/
}

