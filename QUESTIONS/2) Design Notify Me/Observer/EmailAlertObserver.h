#include<bits/stdc++.h>
#include "../Observable/StockObservable.h"
#include "./NotificationAlertObserver.h"

using namespace std;


class EmailAlertObserver: public NotificationAlertObserver{
      
      public:
      string emailId;
      shared_ptr<StockObserverable> observable;

      public:  // constructor injection
      EmailAlertObserver(string emailId, shared_ptr<StockObserverable> observable){
            this->emailId = emailId;
            this->observable = observable;
      }

      void update(){
            cout << "product is in the stock hurry up!" << endl;
            sendMail(emailId);
      }

      void sendMail(string emailId){
            cout << "msg send to " << emailId << endl;
      }
};