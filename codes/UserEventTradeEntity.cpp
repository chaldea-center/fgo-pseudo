void __fastcall UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF1B3 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF1B3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_49FF1AE & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_49FF1AE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_2E39780 *)Method_DataEntityBase_CreateMultiplePK_int___);
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
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v9; // x21
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF1AF & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___, method);
    sub_1B64870(&System_Func_EventTradeResultInfo__int__TypeInfo, v3);
    sub_1B64870(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__6_0__, v4);
    sub_1B64870(&UserEventTradeEntity___c_TypeInfo, v5);
    byte_49FF1AF = 1;
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
  _9__6_0 = (System_Func_object__int__o *)v7->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = UserEventTradeEntity___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_EventTradeResultInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__6_0, v9, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__6_0__, 0LL);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__6_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v11, v12);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__6_0,
           (const MethodInfo_2E723B8 *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool __fastcall UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Time; // x19
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct EventTradeInfo_array *tradeList; // x25
  int max_length; // w8
  bool v12; // w26
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  int v14; // w27
  EventTradeInfo_o *v15; // x28
  Il2CppObject *Entity; // x0
  int64_t startedAt; // x23
  int32_t tradeNum; // w22
  int32_t getNum; // w21
  EventTradeGoodsEntity_o *v20; // x24

  if ( (byte_49FF1B2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, method);
    sub_1B64870(&DataManager_TypeInfo, v3);
    sub_1B64870(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v4);
    sub_1B64870(&EventTradeTimeCalculation_TypeInfo, v5);
    sub_1B64870(&NetworkManager_TypeInfo, v6);
    byte_49FF1B2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_19;
  max_length = tradeList->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B64AD4(Master_object, v9);
      v15 = tradeList->m_Items[v14];
      if ( !v15 || !v13 )
        break;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v13,
                 v15->fields.tradeGoodsId,
                 (const MethodInfo_30D6180 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      startedAt = v15->fields.startedAt;
      tradeNum = v15->fields.tradeNum;
      getNum = v15->fields.getNum;
      v20 = (EventTradeGoodsEntity_o *)Entity;
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_45908016(
                                        v20,
                                        startedAt,
                                        Time,
                                        tradeNum,
                                        getNum,
                                        0LL);
      if ( (int)Master_object <= 0 && v15->fields.getNum < 1 )
      {
        max_length = tradeList->max_length;
        v12 = ++v14 < max_length;
        if ( v14 < max_length )
          continue;
      }
      return v12;
    }
LABEL_19:
    sub_1B64ACC(Master_object, v9);
  }
  return v12;
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
        sub_1B64AD4(this, commonConsumeEntityArray);
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
    sub_1B64ACC(this, commonConsumeEntityArray);
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
  int64_t Time; // x19
  Il2CppObject *Master_object; // x20
  CommonConsumeEntity_array *CompleteNum_45908016; // x0
  __int64 v11; // x1
  struct EventTradeInfo_array *tradeList; // x26
  int max_length; // w8
  bool v14; // w27
  CommonConsumeMaster_o *v15; // x21
  int v16; // w28
  EventTradeInfo_o *v17; // x24
  EventTradeGoodsEntity_o *Entity; // x22
  int32_t TradeMaxNum; // w0
  int32_t tradeNum; // w23
  int64_t startedAt; // x1
  int32_t v22; // w24
  int v23; // w25
  const MethodInfo *v24; // x2

  if ( (byte_49FF1B1 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_1B64870(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v3);
    sub_1B64870(&DataManager_TypeInfo, v4);
    sub_1B64870(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v5);
    sub_1B64870(&EventTradeTimeCalculation_TypeInfo, v6);
    sub_1B64870(&NetworkManager_TypeInfo, v7);
    byte_49FF1B1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  CompleteNum_45908016 = (CommonConsumeEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_21;
  max_length = tradeList->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (CommonConsumeMaster_o *)CompleteNum_45908016;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1B64AD4(CompleteNum_45908016, v11);
      v17 = tradeList->m_Items[v16];
      if ( !v17 || !Master_object )
        break;
      Entity = (EventTradeGoodsEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            v17->fields.tradeGoodsId,
                                            (const MethodInfo_30D6180 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(Entity, 0LL);
      tradeNum = v17->fields.tradeNum;
      startedAt = v17->fields.startedAt;
      v22 = TradeMaxNum;
      CompleteNum_45908016 = (CommonConsumeEntity_array *)EventTradeTimeCalculation__GetCompleteNum_45908016(
                                                            Entity,
                                                            startedAt,
                                                            Time,
                                                            tradeNum,
                                                            0,
                                                            0LL);
      if ( !Entity || !v15 )
        break;
      v23 = (int)CompleteNum_45908016;
      CompleteNum_45908016 = CommonConsumeMaster__GetSortedEntityList(v15, Entity->fields.commonConsumeId, 0LL);
      if ( tradeNum - v23 >= v22
        || (CompleteNum_45908016 = (CommonConsumeEntity_array *)UserEventTradeEntity__IsBuyAble(
                                                                  (UserEventTradeEntity_o *)CompleteNum_45908016,
                                                                  CompleteNum_45908016,
                                                                  v24),
            ((unsigned __int8)CompleteNum_45908016 & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v14 = ++v16 < max_length;
        if ( v16 < max_length )
          continue;
      }
      return v14;
    }
LABEL_21:
    sub_1B64ACC(CompleteNum_45908016, v11);
  }
  return v14;
}


bool __fastcall UserEventTradeEntity__TryGetUsedStoreIdx(
        UserEventTradeEntity_o *this,
        System_Int32_array **usedStoreIdx,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  System_Int32_array **v15; // x8
  System_Int32_array *v16; // x1
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  void *monitor; // x23
  UserEventTradeEntity___c_c *v21; // x0
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v23; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Int32_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_49FF1B0 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_int___, usedStoreIdx);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B64870(&System_Func_EventTradeInfo__int__TypeInfo, v8);
    sub_1B64870(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__7_0__, v9);
    sub_1B64870(&UserEventTradeEntity___c_TypeInfo, v10);
    byte_49FF1B0 = 1;
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1BB67A8(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB674C(v13);
  if ( !*(_DWORD *)(v13 + 224) )
    j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB674C(v14);
  v15 = *(System_Int32_array ***)(v14 + 184);
  v16 = *v15;
  *usedStoreIdx = *v15;
  sub_1B64814((ServantStatusBattleListViewItem_o *)usedStoreIdx, (int32_t)v16, (int32_t)method, v3);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1B64ACC(v17, v18);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v21 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
      v21 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v21->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = UserEventTradeEntity___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_EventTradeInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__7_0, v23, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__7_0__, 0LL);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventTradeInfo__int__o *)_9__7_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2E6ADAC *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v28 = System_Linq_Enumerable__ToArray_int_(
            v27,
            (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)usedStoreIdx, (int32_t)v28, v29, v30);
  }
  return monitor != 0LL;
}


void __fastcall UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF1B4 & 1) == 0 )
  {
    sub_1B64870(&UserEventTradeEntity___c_TypeInfo, v1);
    byte_49FF1B4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(UserEventTradeEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)UserEventTradeEntity___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall UserEventTradeEntity___c___ctor(UserEventTradeEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserEventTradeEntity___c___GetTotalTradeCount_b__6_0(
        UserEventTradeEntity___c_o *this,
        EventTradeResultInfo_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B64ACC(this, 0LL);
  return v->fields.getNum;
}


int32_t __fastcall UserEventTradeEntity___c___TryGetUsedStoreIdx_b__7_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B64ACC(this, 0LL);
  return info->fields.storeIdx;
}