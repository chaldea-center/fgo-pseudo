void ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ShopListNotice___c_c *v7; // x0
  struct ShopListNotice___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__36_0; // x21
  Il2CppObject *v10; // x22
  struct ShopListNotice___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  ShopListNotice_o *v19; // x25
  const MethodInfo *v20; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v22; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v24; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v26; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v28; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v30; // w21
  const MethodInfo *v31; // x3
  ShopEntity_array *v32; // x23
  const MethodInfo *v33; // x2
  ShopListNotice_o *v34; // x22
  const MethodInfo *v35; // x3
  ShopListNotice_o *v36; // x0
  const MethodInfo *v37; // x2
  _BOOL8 v38; // x0
  bool v39; // w23
  const MethodInfo *v40; // x3
  ShopEntity_array *v41; // x26
  const MethodInfo *v42; // x2
  ShopListNotice_o *v43; // x24
  const MethodInfo *v44; // x3
  ShopListNotice_o *v45; // x0
  const MethodInfo *v46; // x2
  _BOOL8 v47; // x0
  bool v48; // w27
  const MethodInfo *v49; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v51; // w26
  const MethodInfo *v52; // x3
  ShopEntity_array *Master_object; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  const MethodInfo *v56; // x5
  _BOOL8 IsEnableEventShop_49892788; // x0
  bool v58; // w25
  unsigned int ShopLimitedType; // w0

  if ( (byte_596C87A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_2213A60(&System_Func_ShopEntity__bool__TypeInfo);
    sub_2213A60(&Method_ShopListNotice___c___ctor_b__36_0__);
    sub_2213A60(&ShopListNotice___c_TypeInfo);
    byte_596C87A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = ShopListNotice___c_TypeInfo;
  if ( !*(&ShopListNotice___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopListNotice___c_TypeInfo, v5, v6);
    v7 = ShopListNotice___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__36_0 = (System_Func_object__bool__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = ShopListNotice___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__36_0, v10, Method_ShopListNotice___c___ctor_b__36_0__, 0);
    v11 = ShopListNotice___c_TypeInfo->static_fields;
    v11->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__36_0, (int32_t)_9__36_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v19 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_object_(
                              v18,
                              (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v19, (ShopEntity_array *)v19, v20);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v19,
                                1,
                                v22);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v24);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v26);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v28);
  v30 = IsLimitedIconShow;
  v32 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v19,
          2,
          v31);
  v34 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v32, v33);
  v36 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v34, v32, (int64_t)v34, v35);
  v38 = ShopListNotice__GetIsLimitedIconShow(v36, (ShopEntity_array *)v36, v37);
  v39 = v38;
  v41 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v38, (ShopEntity_array *)v19, 3, v40);
  v43 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v41, v42);
  v45 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v43, v41, (int64_t)v43, v44);
  v47 = ShopListNotice__GetIsLimitedIconShow(v45, (ShopEntity_array *)v45, v46);
  v48 = v47;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v47, v41, v49);
  v51 = IndefiniteTimeLimit;
  Master_object = ShopListNotice__GetShopEntitiesByLimitedType(
                    (ShopListNotice_o *)IndefiniteTimeLimit,
                    (ShopEntity_array *)v19,
                    4,
                    v52);
  if ( !Master_object )
    goto LABEL_20;
  if ( Master_object->max_length )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54, v55);
    Master_object = (ShopEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      IsEnableEventShop_49892788 = ShopMaster__IsEnableEventShop_49892788((ShopMaster_o *)Master_object, 0);
      goto LABEL_16;
    }
LABEL_20:
    sub_2213CDC(Master_object, v54);
  }
  IsEnableEventShop_49892788 = 0;
LABEL_16:
  v58 = IsEnableEventShop_49892788;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_49892788,
                      v30,
                      v39,
                      v48,
                      IsEnableEventShop_49892788,
                      v56);
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v34;
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v43;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v51;
  this->fields._IsSpecialSummonable_k__BackingField = v58;
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
  __int64 v6; // x21

  if ( !shopEntities )
    goto LABEL_9;
  max_length = shopEntities->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (ShopListNotice_o *)shopEntities->m_Items[v6];
      if ( !this )
        break;
      this = (ShopListNotice_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 0x40000, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        max_length = shopEntities->max_length;
        v5 = (int)++v6 < max_length;
        if ( (int)v6 < max_length )
          continue;
      }
      return v5;
    }
