public class Main {
	public static void main(String[] args){
		Cat cat = new Cat();
		System.out.println(cat.meow());
		cat.showCurrentPos();
		cat.move("North");
		cat.showCurrentPos();
		cat.eat();
	}
}
