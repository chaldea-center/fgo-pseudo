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
  __int64 v14; // x3
  __int64 v15; // x4
  ShopListNotice___c_c *v16; // x0
  struct ShopListNotice___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x21
  Il2CppObject *v19; // x22
  struct ShopListNotice___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  ShopListNotice_o *v28; // x25
  const MethodInfo *v29; // x2
  _BOOL8 IsNewIconShow; // x0
  const MethodInfo *v31; // x3
  ShopEntity_array *ShopEntitiesByLimitedType; // x21
  const MethodInfo *v33; // x2
  ShopListNotice_o *MostRecentTimeLimit; // x20
  const MethodInfo *v35; // x3
  ShopListNotice_o *TimeLimitedShopEntities; // x0
  const MethodInfo *v37; // x2
  _BOOL8 IsLimitedIconShow; // x0
  bool v39; // w21
  const MethodInfo *v40; // x3
  ShopEntity_array *v41; // x23
  const MethodInfo *v42; // x2
  ShopListNotice_o *v43; // x22
  const MethodInfo *v44; // x3
  ShopListNotice_o *v45; // x0
  const MethodInfo *v46; // x2
  _BOOL8 v47; // x0
  bool v48; // w23
  const MethodInfo *v49; // x3
  ShopEntity_array *v50; // x26
  const MethodInfo *v51; // x2
  ShopListNotice_o *v52; // x24
  const MethodInfo *v53; // x3
  ShopListNotice_o *v54; // x0
  const MethodInfo *v55; // x2
  _BOOL8 v56; // x0
  bool v57; // w27
  const MethodInfo *v58; // x2
  _BOOL8 IndefiniteTimeLimit; // x0
  bool v60; // w26
  const MethodInfo *v61; // x3
  ShopEntity_array *v62; // x0
  const MethodInfo *v63; // x5
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v65; // x1
  _BOOL8 IsEnableEventShop_27843620; // x0
  bool v67; // w1
  bool v68; // w21
  unsigned int ShopLimitedType; // w0

  if ( (byte_40FB740 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, shopEntities);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ShopEntity___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_ShopEntity___, v7);
    sub_B16FFC(&Method_System_Func_ShopEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_ShopEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_ShopListNotice___c___ctor_b__36_0__, v10);
    sub_B16FFC(&ShopListNotice___c_TypeInfo, v11);
    byte_40FB740 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v16 = ShopListNotice___c_TypeInfo;
  if ( (BYTE3(ShopListNotice___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopListNotice___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopListNotice___c_TypeInfo);
    v16 = ShopListNotice___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = ShopListNotice___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_ShopEntity__bool__TypeInfo,
                                                                                    v12,
                                                                                    v13,
                                                                                    v14,
                                                                                    v15);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__36_0,
      v19,
      Method_ShopListNotice___c___ctor_b__36_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_ShopEntity__bool___ctor__);
    v20 = ShopListNotice___c_TypeInfo->static_fields;
    v20->__9__36_0 = (struct System_Func_ShopEntity__bool__o *)_9__36_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v20->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)shopEntities,
          (System_Func_TSource__bool__o *)_9__36_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v28 = (ShopListNotice_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                              v27,
                              (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  IsNewIconShow = ShopListNotice__GetIsNewIconShow(v28, (ShopEntity_array *)v28, v29);
  this->fields._IsShowNew_k__BackingField = IsNewIconShow;
  ShopEntitiesByLimitedType = ShopListNotice__GetShopEntitiesByLimitedType(
                                (ShopListNotice_o *)IsNewIconShow,
                                (ShopEntity_array *)v28,
                                1,
                                v31);
  MostRecentTimeLimit = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, ShopEntitiesByLimitedType, v33);
  TimeLimitedShopEntities = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(
                                                  MostRecentTimeLimit,
                                                  ShopEntitiesByLimitedType,
                                                  (int64_t)MostRecentTimeLimit,
                                                  v35);
  IsLimitedIconShow = ShopListNotice__GetIsLimitedIconShow(
                        TimeLimitedShopEntities,
                        (ShopEntity_array *)TimeLimitedShopEntities,
                        v37);
  v39 = IsLimitedIconShow;
  v41 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IsLimitedIconShow,
          (ShopEntity_array *)v28,
          2,
          v40);
  v43 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v41, v42);
  v45 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v43, v41, (int64_t)v43, v44);
  v47 = ShopListNotice__GetIsLimitedIconShow(v45, (ShopEntity_array *)v45, v46);
  v48 = v47;
  v50 = ShopListNotice__GetShopEntitiesByLimitedType((ShopListNotice_o *)v47, (ShopEntity_array *)v28, 3, v49);
  v52 = (ShopListNotice_o *)ShopListNotice__GetMostRecentTimeLimit(this, v50, v51);
  v54 = (ShopListNotice_o *)ShopListNotice__GetTimeLimitedShopEntities(v52, v50, (int64_t)v52, v53);
  v56 = ShopListNotice__GetIsLimitedIconShow(v54, (ShopEntity_array *)v54, v55);
  v57 = v56;
  IndefiniteTimeLimit = ShopListNotice__GetIndefiniteTimeLimit((ShopListNotice_o *)v56, v50, v58);
  v60 = IndefiniteTimeLimit;
  v62 = ShopListNotice__GetShopEntitiesByLimitedType(
          (ShopListNotice_o *)IndefiniteTimeLimit,
          (ShopEntity_array *)v28,
          4,
          v61);
  if ( !v62 )
    goto LABEL_23;
  if ( *(_QWORD *)&v62->max_length )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      IsEnableEventShop_27843620 = ShopMaster__IsEnableEventShop_27843620(Master_WarQuestSelectionMaster, v65);
      goto LABEL_19;
    }
