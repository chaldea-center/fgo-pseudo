void __fastcall EventCraftListViewItem___ctor(
        EventCraftListViewItem_o *this,
        int32_t index,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        ItemEntity_o *supportItem,
        int32_t eventId,
        System_Action_o *updateReceiveAllButton,
        const MethodInfo *method)
{
  __int64 v13; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x20
  struct EventTradeGoodsEntity_o *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x22
  System_Func_object__bool__o *v51; // x23
  Il2CppObject *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct UserEventTradeEntity_o *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x22
  System_Func_object__bool__o *v61; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v63; // x1
  Il2CppObject *Master_object; // x22
  int32_t id; // w3
  int32_t num; // w8
  int32_t EventId_k__BackingField; // w9
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppObject *v74; // x1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  bool IsOpen; // w0
  Il2CppObject *v83; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BE0401 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C21E38(&System_Func_EventTradeInfo__bool__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__);
    sub_1C21E38(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__);
    sub_1C21E38(&EventCraftListViewItem___c__DisplayClass35_0_TypeInfo);
    byte_4BE0401 = 1;
  }
  entity = 0LL;
  v83 = 0LL;
  v13 = sub_1C22084(EventCraftListViewItem___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_47;
  *(_QWORD *)(v13 + 16) = tradeGoodsEntity;
  v22 = v13 + 16;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)tradeGoodsEntity, v16, v17, v18, v19, v20, v21);
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  v23 = *(struct EventTradeGoodsEntity_o **)(v13 + 16);
  this->fields._TradeGoodsEntity_k__BackingField = v23;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._TradeGoodsEntity_k__BackingField,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields._SupportTool_k__BackingField = supportItem;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._SupportTool_k__BackingField,
    (int64_t)supportItem,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._EventId_k__BackingField = eventId;
  this->fields._UpdateReceiveAllButtonState_k__BackingField = updateReceiveAllButton;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._UpdateReceiveAllButtonState_k__BackingField,
    (int64_t)updateReceiveAllButton,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  EventCraftListViewItem__UpdateCraftUserInfo(this, v42);
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0LL )
  {
    v51 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v51,
      (Il2CppObject *)v13,
      Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__,
      0LL);
    v52 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
            tradeList,
            (System_Func_TSource__bool__o *)v51,
            (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v52 = 0LL;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v52;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._TradeInfo_k__BackingField,
    (int64_t)v52,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v59 = this->fields._UserTradeEntity_k__BackingField;
  if ( v59 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v59->fields.pickupList) != 0LL )
  {
    v61 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v61,
      (Il2CppObject *)v13,
      Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__,
      0LL);
    v62 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v61,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v63 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v62,
                                                                              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v63 = 0LL;
  }
  this->fields._PickupInfoList_k__BackingField = v63;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._PickupInfoList_k__BackingField,
    (int64_t)v63,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( NetworkManager_TypeInfo->_2.cctor_finished )
  {
    if ( supportItem )
      goto LABEL_20;
LABEL_23:
    id = 0;
    if ( !Master_object )
      goto LABEL_47;
    goto LABEL_24;
  }
  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !supportItem )
    goto LABEL_23;
LABEL_20:
  id = supportItem->fields.id;
  if ( !Master_object )
    goto LABEL_47;
LABEL_24:
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__TryGetEntity(
                                                        (UserItemMaster_o *)Master_object,
                                                        &entity,
                                                        (int64_t)v14[2].fields.list[1].monitor,
                                                        id,
                                                        0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_47;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  this->fields._PossessionNum_k__BackingField = num;
  if ( EventId_k__BackingField >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !v14 )
      goto LABEL_47;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v14,
           &v83,
           this->fields._EventId_k__BackingField,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      v74 = v83;
      this->fields.eventEntity = (struct EventEntity_o *)v83;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventEntity, (int64_t)v74, v68, v69, v70, v71, v72, v73);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*(_QWORD *)v22 )
    goto LABEL_47;
  if ( !v14 )
    goto LABEL_47;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)v14,
                       *(_DWORD *)(*(_QWORD *)v22 + 48LL),
                       0LL);
  this->fields._CommonConsumeEntityArray_k__BackingField = SortedEntityList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._CommonConsumeEntityArray_k__BackingField,
    (int64_t)SortedEntityList,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  if ( !*(_QWORD *)v22 )
    goto LABEL_47;
  if ( !*(_DWORD *)(*(_QWORD *)v22 + 76LL) )
  {
    IsOpen = 1;
    goto LABEL_46;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !*(_QWORD *)v22 || !v14 )
