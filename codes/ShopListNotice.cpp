void ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  ShopListNotice___c_c *v5; // x0
  System_Func_object__bool__o *_9__36_0; // x21
  Il2CppObject *v7; // x22
  struct ShopListNotice___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  ShopListNotice_o *v12; // x23
  const MethodInfo *v13; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v15; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v17; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v19; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v21; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v23; // w21
  const MethodInfo *v24; // x3
  ShopEntity_array *v25; // x24
  const MethodInfo *v26; // x2
  ShopListNotice_o *v27; // x22
  const MethodInfo *v28; // x3
  ShopListNotice_o *v29; // x0
  const MethodInfo *v30; // x2
  _BOOL8 v31; // x0
  bool v32; // w24
  const MethodInfo *v33; // x3
  ShopEntity_array *v34; // x26
  const MethodInfo *v35; // x2
  ShopListNotice_o *v36; // x25
  const MethodInfo *v37; // x3
  ShopListNotice_o *v38; // x0
  const MethodInfo *v39; // x2
  _BOOL8 v40; // x0
  bool v41; // w27
  const MethodInfo *v42; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v44; // w26
  const MethodInfo *v45; // x3
  ShopEntity_array *Master_object; // x0
  const MethodInfo *v47; // x5
  _BOOL8 IsEnableEventShop_42870160; // x0
  bool v49; // w1
  bool v50; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_4C3F259 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1C37058(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C37058(&Method_ShopListNotice___c___ctor_b__36_0__);
    sub_1C37058(&ShopListNotice___c_TypeInfo);
    byte_4C3F259 = 1;
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
    _9__36_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__36_0, v7, Method_ShopListNotice___c___ctor_b__36_0__, 0);
    static_fields = ShopListNotice___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v12 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_object_(
                              v11,
                              (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v12, (ShopEntity_array *)v12, v13);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v12,
                                1,
                                v15);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v17);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v19);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v21);
  v23 = IsLimitedIconShow;
  v25 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v12,
          2,
          v24);
  v27 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v25, v26);
  v29 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v27, v25, (int64_t)v27, v28);
  v31 = ShopListNotice__GetIsLimitedIconShow(v29, (ShopEntity_array *)v29, v30);
  v32 = v31;
  v34 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v31, (ShopEntity_array *)v12, 3, v33);
  v36 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v34, v35);
  v38 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v36, v34, (int64_t)v36, v37);
  v40 = ShopListNotice__GetIsLimitedIconShow(v38, (ShopEntity_array *)v38, v39);
  v41 = v40;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v40, v34, v42);
  v44 = IndefiniteTimeLimit;
  Master_object = ShopListNotice__GetShopEntitiesByLimitedType(
                    (ShopListNotice_o *)IndefiniteTimeLimit,
                    (ShopEntity_array *)v12,
                    4,
                    v45);
  if ( !Master_object )
    goto LABEL_20;
  if ( Master_object->max_length )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      IsEnableEventShop_42870160 = ShopMaster__IsEnableEventShop_42870160((ShopMaster_o *)Master_object, 0);
      goto LABEL_16;
    }
LABEL_20:
    sub_1C372B4(Master_object);
  }
  IsEnableEventShop_42870160 = 0;
LABEL_16:
  v49 = v23;
  v50 = IsEnableEventShop_42870160;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_42870160,
                      v49,
                      v32,
                      v41,
                      IsEnableEventShop_42870160,
                      v47);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v27;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v36;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v44;
  this->fields._IsSpecialSummonable_k__BackingField = v50;
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
        sub_1C372BC(this);
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
    sub_1C372B4(this);
  }
  return v5;
}


