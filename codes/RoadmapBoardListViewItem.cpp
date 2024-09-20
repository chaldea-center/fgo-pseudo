void __fastcall RoadmapBoardListViewItem___ctor(
        RoadmapBoardListViewItem_o *this,
        int32_t index,
        int32_t tabGroup,
        int32_t groupIndex,
        int32_t boardId,
        UIAtlas_o *atlas,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields._TabGroup_k__BackingField = tabGroup;
  this->fields._GroupIndex_k__BackingField = groupIndex;
  this->fields._BoardId_k__BackingField = boardId;
  this->fields._Atlas_k__BackingField = atlas;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Atlas_k__BackingField, (int32_t)atlas, v14, v15);
  this->fields._SpriteName_k__BackingField = spriteName;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)spriteName,
    v16,
    v17);
  this->fields._BoardPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._BoardPrefab_k__BackingField, 0, v18, v19);
}


void __fastcall RoadmapBoardListViewItem___ctor_45298420(
        RoadmapBoardListViewItem_o *this,
        int32_t index,
        int32_t tabGroup,
        int32_t groupIndex,
        int32_t boardId,
        UnityEngine_GameObject_o *boardPrefab,
        const MethodInfo *method)
{
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields._TabGroup_k__BackingField = tabGroup;
  this->fields._GroupIndex_k__BackingField = groupIndex;
  this->fields._BoardId_k__BackingField = boardId;
  this->fields._BoardPrefab_k__BackingField = boardPrefab;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._BoardPrefab_k__BackingField,
    (int32_t)boardPrefab,
    v12,
    v13);
  this->fields._Atlas_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Atlas_k__BackingField, 0, v14, v15);
}


UIAtlas_o *__fastcall RoadmapBoardListViewItem__get_Atlas(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Atlas_k__BackingField;
}


int32_t __fastcall RoadmapBoardListViewItem__get_BoardId(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._BoardId_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall RoadmapBoardListViewItem__get_BoardPrefab(
        RoadmapBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardPrefab_k__BackingField;
}


int32_t __fastcall RoadmapBoardListViewItem__get_GroupIndex(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._GroupIndex_k__BackingField;
}


System_String_o *__fastcall RoadmapBoardListViewItem__get_SpriteName(
        RoadmapBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


int32_t __fastcall RoadmapBoardListViewItem__get_TabGroup(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TabGroup_k__BackingField;
}


void __fastcall RoadmapBoardListViewItem__set_Atlas(
        RoadmapBoardListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Atlas_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Atlas_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RoadmapBoardListViewItem__set_BoardId(
        RoadmapBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BoardId_k__BackingField = value;
}


void __fastcall RoadmapBoardListViewItem__set_BoardPrefab(
        RoadmapBoardListViewItem_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._BoardPrefab_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._BoardPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RoadmapBoardListViewItem__set_GroupIndex(
        RoadmapBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GroupIndex_k__BackingField = value;
}


void __fastcall RoadmapBoardListViewItem__set_SpriteName(
        RoadmapBoardListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SpriteName_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RoadmapBoardListViewItem__set_TabGroup(
        RoadmapBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TabGroup_k__BackingField = value;
}