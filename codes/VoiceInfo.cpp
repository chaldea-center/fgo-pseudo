void __fastcall VoiceInfo___ctor(VoiceInfo_o *this, const MethodInfo *method)
{
  VoiceInfo_o *v2; // x19
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.isCanPlay = 0;
  v2->fields.overwriteName = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.overwriteName, 0LL, v3, v4, v5, v6, v7, v8);
  v2->fields.overwriteNameDefault = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.overwriteNameDefault, 0LL, v9, v10, v11, v12, v13, v14);
  v2->fields.servantVoiceConds = 0LL;
  v2 = (VoiceInfo_o *)((char *)v2 + 56);
  v2[-1].fields.servantVoiceConds = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)v2, 0LL, v15, v16, v17, v18, v19, v20);
}