import java.util.*;
class Constructor{
    //properties
    private String name;
    public String distict;
    public String userName;
    public double passWord;
    //non perameterized constructor
    public Constructor(){ //initialized values
         System.out.println("Hello banglades");
        name = "Ashik";
        distict = "Sylhet"; 
        userName = "robin123";
        passWord =235435;

    }
    //parameterized constructor
    public Constructor(String name,String distict, String userName, double passWord ){
        this.name = name;
        this.distict = distict;
        this.userName = userName;
        this.passWord = passWord;
    }
    //Setter for private name
    public void getName(String name){
        this.name = name;
    }
    public void getRes(){
        System.out.println("Name is :"+name); ///can not give output because name is private 
        System.out.println("Distrinc :"+ distict);
        System.out.println("Uername is :" + userName);
        System.out.println("passWord is :"+ passWord);
    }
    //Copy Constructor
    public Constructor(Constructor c3){
        this.name = c3.name;
        this.distict = c3.distict;
        this.passWord = c3.passWord;
        this.userName = c3.userName;
    }


public static void main(String[] args) {
    //Nos perameterized constructor
    Constructor c1 = new Constructor();
    c1.name = "jabbar";
    c1.distict ="rangpur";
    c1.getRes();
    System.out.println("\n\nThis is for parameterized constructor");
    Constructor c2 = new Constructor("rakib","rangpur","hallo",23345);
    c2.getRes();
    System.out.println("\n\nThis is for copy constructor");
    Constructor c3 = new Constructor(c2);
    c3.getRes();
}

}
