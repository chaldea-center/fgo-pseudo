void GrandQuestResourceContents___ctor(GrandQuestResourceContents_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestResourceContents__SetBoardUIAtlas(
        GrandQuestResourceContents_o *this,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)boardUiAtlasManagerUnit,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = value;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void GrandQuestResourceContents__set_GrandQuestFolderBoardPrefab(
        GrandQuestResourceContents_o *this,
        GrandQuestFolderBoardComponent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandQuestFolderBoardPrefab_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandQuestFolderBoardPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}