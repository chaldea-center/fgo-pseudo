void CharaGraphListViewPatternBase___ctor(CharaGraphListViewPatternBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CharaGraphFilterLogicBase_o *CharaGraphListViewPatternBase__CreateFilterLogic(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0 )
  {
    sub_1C32E7C(this);
  }
  return (CharaGraphFilterLogicBase_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._10_GetItemModifyArgs.methodPtr)(
                                          this,
                                          this->klass->vtable._10_GetItemModifyArgs.method);
}


CharaGraphSortLogicBase_o *CharaGraphListViewPatternBase__CreateSortLogic(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0 )
  {
    sub_1C32E7C(this);
  }
  return (CharaGraphSortLogicBase_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._9_GetItemDrawPattern.methodPtr)(
                                        this,
                                        this->klass->vtable._9_GetItemDrawPattern.method);
}


System_Int32_array *CharaGraphListViewPatternBase__GetBonusEventCampaignIds(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return 0;
}


System_Int32_array *CharaGraphListViewPatternBase__GetBonusEventIds(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return 0;
}


CharaGraphListViewItemDrawPatternBase_o *CharaGraphListViewPatternBase__GetItemDrawPattern(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4C36CDF & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListViewItemDrawPatternDefault_TypeInfo);
    byte_4C36CDF = 1;
  }
  v2 = (Il2CppObject *)sub_1C32E6C(CharaGraphListViewItemDrawPatternDefault_TypeInfo);
  System_Object___ctor(v2, 0);
  return (CharaGraphListViewItemDrawPatternBase_o *)v2;
}


CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *CharaGraphListViewPatternBase__GetItemModifyArgs(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v2; // x19

  if ( (byte_4C36CE0 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
    byte_4C36CE0 = 1;
  }
  v2 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_1C32E6C(CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v2, 0, 0);
  return v2;
}


ListViewSort_o *CharaGraphListViewPatternBase__GetListViewSort(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0 )
  {
    sub_1C32E7C(this);
  }
  return CharaGraphSortManageUnitBase__get_SortInfo((CharaGraphSortManageUnitBase_o *)this, method);
}


Il2CppObject *CharaGraphListViewPatternBase__GetMaster_object_(const MethodInfo_30D0B70 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C83390(method);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  return DataManager__GetMaster_object_((const MethodInfo_30DD39C *)method->rgctx_data->_0_DataManager_GetMaster_T_);
}


System_Int32_array *CharaGraphListViewPatternBase__GetServantFilterIds(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool CharaGraphListViewPatternBase__IsFocusItem(
        CharaGraphListViewPatternBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  return 0;
}


System_String_o *CharaGraphListViewPatternBase__get_EmptyMessageCode(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return 0;
}


EventUpValSetupInfo_o *CharaGraphListViewPatternBase__get_EventValSetupInfo(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return this->fields._EventValSetupInfo_k__BackingField;
}


int32_t CharaGraphListViewPatternBase__get_FilterKind(CharaGraphListViewPatternBase_o *this, const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0 )
  {
    sub_1C32E7C(this);
  }
  return ((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._7_get_FilterKind.methodPtr)(
           this,
           this->klass->vtable._7_get_FilterKind.method);
}


CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *CharaGraphListViewPatternBase__get_ItemBulkModifyArgs(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o **p_itemBulkModifyArgs; // x19
  struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *itemBulkModifyArgs; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_itemBulkModifyArgs = &this->fields.itemBulkModifyArgs;
  itemBulkModifyArgs = this->fields.itemBulkModifyArgs;
  if ( !itemBulkModifyArgs )
  {
    itemBulkModifyArgs = (struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._10_GetItemModifyArgs.methodPtr)(
                                                                                     this,
                                                                                     this->klass->vtable._10_GetItemModifyArgs.method);
    this->fields.itemBulkModifyArgs = itemBulkModifyArgs;
    sub_1C32BC4((CGThumbnailListItem_o *)p_itemBulkModifyArgs, (int32_t)itemBulkModifyArgs, v5, v6);
  }
  return itemBulkModifyArgs;
}


CharaGraphListViewItemDrawPatternBase_o *CharaGraphListViewPatternBase__get_ItemDrawPattern(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphListViewItemDrawPatternBase_o **p_itemDrawPattern; // x19
  struct CharaGraphListViewItemDrawPatternBase_o *itemDrawPattern; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_itemDrawPattern = &this->fields.itemDrawPattern;
  itemDrawPattern = this->fields.itemDrawPattern;
  if ( !itemDrawPattern )
  {
    itemDrawPattern = (struct CharaGraphListViewItemDrawPatternBase_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._9_GetItemDrawPattern.methodPtr)(
                                                                          this,
                                                                          this->klass->vtable._9_GetItemDrawPattern.method);
    this->fields.itemDrawPattern = itemDrawPattern;
    sub_1C32BC4((CGThumbnailListItem_o *)p_itemDrawPattern, (int32_t)itemDrawPattern, v5, v6);
  }
  return itemDrawPattern;
}


CharaGraphDefine_CharaGraphRootInfo_o *CharaGraphListViewPatternBase__get_RootInfo(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return this->fields._RootInfo_k__BackingField;
}


int32_t CharaGraphListViewPatternBase__get_SortKind(CharaGraphListViewPatternBase_o *this, const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0 )
  {
    sub_1C32E7C(this);
  }
  return ((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._8_get_SortKind.methodPtr)(
           this,
           this->klass->vtable._8_get_SortKind.method);
}


CharaGraphSortOwnerBase_o *CharaGraphListViewPatternBase__get_SortOwner(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SortOwner_k__BackingField;
}


void CharaGraphListViewPatternBase__set_EventValSetupInfo(
        CharaGraphListViewPatternBase_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventValSetupInfo_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._EventValSetupInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphListViewPatternBase__set_RootInfo(
        CharaGraphListViewPatternBase_o *this,
        CharaGraphDefine_CharaGraphRootInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._RootInfo_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._RootInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void CharaGraphListViewPatternBase__set_SortOwner(
        CharaGraphListViewPatternBase_o *this,
        CharaGraphSortOwnerBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SortOwner_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}