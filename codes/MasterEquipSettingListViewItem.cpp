void __fastcall MasterEquipSettingListViewItem___ctor(
        MasterEquipSettingListViewItem_o *this,
        int32_t index,
        int32_t equipId,
        UnityEngine_Texture2D_o *equipTexture,
        int32_t selectedImageId,
        System_String_o *shortName,
        const MethodInfo *method)
{
  MasterEquipSettingListViewItem_o *v11; // x23

  v11 = this;
  ListViewItem___ctor_40760684((ListViewItem_o *)this, index, 0LL);
  v11->fields._EquipId_k__BackingField = equipId;
  v11->fields._EquipTexture_k__BackingField = equipTexture;
  sub_1B8FFB4(&v11->fields._EquipTexture_k__BackingField);
  v11->fields._ShortName_k__BackingField = shortName;
  v11 = (MasterEquipSettingListViewItem_o *)((char *)v11 + 128);
  sub_1B8FFB4(v11);
  LOBYTE(v11->monitor) = equipId == selectedImageId;
}


void __fastcall MasterEquipSettingListViewItem__ModifyItem(
        MasterEquipSettingListViewItem_o *this,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = this->fields._EquipId_k__BackingField == selectedImageId;
}


void __fastcall MasterEquipSettingListViewItem__ModifyItemTexture(
        MasterEquipSettingListViewItem_o *this,
        UnityEngine_Texture2D_o *texture,
        const MethodInfo *method)
{
  this->fields._EquipTexture_k__BackingField = texture;
  sub_1B8FFB4(&this->fields._EquipTexture_k__BackingField);
}


bool __fastcall MasterEquipSettingListViewItem__SetSortValue(
        MasterEquipSettingListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t index; // w9
  bool result; // w0

  index = this->fields.index;
  result = 1;
  this->fields.sortValue0 = -index;
  return result;
}


int32_t __fastcall MasterEquipSettingListViewItem__get_EquipId(
        MasterEquipSettingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipId_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall MasterEquipSettingListViewItem__get_EquipTexture(
        MasterEquipSettingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipTexture_k__BackingField;
}


bool __fastcall MasterEquipSettingListViewItem__get_IsSelected(
        MasterEquipSettingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


System_String_o *__fastcall MasterEquipSettingListViewItem__get_ShortName(
        MasterEquipSettingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ShortName_k__BackingField;
}


void __fastcall MasterEquipSettingListViewItem__set_EquipTexture(
        MasterEquipSettingListViewItem_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._EquipTexture_k__BackingField = value;
  sub_1B8FFB4(&this->fields._EquipTexture_k__BackingField);
}


void __fastcall MasterEquipSettingListViewItem__set_IsSelected(
        MasterEquipSettingListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}