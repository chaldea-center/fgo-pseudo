void UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2812C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2812C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C28127 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4C28127 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_30CC96C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *UserEventTradeEntity__CreatePrimaryKey(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  return UserEventTradeEntity__CreatePK(this->fields.eventId, method);
}


int32_t UserEventTradeEntity__GetTotalTradeCount(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *resultList; // x19
  UserEventTradeEntity___c_c *v4; // x0
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v6; // x21
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C28128 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
    sub_1C2D490(&System_Func_EventTradeResultInfo__int__TypeInfo);
    sub_1C2D490(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__);
    sub_1C2D490(&UserEventTradeEntity___c_TypeInfo);
    byte_4C28128 = 1;
  }
  resultList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.resultList;
  if ( !resultList )
    return 0;
  v4 = UserEventTradeEntity___c_TypeInfo;
  if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
    v4 = UserEventTradeEntity___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v4->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = UserEventTradeEntity___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventTradeResultInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v6, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, 0);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__7_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v8, v9);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__7_0,
           (const MethodInfo_310C6A4 *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  struct EventTradeInfo_array *tradeList; // x28
  int max_length; // w8
  bool v7; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  int v9; // w19
  EventTradeInfo_o *v10; // x20
  __int64 v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  EventTradeGoodsEntity_o **v14; // x24
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x22
  System_Func_object__bool__o *v16; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_EventCraftPickupInfo__o *v18; // x25
  int32_t tradeNum; // w23
  EventTradeGoodsEntity_o *v20; // x26
  int64_t startedAt; // x27
  int32_t getNum; // w24
  int64_t endedAt; // [xsp+0h] [xbp-70h]

  if ( (byte_4C2812B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C2D490(&EventCraftTimeCalculation_TypeInfo);
    sub_1C2D490(&EventTradeTimeCalculation_TypeInfo);
    sub_1C2D490(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__);
    sub_1C2D490(&UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
    byte_4C2812B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_28;
  max_length = tradeList->max_length;
  v7 = max_length > 0;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2D6F4(Master_object, v3, v4);
      v10 = tradeList->m_Items[v9];
      v11 = sub_1C2D6DC(UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      if ( !v10 )
        break;
      if ( !v8 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        v8,
                        v10->fields.tradeGoodsId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v11 )
        break;
      *(_QWORD *)(v11 + 16) = Master_object;
      v14 = (EventTradeGoodsEntity_o **)(v11 + 16);
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Master_object, v12, v13);
      if ( this->fields.pickupList )
      {
        pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
        v16 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v16,
          (Il2CppObject *)v11,
          Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__,
          0);
        v17 = System_Linq_Enumerable__Where_object_(
                pickupList,
                (System_Func_TSource__bool__o *)v16,
                (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
        v18 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v17,
                                                                           (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      }
      else
      {
        v18 = 0;
      }
      tradeNum = v10->fields.tradeNum;
      v20 = *v14;
      startedAt = v10->fields.startedAt;
      getNum = v10->fields.getNum;
      if ( v18 )
      {
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventCraftTimeCalculation__GetCompleteNum_31473700(
                                          v20,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          v18,
                                          0,
                                          0);
      }
      else
      {
        if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_32285980(
                                          v20,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          0);
      }
      if ( v10->fields.getNum <= 0 && tradeNum - (int)Master_object < 1 )
      {
        max_length = tradeList->max_length;
        v7 = ++v9 < max_length;
        if ( v9 < max_length )
          continue;
      }
      return v7;
    }
LABEL_28:
    sub_1C2D6EC(Master_object, v3);
  }
  return v7;
}


bool UserEventTradeEntity__IsBuyAble(
        UserEventTradeEntity_o *this,
        CommonConsumeEntity_array *commonConsumeEntityArray,
        const MethodInfo *method)
{
  int max_length; // w8
  bool v5; // w20
  int v6; // w21

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
        sub_1C2D6F4(this, commonConsumeEntityArray, method);
      this = (UserEventTradeEntity_o *)commonConsumeEntityArray->m_Items[v6];
      if ( !this )
        break;
      this = (UserEventTradeEntity_o *)CommonConsumeEntity__GetUserBuyableNum((CommonConsumeEntity_o *)this, 0);
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
    sub_1C2D6EC(this, commonConsumeEntityArray);
  }
  return !v5;
}


bool UserEventTradeEntity__IsRefillable(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x19
  CommonConsumeMaster_o *Entity; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct EventTradeInfo_array *tradeList; // x23
  int max_length; // w8
  int v9; // w21
  EventTradeInfo_o *v10; // x22
  __int64 v11; // x25
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  EventTradeGoodsEntity_o **v14; // x24
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x20
  System_Func_object__bool__o *v16; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0
  EventTradeGoodsEntity_o *v19; // x25
  System_Collections_Generic_List_EventCraftPickupInfo__o *v20; // x27
  Il2CppObject *v21; // x23
  UserEventTradeEntity_o *v22; // x19
  int32_t CraftMaxNum; // w0
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *v25; // x29
  int64_t startedAt; // x28
  int32_t v27; // w26
  int32_t CompleteNum_31473700; // w0
  int32_t TradeMaxNum; // w0
  EventTradeGoodsEntity_o *v30; // x28
  int64_t v31; // x27
  int32_t v32; // w27
  struct EventTradeInfo_array *v34; // [xsp+0h] [xbp-80h]
  CommonConsumeMaster_o *v35; // [xsp+8h] [xbp-78h]
  int64_t endedAt; // [xsp+10h] [xbp-70h]
  bool v37; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4C2812A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C2D490(&EventCraftTimeCalculation_TypeInfo);
    sub_1C2D490(&EventTradeTimeCalculation_TypeInfo);
    sub_1C2D490(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__);
    sub_1C2D490(&UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
    byte_4C2812A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  Entity = (CommonConsumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
LABEL_33:
    sub_1C2D6EC(Entity, v5);
  max_length = tradeList->max_length;
  v37 = max_length > 0;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v34 = this->fields.tradeList;
    v35 = Entity;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2D6F4(Entity, v5, v6);
      v10 = tradeList->m_Items[v9];
      v11 = sub_1C2D6DC(UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      if ( !v10 )
        goto LABEL_33;
      if ( !Master_object )
        goto LABEL_33;
      Entity = (CommonConsumeMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          v10->fields.tradeGoodsId,
                                          (const MethodInfo_3387D98 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v11 )
        goto LABEL_33;
      *(_QWORD *)(v11 + 16) = Entity;
      v14 = (EventTradeGoodsEntity_o **)(v11 + 16);
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Entity, v12, v13);
      if ( !this->fields.pickupList )
        break;
      pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      v16 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v16,
        (Il2CppObject *)v11,
        Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__,
        0);
      v17 = System_Linq_Enumerable__Where_object_(
              pickupList,
              (System_Func_TSource__bool__o *)v16,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
      v18 = System_Linq_Enumerable__ToList_object_(
              v17,
              (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      v19 = *(EventTradeGoodsEntity_o **)(v11 + 16);
      if ( !v18 )
        goto LABEL_22;
      v20 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)v18;
      v21 = Master_object;
      v22 = this;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v20, 0, v19, 0);
      tradeNum = v10->fields.tradeNum;
      v25 = *v14;
      startedAt = v10->fields.startedAt;
      v27 = CraftMaxNum;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CompleteNum_31473700 = EventCraftTimeCalculation__GetCompleteNum_31473700(
                               v25,
                               startedAt,
                               endedAt,
                               tradeNum,
                               0,
                               v20,
                               0,
                               0);
      this = v22;
      Master_object = v21;
      tradeList = v34;
LABEL_27:
      v32 = CompleteNum_31473700;
      Entity = v35;
      if ( !*v14 || !v35 )
        goto LABEL_33;
      Entity = (CommonConsumeMaster_o *)CommonConsumeMaster__GetSortedEntityList(v35, (*v14)->fields.commonConsumeId, 0);
      if ( tradeNum - v32 >= v27
        || (Entity = (CommonConsumeMaster_o *)UserEventTradeEntity__IsBuyAble(
                                                (UserEventTradeEntity_o *)Entity,
                                                (CommonConsumeEntity_array *)Entity,
                                                v6),
            ((unsigned __int8)Entity & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v37 = ++v9 < max_length;
        if ( v9 < max_length )
          continue;
      }
      return v37;
    }
    v19 = *v14;
LABEL_22:
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v19, 0);
    tradeNum = v10->fields.tradeNum;
    v30 = *v14;
    v31 = v10->fields.startedAt;
    v27 = TradeMaxNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    CompleteNum_31473700 = EventTradeTimeCalculation__GetCompleteNum_32285980(v30, v31, endedAt, tradeNum, 0, 0);
    goto LABEL_27;
  }
  return v37;
}


bool UserEventTradeEntity__TryGetUsedStoreIdx(
        UserEventTradeEntity_o *this,
        System_Int32_array **usedStoreIdx,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Int32_array **v11; // x8
  System_Int32_array *v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  void *monitor; // x23
  UserEventTradeEntity___c_c *v17; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v19; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Int32_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C28129 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&System_Func_EventTradeInfo__int__TypeInfo);
    sub_1C2D490(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__);
    sub_1C2D490(&UserEventTradeEntity___c_TypeInfo);
    byte_4C28129 = 1;
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C7DC00(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4(inited);
  v11 = *(System_Int32_array ***)(v10 + 184);
  v12 = *v11;
  *usedStoreIdx = *v11;
  sub_1C2D434((CGThumbnailListItem_o *)usedStoreIdx, (int32_t)v12, (int32_t)method, v3);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1C2D6EC(v13, v14);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v17 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
      v17 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v17->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = UserEventTradeEntity___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventTradeInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__8_0, v19, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, 0);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_EventTradeInfo__int__o *)_9__8_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v21, v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v24 = System_Linq_Enumerable__ToArray_int_(
            v23,
            (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v24;
    sub_1C2D434((CGThumbnailListItem_o *)usedStoreIdx, (int32_t)v24, v25, v26);
  }
  return monitor != 0;
}


void UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2812D & 1) == 0 )
  {
    sub_1C2D490(&UserEventTradeEntity___c_TypeInfo);
    byte_4C2812D = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(UserEventTradeEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)UserEventTradeEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserEventTradeEntity___c___ctor(UserEventTradeEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserEventTradeEntity___c___GetTotalTradeCount_b__7_0(
        UserEventTradeEntity___c_o *this,
        EventTradeResultInfo_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C2D6EC(this, 0);
  return v->fields.getNum;
}


int32_t UserEventTradeEntity___c___TryGetUsedStoreIdx_b__8_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C2D6EC(this, 0);
  return info->fields.storeIdx;
}


void UserEventTradeEntity___c__DisplayClass10_0___ctor(
        UserEventTradeEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventTradeEntity___c__DisplayClass10_0___IsAbleReceiveRewards_b__0(
        UserEventTradeEntity___c__DisplayClass10_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *goodsEntity; // x8

  if ( !x || (goodsEntity = this->fields.goodsEntity) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}


void UserEventTradeEntity___c__DisplayClass9_0___ctor(
        UserEventTradeEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventTradeEntity___c__DisplayClass9_0___IsRefillable_b__0(
        UserEventTradeEntity___c__DisplayClass9_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *goodsEntity; // x8

  if ( !x || (goodsEntity = this->fields.goodsEntity) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}