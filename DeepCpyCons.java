class DeepCpyCons{
    public String name;
    public double cgpa;
    public DeepCpyCons(String name,double cgpa){
        this.name = name;
        this.cgpa = new Double(cgpa);
    }

    DeepCpyCons(DeepCpyCons obj){
        System.out.println("\n This is custom Constructor :");
        this.name = obj.name;
        this.cgpa = new Double(obj.cgpa);
    }
    void getInfo(){
        System.out.println("Name is :" + name);
        System.out.println("Cgpa is :" + cgpa);
    }

    public static void main(String[] args) {
        DeepCpyCons d1 = new DeepCpyCons("rakib",3.4);
        d1.getInfo();
        DeepCpyCons d2 = new DeepCpyCons(d1);
        System.out.println("First d2 info : \n");
        d2.getInfo();
        d2.name = "sakib";
        d2.cgpa = 3.12;
        System.out.println("Secondly printing d1 :");
        d1.getInfo();
        System.out.println("Secondly printing d1 :");
        d2.getInfo();
    }
}