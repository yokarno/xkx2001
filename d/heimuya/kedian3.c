//Cracked by Roath
// Room: /d/heimuya/kedian3.c
// fear 1999/12/08 

inherit ROOM;

void create()
{
        set("short", "�͵��¥");
        set("long", @LONG
����һ��ܴ�Ŀͷ�������ʮ�ּ�ª����ǽ����ʮ
����Сľ�������ٿ��������¶��ԣ������Ӷ��Ǻ�����
�������������Ŵ��ǿյģ���������ŵ����˹�ȥ��
LONG
        );

//      set_light(0);
        set("sleep_room", "1");
        set("no_fight", "1");
        set("hotel",1);

        set("exits", ([
                "out" : __DIR__"kedian2",
        ]));

        set("cost", 1);
        setup();
}
/*
int valid_leave(object me, string dir)
{
        if ( dir == "out" ) me->delete_temp("rent_paid");

        return ::valid_leave(me, dir);
}

*/