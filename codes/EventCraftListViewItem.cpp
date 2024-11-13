// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewItem___ctor(
        EventCraftListViewItem_o *this,
        int32_t index,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        ItemEntity_o *supportItem,
        int32_t eventId,
        System_Action_o *updateReceiveAllButton,
        const MethodInfo *method)
{
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
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x24
  int64_t UserId; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x20
  struct EventTradeGoodsEntity_o *v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  const MethodInfo *v70; // x1
  __int64 v71; // x1
  int64_t v72; // x2
  __int64 v73; // x3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x22
  System_Func_object__bool__o *v80; // x23
  Il2CppObject *v81; // x1
  __int64 v82; // x1
  int64_t v83; // x2
  __int64 v84; // x3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct UserEventTradeEntity_o *v89; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x22
  System_Func_object__bool__o *v91; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  Il2CppObject *Master_object; // x22
  int32_t id; // w3
  int32_t num; // w8
  int32_t EventId_k__BackingField; // w9
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  Il2CppObject *v106; // x1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  bool IsOpen; // w0
  Il2CppObject *v115; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B19FB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, *(_QWORD *)&index, tradeGoodsEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___, v23, v24);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v25, v26);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v27, v28);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Func_EventTradeInfo__bool__TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__, v35, v36);
    sub_1BCA7E0(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__, v37, v38);
    sub_1BCA7E0(&EventCraftListViewItem___c__DisplayClass35_0_TypeInfo, v39, v40);
    byte_4B19FB5 = 1;
  }
  entity = 0LL;
  v115 = 0LL;
  v41 = sub_1BCAA2C(
          EventCraftListViewItem___c__DisplayClass35_0_TypeInfo,
          *(_QWORD *)&index,
          tradeGoodsEntity,
          supportItem);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_43;
  *(_QWORD *)(v41 + 16) = tradeGoodsEntity;
  v50 = v41 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), (int64_t)tradeGoodsEntity, v44, v45, v46, v47, v48, v49);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  v51 = *(struct EventTradeGoodsEntity_o **)(v41 + 16);
  this->fields._TradeGoodsEntity_k__BackingField = v51;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TradeGoodsEntity_k__BackingField,
    (int64_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields._SupportTool_k__BackingField = supportItem;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SupportTool_k__BackingField,
    (int64_t)supportItem,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields._EventId_k__BackingField = eventId;
  this->fields._UpdateReceiveAllButtonState_k__BackingField = updateReceiveAllButton;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UpdateReceiveAllButtonState_k__BackingField,
    (int64_t)updateReceiveAllButton,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  EventCraftListViewItem__UpdateCraftUserInfo(this, v70);
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0LL )
  {
    v80 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventTradeInfo__bool__TypeInfo, v71, v72, v73);
    System_Func_object__bool____ctor(
      v80,
      (Il2CppObject *)v41,
      Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__,
      0LL);
    v81 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            tradeList,
            (System_Func_TSource__bool__o *)v80,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v81 = 0LL;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v81;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TradeInfo_k__BackingField,
    (int64_t)v81,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v89 = this->fields._UserTradeEntity_k__BackingField;
  if ( v89 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v89->fields.pickupList) != 0LL )
  {
    v91 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventCraftPickupInfo__bool__TypeInfo, v82, v83, v84);
    System_Func_object__bool____ctor(
      v91,
      (Il2CppObject *)v41,
      Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__,
      0LL);
    v92 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v91,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v93 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v92,
                                                                              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v93 = 0LL;
  }
  this->fields._PickupInfoList_k__BackingField = v93;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._PickupInfoList_k__BackingField,
    (int64_t)v93,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v94);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v95);
  UserId = NetworkManager__get_UserId(0LL);
  if ( supportItem )
  {
    id = supportItem->fields.id;
    if ( !Master_object )
      goto LABEL_43;
  }
  else
  {
    id = 0;
    if ( !Master_object )
      goto LABEL_43;
  }
  UserId = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &entity, UserId, id, 0LL);
  if ( (UserId & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_43;
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
    UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !UserId )
      goto LABEL_43;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
           &v115,
           this->fields._EventId_k__BackingField,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      v106 = v115;
      this->fields.eventEntity = (struct EventEntity_o *)v115;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.eventEntity,
        (int64_t)v106,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*(_QWORD *)v50 )
    goto LABEL_43;
  if ( !UserId )
    goto LABEL_43;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)UserId,
                       *(_DWORD *)(*(_QWORD *)v50 + 40LL),
                       0LL);
  this->fields._CommonConsumeEntityArray_k__BackingField = SortedEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CommonConsumeEntityArray_k__BackingField,
    (int64_t)SortedEntityList,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  if ( !*(_QWORD *)v50 )
    goto LABEL_43;
  if ( !*(_DWORD *)(*(_QWORD *)v50 + 68LL) )
  {
    IsOpen = 1;
    goto LABEL_42;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !*(_QWORD *)v50 || !UserId )
