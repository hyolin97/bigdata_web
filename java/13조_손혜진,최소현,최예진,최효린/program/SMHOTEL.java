import java.awt.*;
import java.awt.event.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;
import javax.swing.*;
import javax.swing.table.DefaultTableCellRenderer;
import javax.swing.table.TableColumnModel;

// 객체지향프로그래밍 13조 - 호텔예약프로그램

// CustomerMode - 최효린
class CustomerMode extends JFrame {
	JTextField TextField1;
    JTextField TextField2;
    JTextField TextField3;
    JTextField TextField4;
    JTextField TextField5;
    JTextField TextField6;
    JPasswordField passwordField;
    JPanel jp = new JPanel(); 
    JButton jb, jb2, jb3;
    BufferedImage img = null;
    JComboBox combo = new JComboBox();
   
    public CustomerMode() { 
		setTitle("메인화면");
        ImageIcon icon = new ImageIcon("custom.png");
            
        JLayeredPane layeredPane1 = new JLayeredPane() {
            public void paintComponent(Graphics g) {
                g.drawImage(icon.getImage(), 0, 0, null);
                setOpaque(false);
                super.paintComponent(g);
            }
        };
      
        jb = new JButton("매니저모드");
        jb.addActionListener(new LooginListener());

        jb2 = new JButton("OK");
        jb2.addActionListener(new MoveToSearch());

        jb3 = new JButton("예약정보");
        jb3.addActionListener(new MoveToRes());

        TextField1 = new JTextField(30);
        TextField1.setBounds(1000, 320, 200, 48);
        layeredPane1.add(TextField1);
        TextField1.setOpaque(true);
        TextField1.setForeground(Color.green);
        TextField1.setBorder(javax.swing.BorderFactory.createEmptyBorder());
        TextField2 = new JTextField(30);
        TextField2.setBounds(1230, 320, 200, 48);
        layeredPane1.add(TextField2);
        TextField2.setOpaque(true);
        TextField2.setForeground(Color.green);
        TextField2.setBorder(javax.swing.BorderFactory.createEmptyBorder());
        TextField3 = new JTextField(30);
        TextField3.setBounds(1000, 420, 200, 48);
        layeredPane1.add(TextField3);
        TextField3.setOpaque(true);
        TextField3.setForeground(Color.green);
        TextField3.setBorder(javax.swing.BorderFactory.createEmptyBorder());
        TextField4 = new JTextField(30);
        TextField4.setBounds(1230, 420, 200, 48);
        layeredPane1.add(TextField4);
        TextField4.setOpaque(true);
        TextField4.setForeground(Color.green);
        TextField4.setBorder(javax.swing.BorderFactory.createEmptyBorder()); 
        TextField6 = new JTextField(30);
        TextField6.setBounds(1000, 630, 430, 48);
        layeredPane1.add(TextField6);
        TextField6.setOpaque(true);
        TextField6.setForeground(Color.green);
        TextField6.setBorder(javax.swing.BorderFactory.createEmptyBorder());

        combo.addItem("용익방");
        combo.addItem("예진방");
        combo.addItem("소현방");
        combo.addItem("효린방");
        combo.addItem("혜진방");
        combo.setEditable(true);
        combo.setBounds(1000, 530, 430, 48);
        layeredPane1.add(combo);
		combo.setFont(new Font("맑은고딕", Font.PLAIN, 20));      

        layeredPane1.setBounds(0, 0, 1600, 1000);
        layeredPane1.setLayout(null);
        
		jp.add(jb);
        jp.add(jb2);
        jp.add(jb3);
        add(jp); 
        jb.setBounds(200, 700, 160, 48);
		jb.setFont(new Font("맑은고딕", Font.BOLD, 20));
        jb2.setBounds(1100, 750, 160, 48);
		jb2.setFont(new Font("맑은고딕", Font.BOLD, 20));
		jb3.setBounds(450, 700, 160, 48);
        jb3.setFont(new Font("맑은고딕", Font.BOLD, 20));
         
        jb.setBorderPainted(true);
        jb.setFocusPainted(true);
        jb.setContentAreaFilled(true);
        jb2.setBorderPainted(true);
        jb2.setFocusPainted(true);
        jb2.setContentAreaFilled(true);
 
        layeredPane1.add(jb);
        layeredPane1.add(jb2);
		layeredPane1.add(jb3);
     
        add(layeredPane1); 
   }

   // LoginFrame 화면으로 전환 - 최소현, 최예진
   public class LooginListener implements ActionListener {
	   public void actionPerformed(ActionEvent e) {        
          new LoginFrame();
          setVisible(false);
	   }
   }

   // Search 화면으로 전환 - 손혜진
   public class MoveToSearch implements ActionListener {
       public void actionPerformed(ActionEvent e) {        
          new Search();
          setVisible(false);
        }
   }

