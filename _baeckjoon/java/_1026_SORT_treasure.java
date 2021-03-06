/*
옛날 옛적에 수학이 항상 큰 골칫거리였던 나라가 있었다. 이 나라의 국왕 김지민은 다음과 같은 문제를 내고 큰 상금을 걸었다.

길이가 N인 정수 배열 A와 B가 있다. 다음과 같이 함수 S를 정의하자.

S = A[0]*B[0] + ... + A[N-1]*B[N-1]

S의 값을 가장 작게 만들기 위해 A의 수를 재배열하자. 단, B에 있는 수는 재배열하면 안된다.

S의 최솟값을 출력하는 프로그램을 작성하시오.
*/

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int[] A = new int[n];
		int[] B = new int[n];
		int sum = 0;

		for (int i = 0; i < n; i++) {
			A[i] = scanner.nextInt();
		}
		for (int i = 0; i < n; i++) {
			B[i] = scanner.nextInt();
		}
		sort(A);
		sort(B);

		for (int i = 0; i < n; i++) {
			sum += A[i] * B[n - 1 - i];
		}
		System.out.println(sum);

	}

	public static void sort(int[] arr) {
		int temp;
		int size = arr.length;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size - 1 - i; j++) {
				if (arr[j] > arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
}