bool ShopListNotice__GetIsLimitedIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int max_length; // w8
  UserShopMaster_o *v6; // x20
  unsigned int v7; // w22
  ShopEntity_o *v8; // x25

  if ( (byte_4C3F25B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F25B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_22:
    sub_1C372B4(Instance);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = (UserShopMaster_o *)Instance;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1C372BC(Instance);
    v8 = shopEntities->m_Items[v7];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v8 || !v6 )
      goto LABEL_22;
    Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                  v6,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  v8->fields.baseShopId,
                                  0);
    if ( !Instance
      || (__int64)Instance->fields.lookup < v8->fields.openedAt
      || SHIDWORD(Instance->fields.m_CancellationTokenSource) < v8->fields.limitNum )
    {
      return 1;
    }
    max_length = shopEntities->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


bool ShopListNotice__GetIsNewIconShow(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  System_DateTime_o v4; // x21
  DataManager_o *Instance; // x0
  int max_length; // w8
  UserShopMaster_o *v7; // x22
  unsigned int v8; // w26
  ShopEntity_o *v9; // x28
  int64_t openedAt; // x23
  System_DateTime_o v11; // x0
  int32_t Hour; // w23
  System_DateTime_o v13; // x0
  int32_t Minute; // w24
  System_DateTime_o v15; // x0
  int32_t Second; // w25
  System_TimeSpan_o v17; // x0
  System_DateTime_o v18; // x0
  System_TimeSpan_o v19; // x1
  System_DateTime_o v20; // x0
  BalanceConfig_c *v21; // x8
  System_DateTime_o v22; // x0
  System_DateTime_o v23; // x2
  System_DateTime_o v24; // x0
  double v25; // d0
  System_DateTime_o v26; // x0
  System_DateTime_o v27; // x1
  System_DateTime_o v28; // x0
  uint64_t v30; // [xsp+8h] [xbp-88h] BYREF
  int64_t v31; // [xsp+10h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-78h] BYREF
  _QWORD v33[2]; // [xsp+20h] [xbp-70h] BYREF
  System_DateTimeOffset_o v34; // 0:x0.16

  if ( (byte_4C3F25A & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C37058(&System_DateTimeOffset_TypeInfo);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&System_TimeSpan_TypeInfo);
    byte_4C3F25A = 1;
  }
  v31 = 0;
  dateData = 0;
  v30 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  v33[0] = 0;
  v33[1] = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_36:
    sub_1C372B4(Instance);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = (UserShopMaster_o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1C372BC(Instance);
    v9 = shopEntities->m_Items[v8];
    if ( !v9 )
      goto LABEL_36;
    openedAt = v9->fields.openedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_41367148(openedAt, 0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v11.fields._dateData = (uint64_t)&dateData;
    Hour = System_DateTime__get_Hour(v11, 0);
    v13.fields._dateData = (uint64_t)&dateData;
    Minute = System_DateTime__get_Minute(v13, 0);
    v15.fields._dateData = (uint64_t)&dateData;
    Second = System_DateTime__get_Second(v15, 0);
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v17.fields._ticks = (int64_t)&v31;
    System_TimeSpan___ctor_65173584(v17, Hour, Minute, Second, 0);
    v19.fields._ticks = v31;
    v18.fields._dateData = dateData;
    v20.fields._dateData = System_DateTime__op_Subtraction(v18, v19, 0).fields._dateData;
    v21 = BalanceConfig_TypeInfo;
    dateData = v20.fields._dateData;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    v22.fields._dateData = (uint64_t)&dateData;
    dateData = System_DateTime__AddDays(v22, v21->static_fields->ShopNewItemAddDays, 0).fields._dateData;
    if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
    v34.fields._dateTime.fields._dateData = (uint64_t)v33;
    *(_QWORD *)&v34.fields._offsetMinutes = 0;
    v30 = System_DateTimeOffset__get_LocalDateTime(v34, (const MethodInfo *)v23.fields._dateData).fields._dateData;
    v24.fields._dateData = (uint64_t)&v30;
    v25 = (double)-System_DateTime__get_Hour(v24, 0);
    v26.fields._dateData = (uint64_t)&dateData;
    v27.fields._dateData = System_DateTime__AddHours(v26, v25, 0).fields._dateData;
    dateData = v27.fields._dateData;
    v28.fields._dateData = v4.fields._dateData;
    Instance = (DataManager_o *)System_DateTime__op_GreaterThan(v28, v27, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v7 )
        goto LABEL_36;
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
    }
    max_length = shopEntities->max_length;
    if ( (int)++v8 >= max_length )
      return 0;
  }
}


