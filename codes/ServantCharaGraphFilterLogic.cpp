void ServantCharaGraphFilterLogic___ctor(ServantCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantCharaGraphFilterLogic__IsEventUpValShow(ServantCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  ServantCharaGraphFilterLogic_o *v2; // x19
  struct ListViewSort_o *sort; // x8
  bool result; // w0
  UserServantEntity_o *v5; // x20
  EventUpValSetupInfo_o *v6; // x21
  Il2CppObject *Master_object; // x20
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v10; // x21
  Il2CppObject *v11; // x20
  const MethodInfo *v12; // x1
  int32_t v13; // w21
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v15; // x1
  int32_t v16; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // kr00_16

  v2 = this;
  if ( (byte_4D2FC97 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_ServantCharaGraphFilterLogic__IsEventUpValShow_b__11_0__);
    this = (ServantCharaGraphFilterLogic_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2FC97 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort )
LABEL_34:
    sub_1C93D2C(this, method);
  if ( !sort->fields.isBonusKind )
    return 1;
  result = 1;
  switch ( sort->fields.bonusKind2 )
  {
    case 0:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventGroupMaster___);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, v8);
      if ( !this || !Master_object )
        goto LABEL_34;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                            (EventGroupMaster_o *)Master_object,
                            *((_DWORD *)this + 47),
                            0);
      this = (ServantCharaGraphFilterLogic_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0);
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
        v10 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventGroupEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v10,
          (Il2CppObject *)v2,
          Method_ServantCharaGraphFilterLogic__IsEventUpValShow_b__11_0__,
          0);
        result = BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                   (System_Func_T__bool__o *)v10,
                   (const MethodInfo_318DB78 *)Method_BasicHelper_Any_EventGroupEntity___);
      }
      break;
    case 3:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v11 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, v12);
      if ( !this )
        goto LABEL_34;
      v13 = *((_DWORD *)this + 62);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, method);
      if ( !this || !v11 )
        goto LABEL_34;
      return EventCampaignMaster__IsEnableServant((EventCampaignMaster_o *)v11, v13, *((_DWORD *)this + 47), 0);
    case 4:
    case 5:
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, method);
      if ( !this )
        goto LABEL_34;
      v5 = (UserServantEntity_o *)*((_QWORD *)this + 29);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, method);
      if ( !this )
        goto LABEL_34;
      v6 = (EventUpValSetupInfo_o *)*((_QWORD *)this + 28);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, method);
      if ( !this || !v5 )
        goto LABEL_34;
      return UserServantEntity__getEventUpVal(v5, v6, *((_DWORD *)this + 47), 0, 0);
    case 7:
      this = (ServantCharaGraphFilterLogic_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_34;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(v2, v15);
      if ( !this )
        goto LABEL_34;
      v16 = *((_DWORD *)this + 62);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v16, 0);
      this = (ServantCharaGraphFilterLogic_o *)ServantCharaGraphFilterLogic__get_ListViewItem(
                                                 v2,
                                                 *(const MethodInfo **)&v17.fields.fakeValue);
      if ( !this || !MasterData_object )
        goto LABEL_34;
      return ServantFilterMaster__IsEnableServant(
               (ServantFilterMaster_o *)MasterData_object,
               v17,
               *((_DWORD *)this + 47),
               0);
    default:
      return result;
  }
  return result;
}


bool ServantCharaGraphFilterLogic__IsMatchAllFilter(ServantCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._5_IsMatchRarityFilter.methodPtr)(
            this,
            this->klass->vtable._5_IsMatchRarityFilter.method)
        & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._7_IsMatchClassFilter.methodPtr)(
            this,
            this->klass->vtable._7_IsMatchClassFilter.method)
        & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._8_IsMatchNPTypeFilter.methodPtr)(
            this,
            this->klass->vtable._8_IsMatchNPTypeFilter.method)
        & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._9_IsMatchNPEffectFilter.methodPtr)(
            this,
            this->klass->vtable._9_IsMatchNPEffectFilter.method)
        & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._10_IsMatchServantTypeFilter.methodPtr)(
            this,
            this->klass->vtable._10_IsMatchServantTypeFilter.method)
        & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._11_IsMatchEventBonusFilter.methodPtr)(
            this,
            this->klass->vtable._11_IsMatchEventBonusFilter.method)
        & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._12_IsMatchSkillAndTreasureDeviceFilter.methodPtr)(
            this,
            this->klass->vtable._12_IsMatchSkillAndTreasureDeviceFilter.method)
        & 1) != 0
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._6_IsMatchSelectedItemFilter.methodPtr)(
            this,
            this->klass->vtable._6_IsMatchSelectedItemFilter.method)
        & 1) != 0
      && ServantCharaGraphFilterLogic__IsEventUpValShow(this, v3)
      && (((__int64 (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._13_IsMatchAttributeFilter.methodPtr)(
            this,
            this->klass->vtable._13_IsMatchAttributeFilter.method)
        & 1) != 0
      && ((bool (__fastcall *)(ServantCharaGraphFilterLogic_o *, const MethodInfo *))this->klass->vtable._14_IsMatchSubAttributeFilter.methodPtr)(
           this,
           this->klass->vtable._14_IsMatchSubAttributeFilter.method);
}


bool ServantCharaGraphFilterLogic__IsMatchAttributeFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x19
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  const MethodInfo *v5; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20

  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, method);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v5)) == 0)
    || !sort )
  {
    sub_1C93D2C(ListViewItem, v5);
  }
  return ListViewSort__IsMatchServantAttriFilter(
           sort,
           UserServantEntity_k__BackingField,
           ListViewItem->fields._ServantEntity_k__BackingField,
           0);
}


