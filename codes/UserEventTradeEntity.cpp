void __fastcall UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD285 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDD285 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4BDD280 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4BDD280 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_2FADEBC *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePrimaryKey(
        UserEventTradeEntity_o *this,
        const MethodInfo *method)
{
  return UserEventTradeEntity__CreatePK(this->fields.eventId, method);
}


int32_t __fastcall UserEventTradeEntity__GetTotalTradeCount(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *resultList; // x19
  UserEventTradeEntity___c_c *v4; // x0
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v6; // x21
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDD281 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
    sub_1C21E38(&System_Func_EventTradeResultInfo__int__TypeInfo);
    sub_1C21E38(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__);
    sub_1C21E38(&UserEventTradeEntity___c_TypeInfo);
    byte_4BDD281 = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventTradeResultInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v6, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, 0LL);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__7_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__7_0,
           (const MethodInfo_2FE8364 *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool __fastcall UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1
  struct EventTradeInfo_array *tradeList; // x28
  int max_length; // w8
  bool v6; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x22
  int v9; // w19
  EventTradeInfo_o *v10; // x20
  __int64 v11; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  EventTradeGoodsEntity_o **v18; // x24
  struct EventCraftPickupInfo_array *pickupList; // x8
  System_Func_object__bool__o *v20; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_EventCraftPickupInfo__o *v22; // x25
  int32_t tradeNum; // w23
  EventTradeGoodsEntity_o *v24; // x26
  int64_t startedAt; // x27
  int32_t getNum; // w24
  int64_t endedAt; // [xsp+0h] [xbp-70h]

  if ( (byte_4BDD284 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    sub_1C21E38(&EventTradeTimeCalculation_TypeInfo);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__);
    sub_1C21E38(&UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
    byte_4BDD284 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_30;
  max_length = tradeList->max_length;
  v6 = max_length > 0;
  if ( max_length >= 1 )
  {
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2209C(Master_object, v3);
      v10 = tradeList->m_Items[v9];
      v11 = sub_1C22084(UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0LL);
      if ( !v10 )
        break;
      if ( !v7 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        v7,
                        v10->fields.tradeGoodsId,
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v11 )
        break;
      *(_QWORD *)(v11 + 16) = Master_object;
      v18 = (EventTradeGoodsEntity_o **)(v11 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)Master_object, v12, v13, v14, v15, v16, v17);
      pickupList = this->fields.pickupList;
      if ( pickupList )
        v8 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( pickupList )
      {
        v20 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCraftPickupInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v20,
          (Il2CppObject *)v11,
          Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__,
          0LL);
        v21 = System_Linq_Enumerable__Where_object_(
                v8,
                (System_Func_TSource__bool__o *)v20,
                (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
        v22 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v21,
                                                                           (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      }
      else
      {
        v22 = 0LL;
      }
      tradeNum = v10->fields.tradeNum;
      v24 = *v18;
      startedAt = v10->fields.startedAt;
      getNum = v10->fields.getNum;
      if ( v22 )
      {
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventCraftTimeCalculation__GetCompleteNum_46972716(
                                          v24,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          v22,
                                          0LL,
                                          0LL);
      }
      else
      {
        if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_31671916(
                                          v24,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          0LL);
      }
      if ( v10->fields.getNum <= 0 && tradeNum - (int)Master_object < 1 )
      {
        max_length = tradeList->max_length;
        v6 = ++v9 < max_length;
        if ( v9 < max_length )
          continue;
      }
      return v6;
    }
LABEL_30:
    sub_1C22094(Master_object, v3);
  }
  return v6;
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
        sub_1C2209C(this, commonConsumeEntityArray);
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
    sub_1C22094(this, commonConsumeEntityArray);
  }
  return !v5;
}


bool __fastcall UserEventTradeEntity__IsRefillable(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x19
  int64_t Entity; // x0
  __int64 v5; // x1
  struct EventTradeInfo_array *tradeList; // x23
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  int v9; // w21
  EventTradeInfo_o *v10; // x22
  __int64 v11; // x25
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  EventTradeGoodsEntity_o **v18; // x24
  struct EventCraftPickupInfo_array *pickupList; // x8
  System_Func_object__bool__o *v20; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_TSource__o *v22; // x0
  EventTradeGoodsEntity_o *v23; // x25
  System_Collections_Generic_List_EventCraftPickupInfo__o *v24; // x27
  Il2CppObject *v25; // x23
  UserEventTradeEntity_o *v26; // x19
  int32_t CraftMaxNum; // w0
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *v29; // x29
  int64_t startedAt; // x28
  int32_t v31; // w26
  int32_t CompleteNum_46972716; // w0
  int32_t TradeMaxNum; // w0
  EventTradeGoodsEntity_o *v34; // x28
  int64_t v35; // x27
  int32_t v36; // w27
  const MethodInfo *v37; // x2
  struct EventTradeInfo_array *v39; // [xsp+0h] [xbp-80h]
  CommonConsumeMaster_o *v40; // [xsp+8h] [xbp-78h]
  int64_t endedAt; // [xsp+10h] [xbp-70h]
  bool v42; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4BDD283 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    sub_1C21E38(&EventTradeTimeCalculation_TypeInfo);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__);
    sub_1C21E38(&UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
    byte_4BDD283 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  Entity = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
LABEL_35:
    sub_1C22094(Entity, v5);
  max_length = tradeList->max_length;
  v42 = max_length > 0;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    v9 = 0;
    v39 = this->fields.tradeList;
    v40 = (CommonConsumeMaster_o *)Entity;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2209C(Entity, v5);
      v10 = tradeList->m_Items[v9];
      v11 = sub_1C22084(UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0LL);
      if ( !v10 )
        goto LABEL_35;
      if ( !Master_object )
        goto LABEL_35;
      Entity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          v10->fields.tradeGoodsId,
                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v11 )
        goto LABEL_35;
      *(_QWORD *)(v11 + 16) = Entity;
      v18 = (EventTradeGoodsEntity_o **)(v11 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 16), Entity, v12, v13, v14, v15, v16, v17);
      pickupList = this->fields.pickupList;
      if ( pickupList )
        v8 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( !pickupList )
        break;
      v20 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v20,
        (Il2CppObject *)v11,
        Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__,
        0LL);
      v21 = System_Linq_Enumerable__Where_object_(
              v8,
              (System_Func_TSource__bool__o *)v20,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
      v22 = System_Linq_Enumerable__ToList_object_(
              v21,
              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      v23 = *(EventTradeGoodsEntity_o **)(v11 + 16);
      if ( !v22 )
        goto LABEL_24;
      v24 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)v22;
      v25 = Master_object;
      v26 = this;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v24, 0LL, v23, 0LL);
      tradeNum = v10->fields.tradeNum;
      v29 = *v18;
      startedAt = v10->fields.startedAt;
      v31 = CraftMaxNum;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CompleteNum_46972716 = EventCraftTimeCalculation__GetCompleteNum_46972716(
                               v29,
                               startedAt,
                               endedAt,
                               tradeNum,
                               0,
                               v24,
                               0LL,
                               0LL);
      this = v26;
      Master_object = v25;
      tradeList = v39;
