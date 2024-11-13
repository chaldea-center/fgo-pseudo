void __fastcall UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16EE8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int___, method, v2);
    byte_4B16EE3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_2F10D48 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePrimaryKey(
        UserEventTradeEntity_o *this,
        const MethodInfo *method)
{
  return UserEventTradeEntity__CreatePK(this->fields.eventId, method);
}


int32_t __fastcall UserEventTradeEntity__GetTotalTradeCount(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_TSource__o *resultList; // x19
  UserEventTradeEntity___c_c *v12; // x0
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v14; // x21
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B16EE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___, method, v2);
    sub_1BCA7E0(&System_Func_EventTradeResultInfo__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, v7, v8);
    sub_1BCA7E0(&UserEventTradeEntity___c_TypeInfo, v9, v10);
    byte_4B16EE4 = 1;
  }
  resultList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.resultList;
  if ( !resultList )
    return 0;
  v12 = UserEventTradeEntity___c_TypeInfo;
  if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo, method);
    v12 = UserEventTradeEntity___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v12->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, method);
      v12 = UserEventTradeEntity___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_EventTradeResultInfo__int__TypeInfo, method, v2, v3);
    System_Func_object__int____ctor(_9__7_0, v14, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, 0LL);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v16, v17, v18, v19, v20, v21);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__7_0,
           (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool __fastcall UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  Il2CppObject *Master_object; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct EventTradeInfo_array *tradeList; // x28
  int max_length; // w8
  bool v30; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x22
  int v33; // w19
  EventTradeInfo_o *v34; // x20
  __int64 v35; // x23
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  EventTradeGoodsEntity_o **v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  struct EventCraftPickupInfo_array *pickupList; // x8
  System_Func_object__bool__o *v47; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_List_EventCraftPickupInfo__o *v49; // x25
  int32_t tradeNum; // w23
  EventTradeGoodsEntity_o *v51; // x26
  int64_t startedAt; // x27
  int32_t getNum; // w24
  int64_t endedAt; // [xsp+0h] [xbp-70h]

  if ( (byte_4B16EE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v9, v10);
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__, v19, v20);
    sub_1BCA7E0(&UserEventTradeEntity___c__DisplayClass10_0_TypeInfo, v21, v22);
    byte_4B16EE7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  endedAt = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_30;
  max_length = tradeList->max_length;
  v30 = max_length > 0;
  if ( max_length >= 1 )
  {
    v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v32 = 0LL;
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)max_length )
        sub_1BCAA44(Master_object, v25);
      v34 = tradeList->m_Items[v33];
      v35 = sub_1BCAA2C(UserEventTradeEntity___c__DisplayClass10_0_TypeInfo, v25, v26, v27);
      System_Object___ctor((Il2CppObject *)v35, 0LL);
      if ( !v34 )
        break;
      if ( !v31 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        v31,
                        v34->fields.tradeGoodsId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v35 )
        break;
      *(_QWORD *)(v35 + 16) = Master_object;
      v42 = (EventTradeGoodsEntity_o **)(v35 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)Master_object, v36, v37, v38, v39, v40, v41);
      pickupList = this->fields.pickupList;
      if ( pickupList )
        v32 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( pickupList )
      {
        v47 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_EventCraftPickupInfo__bool__TypeInfo,
                                               v43,
                                               v44,
                                               v45);
        System_Func_object__bool____ctor(
          v47,
          (Il2CppObject *)v35,
          Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__,
          0LL);
        v48 = System_Linq_Enumerable__Where_object_(
                v32,
                (System_Func_TSource__bool__o *)v47,
                (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
        v49 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v48,
                                                                           (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      }
      else
      {
        v49 = 0LL;
      }
      tradeNum = v34->fields.tradeNum;
      v51 = *v42;
      startedAt = v34->fields.startedAt;
      getNum = v34->fields.getNum;
      if ( v49 )
      {
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v43);
        Master_object = (Il2CppObject *)EventCraftTimeCalculation__GetCompleteNum_46368688(
                                          v51,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          v49,
                                          0LL,
                                          0LL);
      }
      else
      {
        if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v43);
        Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_31314548(
                                          v51,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          0LL);
      }
      if ( v34->fields.getNum <= 0 && tradeNum - (int)Master_object < 1 )
      {
        max_length = tradeList->max_length;
        v30 = ++v33 < max_length;
        if ( v33 < max_length )
          continue;
      }
      return v30;
    }
