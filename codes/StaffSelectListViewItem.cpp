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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  StaffPhotoEntity_o *v21; // x0
  __int64 v22; // x1
  int32_t id; // w8
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  bool IsRestrictionSvt; // w0

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields._StaffPhotoEntity_k__BackingField = entity;
  p_StaffPhotoEntity_k__BackingField = &this->fields._StaffPhotoEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._StaffPhotoEntity_k__BackingField,
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
    sub_2213CDC(v21, v22);
  IsRestrictionSvt = StaffPhotoEntity__IsRestrictionSvt(v21, selectedSvtId, 0);
LABEL_8:
  this->fields._PhotoCampaignAtlas_k__BackingField = photoCampaignAtlas;
  this->fields._IsNotSelect_k__BackingField = IsRestrictionSvt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PhotoCampaignAtlas_k__BackingField,
    (int32_t)photoCampaignAtlas,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


// local variable allocation has failed, the output may be wrong!
void StaffSelectListViewItem__ModifyItem(
        StaffSelectListViewItem_o *this,
        int32_t selectStaffPhotoId,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8

  StaffPhotoEntity_k__BackingField = this->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    sub_2213CDC(this, *(_QWORD *)&selectStaffPhotoId);
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
    sub_2213CDC(this, sort);
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