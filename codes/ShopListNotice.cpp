void __fastcall ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  ShopListNotice___c_c *v14; // x0
  struct ShopListNotice___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x21
  Il2CppObject *v17; // x22
  struct ShopListNotice___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  ShopListNotice_o *v26; // x25
  const MethodInfo *v27; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v29; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v31; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v33; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v35; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v37; // w21
  const MethodInfo *v38; // x3
  ShopEntity_array *v39; // x23
  const MethodInfo *v40; // x2
  ShopListNotice_o *v41; // x22
  const MethodInfo *v42; // x3
  ShopListNotice_o *v43; // x0
  const MethodInfo *v44; // x2
  _BOOL8 v45; // x0
  bool v46; // w23
  const MethodInfo *v47; // x3
  ShopEntity_array *v48; // x26
  const MethodInfo *v49; // x2
  ShopListNotice_o *v50; // x24
  const MethodInfo *v51; // x3
  ShopListNotice_o *v52; // x0
  const MethodInfo *v53; // x2
  _BOOL8 v54; // x0
  bool v55; // w27
  const MethodInfo *v56; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v58; // w26
  const MethodInfo *v59; // x3
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v61; // x5
  const MethodInfo *v62; // x1
  _BOOL8 IsEnableEventShop_27312364; // x0
  bool v64; // w1
  bool v65; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_42160B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, shopEntities);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ShopEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_ShopEntity___, v7);
    sub_B0D8A4(&Method_System_Func_ShopEntity__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_ShopEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_ShopListNotice___c___ctor_b__36_0__, v10);
    sub_B0D8A4(&ShopListNotice___c_TypeInfo, v11);
    byte_42160B7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14 = ShopListNotice___c_TypeInfo;
  if ( (BYTE3(ShopListNotice___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopListNotice___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopListNotice___c_TypeInfo);
    v14 = ShopListNotice___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = ShopListNotice___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_ShopEntity__bool__TypeInfo,
                                                                                    v12,
                                                                                    v13);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__36_0,
      v17,
      Method_ShopListNotice___c___ctor_b__36_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_ShopEntity__bool___ctor__);
    v18 = ShopListNotice___c_TypeInfo->static_fields;
    v18->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v18->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v26 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                              v25,
                              (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v26, (ShopEntity_array *)v26, v27);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v26,
                                1,
                                v29);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v31);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v33);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v35);
  v37 = IsLimitedIconShow;
  v39 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v26,
          2,
          v38);
  v41 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v39, v40);
  v43 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v41, v39, (int64_t)v41, v42);
  v45 = ShopListNotice__GetIsLimitedIconShow(v43, (ShopEntity_array *)v43, v44);
  v46 = v45;
  v48 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v45, (ShopEntity_array *)v26, 3, v47);
  v50 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v48, v49);
  v52 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v50, v48, (int64_t)v50, v51);
  v54 = ShopListNotice__GetIsLimitedIconShow(v52, (ShopEntity_array *)v52, v53);
  v55 = v54;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v54, v48, v56);
  v58 = IndefiniteTimeLimit;
  Master_WarQuestSelectionMaster = (ShopMaster_o *)ShopListNotice__GetShopEntitiesByLimitedType(
                                                     (ShopListNotice_o *)IndefiniteTimeLimit,
                                                     (ShopEntity_array *)v26,
                                                     4,
                                                     v59);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      IsEnableEventShop_27312364 = ShopMaster__IsEnableEventShop_27312364(Master_WarQuestSelectionMaster, v62);
      goto LABEL_19;
    }
