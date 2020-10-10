class GrandFather {
     void grandFatherMethod () {
          System.out.println("I am the GrandFather, I was working as a police officer in the British Empire\n I am one of the most powerful players in the Local cricket team");
     }
}

class Father extends GrandFather {
     void fatherMethod() {
          grandFatherMethod();
          System.out.println("I am the Father, I am working in a bank as an HR manager, I used to play football and cricket with my friends. I was the captian of my school team");

     }
}

class Son extends Father {
     void sonMethod() {
          fatherMethod();
          System.out.println("I am the son, I am studying in an university, I love to play cricket with my friends. I am the captian of my school team");

     }
}

public class Multilevel {

public static void main (String arg[]) {
     Son S = new Son();
     S.sonMethod();
}     
}

