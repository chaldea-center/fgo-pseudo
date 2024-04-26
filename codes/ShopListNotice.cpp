void __fastcall ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  ShopListNotice___c_c *v5; // x0
  struct ShopListNotice___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x21
  Il2CppObject *v8; // x22
  struct ShopListNotice___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  ShopListNotice_o *v17; // x25
  const MethodInfo *v18; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v20; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v22; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v24; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v26; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v28; // w21
  const MethodInfo *v29; // x3
  ShopEntity_array *v30; // x23
  const MethodInfo *v31; // x2
  ShopListNotice_o *v32; // x22
  const MethodInfo *v33; // x3
  ShopListNotice_o *v34; // x0
  const MethodInfo *v35; // x2
  _BOOL8 v36; // x0
  bool v37; // w23
  const MethodInfo *v38; // x3
  ShopEntity_array *v39; // x26
  const MethodInfo *v40; // x2
  ShopListNotice_o *v41; // x24
  const MethodInfo *v42; // x3
  ShopListNotice_o *v43; // x0
  const MethodInfo *v44; // x2
  _BOOL8 v45; // x0
  bool v46; // w27
  const MethodInfo *v47; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v49; // w26
  const MethodInfo *v50; // x3
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x5
  _BOOL8 IsEnableEventShop_28241556; // x0
  bool v55; // w1
  bool v56; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_43536AF & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_B70694(&Method_System_Func_ShopEntity__bool___ctor__);
    sub_B70694(&System_Func_ShopEntity__bool__TypeInfo);
    sub_B70694(&Method_ShopListNotice___c___ctor_b__36_0__);
    sub_B70694(&ShopListNotice___c_TypeInfo);
    byte_43536AF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = ShopListNotice___c_TypeInfo;
  if ( (BYTE3(ShopListNotice___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopListNotice___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopListNotice___c_TypeInfo);
    v5 = ShopListNotice___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = ShopListNotice___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__36_0,
      v8,
      Method_ShopListNotice___c___ctor_b__36_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_ShopEntity__bool___ctor__);
    v9 = ShopListNotice___c_TypeInfo->static_fields;
    v9->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v9->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v17 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                              v16,
                              (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v17, (ShopEntity_array *)v17, v18);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v17,
                                1,
                                v20);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v22);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v24);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v26);
  v28 = IsLimitedIconShow;
  v30 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v17,
          2,
          v29);
  v32 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v30, v31);
  v34 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v32, v30, (int64_t)v32, v33);
  v36 = ShopListNotice__GetIsLimitedIconShow(v34, (ShopEntity_array *)v34, v35);
  v37 = v36;
  v39 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v36, (ShopEntity_array *)v17, 3, v38);
  v41 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v39, v40);
  v43 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v41, v39, (int64_t)v41, v42);
  v45 = ShopListNotice__GetIsLimitedIconShow(v43, (ShopEntity_array *)v43, v44);
  v46 = v45;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v45, v39, v47);
  v49 = IndefiniteTimeLimit;
  Master_WarQuestSelectionMaster = (ShopMaster_o *)ShopListNotice__GetShopEntitiesByLimitedType(
                                                     (ShopListNotice_o *)IndefiniteTimeLimit,
                                                     (ShopEntity_array *)v17,
                                                     4,
                                                     v50);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      IsEnableEventShop_28241556 = ShopMaster__IsEnableEventShop_28241556(Master_WarQuestSelectionMaster, v52);
      goto LABEL_19;
    }
LABEL_23:
    sub_B7076C(Master_WarQuestSelectionMaster, v52);
  }
  IsEnableEventShop_28241556 = 0LL;
LABEL_19:
  v55 = v28;
  v56 = IsEnableEventShop_28241556;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_28241556,
                      v55,
                      v37,
                      v46,
                      IsEnableEventShop_28241556,
                      v53);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v32;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v41;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v49;
  this->fields._IsSpecialSummonable_k__BackingField = v56;
  if ( ShopLimitedType <= 0x1E && ((1 << ShopLimitedType) & 0x55005408) != 0 )
    this->fields._IsShowNew_k__BackingField = 1;
}


