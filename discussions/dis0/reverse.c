int main() {
    for (int a = 1; a <= 333; a++) {
        int a2 = a * a;
        for (int b = a; b <= 666; b++) {
            int b2 = b*b;
            int c = 1000-a-b;
            int c2 = c*c;
            if (a2+b2==c2) {
                return a*b*c;
            }
        }
    }
    return 0;
}