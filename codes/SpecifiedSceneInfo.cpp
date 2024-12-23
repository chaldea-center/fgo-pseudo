void __fastcall SpecifiedSceneInfo___ctor(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  v2 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields._normalFollowerInfo = 0LL;
  v2 = (PartyOrganizationUtility_o *)((char *)v2 + 24);
  *(_QWORD *)&v2[-1].fields._IsQuestStartMenuMode_k__BackingField = 0LL;
  sub_1BE4A70(v2, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall SpecifiedSceneInfo__InitParameter(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_array **p_nextSceneParam; // x0

  this->fields.nextSceneParam = 0LL;
  p_nextSceneParam = &this->fields.nextSceneParam;
  *(p_nextSceneParam - 1) = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_nextSceneParam, 0LL, v2, v3, v4, v5, v6, v7);
}