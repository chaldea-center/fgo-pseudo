void __fastcall StaffCostumeSelectListViewItem___ctor(
        StaffCostumeSelectListViewItem_o *this,
        int32_t index,
        StaffPhotoCostumeEntity_o *costumeEntity,
        int32_t selectedCostumeIdx,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t idx; // w8

  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields._StaffPhotoCostumeEntity_k__BackingField = costumeEntity;
  v10 = sub_1C3B708(&this->fields._StaffPhotoCostumeEntity_k__BackingField);
  if ( !costumeEntity )
    sub_1C3B9C0(v10, v11);
  idx = costumeEntity->fields.idx;
  this->fields._PhotoCampaignAtlas_k__BackingField = photoCampaignAtlas;
  this->fields._IsSelected_k__BackingField = idx == selectedCostumeIdx;
  sub_1C3B708(&this->fields._PhotoCampaignAtlas_k__BackingField);
}


void __fastcall StaffCostumeSelectListViewItem__ModifyItem(
        StaffCostumeSelectListViewItem_o *this,
        int32_t selectedCostumeIdx,
        const MethodInfo *method)
{
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x8

  StaffPhotoCostumeEntity_k__BackingField = this->fields._StaffPhotoCostumeEntity_k__BackingField;
  if ( !StaffPhotoCostumeEntity_k__BackingField )
    sub_1C3B9C0(this, selectedCostumeIdx);
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
    sub_1C3B9C0(this, sort);
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