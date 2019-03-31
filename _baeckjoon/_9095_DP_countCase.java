/*

정수 4를 1, 2, 3의 합으로 나타내는 방법은 총 7가지가 있다. 합을 나타낼 때는 수를 1개 이상 사용해야 한다.

1+1+1+1
1+1+2
1+2+1
2+1+1
2+2
1+3
3+1

정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.

*/
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
