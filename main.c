#include   "iodefine.h"
#include   "misratypes.h"
#include   "delay.h"


// メイン処理
// ウオッチドックタイマ カウント許可
//  オーバフロー時間= 118 [ms]
void main(void)
{	
	while(1){
		
		delay_msec(200);  	// 200msec待つ
		
		//delay_msec(100);  	// 100msec待つ
	
		WDTE = 0xac;		// ウオッチドック　カウンタのクリア
	}
}


