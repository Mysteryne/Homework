#include <stdio.h>

int main()
{
    int i = 0;
    int n[50] = { 0 };
    int g[50] = { 0 };
    for (i = 1; i <= 50; i++)
    {
        printf("�������%d��ѧ����ѧ�źͳɼ�\n", i);
        scanf("%d%d", &n[i - 1], &g[i - 1]);
    }
    printf("\n\n �ɼ�����80��ѧ����ѧ�źͳɼ�Ϊ\n \n");

    for (i = 1; i <= 50; i++)
    {
        if (g[i - 1] >= 80)
        {
            printf("ѧ��:%d   �ɼ�:%d\n", n[i - 1], g[i - 1]);
        }
    }
    return 0;
}