LABEL_23:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  IsEnableEventShop_27312364 = 0LL;
LABEL_19:
  v64 = v37;
  v65 = IsEnableEventShop_27312364;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_27312364,
                      v64,
                      v46,
                      v55,
                      IsEnableEventShop_27312364,
                      v61);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v41;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v50;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v58;
  this->fields._IsSpecialSummonable_k__BackingField = v65;
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
    sub_B0D97C(this);
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B0D9A8(this);
      sub_B0D948(v7, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  signed int max_length; // w8
  UserShopMaster_o *v8; // x20
  unsigned int v9; // w21
  ShopEntity_o *v10; // x23
  __int64 v12; // x0

  if ( (byte_42160B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntities);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42160B9 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_19:
    sub_B0D97C(Instance);
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
      v12 = sub_B0D9A8(Instance);
      sub_B0D948(v12, 0LL);
    }
    v10 = shopEntities->m_Items[v9];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v10 || !v8 )
      goto LABEL_19;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v8, Instance, v10->fields.baseShopId, 0LL);
    if ( !Instance
      || *(_QWORD *)(Instance + 40) < v10->fields.openedAt
      || *(_DWORD *)(Instance + 28) < v10->fields.limitNum )
    {
      return 1;
    }
    max_length = shopEntities->max_length;
    if ( (int)++v9 >= max_length )
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
  uint64_t dateData; // x20
  int64_t Instance; // x0
  signed int max_length; // w8
  UserShopMaster_o *v11; // x21
  unsigned int v12; // w25
  ShopEntity_o *v13; // x28
  int64_t openedAt; // x22
  int32_t Hour; // w22
  int32_t Minute; // w23
  int32_t Second; // w3
  uint64_t v18; // x22
  int64_t v19; // x23
  System_DateTime_o v20; // x0
  BalanceConfig_c *v21; // x8
  const MethodInfo *v22; // x2
  double v23; // d0
  __int64 v25; // x0
  uint64_t v26; // [xsp+8h] [xbp-78h] BYREF
  int64_t v27; // [xsp+10h] [xbp-70h] BYREF
  uint64_t v28; // [xsp+18h] [xbp-68h] BYREF
  __int64 v29; // [xsp+20h] [xbp-60h] BYREF
  __int64 v30; // [xsp+28h] [xbp-58h]
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

  if ( (byte_42160B8 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, shopEntities);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, v4);
    sub_B0D8A4(&System_DateTime_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42160B8 = 1;
  }
  v29 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  v29 = 0LL;
  v30 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_33:
    sub_B0D97C(Instance);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = (UserShopMaster_o *)Instance;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      v25 = sub_B0D9A8(Instance);
      sub_B0D948(v25, 0LL);
    }
    v13 = shopEntities->m_Items[v12];
    if ( !v13 )
      goto LABEL_33;
    openedAt = v13->fields.openedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v28 = NetworkManager__getDateTime_25504560(openedAt, 0LL).fields.dateData;
    v31.fields.dateData = (uint64_t)&v28;
    Hour = System_DateTime__get_Hour(v31, 0LL);
    v32.fields.dateData = (uint64_t)&v28;
    Minute = System_DateTime__get_Minute(v32, 0LL);
    v33.fields.dateData = (uint64_t)&v28;
    Second = System_DateTime__get_Second(v33, 0LL);
    v34.fields._ticks = (int64_t)&v27;
    System_TimeSpan___ctor_41497848(v34, Hour, Minute, Second, 0LL);
    v19 = v27;
    v18 = v28;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v35.fields.dateData = v18;
    v40.fields._ticks = v19;
    v20.fields.dateData = System_DateTime__op_Subtraction(v35, v40, 0LL).fields.dateData;
    v21 = BalanceConfig_TypeInfo;
    v28 = v20.fields.dateData;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    v36.fields.dateData = (uint64_t)&v28;
    v28 = System_DateTime__AddDays(v36, v21->static_fields->ShopNewItemAddDays, 0LL).fields.dateData;
    v42.fields.m_dateTime.fields.dateData = (uint64_t)&v29;
    *(_QWORD *)&v42.fields.m_offsetMinutes = 0LL;
    v26 = System_DateTimeOffset__get_LocalDateTime(v42, v22).fields.dateData;
    v37.fields.dateData = (uint64_t)&v26;
    v23 = (double)-System_DateTime__get_Hour(v37, 0LL);
    v38.fields.dateData = (uint64_t)&v28;
    v41.fields.dateData = System_DateTime__AddHours(v38, v23, 0LL).fields.dateData;
    v28 = v41.fields.dateData;
    v39.fields.dateData = dateData;
    Instance = System_DateTime__op_GreaterThan(v39, v41, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v11 )
        goto LABEL_33;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v11, Instance, v13->fields.baseShopId, 0LL);
      if ( !Instance
        || *(_QWORD *)(Instance + 40) < v13->fields.openedAt
        || *(_DWORD *)(Instance + 28) < v13->fields.limitNum )
      {
        return 1;
      }
    }
    max_length = shopEntities->max_length;
    if ( (int)++v12 >= max_length )
      return 0;
  }
}


