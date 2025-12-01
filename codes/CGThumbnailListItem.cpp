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
  CGThumbnailListItem_o *v16; // x26
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  v16 = this;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v16->fields._ThumbnailSpritePath_k__BackingField = thumbnailPath;
  v16 = (CGThumbnailListItem_o *)((char *)v16 + 136);
  v16[-1].fields.loopIndex = itemIndex;
  v16[-1].fields._Type_k__BackingField = id;
  *(_DWORD *)&v16[-1].fields._HaveDifferenceCG_k__BackingField = priority;
  LODWORD(v16[-1].fields._ThumbnailSpritePath_k__BackingField) = cgType;
  BYTE4(v16[-1].fields._ThumbnailSpritePath_k__BackingField) = haveDifferenceCg;
  BYTE5(v16[-1].fields._ThumbnailSpritePath_k__BackingField) = isOpened;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v16, (int32_t)thumbnailPath, v17, v18, v19, v20, v21, v22);
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
    sub_1C71608(v5, v6);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ThumbnailSpritePath_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ThumbnailSpritePath_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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