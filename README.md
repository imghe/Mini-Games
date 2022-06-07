項目名稱：Mini-Games
##
成員 ：

B0247851 陳柏翔 (組長)
分工：Minesweeper（踩地雷遊戲）、Debug、UML

B0247753 林品浩
分工：Poker Than Size（撲克牌比大小遊戲）、Poker（撲克牌排組）、課業協助

B0222891 余俊昌
分工：Booom（拆炸彈遊戲）、Main Window（遊戲大廳）、Debug
##
製作成可放入遊戲的遊戲庫，放入三款由三人個別製作的遊戲。

主要使用QT Creator建立，並輔助使用Visual Studio。
##
UML類圖

	1.MainWindow
	----------------------------------------------------------------------------------------------------------------
	-    ui : Ui::MainWindow*;
	-    pageNo : static int;
	-    pageMAX : static int;
	-    pokerThanSize : pokerThanSize;
	-    Booom : Booom;
	-    Minesweeper Minesweeper;
	----------------------------------------------------------------------------------------------------------------
	+    MainWindow(QWidget *parent = nullptr);
	+    ~MainWindow();

	-    on_pokerThanSize_clicked() : void;
	-    on_Booom_clicked() : void;
	-    on_mineSweeper_clicked() : void;
	-    setPage(int) : void;
	-    on_stop_clicked() : void;
	-    on_DOWN_clicked() : void;
	-    on_UP_clicked() : void;
	-    on_play_clicked() : void;
	-    on_back_clicked() : void;
	-    on_pageComboBox_currentIndexChanged(int index) : void;
	----------------------------------------------------------------------------------------------------------------
	// 選單視窗


	2.poker
	----------------------------------------------------------------------------------------------------------------
	-    myPoker : static int;
	-    oppoPoker : static int;
	----------------------------------------------------------------------------------------------------------------
	+    givePoker() : int;
	+    getpoker() : int;
	+    setpoker(int) : void;
	+    getOppOpoker() : int;
	+    setOppOpoker(int) : void;
	+    poker();
	----------------------------------------------------------------------------------------------------------------
	// 撲克牌牌組


	3. pokerthansize
	----------------------------------------------------------------------------------------------------------------
	-    ui : Ui::pokerThanSize*;
	----------------------------------------------------------------------------------------------------------------
	+    pokerThanSize(QWidget *parent = nullptr) : explicit;
	+    ~pokerThanSize();
	+    reset() : void;
	
	-    on_higer_clicked() : void;
	-    on_lower_clicked() : void;
	-    on_start_clicked() : void;
	-    on_pushButton_clicked() : void;
	----------------------------------------------------------------------------------------------------------------
	// 撲克牌 ( 比大小 )
	
	
	4. Booom
	----------------------------------------------------------------------------------------------------------------
	-    ui : Ui::Booom*;

	-    BoomSize : int;
	-    BoomMax : int;
	-    BoomMin : int;
	-    BoomEnd : int;
	-    play : int;
	-    playerType[4] : int;
	-    playName[4] : QString;
	----------------------------------------------------------------------------------------------------------------
	+    Booom(QWidget *parent = nullptr) : explicit;
	+    ~Booom();
	+    BoomReset() : void;
	+    GO(int) : void;

	-    on_BoomGOGO_clicked() : void;
	-    on_KeySet_clicked() : void;
	-    on_BoomKey_returnPressed() : void;
	-    on_BoomSizeKey_returnPressed() : void;
	-    on_BoomGOEND_clicked() : void;
	-    on_mod_1_valueChanged(int value) : void;
	-    on_mod_2_valueChanged(int value) : void;
	-    on_mod_3_valueChanged(int value) : void;
	-    on_mod_4_valueChanged(int value) : void;
	-    on_mod_s_valueChanged(int value) : void;
	-    on_CPUKey_clicked() : void;
	-    setBoomKeySize() : void;
	-    Boooom() : void;
	-    WIN() : win;
	-    nameSet(int, int) : void;
	----------------------------------------------------------------------------------------------------------------
	// 拆解炸彈
	
	
	5. Minesweeper
	----------------------------------------------------------------------------------------------------------------
	-    ui : Ui::Minesweeper*;
	----------------------------------------------------------------------------------------------------------------
	-    successCounter : int;
    	-    mines[5][10] : bool;
	----------------------------------------------------------------------------------------------------------------
	+    Minesweeper(QWidget *parent = nullptr) : explicit;
	+    ~Minesweeper();
	+    resetGame() : void;
	+    buttons(bool) : void;
	+    setMines() : void;
	+    check(int, int) : int;
	+    gameTrue(int, int) : void;
	+    win() : void;
	+    gameOver() : void;
	+    showMines() : void;
	
	-    on_pushButton_clicked() : void;
	-    on_showMinesButton_clicked() : void;
	-    on_p1_1_clicked() : void;
	-    on_p1_2_clicked() : void;
	-    on_p1_3_clicked() : void;
	-    on_p1_4_clicked() : void;
	-    on_p1_5_clicked() : void;
	-    on_p1_6_clicked() : void;
	-    on_p1_7_clicked() : void;
	-    on_p1_8_clicked() : void;
	-    on_p1_9_clicked() : void;
	-    on_p1_10_clicked() : void;
	-    on_p2_1_clicked() : void;
	-    on_p2_2_clicked() : void;
	-    on_p2_3_clicked() : void;
	-    on_p2_4_clicked() : void;
	-    on_p2_5_clicked() : void;
	-    on_p2_6_clicked() : void;
	-    on_p2_7_clicked() : void;
	-    on_p2_8_clicked() : void;
	-    on_p2_9_clicked() : void;
	-    on_p2_10_clicked() : void;
	-    on_p3_1_clicked() : void;
	-    on_p3_2_clicked() : void;
	-    on_p3_3_clicked() : void;
	-    on_p3_4_clicked() : void;
	-    on_p3_5_clicked() : void;
	-    on_p3_6_clicked() : void;
	-    on_p3_7_clicked() : void;
	-    on_p3_8_clicked() : void;
	-    on_p3_9_clicked() : void;
	-    on_p3_10_clicked() : void;
	-    on_p4_1_clicked() : void;
	-    on_p4_2_clicked() : void;
	-    on_p4_3_clicked() : void;
	-    on_p4_4_clicked() : void;
	-    on_p4_5_clicked() : void;
	-    on_p4_6_clicked() : void;
	-    on_p4_7_clicked() : void;
	-    on_p4_8_clicked() : void;
	-    on_p4_9_clicked() : void;
	-    on_p4_10_clicked() : void;
	-    on_p5_1_clicked() : void;
	-    on_p5_2_clicked() : void;
	-    on_p5_3_clicked() : void;
	-    on_p5_4_clicked() : void;
	-    on_p5_5_clicked() : void;
	-    on_p5_6_clicked() : void;
	-    on_p5_7_clicked() : void;
	-    on_p5_8_clicked() : void;
	-    on_p5_9_clicked() : void;
	-    on_p5_10_clicked() : void;
	----------------------------------------------------------------------------------------------------------------
	// 踩地雷