bool ServantCharaGraphFilterLogic__IsMatchClassFilter(ServantCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  FilterKindList_c *v7; // x0
  const MethodInfo *v8; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v12; // x1
  ListViewSort_o *v13; // x20

  if ( (byte_4D2FC90 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    byte_4D2FC90 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
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
      return ListViewSort__IsMatchClassGroupFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0);
LABEL_16:
    sub_1C93D2C(ListViewItem, v12);
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
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
  return ListViewSort__IsMatchClassFilter(v13, ListViewItem->fields._ServantEntity_k__BackingField, 0);
}


bool ServantCharaGraphFilterLogic__IsMatchEventBonusFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  void *sort; // x0
  const MethodInfo *v4; // x1
  UserServantEntity_o *v6; // x20
  ListViewSort_o *v7; // x19

  if ( (byte_4D2FC94 & 1) == 0 )
  {
    sub_1C93AD4(&ServantEventBonusFilterController_TypeInfo);
    byte_4D2FC94 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_11;
  if ( ListViewSort__CheckSvtEventBonusFilterDefaultAll((ListViewSort_o *)sort, -1, 0) )
    return 1;
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v4);
  if ( !sort )
LABEL_11:
    sub_1C93D2C(sort, method);
  v6 = (UserServantEntity_o *)*((_QWORD *)sort + 29);
  v7 = this->fields.sort;
  if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
  return !ServantEventBonusFilterController__IsHideServant(v6, v7, -1, 0);
}


bool ServantCharaGraphFilterLogic__IsMatchNPEffectFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v9; // x1

  if ( (byte_4D2FC92 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    byte_4D2FC92 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
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
    sub_1C93D2C(ListViewItem, v9);
  return ListViewSort__IsMatchNPEffectFilter(sort, ListViewItem->fields._UserServantEntity_k__BackingField, 0);
}


bool ServantCharaGraphFilterLogic__IsMatchNPTypeFilter(ServantCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v9; // x1

  if ( (byte_4D2FC91 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    byte_4D2FC91 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
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
    sub_1C93D2C(ListViewItem, v9);
  return ListViewSort__IsMatchNPTypeFilter(sort, ListViewItem->fields._UserServantEntity_k__BackingField, 0);
}


bool ServantCharaGraphFilterLogic__IsMatchRarityFilter(ServantCharaGraphFilterLogic_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x2
  FilterKindList_c *v6; // x0
  __int64 v7; // x1
  struct CharaGraphListViewItemBase_o *item; // x0
  ListViewSort_o *sort; // x19

  if ( (byte_4D2FC96 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    byte_4D2FC96 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v4 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOff(
         (CharaGraphFilterLogicBase_o *)this,
         v4->static_fields->RarityFilterKindList,
         v2) )
  {
    return 1;
  }
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  if ( CharaGraphFilterLogicBase__IsAllFilterOn(
         (CharaGraphFilterLogicBase_o *)this,
         v6->static_fields->RarityFilterKindList,
         v5) )
  {
    return 1;
  }
  item = this->fields.item;
  if ( !item
    || (sort = this->fields.sort,
        item = (struct CharaGraphListViewItemBase_o *)((__int64 (__fastcall *)(struct CharaGraphListViewItemBase_o *, const MethodInfo *))item->klass->vtable._9_get_Rarity.methodPtr)(
                                                        item,
                                                        item->klass->vtable._9_get_Rarity.method),
        !sort) )
  {
    sub_1C93D2C(item, v7);
  }
  return ListViewSort__IsMatchRarityFilter(sort, (int32_t)item, 0);
}


bool ServantCharaGraphFilterLogic__IsMatchServantTypeFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FilterKindList_c *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x20
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  __int64 v9; // x1

  if ( (byte_4D2FC93 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    byte_4D2FC93 = 1;
  }
  v4 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
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
    sub_1C93D2C(ListViewItem, v9);
  return ListViewSort__IsMatchServantTypeFilter(sort, ListViewItem->fields._ServantEntity_k__BackingField, 0);
}


bool ServantCharaGraphFilterLogic__IsMatchSkillAndTreasureDeviceFilter(
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

  if ( (byte_4D2FC95 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewSort_FilterKind___TypeInfo);
    byte_4D2FC95 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_22;
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll((ListViewSort_o *)sort, 0) )
    return 1;
  v5 = this->fields.sort;
  sort = (void *)sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
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
                                         0),
        v7 = this->fields.sort,
        v8 = IsUnSelectedAllTargetFilters,
        (sort = (void *)sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1)) == 0) )
  {
LABEL_22:
    sub_1C93D2C(sort, method);
  }
  method = (const MethodInfo *)sort;
  if ( !*((_DWORD *)sort + 6) )
LABEL_23:
    sub_1C93D34(sort);
  *((_DWORD *)sort + 8) = 51;
  if ( !v7 )
    goto LABEL_22;
  v9 = ListViewSort__IsUnSelectedAllTargetFilters(v7, (ListViewSort_FilterKind_array *)sort, 0);
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v10);
  if ( !sort )
    goto LABEL_22;
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            *((System_Int32_array **)sort + 33),
                            this->fields.sort,
                            0);
  sort = ServantCharaGraphFilterLogic__get_ListViewItem(this, v12);
  if ( !sort )
    goto LABEL_22;
  v13 = ServantEquipEffectFilterController__IsMatchEffectCategory(
          *((System_Int32_array **)sort + 32),
          this->fields.sort,
          0);
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


