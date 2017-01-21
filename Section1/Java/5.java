public class Main {
	private static int func(int a){
		int res = 1;
		for(int i = 1; i <= a; ++i){
			res *= i;
		}
		return res;
	}
	public static void main(String[] args){
		int a = 5;
		System.out.println("factorial =" + func(a));
	}
}
