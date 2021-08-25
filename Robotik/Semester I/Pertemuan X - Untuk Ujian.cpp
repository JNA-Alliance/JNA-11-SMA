int buzzer = 2;
int interval = 200;
int delay_short = 100;
int delay_long = 300;

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop(){
    tone(buzzer, 330);
    delay(delay_long);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 262);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 330);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 330);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 330);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);

    delay(delay_long);

    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_long + 100);
    tone(buzzer, 330);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 395);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 395);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);

    delay(delay_long);

    tone(buzzer, 330);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 262);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 330);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 330);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 330);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);

    delay(delay_short);

    tone(buzzer, 330);
    delay(delay_long);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 330);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 294);
    delay(interval);
    noTone(buzzer);
    delay(delay_short);
    tone(buzzer, 262);
    delay(interval);
    delay(delay_long);
    noTone(buzzer);
    delay(delay_long + 100);
}