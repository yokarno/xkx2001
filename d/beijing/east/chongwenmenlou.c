//Cracked by Roath
// Room: /d/beijing/east/chongwenmenlou.c

inherit ROOM;

void create()
{
	set("short", "�����ų�¥");
	set("long", @LONG
���ǳ����ų����ϵ���¥��һ�Ӷ�׳�����سǾ���������
�����ֳִ󵶳�ì��ǿ�������������ע���ų��¹������ˣ�
���������ǳ����ı������ǽ��
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"chengqiang5",
  "down" : __DIR__"chongwenmen",
  "east" : __DIR__"chengqiang4",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}