public class Cat {
	public String name;
	private int x,y;
	private double weight;
	Cat(){
		this.name = "Tamako";
		init();
	}
	Cat(String name){
		this.name = name;
		init();
	}

	public void move(String way){
		if(way.equals("North")){
			this.y++;
		}
		else if(way.equals("East")){
			this.x++;
		}
		else if(way.equals("South")){
			this.y--;
		}
		else if(way.equals("West")){
			this.x--;
		}
	}

	public String meow(){
		return "meow";
	}

	public void eat(){
		this.weight += 10.0;
		System.out.println("うまい！！");
	}

	public void showCurrentPos(){
		System.out.println("(x,y) = " + "(" + this.x + "," + this.y + ")");
	}

	private void init(){
		this.x = this.y = 0;
		this.weight = 0.0;
	}
}
