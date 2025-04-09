void __fastcall UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBC0E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BBC0E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_49BBC09 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_49BBC09 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_2EFFB40 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePrimaryKey(
        UserEventTradeEntity_o *this,
        const MethodInfo *method)
{
  return UserEventTradeEntity__CreatePK(this->fields.eventId, method);
}


int32_t __fastcall UserEventTradeEntity__GetTotalTradeCount(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *resultList; // x19
  UserEventTradeEntity___c_c *v7; // x0
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v9; // x21
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49BBC0A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___, method);
    sub_1B4CF90(&System_Func_EventTradeResultInfo__int__TypeInfo, v3);
    sub_1B4CF90(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, v4);
    sub_1B4CF90(&UserEventTradeEntity___c_TypeInfo, v5);
    byte_49BBC0A = 1;
  }
  resultList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.resultList;
  if ( !resultList )
    return 0;
  v7 = UserEventTradeEntity___c_TypeInfo;
  if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
    v7 = UserEventTradeEntity___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v7->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = UserEventTradeEntity___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_EventTradeResultInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v9, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, 0LL);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__7_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v11, v12);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__7_0,
           (const MethodInfo_2F3AF64 *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool __fastcall UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  struct EventTradeInfo_array *tradeList; // x28
  int max_length; // w8
  bool v16; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x22
  int v19; // w19
  EventTradeInfo_o *v20; // x20
  __int64 v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  EventTradeGoodsEntity_o **v24; // x24
  struct EventCraftPickupInfo_array *pickupList; // x8
  System_Func_object__bool__o *v26; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_EventCraftPickupInfo__o *v28; // x25
  int32_t tradeNum; // w23
  EventTradeGoodsEntity_o *v30; // x26
  int64_t startedAt; // x27
  int32_t getNum; // w24
  int64_t endedAt; // [xsp+0h] [xbp-70h]

  if ( (byte_49BBC0D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v2);
    sub_1B4CF90(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v5);
    sub_1B4CF90(&EventCraftTimeCalculation_TypeInfo, v6);
    sub_1B4CF90(&EventTradeTimeCalculation_TypeInfo, v7);
    sub_1B4CF90(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    sub_1B4CF90(&Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__, v10);
    sub_1B4CF90(&UserEventTradeEntity___c__DisplayClass10_0_TypeInfo, v11);
    byte_49BBC0D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_30;
  max_length = tradeList->max_length;
  v16 = max_length > 0;
  if ( max_length >= 1 )
  {
    v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v18 = 0LL;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        sub_1B4D1F4(Master_object, v13);
      v20 = tradeList->m_Items[v19];
      v21 = sub_1B4D1DC(UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v21, 0LL);
      if ( !v20 )
        break;
      if ( !v17 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        v17,
                        v20->fields.tradeGoodsId,
                        (const MethodInfo_319D99C *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v21 )
        break;
      *(_QWORD *)(v21 + 16) = Master_object;
      v24 = (EventTradeGoodsEntity_o **)(v21 + 16);
      sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 16), (int32_t)Master_object, v22, v23);
      pickupList = this->fields.pickupList;
      if ( pickupList )
        v18 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( pickupList )
      {
        v26 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v26,
          (Il2CppObject *)v21,
          Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__,
          0LL);
        v27 = System_Linq_Enumerable__Where_object_(
                v18,
                (System_Func_TSource__bool__o *)v26,
                (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
        v28 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v27,
                                                                           (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      }
      else
      {
        v28 = 0LL;
      }
      tradeNum = v20->fields.tradeNum;
      v30 = *v24;
      startedAt = v20->fields.startedAt;
      getNum = v20->fields.getNum;
      if ( v28 )
      {
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventCraftTimeCalculation__GetCompleteNum_46373060(
                                          v30,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          v28,
                                          0LL,
                                          0LL);
      }
      else
      {
        if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_30806540(
                                          v30,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          0LL);
      }
      if ( v20->fields.getNum <= 0 && tradeNum - (int)Master_object < 1 )
      {
        max_length = tradeList->max_length;
        v16 = ++v19 < max_length;
        if ( v19 < max_length )
          continue;
      }
      return v16;
    }
LABEL_30:
    sub_1B4D1EC(Master_object, v13);
  }
  return v16;
}


bool __fastcall UserEventTradeEntity__IsBuyAble(
        UserEventTradeEntity_o *this,
        CommonConsumeEntity_array *commonConsumeEntityArray,
        const MethodInfo *method)
{
  signed int max_length; // w8
  bool v5; // w20
  signed int v6; // w21

  if ( !commonConsumeEntityArray )
    goto LABEL_10;
  max_length = commonConsumeEntityArray->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1B4D1F4(this, commonConsumeEntityArray);
      this = (UserEventTradeEntity_o *)commonConsumeEntityArray->m_Items[v6];
      if ( !this )
        break;
      this = (UserEventTradeEntity_o *)CommonConsumeEntity__GetUserBuyableNum((CommonConsumeEntity_o *)this, 0LL);
      if ( (int)this > 0 )
      {
        max_length = commonConsumeEntityArray->max_length;
        v5 = ++v6 < max_length;
        if ( v6 < max_length )
          continue;
      }
      return !v5;
    }
LABEL_10:
    sub_1B4D1EC(this, commonConsumeEntityArray);
  }
  return !v5;
}


