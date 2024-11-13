void __fastcall ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ShopListNotice___c_c *v20; // x0
  System_Func_object__bool__o *_9__36_0; // x21
  Il2CppObject *v22; // x22
  struct ShopListNotice___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  ShopListNotice_o *v31; // x23
  const MethodInfo *v32; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v34; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v36; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v38; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v40; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v42; // w21
  const MethodInfo *v43; // x3
  ShopEntity_array *v44; // x24
  const MethodInfo *v45; // x2
  ShopListNotice_o *v46; // x22
  const MethodInfo *v47; // x3
  ShopListNotice_o *v48; // x0
  const MethodInfo *v49; // x2
  _BOOL8 v50; // x0
  bool v51; // w24
  const MethodInfo *v52; // x3
  ShopEntity_array *v53; // x26
  const MethodInfo *v54; // x2
  ShopListNotice_o *v55; // x25
  const MethodInfo *v56; // x3
  ShopListNotice_o *v57; // x0
  const MethodInfo *v58; // x2
  _BOOL8 v59; // x0
  bool v60; // w27
  const MethodInfo *v61; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v63; // w26
  const MethodInfo *v64; // x3
  ShopEntity_array *Master_object; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x5
  _BOOL8 IsEnableEventShop_40655644; // x0
  bool v69; // w1
  bool v70; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_4B12751 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, shopEntities, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ShopEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ShopEntity___, v9, v10);
    sub_1BCA7E0(&System_Func_ShopEntity__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ShopListNotice___c___ctor_b__36_0__, v13, v14);
    sub_1BCA7E0(&ShopListNotice___c_TypeInfo, v15, v16);
    byte_4B12751 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v20 = ShopListNotice___c_TypeInfo;
  if ( !ShopListNotice___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopListNotice___c_TypeInfo, v17);
    v20 = ShopListNotice___c_TypeInfo;
  }
  _9__36_0 = (System_Func_object__bool__o *)v20->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, v17);
      v20 = ShopListNotice___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__36_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ShopEntity__bool__TypeInfo, v17, v18, v19);
    System_Func_object__bool____ctor(_9__36_0, v22, Method_ShopListNotice___c___ctor_b__36_0__, 0LL);
    static_fields = ShopListNotice___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
      (int64_t)_9__36_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v31 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_object_(
                              v30,
                              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v31, (ShopEntity_array *)v31, v32);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v31,
                                1,
                                v34);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v36);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v38);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v40);
  v42 = IsLimitedIconShow;
  v44 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v31,
          2,
          v43);
  v46 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v44, v45);
  v48 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v46, v44, (int64_t)v46, v47);
  v50 = ShopListNotice__GetIsLimitedIconShow(v48, (ShopEntity_array *)v48, v49);
  v51 = v50;
  v53 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v50, (ShopEntity_array *)v31, 3, v52);
  v55 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v53, v54);
  v57 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v55, v53, (int64_t)v55, v56);
  v59 = ShopListNotice__GetIsLimitedIconShow(v57, (ShopEntity_array *)v57, v58);
  v60 = v59;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v59, v53, v61);
  v63 = IndefiniteTimeLimit;
  Master_object = ShopListNotice__GetShopEntitiesByLimitedType(
                    (ShopListNotice_o *)IndefiniteTimeLimit,
                    (ShopEntity_array *)v31,
                    4,
                    v64);
  if ( !Master_object )
    goto LABEL_20;
  if ( *(_QWORD *)&Master_object->max_length )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66);
    Master_object = (ShopEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      IsEnableEventShop_40655644 = ShopMaster__IsEnableEventShop_40655644((ShopMaster_o *)Master_object, 0LL);
      goto LABEL_16;
    }
LABEL_20:
    sub_1BCAA3C(Master_object, v66);
  }
  IsEnableEventShop_40655644 = 0LL;
LABEL_16:
  v69 = v42;
  v70 = IsEnableEventShop_40655644;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_40655644,
                      v69,
                      v51,
                      v60,
                      IsEnableEventShop_40655644,
                      v67);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v46;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v55;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v63;
  this->fields._IsSpecialSummonable_k__BackingField = v70;
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
        sub_1BCAA44(this, shopEntities);
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
    sub_1BCAA3C(this, shopEntities);
  }
  return v5;
}