LABEL_47:
    sub_1C22094(v14, v15);
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)v14, *(_DWORD *)(*(_QWORD *)v22 + 76LL), 0LL, 0, 0LL);
LABEL_46:
  this->fields._IsRelease_k__BackingField = IsOpen;
}


bool __fastcall EventCraftListViewItem__IsUsedSupportTool(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x19
  EventCraftListViewItem___c_c *v5; // x0
  System_Func_T__TResult__o *_9__58_0; // x20
  Il2CppObject *v7; // x21
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  int64_t v16; // x19

  if ( (byte_4BE0408 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__);
    sub_1C21E38(&EventCraftListViewItem___c_TypeInfo);
    byte_4BE0408 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields._PickupInfoList_k__BackingField, 0LL) )
    return 0;
  PickupInfoList_k__BackingField = this->fields._PickupInfoList_k__BackingField;
  v5 = EventCraftListViewItem___c_TypeInfo;
  if ( !EventCraftListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo);
    v5 = EventCraftListViewItem___c_TypeInfo;
  }
  _9__58_0 = (System_Func_T__TResult__o *)v5->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventCraftListViewItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__58_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_EventCraftPickupInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__58_0, v7, Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__, 0LL);
    static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__58_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__58_0, (int64_t)_9__58_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Select_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfoList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__58_0,
          (const MethodInfo_2FE12C4 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
  v16 = System_Linq_Enumerable__Max_65339244((System_Collections_Generic_IEnumerable_long__o *)v15, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return v16 >= NetworkManager__getTime(0LL);
}


bool __fastcall EventCraftListViewItem__SetSortValue(
        EventCraftListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x9
  const MethodInfo *v6; // x1
  struct EventTradeInfo_o *v7; // x8
  const MethodInfo *v8; // x1
  int64_t v9; // x8
  struct EventTradeInfo_o *v11; // x8
  int64_t *p_sortValue0; // x8
  __int64 v13; // x9
  int32_t NowCompleteNum; // w0

  TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !TradeGoodsEntity_k__BackingField )
    sub_1C22094(this, sort);
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  this->fields.sortValue1 = TradeGoodsEntity_k__BackingField->fields.id;
  if ( TradeInfo_k__BackingField )
  {
    if ( EventCraftListViewItem__get_NowTradeNum(this, (const MethodInfo *)sort) >= 1 )
    {
      v7 = this->fields._TradeInfo_k__BackingField;
      if ( !v7 || v7->fields.getNum <= 0 && EventCraftListViewItem__get_NowCompleteNum(this, v6) <= 0 )
      {
        v9 = 1LL;
        goto LABEL_12;
      }
    }
    if ( !this->fields._TradeInfo_k__BackingField || EventCraftListViewItem__get_NowTradeNum(this, v6) >= 1 )
    {
      v9 = 2LL;
LABEL_12:
      this->fields.sortValue0 = v9;
      return 1;
    }
    v11 = this->fields._TradeInfo_k__BackingField;
    if ( v11 )
    {
      if ( v11->fields.getNum >= 1 )
      {
        p_sortValue0 = &this->fields.sortValue0;
LABEL_20:
        v13 = 3LL;
        goto LABEL_21;
      }
      NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(this, v8);
      p_sortValue0 = &this->fields.sortValue0;
      if ( NowCompleteNum >= 1 )
        goto LABEL_20;
    }
    else
    {
      p_sortValue0 = &this->fields.sortValue0;
    }
    v13 = 4LL;
LABEL_21:
    *p_sortValue0 = v13;
    return 1;
  }
  this->fields.sortValue0 = 0LL;
  return 1;
}


void __fastcall EventCraftListViewItem__UpdateCraftUserInfo(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UserEventTradeEntity_o *v11; // x1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UserEventTradeEntity_o *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x20
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v26; // x1
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BE0402 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C21E38(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__);
    sub_1C21E38(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C21E38(&System_Func_EventTradeInfo__bool__TypeInfo);
    byte_4BE0402 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v4);
  if ( UserEventTradeMaster__TryGetEntity(
         (UserEventTradeMaster_o *)Master_object,
         &entity,
         this->fields._EventId_k__BackingField,
         0LL) )
  {
    v11 = entity;
    this->fields._UserTradeEntity_k__BackingField = entity;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields._UserTradeEntity_k__BackingField,
      (int64_t)v11,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0LL )
  {
    v14 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__,
      0LL);
    v15 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
            tradeList,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v15 = 0LL;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v15;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._TradeInfo_k__BackingField,
    (int64_t)v15,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v22 = this->fields._UserTradeEntity_k__BackingField;
  if ( v22 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v22->fields.pickupList) != 0LL )
  {
    v24 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__,
      0LL);
    v25 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v24,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v26 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v25,
                                                                              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v26 = 0LL;
  }
  this->fields._PickupInfoList_k__BackingField = v26;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._PickupInfoList_k__BackingField,
    (int64_t)v26,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall EventCraftListViewItem__UpdateSupportToolPossessionNum(
        EventCraftListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  this->fields._PossessionNum_k__BackingField = num;
}