   // BeforeReservation 화면으로 전환 - 최소현, 최예진
   public class MoveToRes implements ActionListener {
       public void actionPerformed(ActionEvent e) {        
          new BeforeReservation();
		  setVisible(false);
        }
	}
}


// LoginFrame - 최효린
class LoginFrame {
    JFrame Loginf = new JFrame();
    BufferedImage img = null;
    JTextField loginTextField;
    JPasswordField passwordField;
    JButton bt;
 
    public LoginFrame() {
        ImageIcon icon = new ImageIcon("logIn.png");
        
        JLayeredPane layeredPane = new JLayeredPane() {
            public void paintComponent(Graphics g) {
                g.drawImage(icon.getImage(), 0, 0, null);
                setOpaque(false);
                super.paintComponent(g);
            }
        };

        Loginf.setTitle("로그인");
        Loginf.setSize(1600, 950);
        Loginf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Loginf.setLayout(null);
        layeredPane.setBounds(0, 0, 1600, 900);
        layeredPane.setLayout(null);
 
        loginTextField = new JTextField(30);
        loginTextField.setBounds(560, 400, 480, 60);
        layeredPane.add(loginTextField);
        loginTextField.setOpaque(true);
        loginTextField.setForeground(Color.green);
        loginTextField.setBorder(javax.swing.BorderFactory.createEmptyBorder());
        passwordField = new JPasswordField(30);
        passwordField.setBounds(450, 480, 680, 60);
        passwordField.setOpaque(true);
        passwordField.setForeground(Color.green);
        passwordField.setBorder(javax.swing.BorderFactory.createEmptyBorder());
        layeredPane.add(passwordField);
 
        bt = new JButton("로그인");
		bt.setFont(new Font("맑은고딕", Font.BOLD, 20));
        bt.setBounds(700, 700, 160, 48);
        bt.setBorderPainted(true);
        bt.setFocusPainted(true);
        bt.setContentAreaFilled(true);
        bt.addActionListener(new ManagerModeListener());

        layeredPane.add(bt);
        Loginf.add(layeredPane);
        Loginf.setVisible(true);
    }
  
    // Manager 화면으로 전환 - 최예진
    public class ManagerModeListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {        
          new Manager();
          Loginf.setVisible(false);
        }
    }
}

//Search - 손혜진
class Search {
    JFrame Searchf = new JFrame();

    public Search() {
        ImageIcon icon = new ImageIcon("Search.png");
        JLayeredPane layeredPane = new JLayeredPane() {
            public void paintComponent(Graphics g) {
                g.drawImage(icon.getImage(), 0, 0, null);
                setOpaque(false);
                super.paintComponent(g);
            }
        };

        // textfield
        JLabel title = new JLabel("예약확인");
        title.setFont(new Font("돋움", Font.BOLD, 45));
        title.setForeground(Color.YELLOW);
        title.setBounds(330, 200, 500, 70);
        layeredPane.add(title);

        JLabel rsnoL = new JLabel("예약번호");
        rsnoL.setFont(new Font("맑은고딕", Font.BOLD, 30));
        rsnoL.setForeground(Color.PINK);
        rsnoL.setBounds(950, 200, 500, 70);
        layeredPane.add(rsnoL);

        JTextField rsnoT = new JTextField(30);
        rsnoT.setEditable(true);
        rsnoT.setBounds(1100, 200, 300, 50);
        layeredPane.add(rsnoT);

        JTextField nameT1 = new JTextField(20);
        nameT1.setEditable(true);
        nameT1.setBounds(330, 285, 120, 50);
        layeredPane.add(nameT1);

        JTextField nameT2 = new JTextField(20);
        nameT2.setEditable(true);
        nameT2.setBounds(480, 285, 180, 50);
        layeredPane.add(nameT2);

        JTextField mbT = new JTextField(30);
        mbT.setEditable(true);
        mbT.setBounds(1100, 285, 300, 50);
        layeredPane.add(mbT);

        JTextField phnT = new JTextField(30);
        phnT.setEditable(true);
        phnT.setBounds(330, 375, 330, 50);
        layeredPane.add(phnT);

        JTextField baT = new JTextField(30);
        baT.setEditable(true);
        baT.setBounds(1100, 375, 300, 50);
        layeredPane.add(baT);

        JTextField cioT = new JTextField(30);
        cioT.setEditable(true);
        cioT.setBounds(330, 470, 330, 50);
        layeredPane.add(cioT);

        JTextField mealT = new JTextField(30);
        mealT.setEditable(true);
        mealT.setBounds(1100, 470, 300, 50);
        layeredPane.add(mealT);

        JTextField rtT = new JTextField(30);
        rtT.setEditable(true);
        rtT.setBounds(330, 565, 330, 50);
        layeredPane.add(rtT);

        JTextField foT = new JTextField(30);
        foT.setEditable(true);
        foT.setBounds(1100, 565, 300, 50);
        layeredPane.add(foT);

        JTextField pnT1 = new JTextField(30);
        pnT1.setEditable(true);
        pnT1.setBounds(330, 660, 150, 50);
        layeredPane.add(pnT1);

        JTextField pnT2 = new JTextField(30);
        pnT2.setEditable(true);
        pnT2.setBounds(510, 660, 150, 50);
        layeredPane.add(pnT2);

        JTextField coT = new JTextField(30);
        coT.setEditable(true);
        coT.setBounds(1100, 660, 300, 50);
        layeredPane.add(coT);

        JButton change = new JButton("예약수정");
        change.setFont(new Font("막은고딕", Font.BOLD, 20));
        change.setBounds(600, 780, 160, 48);
        layeredPane.add(change);
	  
	    change.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Object obj = e.getSource();          
			    if (obj == change) {
					JOptionPane.showMessageDialog(null, "예약이 수정되었습니다.", "예약 수정", JOptionPane.INFORMATION_MESSAGE);
                }         
            }
        });

        JButton delete = new JButton("예약취소");
        delete.setFont(new Font("맑은고딕", Font.BOLD, 20));
        delete.setBounds(800, 780, 160, 48);
        layeredPane.add(delete);
        delete.addActionListener(new CancelListener());

        JScrollPane searchScroll = new JScrollPane(layeredPane);
        Searchf.setTitle("예약확인");
        Searchf.setContentPane(searchScroll);
        Searchf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Searchf.setSize(1600, 950);
        Searchf.setVisible(true);
    }

    // Cancellation 화면으로 전환 - 손혜진
    public class CancelListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {        
			new Cancellation();
            Searchf.setVisible(false);
        }
    }
}