bool ServantCharaGraphFilterLogic__IsMatchSubAttributeFilter(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x19
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  const MethodInfo *v5; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20

  sort = this->fields.sort;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, method);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v5)) == 0)
    || !sort )
  {
    sub_1C93D2C(ListViewItem, v5);
  }
  return ListViewSort__IsMatchServantSubAttriFilter(
           sort,
           UserServantEntity_k__BackingField,
           ListViewItem->fields._ServantEntity_k__BackingField,
           0);
}


bool ServantCharaGraphFilterLogic___IsEventUpValShow_b__11_0(
        ServantCharaGraphFilterLogic_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  CharaGraphServantListViewItemBase_o *ListViewItem; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x1
  int32_t SvtId_k__BackingField; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // kr00_16
  const MethodInfo *v13; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21

  if ( (byte_4D2FC98 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2FC98 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v6);
  if ( !ListViewItem || !entity || !Master_object )
    goto LABEL_21;
  if ( EventCampaignMaster__IsEnableServant(
         (EventCampaignMaster_o *)Master_object,
         ListViewItem->fields._SvtId_k__BackingField,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v10);
  if ( !ListViewItem )
    goto LABEL_21;
  SvtId_k__BackingField = ListViewItem->fields._SvtId_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId_k__BackingField, 0);
  v8 = *(const MethodInfo **)&v12.fields.fakeValue;
  ListViewItem = *(CharaGraphServantListViewItemBase_o **)&v12.fields.currentCryptoKey;
  if ( !v9 )
    goto LABEL_21;
  if ( ServantFilterMaster__IsEnableServant((ServantFilterMaster_o *)v9, v12, entity->fields.eventId, 0) )
    return 1;
  ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v13);
  if ( !ListViewItem
    || (UserServantEntity_k__BackingField = ListViewItem->fields._UserServantEntity_k__BackingField,
        (ListViewItem = ServantCharaGraphFilterLogic__get_ListViewItem(this, v8)) == 0)
    || !UserServantEntity_k__BackingField )
  {
LABEL_21:
    sub_1C93D2C(ListViewItem, v8);
  }
  return UserServantEntity__getEventUpVal(
           UserServantEntity_k__BackingField,
           ListViewItem->fields._SetupInfo_k__BackingField,
           entity->fields.eventId,
           0,
           0);
}


CharaGraphServantListViewItemBase_o *ServantCharaGraphFilterLogic__get_ListViewItem(
        ServantCharaGraphFilterLogic_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_listViewItem; // x0
  CharaGraphServantListViewItemBase_o *listViewItem; // x19
  __int64 naturalAligment; // x9
  struct CharaGraphListViewItemBase_o *item; // x1
  ServantCharaGraphFilterLogic_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4D2FC8F & 1) == 0 )
  {
    sub_1C93AD4(&CharaGraphServantListViewItemBase_TypeInfo);
    byte_4D2FC8F = 1;
  }
  p_listViewItem = (GrandQuestFolderBoardItem_o *)&this->fields.listViewItem;
  listViewItem = this->fields.listViewItem;
  if ( listViewItem )
    return listViewItem;
  listViewItem = (CharaGraphServantListViewItemBase_o *)this->fields.item;
  if ( !listViewItem
    || (naturalAligment = CharaGraphServantListViewItemBase_TypeInfo->_2.naturalAligment,
        listViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (CharaGraphServantListViewItemBase_c *)listViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphServantListViewItemBase_TypeInfo )
  {
    item = this->fields.item;
    p_listViewItem->klass = (GrandQuestFolderBoardItem_c *)listViewItem;
    sub_1C93A78(p_listViewItem, (int32_t)item, v2, v3, v4, v5, v6, v7);
    return listViewItem;
  }
  sub_1C940C8(this->fields.item);
  return (CharaGraphServantListViewItemBase_o *)ServantCharaGraphFilterLogic__IsMatchAllFilter(v14, v15);
}