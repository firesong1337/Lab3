#include <iostream>
#include "BinaryTree.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    BinaryTree MyTree; // создание дерева
    int element;
    // корнем является тот элемент, который ты ввел 1-м
    for (int i = 0; i < 6; ++i) {
        cin >> element;
        MyTree.Insert(element);
    }
    cout <<"Дерево: " << endl << MyTree << endl;
    for (int i = 0; i < MyTree.Size(); ++i) {
        if (MyTree.Find(i)){
            cout << "Элемент " << i << " находится на дереве" << endl;
        }
    }
    if (MyTree.Size() == 6){ // В данном случае, если в дереве все 10 элементов разные, то он зайдет
        cout << "Тест 2 пройден" << endl;
    }
    cout << "Введите элемент для удаления: ";
    cin >> element;
    MyTree.Erase(element); // удаляешь тот элемент, который является корнем, который вводил первым
    cout << MyTree << endl;
    if (MyTree.Size() == 5){
        cout << "Тест 4 пройден" << endl;
    }
    MyTree.Clear();
    if (MyTree.Size() == 0){
        cout << "TТест 5 пройден" << endl;
    }
    cout << MyTree << endl;
    return 0;
}
