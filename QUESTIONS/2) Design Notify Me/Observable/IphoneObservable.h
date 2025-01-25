#include<bits/stdc++.h>
#include "../Observer/NotificationAlertObserver.h"
#include "./StockObservable.h"

using namespace std;

class IphoneObservable: public StockObserverable{
      
      public:
      int stockCount = 0; 
      vector<shared_ptr<NotificationAlertObserver>> observerList;

      void add(shared_ptr<NotificationAlertObserver> observer) {
            observerList.push_back(observer); 
      }

      void remove(shared_ptr<NotificationAlertObserver> observer) {
            observerList.erase(remove_if(observerList.begin(),observerList.end(),[&observer](const shared_ptr<NotificationAlertObserver> &ptr ){
                  return ptr.get()==observer.get();
            }),observerList.end());
      }

      void notify(){
            for(shared_ptr<NotificationAlertObserver> observer: observerList){
                  observer->update();
            }
      }

      void setStockCount(int newStockAdded){
            if(stockCount==0){
                  notify();
            }
            stockCount+=newStockAdded;
      }

      int getStockCount(){
            cout <<  stockCount << endl;
            return 0;
      }

};