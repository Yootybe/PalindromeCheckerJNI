public class Main {
    static PalindromeChecker checker = new PalindromeChecker();
    static {
        System.loadLibrary("palindromechecker");
    }

    public static void main(String[] args) {
        System.out.println("Hello world!");
        boolean result = checker.isPalindrome(args[0]);
        System.out.println(args[0] + " is a palindrome: " + result);
    }
}