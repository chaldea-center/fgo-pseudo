void __fastcall ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ShopListNotice___c_c *v11; // x0
  System_Func_object__bool__o *_9__36_0; // x21
  Il2CppObject *v13; // x22
  struct ShopListNotice___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  ShopListNotice_o *v18; // x23
  const MethodInfo *v19; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v21; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v23; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v25; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v27; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v29; // w21
  const MethodInfo *v30; // x3
  ShopEntity_array *v31; // x24
  const MethodInfo *v32; // x2
  ShopListNotice_o *v33; // x22
  const MethodInfo *v34; // x3
  ShopListNotice_o *v35; // x0
  const MethodInfo *v36; // x2
  _BOOL8 v37; // x0
  bool v38; // w24
  const MethodInfo *v39; // x3
  ShopEntity_array *v40; // x26
  const MethodInfo *v41; // x2
  ShopListNotice_o *v42; // x25
  const MethodInfo *v43; // x3
  ShopListNotice_o *v44; // x0
  const MethodInfo *v45; // x2
  _BOOL8 v46; // x0
  bool v47; // w27
  const MethodInfo *v48; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v50; // w26
  const MethodInfo *v51; // x3
  ShopEntity_array *Master_object; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x5
  _BOOL8 IsEnableEventShop_42012728; // x0
  bool v56; // w1
  bool v57; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_4B18847 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ShopMaster___, shopEntities);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_ShopEntity___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_ShopEntity___, v7);
    sub_1BCAFF8(&System_Func_ShopEntity__bool__TypeInfo, v8);
    sub_1BCAFF8(&Method_ShopListNotice___c___ctor_b__36_0__, v9);
    sub_1BCAFF8(&ShopListNotice___c_TypeInfo, v10);
    byte_4B18847 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = ShopListNotice___c_TypeInfo;
  if ( !ShopListNotice___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopListNotice___c_TypeInfo);
    v11 = ShopListNotice___c_TypeInfo;
  }
  _9__36_0 = (System_Func_object__bool__o *)v11->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ShopListNotice___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__36_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__36_0, v13, Method_ShopListNotice___c___ctor_b__36_0__, 0LL);
    static_fields = ShopListNotice___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v18 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_object_(
                              v17,
                              (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v18, (ShopEntity_array *)v18, v19);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v18,
                                1,
                                v21);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v23);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v25);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v27);
  v29 = IsLimitedIconShow;
  v31 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v18,
          2,
          v30);
  v33 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v31, v32);
  v35 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v33, v31, (int64_t)v33, v34);
  v37 = ShopListNotice__GetIsLimitedIconShow(v35, (ShopEntity_array *)v35, v36);
  v38 = v37;
  v40 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v37, (ShopEntity_array *)v18, 3, v39);
  v42 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v40, v41);
  v44 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v42, v40, (int64_t)v42, v43);
  v46 = ShopListNotice__GetIsLimitedIconShow(v44, (ShopEntity_array *)v44, v45);
  v47 = v46;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v46, v40, v48);
  v50 = IndefiniteTimeLimit;
  Master_object = ShopListNotice__GetShopEntitiesByLimitedType(
                    (ShopListNotice_o *)IndefiniteTimeLimit,
                    (ShopEntity_array *)v18,
                    4,
                    v51);
  if ( !Master_object )
    goto LABEL_20;
  if ( *(_QWORD *)&Master_object->max_length )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      IsEnableEventShop_42012728 = ShopMaster__IsEnableEventShop_42012728((ShopMaster_o *)Master_object, 0LL);
      goto LABEL_16;
    }
LABEL_20:
    sub_1BCB254(Master_object, v53);
  }
  IsEnableEventShop_42012728 = 0LL;
LABEL_16:
  v56 = v29;
  v57 = IsEnableEventShop_42012728;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_42012728,
                      v56,
                      v38,
                      v47,
                      IsEnableEventShop_42012728,
                      v54);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v33;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v42;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v50;
  this->fields._IsSpecialSummonable_k__BackingField = v57;
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
        sub_1BCB25C(this, shopEntities, method);
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
    sub_1BCB254(this, shopEntities);
  }
  return v5;
}


