void GrandQuestFolderBoardItem___ctor(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0);
}


void GrandQuestFolderBoardItem___ctor_33124076(
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
  GrandQuestFolderBoardItem_o *v15; // x25
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  v15 = this;
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  v15->fields._BannerId_k__BackingField = bannerId;
  v15->fields._WarId_k__BackingField = warId;
  v15->fields._Name_k__BackingField = boardName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v15->fields._Name_k__BackingField,
    (int32_t)boardName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v15->fields._ClosedMessage_k__BackingField = closedMessage;
  v15 = (GrandQuestFolderBoardItem_o *)((char *)v15 + 152);
  LODWORD(v15[-1].fields._ListCreatedTime_k__BackingField) = iconId;
  v15[-1].fields._ClosedMessage_k__BackingField = (struct System_String_o *)listCreatedTime;
  sub_1C71354(v15, (int32_t)closedMessage, v22, v23, v24, v25, v26, v27);
}


int32_t GrandQuestFolderBoardItem__get_BannerId(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._BannerId_k__BackingField;
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