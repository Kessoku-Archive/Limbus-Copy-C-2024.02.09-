using System;
using System.Threading;
//https://velog.io/@jt26/C-%ED%81%B4%EB%9E%98%EC%8A%A4%EC%9D%98-%EC%83%81%EC%86%8Dinheritance
class Program
{
    public static void Main(string[] args)
    {
        GameMain game = new GameMain();
        game.GameStart();

    }

}

class GameMain
{
    WarKnight player = new WarKnight();
    int mainBtn = 0;
    public void GameStart()
    {
        while (true)
        {
            Console.WriteLine("메인 화면");
            Console.WriteLine("1. 캐릭터 확인 2. 전투 시뮬레이션");
            switch (btn())
            {
                case 1:
                    CharCheck();
                    break;
                case 2:

                    break;
            }
        }
    }
    public int btn()
    {
        mainBtn = int.Parse(Console.ReadLine());
        return mainBtn;
    }
    public void CharCheck()
    {
        while (mainBtn != 4)
        {
            Console.WriteLine("\n캐릭터 정보");
            Console.WriteLine("\n{0} 등급 캐릭터\n\n{1}", player.Grade, player.Name);
            Console.WriteLine("\n\n체력: {0} 공격력: {1} 방어력: {2}", player.Hp, player.Atk, player.Def);
            Console.WriteLine("속도 :{0} ~ {1}", player.MinSpd, player.MaxSpd);
            Console.WriteLine("\n1. {0} 2. {1} 3. {2} 4. 이전으로 돌아가기", player.S1Name, player.S2Name, player.S3Name);
            switch (btn())
            {
                case 1:
                    player.Skill1Info(player.S1Pw, player.S1c, player.S1cPw, player.S1Name, player.S1Info);
                    break;
                case 2:
                    player.Skill2Info(player.S2Pw, player.S2c, player.S2cPw, player.S2Name, player.S2Info);
                    break;
                case 3:
                    player.Skill3Info(player.S3Pw, player.S3c, player.S3cPw, player.S3Name, player.S3Info);
                    break;
            }
            Thread.Sleep(3000);
        }
    }
}

class WarKnight : Player
{
    public WarKnight()
    {
        this.name = "전쟁기사";
        this.grade = 3;
        this.atk = 15;
        this.hp = 140;
        this.def = 10;
        this.maxSpd = 5;
        this.minSpd = 3;
        this.lv = 1;
        this.s1cPw = 4;
        this.s2cPw = 4;
        this.s3cPw = 16;
        this.s1c = 2;
        this.s2c = 3;
        this.s3c = 1;
        this.s1Pw = 2;
        this.s2Pw = 4;
        this.s3Pw = 10;
        this.gPw = 8;
        this.gcPw = 6;
        this.gc = 1;
        this.s1Name = "참격";
        this.s1Info = "[첫번째 공격 적중시] 출혈 1 부여\n[두번째 공격 앞면 적중시] 출혈 2 부여";
        this.s2Name = "연속베기";
        this.s2Info = "";
        this.s3Name = "처단";
        this.s3Info = "[첫번째 공격 앞면 적중시] 10의 추가 피해";
    }
}

class Player : Character  //캐릭터 -> 플레이어 -> 기사 or 캐릭터 -> 몬스터
{
    protected string name;
    protected int grade;
    public Player()
    {

    }

    public string Name
    {
        get { return name; }
        set { name = value; }
    }

    public int Grade
    {
        get { return grade; }
        set { grade = value; }
    }
}

