void ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  ShopListNotice___c_c *v5; // x0
  System_Func_object__bool__o *_9__36_0; // x21
  Il2CppObject *v7; // x22
  struct ShopListNotice___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
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
  _BOOL8 IsEnableEventShop_43416392; // x0
  bool v54; // w1
  bool v55; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_4CEA87C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1C7BAE8(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_ShopListNotice___c___ctor_b__36_0__);
    sub_1C7BAE8(&ShopListNotice___c_TypeInfo);
    byte_4CEA87C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
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
    _9__36_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__36_0, v7, Method_ShopListNotice___c___ctor_b__36_0__, 0);
    static_fields = ShopListNotice___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__36_0,
      (int32_t)_9__36_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v16 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_object_(
                              v15,
                              (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
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
  if ( Master_object->max_length )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      IsEnableEventShop_43416392 = ShopMaster__IsEnableEventShop_43416392((ShopMaster_o *)Master_object, 0);
      goto LABEL_16;
    }
LABEL_20:
    sub_1C7BD40(Master_object, v51);
  }
  IsEnableEventShop_43416392 = 0;
LABEL_16:
  v54 = v27;
  v55 = IsEnableEventShop_43416392;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_43416392,
                      v54,
                      v36,
                      v45,
                      IsEnableEventShop_43416392,
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


bool ShopListNotice__GetIndefiniteTimeLimit(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  int max_length; // w8
  bool v5; // w20
  int v6; // w21

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
        sub_1C7BD48(this);
      this = (ShopListNotice_o *)shopEntities->m_Items[v6];
      if ( !this )
        break;
      this = (ShopListNotice_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 0x40000, 0);
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
    sub_1C7BD40(this, shopEntities);
  }
  return v5;
}


