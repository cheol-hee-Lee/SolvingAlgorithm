/*
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.
*/
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String string = scanner.nextLine();
		int size = string.length();
		int[] arr = new int[size];

		int num = Integer.parseInt(string);

		for (int i = size - 1; i >= 0; i--) {
			arr[i] = num / (int) Math.pow(10, i);
			num = num - (num / (int) Math.pow(10, i)) * (int) Math.pow(10, i);
		}
		sort(arr, 0, size - 1);

		for (int i = 0; i < size; i++) {
			System.out.print(arr[i]);
		}

	}

	public static void sort(int[] arr, int l, int r) {
		int left = l;
		int right = r;
		int pivot = arr[(l + r) / 2];
		int temp;

		do {
			while (arr[left] > pivot) {
				left++;
			}
			while (arr[right] < pivot) {
				right--;
			}

			if (left <= right) {
				temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
				left++;
				right--;
			}

		} while (left <= right);

		if (l < right) {
			sort(arr, l, right);
		}

		if (r > left) {
			sort(arr, left, r);
		}
	}
}
