void ExRoomMissionRewardEffectState___ctor(
        ExRoomMissionRewardEffectState_o *this,
        GiftEntity_array *rewardGifts,
        GetSvts_array *getSvts,
        GetCommandCodes_array *getCommandCodes,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._RewardGifts_k__BackingField = rewardGifts;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)rewardGifts, v9, v10, v11, v12, v13, v14);
  this->fields._GetSvts_k__BackingField = getSvts;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GetSvts_k__BackingField,
    (int32_t)getSvts,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._GetCommandCodes_k__BackingField = getCommandCodes;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GetCommandCodes_k__BackingField,
    (int32_t)getCommandCodes,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


GetCommandCodes_array *ExRoomMissionRewardEffectState__get_GetCommandCodes(
        ExRoomMissionRewardEffectState_o *this,
        const MethodInfo *method)
{
  return this->fields._GetCommandCodes_k__BackingField;
}


GetSvts_array *ExRoomMissionRewardEffectState__get_GetSvts(
        ExRoomMissionRewardEffectState_o *this,
        const MethodInfo *method)
{
  return this->fields._GetSvts_k__BackingField;
}


bool ExRoomMissionRewardEffectState__get_HasRewardEffects(
        ExRoomMissionRewardEffectState_o *this,
        const MethodInfo *method)
{
  struct GiftEntity_array *RewardGifts_k__BackingField; // x8

  RewardGifts_k__BackingField = this->fields._RewardGifts_k__BackingField;
  return RewardGifts_k__BackingField && LODWORD(RewardGifts_k__BackingField->max_length) != 0;
}


GiftEntity_array *ExRoomMissionRewardEffectState__get_RewardGifts(
        ExRoomMissionRewardEffectState_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardGifts_k__BackingField;
}


void ExRoomMissionRewardEffectState__set_GetCommandCodes(
        ExRoomMissionRewardEffectState_o *this,
        GetCommandCodes_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GetCommandCodes_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GetCommandCodes_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionRewardEffectState__set_GetSvts(
        ExRoomMissionRewardEffectState_o *this,
        GetSvts_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GetSvts_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GetSvts_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionRewardEffectState__set_RewardGifts(
        ExRoomMissionRewardEffectState_o *this,
        GiftEntity_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardGifts_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}