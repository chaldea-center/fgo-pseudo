void __fastcall ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  ShopListNotice___c_c *v5; // x0
  System_Func_object__bool__o *_9__36_0; // x21
  Il2CppObject *v7; // x22
  struct ShopListNotice___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  ShopListNotice_o *v16; // x23
  const MethodInfo *v17; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v19; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v21; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v23; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v25; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v27; // w21
  const MethodInfo *v28; // x3
  ShopEntity_array *v29; // x24
  const MethodInfo *v30; // x2
  ShopListNotice_o *v31; // x22
  const MethodInfo *v32; // x3
  ShopListNotice_o *v33; // x0
  const MethodInfo *v34; // x2
  _BOOL8 v35; // x0
  bool v36; // w24
  const MethodInfo *v37; // x3
  ShopEntity_array *v38; // x26
  const MethodInfo *v39; // x2
  ShopListNotice_o *v40; // x25
  const MethodInfo *v41; // x3
  ShopListNotice_o *v42; // x0
  const MethodInfo *v43; // x2
  _BOOL8 v44; // x0
  bool v45; // w27
  const MethodInfo *v46; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v48; // w26
  const MethodInfo *v49; // x3
  ShopEntity_array *Master_object; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x5
  _BOOL8 IsEnableEventShop_41197884; // x0
  bool v54; // w1
  bool v55; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_4BD8A11 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1C21E38(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C21E38(&Method_ShopListNotice___c___ctor_b__36_0__);
    sub_1C21E38(&ShopListNotice___c_TypeInfo);
    byte_4BD8A11 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = ShopListNotice___c_TypeInfo;
  if ( !ShopListNotice___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopListNotice___c_TypeInfo);
    v5 = ShopListNotice___c_TypeInfo;
  }
  _9__36_0 = (System_Func_object__bool__o *)v5->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ShopListNotice___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__36_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__36_0, v7, Method_ShopListNotice___c___ctor_b__36_0__, 0LL);
    static_fields = ShopListNotice___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__36_0, (int64_t)_9__36_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v16 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_object_(
                              v15,
                              (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v16, (ShopEntity_array *)v16, v17);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v16,
                                1,
                                v19);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v21);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v23);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v25);
  v27 = IsLimitedIconShow;
  v29 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v16,
          2,
          v28);
  v31 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v29, v30);
  v33 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v31, v29, (int64_t)v31, v32);
  v35 = ShopListNotice__GetIsLimitedIconShow(v33, (ShopEntity_array *)v33, v34);
  v36 = v35;
  v38 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v35, (ShopEntity_array *)v16, 3, v37);
  v40 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v38, v39);
  v42 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v40, v38, (int64_t)v40, v41);
  v44 = ShopListNotice__GetIsLimitedIconShow(v42, (ShopEntity_array *)v42, v43);
  v45 = v44;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v44, v38, v46);
  v48 = IndefiniteTimeLimit;
  Master_object = ShopListNotice__GetShopEntitiesByLimitedType(
                    (ShopListNotice_o *)IndefiniteTimeLimit,
                    (ShopEntity_array *)v16,
                    4,
                    v49);
  if ( !Master_object )
    goto LABEL_20;
  if ( *(_QWORD *)&Master_object->max_length )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      IsEnableEventShop_41197884 = ShopMaster__IsEnableEventShop_41197884((ShopMaster_o *)Master_object, 0LL);
      goto LABEL_16;
    }
LABEL_20:
    sub_1C22094(Master_object, v51);
  }
  IsEnableEventShop_41197884 = 0LL;
LABEL_16:
  v54 = v27;
  v55 = IsEnableEventShop_41197884;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_41197884,
                      v54,
                      v36,
                      v45,
                      IsEnableEventShop_41197884,
                      v52);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v31;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v40;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v48;
  this->fields._IsSpecialSummonable_k__BackingField = v55;
  if ( ShopLimitedType <= 0x1E && ((1 << ShopLimitedType) & 0x55005408) != 0 )
    this->fields._IsShowNew_k__BackingField = 1;
}


