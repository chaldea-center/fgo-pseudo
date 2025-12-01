void EventTowerReward___ctor(EventTowerReward_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  *(_OWORD *)&this->fields.iconId = 0u;
  *(_OWORD *)&this->fields.limitCount = 0u;
  *(_OWORD *)&this->fields.eventId = 0u;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.voiceIds, 0, v3, v4, v5, v6, v7, v8);
}