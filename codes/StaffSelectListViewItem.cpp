void StaffSelectListViewItem___ctor(
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  StaffPhotoEntity_o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t id; // w8
  bool v28; // w8
  struct UIAtlas_o **p_PhotoCampaignAtlas_k__BackingField; // x20

  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields._StaffPhotoEntity_k__BackingField = entity;
  p_StaffPhotoEntity_k__BackingField = &this->fields._StaffPhotoEntity_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._StaffPhotoEntity_k__BackingField,
    (int32_t)entity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !entity )
    goto LABEL_7;
  id = entity->fields.id;
  this->fields._IsSelected_k__BackingField = id == selectStaffPhotoId;
  if ( id != selectedStaffPhotoId )
  {
    v28 = 0;
    goto LABEL_6;
  }
  v19 = *p_StaffPhotoEntity_k__BackingField;
  if ( !*p_StaffPhotoEntity_k__BackingField )
LABEL_7:
    sub_1C942F0(v19, v20);
  v28 = !StaffPhotoEntity__IsEnableSameSet(v19, 0);
LABEL_6:
  this->fields._PhotoCampaignAtlas_k__BackingField = photoCampaignAtlas;
  p_PhotoCampaignAtlas_k__BackingField = &this->fields._PhotoCampaignAtlas_k__BackingField;
  *((_BYTE *)p_PhotoCampaignAtlas_k__BackingField - 7) = v28;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)p_PhotoCampaignAtlas_k__BackingField,
    (int32_t)photoCampaignAtlas,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void StaffSelectListViewItem__ModifyItem(
        StaffSelectListViewItem_o *this,
        int32_t selectStaffPhotoId,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8

  StaffPhotoEntity_k__BackingField = this->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    sub_1C942F0(this, selectStaffPhotoId);
  this->fields._IsSelected_k__BackingField = StaffPhotoEntity_k__BackingField->fields.id == selectStaffPhotoId;
}


bool StaffSelectListViewItem__SetSortValue(
        StaffSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x9
  bool result; // w0

  StaffPhotoEntity_k__BackingField = this->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    sub_1C942F0(this, sort);
  result = 1;
  this->fields.sortValue1 = StaffPhotoEntity_k__BackingField->fields.dispOrder;
  return result;
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