bool __fastcall ShopListNotice__GetIndefiniteTimeLimit(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  signed int max_length; // w8
  bool v5; // w20
  signed int v6; // w21

  if ( !shopEntities )
    goto LABEL_10;
  max_length = shopEntities->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C2209C(this, shopEntities);
      this = (ShopListNotice_o *)shopEntities->m_Items[v6];
      if ( !this )
        break;
      this = (ShopListNotice_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 0x40000, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        max_length = shopEntities->max_length;
        v5 = ++v6 < max_length;
        if ( v6 < max_length )
          continue;
      }
      return v5;
    }
LABEL_10:
    sub_1C22094(this, shopEntities);
  }
  return v5;
}


bool __fastcall ShopListNotice__GetIsLimitedIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  signed int max_length; // w8
  UserShopMaster_o *v7; // x20
  unsigned int v8; // w22
  ShopEntity_o *v9; // x25

  if ( (byte_4BD8A13 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A13 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_22:
    sub_1C22094(Instance, v5);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = (UserShopMaster_o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1C2209C(Instance, v5);
    v9 = shopEntities->m_Items[v8];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v9 || !v7 )
      goto LABEL_22;
    Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                  v7,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  v9->fields.baseShopId,
                                  0LL);
    if ( !Instance
      || (__int64)Instance->fields.lookup < v9->fields.openedAt
      || SHIDWORD(Instance->fields.m_CancellationTokenSource) < v9->fields.limitNum )
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
  uint64_t dateData; // x21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  UserShopMaster_o *v8; // x22
  unsigned int v9; // w26
  ShopEntity_o *v10; // x28
  int64_t openedAt; // x23
  int32_t Hour; // w23
  int32_t Minute; // w24
  int32_t Second; // w25
  System_DateTime_o v15; // x0
  BalanceConfig_c *v16; // x8
  const MethodInfo *v17; // x2
  double v18; // d0
  uint64_t v20; // [xsp+8h] [xbp-88h] BYREF
  int64_t v21; // [xsp+10h] [xbp-80h] BYREF
  uint64_t v22; // [xsp+18h] [xbp-78h] BYREF
  __int64 v23[2]; // [xsp+20h] [xbp-70h] BYREF
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8
  System_TimeSpan_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_TimeSpan_o v33; // 0:x1.8
  System_DateTime_o v34; // 0:x1.8
  System_DateTimeOffset_o v35; // 0:x0.16

  if ( (byte_4BD8A12 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C21E38(&System_DateTimeOffset_TypeInfo);
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&System_TimeSpan_TypeInfo);
    byte_4BD8A12 = 1;
  }
  v21 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  v23[0] = 0LL;
  v23[1] = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_36:
    sub_1C22094(Instance, v6);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = (UserShopMaster_o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
      sub_1C2209C(Instance, v6);
    v10 = shopEntities->m_Items[v9];
    if ( !v10 )
      goto LABEL_36;
    openedAt = v10->fields.openedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v22 = NetworkManager__getDateTime_39807076(openedAt, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v24.fields._dateData = (uint64_t)&v22;
    Hour = System_DateTime__get_Hour(v24, 0LL);
    v25.fields._dateData = (uint64_t)&v22;
    Minute = System_DateTime__get_Minute(v25, 0LL);
    v26.fields._dateData = (uint64_t)&v22;
    Second = System_DateTime__get_Second(v26, 0LL);
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v27.fields._ticks = (int64_t)&v21;
    System_TimeSpan___ctor_64020928(v27, Hour, Minute, Second, 0LL);
    v33.fields._ticks = v21;
    v28.fields._dateData = v22;
    v15.fields._dateData = System_DateTime__op_Subtraction(v28, v33, 0LL).fields._dateData;
    v16 = BalanceConfig_TypeInfo;
    v22 = v15.fields._dateData;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    v29.fields._dateData = (uint64_t)&v22;
    v22 = System_DateTime__AddDays(v29, v16->static_fields->ShopNewItemAddDays, 0LL).fields._dateData;
    if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
    v35.fields._dateTime.fields._dateData = (uint64_t)v23;
    *(_QWORD *)&v35.fields._offsetMinutes = 0LL;
    v20 = System_DateTimeOffset__get_LocalDateTime(v35, v17).fields._dateData;
    v30.fields._dateData = (uint64_t)&v20;
    v18 = (double)-System_DateTime__get_Hour(v30, 0LL);
    v31.fields._dateData = (uint64_t)&v22;
    v34.fields._dateData = System_DateTime__AddHours(v31, v18, 0LL).fields._dateData;
    v22 = v34.fields._dateData;
    v32.fields._dateData = dateData;
    Instance = (DataManager_o *)System_DateTime__op_GreaterThan(v32, v34, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v8 )
        goto LABEL_36;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v8,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v10->fields.baseShopId,
                                    0LL);
      if ( !Instance
        || (__int64)Instance->fields.lookup < v10->fields.openedAt
        || SHIDWORD(Instance->fields.m_CancellationTokenSource) < v10->fields.limitNum )
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

  if ( (byte_4BD8A16 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD8A16 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !entities )
    goto LABEL_19;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v8 = Time;
    v9 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C2209C(Time, v6);
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
LABEL_19:
    sub_1C22094(Time, v6);
  }
  return 0LL;
}


ShopEntity_array *__fastcall ShopListNotice__GetShopEntitiesByLimitedType(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x20
  _BOOL8 IsLimitedIconDisplayTarget; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  ShopEntity_o **m_Items; // x24
  int v18; // w25
  ShopEntity_o *v19; // x21
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BD8A14 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4BD8A14 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_27;
  v15 = *(_QWORD *)&shopEntities->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v18 = type - 1;
    while ( 2 )
    {
      if ( v16 < (unsigned int)v15 )
      {
        m_Items = shopEntities->m_Items;
        v19 = shopEntities->m_Items[v16];
        switch ( v18 )
        {
          case 0:
            if ( !v19 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v16], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 1:
            if ( !v19 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v16], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 2:
            if ( !v19 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v16], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 3:
            if ( !v19 )
              goto LABEL_27;
            if ( v19->fields.shopType != 12 )
              goto LABEL_24;
LABEL_19:
            if ( !v6 )
              goto LABEL_27;
            items = v6->fields._items;
            v21 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v19,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v19;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v19, v9, v10, v11, v12, v13, v14);
            }
LABEL_24:
            LODWORD(v15) = shopEntities->max_length;
            if ( (__int64)++v16 >= (int)v15 )
              goto LABEL_25;
            continue;
          default:
            goto LABEL_24;
        }
      }
      break;
    }
    sub_1C2209C(IsLimitedIconDisplayTarget, v8);
  }