bool __fastcall ShopListNotice__GetIsLimitedIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  signed int max_length; // w8
  UserShopMaster_o *v10; // x20
  unsigned int v11; // w22
  ShopEntity_o *v12; // x25

  if ( (byte_4B18849 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntities);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B18849 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_22:
    sub_1BCB254(Instance, v7);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = (UserShopMaster_o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
      sub_1BCB25C(Instance, v7, v8);
    v12 = shopEntities->m_Items[v11];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
      byte_4B165D1 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v12 || !v10 )
      goto LABEL_22;
    Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                  v10,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  v12->fields.baseShopId,
                                  0LL);
    if ( !Instance
      || (__int64)Instance->fields.lookup < v12->fields.openedAt
      || SHIDWORD(Instance->fields.m_CancellationTokenSource) < v12->fields.limitNum )
    {
      return 1;
    }
    max_length = shopEntities->max_length;
    if ( (int)++v11 >= max_length )
      return 0;
  }
}


bool __fastcall ShopListNotice__GetIsNewIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  uint64_t dateData; // x21
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  signed int max_length; // w8
  UserShopMaster_o *v15; // x22
  unsigned int v16; // w26
  ShopEntity_o *v17; // x28
  int64_t openedAt; // x23
  int32_t Hour; // w23
  int32_t Minute; // w24
  int32_t Second; // w25
  System_DateTime_o v22; // x0
  BalanceConfig_c *v23; // x8
  const MethodInfo *v24; // x2
  double v25; // d0
  uint64_t v27; // [xsp+8h] [xbp-88h] BYREF
  int64_t v28; // [xsp+10h] [xbp-80h] BYREF
  uint64_t v29; // [xsp+18h] [xbp-78h] BYREF
  __int64 v30[2]; // [xsp+20h] [xbp-70h] BYREF
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_TimeSpan_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x0.8
  System_DateTime_o v37; // 0:x0.8
  System_DateTime_o v38; // 0:x0.8
  System_DateTime_o v39; // 0:x0.8
  System_TimeSpan_o v40; // 0:x1.8
  System_DateTime_o v41; // 0:x1.8
  System_DateTimeOffset_o v42; // 0:x0.16

  if ( (byte_4B18848 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, shopEntities);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, v4);
    sub_1BCAFF8(&System_DateTimeOffset_TypeInfo, v5);
    sub_1BCAFF8(&System_DateTime_TypeInfo, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BCAFF8(&System_TimeSpan_TypeInfo, v9);
    byte_4B18848 = 1;
  }
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  v30[0] = 0LL;
  v30[1] = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_36:
    sub_1BCB254(Instance, v12);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v15 = (UserShopMaster_o *)Instance;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
      sub_1BCB25C(Instance, v12, v13);
    v17 = shopEntities->m_Items[v16];
    if ( !v17 )
      goto LABEL_36;
    openedAt = v17->fields.openedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v29 = NetworkManager__getDateTime_40542964(openedAt, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v31.fields._dateData = (uint64_t)&v29;
    Hour = System_DateTime__get_Hour(v31, 0LL);
    v32.fields._dateData = (uint64_t)&v29;
    Minute = System_DateTime__get_Minute(v32, 0LL);
    v33.fields._dateData = (uint64_t)&v29;
    Second = System_DateTime__get_Second(v33, 0LL);
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v34.fields._ticks = (int64_t)&v28;
    System_TimeSpan___ctor_64061168(v34, Hour, Minute, Second, 0LL);
    v40.fields._ticks = v28;
    v35.fields._dateData = v29;
    v22.fields._dateData = System_DateTime__op_Subtraction(v35, v40, 0LL).fields._dateData;
    v23 = BalanceConfig_TypeInfo;
    v29 = v22.fields._dateData;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    v36.fields._dateData = (uint64_t)&v29;
    v29 = System_DateTime__AddDays(v36, v23->static_fields->ShopNewItemAddDays, 0LL).fields._dateData;
    if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
    v42.fields._dateTime.fields._dateData = (uint64_t)v30;
    *(_QWORD *)&v42.fields._offsetMinutes = 0LL;
    v27 = System_DateTimeOffset__get_LocalDateTime(v42, v24).fields._dateData;
    v37.fields._dateData = (uint64_t)&v27;
    v25 = (double)-System_DateTime__get_Hour(v37, 0LL);
    v38.fields._dateData = (uint64_t)&v29;
    v41.fields._dateData = System_DateTime__AddHours(v38, v25, 0LL).fields._dateData;
    v29 = v41.fields._dateData;
    v39.fields._dateData = dateData;
    Instance = (DataManager_o *)System_DateTime__op_GreaterThan(v39, v41, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v15 )
        goto LABEL_36;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v15,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v17->fields.baseShopId,
                                    0LL);
      if ( !Instance
        || (__int64)Instance->fields.lookup < v17->fields.openedAt
        || SHIDWORD(Instance->fields.m_CancellationTokenSource) < v17->fields.limitNum )
      {
        return 1;
      }
    }
    max_length = shopEntities->max_length;
    if ( (int)++v16 >= max_length )
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
  __int64 v7; // x2
  signed int max_length; // w8
  __int64 v9; // x21
  unsigned int v10; // w24
  int64_t v11; // x22
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x23
  __int64 events; // x26

  if ( (byte_4B1884C & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, entities);
    byte_4B1884C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !entities )
    goto LABEL_19;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v9 = Time;
    v10 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1BCB25C(Time, v6, v7);
      v12 = &entities->obj.klass + (int)v10;
      v13 = v12[4];
      if ( !v13 )
        break;
      events = (__int64)v13->_1.events;
      if ( events >= v9 )
      {
        Time = ShopEntity__GetRemainDays((ShopEntity_o *)v12[4], 0LL);
        if ( events - 86400 * (int)Time <= v9 && (!v11 || (__int64)v13->_1.events < v11) )
        {
          v11 = (int64_t)v13->_1.events;
          this->fields._ExchangeServantEventId_k__BackingField = (int32_t)v13->_1.namespaze;
        }
      }
      max_length = entities->max_length;
      if ( (int)++v10 >= max_length )
        return v11;
    }
