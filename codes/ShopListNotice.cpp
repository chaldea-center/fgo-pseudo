void __fastcall ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ShopListNotice___c_c *v12; // x0
  struct ShopListNotice___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x21
  Il2CppObject *v15; // x22
  struct ShopListNotice___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  ShopListNotice_o *v24; // x25
  const MethodInfo *v25; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v27; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v29; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v31; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v33; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v35; // w21
  const MethodInfo *v36; // x3
  ShopEntity_array *v37; // x23
  const MethodInfo *v38; // x2
  ShopListNotice_o *v39; // x22
  const MethodInfo *v40; // x3
  ShopListNotice_o *v41; // x0
  const MethodInfo *v42; // x2
  _BOOL8 v43; // x0
  bool v44; // w23
  const MethodInfo *v45; // x3
  ShopEntity_array *v46; // x26
  const MethodInfo *v47; // x2
  ShopListNotice_o *v48; // x24
  const MethodInfo *v49; // x3
  ShopListNotice_o *v50; // x0
  const MethodInfo *v51; // x2
  _BOOL8 v52; // x0
  bool v53; // w27
  const MethodInfo *v54; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v56; // w26
  const MethodInfo *v57; // x3
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x5
  _BOOL8 IsEnableEventShop_27646972; // x0
  bool v62; // w1
  bool v63; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_418917C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ShopMaster___, shopEntities);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_ShopEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_ShopEntity___, v7);
    sub_B2C35C(&Method_System_Func_ShopEntity__bool___ctor__, v8);
    sub_B2C35C(&System_Func_ShopEntity__bool__TypeInfo, v9);
    sub_B2C35C(&Method_ShopListNotice___c___ctor_b__36_0__, v10);
    sub_B2C35C(&ShopListNotice___c_TypeInfo, v11);
    byte_418917C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = ShopListNotice___c_TypeInfo;
  if ( (BYTE3(ShopListNotice___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopListNotice___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopListNotice___c_TypeInfo);
    v12 = ShopListNotice___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = ShopListNotice___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__36_0,
      v15,
      Method_ShopListNotice___c___ctor_b__36_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_ShopEntity__bool___ctor__);
    v16 = ShopListNotice___c_TypeInfo->static_fields;
    v16->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v24 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                              v23,
                              (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v24, (ShopEntity_array *)v24, v25);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v24,
                                1,
                                v27);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v29);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v31);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v33);
  v35 = IsLimitedIconShow;
  v37 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v24,
          2,
          v36);
  v39 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v37, v38);
  v41 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v39, v37, (int64_t)v39, v40);
  v43 = ShopListNotice__GetIsLimitedIconShow(v41, (ShopEntity_array *)v41, v42);
  v44 = v43;
  v46 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v43, (ShopEntity_array *)v24, 3, v45);
  v48 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v46, v47);
  v50 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v48, v46, (int64_t)v48, v49);
  v52 = ShopListNotice__GetIsLimitedIconShow(v50, (ShopEntity_array *)v50, v51);
  v53 = v52;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v52, v46, v54);
  v56 = IndefiniteTimeLimit;
  Master_WarQuestSelectionMaster = (ShopMaster_o *)ShopListNotice__GetShopEntitiesByLimitedType(
                                                     (ShopListNotice_o *)IndefiniteTimeLimit,
                                                     (ShopEntity_array *)v24,
                                                     4,
                                                     v57);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      IsEnableEventShop_27646972 = ShopMaster__IsEnableEventShop_27646972(Master_WarQuestSelectionMaster, v59);
      goto LABEL_19;
    }
LABEL_23:
    sub_B2C434(Master_WarQuestSelectionMaster, v59);
  }
  IsEnableEventShop_27646972 = 0LL;
