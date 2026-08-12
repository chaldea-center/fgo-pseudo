void ExRoomMissionRewardEffectState___ctor(
        ExRoomMissionRewardEffectState_o *this,
        GiftEntity_array *gifts,
        EventMissionEntity_o *sourceMission,
        GetSvts_array *getSvts,
        GetCommandCodes_array *getCommandCodes,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Gifts_k__BackingField = gifts;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)gifts, v11, v12, v13, v14, v15, v16);
  this->fields._SourceMission_k__BackingField = sourceMission;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SourceMission_k__BackingField,
    (int32_t)sourceMission,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._GetSvts_k__BackingField = getSvts;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GetSvts_k__BackingField,
    (int32_t)getSvts,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._GetCommandCodes_k__BackingField = getCommandCodes;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GetCommandCodes_k__BackingField,
    (int32_t)getCommandCodes,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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


GiftEntity_array *ExRoomMissionRewardEffectState__get_Gifts(
        ExRoomMissionRewardEffectState_o *this,
        const MethodInfo *method)
{
  return this->fields._Gifts_k__BackingField;
}


bool ExRoomMissionRewardEffectState__get_HasGifts(ExRoomMissionRewardEffectState_o *this, const MethodInfo *method)
{
  struct GiftEntity_array *Gifts_k__BackingField; // x8

  Gifts_k__BackingField = this->fields._Gifts_k__BackingField;
  return Gifts_k__BackingField && LODWORD(Gifts_k__BackingField->max_length) != 0;
}


bool ExRoomMissionRewardEffectState__get_IsChestEffect(
        ExRoomMissionRewardEffectState_o *this,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *SourceMission_k__BackingField; // x8

  SourceMission_k__BackingField = this->fields._SourceMission_k__BackingField;
  return SourceMission_k__BackingField && SourceMission_k__BackingField->fields.giftIconId > 0;
}


bool ExRoomMissionRewardEffectState__get_IsIntermediate(
        ExRoomMissionRewardEffectState_o *this,
        const MethodInfo *method)
{
  return this->fields._IsIntermediate_k__BackingField;
}


EventMissionEntity_o *ExRoomMissionRewardEffectState__get_SourceMission(
        ExRoomMissionRewardEffectState_o *this,
        const MethodInfo *method)
{
  return this->fields._SourceMission_k__BackingField;
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
  sub_2213A04(
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GetSvts_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionRewardEffectState__set_Gifts(
        ExRoomMissionRewardEffectState_o *this,
        GiftEntity_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Gifts_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionRewardEffectState__set_IsIntermediate(
        ExRoomMissionRewardEffectState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIntermediate_k__BackingField = value;
}


void ExRoomMissionRewardEffectState__set_SourceMission(
        ExRoomMissionRewardEffectState_o *this,
        EventMissionEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SourceMission_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SourceMission_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}