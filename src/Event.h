

#ifndef Event_h
#define Event_h


class Event {
private:
  unsigned long start;
  unsigned long interval;

public:
  void begin(unsigned long interval){
    this->interval = interval;

    start = millis();
  }

  bool trigger(bool reset = true){
    if (millis() - start >= interval){

      if (!reset)
        this->reset();

      return true;
    }
    else {
      return false;
    }
  }

  void reset(){
    start = millis();
  }
};

#endif
