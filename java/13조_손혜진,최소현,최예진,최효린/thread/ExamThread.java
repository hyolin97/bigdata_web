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
      System.out.println("��: "+time/1000);
      System.out.println("��: "+time/(1000*60));
      System.out.println("�ð�: "+time/(1000*60*60));
      
      
   }
   
   
}