bool __fastcall ShopListNotice__GetIsLimitedIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  signed int max_length; // w8
  UserShopMaster_o *v11; // x20
  unsigned int v12; // w21
  ShopEntity_o *v13; // x23

  if ( (byte_4B12753 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntities, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12753 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_18:
    sub_1BCAA3C(Instance, v9);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = (UserShopMaster_o *)Instance;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
      sub_1BCAA44(Instance, v9);
    v13 = shopEntities->m_Items[v12];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v13 || !v11 )
      goto LABEL_18;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v11, Instance, v13->fields.baseShopId, 0LL);
    if ( !Instance
      || *(_QWORD *)(Instance + 48) < v13->fields.openedAt
      || *(_DWORD *)(Instance + 28) < v13->fields.limitNum )
    {
      return 1;
    }
    max_length = shopEntities->max_length;
    if ( (int)++v12 >= max_length )
      return 0;
  }
}


bool __fastcall ShopListNotice__GetIsNewIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
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
  uint64_t dateData; // x20
  int64_t Instance; // x0
  __int64 v18; // x1
  signed int max_length; // w8
  UserShopMaster_o *v20; // x21
  unsigned int v21; // w26
  ShopEntity_o *v22; // x28
  int64_t openedAt; // x22
  __int64 v24; // x1
  int32_t Hour; // w22
  int32_t Minute; // w23
  __int64 v27; // x1
  int32_t Second; // w24
  System_DateTime_o v29; // x0
  System_DateTime_o v30; // x1
  BalanceConfig_c *v31; // x8
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  double v34; // d0
  uint64_t v36; // [xsp+8h] [xbp-88h] BYREF
  int64_t v37; // [xsp+10h] [xbp-80h] BYREF
  uint64_t v38; // [xsp+18h] [xbp-78h] BYREF
  __int64 v39[2]; // [xsp+20h] [xbp-70h] BYREF
  System_DateTime_o v40; // 0:x0.8
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8
  System_TimeSpan_o v43; // 0:x0.8
  System_DateTime_o v44; // 0:x0.8
  System_DateTime_o v45; // 0:x0.8
  System_DateTime_o v46; // 0:x0.8
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_TimeSpan_o v49; // 0:x1.8
  System_DateTime_o v50; // 0:x1.8
  System_DateTimeOffset_o v51; // 0:x0.16

  if ( (byte_4B12752 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, shopEntities, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v4, v5);
    sub_1BCA7E0(&System_DateTimeOffset_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&System_TimeSpan_TypeInfo, v14, v15);
    byte_4B12752 = 1;
  }
  v37 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntities);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  v39[0] = 0LL;
  v39[1] = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_32:
    sub_1BCAA3C(Instance, v18);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v20 = (UserShopMaster_o *)Instance;
  v21 = 0;
  while ( 1 )
  {
    if ( v21 >= max_length )
      sub_1BCAA44(Instance, v18);
    v22 = shopEntities->m_Items[v21];
    if ( !v22 )
      goto LABEL_32;
    openedAt = v22->fields.openedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    v38 = NetworkManager__getDateTime_39270164(openedAt, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v24);
    v40.fields._dateData = (uint64_t)&v38;
    Hour = System_DateTime__get_Hour(v40, 0LL);
    v41.fields._dateData = (uint64_t)&v38;
    Minute = System_DateTime__get_Minute(v41, 0LL);
    v42.fields._dateData = (uint64_t)&v38;
    Second = System_DateTime__get_Second(v42, 0LL);
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v27);
    v43.fields._ticks = (int64_t)&v37;
    System_TimeSpan___ctor_63306412(v43, Hour, Minute, Second, 0LL);
    v49.fields._ticks = v37;
    v44.fields._dateData = v38;
    v29.fields._dateData = System_DateTime__op_Subtraction(v44, v49, 0LL).fields._dateData;
    v31 = BalanceConfig_TypeInfo;
    v38 = v29.fields._dateData;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v30.fields._dateData);
      v31 = BalanceConfig_TypeInfo;
    }
    v45.fields._dateData = (uint64_t)&v38;
    v38 = System_DateTime__AddDays(v45, v31->static_fields->ShopNewItemAddDays, 0LL).fields._dateData;
    if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo, v32);
    v51.fields._dateTime.fields._dateData = (uint64_t)v39;
    *(_QWORD *)&v51.fields._offsetMinutes = 0LL;
    v36 = System_DateTimeOffset__get_LocalDateTime(v51, v33).fields._dateData;
    v46.fields._dateData = (uint64_t)&v36;
    v34 = (double)-System_DateTime__get_Hour(v46, 0LL);
    v47.fields._dateData = (uint64_t)&v38;
    v50.fields._dateData = System_DateTime__AddHours(v47, v34, 0LL).fields._dateData;
    v38 = v50.fields._dateData;
    v48.fields._dateData = dateData;
    Instance = System_DateTime__op_GreaterThan(v48, v50, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v20 )
        goto LABEL_32;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v20, Instance, v22->fields.baseShopId, 0LL);
      if ( !Instance
        || *(_QWORD *)(Instance + 48) < v22->fields.openedAt
        || *(_DWORD *)(Instance + 28) < v22->fields.limitNum )
      {
        return 1;
      }
    }
    max_length = shopEntities->max_length;
    if ( (int)++v21 >= max_length )
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

  if ( (byte_4B12756 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, entities, method);
    byte_4B12756 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, entities);
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
        sub_1BCAA44(Time, v6);
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
    sub_1BCAA3C(Time, v6);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopListNotice__GetShopEntitiesByLimitedType(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  _BOOL8 IsLimitedIconDisplayTarget; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x8
  unsigned __int64 v22; // x22
  ShopEntity_o **m_Items; // x24
  int v24; // w25
  ShopEntity_o *v25; // x21
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4B12754 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, shopEntities, *(_QWORD *)&type);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v10, v11);
    byte_4B12754 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       shopEntities,
                                                       *(_QWORD *)&type,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_27;
  v21 = *(_QWORD *)&shopEntities->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    v24 = type - 1;
    while ( 2 )
    {
      if ( v22 < (unsigned int)v21 )
      {
        m_Items = shopEntities->m_Items;
        v25 = shopEntities->m_Items[v22];
        switch ( v24 )
        {
          case 0:
            if ( !v25 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v22], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 1:
            if ( !v25 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v22], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 2:
            if ( !v25 )
              goto LABEL_27;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v22], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_24;
            goto LABEL_19;
          case 3:
            if ( !v25 )
              goto LABEL_27;
            if ( v25->fields.shopType != 12 )
              goto LABEL_24;
LABEL_19:
            if ( !v12 )
              goto LABEL_27;
            items = v12->fields._items;
            v27 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v25,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v25;
              sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v25, v15, v16, v17, v18, v19, v20);
            }
