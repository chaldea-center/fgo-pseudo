void __fastcall EventPointBehavior___ctor(EventPointBehavior_o *this, const MethodInfo *method)
{
  EventPointBehavior_o *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.voiceIds = 0LL;
  v2 = (EventPointBehavior_o *)((char *)v2 + 48);
  *(_QWORD *)&v2[-1].fields.bgmId = 0LL;
  *(_QWORD *)&v2[-1].fields.limitCount = 0LL;
  *(_QWORD *)&v2[-1].fields.bgId = 0LL;
  LODWORD(v2[-1].fields.voiceIds) = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)v2, 0LL, v3, v4, v5, v6, v7, v8);
}