LABEL_9:
    sub_2213CDC(this, shopEntities);
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
  __int64 v6; // x2
  int max_length; // w8
  bool v8; // w22
  UserShopMaster_o *v9; // x20
  int v10; // w23
  ShopEntity_o *v11; // x26

  if ( (byte_596C87C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C87C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !shopEntities )
    goto LABEL_21;
  max_length = shopEntities->max_length;
  v8 = max_length > 0;
  if ( max_length >= 1 )
  {
    v9 = (UserShopMaster_o *)Instance;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v11 = shopEntities->m_Items[v10];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v11 || !v9 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v9,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v11->fields.baseShopId,
                                    0);
      if ( Instance )
      {
        if ( (__int64)Instance->fields.lookup >= v11->fields.openedAt
          && SHIDWORD(Instance->fields.m_CancellationTokenSource) >= v11->fields.limitNum )
        {
          max_length = shopEntities->max_length;
          v8 = ++v10 < max_length;
          if ( v10 < max_length )
            continue;
        }
      }
      return v8;
    }
LABEL_21:
    sub_2213CDC(Instance, v5);
  }
  return v8;
}


bool ShopListNotice__GetIsNewIconShow(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  int v4; // w8
  System_DateTime_o v5; // x21
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  bool v10; // w26
  UserShopMaster_o *v11; // x22
  int v12; // w27
  ShopEntity_o *v13; // x29
  int64_t openedAt; // x23
  System_DateTime_o v15; // x1
  System_DateTime_o v16; // x2
  int32_t Hour; // w23
  int32_t Minute; // w24
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t Second; // w25
  System_DateTime_o v22; // x0
  System_DateTime_o v23; // x1
  System_DateTime_o v24; // x2
  BalanceConfig_c *v25; // x8
  System_DateTime_o v26; // x1
  System_DateTime_o v27; // x2
  int32_t v28; // w0
  uint64_t dateData; // [xsp+8h] [xbp-88h] BYREF
  System_TimeSpan_o v31; // [xsp+10h] [xbp-80h] BYREF
  System_DateTime_o v32; // [xsp+18h] [xbp-78h] BYREF
  __int64 v33; // [xsp+20h] [xbp-70h] BYREF
  __int64 v34; // [xsp+28h] [xbp-68h]
  System_DateTimeOffset_o v35; // 0:x0.16

  if ( (byte_596C87B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&System_DateTimeOffset_TypeInfo);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&System_TimeSpan_TypeInfo);
    byte_596C87B = 1;
  }
  v33 = 0;
  v34 = 0;
  v32.fields._dateData = 0;
  v4 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  dateData = 0;
  v31.fields._ticks = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntities, method);
  v5.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  v33 = 0;
  v34 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !shopEntities )
    goto LABEL_34;
  max_length = shopEntities->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (UserShopMaster_o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v13 = shopEntities->m_Items[v12];
      if ( !v13 )
        break;
      openedAt = v13->fields.openedAt;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
      v32.fields._dateData = NetworkManager__getDateTime_48347260(openedAt, 0).fields._dateData;
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v15.fields._dateData, v16.fields._dateData);
      Hour = System_DateTime__get_Hour((System_DateTime_o)&v32, 0);
      Minute = System_DateTime__get_Minute((System_DateTime_o)&v32, 0);
      Second = System_DateTime__get_Second((System_DateTime_o)&v32, 0);
      if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v19, v20);
      System_TimeSpan___ctor_77242956((System_TimeSpan_o)&v31, Hour, Minute, Second, 0);
      v22.fields._dateData = System_DateTime__op_Subtraction(v32, v31, 0).fields._dateData;
      v25 = BalanceConfig_TypeInfo;
      v32.fields._dateData = v22.fields._dateData;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23.fields._dateData, v24.fields._dateData);
        v25 = BalanceConfig_TypeInfo;
      }
      v32.fields._dateData = System_DateTime__AddDays(
                               (System_DateTime_o)&v32,
                               v25->static_fields->ShopNewItemAddDays,
                               0).fields._dateData;
      if ( !*(&System_DateTimeOffset_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo, v26.fields._dateData, v27.fields._dateData);
      v35.fields._dateTime.fields._dateData = (uint64_t)&v33;
      *(_QWORD *)&v35.fields._offsetMinutes = 0;
      dateData = System_DateTimeOffset__get_LocalDateTime(v35, (const MethodInfo *)v27.fields._dateData).fields._dateData;
      v28 = System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
      v32.fields._dateData = System_DateTime__AddHours((System_DateTime_o)&v32, (double)-v28, 0).fields._dateData;
      Instance = (DataManager_o *)System_DateTime__op_GreaterThan(v5, v32, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v11 )
          break;
        Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      v11,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      v13->fields.baseShopId,
                                      0);
        if ( !Instance
          || (__int64)Instance->fields.lookup < v13->fields.openedAt
          || SHIDWORD(Instance->fields.m_CancellationTokenSource) < v13->fields.limitNum )
        {
          return v10;
        }
      }
      max_length = shopEntities->max_length;
      v10 = ++v12 < max_length;
      if ( v12 >= max_length )
        return v10;
    }