bool __fastcall EventCraftListViewItem___UpdateCraftUserInfo_b__36_0(
        EventCraftListViewItem_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1C22094(this, info);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


bool __fastcall EventCraftListViewItem___UpdateCraftUserInfo_b__36_1(
        EventCraftListViewItem_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1C22094(this, info);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


CommonConsumeEntity_array *__fastcall EventCraftListViewItem__get_CommonConsumeEntityArray(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonConsumeEntityArray_k__BackingField;
}


int32_t __fastcall EventCraftListViewItem__get_EventId(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


bool __fastcall EventCraftListViewItem__get_IsAbleReceiveRewards(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8

  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  if ( TradeInfo_k__BackingField->fields.getNum <= 0 )
    return EventCraftListViewItem__get_NowCompleteNum(this, method) > 0;
  return 1;
}


bool __fastcall EventCraftListViewItem__get_IsBuyAble(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x19
  EventCraftListViewItem___c_c *v5; // x0
  System_Func_object__bool__o *_9__45_0; // x20
  Il2CppObject *v7; // x21
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BE0405 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_CommonConsumeEntity___);
    sub_1C21E38(&System_Func_CommonConsumeEntity__bool__TypeInfo);
    sub_1C21E38(&Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__);
    sub_1C21E38(&EventCraftListViewItem___c_TypeInfo);
    byte_4BE0405 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._CommonConsumeEntityArray_k__BackingField,
         0LL) )
  {
    return 0;
  }
  else
  {
    CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
    v5 = EventCraftListViewItem___c_TypeInfo;
    if ( !EventCraftListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo);
      v5 = EventCraftListViewItem___c_TypeInfo;
    }
    _9__45_0 = (System_Func_object__bool__o *)v5->static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = EventCraftListViewItem___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__45_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_CommonConsumeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__45_0, v7, Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__, 0LL);
      static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__45_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__45_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
        (int64_t)_9__45_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    return !BasicHelper__Any_object__49917468(
              (System_Object_array *)CommonConsumeEntityArray_k__BackingField,
              (System_Func_T__bool__o *)_9__45_0,
              (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_CommonConsumeEntity___);
  }
}


