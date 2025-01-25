#include<bits/stdc++.h>
#include "./NotificationAlertObserver.h"
#include "../Observable/StockObservable.h"

using namespace std;

class PhoneAlertObserver: public NotificationAlertObserver{
      
      public:
      string phone;
      shared_ptr<StockObserverable> observable;

      public:  // constructor injection
      PhoneAlertObserver(string phone, shared_ptr<StockObserverable> observable){
            this->phone = phone;
            this->observable = observable;
      }

      void update(){
           cout << "product is in the stock hurry up!" << endl;
           sendPhone(phone);
      }

      void sendPhone(string phone){
            cout << "msg send to " << phone << endl;
      }

      
};