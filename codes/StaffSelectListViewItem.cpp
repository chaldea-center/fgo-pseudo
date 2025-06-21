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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  StaffPhotoEntity_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t id; // w8
  bool v20; // w8
  struct UIAtlas_o **p_PhotoCampaignAtlas_k__BackingField; // x20

  ListViewItem___ctor_42932312((ListViewItem_o *)this, index, 0LL);
  this->fields._StaffPhotoEntity_k__BackingField = entity;
  p_StaffPhotoEntity_k__BackingField = &this->fields._StaffPhotoEntity_k__BackingField;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._StaffPhotoEntity_k__BackingField, (int32_t)entity, v13, v14);
  if ( !entity )
    goto LABEL_7;
  id = entity->fields.id;
  this->fields._IsSelected_k__BackingField = id == selectStaffPhotoId;
  if ( id != selectedStaffPhotoId )
  {
    v20 = 0;
    goto LABEL_6;
  }
  v15 = *p_StaffPhotoEntity_k__BackingField;
  if ( !*p_StaffPhotoEntity_k__BackingField )
LABEL_7:
    sub_1BCB254(v15, v16);
  v20 = !StaffPhotoEntity__IsEnableSameSet(v15, 0LL);
LABEL_6:
  this->fields._PhotoCampaignAtlas_k__BackingField = photoCampaignAtlas;
  p_PhotoCampaignAtlas_k__BackingField = &this->fields._PhotoCampaignAtlas_k__BackingField;
  *((_BYTE *)p_PhotoCampaignAtlas_k__BackingField - 7) = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_PhotoCampaignAtlas_k__BackingField, (int32_t)photoCampaignAtlas, v17, v18);
}


void __fastcall StaffSelectListViewItem__ModifyItem(
        StaffSelectListViewItem_o *this,
        int32_t selectStaffPhotoId,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8

  StaffPhotoEntity_k__BackingField = this->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    sub_1BCB254(this, selectStaffPhotoId);
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
    sub_1BCB254(this, sort);
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