bool __fastcall EventCraftListViewItem__get_IsEventEnd(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  struct EventEntity_o *eventEntity; // x8

  if ( (byte_4BE0403 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BE0403 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_1C22094(Time, v4);
  return Time >= eventEntity->fields.endedAt;
}


bool __fastcall EventCraftListViewItem__get_IsRefillable(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t NowTradeNum; // w0
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x20
  int32_t v9; // w19

  if ( (byte_4BE0407 & 1) == 0 )
  {
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    byte_4BE0407 = 1;
  }
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField
    || TradeInfo_k__BackingField->fields.getNum > 0
    || EventCraftListViewItem__get_NowCompleteNum(this, method) > 0
    || !EventCraftListViewItem__get_IsBuyAble(this, v4) )
  {
    return 0;
  }
  NowTradeNum = EventCraftListViewItem__get_NowTradeNum(this, v5);
  PickupInfoList_k__BackingField = this->fields._PickupInfoList_k__BackingField;
  TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField;
  v9 = NowTradeNum;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  return v9 < EventCraftTimeCalculation__GetCraftMaxNum(
                PickupInfoList_k__BackingField,
                0LL,
                TradeGoodsEntity_k__BackingField,
                0LL);
}


bool __fastcall EventCraftListViewItem__get_IsRelease(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsRelease_k__BackingField;
}


bool __fastcall EventCraftListViewItem__get_IsTradeComplete(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField && EventCraftListViewItem__get_NowTradeNum(this, method) < 1;
}


bool __fastcall EventCraftListViewItem__get_IsTrading(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField != 0LL;
}


int32_t __fastcall EventCraftListViewItem__get_ItemCount(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x8

  CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
  if ( CommonConsumeEntityArray_k__BackingField )
    return CommonConsumeEntityArray_k__BackingField->max_length;
  else
    return 0;
}


int32_t __fastcall EventCraftListViewItem__get_NowCompleteNum(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  int64_t Time; // x20

  if ( (byte_4BE0406 & 1) == 0 )
  {
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BE0406 = 1;
  }
  if ( !this->fields._TradeInfo_k__BackingField )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  return EventCraftTimeCalculation__GetCompleteNum(this, 0LL, Time, 0LL);
}


int32_t __fastcall EventCraftListViewItem__get_NowTradeNum(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t tradeNum; // w20
  __int64 NowCompleteNum; // x0
  __int64 v6; // x1
  struct EventTradeInfo_o *v7; // x8

  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(this, method);
  v7 = this->fields._TradeInfo_k__BackingField;
  if ( !v7 )
    sub_1C22094(NowCompleteNum, v6);
  return tradeNum - NowCompleteNum + v7->fields.getNum;
}


System_Collections_Generic_List_EventCraftPickupInfo__o *__fastcall EventCraftListViewItem__get_PickupInfoList(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PickupInfoList_k__BackingField;
}


int32_t __fastcall EventCraftListViewItem__get_PossessionNum(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._PossessionNum_k__BackingField;
}


System_String_o *__fastcall EventCraftListViewItem__get_RestTimeEventAt(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL8 IsEventEnd; // x0
  __int64 v4; // x1
  System_String_o *v5; // x19
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  System_String_o *RestTime2; // x0
  struct EventEntity_o *eventEntity; // x8
  int64_t endedAt; // x19
  int64_t Time; // x20
  Il2CppObject *v14; // x19
  System_String_o *v15; // x0
  int v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BE0404 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13566/*"TIME_REST2_MINUTES"*/);
    sub_1C21E38(&StringLiteral_13655/*"TRADE_EVENT_REST_TIME_LABEL"*/);
    byte_4BE0404 = 1;
  }
  IsEventEnd = EventCraftListViewItem__get_IsEventEnd(this, method);
  if ( IsEventEnd )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13566/*"TIME_REST2_MINUTES"*/, 0LL);
    v17 = 0;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v6, v7, v8);
    RestTime2 = System_String__Format(v5, v9, 0LL);
  }
  else
  {
    eventEntity = this->fields.eventEntity;
    if ( !eventEntity )
      sub_1C22094(IsEventEnd, v4);
    endedAt = eventEntity->fields.endedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = LocalizationManager__GetRestTime2(endedAt, Time, 0LL);
  }
  v14 = (Il2CppObject *)RestTime2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13655/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0LL);
  return System_String__Format(v15, v14, 0LL);
}


ItemEntity_o *__fastcall EventCraftListViewItem__get_SupportTool(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SupportTool_k__BackingField;
}


EventTradeGoodsEntity_o *__fastcall EventCraftListViewItem__get_TradeGoodsEntity(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeGoodsEntity_k__BackingField;
}


EventTradeInfo_o *__fastcall EventCraftListViewItem__get_TradeInfo(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField;
}


System_Action_o *__fastcall EventCraftListViewItem__get_UpdateReceiveAllButtonState(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UpdateReceiveAllButtonState_k__BackingField;
}


UserEventTradeEntity_o *__fastcall EventCraftListViewItem__get_UserTradeEntity(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserTradeEntity_k__BackingField;
}


void __fastcall EventCraftListViewItem__set_PickupInfoList(
        EventCraftListViewItem_o *this,
        System_Collections_Generic_List_EventCraftPickupInfo__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PickupInfoList_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._PickupInfoList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventCraftListViewItem__set_PossessionNum(
        EventCraftListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PossessionNum_k__BackingField = value;
}


void __fastcall EventCraftListViewItem__set_TradeInfo(
        EventCraftListViewItem_o *this,
        EventTradeInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TradeInfo_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._TradeInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventCraftListViewItem__set_UserTradeEntity(
        EventCraftListViewItem_o *this,
        UserEventTradeEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserTradeEntity_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._UserTradeEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventCraftListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE0409 & 1) == 0 )
  {
    sub_1C21E38(&EventCraftListViewItem___c_TypeInfo);
    byte_4BE0409 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventCraftListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventCraftListViewItem___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewItem___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventCraftListViewItem___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventCraftListViewItem___c___ctor(EventCraftListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventCraftListViewItem___c___IsUsedSupportTool_b__58_0(
        EventCraftListViewItem___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.endedAt;
}


bool __fastcall EventCraftListViewItem___c___get_IsBuyAble_b__45_0(
        EventCraftListViewItem___c_o *this,
        CommonConsumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return CommonConsumeEntity__GetUserBuyableNum(x, 0LL) < 1;
}


void __fastcall EventCraftListViewItem___c__DisplayClass35_0___ctor(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCraftListViewItem___c__DisplayClass35_0____ctor_b__0(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0LL )
    sub_1C22094(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}


bool __fastcall EventCraftListViewItem___c__DisplayClass35_0____ctor_b__1(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0LL )
    sub_1C22094(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}