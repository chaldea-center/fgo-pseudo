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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  CharaGraphServantListViewItemBase___ctor(
    (CharaGraphServantListViewItemBase_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    method);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_21FFECC(0, v6);
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(UserServantEntity_k__BackingField, 0, 0);
  this->fields._OverwriteStatus_k__BackingField = OverwriteStatus;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)OverwriteStatus,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void CharaGraphServantListViewItem__UpdateProperties(
        CharaGraphServantListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  struct ServantOverwriteStatus_o *OverwriteStatus; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  CharaGraphServantListViewItemBase__UpdateProperties((CharaGraphServantListViewItemBase_o *)this, args, method);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    sub_21FFECC(0, v4);
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(UserServantEntity_k__BackingField, 0, 0);
  this->fields._OverwriteStatus_k__BackingField = OverwriteStatus;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)OverwriteStatus,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


int32_t CharaGraphServantListViewItem__get_Atk(CharaGraphServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8

  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  if ( !OverwriteStatus_k__BackingField )
    sub_21FFECC(this, method);
  return OverwriteStatus_k__BackingField->fields._Atk_k__BackingField;
}


int32_t CharaGraphServantListViewItem__get_Cost(CharaGraphServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8

  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  if ( !OverwriteStatus_k__BackingField )
    sub_21FFECC(this, method);
  return OverwriteStatus_k__BackingField->fields._Cost_k__BackingField;
}


int32_t CharaGraphServantListViewItem__get_Hp(CharaGraphServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8

  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  if ( !OverwriteStatus_k__BackingField )
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
  return OverwriteStatus_k__BackingField->fields._Rarity_k__BackingField;
}


void CharaGraphServantListViewItem__set_OverwriteStatus(
        CharaGraphServantListViewItem_o *this,
        ServantOverwriteStatus_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OverwriteStatus_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}