bool __fastcall ShopListNotice__GetIndefiniteTimeLimit(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v5; // w20
  __int64 v7; // x0

  if ( !shopEntities )
LABEL_11:
    sub_B7076C(this, shopEntities);
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B70798(this);
      sub_B70738(v7, 0LL);
    }
    this = (ShopListNotice_o *)shopEntities->m_Items[v5];
    if ( !this )
      goto LABEL_11;
    this = (ShopListNotice_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 0x40000, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    max_length = shopEntities->max_length;
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


bool __fastcall ShopListNotice__GetIsLimitedIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v5; // x1
  signed int max_length; // w8
  UserShopMaster_o *v7; // x20
  unsigned int v8; // w21
  ShopEntity_o *v9; // x23
  __int64 v11; // x0

  if ( (byte_43536B1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43536B1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_19:
    sub_B7076C(Instance, v5);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = (UserShopMaster_o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v11 = sub_B70798(Instance);
      sub_B70738(v11, 0LL);
    }
    v9 = shopEntities->m_Items[v8];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v9 || !v7 )
      goto LABEL_19;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v7, Instance, v9->fields.baseShopId, 0LL);
    if ( !Instance
      || *(_QWORD *)(Instance + 40) < v9->fields.openedAt
      || *(_DWORD *)(Instance + 28) < v9->fields.limitNum )
    {
      return 1;
    }
    max_length = shopEntities->max_length;
    if ( (int)++v8 >= max_length )
      return 0;
  }
}


bool __fastcall ShopListNotice__GetIsNewIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  uint64_t dateData; // x20
  int64_t Instance; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  UserShopMaster_o *v8; // x21
  unsigned int v9; // w25
  ShopEntity_o *v10; // x28
  int64_t openedAt; // x22
  int32_t Hour; // w22
  int32_t Minute; // w23
  int32_t Second; // w3
  uint64_t v15; // x22
  int64_t v16; // x23
  System_DateTime_o v17; // x0
  BalanceConfig_c *v18; // x8
  const MethodInfo *v19; // x2
  double v20; // d0
  __int64 v22; // x0
  uint64_t v23; // [xsp+8h] [xbp-78h] BYREF
  int64_t v24; // [xsp+10h] [xbp-70h] BYREF
  uint64_t v25; // [xsp+18h] [xbp-68h] BYREF
  __int64 v26; // [xsp+20h] [xbp-60h] BYREF
  __int64 v27; // [xsp+28h] [xbp-58h]
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_TimeSpan_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x0.8
  System_TimeSpan_o v37; // 0:x1.8
  System_DateTime_o v38; // 0:x1.8
  System_DateTimeOffset_o v39; // 0:x0.16

  if ( (byte_43536B0 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&System_DateTime_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43536B0 = 1;
  }
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  v26 = 0LL;
  v27 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_33:
    sub_B7076C(Instance, v6);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = (UserShopMaster_o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v22 = sub_B70798(Instance);
      sub_B70738(v22, 0LL);
    }
    v10 = shopEntities->m_Items[v9];
    if ( !v10 )
      goto LABEL_33;
    openedAt = v10->fields.openedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v25 = NetworkManager__getDateTime_25947808(openedAt, 0LL).fields.dateData;
    v28.fields.dateData = (uint64_t)&v25;
    Hour = System_DateTime__get_Hour(v28, 0LL);
    v29.fields.dateData = (uint64_t)&v25;
    Minute = System_DateTime__get_Minute(v29, 0LL);
    v30.fields.dateData = (uint64_t)&v25;
    Second = System_DateTime__get_Second(v30, 0LL);
    v31.fields._ticks = (int64_t)&v24;
    System_TimeSpan___ctor_41941328(v31, Hour, Minute, Second, 0LL);
    v16 = v24;
    v15 = v25;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v32.fields.dateData = v15;
    v37.fields._ticks = v16;
    v17.fields.dateData = System_DateTime__op_Subtraction(v32, v37, 0LL).fields.dateData;
    v18 = BalanceConfig_TypeInfo;
    v25 = v17.fields.dateData;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    v33.fields.dateData = (uint64_t)&v25;
    v25 = System_DateTime__AddDays(v33, v18->static_fields->ShopNewItemAddDays, 0LL).fields.dateData;
    v39.fields.m_dateTime.fields.dateData = (uint64_t)&v26;
    *(_QWORD *)&v39.fields.m_offsetMinutes = 0LL;
    v23 = System_DateTimeOffset__get_LocalDateTime(v39, v19).fields.dateData;
    v34.fields.dateData = (uint64_t)&v23;
    v20 = (double)-System_DateTime__get_Hour(v34, 0LL);
    v35.fields.dateData = (uint64_t)&v25;
    v38.fields.dateData = System_DateTime__AddHours(v35, v20, 0LL).fields.dateData;
    v25 = v38.fields.dateData;
    v36.fields.dateData = dateData;
    Instance = System_DateTime__op_GreaterThan(v36, v38, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v8 )
        goto LABEL_33;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v8, Instance, v10->fields.baseShopId, 0LL);
      if ( !Instance
        || *(_QWORD *)(Instance + 40) < v10->fields.openedAt
        || *(_DWORD *)(Instance + 28) < v10->fields.limitNum )
      {
        return 1;
      }
    }
    max_length = shopEntities->max_length;
    if ( (int)++v9 >= max_length )
      return 0;
  }
}


