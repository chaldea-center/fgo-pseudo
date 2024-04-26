void __fastcall ServantCharaGraphFilterLogic___ctor(ServantCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  CharaGraphFilterLogicBase___ctor((CharaGraphFilterLogicBase_o *)this, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsEventUpValShow(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphFilterLogic_o *v2; // x19
  struct ListViewSort_o *sort; // x8
  int32_t bonusKind2; // w8
  struct CharaGraphListViewItemBase_o *item; // x20
  EventUpValSetupInfo_o *v6; // x21
  ServantFilterMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v9; // x1
  int32_t klass; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // kr00_16

  v2 = this;
  if ( (byte_4352D2C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantCharaGraphFilterLogic_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352D2C = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
    goto LABEL_21;
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  if ( bonusKind2 != 2 )
  {
    if ( bonusKind2 == 1 )
    {
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, method);
      if ( this )
      {
        item = this[5].fields.item;
        this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, method);
        if ( this )
        {
          v6 = (EventUpValSetupInfo_o *)this[5].fields.sort;
          this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, method);
          if ( this )
          {
            if ( item )
              return UserServantEntity__getEventUpVal_21624572(
                       (UserServantEntity_o *)item,
                       v6,
                       (int32_t)this[4].fields.sort,
                       0LL,
                       0LL);
          }
        }
      }
LABEL_21:
      sub_B7076C(this, method);
    }
    return 1;
  }
  this = (ServantCharaGraphFilterLogic_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (ServantFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, v9);
  if ( !this )
    goto LABEL_21;
  klass = (int32_t)this[6].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(klass, 0LL);
  this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(
                                             v2,
                                             *(const MethodInfo **)&v11.fields.fakeValue);
  if ( !this || !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  return ServantFilterMaster__IsEnableServant(
           MasterData_WarQuestSelectionMaster,
           v11,
           (int32_t)this[4].fields.sort,
           0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchAllFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, Il2CppMethodPointer))this->klass->vtable._5_IsMatchRarityFilter.method)(
            this,
            this->klass->vtable._6_IsMatchSelectedItemFilter.methodPtr) & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, Il2CppMethodPointer))this->klass->vtable._7_IsMatchClassFilter.method)(
            this,
            this->klass->vtable._8_IsMatchNPTypeFilter.methodPtr) & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, Il2CppMethodPointer))this->klass->vtable._8_IsMatchNPTypeFilter.method)(
            this,
            this->klass->vtable._9_IsMatchNPEffectFilter.methodPtr) & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, Il2CppMethodPointer))this->klass->vtable._9_IsMatchNPEffectFilter.method)(
            this,
            this->klass->vtable._10_IsMatchServantTypeFilter.methodPtr) & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, Il2CppMethodPointer))this->klass->vtable._10_IsMatchServantTypeFilter.method)(
            this,
            this->klass->vtable._11_IsMatchEventBonusFilter.methodPtr) & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, Il2CppMethodPointer))this->klass->vtable._11_IsMatchEventBonusFilter.method)(
            this,
            this->klass->vtable._12_IsMatchSkillAndTreasureDeviceFilter.methodPtr) & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, void *))this->klass->vtable._12_IsMatchSkillAndTreasureDeviceFilter.method)(
            this,
            this->klass[1]._1.image) & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, Il2CppMethodPointer))this->klass->vtable._6_IsMatchSelectedItemFilter.method)(
            this,
            this->klass->vtable._7_IsMatchClassFilter.methodPtr) & 1) != 0
      && ServantCharaGraphFilterLogic__IsEventUpValShow(this, v3);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchClassFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  const MethodInfo *v4; // x1
  FilterKindList_c *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v10; // x1
  ListViewSort_o *v11; // x20

  if ( (byte_4352D25 & 1) == 0 )
  {
    sub_B70694(&FilterKindList_TypeInfo);
    byte_4352D25 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  if ( !CharaGraphFilterLogicBase__IsAllFilterOff(
          (CharaGraphFilterLogicBase_o *)this,
          v3->static_fields->ClassGroupFilterKindList,
          0LL) )
  {
    sort = this->fields.sort;
    ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v4);
    if ( ListViewItem && sort )
      return ListViewSort__IsMatchClassGroupFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
LABEL_18:
    sub_B7076C(ListViewItem, v10);
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v5->static_fields->ClassFilterKindList,
         0LL) )
  {
    return 1;
  }
  v11 = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem || !v11 )
    goto LABEL_18;
  return ListViewSort__IsMatchClassFilter(v11, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchEventBonusFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v4; // x1
  UserServantEntity_o *saveKey; // x20
  ListViewSort_o *v7; // x19

  if ( (byte_4352D29 & 1) == 0 )
  {
    sub_B70694(&ServantEventBonusFilterController_TypeInfo);
    byte_4352D29 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  if ( ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
    return 1;
  sort = (ListViewSort_o *)ServantCharaGraphFilterLogic__get_ListViewItem(this, v4);
  if ( !sort )
LABEL_12:
    sub_B7076C(sort, method);
  saveKey = (UserServantEntity_o *)sort[1].fields.saveKey;
  v7 = this->fields.sort;
  if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  }
  return !ServantEventBonusFilterController__IsHideServant(saveKey, v7, -1, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchNPEffectFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  const MethodInfo *v4; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v8; // x1

  if ( (byte_4352D27 & 1) == 0 )
  {
    sub_B70694(&FilterKindList_TypeInfo);
    byte_4352D27 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v3->static_fields->NpEffectFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v4);
  if ( !ListViewItem || !sort )
    sub_B7076C(ListViewItem, v8);
  return ListViewSort__IsMatchNPEffectFilter(sort, ListViewItem->fields._UserServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchNPTypeFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  const MethodInfo *v4; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v8; // x1

  if ( (byte_4352D26 & 1) == 0 )
  {
    sub_B70694(&FilterKindList_TypeInfo);
    byte_4352D26 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v3->static_fields->NpTypeFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v4);
  if ( !ListViewItem || !sort )
    sub_B7076C(ListViewItem, v8);
  return ListViewSort__IsMatchNPTypeFilter(sort, ListViewItem->fields._UserServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchRarityFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  FilterKindList_c *v4; // x0
  __int64 v5; // x1
  struct CharaGraphListViewItemBase_o *item; // x0
  ListViewSort_o *sort; // x19

  if ( (byte_4352D2B & 1) == 0 )
  {
    sub_B70694(&FilterKindList_TypeInfo);
    byte_4352D2B = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v3->static_fields->RarityFilterKindList,
         0LL) )
  {
    return 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOn(
         (CharaGraphFilterLogicBase_o *)this,
         v4->static_fields->RarityFilterKindList,
         0LL) )
  {
    return 1;
  }
  item = this->fields.item;
  if ( !item
    || (sort = this->fields.sort,
        item = (struct CharaGraphListViewItemBase_o *)((__int64 (__fastcall *)(struct CharaGraphListViewItemBase_o *, Il2CppMethodPointer))item->klass->vtable._9_get_Rarity.method)(
                                                        item,
                                                        item->klass->vtable._10_ModifyLocal.methodPtr),
        !sort) )
  {
    sub_B7076C(item, v5);
  }
  return ListViewSort__IsMatchRarityFilter(sort, (int32_t)item, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchServantTypeFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  FilterKindList_c *v3; // x0
  const MethodInfo *v4; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v8; // x1

  if ( (byte_4352D28 & 1) == 0 )
  {
    sub_B70694(&FilterKindList_TypeInfo);
    byte_4352D28 = 1;
  }
  v3 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v3 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v3->static_fields->ServantTypeFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v4);
  if ( !ListViewItem || !sort )
    sub_B7076C(ListViewItem, v8);
  return ListViewSort__IsMatchServantTypeFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchSkillAndTreasureDeviceFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  void *sort; // x0
  ListViewSort_o *v5; // x20
  _BOOL4 IsUnSelectedAllTargetFilters; // w0
  ListViewSort_o *v7; // x21
  _BOOL4 v8; // w20
  _BOOL4 v9; // w21
  const MethodInfo *v10; // x1
  _BOOL4 IsMatchEffectCategory; // w22
  const MethodInfo *v12; // x1
  _BOOL4 v13; // w0
  __int64 v14; // x0

  if ( (byte_4352D2A & 1) == 0 )
  {
    sub_B70694(&ListViewSort_FilterKind___TypeInfo);
    byte_4352D2A = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_22;
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll((ListViewSort_o *)sort, 0LL) )
    return 1;
  v5 = this->fields.sort;
  sort = (void *)sub_B706AC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_22;
  method = (const MethodInfo *)sort;
  if ( !*((_DWORD *)sort + 6) )
    goto LABEL_23;
  *((_DWORD *)sort + 8) = 50;
  if ( !v5
    || (IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                         v5,
                                         (ListViewSort_FilterKind_array *)sort,
                                         0LL),
        v7 = this->fields.sort,
        v8 = IsUnSelectedAllTargetFilters,
        (sort = (void *)sub_B706AC(ListViewSort_FilterKind___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_22:
    sub_B7076C(sort, method);
  }
  method = (const MethodInfo *)sort;
  if ( !*((_DWORD *)sort + 6) )
  {
LABEL_23:
    v14 = sub_B70798(sort);
    sub_B70738(v14, 0LL);
  }
  *((_DWORD *)sort + 8) = 51;
  if ( !v7 )
    goto LABEL_22;
  v9 = ListViewSort__IsUnSelectedAllTargetFilters(v7, (ListViewSort_FilterKind_array *)sort, 0LL);
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v10);
  if ( !sort )
    goto LABEL_22;
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            *((System_Int32_array **)sort + 32),
                            this->fields.sort,
                            0LL);
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v12);
  if ( !sort )
    goto LABEL_22;
  v13 = ServantEquipEffectFilterController__IsMatchEffectCategory(
          *((System_Int32_array **)sort + 31),
          this->fields.sort,
          0LL);
  if ( ((v8 ^ v9) & 1) != 0 )
  {
    if ( v8 )
    {
      if ( v13 )
        return 1;
    }
    else if ( IsMatchEffectCategory )
    {
      return 1;
    }
  }
  else if ( IsMatchEffectCategory || v13 )
  {
    return 1;
  }
  return 0;
}


CharaGraphServantListViewItem_o *__fastcall ServantCharaGraphFilterLogic__get_ListViewItem(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_listViewItem; // x0
  CharaGraphServantListViewItem_o *listViewItem; // x19
  __int64 v11; // x9
  System_Int32_array **item; // x1
  ServantCharaGraphEquipFilterLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4352D24 & 1) == 0 )
  {
    sub_B70694(&CharaGraphServantListViewItem_TypeInfo);
    byte_4352D24 = 1;
  }
  p_listViewItem = (BattleServantConfConponent_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphServantListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (v11 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&listViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11)
    && (CharaGraphServantListViewItem_c *)listViewItem->klass->_2.typeHierarchy[v11 - 1] == CharaGraphServantListViewItem_TypeInfo )
  {
    item = (System_Int32_array **)this->fields.item;
    p_listViewItem->klass = (BattleServantConfConponent_c *)listViewItem;
    sub_B70630(p_listViewItem, item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  v14 = (ServantCharaGraphEquipFilterLogic_o *)sub_B70A60(this->fields.item);
  return (CharaGraphServantListViewItem_o *)ServantCharaGraphEquipFilterLogic__IsMatchClassFilter(v14, v15);
}