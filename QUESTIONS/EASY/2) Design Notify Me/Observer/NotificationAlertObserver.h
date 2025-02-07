#ifndef NOTIFICATIONALERTOBSERVER_H
#define NOTIFICATIONALERTOBSERVER_H

#include <bits/stdc++.h>

using namespace std;

class NotificationAlertObserver
{
public:
      virtual ~NotificationAlertObserver() = default;
      virtual void update() = 0;
};

#endif 