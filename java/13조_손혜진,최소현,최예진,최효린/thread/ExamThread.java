import java.security.Timestamp;
import java.sql.Date;
import java.text.SimpleDateFormat;
import java.util.Calendar;


public class ExamThread{
   public static void main(String[] args){
      Time t=new Time();
      t.setDaemon(true);
      t.start();
      try{t.join(5000);} catch(Exception ex){}
      long time=System.currentTimeMillis();
      System.out.println("초: "+time/1000);
      System.out.println("분: "+time/(1000*60));
      System.out.println("시간: "+time/(1000*60*60));
      
      
   }
   
   
}