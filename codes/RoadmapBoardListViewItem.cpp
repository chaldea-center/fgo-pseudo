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
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields._TabGroup_k__BackingField = tabGroup;
  this->fields._GroupIndex_k__BackingField = groupIndex;
  this->fields._BoardId_k__BackingField = boardId;
  this->fields._Atlas_k__BackingField = atlas;
  sub_1C9403C(&this->fields._Atlas_k__BackingField, atlas);
  this->fields._SpriteName_k__BackingField = spriteName;
  sub_1C9403C(&this->fields._SpriteName_k__BackingField, spriteName);
  this->fields._BoardPrefab_k__BackingField = 0;
  sub_1C9403C(&this->fields._BoardPrefab_k__BackingField, 0);
}


void RoadmapBoardListViewItem___ctor_32716600(
        RoadmapBoardListViewItem_o *this,
        int32_t index,
        int32_t tabGroup,
        int32_t groupIndex,
        int32_t boardId,
        UnityEngine_GameObject_o *boardPrefab,
        const MethodInfo *method)
{
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields._TabGroup_k__BackingField = tabGroup;
  this->fields._GroupIndex_k__BackingField = groupIndex;
  this->fields._BoardId_k__BackingField = boardId;
  this->fields._BoardPrefab_k__BackingField = boardPrefab;
  sub_1C9403C(&this->fields._BoardPrefab_k__BackingField, boardPrefab);
  this->fields._Atlas_k__BackingField = 0;
  sub_1C9403C(&this->fields._Atlas_k__BackingField, 0);
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
  this->fields._Atlas_k__BackingField = value;
  sub_1C9403C(&this->fields._Atlas_k__BackingField, value);
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
  this->fields._BoardPrefab_k__BackingField = value;
  sub_1C9403C(&this->fields._BoardPrefab_k__BackingField, value);
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
  this->fields._SpriteName_k__BackingField = value;
  sub_1C9403C(&this->fields._SpriteName_k__BackingField, value);
}


void RoadmapBoardListViewItem__set_TabGroup(RoadmapBoardListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TabGroup_k__BackingField = value;
}