LABEL_19:
    sub_1BCB254(Time, v6);
  }
  return 0LL;
}


ShopEntity_array *__fastcall ShopListNotice__GetShopEntitiesByLimitedType(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  _BOOL8 IsLimitedIconDisplayTarget; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x22
  ShopEntity_o **m_Items; // x24
  int v17; // w25
  ShopEntity_o *v18; // x21
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4B1884A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, shopEntities);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v8);
    byte_4B1884A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_27;
  v14 = *(_QWORD *)&shopEntities->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v17 = type - 1;
    while ( 2 )
    {
      if ( v15 < (unsigned int)v14 )
      {
        m_Items = shopEntities->m_Items;
        v18 = shopEntities->m_Items[v15];
        switch ( v17 )
        {
          case 0:
            if ( !v18 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v15], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 1:
            if ( !v18 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v15], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 2:
            if ( !v18 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v15], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 3:
            if ( !v18 )
              goto LABEL_27;
            if ( v18->fields.shopType != 12 )
              goto LABEL_24;
LABEL_19:
            if ( !v9 )
              goto LABEL_27;
            items = v9->fields._items;
            v20 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v18,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v18;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v18, v12, v13);
            }
LABEL_24:
            LODWORD(v14) = shopEntities->max_length;
            if ( (__int64)++v15 >= (int)v14 )
              goto LABEL_25;
            continue;
          default:
            goto LABEL_24;
        }
      }
      break;
    }
    sub_1BCB25C(IsLimitedIconDisplayTarget, v11, v12);
  }
LABEL_25:
  if ( !v9 )
LABEL_27:
    sub_1BCB254(IsLimitedIconDisplayTarget, v11);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v9,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  __int64 v10; // x0
  Il2CppObject *v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  signed int max_length; // w8
  unsigned int v15; // w22
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B1884B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__Add__, entities);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v8);
    byte_4B1884B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_17;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1BCB25C(v10, v11, v12);
      v11 = (Il2CppObject *)entities->m_Items[v15];
      if ( !v11 )
        break;
      if ( v11[8].monitor == (void *)timeLimit )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v11,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v12, v13);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(v10, v11);
  }
LABEL_15:
  if ( !v9 )
    goto LABEL_17;
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v9,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1884D & 1) == 0 )
  {
    sub_1BCAFF8(&ShopListNotice___c_TypeInfo, v1);
    byte_4B1884D = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopListNotice___c_TypeInfo->static_fields->__9 = (struct ShopListNotice___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ShopListNotice___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
  return !ShopEntity__IsSoldOut(x, 0LL);
}