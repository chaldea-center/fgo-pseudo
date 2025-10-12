void PhotoFrameListViewItem___ctor(
        PhotoFrameListViewItem_o *this,
        int32_t itemIndex,
        int32_t id,
        int32_t priority,
        System_String_o *spriteName,
        System_String_o *name,
        UIAtlas_o *atlas,
        int32_t selectedId,
        const MethodInfo *method)
{
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.index = itemIndex;
  this->fields._Id_k__BackingField = id;
  this->fields._Priority_k__BackingField = priority;
  this->fields._SpriteName_k__BackingField = spriteName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._SpriteName_k__BackingField, (int32_t)spriteName, v17, v18);
  this->fields._Name_k__BackingField = name;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)name, v19, v20);
  this->fields._Atlas_k__BackingField = atlas;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Atlas_k__BackingField, (int32_t)atlas, v21, v22);
  this->fields._IsSelected_k__BackingField = this->fields._Id_k__BackingField == selectedId;
}


void PhotoFrameListViewItem__SetSelectingItem(
        PhotoFrameListViewItem_o *this,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = this->fields._Id_k__BackingField == selectedImageId;
}


UIAtlas_o *PhotoFrameListViewItem__get_Atlas(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Atlas_k__BackingField;
}


int32_t PhotoFrameListViewItem__get_Id(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Id_k__BackingField;
}


bool PhotoFrameListViewItem__get_IsSelected(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


System_String_o *PhotoFrameListViewItem__get_Name(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t PhotoFrameListViewItem__get_Priority(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Priority_k__BackingField;
}


System_String_o *PhotoFrameListViewItem__get_SpriteName(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


void PhotoFrameListViewItem__set_Atlas(PhotoFrameListViewItem_o *this, UIAtlas_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Atlas_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Atlas_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PhotoFrameListViewItem__set_Id(PhotoFrameListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Id_k__BackingField = value;
}


void PhotoFrameListViewItem__set_IsSelected(PhotoFrameListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}


void PhotoFrameListViewItem__set_Name(PhotoFrameListViewItem_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PhotoFrameListViewItem__set_Priority(PhotoFrameListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Priority_k__BackingField = value;
}


void PhotoFrameListViewItem__set_SpriteName(
        PhotoFrameListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SpriteName_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._SpriteName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}