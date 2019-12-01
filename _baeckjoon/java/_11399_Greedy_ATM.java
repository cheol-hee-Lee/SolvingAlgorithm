import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int size = scanner.nextInt();
		int[] arr = new int[size];

		for (int i = 0; i < size; i++) {
			arr[i] = scanner.nextInt();
		}

		Arrays.sort(arr);

		int sum = 0;

		for (int i = 0; i < size; i++) {
			sum += arr[i] * (size - i);
		}

		System.out.println(sum);
	}

}
