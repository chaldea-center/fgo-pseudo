void __fastcall UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22CE0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22CE0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C22CDB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_4C22CDB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_2FEE220 *)Method_DataEntityBase_CreateMultiplePK_int___);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C22CDC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___, method);
    sub_1C3B764(&System_Func_EventTradeResultInfo__int__TypeInfo, v3);
    sub_1C3B764(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, v4);
    sub_1C3B764(&UserEventTradeEntity___c_TypeInfo, v5);
    byte_4C22CDC = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_EventTradeResultInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v9, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, 0LL);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__7_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v11, v12, v13, v14, v15, v16);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__7_0,
           (const MethodInfo_3029848 *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  EventTradeGoodsEntity_o **v28; // x24
  struct EventCraftPickupInfo_array *pickupList; // x8
  System_Func_object__bool__o *v30; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_List_EventCraftPickupInfo__o *v32; // x25
  int32_t tradeNum; // w23
  EventTradeGoodsEntity_o *v34; // x26
  int64_t startedAt; // x27
  int32_t getNum; // w24
  int64_t endedAt; // [xsp+0h] [xbp-70h]

  if ( (byte_4C22CDF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v2);
    sub_1C3B764(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v3);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v4);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v5);
    sub_1C3B764(&EventCraftTimeCalculation_TypeInfo, v6);
    sub_1C3B764(&EventTradeTimeCalculation_TypeInfo, v7);
    sub_1C3B764(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__, v10);
    sub_1C3B764(&UserEventTradeEntity___c__DisplayClass10_0_TypeInfo, v11);
    byte_4C22CDF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
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
        sub_1C3B9C8(Master_object, v13);
      v20 = tradeList->m_Items[v19];
      v21 = sub_1C3B9B0(UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v21, 0LL);
      if ( !v20 )
        break;
      if ( !v17 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        v17,
                        v20->fields.tradeGoodsId,
                        (const MethodInfo_329AE48 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v21 )
        break;
      *(_QWORD *)(v21 + 16) = Master_object;
      v28 = (EventTradeGoodsEntity_o **)(v21 + 16);
      sub_1C3B708((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)Master_object, v22, v23, v24, v25, v26, v27);
      pickupList = this->fields.pickupList;
      if ( pickupList )
        v18 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( pickupList )
      {
        v30 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventCraftPickupInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v30,
          (Il2CppObject *)v21,
          Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__,
          0LL);
        v31 = System_Linq_Enumerable__Where_object_(
                v18,
                (System_Func_TSource__bool__o *)v30,
                (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
        v32 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v31,
                                                                           (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      }
      else
      {
        v32 = 0LL;
      }
      tradeNum = v20->fields.tradeNum;
      v34 = *v28;
      startedAt = v20->fields.startedAt;
      getNum = v20->fields.getNum;
      if ( v32 )
      {
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventCraftTimeCalculation__GetCompleteNum_47233872(
                                          v34,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          v32,
                                          0LL,
                                          0LL);
      }
      else
      {
        if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_31776040(
                                          v34,
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
    sub_1C3B9C0(Master_object, v13);
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
        sub_1C3B9C8(this, commonConsumeEntityArray);
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
    sub_1C3B9C0(this, commonConsumeEntityArray);
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
  int64_t Entity; // x0
  __int64 v16; // x1
  struct EventTradeInfo_array *tradeList; // x23
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  int v20; // w21
  EventTradeInfo_o *v21; // x22
  __int64 v22; // x25
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  EventTradeGoodsEntity_o **v29; // x24
  struct EventCraftPickupInfo_array *pickupList; // x8
  System_Func_object__bool__o *v31; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_TSource__o *v33; // x0
  EventTradeGoodsEntity_o *v34; // x25
  System_Collections_Generic_List_EventCraftPickupInfo__o *v35; // x27
  Il2CppObject *v36; // x23
  UserEventTradeEntity_o *v37; // x19
  int32_t CraftMaxNum; // w0
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *v40; // x29
  int64_t startedAt; // x28
  int32_t v42; // w26
  int32_t CompleteNum_47233872; // w0
  int32_t TradeMaxNum; // w0
  EventTradeGoodsEntity_o *v45; // x28
  int64_t v46; // x27
  int32_t v47; // w27
  const MethodInfo *v48; // x2
  struct EventTradeInfo_array *v50; // [xsp+0h] [xbp-80h]
  CommonConsumeMaster_o *v51; // [xsp+8h] [xbp-78h]
  int64_t endedAt; // [xsp+10h] [xbp-70h]
  bool v53; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4C22CDE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v7);
    sub_1C3B764(&EventCraftTimeCalculation_TypeInfo, v8);
    sub_1C3B764(&EventTradeTimeCalculation_TypeInfo, v9);
    sub_1C3B764(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__, v12);
    sub_1C3B764(&UserEventTradeEntity___c__DisplayClass9_0_TypeInfo, v13);
    byte_4C22CDE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  Entity = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
LABEL_35:
    sub_1C3B9C0(Entity, v16);
  max_length = tradeList->max_length;
  v53 = max_length > 0;
  if ( max_length >= 1 )
  {
    v19 = 0LL;
    v20 = 0;
    v50 = this->fields.tradeList;
    v51 = (CommonConsumeMaster_o *)Entity;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
        sub_1C3B9C8(Entity, v16);
      v21 = tradeList->m_Items[v20];
      v22 = sub_1C3B9B0(UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      if ( !v21 )
        goto LABEL_35;
      if ( !Master_object )
        goto LABEL_35;
      Entity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          v21->fields.tradeGoodsId,
                          (const MethodInfo_329AE48 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v22 )
        goto LABEL_35;
      *(_QWORD *)(v22 + 16) = Entity;
      v29 = (EventTradeGoodsEntity_o **)(v22 + 16);
      sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 16), Entity, v23, v24, v25, v26, v27, v28);
      pickupList = this->fields.pickupList;
      if ( pickupList )
        v19 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( !pickupList )
        break;
      v31 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v31,
        (Il2CppObject *)v22,
        Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__,
        0LL);
      v32 = System_Linq_Enumerable__Where_object_(
              v19,
              (System_Func_TSource__bool__o *)v31,
              (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
      v33 = System_Linq_Enumerable__ToList_object_(
              v32,
              (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      v34 = *(EventTradeGoodsEntity_o **)(v22 + 16);
      if ( !v33 )
        goto LABEL_24;
      v35 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)v33;
      v36 = Master_object;
      v37 = this;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v35, 0LL, v34, 0LL);
      tradeNum = v21->fields.tradeNum;
      v40 = *v29;
      startedAt = v21->fields.startedAt;
      v42 = CraftMaxNum;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CompleteNum_47233872 = EventCraftTimeCalculation__GetCompleteNum_47233872(
                               v40,
                               startedAt,
                               endedAt,
                               tradeNum,
                               0,
                               v35,
                               0LL,
                               0LL);
      this = v37;
      Master_object = v36;
      tradeList = v50;
LABEL_29:
      v47 = CompleteNum_47233872;
      Entity = (int64_t)v51;
      if ( !*v29 || !v51 )
        goto LABEL_35;
      Entity = (int64_t)CommonConsumeMaster__GetSortedEntityList(v51, (*v29)->fields.commonConsumeId, 0LL);
      if ( tradeNum - v47 >= v42
        || (Entity = UserEventTradeEntity__IsBuyAble(
                       (UserEventTradeEntity_o *)Entity,
                       (CommonConsumeEntity_array *)Entity,
                       v48),
            (Entity & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v53 = ++v20 < max_length;
        if ( v20 < max_length )
          continue;
      }
      return v53;
    }
    v34 = *v29;
LABEL_24:
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v34, 0LL);
    tradeNum = v21->fields.tradeNum;
    v45 = *v29;
    v46 = v21->fields.startedAt;
    v42 = TradeMaxNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    CompleteNum_47233872 = EventTradeTimeCalculation__GetCompleteNum_31776040(v45, v46, endedAt, tradeNum, 0, 0LL);
    goto LABEL_29;
  }
  return v53;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  System_Int32_array **v20; // x8
  System_Int32_array *v21; // x1
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  void *monitor; // x23
  UserEventTradeEntity___c_c *v26; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v28; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4C22CDD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_int___, usedStoreIdx);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1C3B764(&System_Func_EventTradeInfo__int__TypeInfo, v13);
    sub_1C3B764(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, v14);
    sub_1C3B764(&UserEventTradeEntity___c_TypeInfo, v15);
    byte_4C22CDD = 1;
  }
  v16 = Method_System_Array_Empty_int___;
  v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v17 )
  {
    sub_1C8D69C(Method_System_Array_Empty_int___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8D640(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C8D640(inited);
  v20 = *(System_Int32_array ***)(v19 + 184);
  v21 = *v20;
  *usedStoreIdx = *v20;
  sub_1C3B708((PartyOrganizationUtility_o *)usedStoreIdx, (int64_t)v21, (int64_t)method, v3, v4, v5, v6, v7);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1C3B9C0(v22, v23);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v26 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
      v26 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v26->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = UserEventTradeEntity___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_EventTradeInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__8_0, v28, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, 0LL);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_EventTradeInfo__int__o *)_9__8_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_30221C0 *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v37 = System_Linq_Enumerable__ToArray_int_(
            v36,
            (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v37;
    sub_1C3B708((PartyOrganizationUtility_o *)usedStoreIdx, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  }
  return monitor != 0LL;
}


void __fastcall UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C22CE1 & 1) == 0 )
  {
    sub_1C3B764(&UserEventTradeEntity___c_TypeInfo, v1);
    byte_4C22CE1 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(UserEventTradeEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)UserEventTradeEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return v->fields.getNum;
}


int32_t __fastcall UserEventTradeEntity___c___TryGetUsedStoreIdx_b__8_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, x);
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
    sub_1C3B9C0(this, x);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}