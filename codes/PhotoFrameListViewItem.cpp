void PhotoFrameListViewItem___ctor(
        PhotoFrameListViewItem_o *this,
        int32_t itemIndex,
        int32_t id,
        int32_t priority,
        System_String_o *thumbnailSpriteName,
        System_String_o *name,
        UIAtlas_o *atlas,
        int32_t selectedId,
        const MethodInfo *method)
{
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.index = itemIndex;
  this->fields._Id_k__BackingField = id;
  this->fields._ThumbnailSpriteName_k__BackingField = thumbnailSpriteName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ThumbnailSpriteName_k__BackingField,
    (int32_t)thumbnailSpriteName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields._Name_k__BackingField = name;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)name,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields._Atlas_k__BackingField = atlas;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._Atlas_k__BackingField,
    (int32_t)atlas,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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


System_String_o *PhotoFrameListViewItem__get_SpriteName(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


System_String_o *PhotoFrameListViewItem__get_ThumbnailSpriteName(
        PhotoFrameListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ThumbnailSpriteName_k__BackingField;
}


void PhotoFrameListViewItem__set_Atlas(PhotoFrameListViewItem_o *this, UIAtlas_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Atlas_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._Atlas_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PhotoFrameListViewItem__set_SpriteName(
        PhotoFrameListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SpriteName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PhotoFrameListViewItem__set_ThumbnailSpriteName(
        PhotoFrameListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ThumbnailSpriteName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ThumbnailSpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}