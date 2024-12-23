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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  ShopListNotice_o *v22; // x23
  const MethodInfo *v23; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v25; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v27; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v29; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v31; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v33; // w21
  const MethodInfo *v34; // x3
  ShopEntity_array *v35; // x24
  const MethodInfo *v36; // x2
  ShopListNotice_o *v37; // x22
  const MethodInfo *v38; // x3
  ShopListNotice_o *v39; // x0
  const MethodInfo *v40; // x2
  _BOOL8 v41; // x0
  bool v42; // w24
  const MethodInfo *v43; // x3
  ShopEntity_array *v44; // x26
  const MethodInfo *v45; // x2
  ShopListNotice_o *v46; // x25
  const MethodInfo *v47; // x3
  ShopListNotice_o *v48; // x0
  const MethodInfo *v49; // x2
  _BOOL8 v50; // x0
  bool v51; // w27
  const MethodInfo *v52; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v54; // w26
  const MethodInfo *v55; // x3
  ShopEntity_array *Master_object; // x0
  __int64 v57; // x1
  const MethodInfo *v58; // x5
  _BOOL8 IsEnableEventShop_40879680; // x0
  bool v60; // w1
  bool v61; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_4B630AE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ShopMaster___, shopEntities);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_ShopEntity___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_ShopEntity___, v7);
    sub_1BE4ACC(&System_Func_ShopEntity__bool__TypeInfo, v8);
    sub_1BE4ACC(&Method_ShopListNotice___c___ctor_b__36_0__, v9);
    sub_1BE4ACC(&ShopListNotice___c_TypeInfo, v10);
    byte_4B630AE = 1;
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
    _9__36_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__36_0, v13, Method_ShopListNotice___c___ctor_b__36_0__, 0LL);
    static_fields = ShopListNotice___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
      (int64_t)_9__36_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v22 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_object_(
                              v21,
                              (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v22, (ShopEntity_array *)v22, v23);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v22,
                                1,
                                v25);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v27);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v29);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v31);
  v33 = IsLimitedIconShow;
  v35 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v22,
          2,
          v34);
  v37 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v35, v36);
  v39 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v37, v35, (int64_t)v37, v38);
  v41 = ShopListNotice__GetIsLimitedIconShow(v39, (ShopEntity_array *)v39, v40);
  v42 = v41;
  v44 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v41, (ShopEntity_array *)v22, 3, v43);
  v46 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v44, v45);
  v48 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v46, v44, (int64_t)v46, v47);
  v50 = ShopListNotice__GetIsLimitedIconShow(v48, (ShopEntity_array *)v48, v49);
  v51 = v50;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v50, v44, v52);
  v54 = IndefiniteTimeLimit;
  Master_object = ShopListNotice__GetShopEntitiesByLimitedType(
                    (ShopListNotice_o *)IndefiniteTimeLimit,
                    (ShopEntity_array *)v22,
                    4,
                    v55);
  if ( !Master_object )
    goto LABEL_20;
  if ( *(_QWORD *)&Master_object->max_length )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      IsEnableEventShop_40879680 = ShopMaster__IsEnableEventShop_40879680((ShopMaster_o *)Master_object, 0LL);
      goto LABEL_16;
    }
LABEL_20:
    sub_1BE4D28(Master_object, v57);
  }
  IsEnableEventShop_40879680 = 0LL;
