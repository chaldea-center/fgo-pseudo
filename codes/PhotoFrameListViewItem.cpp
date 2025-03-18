void __fastcall PhotoFrameListViewItem___ctor(
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
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.index = itemIndex;
  this->fields._Id_k__BackingField = id;
  this->fields._Priority_k__BackingField = priority;
  this->fields._SpriteName_k__BackingField = spriteName;
  sub_1C3B708(&this->fields._SpriteName_k__BackingField);
  this->fields._Name_k__BackingField = name;
  sub_1C3B708(&this->fields._Name_k__BackingField);
  this->fields._Atlas_k__BackingField = atlas;
  sub_1C3B708(&this->fields._Atlas_k__BackingField);
  this->fields._IsSelected_k__BackingField = this->fields._Id_k__BackingField == selectedId;
}


void __fastcall PhotoFrameListViewItem__SetSelectingItem(
        PhotoFrameListViewItem_o *this,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = this->fields._Id_k__BackingField == selectedImageId;
}


UIAtlas_o *__fastcall PhotoFrameListViewItem__get_Atlas(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Atlas_k__BackingField;
}


int32_t __fastcall PhotoFrameListViewItem__get_Id(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Id_k__BackingField;
}


bool __fastcall PhotoFrameListViewItem__get_IsSelected(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


System_String_o *__fastcall PhotoFrameListViewItem__get_Name(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t __fastcall PhotoFrameListViewItem__get_Priority(PhotoFrameListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Priority_k__BackingField;
}


System_String_o *__fastcall PhotoFrameListViewItem__get_SpriteName(
        PhotoFrameListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


void __fastcall PhotoFrameListViewItem__set_Atlas(
        PhotoFrameListViewItem_o *this,
        UIAtlas_o *value,
        const MethodInfo *method)
{
  this->fields._Atlas_k__BackingField = value;
  sub_1C3B708(&this->fields._Atlas_k__BackingField);
}


void __fastcall PhotoFrameListViewItem__set_Id(PhotoFrameListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Id_k__BackingField = value;
}


void __fastcall PhotoFrameListViewItem__set_IsSelected(
        PhotoFrameListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}


void __fastcall PhotoFrameListViewItem__set_Name(
        PhotoFrameListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Name_k__BackingField = value;
  sub_1C3B708(&this->fields._Name_k__BackingField);
}


void __fastcall PhotoFrameListViewItem__set_Priority(
        PhotoFrameListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Priority_k__BackingField = value;
}


void __fastcall PhotoFrameListViewItem__set_SpriteName(
        PhotoFrameListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._SpriteName_k__BackingField = value;
  sub_1C3B708(&this->fields._SpriteName_k__BackingField);
}