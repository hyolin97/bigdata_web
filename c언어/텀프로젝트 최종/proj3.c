#include <stdio.h>
#include <string.h>

char main()
{
	
	char* ingre1[4]={"밥","국","면"};//char로 변수를 선언하였더니 실행오류가 생김.
	
	char* ingre2[4]={"소고기","돼지고기","닭고기"};
	
	char* ingre3[7]={"양파","버섯","감자","파","마늘","무"};
	
	char* ingre4[4]={"바지락","새우","게"};
	
	char* ingre5[5]={"된장","고추장","토마토소스","크림소스"};
	char intp1,intp2,intp3,intp4,intp5;
	
	char* inp1=&intp1;char* inp2=&intp2;char* inp3=&intp3;char* inp4=&intp4;char* inp5=&intp5;
	 int i=0;
	 //사용자로부터 재료를 입력받음.
  printf("안녕하세요.\n"); 
  printf("요리하고 싶은 재료를 입력하세요.\n "); 
  printf("첫번째 재료\n <(밥,면,국)중에서 고르시오>:\n");
  scanf("%s",&intp1);
  printf("두번째 재료\n<고기: (소고기, 돼지고기, 닭고기)중에서 고르시오>:\n");
  scanf("%s",&intp2);
  printf("세번째 재료\n<야채: (양파,버섯,감자,파,마늘,무)중에서 고르시오>:\n");
  scanf("%s",&intp3);
  printf("네번째 재료\n<해산물: (바지락,새우,게)중에서 고르시오>:\n");
  scanf("%s",&intp4);
  printf("다섯번째 재료\n<소스: (된장, 고추장, 토마토소스, 크림소스)중에서 고르시오>:\n");
  scanf("%s",&intp5);

  for(i=0;i<=5;i++){
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n된장국밥 \n 스테이크\n");
				  
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n된장국수\n 스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n소고기 된장국\n 바지락국\n 바지락볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n돼지국밥\n 스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n된장국수\n 스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n돼지고기 된장국\n 바지락국\n 바지락볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n닭볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식: \n된장국수\n 닭국수\n바지락볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n돼지고기 된장국\n 바지락국\n 스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n된장국밥 \n 스테이크\n 새우볶음\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n소고기 된장국수\n 새우볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n소고기 된장국\n 스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n된장밥\n 게찜\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n게된장국수\n게찜\n 스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("만들 수있는 음식:\n게된장국\n 게찜\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔밥\n 양념불고기\n 스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔국수\n 양념불고기\n 스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔밥\n 양념불고기\n 스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔밥\n 제육볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔국수\n 제육볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n양념불고기\n 스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n닭갈비\n 스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n비빔국수\n닭갈비\n 닭칼국수\n스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n닭갈비\n 바지락국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n토마토리조또\n 바지락국\n스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n스파게티\n 바지락국\n스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n바지락국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n토마토리조또\n바지락국\n스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: 토마토스파게티\n바지락국\n스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n바지락국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n토마토리조또\n바지락국\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n토마토스파게티\n바지락국\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n바지락국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n바지락국\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n바지락국\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n바지락국\n스테이크\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n바지락국\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n바지락국\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n바지락국\n스테이크\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n바지락국\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식:\n 크림스파게티\n바지락국\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n바지락국\n스테이크\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n새우볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n새우볶음\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n새우국\n스테이크\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n새우볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n새우국\n스테이크\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n새우볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n새우국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n새우볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n새우국\n스테이크\n");

  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n새우볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n새우볶음\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n새우국\n스테이크\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림리조또\n새우볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n새우국\n스테이크\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림리조또\n새우볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n새우국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림리조또\n새우볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n새우국\n스테이크\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔밥\n 새우볶음밥\n양념불고기\n 스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔국수\n 양념불고기\n 스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔밥\n 새우국\n양념불고기\n 스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔밥\n 새우볶음밥\n제육볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔국수\n 제육볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n 양념불고기\n 새우국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n닭갈비\n 새우볶음밥\n스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n비빔국수\n닭갈비\n 닭칼국수\n스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n닭갈비\n 새우국\n스테이크\n");
  
	  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n게살볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n게살볶음\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n꽃게국\n스테이크\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n게볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식:\n 꽃게국\n스테이크\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식:\n 크림리조또\n게볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n꽃게국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n게볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n꽃게국\n스테이크\n");

  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림리조또\n게볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n꽃게볶음\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("만들 수있는 음식: \n꽃게국\n스테이크\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림리조또\n게살볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n꽃게국\n스테이크\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림리조또\n새우볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n꽃게국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림리조또\n게살볶음밥\n스테이크\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n크림스파게티\n스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("만들 수있는 음식: \n꽃게국\n스테이크\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔밥\n 게살볶음밥\n양념불고기\n 스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔국수\n 양념불고기\n 스테이크\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔밥\n 꽃게국\n양념불고기\n 스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔밥\n 게살볶음밥\n제육볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식:\n비빔국수\n 제육볶음\n 스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n양념불고기\n 꽃게국\n스테이크\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n닭갈비\n 게살볶음밥\n스테이크\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n비빔국수\n닭갈비\n 닭칼국수\n스테이크\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("만들 수있는 음식: \n닭갈비\n 꽃게국\n스테이크\n");
  






  
	  

   
  }
  return 0;
}