#include <iostream>
#include <list>
#include "Data.cpp"


class Tabela{
    public:
        std::list<Data> data;

    public:
        void add(Data novo){
            data.push_front(novo);
        }

};
