/**
 * Nomor 2
 */
int buzzer = 2;

void setup()
{
    pinMode(buzzer, OUTPUT);
}

void loop()
{
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
    delay(1000);
}

/**
 * Nomor 4
 */
int buzzer = 2;

void setup()
{
    pinMode(buzzer, OUTPUT);

    tone(buzzer, 523);
    delay(1000);
    noTone(buzzer);
    delay(1000);

    tone(buzzer, 523);
    delay(1000);
    noTone(buzzer);
    delay(1000);

    tone(buzzer, 523);
    delay(1000);
    noTone(buzzer);
    delay(1000);
}

void loop()
{
    // ... code
}