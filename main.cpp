#include <iostream>
#include <cassert>
#include <string_view>

//NOMER 1
/*
struct Fruits
{
    int apples;
    int pears;
    int oranges;
};
int main()
{
    Fruits fruits;

    std::cout << "Apples: ";
    std::cin >> fruits.apples;

    std::cout << "Pears: ";
    std::cin >> fruits.pears;

    std::cout << "Oranges: ";
    std::cin >> fruits.oranges;

    bool  testFruits = false;
    {
    bool ifApples = fruits.apples > 5;
    bool ifPears = fruits.pears < 8;
    bool ifOranges = fruits.oranges == fruits.apples * 2;

     testFruits = ifApples && ifPears && ifOranges;
    }
    if (testFruits)
    {
        std::cout << "Hello";
    }

    return 0;
}*/
//-------------------------------- NOMER 2
/*void A(){
    std::cout<<"A"<<endl;
}

void B(){
    std::cout<<"FUNC B CALLED"<<std::endl;
}
void C(){
    std::cout<<"FUNC C CALLED"<<std::endl;
}
void A1(){
    std::cout<<"FUNC A1 CALLED"<<std::endl;
    B();
    C();
}


int main(){
    std::cout<< "Jello"<<std::endl;
A();
A1();


    return 0;
}
*/
//--------------------------------

// NOMER 3

/*

struct Leg            // тип Leg
{
    int length;       // тип int
};

struct Arm            // тип структура
{
    int power;        // тип int
};

struct Person         // тип структура
{
    std::array<Leg, 2> legs; // тип std::array<Leg, 2>,  2 объекта legs
    Arm arms[2];              // массив из 2 объектов Arm, тип Arm
};

int main()
{
    Person person;    // объект person , 2 обьекта legs.length и 2 объекта arms.power
}
*/


//MOMER 4
/*int countOnes(std::string_view text) {
    int count = 0;
    for (char c : text) {
        if (c == '1')
            count++;
    }
    return count;
}

void test_ones() {
    // нет ни одной '1'
    assert(countOnes("000") == 0);
    assert(countOnes("") == 0);

    // несколько '1'
    assert(countOnes("10101") == 3);
    assert(countOnes("111000111") == 6);

    // все символы — '1'
    assert(countOnes("111111") == 6);

    // смешанные символы
    assert(countOnes("abc1d1e") == 2); 
}
int main() {
    test_ones();
    return 0;
}*/

