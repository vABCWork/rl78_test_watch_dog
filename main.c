#include   "iodefine.h"
#include   "misratypes.h"
#include   "delay.h"


// ���C������
// �E�I�b�`�h�b�N�^�C�} �J�E���g����
//  �I�[�o�t���[����= 118 [ms]
void main(void)
{	
	while(1){
		
		delay_msec(200);  	// 200msec�҂�
		
		//delay_msec(100);  	// 100msec�҂�
	
		WDTE = 0xac;		// �E�I�b�`�h�b�N�@�J�E���^�̃N���A
	}
}


