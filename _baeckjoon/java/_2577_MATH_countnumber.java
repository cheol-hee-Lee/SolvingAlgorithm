/*
세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

예를 들어 A = 150, B = 266, C = 427 이라면 

A × B × C = 150 × 266 × 427 = 17037300 이 되고, 

계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
*/
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		int c = scanner.nextInt();
		int d = a * b * c;
		String string = d + "";
		int[] array = new int[string.length()];
		int[] cnt = new int[10];
		int size = array.length;

		for (int i = 0; i < array.length; i++) {
			array[size - 1 - i] = d % 10;
			d /= 10;
		}

		for (int i = 0; i < array.length; i++) {
			for (int j = 0; j < cnt.length; j++) {
				if (array[i] == j) {
					cnt[j]++;
				}
			}
		}

		for (int i = 0; i < cnt.length; i++) {
			System.out.println(cnt[i]);
		}

	}
}