LABEL_19:
  v62 = v35;
  v63 = IsEnableEventShop_27646972;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_27646972,
                      v62,
                      v44,
                      v53,
                      IsEnableEventShop_27646972,
                      v60);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v39;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v48;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v56;
  this->fields._IsSpecialSummonable_k__BackingField = v63;
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
    sub_B2C434(this, shopEntities);
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B2C460(this);
      sub_B2C400(v7, 0LL);
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
  __int64 v7; // x1
  signed int max_length; // w8
  UserShopMaster_o *v9; // x20
  unsigned int v10; // w21
  ShopEntity_o *v11; // x23
  __int64 v13; // x0

  if ( (byte_418917E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntities);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418917E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_19:
    sub_B2C434(Instance, v7);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = (UserShopMaster_o *)Instance;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      v13 = sub_B2C460(Instance);
      sub_B2C400(v13, 0LL);
    }
    v11 = shopEntities->m_Items[v10];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v11 || !v9 )
      goto LABEL_19;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v9, Instance, v11->fields.baseShopId, 0LL);
    if ( !Instance
      || *(_QWORD *)(Instance + 40) < v11->fields.openedAt
      || *(_DWORD *)(Instance + 28) < v11->fields.limitNum )
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
  uint64_t dateData; // x20
  int64_t Instance; // x0
  __int64 v10; // x1
  signed int max_length; // w8
  UserShopMaster_o *v12; // x21
  unsigned int v13; // w25
  ShopEntity_o *v14; // x28
  int64_t openedAt; // x22
  int32_t Hour; // w22
  int32_t Minute; // w23
  int32_t Second; // w3
  uint64_t v19; // x22
  int64_t v20; // x23
  System_DateTime_o v21; // x0
  BalanceConfig_c *v22; // x8
  const MethodInfo *v23; // x2
  double v24; // d0
  __int64 v26; // x0
  uint64_t v27; // [xsp+8h] [xbp-78h] BYREF
  int64_t v28; // [xsp+10h] [xbp-70h] BYREF
  uint64_t v29; // [xsp+18h] [xbp-68h] BYREF
  __int64 v30; // [xsp+20h] [xbp-60h] BYREF
  __int64 v31; // [xsp+28h] [xbp-58h]
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8
  System_TimeSpan_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x0.8
  System_DateTime_o v37; // 0:x0.8
  System_DateTime_o v38; // 0:x0.8
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  System_TimeSpan_o v41; // 0:x1.8
  System_DateTime_o v42; // 0:x1.8
  System_DateTimeOffset_o v43; // 0:x0.16

  if ( (byte_418917D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, shopEntities);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v4);
    sub_B2C35C(&System_DateTime_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418917D = 1;
  }
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  v30 = 0LL;
  v31 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_33:
    sub_B2C434(Instance, v10);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = (UserShopMaster_o *)Instance;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= max_length )
    {
      v26 = sub_B2C460(Instance);
      sub_B2C400(v26, 0LL);
    }
    v14 = shopEntities->m_Items[v13];
    if ( !v14 )
      goto LABEL_33;
    openedAt = v14->fields.openedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v29 = NetworkManager__getDateTime_26271468(openedAt, 0LL).fields.dateData;
    v32.fields.dateData = (uint64_t)&v29;
    Hour = System_DateTime__get_Hour(v32, 0LL);
    v33.fields.dateData = (uint64_t)&v29;
    Minute = System_DateTime__get_Minute(v33, 0LL);
    v34.fields.dateData = (uint64_t)&v29;
    Second = System_DateTime__get_Second(v34, 0LL);
    v35.fields._ticks = (int64_t)&v28;
    System_TimeSpan___ctor_41712580(v35, Hour, Minute, Second, 0LL);
    v20 = v28;
    v19 = v29;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v36.fields.dateData = v19;
    v41.fields._ticks = v20;
    v21.fields.dateData = System_DateTime__op_Subtraction(v36, v41, 0LL).fields.dateData;
    v22 = BalanceConfig_TypeInfo;
    v29 = v21.fields.dateData;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v37.fields.dateData = (uint64_t)&v29;
    v29 = System_DateTime__AddDays(v37, v22->static_fields->ShopNewItemAddDays, 0LL).fields.dateData;
    v43.fields.m_dateTime.fields.dateData = (uint64_t)&v30;
    *(_QWORD *)&v43.fields.m_offsetMinutes = 0LL;
    v27 = System_DateTimeOffset__get_LocalDateTime(v43, v23).fields.dateData;
    v38.fields.dateData = (uint64_t)&v27;
    v24 = (double)-System_DateTime__get_Hour(v38, 0LL);
    v39.fields.dateData = (uint64_t)&v29;
    v42.fields.dateData = System_DateTime__AddHours(v39, v24, 0LL).fields.dateData;
    v29 = v42.fields.dateData;
    v40.fields.dateData = dateData;
    Instance = System_DateTime__op_GreaterThan(v40, v42, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v12 )
        goto LABEL_33;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v12, Instance, v14->fields.baseShopId, 0LL);
      if ( !Instance
        || *(_QWORD *)(Instance + 40) < v14->fields.openedAt
        || *(_DWORD *)(Instance + 28) < v14->fields.limitNum )
      {
        return 1;
      }
    }
    max_length = shopEntities->max_length;
    if ( (int)++v13 >= max_length )
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

  if ( (byte_4189181 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, entities);
    byte_4189181 = 1;
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
        v15 = sub_B2C460(Time);
        sub_B2C400(v15, 0LL);
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
    sub_B2C434(Time, v6);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  _BOOL8 IsLimitedIconDisplayTarget; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  ShopEntity_o **m_Items; // x23
  int v15; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x21
  __int64 v18; // x0

  if ( (byte_418917F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, shopEntities);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v8);
    byte_418917F = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_24;
  v12 = *(_QWORD *)&shopEntities->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v15 = type - 1;
    while ( 2 )
    {
      if ( v13 < (unsigned int)v12 )
      {
        m_Items = shopEntities->m_Items;
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)shopEntities->m_Items[v13];
        switch ( v15 )
        {
          case 0:
            if ( !v16 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v13], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 1:
            if ( !v16 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v13], 0LL);
            if ( IsLimitedIconDisplayTarget )
              goto LABEL_19;
            goto LABEL_21;
          case 2:
            if ( !v16 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v13], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 3:
            if ( !v16 )
              goto LABEL_24;
            if ( v16[1].fields.addCount != 12 )
              goto LABEL_21;
LABEL_19:
            if ( !v9 )
              goto LABEL_24;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              v16,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
LABEL_21:
            LODWORD(v12) = shopEntities->max_length;
            if ( (__int64)++v13 >= (int)v12 )
              goto LABEL_22;
            continue;
          default:
            goto LABEL_21;
        }
      }
      break;
    }
    v18 = sub_B2C460(IsLimitedIconDisplayTarget);
    sub_B2C400(v18, 0LL);
  }
LABEL_22:
  if ( !v9 )
LABEL_24:
    sub_B2C434(IsLimitedIconDisplayTarget, v11);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  ShopEntity_o *v11; // x1
  signed int max_length; // w8
  unsigned int v13; // w22
  __int64 v15; // x0

  if ( (byte_4189180 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, entities);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v8);
    byte_4189180 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_14;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v15 = sub_B2C460(v10);
        sub_B2C400(v15, 0LL);
      }
      v11 = entities->m_Items[v13];
      if ( !v11 )
        break;
      if ( v11->fields.closedAt == timeLimit )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B2C434(v10, v11);
  }
LABEL_12:
  if ( !v9 )
    goto LABEL_14;
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  struct ShopListNotice___c_StaticFields *static_fields; // x0

  if ( (byte_4185448 & 1) == 0 )
  {
    sub_B2C35C(&ShopListNotice___c_TypeInfo, v1);
    byte_4185448 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ShopListNotice___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopListNotice___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return !ShopEntity__IsSoldOut(x, 0LL);
}