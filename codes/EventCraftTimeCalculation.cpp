void __fastcall EventCraftTimeCalculation___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB85B5 & 1) == 0 )
  {
    sub_1C13D24(&EventCraftTimeCalculation_TypeInfo, v1);
    byte_4BB85B5 = 1;
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
  if ( (byte_4BB85AF & 1) == 0 )
  {
    item = (EventCraftListViewItem_o *)sub_1C13D24(&EventCraftTimeCalculation_TypeInfo, supportTool);
    byte_4BB85AF = 1;
  }
  if ( !v7 || (TradeInfo_k__BackingField = v7->fields._TradeInfo_k__BackingField) == 0LL )
    sub_1C13F80(item, supportTool);
  TradeGoodsEntity_k__BackingField = v7->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  PickupInfoList_k__BackingField = v7->fields._PickupInfoList_k__BackingField;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  return EventCraftTimeCalculation__GetCompleteNum_46842024(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           PickupInfoList_k__BackingField,
           supportTool,
           v4);
}


int32_t __fastcall EventCraftTimeCalculation__GetCompleteNum_46842024(
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t startedAt,
        int64_t endedAt,
        int32_t tradeNum,
        int32_t getNum,
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        const MethodInfo *method)
{
  int64_t v13; // x24
  int32_t v15; // w27
  int64_t v16; // x26
  int64_t CraftTime; // x0

  v13 = startedAt;
  if ( (byte_4BB85B0 & 1) == 0 )
  {
    sub_1C13D24(&EventCraftTimeCalculation_TypeInfo, startedAt);
    byte_4BB85B0 = 1;
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
                    v13,
                    v16,
                    (const MethodInfo *)pickupInfoList);
      v13 += CraftTime;
      if ( v13 >= endedAt )
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
  __int64 v11; // x1
  int64_t v12; // x24

  if ( (byte_4BB85B1 & 1) == 0 )
  {
    sub_1C13D24(&EventCraftTimeCalculation_TypeInfo, pickupInfoList);
    sub_1C13D24(&NetworkManager_TypeInfo, v11);
    byte_4BB85B1 = 1;
  }
  if ( startedAt <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    startedAt = NetworkManager__getTime(0LL);
  }
  if ( tradeNum < 1 )
    return 0LL;
  v12 = 0LL;
  do
  {
    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    --tradeNum;
    v12 += EventCraftTimeCalculation__GetCraftTime(pickupInfoList, supportTool, goodsEntity, startedAt, v12, method);
  }
  while ( tradeNum );
  return v12;
}


