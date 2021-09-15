# Perulangan for

`for` berfungsi untuk menyederhanakan program perulangan dan nantinya perulangan ini akan memudahkan kita membuat program-program rumit lainnya.

1. Perulangan `for` increment (penambahan 1 / i++)
    Contoh: Menghidupkan lampu LED sebanyak 5 kali.
     ```
     int led = 3;

     void setup(){
         pinMode(led, OUTPUT);

         // Contoh for "increment"
         for(i = 0; i < 5; i++){
            digitalWrite(led, HIGH);
            delay(500);
            digitalWrite(led, LOW);
            delay(500);
        }
     }

     void loop(){
         // ... code
     }
     ```

     **PERHATIKAN**
        - Perhitungan dimulai dari 0, maka saat i = 4, program sudah berjalan sebanyak 5 kali.
2. Perulangan `for` decrement (pengurangan 1 / i--)
    // ... akan dilengkapi