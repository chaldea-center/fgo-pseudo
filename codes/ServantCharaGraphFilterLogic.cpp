void __fastcall ServantCharaGraphFilterLogic___ctor(ServantCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsEventUpValShow(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCharaGraphFilterLogic_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct ListViewSort_o *sort; // x8
  bool result; // w0
  struct CharaGraphListViewItemBase_o *item; // x20
  EventUpValSetupInfo_o *v25; // x21
  Il2CppObject *Master_object; // x20
  const MethodInfo *v27; // x1
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  System_Func_object__bool__o *v31; // x21
  Il2CppObject *v32; // x20
  const MethodInfo *v33; // x1
  int32_t klass; // w21
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v36; // x1
  int32_t v37; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // kr00_16

  v3 = this;
  if ( (byte_4B1553C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFilterMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_ServantCharaGraphFilterLogic__IsEventUpValShow_b__11_0__, v18, v19);
    this = (ServantCharaGraphFilterLogic_o *)sub_1BCA7E0(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v20,
                                               v21);
    byte_4B1553C = 1;
  }
  sort = v3->fields.sort;
  if ( !sort )
LABEL_34:
    sub_1BCAA3C(this, method);
  if ( !sort->fields.isBonusKind )
    return 1;
  result = 1;
  switch ( sort->fields.bonusKind2 )
  {
    case 0:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v3, v27);
      if ( !this || !Master_object )
        goto LABEL_34;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                            (EventGroupMaster_o *)Master_object,
                            (int32_t)this[4].fields.sort,
                            0LL);
      this = (ServantCharaGraphFilterLogic_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_33;
      if ( !EntitiesByGroupId )
        goto LABEL_34;
      if ( EntitiesByGroupId->fields._size < 2 )
      {
LABEL_33:
        result = 0;
      }
      else
      {
        v31 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventGroupEntity__bool__TypeInfo, method, v29, v30);
        System_Func_object__bool____ctor(
          v31,
          (Il2CppObject *)v3,
          Method_ServantCharaGraphFilterLogic__IsEventUpValShow_b__11_0__,
          0LL);
        result = BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                   (System_Func_T__bool__o *)v31,
                   (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
      }
      break;
    case 3:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      v32 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v3, v33);
      if ( !this )
        goto LABEL_34;
      klass = (int32_t)this[6].klass;
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v3, method);
      if ( !this || !v32 )
        goto LABEL_34;
      return EventCampaignMaster__IsEnableServant(
               (EventCampaignMaster_o *)v32,
               klass,
               (int32_t)this[4].fields.sort,
               0LL);
    case 4:
    case 5:
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v3, method);
      if ( !this )
        goto LABEL_34;
      item = this[5].fields.item;
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v3, method);
      if ( !this )
        goto LABEL_34;
      v25 = (EventUpValSetupInfo_o *)this[5].fields.sort;
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v3, method);
      if ( !this || !item )
        goto LABEL_34;
      return UserServantEntity__getEventUpVal_40936552(
               (UserServantEntity_o *)item,
               v25,
               (int32_t)this[4].fields.sort,
               0LL,
               0LL);
    case 7:
      this = (ServantCharaGraphFilterLogic_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_34;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v3, v36);
      if ( !this )
        goto LABEL_34;
      v37 = (int32_t)this[6].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v37, 0LL);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(
                                                 v3,
                                                 *(const MethodInfo **)&v38.fields.fakeValue);
      if ( !this || !MasterData_object )
        goto LABEL_34;
      return ServantFilterMaster__IsEnableServant(
               (ServantFilterMaster_o *)MasterData_object,
               v38,
               (int32_t)this[4].fields.sort,
               0LL);
    default:
      return result;
  }
  return result;
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
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  FilterKindList_c *v7; // x0
  const MethodInfo *v8; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v12; // x1
  ListViewSort_o *v13; // x20

  if ( (byte_4B15535 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, method, v2);
    byte_4B15535 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v4 = FilterKindList_TypeInfo;
  }
  if ( !CharaGraphFilterLogicBase__IsAllFilterOff(
          (CharaGraphFilterLogicBase_o *)this,
          v4->static_fields->ClassGroupFilterKindList,
          v2) )
  {
    sort = this->fields.sort;
    ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v5);
    if ( ListViewItem && sort )
      return ListViewSort__IsMatchClassGroupFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
