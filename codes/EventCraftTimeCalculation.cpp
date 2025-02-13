void __fastcall EventCraftTimeCalculation___cctor(const MethodInfo *method)
{
  if ( (byte_4BE046B & 1) == 0 )
  {
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    byte_4BE046B = 1;
  }
  EventCraftTimeCalculation_TypeInfo->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE = 1000;
}


int32_t __fastcall EventCraftTimeCalculation__GetCompleteNum(
        EventCraftListViewItem_o *item,
        ItemEntity_o *supportTool,
        int64_t endedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  EventCraftListViewItem_o *v7; // x21
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x22
  int64_t startedAt; // x25
  int32_t tradeNum; // w24
  int32_t getNum; // w23
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x21

  v7 = item;
  if ( (byte_4BE0465 & 1) == 0 )
  {
    item = (EventCraftListViewItem_o *)sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    byte_4BE0465 = 1;
  }
  if ( !v7 || (TradeInfo_k__BackingField = v7->fields._TradeInfo_k__BackingField) == 0LL )
    sub_1C22094(item, supportTool);
  TradeGoodsEntity_k__BackingField = v7->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  PickupInfoList_k__BackingField = v7->fields._PickupInfoList_k__BackingField;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  return EventCraftTimeCalculation__GetCompleteNum_46972716(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           PickupInfoList_k__BackingField,
           supportTool,
           v4);
}


int32_t __fastcall EventCraftTimeCalculation__GetCompleteNum_46972716(
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t startedAt,
        int64_t endedAt,
        int32_t tradeNum,
        int32_t getNum,
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        const MethodInfo *method)
{
  int32_t v15; // w27
  int64_t v16; // x26
  int64_t CraftTime; // x0

  if ( (byte_4BE0466 & 1) == 0 )
  {
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    byte_4BE0466 = 1;
  }
  if ( tradeNum < 1 )
  {
    v15 = 0;
  }
  else
  {
    v15 = 0;
    v16 = 0LL;
    while ( 1 )
    {
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftTime = EventCraftTimeCalculation__GetCraftTime(
                    pickupInfoList,
                    supportTool,
                    goodsEntity,
                    startedAt,
                    v16,
                    (const MethodInfo *)pickupInfoList);
      startedAt += CraftTime;
      if ( startedAt >= endedAt )
        break;
      ++v15;
      v16 = CraftTime;
      if ( tradeNum == v15 )
      {
        v15 = tradeNum;
        return v15 + getNum;
      }
    }
  }
  return v15 + getNum;
}


int64_t __fastcall EventCraftTimeCalculation__GetCraftFinishTime(
        EventTradeGoodsEntity_o *goodsEntity,
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        int32_t tradeNum,
        int64_t startedAt,
        const MethodInfo *method)
{
  int64_t v11; // x24

  if ( (byte_4BE0467 & 1) == 0 )
  {
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BE0467 = 1;
  }
  if ( startedAt <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    startedAt = NetworkManager__getTime(0LL);
  }
  if ( tradeNum < 1 )
    return 0LL;
  v11 = 0LL;
  do
  {
    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    --tradeNum;
    v11 += EventCraftTimeCalculation__GetCraftTime(pickupInfoList, supportTool, goodsEntity, startedAt, v11, method);
  }
  while ( tradeNum );
  return v11;
}