LABEL_30:
    sub_1BCAA3C(Master_object, v25);
  }
  return v30;
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
        sub_1BCAA44(this, commonConsumeEntityArray);
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
    sub_1BCAA3C(this, commonConsumeEntityArray);
  }
  return !v5;
}


bool __fastcall UserEventTradeEntity__IsRefillable(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  Il2CppObject *Master_object; // x19
  int64_t Entity; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  __int64 v31; // x3
  struct EventTradeInfo_array *tradeList; // x23
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  int v35; // w21
  EventTradeInfo_o *v36; // x22
  __int64 v37; // x25
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  EventTradeGoodsEntity_o **v44; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  struct EventCraftPickupInfo_array *pickupList; // x8
  System_Func_object__bool__o *v49; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_List_TSource__o *v51; // x0
  EventTradeGoodsEntity_o *v52; // x25
  System_Collections_Generic_List_EventCraftPickupInfo__o *v53; // x27
  Il2CppObject *v54; // x23
  UserEventTradeEntity_o *v55; // x19
  int32_t CraftMaxNum; // w0
  __int64 v57; // x1
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *v59; // x29
  int64_t startedAt; // x28
  int32_t v61; // w26
  int32_t CompleteNum_46368688; // w0
  int32_t TradeMaxNum; // w0
  __int64 v64; // x1
  EventTradeGoodsEntity_o *v65; // x28
  int64_t v66; // x27
  int32_t v67; // w27
  struct EventTradeInfo_array *v69; // [xsp+0h] [xbp-80h]
  CommonConsumeMaster_o *v70; // [xsp+8h] [xbp-78h]
  int64_t endedAt; // [xsp+10h] [xbp-70h]
  bool v72; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4B16EE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v12, v13);
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v14, v15);
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__, v22, v23);
    sub_1BCA7E0(&UserEventTradeEntity___c__DisplayClass9_0_TypeInfo, v24, v25);
    byte_4B16EE6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  endedAt = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  Entity = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
LABEL_35:
    sub_1BCAA3C(Entity, v29);
  max_length = tradeList->max_length;
  v72 = max_length > 0;
  if ( max_length >= 1 )
  {
    v34 = 0LL;
    v35 = 0;
    v69 = this->fields.tradeList;
    v70 = (CommonConsumeMaster_o *)Entity;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)max_length )
        sub_1BCAA44(Entity, v29);
      v36 = tradeList->m_Items[v35];
      v37 = sub_1BCAA2C(UserEventTradeEntity___c__DisplayClass9_0_TypeInfo, v29, v30, v31);
      System_Object___ctor((Il2CppObject *)v37, 0LL);
      if ( !v36 )
        goto LABEL_35;
      if ( !Master_object )
        goto LABEL_35;
      Entity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          v36->fields.tradeGoodsId,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v37 )
        goto LABEL_35;
      *(_QWORD *)(v37 + 16) = Entity;
      v44 = (EventTradeGoodsEntity_o **)(v37 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), Entity, v38, v39, v40, v41, v42, v43);
      pickupList = this->fields.pickupList;
      if ( pickupList )
        v34 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( !pickupList )
        break;
      v49 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventCraftPickupInfo__bool__TypeInfo, v45, v46, v47);
      System_Func_object__bool____ctor(
        v49,
        (Il2CppObject *)v37,
        Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__,
        0LL);
      v50 = System_Linq_Enumerable__Where_object_(
              v34,
              (System_Func_TSource__bool__o *)v49,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
      v51 = System_Linq_Enumerable__ToList_object_(
              v50,
              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      v52 = *(EventTradeGoodsEntity_o **)(v37 + 16);
      if ( !v51 )
        goto LABEL_24;
      v53 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)v51;
      v54 = Master_object;
      v55 = this;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v45);
      CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v53, 0LL, v52, 0LL);
      tradeNum = v36->fields.tradeNum;
      v59 = *v44;
      startedAt = v36->fields.startedAt;
      v61 = CraftMaxNum;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v57);
      CompleteNum_46368688 = EventCraftTimeCalculation__GetCompleteNum_46368688(
                               v59,
                               startedAt,
                               endedAt,
                               tradeNum,
                               0,
                               v53,
                               0LL,
                               0LL);
      this = v55;
      Master_object = v54;
      tradeList = v69;