LABEL_16:
    sub_1BCAA3C(ListViewItem, v12);
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v5);
    v7 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v7->static_fields->ClassFilterKindList,
         v6) )
  {
    return 1;
  }
  v13 = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v8);
  if ( !ListViewItem || !v13 )
    goto LABEL_16;
  return ListViewSort__IsMatchClassFilter(v13, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchEventBonusFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  void *sort; // x0
  const MethodInfo *v5; // x1
  UserServantEntity_o *v7; // x20
  ListViewSort_o *v8; // x19

  if ( (byte_4B15539 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, method, v2);
    byte_4B15539 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_11;
  if ( ListViewSort__CheckSvtEventBonusFilterDefaultAll((ListViewSort_o *)sort, -1, 0LL) )
    return 1;
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v5);
  if ( !sort )
LABEL_11:
    sub_1BCAA3C(sort, method);
  v7 = (UserServantEntity_o *)*((_QWORD *)sort + 28);
  v8 = this->fields.sort;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, method);
  return !ServantEventBonusFilterController__IsHideServant(v7, v8, -1, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchNPEffectFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v9; // x1

  if ( (byte_4B15537 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, method, v2);
    byte_4B15537 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v4->static_fields->NpEffectFilterKindList,
         v2) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem || !sort )
    sub_1BCAA3C(ListViewItem, v9);
  return ListViewSort__IsMatchNPEffectFilter(sort, ListViewItem->fields._UserServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchNPTypeFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v9; // x1

  if ( (byte_4B15536 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, method, v2);
    byte_4B15536 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v4->static_fields->NpTypeFilterKindList,
         v2) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem || !sort )
    sub_1BCAA3C(ListViewItem, v9);
  return ListViewSort__IsMatchNPTypeFilter(sort, ListViewItem->fields._UserServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchRarityFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  FilterKindList_c *v7; // x0
  __int64 v8; // x1
  struct CharaGraphListViewItemBase_o *item; // x0
  ListViewSort_o *sort; // x19

  if ( (byte_4B1553B & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, method, v2);
    byte_4B1553B = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v4->static_fields->RarityFilterKindList,
         v2) )
  {
    return 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v5);
    v7 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOn(
         (CharaGraphFilterLogicBase_o *)this,
         v7->static_fields->RarityFilterKindList,
         v6) )
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
    sub_1BCAA3C(item, v8);
  }
  return ListViewSort__IsMatchRarityFilter(sort, (int32_t)item, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchServantTypeFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  __int64 v9; // x1

  if ( (byte_4B15538 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, method, v2);
    byte_4B15538 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v4->static_fields->ServantTypeFilterKindList,
         v2) )
  {
    return 1;
  }
  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v5);
  if ( !ListViewItem || !sort )
    sub_1BCAA3C(ListViewItem, v9);
  return ListViewSort__IsMatchServantTypeFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0LL);
}


