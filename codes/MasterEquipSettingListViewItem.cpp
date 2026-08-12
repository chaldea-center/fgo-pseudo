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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  v11 = this;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v11->fields._EquipId_k__BackingField = equipId;
  v11->fields._EquipTexture_k__BackingField = equipTexture;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields._EquipTexture_k__BackingField,
    (int32_t)equipTexture,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v11->fields._ShortName_k__BackingField = shortName;
  v11 = (MasterEquipSettingListViewItem_o *)((char *)v11 + 136);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v11, (int32_t)shortName, v18, v19, v20, v21, v22, v23);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EquipTexture_k__BackingField = texture;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EquipTexture_k__BackingField,
    (int32_t)texture,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool MasterEquipSettingListViewItem__SetSortValue(
        MasterEquipSettingListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t index; // w9

  index = this->fields.index;
  this->fields.sortValue0 = -index;
  return 1;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EquipTexture_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EquipTexture_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MasterEquipSettingListViewItem__set_IsSelected(
        MasterEquipSettingListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}