LABEL_43:
    sub_1BCAA3C(UserId, v43);
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)UserId, *(_DWORD *)(*(_QWORD *)v50 + 68LL), 0LL, 0, 0LL);
LABEL_42:
  this->fields._IsRelease_k__BackingField = IsOpen;
}


bool __fastcall EventCraftListViewItem__IsUsedSupportTool(EventCraftListViewItem_o *this, const MethodInfo *method)
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
  __int64 v14; // x3
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x19
  EventCraftListViewItem___c_c *v17; // x0
  System_Func_T__TResult__o *_9__58_0; // x20
  Il2CppObject *v19; // x21
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  __int64 v28; // x1
  int64_t v29; // x19

  if ( (byte_4B19FBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, method, v2);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__long__TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__, v8, v9);
    sub_1BCA7E0(&EventCraftListViewItem___c_TypeInfo, v10, v11);
    byte_4B19FBC = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields._PickupInfoList_k__BackingField, 0LL) )
    return 0;
  PickupInfoList_k__BackingField = this->fields._PickupInfoList_k__BackingField;
  v17 = EventCraftListViewItem___c_TypeInfo;
  if ( !EventCraftListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo, v12);
    v17 = EventCraftListViewItem___c_TypeInfo;
  }
  _9__58_0 = (System_Func_T__TResult__o *)v17->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v12);
      v17 = EventCraftListViewItem___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__58_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_EventCraftPickupInfo__long__TypeInfo, v12, v13, v14);
    System_Func_object__long____ctor(_9__58_0, v19, Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__, 0LL);
    static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__58_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__58_0,
      (int64_t)_9__58_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__Select_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfoList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__58_0,
          (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
  v29 = System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v27, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
  return v29 >= NetworkManager__getTime(0LL);
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
    sub_1BCAA3C(this, sort);
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
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  int64_t v23; // x2
  __int64 v24; // x3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UserEventTradeEntity_o *v29; // x1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  System_Func_object__bool__o *v32; // x21
  Il2CppObject *v33; // x1
  __int64 v34; // x1
  int64_t v35; // x2
  __int64 v36; // x3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct UserEventTradeEntity_o *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x20
  System_Func_object__bool__o *v43; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v45; // x1
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19FB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventTradeMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v10, v11);
    sub_1BCA7E0(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__, v12, v13);
    sub_1BCA7E0(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__, v14, v15);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_EventTradeInfo__bool__TypeInfo, v18, v19);
    byte_4B19FB6 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v21);
  if ( UserEventTradeMaster__TryGetEntity(
         (UserEventTradeMaster_o *)Master_object,
         &entity,
         this->fields._EventId_k__BackingField,
         0LL) )
  {
    v29 = entity;
    this->fields._UserTradeEntity_k__BackingField = entity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._UserTradeEntity_k__BackingField,
      (int64_t)v29,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0LL )
  {
    v32 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventTradeInfo__bool__TypeInfo, v22, v23, v24);
    System_Func_object__bool____ctor(
      v32,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__,
      0LL);
    v33 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            tradeList,
            (System_Func_TSource__bool__o *)v32,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v33 = 0LL;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v33;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TradeInfo_k__BackingField,
    (int64_t)v33,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v41 = this->fields._UserTradeEntity_k__BackingField;
  if ( v41 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v41->fields.pickupList) != 0LL )
  {
    v43 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventCraftPickupInfo__bool__TypeInfo, v34, v35, v36);
    System_Func_object__bool____ctor(
      v43,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__,
      0LL);
    v44 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v45 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v44,
                                                                              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v45 = 0LL;
  }
  this->fields._PickupInfoList_k__BackingField = v45;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._PickupInfoList_k__BackingField,
    (int64_t)v45,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
    sub_1BCAA3C(this, info);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


