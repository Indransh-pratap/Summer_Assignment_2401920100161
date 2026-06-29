package Week_4.OOPs_;

public class Main {

    public static void main(String[] args) {

        System.out.println("Question 1");

        Arithmetic a = new Arithmetic();

        System.out.println("Square of 6 = " + a.square(6));

        System.out.println();

        System.out.println("Question 2");

        Outer out = new Outer();

        out.display();

        Outer.Inner in = out.new Inner();

        in.display();

        System.out.println();

        System.out.println("Question 3");

        Point p1 = new Point();

        p1.display();

        System.out.println();

        Point p2 = new Point(10, 20);

        p2.display();

        p2.setX(30);
        p2.setY(40);

        p2.display();

        p2.setXY(50, 60);

        p2.display();

        System.out.println();

        System.out.println("Question 4");

        Box b = new Box(5, 4);

        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(5, 4, 3);

        System.out.println("Area = " + b3.area());

        System.out.println("Volume = " + b3.volume());
    }
}