LABEL_23:
    sub_B170D4();
  }
  IsEnableEventShop_27843620 = 0LL;
LABEL_19:
  v67 = v39;
  v68 = IsEnableEventShop_27843620;
  ShopLimitedType = ShopListNotice__GetShopLimitedType(
                      (ShopListNotice_o *)IsEnableEventShop_27843620,
                      v67,
                      v48,
                      v57,
                      IsEnableEventShop_27843620,
                      v63);
  this->fields._LimitedType_k__BackingField = ShopLimitedType;
  this->fields._PeriodTimeLimit_k__BackingField = (int64_t)MostRecentTimeLimit;
  this->fields._MonthlyTimeLimit_k__BackingField = (int64_t)v43;
  this->fields._ExchangeServatTimeLimit_k__BackingField = (int64_t)v52;
  this->fields._IsIndefiniteExchangeServant_k__BackingField = v60;
  this->fields._IsSpecialSummonable_k__BackingField = v68;
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
  ShopEntity_o *v6; // x0

  if ( !shopEntities )
LABEL_11:
    sub_B170D4();
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, shopEntities, method);
      sub_B170A0();
    }
    v6 = shopEntities->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    this = (ShopListNotice_o *)ShopEntity__checkFlag(v6, 0x40000, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  signed int max_length; // w8
  UserShopMaster_o *v11; // x20
  unsigned int v12; // w21
  ShopEntity_o *v13; // x23
  int64_t UserId; // x0

  if ( (byte_40FB742 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, shopEntities);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FB742 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_19:
    sub_B170D4();
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = MasterData_WarQuestSelectionMaster;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v8, v9);
      sub_B170A0();
    }
    v13 = shopEntities->m_Items[v12];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v13 || !v11 )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)UserShopMaster__GetEntityDefinitely(
                                                               v11,
                                                               UserId,
                                                               v13->fields.baseShopId,
                                                               0LL);
    if ( !MasterData_WarQuestSelectionMaster
      || (__int64)MasterData_WarQuestSelectionMaster->fields._lookup < v13->fields.openedAt
      || SHIDWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) < v13->fields.limitNum )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  uint64_t dateData; // x20
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  signed int max_length; // w8
  UserShopMaster_o *v14; // x21
  unsigned int v15; // w25
  ShopEntity_o *v16; // x28
  int64_t openedAt; // x22
  int32_t Hour; // w22
  int32_t Minute; // w23
  int32_t Second; // w3
  uint64_t v21; // x22
  int64_t v22; // x23
  System_DateTime_o v23; // x0
  BalanceConfig_c *v24; // x8
  const MethodInfo *v25; // x2
  double v26; // d0
  int64_t UserId; // x0
  uint64_t v29; // [xsp+8h] [xbp-78h] BYREF
  int64_t v30; // [xsp+10h] [xbp-70h] BYREF
  uint64_t v31; // [xsp+18h] [xbp-68h] BYREF
  __int64 v32; // [xsp+20h] [xbp-60h] BYREF
  __int64 v33; // [xsp+28h] [xbp-58h]
  System_DateTime_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x0.8
  System_TimeSpan_o v37; // 0:x0.8
  System_DateTime_o v38; // 0:x0.8
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8
  System_TimeSpan_o v43; // 0:x1.8
  System_DateTime_o v44; // 0:x1.8
  System_DateTimeOffset_o v45; // 0:x0.16

  if ( (byte_40FB741 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, shopEntities);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v4);
    sub_B16FFC(&System_DateTime_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FB741 = 1;
  }
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  v32 = 0LL;
  v33 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !shopEntities) )
  {
LABEL_33:
    sub_B170D4();
  }
  max_length = shopEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = MasterData_WarQuestSelectionMaster;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= max_length )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v11, v12);
      sub_B170A0();
    }
    v16 = shopEntities->m_Items[v15];
    if ( !v16 )
      goto LABEL_33;
    openedAt = v16->fields.openedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v31 = NetworkManager__getDateTime_23685272(openedAt, 0LL).fields.dateData;
    v34.fields.dateData = (uint64_t)&v31;
    Hour = System_DateTime__get_Hour(v34, 0LL);
    v35.fields.dateData = (uint64_t)&v31;
    Minute = System_DateTime__get_Minute(v35, 0LL);
    v36.fields.dateData = (uint64_t)&v31;
    Second = System_DateTime__get_Second(v36, 0LL);
    v37.fields._ticks = (int64_t)&v30;
    System_TimeSpan___ctor_41331124(v37, Hour, Minute, Second, 0LL);
    v22 = v30;
    v21 = v31;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v38.fields.dateData = v21;
    v43.fields._ticks = v22;
    v23.fields.dateData = System_DateTime__op_Subtraction(v38, v43, 0LL).fields.dateData;
    v24 = BalanceConfig_TypeInfo;
    v31 = v23.fields.dateData;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    v39.fields.dateData = (uint64_t)&v31;
    v31 = System_DateTime__AddDays(v39, v24->static_fields->ShopNewItemAddDays, 0LL).fields.dateData;
    v45.fields.m_dateTime.fields.dateData = (uint64_t)&v32;
    *(_QWORD *)&v45.fields.m_offsetMinutes = 0LL;
    v29 = System_DateTimeOffset__get_LocalDateTime(v45, v25).fields.dateData;
    v40.fields.dateData = (uint64_t)&v29;
    v26 = (double)-System_DateTime__get_Hour(v40, 0LL);
    v41.fields.dateData = (uint64_t)&v31;
    v44.fields.dateData = System_DateTime__AddHours(v41, v26, 0LL).fields.dateData;
    v31 = v44.fields.dateData;
    v42.fields.dateData = dateData;
    MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)System_DateTime__op_GreaterThan(v42, v44, 0LL);
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v14 )
        goto LABEL_33;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)UserShopMaster__GetEntityDefinitely(
                                                                 v14,
                                                                 UserId,
                                                                 v16->fields.baseShopId,
                                                                 0LL);
      if ( !MasterData_WarQuestSelectionMaster
        || (__int64)MasterData_WarQuestSelectionMaster->fields._lookup < v16->fields.openedAt
        || SHIDWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) < v16->fields.limitNum )
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
  __int64 v7; // x2
  signed int max_length; // w8
  __int64 v9; // x21
  unsigned int v10; // w24
  int64_t v11; // x22
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x23
  __int64 events; // x26

  if ( (byte_40FB745 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, entities);
    byte_40FB745 = 1;
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
        sub_B17100(Time, v6, v7);
        sub_B170A0();
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
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  _BOOL8 IsLimitedIconDisplayTarget; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8
  unsigned __int64 v15; // x22
  ShopEntity_o **m_Items; // x23
  int v17; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21

  if ( (byte_40FB743 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, shopEntities);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v9);
    byte_40FB743 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  shopEntities,
                                                                                                  *(_QWORD *)&type,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !shopEntities )
    goto LABEL_24;
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
        v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)shopEntities->m_Items[v15];
        switch ( v17 )
        {
          case 0:
            if ( !v18 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsLimitedIconDisplayTarget(m_Items[v15], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 1:
            if ( !v18 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsMonthlyIconDisplayTarget(m_Items[v15], 0LL);
            if ( IsLimitedIconDisplayTarget )
              goto LABEL_19;
            goto LABEL_21;
          case 2:
            if ( !v18 )
              goto LABEL_24;
            IsLimitedIconDisplayTarget = ShopEntity__IsExchangeServantIconDisplayTarget(m_Items[v15], 0LL);
            if ( !IsLimitedIconDisplayTarget )
              goto LABEL_21;
            goto LABEL_19;
          case 3:
            if ( !v18 )
              goto LABEL_24;
            if ( v18[1].fields.addCount != 12 )
              goto LABEL_21;
LABEL_19:
            if ( !v10 )
              goto LABEL_24;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              v18,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
LABEL_21:
            LODWORD(v14) = shopEntities->max_length;
            if ( (__int64)++v15 >= (int)v14 )
              goto LABEL_22;
            continue;
          default:
            goto LABEL_21;
        }
      }
      break;
    }
    sub_B17100(IsLimitedIconDisplayTarget, v12, v13);
    sub_B170A0();
  }
LABEL_22:
  if ( !v10 )
LABEL_24:
    sub_B170D4();
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  __int64 v11; // x0
  ShopEntity_o *v12; // x1
  __int64 v13; // x2
  signed int max_length; // w8
  unsigned int v15; // w22

  if ( (byte_40FB744 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, entities);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v9);
    byte_40FB744 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  entities,
                                                                                                  timeLimit,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !entities )
    goto LABEL_14;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
      v12 = entities->m_Items[v15];
      if ( !v12 )
        break;
      if ( v12->fields.closedAt == timeLimit )
      {
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_12:
  if ( !v10 )
    goto LABEL_14;
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79E7 & 1) == 0 )
  {
    sub_B16FFC(&ShopListNotice___c_TypeInfo, v1);
    byte_40F79E7 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ShopListNotice___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ShopListNotice___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return !ShopEntity__IsSoldOut(x, 0LL);
}