int64_t __fastcall ShopListNotice__GetMostRecentTimeLimit(
        ShopListNotice_o *this,
        ShopEntity_array *entities,
        const MethodInfo *method)
{
  int64_t Time; // x0
  signed int max_length; // w8
  __int64 v7; // x21
  unsigned int v8; // w24
  int64_t v9; // x22
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x23
  __int64 events; // x26
  __int64 v14; // x0

  if ( (byte_42160BC & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, entities);
    byte_42160BC = 1;
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
    v7 = Time;
    v8 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v14 = sub_B0D9A8(Time);
        sub_B0D948(v14, 0LL);
      }
      v10 = &entities->obj.klass + (int)v8;
      v11 = v10[4];
      if ( !v11 )
        break;
      events = (__int64)v11->_1.events;
      if ( events >= v7 )
      {
        Time = ShopEntity__GetRemainDays((ShopEntity_o *)v10[4], 0LL);
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
LABEL_21:
    sub_B0D97C(Time);
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  _BOOL8 IsLimitedIconDisplayTarget; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  ShopEntity_o **m_Items; // x23
  int v14; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x21
  __int64 v17; // x0

  if ( (byte_42160BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__Add__, shopEntities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v8);
    byte_42160BA = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                 shopEntities,
                                                                                                 *(_QWORD *)&type);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_24;
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
        v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)shopEntities->m_Items[v12];
        switch ( v14 )
        {
          case 0:
            if ( !v15 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v12], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 1:
            if ( !v15 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v12], 0LL);
            if ( IsLimitedIconDisplayTarget )
              goto LABEL_19;
            goto LABEL_21;
          case 2:
            if ( !v15 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v12], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 3:
            if ( !v15 )
              goto LABEL_24;
            if ( v15[1].fields.addCount != 12 )
              goto LABEL_21;
LABEL_19:
            if ( !v9 )
              goto LABEL_24;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              v15,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
LABEL_21:
            LODWORD(v11) = shopEntities->max_length;
            if ( (__int64)++v12 >= (int)v11 )
              goto LABEL_22;
            continue;
          default:
            goto LABEL_21;
        }
      }
      break;
    }
    v17 = sub_B0D9A8(IsLimitedIconDisplayTarget);
    sub_B0D948(v17, 0LL);
  }
LABEL_22:
  if ( !v9 )
LABEL_24:
    sub_B0D97C(IsLimitedIconDisplayTarget);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  __int64 v10; // x0
  signed int max_length; // w8
  unsigned int v12; // w22
  ShopEntity_o *v13; // x1
  __int64 v15; // x0

  if ( (byte_42160BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__Add__, entities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v8);
    byte_42160BB = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                 entities,
                                                                                                 timeLimit);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_14;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v15 = sub_B0D9A8(v10);
        sub_B0D948(v15, 0LL);
      }
      v13 = entities->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.closedAt == timeLimit )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B0D97C(v10);
  }
LABEL_12:
  if ( !v9 )
    goto LABEL_14;
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  Il2CppObject *v3; // x19
  struct ShopListNotice___c_StaticFields *static_fields; // x0

  if ( (byte_4212291 & 1) == 0 )
  {
    sub_B0D8A4(&ShopListNotice___c_TypeInfo, v1);
    byte_4212291 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ShopListNotice___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ShopListNotice___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopListNotice___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return !ShopEntity__IsSoldOut(x, 0LL);
}