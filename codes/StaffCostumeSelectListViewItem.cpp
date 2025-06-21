void __fastcall StaffCostumeSelectListViewItem___ctor(
        StaffCostumeSelectListViewItem_o *this,
        int32_t index,
        StaffPhotoCostumeEntity_o *costumeEntity,
        int32_t selectedCostumeIdx,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t idx; // w8

  ListViewItem___ctor_42932312((ListViewItem_o *)this, index, 0LL);
  this->fields._StaffPhotoCostumeEntity_k__BackingField = costumeEntity;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._StaffPhotoCostumeEntity_k__BackingField,
    (int32_t)costumeEntity,
    v10,
    v11);
  if ( !costumeEntity )
    sub_1BCB254(v12, v13);
  idx = costumeEntity->fields.idx;
  this->fields._PhotoCampaignAtlas_k__BackingField = photoCampaignAtlas;
  this->fields._IsSelected_k__BackingField = idx == selectedCostumeIdx;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._PhotoCampaignAtlas_k__BackingField,
    (int32_t)photoCampaignAtlas,
    v14,
    v15);
}


void __fastcall StaffCostumeSelectListViewItem__ModifyItem(
        StaffCostumeSelectListViewItem_o *this,
        int32_t selectedCostumeIdx,
        const MethodInfo *method)
{
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x8

  StaffPhotoCostumeEntity_k__BackingField = this->fields._StaffPhotoCostumeEntity_k__BackingField;
  if ( !StaffPhotoCostumeEntity_k__BackingField )
    sub_1BCB254(this, selectedCostumeIdx);
  this->fields._IsSelected_k__BackingField = StaffPhotoCostumeEntity_k__BackingField->fields.idx == selectedCostumeIdx;
}


bool __fastcall StaffCostumeSelectListViewItem__SetSortValue(
        StaffCostumeSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x9
  bool result; // w0

  StaffPhotoCostumeEntity_k__BackingField = this->fields._StaffPhotoCostumeEntity_k__BackingField;
  if ( !StaffPhotoCostumeEntity_k__BackingField )
    sub_1BCB254(this, sort);
  result = 1;
  this->fields.sortValue1 = StaffPhotoCostumeEntity_k__BackingField->fields.dispOrder;
  return result;
}


bool __fastcall StaffCostumeSelectListViewItem__get_IsSelected(
        StaffCostumeSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


UIAtlas_o *__fastcall StaffCostumeSelectListViewItem__get_PhotoCampaignAtlas(
        StaffCostumeSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PhotoCampaignAtlas_k__BackingField;
}


StaffPhotoCostumeEntity_o *__fastcall StaffCostumeSelectListViewItem__get_StaffPhotoCostumeEntity(
        StaffCostumeSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._StaffPhotoCostumeEntity_k__BackingField;
}


void __fastcall StaffCostumeSelectListViewItem__set_IsSelected(
        StaffCostumeSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}