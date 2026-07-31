void CGThumbnailListItem___ctor(
        CGThumbnailListItem_o *this,
        int32_t itemIndex,
        int32_t id,
        int32_t priority,
        int32_t cgType,
        bool haveDifferenceCg,
        bool isOpened,
        System_String_o *thumbnailPath,
        const MethodInfo *method)
{
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields._ThumbnailSpritePath_k__BackingField = thumbnailPath;
  this->fields.index = itemIndex;
  this->fields._Id_k__BackingField = id;
  this->fields._Priority_k__BackingField = priority;
  this->fields._Type_k__BackingField = cgType;
  this->fields._HaveDifferenceCG_k__BackingField = haveDifferenceCg;
  this->fields._IsOpened_k__BackingField = isOpened;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ThumbnailSpritePath_k__BackingField,
    (int32_t)thumbnailPath,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


bool CGThumbnailListItem__SetSortValue(CGThumbnailListItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  bool Filter; // w21
  bool v8; // w0

  v5 = ListViewItem__SetSortValue((ListViewItem_o *)this, sort, 0);
  if ( !v5 )
    return 0;
  this->fields.sortValue1 = this->fields._Priority_k__BackingField;
  if ( !sort )
    sub_21FFECC(v5, v6);
  Filter = ListViewSort__GetFilter(sort, 101, 0);
  v8 = ListViewSort__GetFilter(sort, 100, 0);
  if ( Filter == v8 || Filter && this->fields._Type_k__BackingField == 1 )
    return 1;
  return v8 && this->fields._Type_k__BackingField == 2;
}


bool CGThumbnailListItem__get_HaveDifferenceCG(CGThumbnailListItem_o *this, const MethodInfo *method)
{
  return this->fields._HaveDifferenceCG_k__BackingField;
}


int32_t CGThumbnailListItem__get_Id(CGThumbnailListItem_o *this, const MethodInfo *method)
{
  return this->fields._Id_k__BackingField;
}


bool CGThumbnailListItem__get_IsOpened(CGThumbnailListItem_o *this, const MethodInfo *method)
{
  return this->fields._IsOpened_k__BackingField;
}


int32_t CGThumbnailListItem__get_Priority(CGThumbnailListItem_o *this, const MethodInfo *method)
{
  return this->fields._Priority_k__BackingField;
}


System_String_o *CGThumbnailListItem__get_ThumbnailSpritePath(CGThumbnailListItem_o *this, const MethodInfo *method)
{
  return this->fields._ThumbnailSpritePath_k__BackingField;
}


int32_t CGThumbnailListItem__get_Type(CGThumbnailListItem_o *this, const MethodInfo *method)
{
  return this->fields._Type_k__BackingField;
}


void CGThumbnailListItem__set_HaveDifferenceCG(CGThumbnailListItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._HaveDifferenceCG_k__BackingField = value;
}


void CGThumbnailListItem__set_Id(CGThumbnailListItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Id_k__BackingField = value;
}


void CGThumbnailListItem__set_IsOpened(CGThumbnailListItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsOpened_k__BackingField = value;
}


void CGThumbnailListItem__set_Priority(CGThumbnailListItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Priority_k__BackingField = value;
}


void CGThumbnailListItem__set_ThumbnailSpritePath(
        CGThumbnailListItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ThumbnailSpritePath_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ThumbnailSpritePath_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CGThumbnailListItem__set_Type(CGThumbnailListItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Type_k__BackingField = value;
}