int64_t __fastcall ShopListNotice__GetMostRecentTimeLimit(
        ShopListNotice_o *this,
        ShopEntity_array *entities,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  __int64 v8; // x21
  unsigned int v9; // w24
  int64_t v10; // x22
  Il2CppClass **v11; // x8
  Il2CppClass *v12; // x23
  __int64 events; // x26
  __int64 v15; // x0

  if ( (byte_43536B4 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43536B4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !entities )
    goto LABEL_21;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v8 = Time;
    v9 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v15 = sub_B70798(Time);
        sub_B70738(v15, 0LL);
      }
      v11 = &entities->obj.klass + (int)v9;
      v12 = v11[4];
      if ( !v12 )
        break;
      events = (__int64)v12->_1.events;
      if ( events >= v8 )
      {
        Time = ShopEntity__GetRemainDays((ShopEntity_o *)v11[4], 0LL);
        if ( events - 86400 * (int)Time <= v8 && (!v10 || (__int64)v12->_1.events < v10) )
        {
          v10 = (int64_t)v12->_1.events;
          this->fields._ExchangeServantEventId_k__BackingField = (int32_t)v12->_1.namespaze;
        }
      }
      max_length = entities->max_length;
      if ( (int)++v9 >= max_length )
        return v10;
    }
LABEL_21:
    sub_B7076C(Time, v6);
  }
  return 0LL;
}


ShopEntity_array *__fastcall ShopListNotice__GetShopEntitiesByLimitedType(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  _BOOL8 IsLimitedIconDisplayTarget; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  ShopEntity_o **m_Items; // x23
  int v12; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x21
  __int64 v15; // x0

  if ( (byte_43536B2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_43536B2 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_24;
  v9 = *(_QWORD *)&shopEntities->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    v12 = type - 1;
    while ( 2 )
    {
      if ( v10 < (unsigned int)v9 )
      {
        m_Items = shopEntities->m_Items;
        v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)shopEntities->m_Items[v10];
        switch ( v12 )
        {
          case 0:
            if ( !v13 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v10], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 1:
            if ( !v13 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v10], 0LL);
            if ( IsLimitedIconDisplayTarget )
              goto LABEL_19;
            goto LABEL_21;
          case 2:
            if ( !v13 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v10], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 3:
            if ( !v13 )
              goto LABEL_24;
            if ( v13[1].fields.addCount != 12 )
              goto LABEL_21;
LABEL_19:
            if ( !v6 )
              goto LABEL_24;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v6,
              v13,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
LABEL_21:
            LODWORD(v9) = shopEntities->max_length;
            if ( (__int64)++v10 >= (int)v9 )
              goto LABEL_22;
            continue;
          default:
            goto LABEL_21;
        }
      }
      break;
    }
    v15 = sub_B70798(IsLimitedIconDisplayTarget);
    sub_B70738(v15, 0LL);
  }
LABEL_22:
  if ( !v6 )
