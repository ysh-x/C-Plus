class ExceptionHandleA {
     public static void main(String arg[]) {
          try {
               int a;
               a = 50/0;

          } catch(Exception E) {

               System.out.println("Cannot Divide By Zero");
          }
          finally {
               System.out.println("A: "+a);
          }
     }
}