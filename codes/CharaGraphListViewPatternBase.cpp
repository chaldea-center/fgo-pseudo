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
    sub_2213CDC(this, method);
  }
  return ((CharaGraphFilterLogicBase_o *(__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._10_GetItemModifyArgs.methodPtr)(
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
    sub_2213CDC(this, method);
  }
  return ((CharaGraphSortLogicBase_o *(__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._9_GetItemDrawPattern.methodPtr)(
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

  if ( (byte_596FACE & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListViewItemDrawPatternDefault_TypeInfo);
    byte_596FACE = 1;
  }
  v2 = (Il2CppObject *)sub_2213CCC(CharaGraphListViewItemDrawPatternDefault_TypeInfo);
  System_Object___ctor(v2, 0);
  return (CharaGraphListViewItemDrawPatternBase_o *)v2;
}


CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *CharaGraphListViewPatternBase__GetItemModifyArgs(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v2; // x19

  if ( (byte_596FACF & 1) == 0 )
  {
    sub_2213A60(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
    byte_596FACF = 1;
  }
  v2 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_2213CCC(CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
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
    sub_2213CDC(this, method);
  }
  return CharaGraphSortManageUnitBase__get_SortInfo((CharaGraphSortManageUnitBase_o *)this, method);
}


Il2CppObject *CharaGraphListViewPatternBase__GetMaster_object_(const MethodInfo_381D508 *method)
{
  __int64 v1; // x1

  if ( !method->rgctx_data )
  {
    sub_2213A60(&DataManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  return DataManager__GetMaster_object_((const MethodInfo_3856318 *)method->rgctx_data->_0_DataManager_GetMaster_T_);
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
    sub_2213CDC(this, method);
  }
  return ((int32_t (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._7_get_FilterKind.methodPtr)(
           this,
           this->klass->vtable._7_get_FilterKind.method);
}


CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *CharaGraphListViewPatternBase__get_ItemBulkModifyArgs(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o **p_itemBulkModifyArgs; // x19
  struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *itemBulkModifyArgs; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_itemBulkModifyArgs = &this->fields.itemBulkModifyArgs;
  itemBulkModifyArgs = this->fields.itemBulkModifyArgs;
  if ( !itemBulkModifyArgs )
  {
    itemBulkModifyArgs = (struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._10_GetItemModifyArgs.methodPtr)(
                                                                                     this,
                                                                                     this->klass->vtable._10_GetItemModifyArgs.method);
    this->fields.itemBulkModifyArgs = itemBulkModifyArgs;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_itemBulkModifyArgs,
      (int32_t)itemBulkModifyArgs,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return itemBulkModifyArgs;
}


CharaGraphListViewItemDrawPatternBase_o *CharaGraphListViewPatternBase__get_ItemDrawPattern(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphListViewItemDrawPatternBase_o **p_itemDrawPattern; // x19
  struct CharaGraphListViewItemDrawPatternBase_o *itemDrawPattern; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_itemDrawPattern = &this->fields.itemDrawPattern;
  itemDrawPattern = this->fields.itemDrawPattern;
  if ( !itemDrawPattern )
  {
    itemDrawPattern = (struct CharaGraphListViewItemDrawPatternBase_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._9_GetItemDrawPattern.methodPtr)(
                                                                          this,
                                                                          this->klass->vtable._9_GetItemDrawPattern.method);
    this->fields.itemDrawPattern = itemDrawPattern;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_itemDrawPattern,
      (int32_t)itemDrawPattern,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
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
    sub_2213CDC(this, method);
  }
  return ((int32_t (__fastcall *)(CharaGraphListViewPatternBase_o *, const MethodInfo *))this->klass->vtable._8_get_SortKind.methodPtr)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventValSetupInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventValSetupInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphListViewPatternBase__set_RootInfo(
        CharaGraphListViewPatternBase_o *this,
        CharaGraphDefine_CharaGraphRootInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RootInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RootInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphListViewPatternBase__set_SortOwner(
        CharaGraphListViewPatternBase_o *this,
        CharaGraphSortOwnerBase_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SortOwner_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}