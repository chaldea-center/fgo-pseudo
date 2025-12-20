void EventDailyPoint___ctor(EventDailyPoint_o *this, const MethodInfo *method)
{
  EventDailyPoint_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v2->fields.eventPointBehavior = 0;
  v2 = (EventDailyPoint_o *)((char *)v2 + 24);
  LODWORD(v2[-1].fields.eventPointBehavior) = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v2, 0, v3, v4, v5, v6, v7, v8);
}