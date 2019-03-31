/*
입력 받은 대로 출력하는 프로그램을 작성하시오.
*/

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ArrayList<String> arrayList = new ArrayList<>();

		while (sc.hasNextLine()) {
			String string = sc.nextLine();
			if (string.equals("")) {
				break;
			}
			arrayList.add(string);
		}

		for (int i = 0; i < arrayList.size(); i++) {
			System.out.println(arrayList.get(i));
		}

	}
}
