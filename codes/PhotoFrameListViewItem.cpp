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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.index = itemIndex;
  this->fields._Id_k__BackingField = id;
  this->fields._Priority_k__BackingField = priority;
  this->fields._SpriteName_k__BackingField = spriteName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)spriteName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._Name_k__BackingField = name;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)name,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._Atlas_k__BackingField = atlas;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Atlas_k__BackingField,
    (int32_t)atlas,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Atlas_k__BackingField = value;
  sub_1C9403C(
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
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SpriteName_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}