// BeforeReservation - 최소현
class BeforeReservation {
	JFrame BeforeRf = new JFrame();

    public BeforeReservation() {
        ImageIcon icon = new ImageIcon("BReservation.png");
            
        JLayeredPane layeredPane = new JLayeredPane() {
            public void paintComponent(Graphics g) {
                g.drawImage(icon.getImage(), 0, 0, null);
                setOpaque(false);
                super.paintComponent(g);
            }
        };

		// 테이블 (가격정보)
		String header[] = {"방 종류", "가격 (화폐단위 : IT)"};
		String contents[][] = {
			{"혜진방", "10000 IT"},
            {"소현방", "13000 IT"},
			{"예진방", "15000 IT"},
			{"효린방", "18000 IT"},
			{"용익방", "30000 IT"}
		};

		JTable table = new JTable(contents, header);
		JScrollPane scrollpane = new JScrollPane(table);
		layeredPane.add(scrollpane);
		layeredPane.setVisible(true);
		scrollpane.setBounds(200, 280, 1200, 230);
		scrollpane.setPreferredSize(new Dimension(900, 250));
		table.setRowHeight(40);
        table.setFont(new Font("맑은고딕", Font.PLAIN, 20));

		// 테이블 내용 가운데 정렬
		DefaultTableCellRenderer dtcr = new DefaultTableCellRenderer();
		dtcr.setHorizontalAlignment(SwingConstants.CENTER);
		TableColumnModel tcm = table.getColumnModel(); 
		for (int i = 0; i < tcm.getColumnCount(); i++)
		{
			tcm.getColumn(i).setCellRenderer(dtcr);
		}	

		// 하단 버튼
        JButton showbt = new JButton("보기");
        layeredPane.add(showbt);
		showbt.setBounds(360, 770, 160, 48);
		showbt.setFont(new Font("맑은고딕", Font.BOLD, 20));
		showbt.addActionListener(new ShowListener());

		JButton resbt = new JButton("예약하기");
        layeredPane.add(resbt);
        resbt.setBounds(1300, 770, 160, 48);
        resbt.setFont(new Font("맑은고딕", Font.BOLD, 20));
        resbt.addActionListener(new ResListener());
        
		JScrollPane scrollPane = new JScrollPane(layeredPane);
        BeforeRf.setTitle("예약전");
        BeforeRf.setContentPane(scrollPane);
        BeforeRf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        BeforeRf.setSize(1600, 950);
        BeforeRf.setVisible(true);
    }
 
	// Tabfacility 화면으로 전환 - 최소현
    public class ShowListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {        
			new Tabfacility();
            BeforeRf.setVisible(false);
        }
	}
    
    // CheckFrame 화면으로 전환 - 최소현
    public class ResListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {        
			new CheckFrame();
            BeforeRf.setVisible(false);
        }
    }
}

