void __fastcall EventTowerReward___ctor(EventTowerReward_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.iconId = 0u;
  *(_OWORD *)&this->fields.limitCount = 0u;
  *(_OWORD *)&this->fields.eventId = 0u;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.voiceIds, 0LL, v3, v4, v5, v6, v7, v8);
}