class Character
{
    protected int hp = 0;
    protected int atk = 0;
    protected int def = 0;
    protected int maxSpd = 0;
    protected int minSpd = 0;
    protected int lv = 0;
    protected const int maxLv = 40;
    protected int s1cPw = 0;
    protected int s2cPw = 0;
    protected int s3cPw = 0;
    protected int s1c = 0;
    protected int s2c = 0;
    protected int s3c = 0;
    protected int s1Pw = 0;
    protected int s2Pw = 0;
    protected int s3Pw = 0;
    protected int gPw = 0;
    protected int gcPw = 0;
    protected int gc = 0;
    protected string s1Name = "스킬1";
    protected string s1Info = "스킬1설명";
    protected string s2Name = "스킬2";
    protected string s2Info = "스킬2설명";
    protected string s3Name = "스킬3";
    protected string s3Info = "스킬3설명";
    public int Hp
    {
        get { return hp; }
        set { hp = value; }
    }
    public int Atk
    {
        get { return atk; }
        set { atk = value; }
    }
    public int Def
    {
        get { return def; }
        set { def = value; }
    }
    public int MaxSpd
    {
        get { return maxSpd; }
        set { maxSpd = value; }
    }
    public int MinSpd
    {
        get { return minSpd; }
        set { minSpd = value; }
    }
    public int Lv
    {
        get { return lv; }
        set { lv = value; }
    }
    public int S1cPw
    {
        get { return s1cPw; }
        set { s1cPw = value; }
    }
    public int S2cPw
    {
        get { return s2cPw; }
        set { s2cPw = value; }
    }
    public int S3cPw
    {
        get { return s3cPw; }
        set { s3cPw = value; }
    }
    public int S1c
    {
        get { return s1c; }
        set { s1c = value; }
    }
    public int S2c
    {
        get { return s2c; }
        set { s2c = value; }
    }
    public int S3c
    {
        get { return s3c; }
        set { s3c = value; }
    }
    public int S1Pw
    {
        get { return s1Pw; }
        set { s1Pw = value; }
    }
    public int S2Pw
    {
        get { return s2Pw; }
        set { s2Pw = value; }
    }
    public int S3Pw
    {
        get { return s3Pw; }
        set { s3Pw = value; }
    }
    public int GPw
    {
        get { return gPw; }
        set { gPw = value; }
    }
    public int GCPW
    {
        get { return gcPw; }
        set { gcPw = value; }
    }
    public int GC
    {
        get { return gc; }
        set { gc = value; }
    }

    public string S1Name
    {
        get { return s1Name; }
        set { s1Name = value; }
    }

    public string S1Info
    {
        get { return s1Info; }
        set { s1Info = value; }
    }
    public string S2Name
    {
        get { return s2Name; }
        set { s2Name = value; }
    }

    public string S2Info
    {
        get { return s2Info; }
        set { s2Info = value; }
    }
    public string S3Name
    {
        get { return s3Name; }
        set { s3Name = value; }
    }

    public string S3Info
    {
        get { return s3Info; }
        set { s3Info = value; }
    }

    public void Skill1Info(int s1Pw, int s1c, int s1cPw, string s1Name, string s1Info)
    {
        Console.WriteLine("\n" + s1Name);
        Console.WriteLine("\n기본 위력:" + s1Pw);
        Console.WriteLine("코인 갯수:" + s1c);
        Console.WriteLine("코인 위력:" + s1cPw);
        Console.WriteLine("\n" + s1Info);
    }

    public void Skill2Info(int s2Pw, int s2c, int s2cPw, string s2Name, string s2Info)
    {
        Console.WriteLine("\n" + s2Name);
        Console.WriteLine("\n기본 위력:" + s2Pw);
        Console.WriteLine("코인 갯수:" + s2c);
        Console.WriteLine("코인 위력:" + s2cPw);
        Console.WriteLine("\n" + s2Info);
    }

    public void Skill3Info(int s3Pw, int s3c, int s3cPw, string s3Name, string s3Info)
    {
        Console.WriteLine("\n" + s3Name);
        Console.WriteLine("\n기본 위력:" + s3Pw);
        Console.WriteLine("코인 갯수:" + s3c);
        Console.WriteLine("코인 위력:" + s3cPw);
        Console.WriteLine("\n" + s3Info);
    }
}