// Tabfacility - 최예진
class Tabfacility {
    private JFrame jf;
    private JTabbedPane tabbedPane;
    private JPanel panel1;
    private JPanel panel2;
    private JPanel panel3;
    private JLabel label1;
    private JLabel label2;
    private JLabel label3;
    private JButton bt;
    
    public Tabfacility() {
        // 생성 및 초기화
        jf = new JFrame();
        tabbedPane = new JTabbedPane();
        panel1 = new JPanel();
        panel2 = new JPanel();
        panel3 = new JPanel();
        label1 = new JLabel();
        label2 = new JLabel();
        label3 = new JLabel();

        // 첫번째 이미지
        ImageIcon pc = new ImageIcon("pc.jpg");
        JLabel label1=new JLabel(pc, JLabel.RIGHT);

        // 두번째 이미지
        ImageIcon hall = new ImageIcon("연회장.jpg");
        JLabel label2=new JLabel(hall, JLabel.RIGHT);
      
        // 세번째 이미지
        ImageIcon pool = new ImageIcon("수영장.jpg");
        JLabel label3=new JLabel(pool, JLabel.RIGHT);
      
        // 패널에 컴포넌트 추가
        panel1.add(label1);
        panel2.add(label2);
        panel3.add(label3);

        // 버튼 추가
        bt = new JButton("이전화면"); 
        bt.add(panel3);
        bt.setBounds(650, 500, 160, 48);
		bt.setFont(new Font("맑은고딕", Font.BOLD, 20));
        bt.addActionListener(new BeforeReservationListener());
        jf.add(bt);

        // 탭에 패널 추가 및 이름 설정
        tabbedPane.add("PC실", panel1);
        tabbedPane.add("연회장", panel2);
        tabbedPane.add("수영장", panel3);
        
        // 탭위치 설정 메소드
        tabbedPane.setTabPlacement(JTabbedPane.LEFT);  // 좌측위치
  
        // 프래임 기본 설정
        jf.add(tabbedPane);
        jf.setSize(850, 650);
        jf.setTitle("편의시설");
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jf.setVisible(true);
    }

    // BeforeReservation 화면으로 전환 - 최예진
    public class BeforeReservationListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {        
			new BeforeReservation();
            jf.setVisible(false);
        }
    }
}

// CheckFrame - 최예진
class CheckFrame {
	JFrame Checkf = new JFrame();
    JButton okbt;
    JCheckBox ch1, ch2, ch3;
  
    public CheckFrame() {
        // background
        ImageIcon icon = new ImageIcon("rescheck.png");        
        JLayeredPane layeredPane = new JLayeredPane() {
            public void paintComponent(Graphics g) {
                g.drawImage(icon.getImage(), 0, 0, null);
                setOpaque(false);
                super.paintComponent(g);
            }
        };
        
        // 체크박스
        ch1 = new JCheckBox("사이트 이용약관 동의(필수)");
        layeredPane.add(ch1);
        ch1.setBounds(180,230,300,25);
        ch2 = new JCheckBox("개인정보 수집 및 이용에 대한 동의(필수)");
        layeredPane.add(ch2);
        ch2.setBounds(180,485,300,25);
        ch3 = new JCheckBox("상기 내용을 모두 확인하였고, 동의합니다.");
        layeredPane.add(ch3);
        ch3.setBounds(180,720,300,25);

        //ImageIcon rule = new ImageIcon("rule.png");
        //ImageIcon rule2 = new ImageIcon("rule2.png");        

        // 버튼
        okbt = new JButton("동의합니다");
        okbt.setBounds(685, 780, 160, 48);
        okbt.setFont(new Font("맑은고딕", Font.BOLD, 20));
        layeredPane.add(okbt);
        okbt.addActionListener(new AgreeListener());

        JScrollPane scrollPane = new JScrollPane(layeredPane);
        Checkf.setTitle("이용약관");
        Checkf.setContentPane(scrollPane);
        Checkf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Checkf.setSize(1600, 950);
        Checkf.setVisible(true);
    }

    // Reservation 화면으로 전환 - 최소현
	public class AgreeListener implements ActionListener {
		public void actionPerformed(ActionEvent e) {        
			new Reservation();
            Checkf.setVisible(false);
        }
	}
}

// Reservation - 최소현
class Reservation {
    JFrame Reservationf = new JFrame();

    JComboBox[] checkinM = new JComboBox[7];
    String[] checkin_m = {"2017년 6월", "2017년 7월", "2017년 8월", "2017년 9월", "2017년 10월", "2017년 11월", "2017년 12월"};

    JComboBox[] checkinD = new JComboBox[31];
    String[] checkin_d = {"1일", "2일", "3일", "4일", "5일", "6일", "7일", "8일", "9일", "10일", "11일", "12일", "13일", "14일", "15일", "16일", "17일", "18일", "19일", "20일", "21일", "22일", "23일", "24일", "25일", "26일", "27일", "28일", "29일", "30일", "31일"};

