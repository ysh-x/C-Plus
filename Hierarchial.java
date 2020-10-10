import java.util.List;

public class Employee {
     private Long id;
     private String firstName;
     private String lastName;

     public Long getId() {
          return id;
     }

     public void setId(Long id) {
          this.id = id;
     }

     public String getFirstName() {
          return firstName;
     }

     public void setFirstName(String firstName) {
          this.firstName = firstName;
     }

     public String getLastName() {
          return lastName;
     }

     public void setLastName(String lastName) {
          this.lastName = lastName;
     }

     @Override
     public String toString() {
          return "Employee [id=" + id + ", firstName=" + firstName + ", lastName=" + lastName + "]";
     }
}
public class Manager extends Employee {
     private List<Employee> subordinates;

     public List<Employee> getSubordinates() {
          return subordinates;
     }

     public void setSubordinates(List<Employee> subordinates) {
          this.subordinates = subordinates;
     }

   @Override
    public String toString() {
        return "Manager [subordinates=" + subordinates + ",   
                                         details=" + super.toString() + "]";
    }

}

public class Hierarchial {
     public static void main(String[] args) {
          Manager mgr = new Manager();

          mgr.setId(1L);
          mgr.setFirstName("Lokesh");
          mgr.setLastName("Gupta");

          System.out.println(mgr);
     }
}