int64_t ShopListNotice__GetMostRecentTimeLimit(
        ShopListNotice_o *this,
        ShopEntity_array *entities,
        const MethodInfo *method)
{
  int64_t Time; // x0
  int max_length; // w8
  __int64 v7; // x21
  unsigned int v8; // w24
  int64_t v9; // x22
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x23
  __int64 events; // x26

  if ( (byte_4C3F25E & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3F25E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !entities )
    goto LABEL_19;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v7 = Time;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(Time);
      v10 = &entities->obj.klass + (int)v8;
      v11 = v10[4];
      if ( !v11 )
        break;
      events = (__int64)v11->_1.events;
      if ( events >= v7 )
      {
        Time = ShopEntity__GetRemainDays((ShopEntity_o *)v10[4], 0);
        if ( events - 86400 * (int)Time <= v7 && (!v9 || (__int64)v11->_1.events < v9) )
        {
          v9 = (int64_t)v11->_1.events;
          this->fields._ExchangeServantEventId_k__BackingField = (int32_t)v11->_1.namespaze;
        }
      }
      max_length = entities->max_length;
      if ( (int)++v8 >= max_length )
        return v9;
    }
LABEL_19:
    sub_1C372B4(Time);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x22
  ShopEntity_o **m_Items; // x24
  int v13; // w25
  ShopEntity_o *v14; // kr00_8
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v4 = (ShopEntity_o *)(unsigned int)type;
  if ( (byte_4C3F25C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4C3F25C = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_27;
  max_length = shopEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    v13 = (_DWORD)v4 - 1;
    while ( 2 )
    {
      if ( v11 < (unsigned int)max_length )
      {
        v14 = v4;
        m_Items = shopEntities->m_Items;
        v4 = shopEntities->m_Items[v11];
        switch ( v13 )
        {
          case 0:
            if ( !v4 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v11], 0);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 1:
            if ( !v4 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v11], 0);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 2:
            if ( !v4 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v11], 0);
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
            v16 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v4,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v4;
              sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v4, v8, v9);
            }
LABEL_24:
            LODWORD(max_length) = shopEntities->max_length;
            if ( (__int64)++v11 >= (int)max_length )
              goto LABEL_25;
            continue;
          default:
            v4 = v14;
            goto LABEL_24;
        }
      }
      break;
    }
    sub_1C372BC(IsLimitedIconDisplayTarget);
  }
LABEL_25:
  if ( !v6 )
LABEL_27:
    sub_1C372B4(IsLimitedIconDisplayTarget);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int max_length; // w8
  unsigned int v11; // w22
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4C3F25D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4C3F25D = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_17;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C372BC(v7);
      v12 = (Il2CppObject *)entities->m_Items[v11];
      if ( !v12 )
        break;
      if ( v12[8].monitor == (void *)timeLimit )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v14 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v12,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v12;
          sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v8, v9);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C372B4(v7);
  }
LABEL_15:
  if ( !v6 )
    goto LABEL_17;
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C3F25F & 1) == 0 )
  {
    sub_1C37058(&ShopListNotice___c_TypeInfo);
    byte_4C3F25F = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopListNotice___c_TypeInfo->static_fields->__9 = (struct ShopListNotice___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ShopListNotice___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ShopListNotice___c___ctor(ShopListNotice___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopListNotice___c____ctor_b__36_0(ShopListNotice___c_o *this, ShopEntity_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return !ShopEntity__IsSoldOut(x, 0);
}