void __fastcall EventTowerReward___ctor(EventTowerReward_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.iconId = 0u;
  *(_OWORD *)&this->fields.limitCount = 0u;
  *(_OWORD *)&this->fields.eventId = 0u;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.voiceIds, 0, v3, v4);
}