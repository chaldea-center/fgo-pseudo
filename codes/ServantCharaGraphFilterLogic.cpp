void __fastcall ServantCharaGraphFilterLogic___ctor(ServantCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  CharaGraphFilterLogicBase___ctor((CharaGraphFilterLogicBase_o *)this, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsEventUpValShow(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantCharaGraphFilterLogic_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewSort_o *sort; // x8
  int32_t bonusKind2; // w8
  struct CharaGraphListViewItemBase_o *item; // x20
  EventUpValSetupInfo_o *v14; // x21
  ServantFilterMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v17; // x1
  int32_t klass; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // kr00_16

  v4 = this;
  if ( (byte_42E996F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFilterMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    this = (ServantCharaGraphFilterLogic_o *)sub_B5D5C4(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v8,
                                               v9,
                                               v10);
    byte_42E996F = 1;
  }
  sort = v4->fields.sort;
  if ( !sort )
    goto LABEL_21;
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  if ( bonusKind2 != 2 )
  {
    if ( bonusKind2 == 1 )
    {
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v4, method);
      if ( this )
      {
        item = this[5].fields.item;
        this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v4, method);
        if ( this )
        {
          v14 = (EventUpValSetupInfo_o *)this[5].fields.sort;
          this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v4, method);
          if ( this )
          {
            if ( item )
              return UserServantEntity__getEventUpVal_21840416(
                       (UserServantEntity_o *)item,
                       v14,
                       (int32_t)this[4].fields.sort,
                       0LL);
          }
        }
      }
LABEL_21:
      sub_B5D69C(this, method);
    }
    return 1;
  }
  this = (ServantCharaGraphFilterLogic_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (ServantFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v4, v17);
  if ( !this )
    goto LABEL_21;
  klass = (int32_t)this[6].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(klass, 0LL);
  this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(
                                             v4,
                                             *(const MethodInfo **)&v19.fields.fakeValue);
  if ( !this || !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  return ServantFilterMaster__IsEnableServant(
           MasterData_WarQuestSelectionMaster,
           v19,
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
  int v2; // w2
  __int64 v3; // x3
  FilterKindList_c *v5; // x0
  const MethodInfo *v6; // x1
  FilterKindList_c *v7; // x0
  const MethodInfo *v8; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v12; // x1
  ListViewSort_o *v13; // x20

  if ( (byte_42E9968 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9968 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  if ( !CharaGraphFilterLogicBase__IsAllFilterOff(
          (CharaGraphFilterLogicBase_o *)this,
          v5->static_fields->ClassGroupFilterKindList,
          0LL) )
  {
    sort = this->fields.sort;
    ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v6);
    if ( ListViewItem && sort )
      return ListViewSort__IsMatchClassGroupFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
LABEL_18:
    sub_B5D69C(ListViewItem, v12);
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v7->static_fields->ClassFilterKindList,
         0LL) )
  {
    return 1;
  }
  v13 = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v8);
  if ( !ListViewItem || !v13 )
    goto LABEL_18;
  return ListViewSort__IsMatchClassFilter(v13, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchEventBonusFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1
  UserServantEntity_o *saveKey; // x20
  ListViewSort_o *v9; // x19

  if ( (byte_42E996C & 1) == 0 )
  {
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E996C = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  if ( ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
    return 1;
  sort = (ListViewSort_o *)ServantCharaGraphFilterLogic__get_ListViewItem(this, v6);
  if ( !sort )
LABEL_12:
    sub_B5D69C(sort, method);
  saveKey = (UserServantEntity_o *)sort[1].fields.saveKey;
  v9 = this->fields.sort;
  if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  }
  return !ServantEventBonusFilterController__IsHideServant(saveKey, v9, -1, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchNPEffectFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FilterKindList_c *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v10; // x1

  if ( (byte_42E996A & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E996A = 1;
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
         v5->static_fields->NpEffectFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem || !sort )
    sub_B5D69C(ListViewItem, v10);
  return ListViewSort__IsMatchNPEffectFilter(sort, ListViewItem->fields._UserServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchNPTypeFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FilterKindList_c *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v10; // x1

  if ( (byte_42E9969 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9969 = 1;
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
         v5->static_fields->NpTypeFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem || !sort )
    sub_B5D69C(ListViewItem, v10);
  return ListViewSort__IsMatchNPTypeFilter(sort, ListViewItem->fields._UserServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchRarityFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FilterKindList_c *v5; // x0
  FilterKindList_c *v6; // x0
  __int64 v7; // x1
  struct CharaGraphListViewItemBase_o *item; // x0
  ListViewSort_o *sort; // x19

  if ( (byte_42E996E & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E996E = 1;
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
         v5->static_fields->RarityFilterKindList,
         0LL) )
  {
    return 1;
  }
  v6 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOn(
         (CharaGraphFilterLogicBase_o *)this,
         v6->static_fields->RarityFilterKindList,
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
    sub_B5D69C(item, v7);
  }
  return ListViewSort__IsMatchRarityFilter(sort, (int32_t)item, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchServantTypeFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FilterKindList_c *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v10; // x1

  if ( (byte_42E996B & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E996B = 1;
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
         v5->static_fields->ServantTypeFilterKindList,
         0LL) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem || !sort )
    sub_B5D69C(ListViewItem, v10);
  return ListViewSort__IsMatchServantTypeFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchSkillAndTreasureDeviceFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  void *sort; // x0
  ListViewSort_o *v7; // x20
  _BOOL4 IsUnSelectedAllTargetFilters; // w0
  ListViewSort_o *v9; // x21
  _BOOL4 v10; // w20
  _BOOL4 v11; // w21
  const MethodInfo *v12; // x1
  _BOOL4 IsMatchEffectCategory; // w22
  const MethodInfo *v14; // x1
  _BOOL4 v15; // w0
  __int64 v16; // x0

  if ( (byte_42E996D & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E996D = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_22;
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll((ListViewSort_o *)sort, 0LL) )
    return 1;
  v7 = this->fields.sort;
  sort = (void *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_22;
  method = (const MethodInfo *)sort;
  if ( !*((_DWORD *)sort + 6) )
    goto LABEL_23;
  *((_DWORD *)sort + 8) = 50;
  if ( !v7
    || (IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                         v7,
                                         (ListViewSort_FilterKind_array *)sort,
                                         0LL),
        v9 = this->fields.sort,
        v10 = IsUnSelectedAllTargetFilters,
        (sort = (void *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(sort, method);
  }
  method = (const MethodInfo *)sort;
  if ( !*((_DWORD *)sort + 6) )
  {
LABEL_23:
    v16 = sub_B5D6C8(sort);
    sub_B5D668(v16, 0LL);
  }
  *((_DWORD *)sort + 8) = 51;
  if ( !v9 )
    goto LABEL_22;
  v11 = ListViewSort__IsUnSelectedAllTargetFilters(v9, (ListViewSort_FilterKind_array *)sort, 0LL);
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v12);
  if ( !sort )
    goto LABEL_22;
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            *((System_Int32_array **)sort + 32),
                            this->fields.sort,
                            0LL);
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v14);
  if ( !sort )
    goto LABEL_22;
  v15 = ServantEquipEffectFilterController__IsMatchEffectCategory(
          *((System_Int32_array **)sort + 31),
          this->fields.sort,
          0LL);
  if ( ((v10 ^ v11) & 1) != 0 )
  {
    if ( v10 )
    {
      if ( v15 )
        return 1;
    }
    else if ( IsMatchEffectCategory )
    {
      return 1;
    }
  }
  else if ( IsMatchEffectCategory || v15 )
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

  if ( (byte_42E9967 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphServantListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9967 = 1;
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
    sub_B5D560(p_listViewItem, item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  v14 = (ServantCharaGraphEquipFilterLogic_o *)sub_B5D990(this->fields.item);
  return (CharaGraphServantListViewItem_o *)ServantCharaGraphEquipFilterLogic__IsMatchClassFilter(v14, v15);
}