LABEL_25:
  if ( !v6 )
LABEL_27:
    sub_1C22094(IsLimitedIconDisplayTarget, v8);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


int32_t __fastcall ShopListNotice__GetShopLimitedType(
        ShopListNotice_o *this,
        bool isPeriodShow,
        bool isMonthlyShow,
        bool isExchangeServantShow,
        bool isSpecialSummonableShow,
        const MethodInfo *method)
{
  bool v6; // w9
  int32_t result; // w0
  bool v8; // w11
  bool v9; // w12
  bool v10; // w10
  bool v11; // w9
  int v12; // w12
  bool v13; // w11
  int32_t v14; // w10
  int32_t v15; // w8
  int32_t v16; // w8

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
        if ( isMonthlyShow && isSpecialSummonableShow || isPeriodShow )
          result = v15;
        else
          result = 2;
        if ( !isPeriodShow && !isMonthlyShow )
        {
          if ( isSpecialSummonableShow )
            v16 = 4;
          else
            v16 = 0;
          if ( isExchangeServantShow )
            return 3;
          else
            return v16;
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
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 v7; // x0
  Il2CppObject *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  signed int max_length; // w8
  unsigned int v16; // w22
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4BD8A15 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4BD8A15 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_17;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C2209C(v7, v8);
      v8 = (Il2CppObject *)entities->m_Items[v16];
      if ( !v8 )
        break;
      if ( v8[8].monitor == (void *)timeLimit )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v18 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v8, v9, v10, v11, v12, v13, v14);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C22094(v7, v8);
  }
LABEL_15:
  if ( !v6 )
    goto LABEL_17;
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8A17 & 1) == 0 )
  {
    sub_1C21E38(&ShopListNotice___c_TypeInfo);
    byte_4BD8A17 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ShopListNotice___c_TypeInfo->static_fields->__9 = (struct ShopListNotice___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ShopListNotice___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return !ShopEntity__IsSoldOut(x, 0LL);
}