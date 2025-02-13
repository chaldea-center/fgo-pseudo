void __fastcall StoryGachaAdjustData___ctor(StoryGachaAdjustData_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetEntity = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.adjustIds = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.adjustIds, 0LL, v9, v10, v11, v12, v13, v14);
}