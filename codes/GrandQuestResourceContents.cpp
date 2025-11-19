void GrandQuestResourceContents___ctor(GrandQuestResourceContents_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestResourceContents__SetBoardUIAtlas(
        GrandQuestResourceContents_o *this,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        const MethodInfo *method)
{
  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1C6B9AC(&this->fields, boardUiAtlasManagerUnit);
}


AtlasManagerUnit_o *GrandQuestResourceContents__get_BoardUiAtlasManagerUnit(
        GrandQuestResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardUiAtlasManagerUnit_k__BackingField;
}


GrandQuestFolderBoardComponent_o *GrandQuestResourceContents__get_GrandQuestFolderBoardPrefab(
        GrandQuestResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandQuestFolderBoardPrefab_k__BackingField;
}


void GrandQuestResourceContents__set_BoardUiAtlasManagerUnit(
        GrandQuestResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  this->fields._BoardUiAtlasManagerUnit_k__BackingField = value;
  sub_1C6B9AC(&this->fields, value);
}


void GrandQuestResourceContents__set_GrandQuestFolderBoardPrefab(
        GrandQuestResourceContents_o *this,
        GrandQuestFolderBoardComponent_o *value,
        const MethodInfo *method)
{
  this->fields._GrandQuestFolderBoardPrefab_k__BackingField = value;
  sub_1C6B9AC(&this->fields._GrandQuestFolderBoardPrefab_k__BackingField, value);
}