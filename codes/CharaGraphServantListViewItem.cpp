void CharaGraphServantListViewItem___ctor(
        CharaGraphServantListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  struct ServantOverwriteStatus_o *OverwriteStatus; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  CharaGraphServantListViewItemBase___ctor(
    (CharaGraphServantListViewItemBase_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    method);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1C2D6EC(0, v6);
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(UserServantEntity_k__BackingField, 0, 0);
  this->fields._OverwriteStatus_k__BackingField = OverwriteStatus;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)OverwriteStatus,
    v9,
    v10);
}


void CharaGraphServantListViewItem__UpdateProperties(
        CharaGraphServantListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  struct ServantOverwriteStatus_o *OverwriteStatus; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  CharaGraphServantListViewItemBase__UpdateProperties((CharaGraphServantListViewItemBase_o *)this, args, method);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_1C2D6EC(0, v4);
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(UserServantEntity_k__BackingField, 0, 0);
  this->fields._OverwriteStatus_k__BackingField = OverwriteStatus;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._OverwriteStatus_k__BackingField, (int32_t)OverwriteStatus, v7, v8);
}


int32_t CharaGraphServantListViewItem__get_Atk(CharaGraphServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8

  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  if ( !OverwriteStatus_k__BackingField )
    sub_1C2D6EC(this, method);
  return OverwriteStatus_k__BackingField->fields._Atk_k__BackingField;
}


int32_t CharaGraphServantListViewItem__get_Cost(CharaGraphServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8

  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  if ( !OverwriteStatus_k__BackingField )
    sub_1C2D6EC(this, method);
  return OverwriteStatus_k__BackingField->fields._Cost_k__BackingField;
}


int32_t CharaGraphServantListViewItem__get_Hp(CharaGraphServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8

  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  if ( !OverwriteStatus_k__BackingField )
    sub_1C2D6EC(this, method);
  return OverwriteStatus_k__BackingField->fields._Hp_k__BackingField;
}


ServantOverwriteStatus_o *CharaGraphServantListViewItem__get_OverwriteStatus(
        CharaGraphServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._OverwriteStatus_k__BackingField;
}


int32_t CharaGraphServantListViewItem__get_Rarity(CharaGraphServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8

  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  if ( !OverwriteStatus_k__BackingField )
    sub_1C2D6EC(this, method);
  return OverwriteStatus_k__BackingField->fields._Rarity_k__BackingField;
}


void CharaGraphServantListViewItem__set_OverwriteStatus(
        CharaGraphServantListViewItem_o *this,
        ServantOverwriteStatus_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OverwriteStatus_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}