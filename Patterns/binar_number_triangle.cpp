void nBinaryTriangle(int n) {
  int num = 1;
    for (int i = 0; i < n; i++) {
        int cur = 0;
        for (int j = 1; j <= num; j++) {
            cur = ((i + j) & 1);
            cout << cur << " ";
        }
        cout << '\n';
        num++;
    }
}
