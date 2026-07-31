void EventTowerReward___ctor(EventTowerReward_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  *(_OWORD *)&this->fields.iconId = 0u;
  *(_OWORD *)&this->fields.limitCount = 0u;
  *(_OWORD *)&this->fields.eventId = 0u;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.voiceIds, 0, v3, v4, v5, v6, v7, v8);
}