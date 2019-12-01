/*
오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.
*/

import java.util.Scanner;

public class Main {

	static int arr[] = new int[13];
	static String day[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		for (int i = 1; i <= 12; i++) {
			switch (i) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				arr[i] = 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				arr[i] = 30;
				break;
			case 2:
				arr[i] = 28;
				break;
			}
		}
		int m = sc.nextInt();
		int d = sc.nextInt();
		int term = 0;

		for (int i = 1; i <= m - 1; i++) {
			term += arr[i];
		}
		term += d - 1;
		System.out.println(day[term % 7]);

	}
}
