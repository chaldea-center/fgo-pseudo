void RoadmapBoardListViewItem___ctor(
        RoadmapBoardListViewItem_o *this,
        int32_t index,
        int32_t tabGroup,
        int32_t groupIndex,
        int32_t boardId,
        UIAtlas_o *atlas,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields._TabGroup_k__BackingField = tabGroup;
  this->fields._GroupIndex_k__BackingField = groupIndex;
  this->fields._BoardId_k__BackingField = boardId;
  this->fields._Atlas_k__BackingField = atlas;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Atlas_k__BackingField,
    (int32_t)atlas,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields._SpriteName_k__BackingField = spriteName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)spriteName,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields._BoardPrefab_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardPrefab_k__BackingField,
    0,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void RoadmapBoardListViewItem___ctor_38388212(
        RoadmapBoardListViewItem_o *this,
        int32_t index,
        int32_t tabGroup,
        int32_t groupIndex,
        int32_t boardId,
        UnityEngine_GameObject_o *boardPrefab,
        const MethodInfo *method)
{
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields._TabGroup_k__BackingField = tabGroup;
  this->fields._GroupIndex_k__BackingField = groupIndex;
  this->fields._BoardId_k__BackingField = boardId;
  this->fields._BoardPrefab_k__BackingField = boardPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardPrefab_k__BackingField,
    (int32_t)boardPrefab,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._Atlas_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._Atlas_k__BackingField, 0, v18, v19, v20, v21, v22, v23);
}


UIAtlas_o *RoadmapBoardListViewItem__get_Atlas(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Atlas_k__BackingField;
}


int32_t RoadmapBoardListViewItem__get_BoardId(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._BoardId_k__BackingField;
}


UnityEngine_GameObject_o *RoadmapBoardListViewItem__get_BoardPrefab(
        RoadmapBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardPrefab_k__BackingField;
}


int32_t RoadmapBoardListViewItem__get_GroupIndex(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._GroupIndex_k__BackingField;
}


System_String_o *RoadmapBoardListViewItem__get_SpriteName(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


int32_t RoadmapBoardListViewItem__get_TabGroup(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TabGroup_k__BackingField;
}


void RoadmapBoardListViewItem__set_Atlas(RoadmapBoardListViewItem_o *this, UIAtlas_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Atlas_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Atlas_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RoadmapBoardListViewItem__set_BoardId(RoadmapBoardListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._BoardId_k__BackingField = value;
}


void RoadmapBoardListViewItem__set_BoardPrefab(
        RoadmapBoardListViewItem_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BoardPrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RoadmapBoardListViewItem__set_GroupIndex(
        RoadmapBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GroupIndex_k__BackingField = value;
}


void RoadmapBoardListViewItem__set_SpriteName(
        RoadmapBoardListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SpriteName_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RoadmapBoardListViewItem__set_TabGroup(RoadmapBoardListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TabGroup_k__BackingField = value;
}