bool __fastcall ServantCharaGraphFilterLogic__IsMatchSkillAndTreasureDeviceFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  void *sort; // x0
  ListViewSort_o *v6; // x20
  _BOOL4 IsUnSelectedAllTargetFilters; // w0
  ListViewSort_o *v8; // x21
  _BOOL4 v9; // w20
  _BOOL4 v10; // w21
  const MethodInfo *v11; // x1
  _BOOL4 IsMatchEffectCategory; // w22
  const MethodInfo *v13; // x1
  _BOOL4 v14; // w0

  if ( (byte_4B1553A & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, method, v2);
    byte_4B1553A = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_22;
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll((ListViewSort_o *)sort, 0LL) )
    return 1;
  v6 = this->fields.sort;
  sort = (void *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !sort )
    goto LABEL_22;
  method = (const MethodInfo *)sort;
  if ( !*((_DWORD *)sort + 6) )
    goto LABEL_23;
  *((_DWORD *)sort + 8) = 50;
  if ( !v6
    || (IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                         v6,
                                         (ListViewSort_FilterKind_array *)sort,
                                         0LL),
        v8 = this->fields.sort,
        v9 = IsUnSelectedAllTargetFilters,
        (sort = (void *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(sort, method);
  }
  method = (const MethodInfo *)sort;
  if ( !*((_DWORD *)sort + 6) )
LABEL_23:
    sub_1BCAA44(sort, method);
  *((_DWORD *)sort + 8) = 51;
  if ( !v8 )
    goto LABEL_22;
  v10 = ListViewSort__IsUnSelectedAllTargetFilters(v8, (ListViewSort_FilterKind_array *)sort, 0LL);
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v11);
  if ( !sort )
    goto LABEL_22;
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            *((System_Int32_array **)sort + 32),
                            this->fields.sort,
                            0LL);
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v13);
  if ( !sort )
    goto LABEL_22;
  v14 = ServantEquipEffectFilterController__IsMatchEffectCategory(
          *((System_Int32_array **)sort + 31),
          this->fields.sort,
          0LL);
  if ( ((v9 ^ v10) & 1) != 0 )
  {
    if ( v9 )
    {
      if ( v14 )
        return 1;
    }
    else if ( IsMatchEffectCategory )
    {
      return 1;
    }
  }
  else if ( IsMatchEffectCategory || v14 )
  {
    return 1;
  }
  return 0;
}


bool __fastcall ServantCharaGraphFilterLogic___IsEventUpValShow_b__11_0(
        ServantCharaGraphFilterLogic_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x21
  const MethodInfo *v12; // x1
  CharaGraphServantListViewItem_o *ListViewItem; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x1
  int32_t SvtId_k__BackingField; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // kr00_16
  const MethodInfo *v20; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_4B1553D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B1553D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v12);
  if ( !ListViewItem || !entity || !Master_object )
    goto LABEL_21;
  if ( EventCampaignMaster__IsEnableServant(
         (EventCampaignMaster_o *)Master_object,
         ListViewItem->fields._SvtId_k__BackingField,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  v16 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v17);
  if ( !ListViewItem )
    goto LABEL_21;
  SvtId_k__BackingField = ListViewItem->fields._SvtId_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId_k__BackingField, 0LL);
  v14 = *(const MethodInfo **)&v19.fields.fakeValue;
  ListViewItem = *(CharaGraphServantListViewItem_o **)&v19.fields.currentCryptoKey;
  if ( !v16 )
    goto LABEL_21;
  if ( ServantFilterMaster__IsEnableServant((ServantFilterMaster_o *)v16, v19, entity->fields.eventId, 0LL) )
    return 1;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v20);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v14)) == 0LL)
    || !UserServantEntity_k__BackingField )
  {
LABEL_21:
    sub_1BCAA3C(ListViewItem, v14);
  }
  return UserServantEntity__getEventUpVal_40936552(
           UserServantEntity_k__BackingField,
           ListViewItem->fields._SetupInfo_k__BackingField,
           entity->fields.eventId,
           0LL,
           0LL);
}


CharaGraphServantListViewItem_o *__fastcall ServantCharaGraphFilterLogic__get_ListViewItem(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_listViewItem; // x0
  CharaGraphServantListViewItem_o *listViewItem; // x19
  __int64 methodPtr_low; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCharaGraphFilterLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B15534 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphServantListViewItem_TypeInfo, method, v2);
    byte_4B15534 = 1;
  }
  p_listViewItem = (PartyOrganizationUtility_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphServantListViewItem_o *)this->fields.item;
  if ( !listViewItem
    || (methodPtr_low = LOBYTE(CharaGraphServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(listViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (CharaGraphServantListViewItem_c *)listViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphServantListViewItem_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (PartyOrganizationUtility_c *)listViewItem;
    sub_1BCA784(p_listViewItem, (int64_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1BCACFC(this->fields.item);
  return (CharaGraphServantListViewItem_o *)ServantCharaGraphFilterLogic__IsMatchAllFilter(v14, v15);
}