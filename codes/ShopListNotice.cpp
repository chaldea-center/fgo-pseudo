void __fastcall ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  ShopListNotice___c_c *v5; // x0
  System_Func_object__bool__o *_9__36_0; // x21
  Il2CppObject *v7; // x22
  struct ShopListNotice___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
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
  __int64 v47; // x1
  const MethodInfo *v48; // x5
  _BOOL8 IsEnableEventShop_39926776; // x0
  bool v50; // w1
  bool v51; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_4A577D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1B885B0(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1B885B0(&Method_ShopListNotice___c___ctor_b__36_0__);
    sub_1B885B0(&ShopListNotice___c_TypeInfo);
    byte_4A577D4 = 1;
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
    _9__36_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__36_0, v7, Method_ShopListNotice___c___ctor_b__36_0__, 0LL);
    static_fields = ShopListNotice___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v12 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_object_(
                              v11,
                              (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
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
  if ( *(_QWORD *)&Master_object->max_length )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      IsEnableEventShop_39926776 = ShopMaster__IsEnableEventShop_39926776((ShopMaster_o *)Master_object, 0LL);
      goto LABEL_16;
    }
LABEL_20:
    sub_1B8880C(Master_object, v47);
  }
  IsEnableEventShop_39926776 = 0LL;
LABEL_16:
  v50 = v23;
  v51 = IsEnableEventShop_39926776;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_39926776,
                      v50,
                      v32,
                      v41,
                      IsEnableEventShop_39926776,
                      v48);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v27;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v36;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v44;
  this->fields._IsSpecialSummonable_k__BackingField = v51;
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
        sub_1B88814(this, shopEntities);
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
    sub_1B8880C(this, shopEntities);
  }
  return v5;
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

  if ( (byte_4A577D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A577D6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_18:
    sub_1B8880C(Instance, v5);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = (UserShopMaster_o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1B88814(Instance, v5);
    v9 = shopEntities->m_Items[v8];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v9 || !v7 )
      goto LABEL_18;
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
  unsigned int v9; // w26
  ShopEntity_o *v10; // x28
  int64_t openedAt; // x22
  int32_t Hour; // w22
  int32_t Minute; // w23
  int32_t Second; // w24
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

  if ( (byte_4A577D5 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&System_DateTimeOffset_TypeInfo);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&System_TimeSpan_TypeInfo);
    byte_4A577D5 = 1;
  }
  v21 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  v23[0] = 0LL;
  v23[1] = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_32:
    sub_1B8880C(Instance, v6);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = (UserShopMaster_o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
      sub_1B88814(Instance, v6);
    v10 = shopEntities->m_Items[v9];
    if ( !v10 )
      goto LABEL_32;
    openedAt = v10->fields.openedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v22 = NetworkManager__getDateTime_38478840(openedAt, 0LL).fields._dateData;
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
    System_TimeSpan___ctor_62611896(v27, Hour, Minute, Second, 0LL);
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
    Instance = System_DateTime__op_GreaterThan(v32, v34, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v8 )
        goto LABEL_32;
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

  if ( (byte_4A577D9 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A577D9 = 1;
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
        sub_1B88814(Time, v6);
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
    sub_1B8880C(Time, v6);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  ShopEntity_o **m_Items; // x24
  int v14; // w25
  ShopEntity_o *v15; // x21
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A577D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4A577D7 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_27;
  v11 = *(_QWORD *)&shopEntities->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v14 = type - 1;
    while ( 2 )
    {
      if ( v12 < (unsigned int)v11 )
      {
        m_Items = shopEntities->m_Items;
        v15 = shopEntities->m_Items[v12];
        switch ( v14 )
        {
          case 0:
            if ( !v15 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v12], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 1:
            if ( !v15 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v12], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 2:
            if ( !v15 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v12], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 3:
            if ( !v15 )
              goto LABEL_27;
            if ( v15->fields.shopType != 12 )
              goto LABEL_24;
LABEL_19:
            if ( !v6 )
              goto LABEL_27;
            items = v6->fields._items;
            v17 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v15,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v15;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v15, v9, v10);
            }
LABEL_24:
            LODWORD(v11) = shopEntities->max_length;
            if ( (__int64)++v12 >= (int)v11 )
              goto LABEL_25;
            continue;
          default:
            goto LABEL_24;
        }
      }
      break;
    }
    sub_1B88814(IsLimitedIconDisplayTarget, v8);
  }
LABEL_25:
  if ( !v6 )
LABEL_27:
    sub_1B8880C(IsLimitedIconDisplayTarget, v8);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  signed int max_length; // w8
  unsigned int v12; // w22
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A577D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4A577D8 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_17;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B88814(v7, v8);
      v8 = (Il2CppObject *)entities->m_Items[v12];
      if ( !v8 )
        break;
      if ( v8[8].monitor == (void *)timeLimit )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v14 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v8, v9, v10);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B8880C(v7, v8);
  }
LABEL_15:
  if ( !v6 )
    goto LABEL_17;
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A577DA & 1) == 0 )
  {
    sub_1B885B0(&ShopListNotice___c_TypeInfo);
    byte_4A577DA = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ShopListNotice___c_TypeInfo->static_fields->__9 = (struct ShopListNotice___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ShopListNotice___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return !ShopEntity__IsSoldOut(x, 0LL);
}