    JComboBox[] checkoutM = new JComboBox[7];
    String[] checkout_m = {"2017년 6월", "2017년 7월", "2017년 8월", "2017년 9월", "2017년 10월", "2017년 11월", "2017년 12월"};

    JComboBox[] checkoutD = new JComboBox[31];
    String[] checkout_d = {"1일", "2일", "3일", "4일", "5일", "6일", "7일", "8일", "9일", "10일", "11일", "12일", "13일", "14일", "15일", "16일", "17일", "18일", "19일", "20일", "21일", "22일", "23일", "24일", "25일", "26일", "27일", "28일", "29일", "30일", "31일"};

    JComboBox[] adult = new JComboBox[5];
    String[] adult_c = {"1", "2", "3", "4", "5"};

    JComboBox[] child = new JComboBox[5];
    String[] child_c = {"0", "1", "2", "3", "4"};   


    public Reservation() {
        ImageIcon icon = new ImageIcon("Reservation.png");
            
        JLayeredPane layeredPane = new JLayeredPane() {
            public void paintComponent(Graphics g) {
                g.drawImage(icon.getImage(), 0, 0, null);
                setOpaque(false);
                super.paintComponent(g);
            }
        };

        // 텍스트필드 (예약자 성)
        JTextField lnameTextField = new JTextField(10);
        lnameTextField.setBounds(300, 200, 160, 48);
	    layeredPane.add(lnameTextField);
        
        // 텍스트필드 (예약자 이름)
        JTextField fnameTextField = new JTextField(10);
        fnameTextField.setBounds(500, 200, 260, 48);
        layeredPane.add(fnameTextField);
        
        // 라디오버튼 중복 불가능하게 그룹으로 설정
        ButtonGroup Member_g = new ButtonGroup();

        // 라디오버튼 (회원여부)
        JRadioButton member = new JRadioButton("회원");
        Member_g.add(member);
        layeredPane.add(member);
        member.setBounds(1000, 200, 100, 48);
        member.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JRadioButton nonmember = new JRadioButton("비회원");
        Member_g.add(member);
        layeredPane.add(nonmember);
        nonmember.setBounds(1100, 200, 100, 48);
        nonmember.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        // 텍스트필드 (연락처)
        JTextField phoneTextField = new JTextField(20);
        phoneTextField.setBounds(300, 290, 460, 48);
        layeredPane.add(phoneTextField);
        
        // 텍스트필드 (이메일)
        JTextField emailTextField = new JTextField(20);
        emailTextField.setBounds(1000, 290, 460, 48);
        layeredPane.add(emailTextField);

        // 체크인
        JComboBox checkinM = new JComboBox(checkin_m);
        layeredPane.add(checkinM);
        checkinM.setBounds(300, 380, 200, 48);
        checkinM.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JComboBox checkinD = new JComboBox(checkin_d);
        layeredPane.add(checkinD);
        checkinD.setBounds(550, 380, 200, 48);
        checkinD.setFont(new Font("맑은고딕", Font.PLAIN, 20));
        
        // 체크아웃
        JComboBox checkoutM = new JComboBox(checkout_m);
        layeredPane.add(checkoutM);
        checkoutM.setBounds(1000, 380, 200, 48);
        checkoutM.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JComboBox checkoutD = new JComboBox(checkout_d);
        layeredPane.add(checkoutD);
        checkoutD.setBounds(1250, 380, 200, 48);
        checkoutD.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        // 라디오버튼 중복 불가능하게 그룹으로 설정
        ButtonGroup Room_g = new ButtonGroup();

        // 라디오버튼 (객실타입)
        JRadioButton hjroom = new JRadioButton("혜진방");
        Room_g.add(hjroom);
        layeredPane.add(hjroom);
        hjroom.setBounds(300, 470, 100, 48);
        hjroom.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JRadioButton shroom = new JRadioButton("소현방");
        Room_g.add(shroom);
        layeredPane.add(shroom);
        shroom.setBounds(400, 470, 100, 48);
        shroom.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JRadioButton yjroom = new JRadioButton("예진방");
        Room_g.add(yjroom);
        layeredPane.add(yjroom);
        yjroom.setBounds(500, 470, 100, 48);
        yjroom.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JRadioButton hrroom = new JRadioButton("효린방");
        Room_g.add(hrroom);
        layeredPane.add(hrroom);
        hrroom.setBounds(600, 470, 100, 48);
        hrroom.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JRadioButton yiroom = new JRadioButton("용익방");
        Room_g.add(yiroom);
        layeredPane.add(yiroom);
        yiroom.setBounds(700, 470, 100, 48);
        yiroom.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        // 인원
        JComboBox adult = new JComboBox(adult_c);
        layeredPane.add(adult);
        adult.setBounds(1000, 470, 100, 48);
        adult.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JComboBox child = new JComboBox(child_c);
        layeredPane.add(child);
        child.setBounds(1340, 470, 100, 48);
        child.setFont(new Font("맑은고딕", Font.PLAIN, 20));
   
        // 라디오버튼 중복 불가능하게 그룹으로 설정
        ButtonGroup Meal_g = new ButtonGroup();

        // 라디오버튼 (식사)
        JRadioButton bMeal = new JRadioButton("조식");
        Meal_g.add(bMeal);
        layeredPane.add(bMeal);
        bMeal.setBounds(300, 550, 100, 48);
        bMeal.setFont(new Font("맑은고딕", Font.PLAIN, 20));
  
        JRadioButton twMeal = new JRadioButton("1일 2식");
        Meal_g.add(twMeal);
        layeredPane.add(twMeal);
        twMeal.setBounds(400, 550, 100, 48);
        twMeal.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JRadioButton thMeal = new JRadioButton("1일 3식");
        Meal_g.add(thMeal);
        layeredPane.add(thMeal);
        thMeal.setBounds(500, 550, 100, 48);
        thMeal.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        // 체크박스 (무료옵션)
        JCheckBox bus = new JCheckBox("셔틀버스");
        layeredPane.add(bus);
        bus.setBounds(300, 630, 150, 48);
        bus.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JCheckBox parking = new JCheckBox("주차장");
        layeredPane.add(parking);
        parking.setBounds(450, 630, 150, 48);
        parking.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JCheckBox laundry = new JCheckBox("세탁서비스");
        layeredPane.add(laundry);
        laundry.setBounds(600, 630, 150, 48);
        laundry.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JCheckBox mcall = new JCheckBox("모닝콜");
        layeredPane.add(mcall);
        mcall.setBounds(750, 630, 150, 48);
        mcall.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JCheckBox etcfac = new JCheckBox("기타시설이용");
        layeredPane.add(etcfac);
        etcfac.setBounds(900, 630, 150, 48);
        etcfac.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        // 체크박스 (유료옵션)
        JCheckBox pickup = new JCheckBox("픽업서비스");
        layeredPane.add(pickup);
        pickup.setBounds(300, 700, 150, 48);
        pickup.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JCheckBox concierge = new JCheckBox("전용컨시어지");
        layeredPane.add(concierge);
        concierge.setBounds(450, 700, 150, 48);
        concierge.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JCheckBox babys = new JCheckBox("베이비시터");
        layeredPane.add(babys);
        babys.setBounds(600, 700, 150, 48);
        babys.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JCheckBox rooms = new JCheckBox("룸서비스");
        layeredPane.add(rooms);
        rooms.setBounds(750, 700, 150, 48);
        rooms.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        JCheckBox banquet = new JCheckBox("연회시설이용");
        layeredPane.add(banquet);
        banquet.setBounds(900, 700, 150, 48);
        banquet.setFont(new Font("맑은고딕", Font.PLAIN, 20));

        // 보기 버튼
        JButton beforebt = new JButton("이전화면");
        layeredPane.add(beforebt);
        beforebt.setBounds(600, 780, 160, 48);
        beforebt.setFont(new Font("맑은고딕", Font.BOLD, 20));
        beforebt.addActionListener(new CheckFrameListener());

        JButton nextbt = new JButton("다음화면");
        layeredPane.add(nextbt);
        nextbt.setBounds(800, 780, 160, 48);
        nextbt.setFont(new Font("맑은고딕", Font.BOLD, 20));
        nextbt.addActionListener(new ResdisplayListener());
          
        JScrollPane scrollPane = new JScrollPane(layeredPane);
        Reservationf.setTitle("예약");
        Reservationf.setContentPane(scrollPane);
        Reservationf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Reservationf.setSize(1600, 950);
        Reservationf.setVisible(true);
   }

