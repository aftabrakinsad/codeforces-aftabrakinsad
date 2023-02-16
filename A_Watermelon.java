// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 2019-12-31 16:00:00
// Language: Java
// Environment: Java 8 (OpenJDK 1.8.0)
// Problem: A. Watermelon
// URL: http://codeforces.com/problemset/problem/4/A
// Verdict: Accepted
// Time: 374 ms
// Memory: 0 KB
// Platform: Codeforces

import java.util.Scanner;

public class codeforces_aftabrakinsad 
{
    public static void main(String[] args) {
        Scanner n1 = new Scanner(System.in);

        int x;

        x = n1.nextInt();

        if (x % 2 == 0 && x >= 4 && x <= 100) {
            System.out.print("YES");
        } else {
            System.out.print("NO");
        }

    }
}