LABEL_24:
            LODWORD(v21) = shopEntities->max_length;
            if ( (__int64)++v22 >= (int)v21 )
              goto LABEL_25;
            continue;
          default:
            goto LABEL_24;
        }
      }
      break;
    }
    sub_1BCAA44(IsLimitedIconDisplayTarget, v14);
  }
LABEL_25:
  if ( !v12 )
LABEL_27:
    sub_1BCAA3C(IsLimitedIconDisplayTarget, v14);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v12,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 v13; // x0
  Il2CppObject *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  signed int max_length; // w8
  unsigned int v22; // w22
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B12755 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, entities, timeLimit);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v10, v11);
    byte_4B12755 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       entities,
                                                       timeLimit,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_17;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1BCAA44(v13, v14);
      v14 = (Il2CppObject *)entities->m_Items[v22];
      if ( !v14 )
        break;
      if ( v14[8].monitor == (void *)timeLimit )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v14,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v14;
          sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v14, v15, v16, v17, v18, v19, v20);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCAA3C(v13, v14);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v12,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1275B & 1) == 0 )
  {
    sub_1BCA7E0(&ShopListNotice___c_TypeInfo, v1, v2);
    byte_4B1275B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ShopListNotice___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ShopListNotice___c_TypeInfo->static_fields->__9 = (struct ShopListNotice___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopListNotice___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return !ShopEntity__IsSoldOut(x, 0LL);
}