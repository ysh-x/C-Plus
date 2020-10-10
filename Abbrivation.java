import java.lang.*;
import java.util.*;

class Abbrivation {
     public static void main(String arg[]) {
          String name;
          char abbr[] = new char[30];
          int count = 0;

          Scanner in = new Scanner(System.in);
          name = in.nextLine();

          String words[] = name.split(" ");
          for(String token : words) {
               abbr[count] = (token.charAt(0));
               count++;
               abbr[count] = '.';
               count++;
          }

          System.out.print("Abbrevation : ");
          for(int i = 0; i <count - 1; i++) {
               System.out.print(abbr[i]);
               
          }
          System.out.println(" ");
     }
}