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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B155AF & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewItemDrawPatternDefault_TypeInfo, method, v2);
    byte_4B155AF = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CharaGraphListViewItemDrawPatternDefault_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (CharaGraphListViewItemDrawPatternBase_o *)v4;
}


CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *__fastcall CharaGraphListViewPatternBase__GetItemModifyArgs(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v4; // x19

  if ( (byte_4B155B0 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo, method, v2);
    byte_4B155B0 = 1;
  }
  v4 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_1BCAA2C(
                                                            CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo,
                                                            method,
                                                            v2,
                                                            v3);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v4, 0, 0LL);
  return v4;
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
    sub_1BCAA3C(this, method);
  }
  return CharaGraphSortManageUnitBase__get_SortInfo((CharaGraphSortManageUnitBase_o *)this, method);
}


Il2CppObject *__fastcall CharaGraphListViewPatternBase__GetMaster_object_(const MethodInfo_2F0670C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, v1, v2);
    if ( !method->rgctx_data )
      sub_1C1C718(method, v1);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  return DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)method->rgctx_data->_0_DataManager_GetMaster_T_);
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
    sub_1BCAA3C(this, method);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_itemBulkModifyArgs = &this->fields.itemBulkModifyArgs;
  itemBulkModifyArgs = this->fields.itemBulkModifyArgs;
  if ( !itemBulkModifyArgs )
  {
    itemBulkModifyArgs = (struct CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))this->klass->vtable._10_GetItemModifyArgs.method)(
                                                                                     this,
                                                                                     this->klass->vtable._11_GetBonusEventIds.methodPtr);
    this->fields.itemBulkModifyArgs = itemBulkModifyArgs;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)p_itemBulkModifyArgs,
      (int64_t)itemBulkModifyArgs,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return itemBulkModifyArgs;
}


CharaGraphListViewItemDrawPatternBase_o *__fastcall CharaGraphListViewPatternBase__get_ItemDrawPattern(
        CharaGraphListViewPatternBase_o *this,
        const MethodInfo *method)
{
  struct CharaGraphListViewItemDrawPatternBase_o **p_itemDrawPattern; // x19
  struct CharaGraphListViewItemDrawPatternBase_o *itemDrawPattern; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_itemDrawPattern = &this->fields.itemDrawPattern;
  itemDrawPattern = this->fields.itemDrawPattern;
  if ( !itemDrawPattern )
  {
    itemDrawPattern = (struct CharaGraphListViewItemDrawPatternBase_o *)((__int64 (__fastcall *)(CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))this->klass->vtable._9_GetItemDrawPattern.method)(
                                                                          this,
                                                                          this->klass->vtable._10_GetItemModifyArgs.methodPtr);
    this->fields.itemDrawPattern = itemDrawPattern;
    sub_1BCA784((PartyOrganizationUtility_o *)p_itemDrawPattern, (int64_t)itemDrawPattern, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EventValSetupInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventValSetupInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphListViewPatternBase__set_RootInfo(
        CharaGraphListViewPatternBase_o *this,
        CharaGraphDefine_CharaGraphRootInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._RootInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._RootInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphListViewPatternBase__set_SortOwner(
        CharaGraphListViewPatternBase_o *this,
        CharaGraphSortOwnerBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SortOwner_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}