#include "ft_printf.h"
int main()
{
	int *a = L"🔥우와 이게 되네🥺\nGreek latter: Ελληνικό αλφάβητο\
			 \nArabic: لأَبْجَدِيَّة العَرَبِيَّة al-abjadīyah al-ʻarabīyah ค้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้้\n(ส็็็็็็็็็็็็็็็็็็็°□°)ส้้้้้้้้้้้้้\
			 \nKorean: 꺆 꺆 너무 쒼나 뷁뚫쉞궳\nGet Crazy: iœ♡☁︎☹︎♘*🔥♡\n";
	int *b = L"😜 Hello 👋 Unicode ‼️ ";
	int idx;

	idx = 0;
	while (a[idx])
	{
		ft_putchar_utf_fd(a[idx], 1);
		idx++;
	}
	idx = 0;
	while (b[idx])
	{
		ft_putchar_utf_fd(b[idx], 1);
		idx++;
	}
	ft_putchar_utf_fd(L'🤪', 1);
}
