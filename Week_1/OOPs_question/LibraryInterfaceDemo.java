class LibraryUser {
    int Age;
    String BookName;

    void RegisterAcoount() {}
    void RequestBook() {}
}

class KidUser extends LibraryUser {

    void RegisterAcoount() {
        if (Age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    void RequestBook() {
        if (BookName.equals("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser extends LibraryUser {

    void RegisterAcoount() {
        if (Age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    void RequestBook() {
        if (BookName.equals("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

public class LibraryInterfaceDemo {

    public static void main(String args[]) {

   System.out.println();
   
        // test caseee 1
        KidUser kid1 = new KidUser();
        kid1.Age = 10;
        kid1.BookName = "Kids";

        KidUser kid2 = new KidUser();
        kid2.Age = 18;
        kid2.BookName = "Fiction";

        kid1.RegisterAcoount();
        kid1.RequestBook();

        System.out.println();

        kid2.RegisterAcoount();
        kid2.RequestBook();


        System.out.println();
        // test case 2
AdultUser adult1 = new AdultUser();
AdultUser adult2 = new AdultUser();

adult1.Age = 5;
adult1.BookName = "kids";

adult2.Age = 23;
adult2.BookName = "Fiction";

adult1.RegisterAcoount();;
adult1.RequestBook();;

System.out.println();

adult2.RegisterAcoount();
adult2.RequestBook();


    }
}