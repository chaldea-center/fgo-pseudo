void StaffCostumeSelectListViewItem___ctor(
        StaffCostumeSelectListViewItem_o *this,
        int32_t index,
        StaffPhotoCostumeEntity_o *costumeEntity,
        int32_t selectedCostumeIdx,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t idx; // w8

  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields._StaffPhotoCostumeEntity_k__BackingField = costumeEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._StaffPhotoCostumeEntity_k__BackingField,
    (int32_t)costumeEntity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !costumeEntity )
    sub_1C71608(v16, v17);
  idx = costumeEntity->fields.idx;
  this->fields._PhotoCampaignAtlas_k__BackingField = photoCampaignAtlas;
  this->fields._IsSelected_k__BackingField = idx == selectedCostumeIdx;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._PhotoCampaignAtlas_k__BackingField,
    (int32_t)photoCampaignAtlas,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void StaffCostumeSelectListViewItem__ModifyItem(
        StaffCostumeSelectListViewItem_o *this,
        int32_t selectedCostumeIdx,
        const MethodInfo *method)
{
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x8

  StaffPhotoCostumeEntity_k__BackingField = this->fields._StaffPhotoCostumeEntity_k__BackingField;
  if ( !StaffPhotoCostumeEntity_k__BackingField )
    sub_1C71608(this, selectedCostumeIdx);
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
    sub_1C71608(this, sort);
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