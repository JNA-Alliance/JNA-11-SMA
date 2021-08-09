# Buzzer

- Mengubah energi listrik menjadi energi suara.
- Suara Buzzer dapat di jumpai pada: Suara sensor parking, komputer, kasir supermarket, retail security system, absensi pegawai secara digital, mesin EDC, termometer, dll. 

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
    - Variasi program buzzer menggunakan frekuensi tangga nada (Tone Frequency)
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
    - Dapat dijumpai di: Bel rumah, motion detector, dll.