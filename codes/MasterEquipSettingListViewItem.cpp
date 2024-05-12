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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v11 = this;
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  v11->fields._EquipId_k__BackingField = equipId;
  v11->fields._EquipTexture_k__BackingField = equipTexture;
  sub_B77560(
    (BattleServantConfConponent_o *)&v11->fields._EquipTexture_k__BackingField,
    (System_Int32_array **)equipTexture,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v11->fields._ShortName_k__BackingField = shortName;
  v11 = (MasterEquipSettingListViewItem_o *)((char *)v11 + 128);
  sub_B77560((BattleServantConfConponent_o *)v11, (System_Int32_array **)shortName, v18, v19, v20, v21, v22, v23);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EquipTexture_k__BackingField = texture;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._EquipTexture_k__BackingField,
    (System_Int32_array **)texture,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EquipTexture_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._EquipTexture_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MasterEquipSettingListViewItem__set_IsSelected(
        MasterEquipSettingListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}