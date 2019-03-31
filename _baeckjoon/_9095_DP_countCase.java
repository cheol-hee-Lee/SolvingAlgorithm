import java.util.Scanner;

public class Main {

	static int[] dp = new int[12];

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();
		int answer = solve(n);
		System.out.println(answer);
	}

	public static int solve(int n) {

		// base case
		if (n == 1)
			return 1;
		if (n == 2)
			return 2;
		if (n == 3)
			return 4;

		int ret = dp[n];
		if (ret != 0) {
			return ret;
		}

		// recursive case
		ret = solve(n - 1) + solve(n - 2) + solve(n - 3);

		return ret;
	}
}
