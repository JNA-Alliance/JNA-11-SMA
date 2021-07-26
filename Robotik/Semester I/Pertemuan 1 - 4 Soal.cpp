// NOMOR 1:
int led1 = 3;

void setup() {
    pinMode(led1, OUTPUT);
}

void loop() {
    digitalWrite(led1, HIGH);
    delay (1500);
    digitalWrite(led1, LOW);
    delay(1500);
}

// NOMOR 2:
int led1 = 3;
int led2 = 4;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop() {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay (1500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1500);
}

// NOMOR 3:
int led1 = 3;
int led2 = 4;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop() {
    digitalWrite(led1, HIGH);
    delay(2000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(3000);
    digitalWrite(led2, LOW);
}

// NOMOR 4:
int led1 = 3;
int led2 = 4;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);
}

void loop() {}