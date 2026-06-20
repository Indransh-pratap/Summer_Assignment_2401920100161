abstract class Compartment {

    public abstract String notice();
}

class FirstClass extends Compartment {

    @Override
    public String notice() {
        return "Hello from First Class";
    }
}

class Ladies extends Compartment {

    @Override
    public String notice() {
        return "Hello from Ladies";
    }
}

class General extends Compartment {

    @Override
    public String notice() {
        return "Hello from General";
    }
}

class Luggage extends Compartment {

    @Override
    public String notice() {
        return "Hello from Luggage";
    }
}

public class Main {

    public static void main(String[] args) {

        Compartment c1 = new FirstClass();
        System.out.println(c1.notice());

        Compartment c2 = new Ladies();
        System.out.println(c2.notice());

        Compartment c3 = new General();
        System.out.println(c3.notice());

        Compartment c4 = new Luggage();
        System.out.println(c4.notice());
    }
}