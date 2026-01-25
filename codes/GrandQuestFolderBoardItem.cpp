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
  GrandQuestFolderBoardItem_o *v14; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  v14 = this;
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  v14->fields._WarId_k__BackingField = warId;
  v14->fields._Name_k__BackingField = boardName;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v14->fields._Name_k__BackingField,
    (int32_t)boardName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v14->fields._ClosedMessage_k__BackingField = closedMessage;
  v14 = (GrandQuestFolderBoardItem_o *)((char *)v14 + 152);
  LODWORD(v14[-1].fields._ListCreatedTime_k__BackingField) = iconId;
  v14[-1].fields._ClosedMessage_k__BackingField = (struct System_String_o *)listCreatedTime;
  sub_1C7BA8C(v14, (int32_t)closedMessage, v21, v22, v23, v24, v25, v26);
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