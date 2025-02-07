#ifndef StockObserverable_H
#define StockObserverable_H

#include <bits/stdc++.h>
#include "../Observer/NotificationAlertObserver.h"

using namespace std;
class StockObserverable{

      public:
      virtual ~StockObserverable() = default;
      virtual void add( shared_ptr<NotificationAlertObserver> observer) = 0;
      virtual void remove( shared_ptr<NotificationAlertObserver> observer) = 0;
      virtual void notify() = 0;
      virtual void setStockCount(int newStockAdded) = 0;
      virtual int getStockCount() = 0;

};

#endif