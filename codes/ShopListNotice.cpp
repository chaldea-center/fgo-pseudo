void __fastcall ShopListNotice___ctor(ShopListNotice_o *this, ShopEntity_array *shopEntities, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  ShopListNotice___c_c *v27; // x0
  struct ShopListNotice___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x21
  Il2CppObject *v30; // x22
  struct ShopListNotice___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  ShopListNotice_o *v39; // x25
  const MethodInfo *v40; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v42; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v44; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v46; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v48; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v50; // w21
  const MethodInfo *v51; // x3
  ShopEntity_array *v52; // x23
  const MethodInfo *v53; // x2
  ShopListNotice_o *v54; // x22
  const MethodInfo *v55; // x3
  ShopListNotice_o *v56; // x0
  const MethodInfo *v57; // x2
  _BOOL8 v58; // x0
  bool v59; // w23
  const MethodInfo *v60; // x3
  ShopEntity_array *v61; // x26
  const MethodInfo *v62; // x2
  ShopListNotice_o *v63; // x24
  const MethodInfo *v64; // x3
  ShopListNotice_o *v65; // x0
  const MethodInfo *v66; // x2
  _BOOL8 v67; // x0
  bool v68; // w27
  const MethodInfo *v69; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v71; // w26
  const MethodInfo *v72; // x3
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x5
  _BOOL8 IsEnableEventShop_28608604; // x0
  bool v77; // w1
  bool v78; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_42EA662 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, (_DWORD)shopEntities, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ShopEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ShopEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_ShopEntity__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_ShopEntity__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ShopListNotice___c___ctor_b__36_0__, v21, v22, v23);
    sub_B5D5C4(&ShopListNotice___c_TypeInfo, v24, v25, v26);
    byte_42EA662 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v27 = ShopListNotice___c_TypeInfo;
  if ( (BYTE3(ShopListNotice___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopListNotice___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopListNotice___c_TypeInfo);
    v27 = ShopListNotice___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = ShopListNotice___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__36_0,
      v30,
      Method_ShopListNotice___c___ctor_b__36_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_ShopEntity__bool___ctor__);
    v31 = ShopListNotice___c_TypeInfo->static_fields;
    v31->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v31->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v39 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                              v38,
                              (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v39, (ShopEntity_array *)v39, v40);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v39,
                                1,
                                v42);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v44);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v46);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v48);
  v50 = IsLimitedIconShow;
  v52 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v39,
          2,
          v51);
  v54 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v52, v53);
  v56 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v54, v52, (int64_t)v54, v55);
  v58 = ShopListNotice__GetIsLimitedIconShow(v56, (ShopEntity_array *)v56, v57);
  v59 = v58;
  v61 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v58, (ShopEntity_array *)v39, 3, v60);
  v63 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v61, v62);
  v65 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v63, v61, (int64_t)v63, v64);
  v67 = ShopListNotice__GetIsLimitedIconShow(v65, (ShopEntity_array *)v65, v66);
  v68 = v67;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v67, v61, v69);
  v71 = IndefiniteTimeLimit;
  Master_WarQuestSelectionMaster = (ShopMaster_o *)ShopListNotice__GetShopEntitiesByLimitedType(
                                                     (ShopListNotice_o *)IndefiniteTimeLimit,
                                                     (ShopEntity_array *)v39,
                                                     4,
                                                     v72);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      IsEnableEventShop_28608604 = ShopMaster__IsEnableEventShop_28608604(Master_WarQuestSelectionMaster, v74);
      goto LABEL_19;
    }
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v74);
  }
  IsEnableEventShop_28608604 = 0LL;
