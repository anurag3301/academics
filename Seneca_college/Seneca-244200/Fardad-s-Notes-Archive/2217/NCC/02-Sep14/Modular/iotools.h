#ifndef SDDS_IOTOOLS_H
#define SDDS_IOTOOLS_H
namespace sdds {
   void keybFlush();
   int getStr(char* str, int maxlen);
   int getInt();
   double getDouble();
   int getLimInt(int lowerLimit, int upperLimit);
   double getLimDbl(double lowerLimit, double upperLimit);
   int yes();


}

#endif // !SDDS_IOTOOLS_H
