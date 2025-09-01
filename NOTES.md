Aku kasih catatan aja sih gimana aku bisa buat kode ini
Kesimpulannya:

1. **Mulai bikin program C**

   * Aku nulis program C sederhana (`hello.c`) di **VS Code**.
   * Isinya input **nama & usia** → lalu ditampilkan kembali.
   * Jadi program itu disebut **program input-output sederhana** (user memasukkan data, program menampilkan hasil).

2. **Kompilasi & Jalankan Program**

   * Program C butuh **compiler** (di sini aku pakai `gcc`).
   * Alurnya:

     ```
     gcc hello.c -o hello   // compile
     ./hello                // run program
     ```
   * Output muncul di terminal (Windows PowerShell / terminal VS Code).

3. **Bedanya `fgets` vs `gets`**

   * `gets()` udah usang, tidak aman. Terlalu beresiko juga
   * `fgets()` lebih aman karena butuh 3 parameter: str; array, ukuran n, dan stream; `stdin` (sumber input = keyboard).
   * Makanya kalau hapus `stdin`, program error → karena si c tidak tahu inputnya dari mana.

4. **Coba pakai Code Runner di VS Code**

   * Install **Code Runner** supaya gak perlu ketik `gcc` terus.
   * Tinggal klik tombol ▶ (run) → langsung compile & jalan.
   * Tapi output/input tetap muncul di **terminal**. (ini nanti aku coba ubah lagi biar munculnya di output bukan terminal)

5. **Bahas cara tampilkan program di browser**

   * C/C++ biasa jalan di terminal.
   * Kalau mau tampil di browser, harus pakai web technology (HTML, CSS, JS, atau backend).
   * Untuk sekarang cukup paham C jalan di terminal dulu ya.

6. **Upload di GitHub jangan lupa, history anjay**

   * Ada 2 cara upload project:

     * Manual upload via web GitHub.
     * Sinkronisasi pakai Git di VS Code. (nanti aja kalau udah waktunya)
   * Orang lain **tidak bisa sembarangan edit** repo.
   * **README.md** buat deskripsi project(like i do), **.gitignore** buat nge-skip file yang gak perlu diupload.

---

