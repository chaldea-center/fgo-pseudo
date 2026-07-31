void ExRoomMissionReceiveOutput___ctor(
        ExRoomMissionReceiveOutput_o *this,
        System_Int32_array *receivedMissionIds,
        bool isOverPresentBox,
        int32_t overflowType,
        GetSvts_array *getSvts,
        GetCommandCodes_array *getCommandCodes,
        const MethodInfo *method)
{
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ReceivedMissionIds_k__BackingField = receivedMissionIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)receivedMissionIds,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._IsOverPresentBox_k__BackingField = isOverPresentBox;
  this->fields._OverflowType_k__BackingField = overflowType;
  this->fields._GetSvts_k__BackingField = getSvts;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GetSvts_k__BackingField,
    (int32_t)getSvts,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._GetCommandCodes_k__BackingField = getCommandCodes;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GetCommandCodes_k__BackingField,
    (int32_t)getCommandCodes,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


GetCommandCodes_array *ExRoomMissionReceiveOutput__get_GetCommandCodes(
        ExRoomMissionReceiveOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._GetCommandCodes_k__BackingField;
}


GetSvts_array *ExRoomMissionReceiveOutput__get_GetSvts(ExRoomMissionReceiveOutput_o *this, const MethodInfo *method)
{
  return this->fields._GetSvts_k__BackingField;
}


bool ExRoomMissionReceiveOutput__get_IsOverPresentBox(ExRoomMissionReceiveOutput_o *this, const MethodInfo *method)
{
  return this->fields._IsOverPresentBox_k__BackingField;
}


int32_t ExRoomMissionReceiveOutput__get_OverflowType(ExRoomMissionReceiveOutput_o *this, const MethodInfo *method)
{
  return this->fields._OverflowType_k__BackingField;
}


System_Int32_array *ExRoomMissionReceiveOutput__get_ReceivedMissionIds(
        ExRoomMissionReceiveOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._ReceivedMissionIds_k__BackingField;
}


void ExRoomMissionReceiveOutput__set_GetCommandCodes(
        ExRoomMissionReceiveOutput_o *this,
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


void ExRoomMissionReceiveOutput__set_GetSvts(
        ExRoomMissionReceiveOutput_o *this,
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


void ExRoomMissionReceiveOutput__set_IsOverPresentBox(
        ExRoomMissionReceiveOutput_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsOverPresentBox_k__BackingField = value;
}


void ExRoomMissionReceiveOutput__set_OverflowType(
        ExRoomMissionReceiveOutput_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OverflowType_k__BackingField = value;
}


void ExRoomMissionReceiveOutput__set_ReceivedMissionIds(
        ExRoomMissionReceiveOutput_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ReceivedMissionIds_k__BackingField = value;
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