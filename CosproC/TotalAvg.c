#include<stdio.h>
#include<stdlib.h>

void main() {
	int arr[10]; //������ �� 10���� ���� �迭
	int i, sum;  //�ݺ� �� ��, ��
	double avg; //�Ǽ����� ���
	int len = sizeof(arr) / sizeof(int); //�迭�� ����
	//int len = sizeof(arr) / sizeof(arr[0]);
	//�Է�
	for (i = 0; i < len; i++) arr[i] = rand() % 101; // �������� 0 ~ (101-1)������ ���ڸ� arr[i] ��ġ�� �����Ѵ�.
	//��ҵ��� ���� ���ϱ�
	sum = 0;
	for (i = 0; i < len; i++) sum += arr[i]; //��� arr[i]�� ������ sum�� �־��ش�.
	avg = (double)sum / len; //avg�� �Ǽ����̹Ƿ� �������� sum�� ��������ȯ���� (double)�Ǽ������� ������� �� �迭�� ���̸�ŭ ������ ����� ���Ѵ�. 

	//���
	printf("�迭�� ���� %d\n", len);
	printf("�հ� : %d\n", sum);
	printf("��� : %.1f\n", avg); //�Ҽ��� �ڸ� 1�ڸ������� ��� -> .1���� ������ �Ҽ��� �ڸ� 6�ڸ����� �����. 
}