   // CheckFrame 화면으로 전환 - 최소현
   public class CheckFrameListener implements ActionListener {
      public void actionPerformed(ActionEvent e) {        
         new CheckFrame();
          Reservationf.setVisible(false);
        }
   }
    
   // Resdisplay 화면으로 전환 - 최소현
   public class ResdisplayListener implements ActionListener {
      public void actionPerformed(ActionEvent e) {        
         new Resdisplay();
          Reservationf.setVisible(false);
        }
   }
}

// Resdisplay - 최예진
class Resdisplay {
    JScrollPane scrollPane;
    JFrame Resdisplayf = new JFrame();

    public Resdisplay() {
        ImageIcon icon = new ImageIcon("Resdisplay.png");     
        JLayeredPane layeredPane = new JLayeredPane() {
            public void paintComponent(Graphics g) {
                g.drawImage(icon.getImage(), 0, 0, null);
                setOpaque(false);
                super.paintComponent(g);
            }
        };

        // 텍스트필드 (예약번호)
        JTextField rnumTextField = new JTextField(20);
        rnumTextField.setBounds(550, 420, 600, 55);
        layeredPane.add(rnumTextField);
        
        // 하단 버튼
        JButton button1 = new JButton("예약확인");
        layeredPane.add(button1);
        button1.setBounds(700, 780, 160, 48);
        button1.setFont(new Font("맑은고딕", Font.BOLD, 20));

	    button1.addActionListener(new ActionListener() {
		    public void actionPerformed(ActionEvent e) {
			    Object obj = e.getSource();          
			    if (obj == button1) {
				    JOptionPane.showMessageDialog(null, "예약이 완료되었습니다.", "예약 완료", JOptionPane.INFORMATION_MESSAGE);
                }         
            }
        });

        JScrollPane scrollPane = new JScrollPane(layeredPane);
        Resdisplayf.setTitle("예약확인");
        Resdisplayf.setContentPane(scrollPane);
        Resdisplayf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Resdisplayf.setSize(1600, 950);
        Resdisplayf.setVisible(true);
	}
}

