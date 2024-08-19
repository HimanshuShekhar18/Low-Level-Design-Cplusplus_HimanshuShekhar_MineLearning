#include <bits/stdc++.h>
#include "./Observable/StockObservable.h"
#include "./Observable/IphoneObservable.h"
#include "./Observer/NotificationAlertObserver.h"
#include "./Observer/EmailAlertObserver.h"
#include "./Observer/PhoneAlertObserver.h"

using namespace std;

int main()
{
      shared_ptr<StockObserverable> iphoneObservableobject = make_shared<IphoneObservable>();

      shared_ptr<NotificationAlertObserver> observer1 = make_shared<EmailAlertObserver>("shekhar.iiitian@gmail.com", iphoneObservableobject);
      shared_ptr<NotificationAlertObserver> observer2 = make_shared<EmailAlertObserver>("adira24002@gmail.com", iphoneObservableobject);
      shared_ptr<NotificationAlertObserver> observer3 = make_shared<PhoneAlertObserver>("9304228985", iphoneObservableobject);

      iphoneObservableobject->add(observer1);
      iphoneObservableobject->add(observer2);
      iphoneObservableobject->add(observer3);

      iphoneObservableobject->setStockCount(10);

      return 0;
}