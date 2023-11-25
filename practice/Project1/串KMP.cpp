#include <stdio.h>
#include <string.h>

typedef char* SString;
//�����Ա�
//S abcabaaabaabcac
//T abaabcac
//Ϊʲô��1λ�ÿ�ʼ�Ƚϣ���Ϊ0��λ�ô������ַ����ĳ���
int Index(SString S, SString T)
{
	int i = 1, j = 1;
	while (i <= S[0] && j <= T[0])//S[0]���ֶγ���
	{
		if (S[i] == T[j])
		{
			++i, ++j;//�����ȽϺ����ַ�
		}
		else
		{
			i = i - j + 2; j = 1;//ָ����˳����¿�ʼƥ��
		}
	}
	if (j > T[0])return i - T[0];//ƥ��ɹ�
	else return 0;
}

//i�α꣬����T
//KMP�㷨ͨ��get_next���nextֵ
void get_next(char T[], int next[])
{
	int i = 1;
	next[1] = 0;//��Ϊ��
	int j = 0;
	//abaabcac
	while (i < T[0])//T[0]�м�¼���ַ����ĳ���
	{
		if (j == 0 || T[i] == T[j])//j==0,˵���ٴλص��˿�ͷ
		{
			++i; ++j;
			next[i] = j;//��¼�����ظ���λ��
		}
		else
		{
			j = next[j];//����ͬ���Ҹ�λ�����±Ƚ�
		}
	}
}

//S abcabaaabaabcac
//T abaabcac
//KMP�㷨
int KMP(char S[], char T[], int next[], int pos)
{
	int i = pos;//��ʼ���ҵ���ʼλ��
	int j = 1;
	while (i <= S[0] && j <= T[0])
	{
		if (j == 0 || S[i] == T[0])
		{
			if (j == 0 || S[i] == T[j])//��ȸ�����Ӽӣ�������
			{
				++i;
				++j;
			}
			else//���ȣ����˻�next[j]��λ��
			{
				j = next[j];
			}
		}
	}
	if (j > T[0])//˵���Աȳɹ�
	{
		return i - T[0];
	}
	else
	{
		return 0;
	}
}

int main()
{
	char S[256];
	char T[10];
	int next[10];
	int pos;
	S[0] = strlen("abcabaaabaabcac");//strlen���ж��ٸ��ַ�
	strcpy(S + 1, "abcabaaabaabcac");
	T[0] = strlen("abaabcac");
	strcpy(T + 1, "abaabcac");
	pos = Index(S, T);//����ƥ��
	if (pos)
	{
		printf("ƥ��ɹ���λ��Ϊ��%d\n", pos);
	}
	else
	{
		printf("δƥ�䵽\n");
	}
	get_next(T, next);//���next����
	pos = KMP(S, T, next, 1);
	if (pos)
	{
		printf("ƥ��ɹ���λ��Ϊ��%d\n", pos);
	}
	else
	{
		printf("δƥ�䵽\n");
	}
	return 0;
}