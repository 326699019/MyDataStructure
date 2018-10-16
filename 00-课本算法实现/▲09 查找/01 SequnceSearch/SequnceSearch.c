/***************************
 *                         *
 * �ļ���: ��09 ����       *
 *                         *
 * �ļ���: SequnceSearch.c *
 *                         *
 * ��  ��: 9.1             *
 *                         *
 ***************************/

//�ο����ӣ�https://www.cnblogs.com/kangjianwei101/p/5602313.html

#ifndef SEQUNCESEARCH_C
#define SEQUNCESEARCH_C

#include "SequnceSearch.h" 					//**��09 ����**//

/*�T�T�T�T�[
�U �㷨9.1�U 
�^�T�T�T�T*/
// ˳����ҹؼ���key��λ��
int Search_Seq(Table T, KeyType key)
{
	int i;
	
	T.elem[0].key = key;		// 0 λΪ�����ڣ�

	/* �����һ��Ԫ�ؿ�ʼ�����������ڱȽϣ����������ҳɹ��� */
	for(i=T.length; !EQ(T.elem[i].key, key); --i); // ��ѭ����

	return i;	//�Ҳ���ʱ������ 0��
}

#endif
