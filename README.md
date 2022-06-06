項目名稱：Mini-Games

成員 ：

B0247851 陳柏翔 (Leader)

B0222891 余俊昌

使用遊戲合集的形式
目前主要使用工具 : QT & Visual Studio

UML類圖

	1.MainWindow
	----------------------------------------------------------------------------------------------------------------
	-    ui : Ui::MainWindow*;
	-    pageNo : static int;
	-    pageMAX : static int;
	-    pokerThanSize : pokerThanSize;
	-    Booom : Booom;
	----------------------------------------------------------------------------------------------------------------
	+    MainWindow(QWidget *parent = nullptr);
	+    ~MainWindow();

	-    on_pokerThanSize_clicked();
	-    on_Booom_clicked();
	-    setPage(int);
	-    on_stop_clicked();
	-    on_DOWN_clicked();
	-    on_UP_clicked();
	-    on_play_clicked();
	-    on_back_clicked();
	-    on_pageComboBox_currentIndexChanged(int index);
	----------------------------------------------------------------------------------------------------------------
	// 選單視窗
	// 由 EnderBill 創建 ( .h & .cpp & .ui )


	2.poker
	----------------------------------------------------------------------------------------------------------------
	-    allPoker : static std::string[52];
	-    hasPoker : static bool[52];
	----------------------------------------------------------------------------------------------------------------
	+    givePoker() : int;
	+    resetPoker();

	-    poker();
	----------------------------------------------------------------------------------------------------------------
	// 撲克牌牌組標頭檔
	// 由 EnderBill 創建 ( .h & .cpp )


	3. pokerthansize ( 未移植完成 )
	----------------------------------------------------------------------------------------------------------------
	-    ui : Ui::pokerThanSize*;
	----------------------------------------------------------------------------------------------------------------
	+     pokerThanSize(QWidget *parent = nullptr) : explicit;
	+    ~pokerThanSize();
	----------------------------------------------------------------------------------------------------------------
	// 撲克牌 ( 比大小 )
	// 由 b0247753  創建 ( .h & .cpp & .ui )
	
	
	4. Booom
	----------------------------------------------------------------------------------------------------------------
	-    ui : Ui::Booom*;

	-    BoomSize : static int;
	-    BoomMax : static int;
	-    BoomMin : static int;
	-    BoomSec : static int;
	-    BoomEnd : static int;
	----------------------------------------------------------------------------------------------------------------
	+    Booom(QWidget *parent = nullptr) : explicit;
	+    ~Booom();
	+    BoomReset();

	-    on_BoomGOGO_clicked();
	-    on_KeySet_clicked();

	-    setBoomKeySize();
	-    Boooom();
	-    KeyIn(int);
	----------------------------------------------------------------------------------------------------------------
	// 拆解炸彈
	// 由 EnderBill 創建 ( .h & .cpp & .ui ))
