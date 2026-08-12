void GrandQuestFolderBoardItem___ctor(
        GrandQuestFolderBoardItem_o *this,
        int32_t index,
        int32_t bannerId,
        int32_t warId,
        System_String_o *boardName,
        int32_t iconId,
        int64_t listCreatedTime,
        System_String_o *closedMessage,
        const MethodInfo *method)
{
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

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields._WarId_k__BackingField = warId;
  this->fields._Name_k__BackingField = boardName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)boardName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._ClosedMessage_k__BackingField = closedMessage;
  this->fields._IconId_k__BackingField = iconId;
  this->fields._ListCreatedTime_k__BackingField = listCreatedTime;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)closedMessage,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


System_String_o *GrandQuestFolderBoardItem__get_ClosedMessage(
        GrandQuestFolderBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ClosedMessage_k__BackingField;
}


int32_t GrandQuestFolderBoardItem__get_IconId(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._IconId_k__BackingField;
}


int64_t GrandQuestFolderBoardItem__get_ListCreatedTime(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._ListCreatedTime_k__BackingField;
}


System_String_o *GrandQuestFolderBoardItem__get_Name(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t GrandQuestFolderBoardItem__get_WarId(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._WarId_k__BackingField;
}