LABEL_34:
    sub_2213CDC(Instance, v7);
  }
  return v10;
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

  if ( (byte_596C87F & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596C87F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, entities, method);
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
        sub_2213CE4(Time);
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
    sub_2213CDC(Time, v6);
  }
  return 0;
}


ShopEntity_array *ShopListNotice__GetShopEntitiesByLimitedType(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  _BOOL8 IsExchangeServantIconDisplayTarget; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x23
  ShopEntity_o **m_Items; // x25
  ShopEntity_o *v18; // x22
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_596C87D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_596C87D = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_31;
  max_length = shopEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_2213CE4(IsExchangeServantIconDisplayTarget);
      m_Items = shopEntities->m_Items;
      v18 = shopEntities->m_Items[v16];
      if ( type > 2 )
      {
        if ( type == 3 )
        {
          if ( !v18 )
            goto LABEL_31;
          IsExchangeServantIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v16], 0);
          if ( !IsExchangeServantIconDisplayTarget )
            goto LABEL_28;
        }
        else
        {
          if ( type != 4 )
            goto LABEL_28;
          if ( !v18 )
            goto LABEL_31;
          if ( v18->fields.shopType != 12 )
            goto LABEL_28;
        }
      }
      else if ( type == 1 )
      {
        if ( !v18 )
          goto LABEL_31;
        IsExchangeServantIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v16], 0);
        if ( !IsExchangeServantIconDisplayTarget )
          goto LABEL_28;
      }
      else
      {
        if ( type != 2 )
          goto LABEL_28;
        if ( !v18 )
          goto LABEL_31;
        IsExchangeServantIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v16], 0);
        if ( !IsExchangeServantIconDisplayTarget )
          goto LABEL_28;
      }
      if ( !v6 )
        goto LABEL_31;
      items = v6->fields._items;
      v20 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v6->fields._version;
      if ( !items )
        goto LABEL_31;
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v18,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
      }
LABEL_28:
      LODWORD(max_length) = shopEntities->max_length;
    }
    while ( (__int64)++v16 < (int)max_length );
  }
  if ( !v6 )
LABEL_31:
    sub_2213CDC(IsExchangeServantIconDisplayTarget, v8);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


int32_t ShopListNotice__GetShopLimitedType(
        ShopListNotice_o *this,
        bool isPeriodShow,
        bool isMonthlyShow,
        bool isExchangeServantShow,
        bool isSpecialSummonableShow,
        const MethodInfo *method)
{
  _BOOL4 v6; // w10
  _BOOL4 v7; // w11
  _BOOL4 v8; // w8
  _BOOL4 v9; // w12
  _BOOL4 v10; // w9
  int v12; // w10
  int v13; // w8
  int32_t v14; // w9
  char v15; // w8
  int32_t v16; // w10

  v6 = isExchangeServantShow;
  v7 = isPeriodShow;
  v8 = isMonthlyShow;
  v9 = isExchangeServantShow && isPeriodShow;
  v10 = isSpecialSummonableShow;
  if ( v9 && isMonthlyShow && isSpecialSummonableShow )
    return 30;
  if ( v6 && v8 && v10 )
    return 28;
  if ( v8 && v7 && v10 )
    return 22;
  if ( v9 && v10 )
    return 26;
  if ( v9 && isMonthlyShow )
    return 14;
  if ( v8 && v7 )
    return 6;
  if ( isExchangeServantShow && isPeriodShow )
    return 10;
  if ( v10 && v7 )
    return 18;
  if ( v6 && v8 )
    return 12;
  if ( v10 && v6 )
    return 24;
  if ( isPeriodShow )
    v12 = 1;
  else
    v12 = 2;
  v13 = v10 && v8;
  if ( v13 )
    v14 = 20;
  else
    v14 = v12;
  v15 = v13 | (isPeriodShow || isMonthlyShow);
  if ( isSpecialSummonableShow )
    v16 = 4;
  else
    v16 = 0;
  if ( isExchangeServantShow )
    v16 = 3;
  if ( (v15 & 1) != 0 )
    return v14;
  else
    return v16;
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int max_length; // w8
  unsigned int v16; // w23
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_596C87E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_596C87E = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_17;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_2213CE4(v7);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(v7, v8);
  }
LABEL_15:
  if ( !v6 )
    goto LABEL_17;
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C880 & 1) == 0 )
  {
    sub_2213A60(&ShopListNotice___c_TypeInfo);
    byte_596C880 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopListNotice___c_TypeInfo->static_fields->__9 = (struct ShopListNotice___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ShopListNotice___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return !ShopEntity__IsSoldOut(x, 0);
}