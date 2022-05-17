# Fungsi Bantu Lookup dan Teks

- Fungsi bantu lookup adalah fungsi pencarian dan rujukan (lookup) yang dipakai untuk mencari data dengan menunjuk ke suatu lokasi. Lokasi rujukan bisa berupa range dalam bentuk tabel.
- Fungsi bantu teks akan mencari data berupa huruf maupun kumpulan huruf berdasarkan urutan dalam cell yang ditunjuk.
- Fungsi HLOOKUP dan VLOOKUP
    - Digunakan untuk membaca suatu tabel secara *horizontal* (**HLOOKUP**) atau *vertikal* (**VLOOKUP**).
    - Bentuk umum penulisan fungsi: 
        - =HLOOKUP(lookup_value, lookup_range, row_index_num, [=default_value])
        - =VLOOKUP(lookup_value, lookup_range, col_index_num, [=default_value])
        - Beda: row_index_number atau col_index_number.
    - Nomor index adalah angka yang menyatakan posisi suatu kolom/baris dalam tabel yang dimulai dengan nomor 1.