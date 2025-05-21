void __fastcall GrandQuestResourceContents___ctor(GrandQuestResourceContents_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestResourceContents__SetBoardUIAtlas(
        GrandQuestResourceContents_o *this,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        const MethodInfo *method)
{
  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1BDB81C(&this->fields);
}


AtlasManagerUnit_o *__fastcall GrandQuestResourceContents__get_BoardUiAtlasManagerUnit(
        GrandQuestResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardUiAtlasManagerUnit_k__BackingField;
}


GrandQuestFolderBoardComponent_o *__fastcall GrandQuestResourceContents__get_GrandQuestFolderBoardPrefab(
        GrandQuestResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandQuestFolderBoardPrefab_k__BackingField;
}


void __fastcall GrandQuestResourceContents__set_BoardUiAtlasManagerUnit(
        GrandQuestResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  this->fields._BoardUiAtlasManagerUnit_k__BackingField = value;
  sub_1BDB81C(&this->fields);
}


void __fastcall GrandQuestResourceContents__set_GrandQuestFolderBoardPrefab(
        GrandQuestResourceContents_o *this,
        GrandQuestFolderBoardComponent_o *value,
        const MethodInfo *method)
{
  this->fields._GrandQuestFolderBoardPrefab_k__BackingField = value;
  sub_1BDB81C(&this->fields._GrandQuestFolderBoardPrefab_k__BackingField);
}