LABEL_16:
  v60 = v33;
  v61 = IsEnableEventShop_40879680;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_40879680,
                      v60,
                      v42,
                      v51,
                      IsEnableEventShop_40879680,
                      v58);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v37;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v46;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v54;
  this->fields._IsSpecialSummonable_k__BackingField = v61;
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
        sub_1BE4D30(this, shopEntities);
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
    sub_1BE4D28(this, shopEntities);
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
  signed int max_length; // w8
  UserShopMaster_o *v9; // x20
  unsigned int v10; // w22
  ShopEntity_o *v11; // x25

  if ( (byte_4B630B0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntities);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B630B0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_22:
    sub_1BE4D28(Instance, v7);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = (UserShopMaster_o *)Instance;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
      sub_1BE4D30(Instance, v7);
    v11 = shopEntities->m_Items[v10];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
      byte_4B61717 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v11 || !v9 )
      goto LABEL_22;
    Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                  v9,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  v11->fields.baseShopId,
                                  0LL);
    if ( !Instance
      || (__int64)Instance->fields.lookup < v11->fields.openedAt
      || SHIDWORD(Instance->fields.m_CancellationTokenSource) < v11->fields.limitNum )
    {
      return 1;
    }
    max_length = shopEntities->max_length;
    if ( (int)++v10 >= max_length )
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
  signed int max_length; // w8
  UserShopMaster_o *v14; // x22
  unsigned int v15; // w26
  ShopEntity_o *v16; // x28
  int64_t openedAt; // x23
  int32_t Hour; // w23
  int32_t Minute; // w24
  int32_t Second; // w25
  System_DateTime_o v21; // x0
  BalanceConfig_c *v22; // x8
  const MethodInfo *v23; // x2
  double v24; // d0
  uint64_t v26; // [xsp+8h] [xbp-88h] BYREF
  int64_t v27; // [xsp+10h] [xbp-80h] BYREF
  uint64_t v28; // [xsp+18h] [xbp-78h] BYREF
  __int64 v29[2]; // [xsp+20h] [xbp-70h] BYREF
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_TimeSpan_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x0.8
  System_DateTime_o v37; // 0:x0.8
  System_DateTime_o v38; // 0:x0.8
  System_TimeSpan_o v39; // 0:x1.8
  System_DateTime_o v40; // 0:x1.8
  System_DateTimeOffset_o v41; // 0:x0.16

  if ( (byte_4B630AF & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, shopEntities);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserShopMaster___, v4);
    sub_1BE4ACC(&System_DateTimeOffset_TypeInfo, v5);
    sub_1BE4ACC(&System_DateTime_TypeInfo, v6);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BE4ACC(&System_TimeSpan_TypeInfo, v9);
    byte_4B630AF = 1;
  }
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  v29[0] = 0LL;
  v29[1] = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_36:
    sub_1BE4D28(Instance, v12);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (UserShopMaster_o *)Instance;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= max_length )
      sub_1BE4D30(Instance, v12);
    v16 = shopEntities->m_Items[v15];
    if ( !v16 )
      goto LABEL_36;
    openedAt = v16->fields.openedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v28 = NetworkManager__getDateTime_39465728(openedAt, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v30.fields._dateData = (uint64_t)&v28;
    Hour = System_DateTime__get_Hour(v30, 0LL);
    v31.fields._dateData = (uint64_t)&v28;
    Minute = System_DateTime__get_Minute(v31, 0LL);
    v32.fields._dateData = (uint64_t)&v28;
    Second = System_DateTime__get_Second(v32, 0LL);
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v33.fields._ticks = (int64_t)&v27;
    System_TimeSpan___ctor_63604168(v33, Hour, Minute, Second, 0LL);
    v39.fields._ticks = v27;
    v34.fields._dateData = v28;
    v21.fields._dateData = System_DateTime__op_Subtraction(v34, v39, 0LL).fields._dateData;
    v22 = BalanceConfig_TypeInfo;
    v28 = v21.fields._dateData;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v35.fields._dateData = (uint64_t)&v28;
    v28 = System_DateTime__AddDays(v35, v22->static_fields->ShopNewItemAddDays, 0LL).fields._dateData;
    if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
    v41.fields._dateTime.fields._dateData = (uint64_t)v29;
    *(_QWORD *)&v41.fields._offsetMinutes = 0LL;
    v26 = System_DateTimeOffset__get_LocalDateTime(v41, v23).fields._dateData;
    v36.fields._dateData = (uint64_t)&v26;
    v24 = (double)-System_DateTime__get_Hour(v36, 0LL);
    v37.fields._dateData = (uint64_t)&v28;
    v40.fields._dateData = System_DateTime__AddHours(v37, v24, 0LL).fields._dateData;
    v28 = v40.fields._dateData;
    v38.fields._dateData = dateData;
    Instance = (DataManager_o *)System_DateTime__op_GreaterThan(v38, v40, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
        byte_4B61717 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_36;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v14,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v16->fields.baseShopId,
                                    0LL);
      if ( !Instance
        || (__int64)Instance->fields.lookup < v16->fields.openedAt
        || SHIDWORD(Instance->fields.m_CancellationTokenSource) < v16->fields.limitNum )
      {
        return 1;
      }
    }
    max_length = shopEntities->max_length;
    if ( (int)++v15 >= max_length )
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

  if ( (byte_4B630B3 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, entities);
    byte_4B630B3 = 1;
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
        sub_1BE4D30(Time, v6);
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
    sub_1BE4D28(Time, v6);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x8
  unsigned __int64 v19; // x22
  ShopEntity_o **m_Items; // x24
  int v21; // w25
  ShopEntity_o *v22; // x21
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B630B1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__Add__, shopEntities);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v8);
    byte_4B630B1 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_27;
  v18 = *(_QWORD *)&shopEntities->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v21 = type - 1;
    while ( 2 )
    {
      if ( v19 < (unsigned int)v18 )
      {
        m_Items = shopEntities->m_Items;
        v22 = shopEntities->m_Items[v19];
        switch ( v21 )
        {
          case 0:
            if ( !v22 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v19], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 1:
            if ( !v22 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v19], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 2:
            if ( !v22 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v19], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 3:
            if ( !v22 )
              goto LABEL_27;
            if ( v22->fields.shopType != 12 )
              goto LABEL_24;
LABEL_19:
            if ( !v9 )
              goto LABEL_27;
            items = v9->fields._items;
            v24 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v22,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v22;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v22, v12, v13, v14, v15, v16, v17);
            }
LABEL_24:
            LODWORD(v18) = shopEntities->max_length;
            if ( (__int64)++v19 >= (int)v18 )
              goto LABEL_25;
            continue;
          default:
            goto LABEL_24;
        }
      }
      break;
    }
    sub_1BE4D30(IsLimitedIconDisplayTarget, v11);
  }
LABEL_25:
  if ( !v9 )
LABEL_27:
    sub_1BE4D28(IsLimitedIconDisplayTarget, v11);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v9,
                               (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  signed int max_length; // w8
  unsigned int v19; // w22
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B630B2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__Add__, entities);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v8);
    byte_4B630B2 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_17;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1BE4D30(v10, v11);
      v11 = (Il2CppObject *)entities->m_Items[v19];
      if ( !v11 )
        break;
      if ( v11[8].monitor == (void *)timeLimit )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v21 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v11,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v11, v12, v13, v14, v15, v16, v17);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BE4D28(v10, v11);
  }
LABEL_15:
  if ( !v9 )
    goto LABEL_17;
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v9,
                               (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B630B8 & 1) == 0 )
  {
    sub_1BE4ACC(&ShopListNotice___c_TypeInfo, v1);
    byte_4B630B8 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopListNotice___c_TypeInfo->static_fields->__9 = (struct ShopListNotice___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ShopListNotice___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  return !ShopEntity__IsSoldOut(x, 0LL);
}