LABEL_19:
  v77 = v50;
  v78 = IsEnableEventShop_28608604;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_28608604,
                      v77,
                      v59,
                      v68,
                      IsEnableEventShop_28608604,
                      v75);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v54;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v63;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v71;
  this->fields._IsSpecialSummonable_k__BackingField = v78;
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
    sub_B5D69C(this, shopEntities);
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B5D6C8(this);
      sub_B5D668(v7, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  UserShopMaster_o *v14; // x20
  unsigned int v15; // w21
  ShopEntity_o *v16; // x23
  __int64 v18; // x0

  if ( (byte_42EA664 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)shopEntities, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA664 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_19:
    sub_B5D69C(Instance, v12);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (UserShopMaster_o *)Instance;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= max_length )
    {
      v18 = sub_B5D6C8(Instance);
      sub_B5D668(v18, 0LL);
    }
    v16 = shopEntities->m_Items[v15];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v16 || !v14 )
      goto LABEL_19;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v14, Instance, v16->fields.baseShopId, 0LL);
    if ( !Instance
      || *(_QWORD *)(Instance + 40) < v16->fields.openedAt
      || *(_DWORD *)(Instance + 28) < v16->fields.limitNum )
    {
      return 1;
    }
    max_length = shopEntities->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
}


bool __fastcall ShopListNotice__GetIsNewIconShow(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  uint64_t dateData; // x20
  int64_t Instance; // x0
  __int64 v19; // x1
  signed int max_length; // w8
  UserShopMaster_o *v21; // x21
  unsigned int v22; // w25
  ShopEntity_o *v23; // x28
  int64_t openedAt; // x22
  int32_t Hour; // w22
  int32_t Minute; // w23
  int32_t Second; // w3
  uint64_t v28; // x22
  int64_t v29; // x23
  System_DateTime_o v30; // x0
  BalanceConfig_c *v31; // x8
  const MethodInfo *v32; // x2
  double v33; // d0
  __int64 v35; // x0
  uint64_t v36; // [xsp+8h] [xbp-78h] BYREF
  int64_t v37; // [xsp+10h] [xbp-70h] BYREF
  uint64_t v38; // [xsp+18h] [xbp-68h] BYREF
  __int64 v39; // [xsp+20h] [xbp-60h] BYREF
  __int64 v40; // [xsp+28h] [xbp-58h]
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8
  System_DateTime_o v43; // 0:x0.8
  System_TimeSpan_o v44; // 0:x0.8
  System_DateTime_o v45; // 0:x0.8
  System_DateTime_o v46; // 0:x0.8
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8
  System_TimeSpan_o v50; // 0:x1.8
  System_DateTime_o v51; // 0:x1.8
  System_DateTimeOffset_o v52; // 0:x0.16

  if ( (byte_42EA663 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)shopEntities, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v5, v6, v7);
    sub_B5D5C4(&System_DateTime_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EA663 = 1;
  }
  v39 = 0LL;
  v40 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  v39 = 0LL;
  v40 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_33:
    sub_B5D69C(Instance, v19);
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v21 = (UserShopMaster_o *)Instance;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= max_length )
    {
      v35 = sub_B5D6C8(Instance);
      sub_B5D668(v35, 0LL);
    }
    v23 = shopEntities->m_Items[v22];
    if ( !v23 )
      goto LABEL_33;
    openedAt = v23->fields.openedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v38 = NetworkManager__getDateTime_26077468(openedAt, 0LL).fields.dateData;
    v41.fields.dateData = (uint64_t)&v38;
    Hour = System_DateTime__get_Hour(v41, 0LL);
    v42.fields.dateData = (uint64_t)&v38;
    Minute = System_DateTime__get_Minute(v42, 0LL);
    v43.fields.dateData = (uint64_t)&v38;
    Second = System_DateTime__get_Second(v43, 0LL);
    v44.fields._ticks = (int64_t)&v37;
    System_TimeSpan___ctor_42304124(v44, Hour, Minute, Second, 0LL);
    v29 = v37;
    v28 = v38;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v45.fields.dateData = v28;
    v50.fields._ticks = v29;
    v30.fields.dateData = System_DateTime__op_Subtraction(v45, v50, 0LL).fields.dateData;
    v31 = BalanceConfig_TypeInfo;
    v38 = v30.fields.dateData;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    v46.fields.dateData = (uint64_t)&v38;
    v38 = System_DateTime__AddDays(v46, v31->static_fields->ShopNewItemAddDays, 0LL).fields.dateData;
    v52.fields.m_dateTime.fields.dateData = (uint64_t)&v39;
    *(_QWORD *)&v52.fields.m_offsetMinutes = 0LL;
    v36 = System_DateTimeOffset__get_LocalDateTime(v52, v32).fields.dateData;
    v47.fields.dateData = (uint64_t)&v36;
    v33 = (double)-System_DateTime__get_Hour(v47, 0LL);
    v48.fields.dateData = (uint64_t)&v38;
    v51.fields.dateData = System_DateTime__AddHours(v48, v33, 0LL).fields.dateData;
    v38 = v51.fields.dateData;
    v49.fields.dateData = dateData;
    Instance = System_DateTime__op_GreaterThan(v49, v51, 0LL);
    if ( (Instance & 1) == 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v21 )
        goto LABEL_33;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v21, Instance, v23->fields.baseShopId, 0LL);
      if ( !Instance
        || *(_QWORD *)(Instance + 40) < v23->fields.openedAt
        || *(_DWORD *)(Instance + 28) < v23->fields.limitNum )
      {
        return 1;
      }
    }
    max_length = shopEntities->max_length;
    if ( (int)++v22 >= max_length )
      return 0;
  }
}


