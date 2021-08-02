# Pemrograman Buzzer

1. Pemrograman dasar Buzzer

```
int buzzer = 3;

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    digitalWrite(buzzer, HIGH);
}
```

2. Variasi Program Buzzer
    - Variasi program buzzer menggunakan frekuensi tangga nada
        - Pemanggilan: `digitalWrite(<buzzer>, <frequency>);`
            | Nada | Frekuensi |
            | ---- | --------- |
            | Do   | 262       |
            | Re   | 294       |
            | Mi   | 330       |
            | Fa   | 349       |
            | Sol  | 395       |
            | La   | 440       |
            | Si   | 494       |
            | Do'  | 523       |