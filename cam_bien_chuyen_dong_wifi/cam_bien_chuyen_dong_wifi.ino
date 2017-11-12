    #include <SoftwareSerial.h>

    SoftwareSerial mySerial(10, 11); // RX, TX

    int ledPin = 13;        // chọn chân 13 báo hiệu LED
    int inputPin = 2;       // chọn ngõ tín hiệu vào cho cảm biến chuyển động
    int val = 0;
     
    void setup()
    {
      pinMode(ledPin, OUTPUT);
      pinMode(inputPin, INPUT);
      Serial.begin(9600);
      mySerial.begin(9600);
    }
     
    void loop()
    {
      val = digitalRead(inputPin);    // đọc giá trị đầu vào.
      if (val == HIGH)                // nếu giá trị ở mức cao.(1)
      {
        digitalWrite(ledPin, HIGH); // LED On
        //playTone(300, 160);         // thời gian chuông kêu
        delay(3000);
        Serial.println("Motion detected! Send to Server!");
        mySerial.write(val);
      }
      else
      {
        digitalWrite(ledPin, LOW);
        //playTone(0, 0);
        delay(3000);
        //Serial.println("Motion ended!");
      }
    }
    /* 
    void playTone(long duration, int freq)
    {
      duration *= 1000;
      int period = (1.0 / freq) * 1000000;
      long elapsed_time = 0;
      while (elapsed_time < duration)
      {
        digitalWrite(pinSpeaker,HIGH);
        delayMicroseconds(period / 2);
        digitalWrite(pinSpeaker, LOW);
        delayMicroseconds(period / 2);
        elapsed_time += (period);
      }
    }
    */
