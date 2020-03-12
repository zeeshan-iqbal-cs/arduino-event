# include <Event.h>

Event helloEvent;


void setup(){
    Serial.begin(9600);

    helloEvent.begin(60 * 1000); // sec * millis: Event will trigger after this time
}


void loop(){
    if (helloEvent.trigger()){
        Serial.println("Hello world! An other minute passed");
    }
}