LABEL_29:
      v36 = CompleteNum_46972716;
      Entity = (int64_t)v40;
      if ( !*v18 || !v40 )
        goto LABEL_35;
      Entity = (int64_t)CommonConsumeMaster__GetSortedEntityList(v40, (*v18)->fields.commonConsumeId, 0LL);
      if ( tradeNum - v36 >= v31
        || (Entity = UserEventTradeEntity__IsBuyAble(
                       (UserEventTradeEntity_o *)Entity,
                       (CommonConsumeEntity_array *)Entity,
                       v37),
            (Entity & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v42 = ++v9 < max_length;
        if ( v9 < max_length )
          continue;
      }
      return v42;
    }
    v23 = *v18;
LABEL_24:
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v23, 0LL);
    tradeNum = v10->fields.tradeNum;
    v34 = *v18;
    v35 = v10->fields.startedAt;
    v31 = TradeMaxNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    CompleteNum_46972716 = EventTradeTimeCalculation__GetCompleteNum_31671916(v34, v35, endedAt, tradeNum, 0, 0LL);
    goto LABEL_29;
  }
  return v42;
}


bool __fastcall UserEventTradeEntity__TryGetUsedStoreIdx(
        UserEventTradeEntity_o *this,
        System_Int32_array **usedStoreIdx,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
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
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v23; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int32_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BDD282 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_EventTradeInfo__int__TypeInfo);
    sub_1C21E38(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__);
    sub_1C21E38(&UserEventTradeEntity___c_TypeInfo);
    byte_4BDD282 = 1;
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C73D70(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C73D14(inited);
  v15 = *(System_Int32_array ***)(v14 + 184);
  v16 = *v15;
  *usedStoreIdx = *v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)usedStoreIdx, (int64_t)v16, (int64_t)method, v3, v4, v5, v6, v7);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1C22094(v17, v18);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v21 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
      v21 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v21->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = UserEventTradeEntity___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventTradeInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__8_0, v23, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, 0LL);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_EventTradeInfo__int__o *)_9__8_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v32 = System_Linq_Enumerable__ToArray_int_(
            v31,
            (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v32;
    sub_1C21DDC((PartyOrganizationUtility_o *)usedStoreIdx, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  }
  return monitor != 0LL;
}


void __fastcall UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDD286 & 1) == 0 )
  {
    sub_1C21E38(&UserEventTradeEntity___c_TypeInfo);
    byte_4BDD286 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(UserEventTradeEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)UserEventTradeEntity___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return v->fields.getNum;
}


int32_t __fastcall UserEventTradeEntity___c___TryGetUsedStoreIdx_b__8_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, x);
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
    sub_1C22094(this, x);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}