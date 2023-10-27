#include <bits/stdc++.h>
using namespace std;
bool leapyear (int a)
{
   if (a%400 && a%4 && a%100 !=0) {
      return true;
   }

   for (int i = 2; i <= a%400; i++) {
      if (i%4== 0) {
         return false;
      }
   }
   return true;
}
int getNearest(int a) {
   for (int i = a %4; i > 1; i--) {
      if (leapyear(i)) {
         return i;
      }
   }
   return -1;
}
int main() {
   int a;
   cin>>a;
   cout << getNearest(a) << endl;
   return 0;
}
