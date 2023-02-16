// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: Theatre Square
// Status: Accepted
// Language: Java
// Environment: Java 8 (OpenJDK 1.8.0)
// Time: 187 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/1/A
// Platform: Codeforces

import java.util.Scanner;

public class codeforces_aftabrakinsad 
{
    public static void main(String[] args) {
        Scanner n1 = new Scanner(System.in);
        long n, m, a, s, s1, num;
        n = n1.nextLong();
        m = n1.nextLong();
        a = n1.nextLong();

        if (n % a == 0) {
            s = n / a;
        } else {
            s = (n / a) + 1;
        }

        if (m % a == 0) {
            s1 = m / a;
        } else {
            s1 = (m / a) + 1;
        }

        num = s * s1;
        System.out.print(num);
    }
}