LABEL_29:
      v67 = CompleteNum_46368688;
      Entity = (int64_t)v70;
      if ( !*v44 || !v70 )
        goto LABEL_35;
      Entity = (int64_t)CommonConsumeMaster__GetSortedEntityList(v70, (*v44)->fields.commonConsumeId, 0LL);
      if ( tradeNum - v67 >= v61
        || (Entity = UserEventTradeEntity__IsBuyAble(
                       (UserEventTradeEntity_o *)Entity,
                       (CommonConsumeEntity_array *)Entity,
                       v30),
            (Entity & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v72 = ++v35 < max_length;
        if ( v35 < max_length )
          continue;
      }
      return v72;
    }
    v52 = *v44;
LABEL_24:
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v45);
    TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v52, 0LL);
    tradeNum = v36->fields.tradeNum;
    v65 = *v44;
    v66 = v36->fields.startedAt;
    v61 = TradeMaxNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v64);
    CompleteNum_46368688 = EventTradeTimeCalculation__GetCompleteNum_31314548(v65, v66, endedAt, tradeNum, 0, 0LL);
    goto LABEL_29;
  }
  return v72;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  _QWORD *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  System_Int32_array **v25; // x8
  System_Int32_array *v26; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  void *monitor; // x23
  UserEventTradeEntity___c_c *v33; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v35; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Int32_array *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4B16EE5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, usedStoreIdx, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v13, v14);
    sub_1BCA7E0(&System_Func_EventTradeInfo__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, v17, v18);
    sub_1BCA7E0(&UserEventTradeEntity___c_TypeInfo, v19, v20);
    byte_4B16EE5 = 1;
  }
  v21 = Method_System_Array_Empty_int___;
  v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v22 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, usedStoreIdx);
    v22 = v21[7];
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v23 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v23, usedStoreIdx);
  v24 = *(_QWORD *)(v21[7] + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(inited);
  v25 = *(System_Int32_array ***)(v24 + 184);
  v26 = *v25;
  *usedStoreIdx = *v25;
  sub_1BCA784((PartyOrganizationUtility_o *)usedStoreIdx, (int64_t)v26, (int64_t)method, v3, v4, v5, v6, v7);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1BCAA3C(v27, v28);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v33 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo, v28);
      v33 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v33->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33, v28);
        v33 = UserEventTradeEntity___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_EventTradeInfo__int__TypeInfo, v28, v29, v30);
      System_Func_object__int____ctor(_9__8_0, v35, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, 0LL);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_EventTradeInfo__int__o *)_9__8_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v44 = System_Linq_Enumerable__ToArray_int_(
            v43,
            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v44;
    sub_1BCA784((PartyOrganizationUtility_o *)usedStoreIdx, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  }
  return monitor != 0LL;
}


void __fastcall UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16EE9 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventTradeEntity___c_TypeInfo, v1, v2);
    byte_4B16EE9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserEventTradeEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserEventTradeEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return v->fields.getNum;
}


int32_t __fastcall UserEventTradeEntity___c___TryGetUsedStoreIdx_b__8_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}