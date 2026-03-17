Algoritma DFS: 
1. Inisialisasi graf dalam bentuk matriks adjacency 4×4 untuk menyimpan hubungan antar node.
2. Inisialisasi array visited dengan nilai false untuk menandai bahwa semua node belum dikunjungi.
3. Mulai dari node awal, yaitu DFS(0) di dalam fungsi main().
4. Cetak node yang dikunjungi lalu tandai visited[node] = true.
5. Periksa semua tetangga node menggunakan perulangan for.
6. Jika terdapat edge (graph[node][i] == 1) dan node belum dikunjungi, maka panggil DFS(i) secara rekursif.
7. Ulangi proses sampai semua node yang terhubung telah dikunjungi.
8. Hasil traversal DFS dari node 0 adalah:0 → 1 → 3 → 2.

Algoritma BFS: 
1. Inisialisasi graf dalam bentuk matriks adjacency 4×4 untuk menyimpan hubungan antar node.
2. Buat array visited dan isi dengan false untuk menandai semua node belum dikunjungi.
3. Buat struktur data queue untuk menyimpan node yang akan dikunjungi (prinsip FIFO).
4. Mulai dari node awal yaitu 0.
  -Tandai visited[0] = true
  -Masukkan 0 ke dalam queue.
5. Ambil node dari depan queue menggunakan queue.front() lalu keluarkan dengan queue.pop().
6. Cetak node tersebut sebagai node yang sedang dikunjungi.
7. Periksa semua tetangga node menggunakan perulangan for.
8. Jika terdapat edge (graph[node][i] == 1) dan node belum dikunjungi, maka:
  -Tandai visited[i] = true
  -Masukkan node i ke dalam queue.
9. Ulangi proses sampai queue kosong.
10.Hasil traversal BFS dari node 0 adalah: 0 → 1 → 2 → 3.
