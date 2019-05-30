import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int type = scanner.nextInt();
		int sum = scanner.nextInt();
		int[] arr = new int[type];
		int numberOfCase = 0;

		for (int i = 0; i < type; i++) {
			arr[i] = scanner.nextInt();
		}

		int right = type - 1;

		while (sum != 0) {
			while (sum < arr[right]) {
				right--;
			}

			while (sum >= arr[right]) {
				sum -= arr[right];
				numberOfCase++;
			}
		}

		System.out.println(numberOfCase);
	}

}
