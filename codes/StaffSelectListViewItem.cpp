void __fastcall StaffSelectListViewItem___ctor(
        StaffSelectListViewItem_o *this,
        int32_t index,
        StaffPhotoEntity_o *entity,
        int32_t selectStaffPhotoId,
        int32_t selectedStaffPhotoId,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o **p_StaffPhotoEntity_k__BackingField; // x24
  StaffPhotoEntity_o *v13; // x0
  __int64 v14; // x1
  int32_t id; // w8
  bool v16; // w8
  struct UIAtlas_o **p_PhotoCampaignAtlas_k__BackingField; // x20

  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields._StaffPhotoEntity_k__BackingField = entity;
  p_StaffPhotoEntity_k__BackingField = &this->fields._StaffPhotoEntity_k__BackingField;
  v13 = (StaffPhotoEntity_o *)sub_1C3B708(&this->fields._StaffPhotoEntity_k__BackingField);
  if ( !entity )
    goto LABEL_7;
  id = entity->fields.id;
  this->fields._IsSelected_k__BackingField = id == selectStaffPhotoId;
  if ( id != selectedStaffPhotoId )
  {
    v16 = 0;
    goto LABEL_6;
  }
  v13 = *p_StaffPhotoEntity_k__BackingField;
  if ( !*p_StaffPhotoEntity_k__BackingField )
LABEL_7:
    sub_1C3B9C0(v13, v14);
  v16 = !StaffPhotoEntity__IsEnableSameSet(v13, 0LL);
LABEL_6:
  this->fields._PhotoCampaignAtlas_k__BackingField = photoCampaignAtlas;
  p_PhotoCampaignAtlas_k__BackingField = &this->fields._PhotoCampaignAtlas_k__BackingField;
  *((_BYTE *)p_PhotoCampaignAtlas_k__BackingField - 7) = v16;
  sub_1C3B708(p_PhotoCampaignAtlas_k__BackingField);
}


void __fastcall StaffSelectListViewItem__ModifyItem(
        StaffSelectListViewItem_o *this,
        int32_t selectStaffPhotoId,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8

  StaffPhotoEntity_k__BackingField = this->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    sub_1C3B9C0(this, selectStaffPhotoId);
  this->fields._IsSelected_k__BackingField = StaffPhotoEntity_k__BackingField->fields.id == selectStaffPhotoId;
}


bool __fastcall StaffSelectListViewItem__SetSortValue(
        StaffSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x9
  bool result; // w0

  StaffPhotoEntity_k__BackingField = this->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    sub_1C3B9C0(this, sort);
  result = 1;
  this->fields.sortValue1 = StaffPhotoEntity_k__BackingField->fields.dispOrder;
  return result;
}


bool __fastcall StaffSelectListViewItem__get_IsNotSelect(StaffSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsNotSelect_k__BackingField;
}


bool __fastcall StaffSelectListViewItem__get_IsSelected(StaffSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


UIAtlas_o *__fastcall StaffSelectListViewItem__get_PhotoCampaignAtlas(
        StaffSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PhotoCampaignAtlas_k__BackingField;
}


StaffPhotoEntity_o *__fastcall StaffSelectListViewItem__get_StaffPhotoEntity(
        StaffSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._StaffPhotoEntity_k__BackingField;
}


void __fastcall StaffSelectListViewItem__set_IsSelected(
        StaffSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}