int32_t __fastcall EventCraftTimeCalculation__GetCraftMaxNum(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        EventTradeGoodsEntity_o *goodsEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventCraftPickupInfo__o *v6; // x21
  int maxNum; // w22
  int64_t Time; // x0
  const MethodInfo *v9; // x5
  int64_t v10; // x23
  int64_t v11; // x24
  int v12; // w26
  int64_t CraftTime; // x0
  BalanceConfig_c *v14; // x8
  int64_t v15; // x25

  v6 = pickupInfoList;
  if ( (byte_4BE0468 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    pickupInfoList = (System_Collections_Generic_List_EventCraftPickupInfo__o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BE0468 = 1;
  }
  if ( !goodsEntity )
    sub_1C22094(pickupInfoList, supportTool);
  maxNum = goodsEntity->fields.maxNum;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( maxNum >= 2 )
  {
    v10 = Time;
    v11 = 0LL;
    v12 = 1;
    while ( 1 )
    {
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftTime = EventCraftTimeCalculation__GetCraftTime(v6, supportTool, goodsEntity, v10, v11, v9);
      v14 = BalanceConfig_TypeInfo;
      v15 = CraftTime;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      v11 += v15;
      if ( v11 > v14->static_fields->SECONDS_PER_DAY )
        break;
      if ( maxNum == ++v12 )
        return maxNum;
    }
    return v12 - 1;
  }
  return maxNum;
}


int64_t __fastcall EventCraftTimeCalculation__GetCraftTime(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t tradeStartedAt,
        int64_t endTradeTime,
        const MethodInfo *method)
{
  __int64 v11; // x19
  int64_t Time; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  int64_t v15; // x23
  int64_t v16; // x25
  System_Collections_ICollection_o *PickupInfo; // x21
  int64_t result; // x0
  System_Func_object__bool__o *v19; // x22
  EventCraftTimeCalculation_c *v20; // x8
  int64_t v21; // x22
  int DEFAULT_EVENT_CRAFT_TIME_RATE; // w28
  EventCraftTimeCalculation_c *v23; // x0
  int32_t tradeTime; // w20
  int v25; // w29
  double v26; // d8
  __int64 v27; // x8
  __int64 v28; // x20
  EventTradePickupMaster_c *v29; // x0
  System_Func_object__bool__o *v30; // x20
  Il2CppObject *v31; // x0
  EventCraftTimeCalculation_c *v32; // x8
  Il2CppObject *v33; // x20
  int klass; // w21
  __int64 v35; // x22
  EventCraftTimeCalculation_c *v36; // x0
  double v37; // d8
  double v38; // d9
  double v39; // d8
  System_Convert_c *v40; // x0
  double v41; // d0
  __int64 v42; // x20
  double v43; // d8
  Il2CppObject *v44; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4BE0469 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    sub_1C21E38(&EventTradePickupMaster_TypeInfo);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__);
    sub_1C21E38(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__);
    sub_1C21E38(&EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo);
    byte_4BE0469 = 1;
  }
  v44 = 0LL;
  entity = 0LL;
  v11 = sub_1C22084(EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !v11 )
    goto LABEL_54;
  v15 = endTradeTime + tradeStartedAt;
  *(_QWORD *)(v11 + 16) = v15;
  v16 = Time;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  PickupInfo = (System_Collections_ICollection_o *)EventCraftTimeCalculation__ReCreatePickupInfo(
                                                     pickupInfoList,
                                                     supportTool,
                                                     v16,
                                                     v15,
                                                     v14);
  Time = BasicHelper__IsNullOrEmpty(PickupInfo, 0LL);
  if ( (Time & 1) != 0 )
  {
    if ( goodsEntity )
      return goodsEntity->fields.tradeTime;
LABEL_54:
    sub_1C22094(Time, v13);
  }
  v19 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCraftPickupInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__,
    0LL);
  Time = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__50149120(
                    (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
                    (System_Func_TSource__bool__o *)v19,
                    (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
  v20 = EventCraftTimeCalculation_TypeInfo;
  v21 = Time;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    v20 = EventCraftTimeCalculation_TypeInfo;
  }
  DEFAULT_EVENT_CRAFT_TIME_RATE = v20->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( v21 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Time )
      goto LABEL_54;
    Time = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
             &entity,
             *(_DWORD *)(v21 + 20),
             (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( (Time & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_54;
      DEFAULT_EVENT_CRAFT_TIME_RATE = (int)entity[4].klass;
    }
  }
  if ( !goodsEntity )
    goto LABEL_54;
  v23 = EventCraftTimeCalculation_TypeInfo;
  tradeTime = goodsEntity->fields.tradeTime;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    v23 = EventCraftTimeCalculation_TypeInfo;
  }
  v25 = v23->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = ceil((double)(tradeTime * DEFAULT_EVENT_CRAFT_TIME_RATE) / (double)v25);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  result = System_Convert__ToInt64_63774376(v26, 0LL);
  if ( v21 )
    v27 = *(_QWORD *)(v21 + 32) - *(_QWORD *)(v11 + 16);
  else
    v27 = 0LL;
  v28 = result - v27;
  *(_QWORD *)(v11 + 24) = v27;
  if ( result >= v27 )
  {
    v29 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
      v29 = EventTradePickupMaster_TypeInfo;
    }
    *(double *)(v11 + 32) = (double)v28
                          * (double)v29->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE
                          / (double)DEFAULT_EVENT_CRAFT_TIME_RATE;
    v30 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      (Il2CppObject *)v11,
      Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__,
      0LL);
    v31 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
            (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
            (System_Func_TSource__bool__o *)v30,
            (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    v32 = EventCraftTimeCalculation_TypeInfo;
    v33 = v31;
    if ( EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    {
      if ( v31 )
      {
LABEL_35:
        klass = v32->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !Time )
          goto LABEL_54;
        Time = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                 &v44,
                 HIDWORD(v33[1].klass),
                 (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (Time & 1) != 0 )
        {
          if ( !v44 )
            goto LABEL_54;
          klass = (int)v44[4].klass;
        }
        v35 = *(_QWORD *)(v11 + 24);
        v36 = EventCraftTimeCalculation_TypeInfo;
        v37 = *(double *)(v11 + 32);
        v38 = v37 + (double)(v35 + *(_QWORD *)(v11 + 16)) - (double)(__int64)v33[1].monitor;
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
          v36 = EventCraftTimeCalculation_TypeInfo;
          v35 = *(_QWORD *)(v11 + 24);
        }
        v39 = v37 - v38 + v38 * (double)klass / (double)v36->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v40 = System_Convert_TypeInfo;
        v41 = (double)v35;
        goto LABEL_50;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      v32 = EventCraftTimeCalculation_TypeInfo;
      if ( v33 )
        goto LABEL_35;
    }
    v42 = *(_QWORD *)(v11 + 24);
    v39 = *(double *)(v11 + 32);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v40 = System_Convert_TypeInfo;
    v41 = (double)v42;
LABEL_50:
    v43 = ceil(v39 + v41);
    if ( !v40->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v40);
    return System_Convert__ToInt64_63774376(v43, 0LL);
  }
  return result;
}


System_Collections_Generic_List_EventCraftPickupInfo__o *__fastcall EventCraftTimeCalculation__ReCreatePickupInfo(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        int64_t currentTime,
        int64_t tradeThisTimeStartedAt,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  Il2CppObject *current; // x29
  int64_t v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  int64_t v27; // x22
  char *monitor; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Func_object__bool__o *v35; // x23
  Il2CppClass *klass; // x22
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BE046A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__get_Current__);
    sub_1C21E38(&EventCraftPickupInfo_TypeInfo);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
    sub_1C21E38(&Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__);
    sub_1C21E38(&EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo);
    byte_4BE046A = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v9 = (Il2CppObject *)sub_1C22084(EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
LABEL_32:
    sub_1C22094(v10, v11);
  v9[1].klass = (Il2CppClass *)tradeThisTimeStartedAt;
  v9[1].monitor = (void *)currentTime;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
  if ( pickupInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_object__o *)pickupInfoList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__);
    v43 = v42;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__) )
    {
      current = v43.fields._current;
      v14 = sub_1C22084(EventCraftPickupInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0LL);
      if ( !current )
        sub_1C22094(v15, v16);
      if ( !v14 )
        sub_1C22094(v15, v16);
      *(Il2CppObject *)(v14 + 24) = *(Il2CppObject *)((char *)current + 24);
      *(_DWORD *)(v14 + 20) = HIDWORD(current[1].klass);
      if ( !v12 )
        sub_1C22094(v15, v16);
      items = v12->fields._items;
      v24 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1C22094(v15, v16);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v14,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), v14, v17, v18, v19, v20, v21, v22);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__);
  }
  if ( supportTool )
  {
    v27 = sub_1C22084(EventCraftPickupInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    if ( !v27 )
      goto LABEL_32;
    monitor = (char *)v9[1].monitor;
    *(_QWORD *)(v27 + 24) = monitor;
    *(_QWORD *)(v27 + 32) = &monitor[ItemEntity__GetTradePickupTime(supportTool, 0LL)];
    *(_DWORD *)(v27 + 20) = supportTool->fields.id;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0LL) )
    {
      v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v12,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
      if ( !v12 )
        goto LABEL_32;
    }
    else
    {
      v35 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v35,
        v9,
        Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__,
        0LL);
      v10 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
              (System_Collections_Generic_IEnumerable_TSource__o *)v12,
              (System_Func_TSource__bool__o *)v35,
              (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
      if ( v10 )
      {
        klass = v10[2].klass;
        v10[2].klass = (Il2CppClass *)((char *)klass + ItemEntity__GetTradePickupTime(supportTool, 0LL));
        return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v12;
      }
      if ( !v12 )
        goto LABEL_32;
    }
    v37 = v12->fields._items;
    v38 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__;
    ++v12->fields._version;
    if ( !v37 )
      goto LABEL_32;
    v39 = v12->fields._size;
    if ( (unsigned int)v39 >= v37->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)v27,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      v12->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)v27;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 4), v27, v29, v30, v31, v32, v33, v34);
    }
  }
  return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v12;
}


