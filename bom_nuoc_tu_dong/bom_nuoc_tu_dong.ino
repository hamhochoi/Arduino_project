void setup() {
    int i;
    int ledPin[] = {0,1,2,3,4,5,6,7,8};
    // Dong duoi khong hieu
    Serial.begin(9600);   /// cai nay de lam gi???
    
    for (i=0; i<=8; i++){
        pinMode(ledPin[i],OUTPUT);
        digitalWrite(ledPin[i],LOW);
    }
    digitalWrite(13,LOW);
..
}

void loop() {
    int i;
    int sensor_val = analogRead(A0);
    /*
     * 
    
    if (sensor_val < 800) {
        digitalWrite(13,HIGH);
        Serial.println(sensor_val/100);   /// cai nay lam gi???
    }
    else {
        digitalWrite(13,LOW);
    }
    delay(10000);
    */
        
    switch (sensor_val/100){
        case 0:   
            digitalWrite(0,HIGH);
            digitalWrite(1,HIGH);
            digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(5,HIGH);
            digitalWrite(6,HIGH);
            delay(10000);
            break;
        case 1:
            digitalWrite(0,HIGH);
            digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            delay(10000);
            break;
        case 2: 
            digitalWrite(0,HIGH);
            digitalWrite(1,HIGH);
            digitalWrite(2,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(5,HIGH);
            digitalWrite(7,HIGH);
            delay(10000);
            break;
        case 3:
            digitalWrite(0,HIGH);
            digitalWrite(1,HIGH);
            digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(7,HIGH);
            delay(10000);
            break;
        case 4:
            digitalWrite(0,HIGH);
            digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            delay(10000);
            break;
        case 5:
            digitalWrite(0,HIGH);
            digitalWrite(1,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            delay(10000);
            break;
        case 6:
            digitalWrite(0,HIGH);
            digitalWrite(1,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(5,HIGH);
            digitalWrite(6,HIGH);
            delay(10000);
            break;
        case 7:    
            digitalWrite(0,HIGH);
            digitalWrite(1,HIGH);
            digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            delay(10000);
            break;
        case 8:
            digitalWrite(0,HIGH);
            digitalWrite(1,HIGH);
            digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(5,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            digitalWrite(13,HIGH);
            delay(10000);
            break;
        case 9:
            digitalWrite(0,HIGH);
            digitalWrite(1,HIGH);
            digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(7,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(13,HIGH);
            delay(10000);
            break;
        case 10:
            for (i=0; i<100; i++){
                digitalWrite(8,HIGH);      // bat led 0
                digitalWrite(2,HIGH); 
                digitalWrite(3,HIGH);
                digitalWrite(13,HIGH);      // may bom
                delay(10);
                digitalWrite(8,LOW);        // Tat led 1
                digitalWrite(0,HIGH);       // bat Led 0
                digitalWrite(1,HIGH);
                digitalWrite(2,HIGH);
                digitalWrite(3,HIGH);
                digitalWrite(4,HIGH);
                digitalWrite(5,HIGH);
                digitalWrite(6,HIGH);
                digitalWrite(13,HIGH);      // May bom
                delay(10);        
                digitalWrite(0,LOW);        // Tat led 0
            }

      
    }

}