bool __fastcall EventCraftListViewItem___UpdateCraftUserInfo_b__36_1(
        EventCraftListViewItem_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1BCAA3C(this, info);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x19
  EventCraftListViewItem___c_c *v15; // x0
  System_Func_object__bool__o *_9__45_0; // x20
  Il2CppObject *v17; // x21
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B19FB9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_CommonConsumeEntity___, method, v2);
    sub_1BCA7E0(&System_Func_CommonConsumeEntity__bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__, v6, v7);
    sub_1BCA7E0(&EventCraftListViewItem___c_TypeInfo, v8, v9);
    byte_4B19FB9 = 1;
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
    v15 = EventCraftListViewItem___c_TypeInfo;
    if ( !EventCraftListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo, v10);
      v15 = EventCraftListViewItem___c_TypeInfo;
    }
    _9__45_0 = (System_Func_object__bool__o *)v15->static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15, v10);
        v15 = EventCraftListViewItem___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__45_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_CommonConsumeEntity__bool__TypeInfo,
                                                  v10,
                                                  v11,
                                                  v12);
      System_Func_object__bool____ctor(_9__45_0, v17, Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__, 0LL);
      static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__45_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__45_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
        (int64_t)_9__45_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    return !BasicHelper__Any_object__49274176(
              (System_Object_array *)CommonConsumeEntityArray_k__BackingField,
              (System_Func_T__bool__o *)_9__45_0,
              (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_CommonConsumeEntity___);
  }
}


bool __fastcall EventCraftListViewItem__get_IsEventEnd(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x0
  __int64 v5; // x1
  struct EventEntity_o *eventEntity; // x8

  if ( (byte_4B19FB7 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B19FB7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_1BCAA3C(Time, v5);
  return Time >= eventEntity->fields.endedAt;
}


bool __fastcall EventCraftListViewItem__get_IsRefillable(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  int32_t NowTradeNum; // w0
  __int64 v8; // x1
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x20
  int32_t v11; // w19

  if ( (byte_4B19FBB & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, method, v2);
    byte_4B19FBB = 1;
  }
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField
    || TradeInfo_k__BackingField->fields.getNum > 0
    || EventCraftListViewItem__get_NowCompleteNum(this, method) > 0
    || !EventCraftListViewItem__get_IsBuyAble(this, v5) )
  {
    return 0;
  }
  NowTradeNum = EventCraftListViewItem__get_NowTradeNum(this, v6);
  PickupInfoList_k__BackingField = this->fields._PickupInfoList_k__BackingField;
  TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField;
  v11 = NowTradeNum;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v8);
  return v11 < EventCraftTimeCalculation__GetCraftMaxNum(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  int64_t Time; // x20

  if ( (byte_4B19FBA & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B19FBA = 1;
  }
  if ( !this->fields._TradeInfo_k__BackingField )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v6);
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
    sub_1BCAA3C(NowCompleteNum, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _BOOL8 IsEventEnd; // x0
  __int64 v13; // x1
  System_String_o *v14; // x19
  Il2CppObject *v15; // x0
  System_String_o *RestTime2; // x0
  __int64 v17; // x1
  struct EventEntity_o *eventEntity; // x8
  int64_t endedAt; // x19
  __int64 v20; // x1
  int64_t Time; // x20
  Il2CppObject *v22; // x19
  System_String_o *v23; // x0
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19FB8 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_13473/*"TIME_REST2_MINUTES"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_13562/*"TRADE_EVENT_REST_TIME_LABEL"*/, v10, v11);
    byte_4B19FB8 = 1;
  }
  IsEventEnd = EventCraftListViewItem__get_IsEventEnd(this, method);
  if ( IsEventEnd )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13473/*"TIME_REST2_MINUTES"*/, 0LL);
    v25 = 0;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    RestTime2 = System_String__Format(v14, v15, 0LL);
  }
  else
  {
    eventEntity = this->fields.eventEntity;
    if ( !eventEntity )
      sub_1BCAA3C(IsEventEnd, v13);
    endedAt = eventEntity->fields.endedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    Time = NetworkManager__getTime(0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    RestTime2 = LocalizationManager__GetRestTime2(endedAt, Time, 0LL);
  }
  v22 = (Il2CppObject *)RestTime2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13562/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0LL);
  return System_String__Format(v23, v22, 0LL);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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

  if ( (byte_4B19FBD & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftListViewItem___c_TypeInfo, v1, v2);
    byte_4B19FBD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventCraftListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventCraftListViewItem___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventCraftListViewItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.endedAt;
}


bool __fastcall EventCraftListViewItem___c___get_IsBuyAble_b__45_0(
        EventCraftListViewItem___c_o *this,
        CommonConsumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}


bool __fastcall EventCraftListViewItem___c__DisplayClass35_0____ctor_b__1(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0LL )
    sub_1BCAA3C(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}