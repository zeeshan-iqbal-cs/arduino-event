

#ifndef Debug_h
#define Debug_h


class Event {
private:
  unsigned long start;
  unsigned long interval;

public:
  void begin(unsigned long interval){
    this->interval = interval;

    start = millis();
  }

  bool trigger(){
    if (millis() - start >= interval)
      return true;
    else return false;
  }

  void reset(){
    start = millis();
  }
};

#endif
