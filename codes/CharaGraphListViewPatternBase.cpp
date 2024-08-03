void __fastcall CharaGraphListViewPatternBase___ctor(CharaGraphListViewPatternBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CharaGraphFilterLogicBase_o *__fastcall CharaGraphListViewPatternBase__CreateFilterLogic(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0LL )
  {
    sub_1B64324(this);
  }
  return (CharaGraphFilterLogicBase_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))this->klass->vtable._10_GetItemModifyArgs.method)(
                                          this,
                                          this->klass->vtable._11_GetBonusEventIds.methodPtr);
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphListViewPatternBase__CreateSortLogic(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0LL )
  {
    sub_1B64324(this);
  }
  return (CharaGraphSortLogicBase_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))this->klass->vtable._9_GetItemDrawPattern.method)(
                                        this,
                                        this->klass->vtable._10_GetItemModifyArgs.methodPtr);
}


System_Int32_array *__fastcall CharaGraphListViewPatternBase__GetBonusEventCampaignIds(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


System_Int32_array *__fastcall CharaGraphListViewPatternBase__GetBonusEventIds(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternBase__GetItemDrawPattern(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49FB80E & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListViewItemDrawPatternDefault_TypeInfo, method);
    byte_49FB80E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CharaGraphListViewItemDrawPatternDefault_TypeInfo, method, v2);
  System_Object___ctor(v3, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v3;
}


CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *__fastcall CharaGraphListViewPatternBase__GetItemModifyArgs(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v3; // x19

  if ( (byte_49FB80F & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo, method);
    byte_49FB80F = 1;
  }
  v3 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_1B64314(
                                                            CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo,
                                                            method,
                                                            v2);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v3, 0, 0LL);
  return v3;
}


ListViewSort_o *__fastcall CharaGraphListViewPatternBase__GetListViewSort(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0LL )
  {
    sub_1B64324(this);
  }
  return CharaGraphSortManageUnitBase__get_SortInfo((CharaGraphSortManageUnitBase_o *)this, method);
}


Il2CppObject *__fastcall CharaGraphListViewPatternBase__GetMaster_object_(const MethodInfo_2E2D0EC *method)
{
  __int64 v1; // x1

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&DataManager_TypeInfo, v1);
    if ( !method->rgctx_data )
      sub_1BB6000(method);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  return DataManager__GetMaster_object_((const MethodInfo_2E39398 *)method->rgctx_data->_0_DataManager_GetMaster_T_);
}


System_Int32_array *__fastcall CharaGraphListViewPatternBase__GetServantFilterIds(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


System_String_o *__fastcall CharaGraphListViewPatternBase__get_EmptyMessageCode(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


EventUpValSetupInfo_o *__fastcall CharaGraphListViewPatternBase__get_EventValSetupInfo(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return this->fields._EventValSetupInfo_k__BackingField;
}


int32_t __fastcall CharaGraphListViewPatternBase__get_FilterKind(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0LL )
  {
    sub_1B64324(this);
  }
  return ((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))this->klass->vtable._7_get_FilterKind.method)(
           this,
           this->klass->vtable._8_get_SortKind.methodPtr);
}


CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *__fastcall CharaGraphListViewPatternBase__get_ItemBulkModifyArgs(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o **p_itemBulkModifyArgs; // x19
  struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *itemBulkModifyArgs; // x21
  int32_t v5; // w2
  int32_t v6; // w3

  p_itemBulkModifyArgs = &this->fields.itemBulkModifyArgs;
  itemBulkModifyArgs = this->fields.itemBulkModifyArgs;
  if ( !itemBulkModifyArgs )
  {
    itemBulkModifyArgs = (struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))this->klass->vtable._10_GetItemModifyArgs.method)(
                                                                                     this,
                                                                                     this->klass->vtable._11_GetBonusEventIds.methodPtr);
    this->fields.itemBulkModifyArgs = itemBulkModifyArgs;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_itemBulkModifyArgs, (int32_t)itemBulkModifyArgs, v5, v6);
  }
  return itemBulkModifyArgs;
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternBase__get_ItemDrawPattern(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphListViewItemDrawPatternBase_o **p_itemDrawPattern; // x19
  struct CharaGraphListViewItemDrawPatternBase_o *itemDrawPattern; // x21
  int32_t v5; // w2
  int32_t v6; // w3

  p_itemDrawPattern = &this->fields.itemDrawPattern;
  itemDrawPattern = this->fields.itemDrawPattern;
  if ( !itemDrawPattern )
  {
    itemDrawPattern = (struct CharaGraphListViewItemDrawPatternBase_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))this->klass->vtable._9_GetItemDrawPattern.method)(
                                                                          this,
                                                                          this->klass->vtable._10_GetItemModifyArgs.methodPtr);
    this->fields.itemDrawPattern = itemDrawPattern;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_itemDrawPattern, (int32_t)itemDrawPattern, v5, v6);
  }
  return itemDrawPattern;
}


CharaGraphDefine_CharaGraphRootInfo_o *__fastcall CharaGraphListViewPatternBase__get_RootInfo(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return this->fields._RootInfo_k__BackingField;
}


int32_t __fastcall CharaGraphListViewPatternBase__get_SortKind(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x8

  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (this = (CharaGraphListViewPatternBase_o *)SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField) == 0LL )
  {
    sub_1B64324(this);
  }
  return ((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))this->klass->vtable._8_get_SortKind.method)(
           this,
           this->klass->vtable._9_GetItemDrawPattern.methodPtr);
}


CharaGraphSortOwnerBase_o *__fastcall CharaGraphListViewPatternBase__get_SortOwner(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SortOwner_k__BackingField;
}


void __fastcall CharaGraphListViewPatternBase__set_EventValSetupInfo(
        CharaGraphListViewPatternBase_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EventValSetupInfo_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventValSetupInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphListViewPatternBase__set_RootInfo(
        CharaGraphListViewPatternBase_o *this,
        CharaGraphDefine_CharaGraphRootInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._RootInfo_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._RootInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphListViewPatternBase__set_SortOwner(
        CharaGraphListViewPatternBase_o *this,
        CharaGraphSortOwnerBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SortOwner_k__BackingField = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}