void __fastcall EventCraftTimeCalculation___c__DisplayClass5_0___ctor(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCraftTimeCalculation___c__DisplayClass5_0___GetCraftTime_b__0(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x8

  if ( !x )
    sub_1C22094(this, 0LL);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  return x->fields.startedAt <= tradeThisTimeStartedAt && tradeThisTimeStartedAt <= x->fields.endedAt;
}


bool __fastcall EventCraftTimeCalculation___c__DisplayClass5_0___GetCraftTime_b__1(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x8
  int64_t startedAt; // x9

  if ( !x )
    sub_1C22094(this, 0LL);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  startedAt = x->fields.startedAt;
  return tradeThisTimeStartedAt < startedAt
      && this->fields.leftTradeTime + (double)(this->fields.beforeTime + tradeThisTimeStartedAt) > (double)startedAt;
}


void __fastcall EventCraftTimeCalculation___c__DisplayClass6_0___ctor(
        EventCraftTimeCalculation___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCraftTimeCalculation___c__DisplayClass6_0___ReCreatePickupInfo_b__0(
        EventCraftTimeCalculation___c__DisplayClass6_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x8
  int64_t endedAt; // x9
  bool result; // w0

  if ( !x )
    sub_1C22094(this, 0LL);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  result = x->fields.startedAt <= tradeThisTimeStartedAt
        && (endedAt = x->fields.endedAt, tradeThisTimeStartedAt <= endedAt)
        && endedAt > this->fields.currentTime;
  return result;
}