int64_t __fastcall ShopListNotice__GetMostRecentTimeLimit(
        ShopListNotice_o *this,
        ShopEntity_array *entities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x0
  __int64 v7; // x1
  signed int max_length; // w8
  __int64 v9; // x21
  unsigned int v10; // w24
  int64_t v11; // x22
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x23
  __int64 events; // x26
  __int64 v16; // x0

  if ( (byte_42EA667 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)entities, (_DWORD)method, v3);
    byte_42EA667 = 1;
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
    v9 = Time;
    v10 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v16 = sub_B5D6C8(Time);
        sub_B5D668(v16, 0LL);
      }
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
LABEL_21:
    sub_B5D69C(Time, v7);
  }
  return 0LL;
}


ShopEntity_array *__fastcall ShopListNotice__GetShopEntitiesByLimitedType(
        ShopListNotice_o *this,
        ShopEntity_array *shopEntities,
        int32_t type,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  _BOOL8 IsLimitedIconDisplayTarget; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  unsigned __int64 v19; // x22
  ShopEntity_o **m_Items; // x23
  int v21; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x21
  __int64 v24; // x0

  if ( (byte_42EA665 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, (_DWORD)shopEntities, type, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v12, v13, v14);
    byte_42EA665 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_24;
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
        v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)shopEntities->m_Items[v19];
        switch ( v21 )
        {
          case 0:
            if ( !v22 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v19], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 1:
            if ( !v22 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v19], 0LL);
            if ( IsLimitedIconDisplayTarget )
              goto LABEL_19;
            goto LABEL_21;
          case 2:
            if ( !v22 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v19], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 3:
            if ( !v22 )
              goto LABEL_24;
            if ( v22[1].fields.addCount != 12 )
              goto LABEL_21;
LABEL_19:
            if ( !v15 )
              goto LABEL_24;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              v22,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
LABEL_21:
            LODWORD(v18) = shopEntities->max_length;
            if ( (__int64)++v19 >= (int)v18 )
              goto LABEL_22;
            continue;
          default:
            goto LABEL_21;
        }
      }
      break;
    }
    v24 = sub_B5D6C8(IsLimitedIconDisplayTarget);
    sub_B5D668(v24, 0LL);
  }
LABEL_22:
  if ( !v15 )
LABEL_24:
    sub_B5D69C(IsLimitedIconDisplayTarget, v17);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  __int64 v16; // x0
  ShopEntity_o *v17; // x1
  signed int max_length; // w8
  unsigned int v19; // w22
  __int64 v21; // x0

  if ( (byte_42EA666 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, (_DWORD)entities, timeLimit, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v12, v13, v14);
    byte_42EA666 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_14;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        v21 = sub_B5D6C8(v16);
        sub_B5D668(v21, 0LL);
      }
      v17 = entities->m_Items[v19];
      if ( !v17 )
        break;
      if ( v17->fields.closedAt == timeLimit )
      {
        if ( !v15 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B5D69C(v16, v17);
  }
LABEL_12:
  if ( !v15 )
    goto LABEL_14;
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ShopListNotice___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DC4 & 1) == 0 )
  {
    sub_B5D5C4(&ShopListNotice___c_TypeInfo, v1, v2, v3);
    byte_42E5DC4 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ShopListNotice___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ShopListNotice___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopListNotice___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return !ShopEntity__IsSoldOut(x, 0LL);
}