bool ShopListNotice__GetIsLimitedIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  int max_length; // w8
  UserShopMaster_o *v7; // x20
  unsigned int v8; // w22
  ShopEntity_o *v9; // x25

  if ( (byte_4CEA87E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA87E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_22:
    sub_1C7BD40(Instance, v5);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = (UserShopMaster_o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1C7BD48(Instance);
    v9 = shopEntities->m_Items[v8];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
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
                                  0);
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


bool ShopListNotice__GetIsNewIconShow(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  System_DateTime_o v4; // x21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  UserShopMaster_o *v8; // x22
  unsigned int v9; // w26
  ShopEntity_o *v10; // x28
  int64_t openedAt; // x23
  System_DateTime_o v12; // x0
  int32_t Hour; // w23
  System_DateTime_o v14; // x0
  int32_t Minute; // w24
  System_DateTime_o v16; // x0
  int32_t Second; // w25
  System_TimeSpan_o v18; // x0
  System_DateTime_o v19; // x0
  System_TimeSpan_o v20; // x1
  System_DateTime_o v21; // x0
  BalanceConfig_c *v22; // x8
  System_DateTime_o v23; // x0
  System_DateTime_o v24; // x2
  System_DateTime_o v25; // x0
  double v26; // d0
  System_DateTime_o v27; // x0
  System_DateTime_o v28; // x1
  System_DateTime_o v29; // x0
  uint64_t v31; // [xsp+8h] [xbp-88h] BYREF
  int64_t v32; // [xsp+10h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-78h] BYREF
  _QWORD v34[2]; // [xsp+20h] [xbp-70h] BYREF
  System_DateTimeOffset_o v35; // 0:x0.16

  if ( (byte_4CEA87D & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C7BAE8(&System_DateTimeOffset_TypeInfo);
    sub_1C7BAE8(&System_DateTime_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&System_TimeSpan_TypeInfo);
    byte_4CEA87D = 1;
  }
  v32 = 0;
  dateData = 0;
  v31 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  v34[0] = 0;
  v34[1] = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_36:
    sub_1C7BD40(Instance, v6);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = (UserShopMaster_o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
      sub_1C7BD48(Instance);
    v10 = shopEntities->m_Items[v9];
    if ( !v10 )
      goto LABEL_36;
    openedAt = v10->fields.openedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_41943204(openedAt, 0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v12.fields._dateData = (uint64_t)&dateData;
    Hour = System_DateTime__get_Hour(v12, 0);
    v14.fields._dateData = (uint64_t)&dateData;
    Minute = System_DateTime__get_Minute(v14, 0);
    v16.fields._dateData = (uint64_t)&dateData;
    Second = System_DateTime__get_Second(v16, 0);
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v18.fields._ticks = (int64_t)&v32;
    System_TimeSpan___ctor_65787236(v18, Hour, Minute, Second, 0);
    v20.fields._ticks = v32;
    v19.fields._dateData = dateData;
    v21.fields._dateData = System_DateTime__op_Subtraction(v19, v20, 0).fields._dateData;
    v22 = BalanceConfig_TypeInfo;
    dateData = v21.fields._dateData;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v23.fields._dateData = (uint64_t)&dateData;
    dateData = System_DateTime__AddDays(v23, v22->static_fields->ShopNewItemAddDays, 0).fields._dateData;
    if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
    v35.fields._dateTime.fields._dateData = (uint64_t)v34;
    *(_QWORD *)&v35.fields._offsetMinutes = 0;
    v31 = System_DateTimeOffset__get_LocalDateTime(v35, (const MethodInfo *)v24.fields._dateData).fields._dateData;
    v25.fields._dateData = (uint64_t)&v31;
    v26 = (double)-System_DateTime__get_Hour(v25, 0);
    v27.fields._dateData = (uint64_t)&dateData;
    v28.fields._dateData = System_DateTime__AddHours(v27, v26, 0).fields._dateData;
    dateData = v28.fields._dateData;
    v29.fields._dateData = v4.fields._dateData;
    Instance = (DataManager_o *)System_DateTime__op_GreaterThan(v29, v28, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
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
                                    0);
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


int64_t ShopListNotice__GetMostRecentTimeLimit(
        ShopListNotice_o *this,
        ShopEntity_array *entities,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  int max_length; // w8
  __int64 v8; // x21
  unsigned int v9; // w24
  int64_t v10; // x22
  Il2CppClass **v11; // x8
  Il2CppClass *v12; // x23
  __int64 events; // x26

  if ( (byte_4CEA881 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEA881 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !entities )
    goto LABEL_19;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v8 = Time;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C7BD48(Time);
      v11 = &entities->obj.klass + (int)v9;
      v12 = v11[4];
      if ( !v12 )
        break;
      events = (__int64)v12->_1.events;
      if ( events >= v8 )
      {
        Time = ShopEntity__GetRemainDays((ShopEntity_o *)v11[4], 0);
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
    sub_1C7BD40(Time, v6);
  }
  return 0;
}


ShopEntity_array *ShopListNotice__GetShopEntitiesByLimitedType(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        int32_t type,
        const MethodInfo *method)
{
  ShopEntity_o *v4; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  _BOOL8 IsLimitedIconDisplayTarget; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x22
  ShopEntity_o **m_Items; // x24
  int v18; // w25
  ShopEntity_o *v19; // kr00_8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v4 = (ShopEntity_o *)(unsigned int)type;
  if ( (byte_4CEA87F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4CEA87F = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_27;
  max_length = shopEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v18 = (_DWORD)v4 - 1;
    while ( 2 )
    {
      if ( v16 < (unsigned int)max_length )
      {
        v19 = v4;
        m_Items = shopEntities->m_Items;
        v4 = shopEntities->m_Items[v16];
        switch ( v18 )
        {
          case 0:
            if ( !v4 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v16], 0);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 1:
            if ( !v4 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v16], 0);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 2:
            if ( !v4 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v16], 0);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 3:
            if ( !v4 )
              goto LABEL_27;
            if ( v4->fields.shopType != 12 )
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
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v4,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v4;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v4, v9, v10, v11, v12, v13, v14);
            }
LABEL_24:
            LODWORD(max_length) = shopEntities->max_length;
            if ( (__int64)++v16 >= (int)max_length )
              goto LABEL_25;
            continue;
          default:
            v4 = v19;
            goto LABEL_24;
        }
      }
      break;
    }
    sub_1C7BD48(IsLimitedIconDisplayTarget);
  }
LABEL_25:
  if ( !v6 )
LABEL_27:
    sub_1C7BD40(IsLimitedIconDisplayTarget, v8);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


int32_t ShopListNotice__GetShopLimitedType(
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


ShopEntity_array *ShopListNotice__GetTimeLimitedShopEntities(
        ShopListNotice_o *this,
        ShopEntity_array *entities,
        int64_t timeLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 v7; // x0
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int max_length; // w8
  unsigned int v16; // w22
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4CEA880 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4CEA880 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_17;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C7BD48(v7);
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C7BD40(v7, v8);
  }
LABEL_15:
  if ( !v6 )
    goto LABEL_17;
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


int32_t ShopListNotice__get_ExchangeServantEventId(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._ExchangeServantEventId_k__BackingField;
}


int64_t ShopListNotice__get_ExchangeServatTimeLimit(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._ExchangeServatTimeLimit_k__BackingField;
}


bool ShopListNotice__get_IsIndefiniteExchangeServant(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsIndefiniteExchangeServant_k__BackingField;
}


bool ShopListNotice__get_IsShowNew(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsShowNew_k__BackingField;
}


bool ShopListNotice__get_IsSpecialSummonable(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsSpecialSummonable_k__BackingField;
}


int32_t ShopListNotice__get_LimitedType(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._LimitedType_k__BackingField;
}


int64_t ShopListNotice__get_MonthlyTimeLimit(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._MonthlyTimeLimit_k__BackingField;
}


int64_t ShopListNotice__get_MostRecentTimeLimit(ShopListNotice_o *this, const MethodInfo *method)
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


int64_t ShopListNotice__get_PeriodTimeLimit(ShopListNotice_o *this, const MethodInfo *method)
{
  return this->fields._PeriodTimeLimit_k__BackingField;
}


void ShopListNotice__set_ExchangeServantEventId(ShopListNotice_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ExchangeServantEventId_k__BackingField = value;
}


void ShopListNotice__set_ExchangeServatTimeLimit(ShopListNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._ExchangeServatTimeLimit_k__BackingField = value;
}


void ShopListNotice__set_IsIndefiniteExchangeServant(ShopListNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsIndefiniteExchangeServant_k__BackingField = value;
}


void ShopListNotice__set_IsShowNew(ShopListNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsShowNew_k__BackingField = value;
}


void ShopListNotice__set_IsSpecialSummonable(ShopListNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSpecialSummonable_k__BackingField = value;
}


void ShopListNotice__set_LimitedType(ShopListNotice_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._LimitedType_k__BackingField = value;
}


void ShopListNotice__set_MonthlyTimeLimit(ShopListNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._MonthlyTimeLimit_k__BackingField = value;
}


void ShopListNotice__set_PeriodTimeLimit(ShopListNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._PeriodTimeLimit_k__BackingField = value;
}


void ShopListNotice___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA882 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopListNotice___c_TypeInfo);
    byte_4CEA882 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopListNotice___c_TypeInfo->static_fields->__9 = (struct ShopListNotice___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ShopListNotice___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopListNotice___c___ctor(ShopListNotice___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopListNotice___c____ctor_b__36_0(ShopListNotice___c_o *this, ShopEntity_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return !ShopEntity__IsSoldOut(x, 0);
}