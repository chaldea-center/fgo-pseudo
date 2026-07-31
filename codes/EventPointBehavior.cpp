void EventPointBehavior___ctor(EventPointBehavior_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v2; // x19
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  v2 = (MissionNaviTransitionBoardItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v2->fields.sortValue1 = 0;
  v2 = (MissionNaviTransitionBoardItem_o *)((char *)v2 + 48);
  v2[-1].fields._ClosedMessage_k__BackingField = 0;
  v2[-1].fields._NaviAction_k__BackingField = 0;
  *(_QWORD *)&v2[-1].fields._QuestId_k__BackingField = 0;
  v2[-1].fields._BoardType_k__BackingField = 0;
  sub_21FFBF4(v2, 0, v3, v4, v5, v6, v7, v8);
}