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
  RoadmapBoardListViewItem_o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  v13 = this;
  ListViewItem___ctor_40375592((ListViewItem_o *)this, index, 0LL);
  v13->fields._TabGroup_k__BackingField = tabGroup;
  v13->fields._GroupIndex_k__BackingField = groupIndex;
  v13->fields._BoardId_k__BackingField = boardId;
  v13->fields._Atlas_k__BackingField = atlas;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v13->fields._Atlas_k__BackingField, (int32_t)atlas, v14, v15);
  v13->fields._SpriteName_k__BackingField = spriteName;
  v13 = (RoadmapBoardListViewItem_o *)((char *)v13 + 136);
  sub_1B64814((ServantStatusBattleListViewItem_o *)v13, (int32_t)spriteName, v16, v17);
  LOBYTE(v13->monitor) = 0;
}


void __fastcall RoadmapBoardListViewItem___ctor_45024088(
        RoadmapBoardListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ListViewItem___ctor_40375592((ListViewItem_o *)this, index, 0LL);
  this->fields._IsDisplayUnimplementedLabel_k__BackingField = 1;
}


UIAtlas_o *__fastcall RoadmapBoardListViewItem__get_Atlas(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Atlas_k__BackingField;
}


int32_t __fastcall RoadmapBoardListViewItem__get_BoardId(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._BoardId_k__BackingField;
}


int32_t __fastcall RoadmapBoardListViewItem__get_GroupIndex(RoadmapBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._GroupIndex_k__BackingField;
}


bool __fastcall RoadmapBoardListViewItem__get_IsDisplayUnimplementedLabel(
        RoadmapBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayUnimplementedLabel_k__BackingField;
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
  sub_1B64814(
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


void __fastcall RoadmapBoardListViewItem__set_GroupIndex(
        RoadmapBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GroupIndex_k__BackingField = value;
}


void __fastcall RoadmapBoardListViewItem__set_IsDisplayUnimplementedLabel(
        RoadmapBoardListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDisplayUnimplementedLabel_k__BackingField = value;
}


void __fastcall RoadmapBoardListViewItem__set_SpriteName(
        RoadmapBoardListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SpriteName_k__BackingField = value;
  sub_1B64814(
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