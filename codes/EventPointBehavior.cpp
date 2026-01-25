void EventPointBehavior___ctor(EventPointBehavior_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  v2 = (GrandQuestFolderBoardItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v2->fields.sortValue1 = 0;
  v2 = (GrandQuestFolderBoardItem_o *)((char *)v2 + 48);
  *(_QWORD *)&v2[-1].fields._IconId_k__BackingField = 0;
  v2[-1].fields._ListCreatedTime_k__BackingField = 0;
  v2[-1].fields._Name_k__BackingField = 0;
  LODWORD(v2[-1].fields._ClosedMessage_k__BackingField) = 0;
  sub_1C7BA8C(v2, 0, v3, v4, v5, v6, v7, v8);
}