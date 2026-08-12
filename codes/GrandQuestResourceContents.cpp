void GrandQuestResourceContents___ctor(GrandQuestResourceContents_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestResourceContents__SetBoardUIAtlas(
        GrandQuestResourceContents_o *this,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)boardUiAtlasManagerUnit,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = value;
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


void GrandQuestResourceContents__set_GrandQuestFolderBoardPrefab(
        GrandQuestResourceContents_o *this,
        GrandQuestFolderBoardComponent_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandQuestFolderBoardPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandQuestFolderBoardPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}