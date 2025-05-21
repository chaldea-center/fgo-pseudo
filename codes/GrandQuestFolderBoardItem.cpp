void __fastcall GrandQuestFolderBoardItem___ctor(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall GrandQuestFolderBoardItem___ctor_31940684(
        GrandQuestFolderBoardItem_o *this,
        int32_t index,
        int32_t bannerId,
        int32_t warId,
        System_String_o *boardName,
        int32_t iconId,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v11; // x23

  v11 = this;
  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  v11->fields._Name_k__BackingField = boardName;
  v11 = (GrandQuestFolderBoardItem_o *)((char *)v11 + 120);
  v11[-1].fields._IconId_k__BackingField = bannerId;
  *(&v11[-1].fields._IconId_k__BackingField + 1) = warId;
  sub_1BDB81C(v11);
  LODWORD(v11->monitor) = iconId;
}


int32_t __fastcall GrandQuestFolderBoardItem__get_BannerId(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._BannerId_k__BackingField;
}


int32_t __fastcall GrandQuestFolderBoardItem__get_IconId(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._IconId_k__BackingField;
}


System_String_o *__fastcall GrandQuestFolderBoardItem__get_Name(
        GrandQuestFolderBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t __fastcall GrandQuestFolderBoardItem__get_WarId(GrandQuestFolderBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._WarId_k__BackingField;
}