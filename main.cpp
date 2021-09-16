#include <iostream>
#include "DoubleLinkedList.cpp"
using namespace std;

int main(){
    DoubleLinkedList<int> list;
    /*
    list.push_back(1);
    list.push_back(2);
    list.print();
    list.insert(3,2);
    list.insert(4,-4);
    list.insert(5,0);
    list.print();
    list.delete_by_value(4);
    list.print();
    cout<<"Pase 1"<<endl;
    list.delete_by_value(5);
    list.print();
    cout<<"Pase 2"<<endl;
    list.delete_by_position(-4);
    list.print();
    cout<<"Pase 3"<<endl;
    list.delete_by_position(15);
    list.print();
    cout<<"Pase 4"<<endl;
    cout<<"Siguiente"<<endl;
    */
   list.push_back(5);
   list.push_back(4);
   list.push_back(7);
   list.push_back(8);
   list.push_back(2);
   list.insert(10,-5);
   list.insert(1,2);
   list.insert(11,8);
   //cout<<list.maximo_recursive(list.getSize(),list.getHead())<<endl;//funca
   //cout<<list.maximo_iterative()<<endl;//funca
   //list.print();
   //list.recursive_print_begin_end(list.getHead());//funca
   //list.recursive_print_end_begin(list.getHead());//deberia funcar si le pasas la direccion del ultimo nodo
   //list.iterative_print_end_begin();//funca
   //cout<<list.count_even_numbers();//funca
   list.print();
   list.delete_by_value(11);
   cout<<"Elimine"<<endl;
   list.print();
   list.sort_descendent(0, list.getSize()-1);
   cout<<"Pase e sort"<<endl;
   list.print();
   
}