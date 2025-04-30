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
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  this->fields._TabGroup_k__BackingField = tabGroup;
  this->fields._GroupIndex_k__BackingField = groupIndex;
  this->fields._BoardId_k__BackingField = boardId;
  this->fields._Atlas_k__BackingField = atlas;
  sub_1B8635C(&this->fields._Atlas_k__BackingField);
  this->fields._SpriteName_k__BackingField = spriteName;
  sub_1B8635C(&this->fields._SpriteName_k__BackingField);
  this->fields._BoardPrefab_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._BoardPrefab_k__BackingField);
}


void __fastcall RoadmapBoardListViewItem___ctor_30646320(
        RoadmapBoardListViewItem_o *this,
        int32_t index,
        int32_t tabGroup,
        int32_t groupIndex,
        int32_t boardId,
        UnityEngine_GameObject_o *boardPrefab,
        const MethodInfo *method)
{
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  this->fields._TabGroup_k__BackingField = tabGroup;
  this->fields._GroupIndex_k__BackingField = groupIndex;
  this->fields._BoardId_k__BackingField = boardId;
  this->fields._BoardPrefab_k__BackingField = boardPrefab;
  sub_1B8635C(&this->fields._BoardPrefab_k__BackingField);
  this->fields._Atlas_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._Atlas_k__BackingField);
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
  this->fields._Atlas_k__BackingField = value;
  sub_1B8635C(&this->fields._Atlas_k__BackingField);
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
  this->fields._BoardPrefab_k__BackingField = value;
  sub_1B8635C(&this->fields._BoardPrefab_k__BackingField);
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
  this->fields._SpriteName_k__BackingField = value;
  sub_1B8635C(&this->fields._SpriteName_k__BackingField);
}


void __fastcall RoadmapBoardListViewItem__set_TabGroup(
        RoadmapBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TabGroup_k__BackingField = value;
}