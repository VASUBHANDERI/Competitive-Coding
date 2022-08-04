public class Palindrome_Number {
    public boolean isPalindrome(int x) {
        String xs = Integer.toString(x);
        boolean b = true;
        int front = 0;
        int back = xs.length() - 1;
        while (front < back) {
            if (xs.charAt(front) == xs.charAt(back)) {
                front++;
                back--;
            } else {
                b = false;
                break;
            }
        }
        return b;
    }
}