// Cancellation - 최소현
class Cancellation {
    JFrame Cancelf = new JFrame();

    public Cancellation() {
        ImageIcon icon = new ImageIcon("Cancellation.png");
            
        JLayeredPane layeredPane = new JLayeredPane() {
            public void paintComponent(Graphics g) {
                g.drawImage(icon.getImage(), 0, 0, null);
                setOpaque(false);
                super.paintComponent(g);
            }
        };
        
      // 텍스트필드 (예약자 성)
      JTextField lnameTextField = new JTextField(10);
      lnameTextField.setBounds(300, 230, 160, 48);
      layeredPane.add(lnameTextField);
        
      // 텍스트필드 (예약자 이름)
      JTextField fnameTextField = new JTextField(10);
      fnameTextField.setBounds(500, 230, 260, 48);
      layeredPane.add(fnameTextField);

      // 텍스트필드 (예약번호)
      JTextField rnumTextField = new JTextField(20);
      rnumTextField.setBounds(300, 315, 460, 48);
      layeredPane.add(rnumTextField);
        
      // 텍스트필드 (이메일)
      JTextField emailTextField = new JTextField(20);
      emailTextField.setBounds(980, 315, 460, 48);
      layeredPane.add(emailTextField);

      // 라디오버튼 중복 불가능하게 그룹으로 설정
      ButtonGroup RefundW_g = new ButtonGroup();
        
      // 라디오버튼 (환불방법)
      JRadioButton refundW1 = new JRadioButton("결제수단으로 환불");
      RefundW_g.add(refundW1);
      layeredPane.add(refundW1);
      refundW1.setBounds(300, 410, 200, 48);
      refundW1.setFont(new Font("맑은고딕", Font.PLAIN, 20));

      JRadioButton refundW2 = new JRadioButton("본인명의로 환불");
      RefundW_g.add(refundW2);
      layeredPane.add(refundW2);
      refundW2.setBounds(500, 410, 200, 48);
      refundW2.setFont(new Font("맑은고딕", Font.PLAIN, 20));

      JRadioButton refundW3 = new JRadioButton("타인명의로 환불");
      RefundW_g.add(refundW3);
      layeredPane.add(refundW3);
      refundW3.setBounds(700, 410, 200, 48);
      refundW3.setFont(new Font("맑은고딕", Font.PLAIN, 20));

      // 체크박스 (동의)
      JCheckBox agree = new JCheckBox(" 위의 환불 내용에 대해서 동의합니다.");
      layeredPane.add(agree);
      agree.setBounds(150, 730, 300, 25);
      agree.setFont(new Font("맑은고딕", Font.PLAIN, 15));
       
      // 하단 버튼 
      JButton canbt = new JButton("예약취소");
      layeredPane.add(canbt);
      canbt.setBounds(700, 780, 160, 48);
      canbt.setFont(new Font("맑은고딕", Font.BOLD, 20));

	  canbt.addActionListener(new ActionListener() {
		  public void actionPerformed(ActionEvent e) {
			  Object obj = e.getSource();          
			  if (obj == canbt) {
				  JOptionPane.showMessageDialog(null, "예약이 취소되었습니다.", "예약 취소", JOptionPane.INFORMATION_MESSAGE);
              }         
          }
      });

      JScrollPane scrollPaneC = new JScrollPane(layeredPane);
      Cancelf.setTitle("예약취소");
      Cancelf.setContentPane(scrollPaneC);
      Cancelf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      Cancelf.setSize(1600, 950);
      Cancelf.setVisible(true);
    }
}

 //Manager - 손혜진
 class Manager {
	 JScrollPane scrollPane;
     JFrame Managerf = new JFrame();
	 
	 public Manager() {
		 ImageIcon icon = new ImageIcon("MngMode.png");       
         JLayeredPane layeredPane = new JLayeredPane() {
			 public void paintComponent(Graphics g) {
				 g.drawImage(icon.getImage(), 0, 0, null);
                 setOpaque(false);
                 super.paintComponent(g);
             }
          };
		  
		  // textfield
          JLabel title = new JLabel("RESERVATION CHECK");
          title.setFont(new Font("고딕", Font.BOLD, 45));
          title.setForeground(Color.YELLOW);
          title.setBounds(150, 200, 500, 70);
          layeredPane.add(title);

          JLabel rsnoL = new JLabel("예약번호");
          rsnoL.setFont(new Font("맑은고딕", Font.BOLD, 30));
          rsnoL.setForeground(Color.PINK);
          rsnoL.setBounds(950, 200, 500, 70);
          layeredPane.add(rsnoL);

          JTextField rsnoT = new JTextField(30);
          rsnoT.setEditable(false);
          rsnoT.setBounds(1100, 200, 300, 50);
          layeredPane.add(rsnoT);

          JTextField nameT1 = new JTextField(20);
          nameT1.setEditable(false);
          nameT1.setBounds(330, 285, 120, 50);
          layeredPane.add(nameT1);

          JTextField nameT2 = new JTextField(20);
          nameT2.setEditable(false);
          nameT2.setBounds(480, 285, 180, 50);
          layeredPane.add(nameT2);

          JTextField mbT = new JTextField(30);
          mbT.setEditable(false);
          mbT.setBounds(1100, 285, 300, 50);
          layeredPane.add(mbT);

          JTextField phnT = new JTextField(30);
          phnT.setEditable(false);
          phnT.setBounds(330, 375, 330, 50);
          layeredPane.add(phnT);

          JTextField baT = new JTextField(30);
          baT.setEditable(false);
          baT.setBounds(1100, 375, 300, 50);
          layeredPane.add(baT);

          JTextField cioT = new JTextField(30);
          cioT.setEditable(false);
          cioT.setBounds(330, 470, 330, 50);
          layeredPane.add(cioT);

          JTextField mealT = new JTextField(30);
          mealT.setEditable(false);
          mealT.setBounds(1100, 470, 300, 50);
          layeredPane.add(mealT);

          JTextField rtT = new JTextField(30);
          rtT.setEditable(false);
          rtT.setBounds(330, 565, 330, 50);
          layeredPane.add(rtT);

          JTextField foT = new JTextField(30);
          foT.setEditable(false);
          foT.setBounds(1100, 565, 300, 50);
          layeredPane.add(foT);

          JTextField pnT1 = new JTextField(30);
          pnT1.setEditable(false);
          pnT1.setBounds(330, 660, 150, 50);
          layeredPane.add(pnT1);

          JTextField pnT2 = new JTextField(30);
          pnT2.setEditable(false);
          pnT2.setBounds(510, 660, 150, 50);
          layeredPane.add(pnT2);

          JTextField coT = new JTextField(30);
          coT.setEditable(false);
          coT.setBounds(1100, 660, 300, 50);
          layeredPane.add(coT);

          JButton delete = new JButton("예약취소");
          delete.setFont(new Font("맑은고딕", Font.BOLD, 20));
          delete.setBounds(600, 780, 160, 48);
          layeredPane.add(delete);

		  JButton MngOut = new JButton("로그아웃");
		  MngOut.setFont(new Font("맑은고딕", Font.BOLD, 20));
		  MngOut.setBounds(800, 780, 160, 48);
		  MngOut.addActionListener(new LogOutListener());
		  layeredPane.add(MngOut);

          scrollPane = new JScrollPane(layeredPane);
          Managerf.setTitle("매니저모드");
          Managerf.setContentPane(scrollPane);
          Managerf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          Managerf.setSize(1600, 950);
          Managerf.setVisible(true);

          delete.addActionListener(new ActionListener() {
			  public void actionPerformed(ActionEvent e) {
				  Object obj = e.getSource();          
				  if (obj == delete) {
					  JOptionPane.showMessageDialog(null, "예약이 취소되었습니다.", "예약 취소", JOptionPane.INFORMATION_MESSAGE);
                  }         
              }
	      });
	}

   public class LogOutListener implements ActionListener {
       public void actionPerformed(ActionEvent e) {
          System.exit(1);
        }
   }

}

// main
public class SMHOTEL
{
	public static void main(String[] args) {
		CustomerMode frame = new CustomerMode();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(1600, 950);
        frame.setVisible(true);
        frame.setLayout(null);  
    } 
}