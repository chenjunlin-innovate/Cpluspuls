#include<iostream>
#include<vector>
using namespace std;
int main() {
	int m, n, x(0), k(0),win;
	cout << "�����������Ϸ����������Ϸ��������Ϊ����:";
	while (cin >> n) {
		if (n <= 1) {
			cout << "����������" << endl;
		}
		else break;
	}


	vector<bool> people(n, 1);
	cout << "�����뱾����������:";

	//���㲿�֣����㱾�ֳ��ֵ���
	while (cin >> m) {//���뱾������Ҫ�����Ĵ���
		while ( m > 0) {
			if (people[x] != 0) {
				m--;
				if (m == 0)people[x] = 0;
				x++;//�´α�����ʼ����
				//if (x >= n)x = x - n;//�ô�������ѭ��
			}
			else {
				x++;
				//if (x >= n)x = x - n;
			}
			x = x%n;//�������������
		}
		k++;//������


		//������֡�������ֱ������
		cout << "��Ϸʣ�������: "<< n - k<<endl;
		for (int l = 0; l < n; l++) {
			if (people[l] == 0) {
				cout << "���" << l + 1 << "�ѳ���" << endl;
			}
			else {
				cout << "���" << l + 1<< "������Ϸ��" << endl;
				win = l + 1;
			}
		}
		if ((n - k) == 1) {
			cout << "���"<< win <<"��ʤ" << endl;
			break;
		}
	}
	return 0;
}