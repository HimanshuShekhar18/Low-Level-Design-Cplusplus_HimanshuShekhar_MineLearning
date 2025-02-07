#include <bits/stdc++.h>

using namespace std;

class BasePizza
{
      public:
      virtual int cost() = 0;
      virtual ~BasePizza() = default;
};

class Margherita : public BasePizza
{
      public:
      int cost()
      {
            return 100;
      }
};

class Vegdelight : public BasePizza
{
      public:
      int cost()
      {
            return 200;
      }
};


class ToppingDecorator : public BasePizza{
      
};

class ExtraCheese: public ToppingDecorator{

      private:
      shared_ptr<BasePizza> pizza;

      public:
      ExtraCheese(shared_ptr<BasePizza> pizza){
            this->pizza = pizza;
      }
      
      int cost(){
            return this->pizza->cost()+10;
      }
};

class MushRoom: public ToppingDecorator{
       private:
       shared_ptr<BasePizza> pizza;

       public:
       MushRoom(shared_ptr<BasePizza> pizza){
            this->pizza = pizza;
       }

       int cost(){
            return this->pizza->cost()+5;
       }
};


int main(){


      shared_ptr<BasePizza> pizza1 = make_shared<Margherita>();
      cout << pizza1->cost() << endl;

      shared_ptr<BasePizza> pizza2 = make_shared<Vegdelight>();
      cout << pizza2->cost() << endl;

      shared_ptr<BasePizza> pizza3 = make_shared<MushRoom>(make_shared<ExtraCheese>(make_shared<Margherita>()));
      cout << pizza3->cost() << endl;

      shared_ptr<BasePizza> pizza4 = make_shared<MushRoom>(make_shared<ExtraCheese>(make_shared<Vegdelight>()));
      cout << pizza4->cost() << endl;


}