bool __fastcall UserEventTradeEntity__IsRefillable(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x19
  CommonConsumeMaster_o *Entity; // x0
  __int64 v16; // x1
  struct EventTradeInfo_array *tradeList; // x23
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  int v20; // w21
  EventTradeInfo_o *v21; // x22
  __int64 v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  EventTradeGoodsEntity_o **v25; // x24
  struct EventCraftPickupInfo_array *pickupList; // x8
  System_Func_object__bool__o *v27; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_TSource__o *v29; // x0
  EventTradeGoodsEntity_o *v30; // x25
  System_Collections_Generic_List_EventCraftPickupInfo__o *v31; // x27
  Il2CppObject *v32; // x23
  UserEventTradeEntity_o *v33; // x19
  int32_t CraftMaxNum; // w0
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *v36; // x29
  int64_t startedAt; // x28
  int32_t v38; // w26
  int32_t CompleteNum_46373060; // w0
  int32_t TradeMaxNum; // w0
  EventTradeGoodsEntity_o *v41; // x28
  int64_t v42; // x27
  int32_t v43; // w27
  const MethodInfo *v44; // x2
  struct EventTradeInfo_array *v46; // [xsp+0h] [xbp-80h]
  CommonConsumeMaster_o *v47; // [xsp+8h] [xbp-78h]
  int64_t endedAt; // [xsp+10h] [xbp-70h]
  bool v49; // [xsp+1Ch] [xbp-64h]

  if ( (byte_49BBC0C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v7);
    sub_1B4CF90(&EventCraftTimeCalculation_TypeInfo, v8);
    sub_1B4CF90(&EventTradeTimeCalculation_TypeInfo, v9);
    sub_1B4CF90(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v10);
    sub_1B4CF90(&NetworkManager_TypeInfo, v11);
    sub_1B4CF90(&Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__, v12);
    sub_1B4CF90(&UserEventTradeEntity___c__DisplayClass9_0_TypeInfo, v13);
    byte_49BBC0C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  Entity = (CommonConsumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
LABEL_35:
    sub_1B4D1EC(Entity, v16);
  max_length = tradeList->max_length;
  v49 = max_length > 0;
  if ( max_length >= 1 )
  {
    v19 = 0LL;
    v20 = 0;
    v46 = this->fields.tradeList;
    v47 = Entity;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
        sub_1B4D1F4(Entity, v16);
      v21 = tradeList->m_Items[v20];
      v22 = sub_1B4D1DC(UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      if ( !v21 )
        goto LABEL_35;
      if ( !Master_object )
        goto LABEL_35;
      Entity = (CommonConsumeMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          v21->fields.tradeGoodsId,
                                          (const MethodInfo_319D99C *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v22 )
        goto LABEL_35;
      *(_QWORD *)(v22 + 16) = Entity;
      v25 = (EventTradeGoodsEntity_o **)(v22 + 16);
      sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 16), (int32_t)Entity, v23, v24);
      pickupList = this->fields.pickupList;
      if ( pickupList )
        v19 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( !pickupList )
        break;
      v27 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v27,
        (Il2CppObject *)v22,
        Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__,
        0LL);
      v28 = System_Linq_Enumerable__Where_object_(
              v19,
              (System_Func_TSource__bool__o *)v27,
              (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
      v29 = System_Linq_Enumerable__ToList_object_(
              v28,
              (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      v30 = *(EventTradeGoodsEntity_o **)(v22 + 16);
      if ( !v29 )
        goto LABEL_24;
      v31 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)v29;
      v32 = Master_object;
      v33 = this;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v31, 0LL, v30, 0LL);
      tradeNum = v21->fields.tradeNum;
      v36 = *v25;
      startedAt = v21->fields.startedAt;
      v38 = CraftMaxNum;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CompleteNum_46373060 = EventCraftTimeCalculation__GetCompleteNum_46373060(
                               v36,
                               startedAt,
                               endedAt,
                               tradeNum,
                               0,
                               v31,
                               0LL,
                               0LL);
      this = v33;
      Master_object = v32;
      tradeList = v46;
LABEL_29:
      v43 = CompleteNum_46373060;
      Entity = v47;
      if ( !*v25 || !v47 )
        goto LABEL_35;
      Entity = (CommonConsumeMaster_o *)CommonConsumeMaster__GetSortedEntityList(
                                          v47,
                                          (*v25)->fields.commonConsumeId,
                                          0LL);
      if ( tradeNum - v43 >= v38
        || (Entity = (CommonConsumeMaster_o *)UserEventTradeEntity__IsBuyAble(
                                                (UserEventTradeEntity_o *)Entity,
                                                (CommonConsumeEntity_array *)Entity,
                                                v44),
            ((unsigned __int8)Entity & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v49 = ++v20 < max_length;
        if ( v20 < max_length )
          continue;
      }
      return v49;
    }
    v30 = *v25;
LABEL_24:
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v30, 0LL);
    tradeNum = v21->fields.tradeNum;
    v41 = *v25;
    v42 = v21->fields.startedAt;
    v38 = TradeMaxNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    CompleteNum_46373060 = EventTradeTimeCalculation__GetCompleteNum_30806540(v41, v42, endedAt, tradeNum, 0, 0LL);
    goto LABEL_29;
  }
  return v49;
}


bool __fastcall UserEventTradeEntity__TryGetUsedStoreIdx(
        UserEventTradeEntity_o *this,
        System_Int32_array **usedStoreIdx,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  System_Int32_array **v16; // x8
  System_Int32_array *v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  void *monitor; // x23
  UserEventTradeEntity___c_c *v22; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v24; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_49BBC0B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, usedStoreIdx);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B4CF90(&System_Func_EventTradeInfo__int__TypeInfo, v9);
    sub_1B4CF90(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, v10);
    sub_1B4CF90(&UserEventTradeEntity___c_TypeInfo, v11);
    byte_49BBC0B = 1;
  }
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_1B9D67C(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1B9D620(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1B9D620(inited);
  v16 = *(System_Int32_array ***)(v15 + 184);
  v17 = *v16;
  *usedStoreIdx = *v16;
  sub_1B4CF34((CGThumbnailListItem_o *)usedStoreIdx, (int32_t)v17, (int32_t)method, v3);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1B4D1EC(v18, v19);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v22 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
      v22 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v22->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = UserEventTradeEntity___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_EventTradeInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__8_0, v24, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, 0LL);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_EventTradeInfo__int__o *)_9__8_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v26, v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v29 = System_Linq_Enumerable__ToArray_int_(
            v28,
            (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v29;
    sub_1B4CF34((CGThumbnailListItem_o *)usedStoreIdx, (int32_t)v29, v30, v31);
  }
  return monitor != 0LL;
}


void __fastcall UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BBC0F & 1) == 0 )
  {
    sub_1B4CF90(&UserEventTradeEntity___c_TypeInfo, v1);
    byte_49BBC0F = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(UserEventTradeEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)UserEventTradeEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall UserEventTradeEntity___c___ctor(UserEventTradeEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserEventTradeEntity___c___GetTotalTradeCount_b__7_0(
        UserEventTradeEntity___c_o *this,
        EventTradeResultInfo_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B4D1EC(this, 0LL);
  return v->fields.getNum;
}


int32_t __fastcall UserEventTradeEntity___c___TryGetUsedStoreIdx_b__8_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B4D1EC(this, 0LL);
  return info->fields.storeIdx;
}


void __fastcall UserEventTradeEntity___c__DisplayClass10_0___ctor(
        UserEventTradeEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventTradeEntity___c__DisplayClass10_0___IsAbleReceiveRewards_b__0(
        UserEventTradeEntity___c__DisplayClass10_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *goodsEntity; // x8

  if ( !x || (goodsEntity = this->fields.goodsEntity) == 0LL )
    sub_1B4D1EC(this, x);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}


void __fastcall UserEventTradeEntity___c__DisplayClass9_0___ctor(
        UserEventTradeEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventTradeEntity___c__DisplayClass9_0___IsRefillable_b__0(
        UserEventTradeEntity___c__DisplayClass9_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *goodsEntity; // x8

  if ( !x || (goodsEntity = this->fields.goodsEntity) == 0LL )
    sub_1B4D1EC(this, x);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}