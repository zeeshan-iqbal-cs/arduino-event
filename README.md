# Events
This a time based Event library. An event is triggered when the specified time has been passed.

## Problem
If we want to do something repeatedly we use delay in loop but it causes the entire code to stop. Or we can use timer interrupt. But you can't do a lot of processing inside ISR.

Let's have a cool and casual way of doing things.

Here it is!

```
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
```

This simple code will say you hello world after every minute.

Have a great time with great events.