LABEL_24:
    sub_B7076C(IsLimitedIconDisplayTarget, v8);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                               (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


int32_t __fastcall ShopListNotice__GetShopLimitedType(
        ShopListNotice_o *this,
        bool isPeriodShow,
        bool isMonthlyShow,
        bool isExchangeServantShow,
        bool isSpecialSummonableShow,
        const MethodInfo *method)
{
  bool v6; // w10
  int32_t result; // w0
  bool v8; // w11
  bool v9; // w12
  bool v10; // w9
  bool v11; // w10
  int v12; // w12
  bool v13; // w11
  int32_t v14; // w9
  int32_t v15; // w9

  v6 = isPeriodShow && isExchangeServantShow;
  if ( isPeriodShow && isExchangeServantShow && isMonthlyShow && isSpecialSummonableShow )
    return 30;
  if ( isMonthlyShow && isExchangeServantShow && isSpecialSummonableShow )
    return 28;
  v8 = isPeriodShow && isMonthlyShow;
  if ( isPeriodShow && isMonthlyShow && isSpecialSummonableShow )
    return 22;
  v9 = v6 && isSpecialSummonableShow;
  v10 = v6 && isSpecialSummonableShow || isPeriodShow && isExchangeServantShow && isMonthlyShow;
  v11 = v8 || v6;
  if ( v9 )
    v12 = 26;
  else
    v12 = 14;
  v13 = v8 || v10;
  if ( v10 )
    v14 = v12;
  else
    v14 = 6;
  if ( v13 )
    result = v14;
  else
    result = 10;
  if ( !v11 )
  {
    result = isPeriodShow && isSpecialSummonableShow ? 18 : 12;
    if ( (!isMonthlyShow || !isExchangeServantShow) && (!isPeriodShow || !isSpecialSummonableShow) )
    {
      if ( isExchangeServantShow && isSpecialSummonableShow )
      {
        return 24;
      }
      else
      {
        if ( isMonthlyShow && isSpecialSummonableShow )
          v15 = 20;
        else
          v15 = 1;
        if ( (!isMonthlyShow || !isSpecialSummonableShow) && !isPeriodShow )
          v15 = 2;
        if ( isMonthlyShow || isPeriodShow )
          result = v15;
        else
          result = 3;
        if ( !isMonthlyShow && !isPeriodShow && !isExchangeServantShow )
        {
          if ( isSpecialSummonableShow )
            return 4;
          else
            return 0;
        }
      }
    }
  }
  return result;
}


ShopEntity_array *__fastcall ShopListNotice__GetTimeLimitedShopEntities(
        ShopListNotice_o *this,
        ShopEntity_array *entities,
        int64_t timeLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  __int64 v7; // x0
  ShopEntity_o *v8; // x1
  signed int max_length; // w8
  unsigned int v10; // w22
  __int64 v12; // x0

  if ( (byte_43536B3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_43536B3 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_14;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v12 = sub_B70798(v7);
        sub_B70738(v12, 0LL);
      }
      v8 = entities->m_Items[v10];
      if ( !v8 )
        break;
      if ( v8->fields.closedAt == timeLimit )
      {
        if ( !v6 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B7076C(v7, v8);
  }
LABEL_12:
  if ( !v6 )
    goto LABEL_14;
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                               (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


int32_t __fastcall ShopListNotice__get_ExchangeServantEventId(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._ExchangeServantEventId_k__BackingField;
}


int64_t __fastcall ShopListNotice__get_ExchangeServatTimeLimit(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._ExchangeServatTimeLimit_k__BackingField;
}


bool __fastcall ShopListNotice__get_IsIndefiniteExchangeServant(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsIndefiniteExchangeServant_k__BackingField;
}


bool __fastcall ShopListNotice__get_IsShowNew(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsShowNew_k__BackingField;
}


bool __fastcall ShopListNotice__get_IsSpecialSummonable(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsSpecialSummonable_k__BackingField;
}


int32_t __fastcall ShopListNotice__get_LimitedType(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._LimitedType_k__BackingField;
}


int64_t __fastcall ShopListNotice__get_MonthlyTimeLimit(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._MonthlyTimeLimit_k__BackingField;
}


int64_t __fastcall ShopListNotice__get_MostRecentTimeLimit(ShopListNotice_o *this, const MethodInfo *method)
{
  int64_t PeriodTimeLimit_k__BackingField; // x8

  PeriodTimeLimit_k__BackingField = this->fields._PeriodTimeLimit_k__BackingField;
  if ( PeriodTimeLimit_k__BackingField >= this->fields._MonthlyTimeLimit_k__BackingField )
    PeriodTimeLimit_k__BackingField = this->fields._MonthlyTimeLimit_k__BackingField;
  if ( PeriodTimeLimit_k__BackingField >= this->fields._ExchangeServatTimeLimit_k__BackingField )
    return this->fields._ExchangeServatTimeLimit_k__BackingField;
  else
    return PeriodTimeLimit_k__BackingField;
}


int64_t __fastcall ShopListNotice__get_PeriodTimeLimit(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._PeriodTimeLimit_k__BackingField;
}


void __fastcall ShopListNotice__set_ExchangeServantEventId(
        ShopListNotice_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ExchangeServantEventId_k__BackingField = value;
}


void __fastcall ShopListNotice__set_ExchangeServatTimeLimit(
        ShopListNotice_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._ExchangeServatTimeLimit_k__BackingField = value;
}


void __fastcall ShopListNotice__set_IsIndefiniteExchangeServant(
        ShopListNotice_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIndefiniteExchangeServant_k__BackingField = value;
}


void __fastcall ShopListNotice__set_IsShowNew(ShopListNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsShowNew_k__BackingField = value;
}


void __fastcall ShopListNotice__set_IsSpecialSummonable(ShopListNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSpecialSummonable_k__BackingField = value;
}


void __fastcall ShopListNotice__set_LimitedType(ShopListNotice_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._LimitedType_k__BackingField = value;
}


void __fastcall ShopListNotice__set_MonthlyTimeLimit(ShopListNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._MonthlyTimeLimit_k__BackingField = value;
}


void __fastcall ShopListNotice__set_PeriodTimeLimit(ShopListNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._PeriodTimeLimit_k__BackingField = value;
}


void __fastcall ShopListNotice___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F87D & 1) == 0 )
  {
    sub_B70694(&ShopListNotice___c_TypeInfo);
    byte_434F87D = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)ShopListNotice___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall ShopListNotice___c___ctor(ShopListNotice___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopListNotice___c____ctor_b__36_0(
        ShopListNotice___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return !ShopEntity__IsSoldOut(x, 0LL);
}