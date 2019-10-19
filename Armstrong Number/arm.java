    import java.util.*;
    class ArmstrongExample{  
      public static void main(String[] args)  {  
        int c=0,a,temp;  
        Scanner sc = new Scanner(System.in);

        System.out.println("ENTER A NUMBER TO CHECK IF IT IS ARMSTRONG OR NOT ");
        int no = sc.nextInt();
        temp=no;

        while(no>0)  
        {  
        a=no%10;  
        no=no/10;  
        c=c+(a*a*a);  
        }  
        if(temp==c)  
        System.out.println("armstrong number");   
        else  
            System.out.println("Not armstrong number");   
       }  
    }  
