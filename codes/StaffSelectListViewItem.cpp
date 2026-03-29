void StaffSelectListViewItem___ctor(
        StaffSelectListViewItem_o *this,
        int32_t index,
        StaffPhotoEntity_o *entity,
        int32_t selectStaffPhotoId,
        int32_t selectedStaffPhotoId,
        int32_t selectedSvtId,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o **p_StaffPhotoEntity_k__BackingField; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  StaffPhotoEntity_o *v21; // x0
  __int64 v22; // x1
  int32_t id; // w8
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  bool IsRestrictionSvt; // w0
  struct UIAtlas_o **p_PhotoCampaignAtlas_k__BackingField; // x20

  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields._StaffPhotoEntity_k__BackingField = entity;
  p_StaffPhotoEntity_k__BackingField = &this->fields._StaffPhotoEntity_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._StaffPhotoEntity_k__BackingField,
    (int32_t)entity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !entity )
    goto LABEL_9;
  id = entity->fields.id;
  this->fields._IsSelected_k__BackingField = id == selectStaffPhotoId;
  if ( id == selectedStaffPhotoId )
  {
    v21 = *p_StaffPhotoEntity_k__BackingField;
    if ( !*p_StaffPhotoEntity_k__BackingField )
      goto LABEL_9;
    if ( !StaffPhotoEntity__IsEnableSameSet(v21, 0) )
    {
      IsRestrictionSvt = 1;
      goto LABEL_8;
    }
  }
  v21 = *p_StaffPhotoEntity_k__BackingField;
  if ( !*p_StaffPhotoEntity_k__BackingField )
LABEL_9:
    sub_1C93D2C(v21, v22);
  IsRestrictionSvt = StaffPhotoEntity__IsRestrictionSvt(v21, selectedSvtId, 0);
LABEL_8:
  this->fields._PhotoCampaignAtlas_k__BackingField = photoCampaignAtlas;
  p_PhotoCampaignAtlas_k__BackingField = &this->fields._PhotoCampaignAtlas_k__BackingField;
  *((_BYTE *)p_PhotoCampaignAtlas_k__BackingField - 7) = IsRestrictionSvt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_PhotoCampaignAtlas_k__BackingField,
    (int32_t)photoCampaignAtlas,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void StaffSelectListViewItem__ModifyItem(
        StaffSelectListViewItem_o *this,
        int32_t selectStaffPhotoId,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8

  StaffPhotoEntity_k__BackingField = this->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    sub_1C93D2C(this, selectStaffPhotoId);
  this->fields._IsSelected_k__BackingField = StaffPhotoEntity_k__BackingField->fields.id == selectStaffPhotoId;
}


bool StaffSelectListViewItem__SetSortValue(
        StaffSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x9

  StaffPhotoEntity_k__BackingField = this->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    sub_1C93D2C(this, sort);
  this->fields.sortValue1 = StaffPhotoEntity_k__BackingField->fields.dispOrder;
  return 1;
}


bool StaffSelectListViewItem__get_IsNotSelect(StaffSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsNotSelect_k__BackingField;
}


bool StaffSelectListViewItem__get_IsSelected(StaffSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


UIAtlas_o *StaffSelectListViewItem__get_PhotoCampaignAtlas(StaffSelectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._PhotoCampaignAtlas_k__BackingField;
}


StaffPhotoEntity_o *StaffSelectListViewItem__get_StaffPhotoEntity(
        StaffSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._StaffPhotoEntity_k__BackingField;
}


void StaffSelectListViewItem__set_IsSelected(StaffSelectListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}