using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
//https://velog.io/@ssu_hyun/%EC%9D%B4%EA%B2%83%EC%9D%B4-C%EC%9D%B4%EB%8B%A4-%ED%81%B4%EB%9E%98%EC%8A%A4
public class main {
	public static void Main() {
		Random coin = new Random();
		int SlayerHp = 185;
		int Slayerskill1Coins = 1;
		int Slayerskill1CoinPw = 6;
		int Slayerskill1Pw = 4;
		int Slayerskill2Coins = 2;
		int Slayerskill2CoinPw = 1;
		int Slayerskill2Pw = 11;
		int Slayerskill3Coins = 3;
		int Slayerskill3CoinPw = 2;
		int Slayerskill3Pw = 12;
		int SlayermaxSpeed = 5;
		int SlayerminSpeed = 3;
		string Slayerskill1Name = "격세";
		string Slayerskill2Name = "두의 틀기";
		string Slayerskill3Name = "이면 찬자";
		string SlayercharName = "검계 살수 이상";
		int EnemySpeed,SlayercharSpeed,EnemySkill = 0;
		int EnemyHp = 215;
		int Enemyskill1Coins = 1;
		int Enemyskill1CoinPw = 6;
		int Enemyskill1Pw = 4;
		int Enemyskill2Coins = 1;
		int Enemyskill2CoinPw = 7;
		int Enemyskill2Pw = 6;
		int Enemyskill3Coins = 4;
		int Enemyskill3CoinPw = 3;
		int Enemyskill3Pw = 8;
		int EnemymaxSpeed = 6;
		int EnemyminSpeed = 1;
		int EnemyPw = 0;
		int SlayerPw = 0;
		string Enemyskill1Name = "강타";
		string Enemyskill2Name = "파멸 강타";
		string Enemyskill3Name = "파괴 전차";
		string EnemycharName = "파멸의 레골리스";
		int a = 0;
		while(true){
			Console.WriteLine("1. 캐릭터 정보 확인 2. 배틀 스타트");
			a = Convert.ToInt32(Console.ReadLine());
			switch(a){
				case 1:
				while(a != 4){ 
				Console.WriteLine("\n"+SlayercharName);
				Console.WriteLine("\n체력 : {0} 속도 {1} ~ {2}",SlayerHp,SlayerminSpeed,SlayermaxSpeed);
				Console.WriteLine("\n 스킬 1\t\t스킬 2\t\t스킬 3\t 이전 화면으로(4) \n {0}\t\t{1}\t{2}",Slayerskill1Name,Slayerskill2Name,Slayerskill3Name);
				a = Convert.ToInt32(Console.ReadLine());
					switch(a){
						case 1:
							Console.WriteLine("\n"+Slayerskill1Name);
							Console.WriteLine("\n기본 위력 :"+Slayerskill1Pw);
							Console.WriteLine("코인 갯수 :"+Slayerskill1Coins);
							Console.WriteLine("코인 위력 :"+Slayerskill1CoinPw);
							Thread.Sleep(1500);
							break;
						case 2:
							Console.WriteLine("\n"+Slayerskill2Name);
							Console.WriteLine("\n기본 위력 :"+Slayerskill2Pw);
							Console.WriteLine("코인 갯수 :"+Slayerskill2Coins);
							Console.WriteLine("코인 위력 :"+Slayerskill2CoinPw);	
							Thread.Sleep(1500);
							break;
						case 3:
							Console.WriteLine("\n"+Slayerskill3Name);
							Console.WriteLine("\n기본 위력 :"+Slayerskill3Pw);
							Console.WriteLine("코인 갯수 :"+Slayerskill3Coins);
							Console.WriteLine("코인 위력 :"+Slayerskill3CoinPw);	
							Thread.Sleep(1500);
							break;
						default:
							break;
					}
				}
					break;
				case 2:
					EnemySpeed = coin.Next(EnemyminSpeed,EnemymaxSpeed+1);
					SlayercharSpeed = coin.Next(SlayerminSpeed,SlayermaxSpeed+1);
					EnemySkill = coin.Next(1,4);
					while(EnemyHp > 0){
					if(a != 4 ){ 
						EnemySpeed = coin.Next(EnemyminSpeed,EnemymaxSpeed+1);
						SlayercharSpeed = coin.Next(SlayerminSpeed,SlayermaxSpeed+1);
						EnemySkill = coin.Next(1,4);
						EnemyPw = 0;
						SlayerPw = 0;
					}
					Console.WriteLine("적 출현!");
					Console.WriteLine("\n"+EnemycharName);
					Console.WriteLine("\n체력 : {0} 속도 {1}\n",EnemyHp,EnemySpeed);
					switch(EnemySkill){ 
						case 1:
							Console.WriteLine(" 적 스킬: {0}\n 기본 위력: {1} 코인 갯수: {2} 코인 위력: {3}",Enemyskill1Name,Enemyskill1Pw,Enemyskill1Coins,Enemyskill1CoinPw);
							break;
						case 2:
							Console.WriteLine(" 적 스킬: {0}\n 기본 위력: {1} 코인 갯수: {2} 코인 위력: {3}",Enemyskill2Name,Enemyskill2Pw,Enemyskill2Coins,Enemyskill2CoinPw);
							break;
						case 3:
							Console.WriteLine(" 적 스킬: {0}\n 기본 위력: {1} 코인 갯수: {2} 코인 위력: {3}",Enemyskill3Name,Enemyskill3Pw,Enemyskill3Coins,Enemyskill3CoinPw);
							break;
						
					}
			Console.WriteLine("\n1. 격세 2. 두의 틀기 3. 이면 찬자 4. 내 정보 보기");
			if(EnemySpeed < SlayercharSpeed){
				Console.WriteLine("적보다 속도가 높으므로 공격 위력이 1 증가합니다.");
				SlayerPw+=1;
			}
			else{
				Console.WriteLine("적과의 속도가 동일하거나 낮으므로 아무 효과도 발생하지 않습니다.");
			}
			a = Convert.ToInt32(Console.ReadLine());
			switch(a){
				case 4:
				do{ 
				Console.WriteLine("\n"+SlayercharName);
				Console.WriteLine("\n체력 : {0} 속도 {1} ",SlayerHp,SlayercharSpeed);
				Console.WriteLine("\n 스킬 1\t\t스킬 2\t\t스킬 3\t 이전 화면으로(4) \n {0}\t\t{1}\t{2}",Slayerskill1Name,Slayerskill2Name,Slayerskill3Name);
				a = Convert.ToInt32(Console.ReadLine());
					switch(a){
						case 1:
							Console.WriteLine("\n"+Slayerskill1Name);
							Console.WriteLine("\n기본 위력 :"+Slayerskill1Pw);
							Console.WriteLine("코인 갯수 :"+Slayerskill1Coins);
							Console.WriteLine("코인 위력 :"+Slayerskill1CoinPw);
							Thread.Sleep(1500);
							break;
						case 2:
							Console.WriteLine("\n"+Slayerskill2Name);
							Console.WriteLine("\n기본 위력 :"+Slayerskill2Pw);
							Console.WriteLine("코인 갯수 :"+Slayerskill2Coins);
							Console.WriteLine("코인 위력 :"+Slayerskill2CoinPw);	
							Thread.Sleep(1500);
							break;
						case 3:
							Console.WriteLine("\n"+Slayerskill3Name);
							Console.WriteLine("\n기본 위력 :"+Slayerskill3Pw);
							Console.WriteLine("코인 갯수 :"+Slayerskill3Coins);
							Console.WriteLine("코인 위력 :"+Slayerskill3CoinPw);	
							Thread.Sleep(1500);
							break;
						default:
							break;
					}
				}while(a != 4);
				break;
				case 1:
					Console.WriteLine("격세를 사용합니다.");
					Thread.Sleep(1500);
					SlayerPw += Slayerskill1Pw;
					for(int i = 0;i < Slayerskill1Coins;i++){
						switch(coin.Next(0,2)){
							case 0:
								SlayerPw += Slayerskill1CoinPw;
								break;
							case 1:
								break;
								}
						}
					switch(EnemySkill){
						case 1:
							EnemyPw += Enemyskill1Pw;
							for(int i = 0;i < Enemyskill1Coins;i++){
								switch(coin.Next(0,2)){
									case 0:
										EnemyPw += Enemyskill1CoinPw;
										break;
									case 1:
										break;
								}
							}
							break;														
						case 2:
							EnemyPw += Enemyskill2Pw;
							for(int i = 0;i < Enemyskill2Coins;i++){
								switch(coin.Next(0,2)){
									case 0:
										EnemyPw += Enemyskill2CoinPw;
										break;
									case 1:
										break;
								}
							}
							break;
							
						case 3:
							EnemyPw += Enemyskill3Pw;
							for(int i = 0;i < Enemyskill3Coins;i++){
								switch(coin.Next(0,2)){
									case 0:
										EnemyPw += Enemyskill3CoinPw;
										break;
									case 1:
										break;
								}
							}
							break;
						}
						Thread.Sleep(1000);
						Console.WriteLine("내 스킬 합:"+ SlayerPw);
						Thread.Sleep(1000);
						Console.WriteLine("적 스킬 합:"+ EnemyPw);
						Thread.Sleep(1000);
						if(SlayerPw > EnemyPw){
							EnemyHp -= SlayerPw;
							Console.WriteLine("합 승리! 적에게 {0}의 데미지",SlayerPw);
						}
						else if(SlayerPw < EnemyPw){
							SlayerHp -= EnemyPw;
							Console.WriteLine("합 패배, {0} 의 데미지를 받았습니다",EnemyPw);
						}
						else{
							Console.WriteLine("위력이 동일하여 서로 상쇄되었습니다.");
						}
						Thread.Sleep(2000);
					break;
					
					case 2:
					Console.WriteLine("두의 틀기를 사용합니다.");
					Thread.Sleep(1500);
					SlayerPw += Slayerskill2Pw;
					for(int i = 0;i < Slayerskill2Coins;i++){
						switch(coin.Next(0,2)){
							case 0:
								SlayerPw += Slayerskill2CoinPw;
								break;
							case 1:
								break;
								}
						}
					switch(EnemySkill){
						case 1:
							EnemyPw += Enemyskill1Pw;
							for(int i = 0;i < Enemyskill1Coins;i++){
								switch(coin.Next(0,2)){
									case 0:
										EnemyPw += Enemyskill1CoinPw;
										break;
									case 1:
										break;
								}
							}
							break;														
						case 2:
							EnemyPw += Enemyskill2Pw;
							for(int i = 0;i < Enemyskill2Coins;i++){
								switch(coin.Next(0,2)){
									case 0:
										EnemyPw += Enemyskill2CoinPw;
										break;
									case 1:
										break;
								}
							}
							
							break;
							
						case 3:
							EnemyPw += Enemyskill3Pw;
							for(int i = 0;i < Enemyskill3Coins;i++){
								switch(coin.Next(0,2)){
									case 0:
										EnemyPw += Enemyskill3CoinPw;
										break;
									case 1:
										break;
								}
							}
							break;
						}
						Thread.Sleep(1000);
						Console.WriteLine("내 스킬 합:"+ SlayerPw);
						Thread.Sleep(1000);
						Console.WriteLine("적 스킬 합:"+ EnemyPw);
						Thread.Sleep(1000);
						if(SlayerPw > EnemyPw){
							EnemyHp -= SlayerPw;
							Console.WriteLine("합 승리! 적에게 {0}의 데미지",SlayerPw);
						}
						else if(SlayerPw < EnemyPw){
							SlayerHp -= EnemyPw;
							Console.WriteLine("합 패배, {0} 의 데미지를 받았습니다",EnemyPw);
						}
						else{
							Console.WriteLine("위력이 동일하여 서로 상쇄되었습니다.");
						}
						Thread.Sleep(2000);
					break;
					
					
					
					case 3:
					Console.WriteLine("이면 찬자를 사용합니다.");
					Thread.Sleep(1500);
					SlayerPw += Slayerskill3Pw;
					for(int i = 0;i < Slayerskill3Coins;i++){
						switch(coin.Next(0,2)){
							case 0:
								SlayerPw += Slayerskill3CoinPw;
								break;
							case 1:
								break;
								}
						}
					switch(EnemySkill){
						case 1:
							EnemyPw += Enemyskill1Pw;
							for(int i = 0;i < Enemyskill1Coins;i++){
								switch(coin.Next(0,2)){
									case 0:
										EnemyPw += Enemyskill1CoinPw;
										break;
									case 1:
										break;
								}
							}
							break;														
						case 2:
							EnemyPw += Enemyskill2Pw;
							for(int i = 0;i < Enemyskill2Coins;i++){
								switch(coin.Next(0,2)){
									case 0:
										EnemyPw += Enemyskill2CoinPw;
										break;
									case 1:
										break;
								}
							}
							break;
							
						case 3:
							EnemyPw += Enemyskill3Pw;
							for(int i = 0;i < Enemyskill3Coins;i++){
								switch(coin.Next(0,2)){
									case 0:
										EnemyPw += Enemyskill3CoinPw;
										break;
									case 1:
										break;
								}
							}
							break;
						}
						Thread.Sleep(1000);
						Console.WriteLine("내 스킬 합:"+ SlayerPw);
						Thread.Sleep(1000);
						Console.WriteLine("적 스킬 합:"+ EnemyPw);
						Thread.Sleep(1000);
						if(SlayerPw > EnemyPw){
							EnemyHp -= SlayerPw;
							Console.WriteLine("합 승리! 적에게 {0}의 데미지",SlayerPw);
						}
						else if(SlayerPw < EnemyPw){
							SlayerHp -= EnemyPw;
							Console.WriteLine("합 패배, {0} 의 데미지를 받았습니다",EnemyPw);
						}
						else{
							Console.WriteLine("위력이 동일하여 서로 상쇄되었습니다.");
						}
						Thread.Sleep(2000);
					break;
					
					}
				}//몬hp 0 전까지
						break;
			}
		}
		
	}
}
