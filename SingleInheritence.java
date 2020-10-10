class Base {
     
     void baseMethod () {
          System.out.println("Hello! I am speaking from base class");
     }
}

class Child extends Base{
     void childMethod () {
          System.out.println("Hello! I am speaking from child class");
     }
}


class SingleInheritence {
     public static void main (String arg[]) {
          Child C = new Child();
          C.childMethod();
          C.baseMethod();
     }
}