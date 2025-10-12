void MasterEquipSettingListViewItem___ctor(
        MasterEquipSettingListViewItem_o *this,
        int32_t index,
        int32_t equipId,
        UnityEngine_Texture2D_o *equipTexture,
        int32_t selectedImageId,
        System_String_o *shortName,
        const MethodInfo *method)
{
  MasterEquipSettingListViewItem_o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v11 = this;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  v11->fields._EquipId_k__BackingField = equipId;
  v11->fields._EquipTexture_k__BackingField = equipTexture;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields._EquipTexture_k__BackingField, (int32_t)equipTexture, v12, v13);
  v11->fields._ShortName_k__BackingField = shortName;
  v11 = (MasterEquipSettingListViewItem_o *)((char *)v11 + 136);
  sub_1C32BC4((CGThumbnailListItem_o *)v11, (int32_t)shortName, v14, v15);
  LOBYTE(v11->monitor) = equipId == selectedImageId;
}


void MasterEquipSettingListViewItem__ModifyItem(
        MasterEquipSettingListViewItem_o *this,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = this->fields._EquipId_k__BackingField == selectedImageId;
}


void MasterEquipSettingListViewItem__ModifyItemTexture(
        MasterEquipSettingListViewItem_o *this,
        UnityEngine_Texture2D_o *texture,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EquipTexture_k__BackingField = texture;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._EquipTexture_k__BackingField,
    (int32_t)texture,
    (int32_t)method,
    v3);
}


bool MasterEquipSettingListViewItem__SetSortValue(
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


int32_t MasterEquipSettingListViewItem__get_EquipId(MasterEquipSettingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EquipId_k__BackingField;
}


UnityEngine_Texture2D_o *MasterEquipSettingListViewItem__get_EquipTexture(
        MasterEquipSettingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipTexture_k__BackingField;
}


bool MasterEquipSettingListViewItem__get_IsSelected(MasterEquipSettingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


System_String_o *MasterEquipSettingListViewItem__get_ShortName(
        MasterEquipSettingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ShortName_k__BackingField;
}


void MasterEquipSettingListViewItem__set_EquipTexture(
        MasterEquipSettingListViewItem_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EquipTexture_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._EquipTexture_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MasterEquipSettingListViewItem__set_IsSelected(
        MasterEquipSettingListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}