import java.security.Timestamp;
import java.sql.Date;
import java.text.SimpleDateFormat;
import java.util.Calendar;

class Time extends Thread{
   public void run(){
      int i=0;
      while(true){
         
        
         Calendar cal=Calendar.getInstance();
         int year=cal.get(Calendar.YEAR);
         int month=cal.get(Calendar.MONTH);
         int day=cal.get(Calendar.DAY_OF_MONTH);
         Date dt=new Date(year, month, day);
         SimpleDateFormat sdf=new SimpleDateFormat("yyy-MM-dd HH:mm:ss");
         String disp=sdf.format(dt);
         
           
         i++;
         System.out.println(i+"회 현재 시간 "+dt.toString());
         try{Thread.sleep(1000);} catch(Exception ex){}
         
         
      }
   }
}