int32_t __fastcall EventCraftTimeCalculation__GetCraftMaxNum(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        EventTradeGoodsEntity_o *goodsEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventCraftPickupInfo__o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  int maxNum; // w22
  int64_t Time; // x0
  const MethodInfo *v11; // x5
  int64_t v12; // x23
  int64_t v13; // x24
  int v14; // w26
  int64_t CraftTime; // x0
  BalanceConfig_c *v16; // x8
  int64_t v17; // x25

  v6 = pickupInfoList;
  if ( (byte_4BB85B2 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, supportTool);
    sub_1C13D24(&EventCraftTimeCalculation_TypeInfo, v7);
    pickupInfoList = (System_Collections_Generic_List_EventCraftPickupInfo__o *)sub_1C13D24(
                                                                                  &NetworkManager_TypeInfo,
                                                                                  v8);
    byte_4BB85B2 = 1;
  }
  if ( !goodsEntity )
    sub_1C13F80(pickupInfoList, supportTool);
  maxNum = goodsEntity->fields.maxNum;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( maxNum >= 2 )
  {
    v12 = Time;
    v13 = 0LL;
    v14 = 1;
    while ( 1 )
    {
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftTime = EventCraftTimeCalculation__GetCraftTime(v6, supportTool, goodsEntity, v12, v13, v11);
      v16 = BalanceConfig_TypeInfo;
      v17 = CraftTime;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      v13 += v17;
      if ( v13 > v16->static_fields->SECONDS_PER_DAY )
        break;
      if ( maxNum == ++v14 )
        return maxNum;
    }
    return v14 - 1;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x19
  int64_t Time; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x4
  int64_t v27; // x23
  int64_t v28; // x25
  System_Collections_ICollection_o *PickupInfo; // x21
  int64_t result; // x0
  System_Func_object__bool__o *v31; // x22
  EventCraftTimeCalculation_c *v32; // x8
  int64_t v33; // x22
  int DEFAULT_EVENT_CRAFT_TIME_RATE; // w28
  EventCraftTimeCalculation_c *v35; // x0
  int32_t tradeTime; // w20
  int v37; // w29
  double v38; // d8
  __int64 v39; // x8
  __int64 v40; // x20
  EventTradePickupMaster_c *v41; // x0
  System_Func_object__bool__o *v42; // x20
  Il2CppObject *v43; // x0
  EventCraftTimeCalculation_c *v44; // x8
  Il2CppObject *v45; // x20
  int klass; // w21
  __int64 v47; // x22
  EventCraftTimeCalculation_c *v48; // x0
  double v49; // d8
  double v50; // d9
  double v51; // d8
  System_Convert_c *v52; // x0
  double v53; // d0
  __int64 v54; // x20
  double v55; // d8
  Il2CppObject *v56; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4BB85B3 & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, supportTool);
    sub_1C13D24(&Method_DataManager_GetMaster_ItemMaster___, v11);
    sub_1C13D24(&DataManager_TypeInfo, v12);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___, v14);
    sub_1C13D24(&EventCraftTimeCalculation_TypeInfo, v15);
    sub_1C13D24(&EventTradePickupMaster_TypeInfo, v16);
    sub_1C13D24(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v17);
    sub_1C13D24(&System_Math_TypeInfo, v18);
    sub_1C13D24(&NetworkManager_TypeInfo, v19);
    sub_1C13D24(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__, v20);
    sub_1C13D24(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__, v21);
    sub_1C13D24(&EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo, v22);
    byte_4BB85B3 = 1;
  }
  v56 = 0LL;
  entity = 0LL;
  v23 = sub_1C13F70(EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !v23 )
    goto LABEL_54;
  v27 = endTradeTime + tradeStartedAt;
  *(_QWORD *)(v23 + 16) = v27;
  v28 = Time;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  PickupInfo = (System_Collections_ICollection_o *)EventCraftTimeCalculation__ReCreatePickupInfo(
                                                     pickupInfoList,
                                                     supportTool,
                                                     v28,
                                                     v27,
                                                     v26);
  Time = BasicHelper__IsNullOrEmpty(PickupInfo, 0LL);
  if ( (Time & 1) != 0 )
  {
    if ( goodsEntity )
      return goodsEntity->fields.tradeTime;
LABEL_54:
    sub_1C13F80(Time, v25);
  }
  v31 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_EventCraftPickupInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v23,
    Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__,
    0LL);
  Time = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                    (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
                    (System_Func_TSource__bool__o *)v31,
                    (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
  v32 = EventCraftTimeCalculation_TypeInfo;
  v33 = Time;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    v32 = EventCraftTimeCalculation_TypeInfo;
  }
  DEFAULT_EVENT_CRAFT_TIME_RATE = v32->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( v33 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Time )
      goto LABEL_54;
    Time = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
             &entity,
             *(_DWORD *)(v33 + 20),
             (const MethodInfo_3238670 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( (Time & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_54;
      DEFAULT_EVENT_CRAFT_TIME_RATE = (int)entity[4].klass;
    }
  }
  if ( !goodsEntity )
    goto LABEL_54;
  v35 = EventCraftTimeCalculation_TypeInfo;
  tradeTime = goodsEntity->fields.tradeTime;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    v35 = EventCraftTimeCalculation_TypeInfo;
  }
  v37 = v35->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v38 = ceil((double)(tradeTime * DEFAULT_EVENT_CRAFT_TIME_RATE) / (double)v37);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  result = System_Convert__ToInt64_63626844(v38, 0LL);
  if ( v33 )
    v39 = *(_QWORD *)(v33 + 32) - *(_QWORD *)(v23 + 16);
  else
    v39 = 0LL;
  v40 = result - v39;
  *(_QWORD *)(v23 + 24) = v39;
  if ( result >= v39 )
  {
    v41 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
      v41 = EventTradePickupMaster_TypeInfo;
    }
    *(double *)(v23 + 32) = (double)v40
                          * (double)v41->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE
                          / (double)DEFAULT_EVENT_CRAFT_TIME_RATE;
    v42 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v42,
      (Il2CppObject *)v23,
      Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__,
      0LL);
    v43 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
            (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
            (System_Func_TSource__bool__o *)v42,
            (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    v44 = EventCraftTimeCalculation_TypeInfo;
    v45 = v43;
    if ( EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    {
      if ( v43 )
      {
LABEL_35:
        klass = v44->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !Time )
          goto LABEL_54;
        Time = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                 &v56,
                 HIDWORD(v45[1].klass),
                 (const MethodInfo_3238670 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (Time & 1) != 0 )
        {
          if ( !v56 )
            goto LABEL_54;
          klass = (int)v56[4].klass;
        }
        v47 = *(_QWORD *)(v23 + 24);
        v48 = EventCraftTimeCalculation_TypeInfo;
        v49 = *(double *)(v23 + 32);
        v50 = v49 + (double)(v47 + *(_QWORD *)(v23 + 16)) - (double)(__int64)v45[1].monitor;
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
          v48 = EventCraftTimeCalculation_TypeInfo;
          v47 = *(_QWORD *)(v23 + 24);
        }
        v51 = v49 - v50 + v50 * (double)klass / (double)v48->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v52 = System_Convert_TypeInfo;
        v53 = (double)v47;
        goto LABEL_50;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      v44 = EventCraftTimeCalculation_TypeInfo;
      if ( v45 )
        goto LABEL_35;
    }
    v54 = *(_QWORD *)(v23 + 24);
    v51 = *(double *)(v23 + 32);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v52 = System_Convert_TypeInfo;
    v53 = (double)v54;
LABEL_50:
    v55 = ceil(v51 + v53);
    if ( !v52->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v52);
    return System_Convert__ToInt64_63626844(v55, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x19
  Il2CppObject *current; // x29
  int64_t v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int64_t v38; // x22
  char *monitor; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Func_object__bool__o *v46; // x23
  Il2CppClass *klass; // x22
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB85B4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___, supportTool);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__get_Current__, v11);
    sub_1C13D24(&EventCraftPickupInfo_TypeInfo, v12);
    sub_1C13D24(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__, v16);
    sub_1C13D24(&System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo, v17);
    sub_1C13D24(&Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__, v18);
    sub_1C13D24(&EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo, v19);
    byte_4BB85B4 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v20 = (Il2CppObject *)sub_1C13F70(EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor(v20, 0LL);
  if ( !v20 )
LABEL_32:
    sub_1C13F80(v21, v22);
  v20[1].klass = (Il2CppClass *)tradeThisTimeStartedAt;
  v20[1].monitor = (void *)currentTime;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
  if ( pickupInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_object__o *)pickupInfoList,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__);
    v54 = v53;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__) )
    {
      current = v54.fields._current;
      v25 = sub_1C13F70(EventCraftPickupInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0LL);
      if ( !current )
        sub_1C13F80(v26, v27);
      if ( !v25 )
        sub_1C13F80(v26, v27);
      *(Il2CppObject *)(v25 + 24) = *(Il2CppObject *)((char *)current + 24);
      *(_DWORD *)(v25 + 20) = HIDWORD(current[1].klass);
      if ( !v23 )
        sub_1C13F80(v26, v27);
      items = v23->fields._items;
      v35 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1C13F80(v26, v27);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v25,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v25;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 4), v25, v28, v29, v30, v31, v32, v33);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__);
  }
  if ( supportTool )
  {
    v38 = sub_1C13F70(EventCraftPickupInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v38, 0LL);
    if ( !v38 )
      goto LABEL_32;
    monitor = (char *)v20[1].monitor;
    *(_QWORD *)(v38 + 24) = monitor;
    *(_QWORD *)(v38 + 32) = &monitor[ItemEntity__GetTradePickupTime(supportTool, 0LL)];
    *(_DWORD *)(v38 + 20) = supportTool->fields.id;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v23, 0LL) )
    {
      v23 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v23,
        (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
      if ( !v23 )
        goto LABEL_32;
    }
    else
    {
      v46 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        v20,
        Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__,
        0LL);
      v21 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
              (System_Collections_Generic_IEnumerable_TSource__o *)v23,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
      if ( v21 )
      {
        klass = v21[2].klass;
        v21[2].klass = (Il2CppClass *)((char *)klass + ItemEntity__GetTradePickupTime(supportTool, 0LL));
        return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v23;
      }
      if ( !v23 )
        goto LABEL_32;
    }
    v48 = v23->fields._items;
    v49 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__;
    ++v23->fields._version;
    if ( !v48 )
      goto LABEL_32;
    v50 = v23->fields._size;
    if ( (unsigned int)v50 >= v48->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        (Il2CppObject *)v38,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &v48->obj.klass + v50;
      v23->fields._size = v50 + 1;
      v51[4] = (Il2CppClass *)v38;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v51 + 4), v38, v40, v41, v42, v43, v44, v45);
    }
  }
  return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v23;
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  result = x->fields.startedAt <= tradeThisTimeStartedAt
        && (endedAt = x->fields.endedAt, tradeThisTimeStartedAt <= endedAt)
        && endedAt > this->fields.currentTime;
  return result;
}