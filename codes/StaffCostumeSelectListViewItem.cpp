void StaffCostumeSelectListViewItem___ctor(
        StaffCostumeSelectListViewItem_o *this,
        int32_t index,
        StaffPhotoCostumeEntity_o *costumeEntity,
        int32_t selectedCostumeIdx,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t idx; // w8
  struct UIAtlas_o **p_PhotoCampaignAtlas_k__BackingField; // x20

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields._StaffPhotoCostumeEntity_k__BackingField = costumeEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._StaffPhotoCostumeEntity_k__BackingField,
    (int32_t)costumeEntity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !costumeEntity )
    sub_2213CDC(v16, v17);
  idx = costumeEntity->fields.idx;
  this->fields._PhotoCampaignAtlas_k__BackingField = photoCampaignAtlas;
  p_PhotoCampaignAtlas_k__BackingField = &this->fields._PhotoCampaignAtlas_k__BackingField;
  *((_BYTE *)p_PhotoCampaignAtlas_k__BackingField - 8) = idx == selectedCostumeIdx;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_PhotoCampaignAtlas_k__BackingField,
    (int32_t)photoCampaignAtlas,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


// local variable allocation has failed, the output may be wrong!
void StaffCostumeSelectListViewItem__ModifyItem(
        StaffCostumeSelectListViewItem_o *this,
        int32_t selectedCostumeIdx,
        const MethodInfo *method)
{
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x8

  StaffPhotoCostumeEntity_k__BackingField = this->fields._StaffPhotoCostumeEntity_k__BackingField;
  if ( !StaffPhotoCostumeEntity_k__BackingField )
    sub_2213CDC(this, *(_QWORD *)&selectedCostumeIdx);
  this->fields._IsSelected_k__BackingField = StaffPhotoCostumeEntity_k__BackingField->fields.idx == selectedCostumeIdx;
}


bool StaffCostumeSelectListViewItem__SetSortValue(
        StaffCostumeSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x9
  bool result; // w0

  StaffPhotoCostumeEntity_k__BackingField = this->fields._StaffPhotoCostumeEntity_k__BackingField;
  if ( !StaffPhotoCostumeEntity_k__BackingField )
    sub_2213CDC(this, sort);
  result = 1;
  this->fields.sortValue1 = StaffPhotoCostumeEntity_k__BackingField->fields.dispOrder;
  return result;
}


bool StaffCostumeSelectListViewItem__get_IsSelected(StaffCostumeSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


UIAtlas_o *StaffCostumeSelectListViewItem__get_PhotoCampaignAtlas(
        StaffCostumeSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PhotoCampaignAtlas_k__BackingField;
}


StaffPhotoCostumeEntity_o *StaffCostumeSelectListViewItem__get_StaffPhotoCostumeEntity(
        StaffCostumeSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._StaffPhotoCostumeEntity_k__BackingField;
}


void StaffCostumeSelectListViewItem__set_IsSelected(
        StaffCostumeSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}