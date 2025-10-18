void GrandQuestFolderBoardItem___ctor(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0);
}


void GrandQuestFolderBoardItem___ctor_32889664(
        GrandQuestFolderBoardItem_o *this,
        int32_t index,
        int32_t bannerId,
        int32_t warId,
        System_String_o *boardName,
        int32_t iconId,
        int64_t listCreatedTime,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v13; // x24

  v13 = this;
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  v13->fields._Name_k__BackingField = boardName;
  v13 = (GrandQuestFolderBoardItem_o *)((char *)v13 + 128);
  LODWORD(v13[-1].fields._ListCreatedTime_k__BackingField) = bannerId;
  HIDWORD(v13[-1].fields._ListCreatedTime_k__BackingField) = warId;
  sub_1C36FFC(v13, boardName);
  LODWORD(v13->monitor) = iconId;
  *(_QWORD *)&v13->fields.selectNum = listCreatedTime;
}


int32_t GrandQuestFolderBoardItem__get_BannerId(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._BannerId_k__BackingField;
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