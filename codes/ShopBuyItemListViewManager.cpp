void ShopBuyItemListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v9; // x20
  struct ShopBuyItemListViewManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59346D0 & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&ShopBuyItemListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6553/*"ExchangeSvtCoinShop"*/);
    byte_59346D0 = 1;
  }
  v7 = StringLiteral_6553/*"ExchangeSvtCoinShop"*/;
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6553/*"ExchangeSvtCoinShop"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ShopBuyItemListViewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v9 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v9, SORT_SAVE_KEY, 27, 0, 0);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->exchangeSvtCoinSortInfo,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_E949E0;
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816;
  this->fields.listInDelay = 0.1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ShopBuyItemListViewManager__ChangeFilter(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 filterStatus; // x8
  int32_t v4; // w20
  int32_t eventId; // w0
  int32_t targetSlot; // w1

  filterStatus = (unsigned int)this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 2 )
    this->fields.filterStatus = dword_ED028C[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v4 = this->fields.filterStatus;
  if ( !byte_593282F )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282F = 1;
  }
  eventId = this->fields.eventId;
  targetSlot = this->fields.targetSlot;
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v4;
  EventRewardSaveData__SaveItemFilter(eventId, targetSlot, 0);
}


void ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  ShopBuyItemListViewManager___c_c *v6; // x8
  System_Collections_Generic_List_object__o *v7; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v10; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59346B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ShopBuyItemListViewObject__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__);
    sub_21FFC50(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_59346B1 = 1;
  }
  ObjectList = ShopBuyItemListViewManager__get_ObjectList(this, method);
  v6 = ShopBuyItemListViewManager___c_TypeInfo;
  v7 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( !*(&ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo, v4, v5);
    v6 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__51_0 = (System_Action_object__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_ShopBuyItemListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__51_0,
      v10,
      Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__,
      0);
    v11 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    v11->__9__51_0 = (struct System_Action_ShopBuyItemListViewObject__o *)_9__51_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__51_0, (int32_t)_9__51_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !v7 )
    sub_21FFECC(ObjectList, v4);
  System_Collections_Generic_List_object___ForEach(
    v7,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
}


void ShopBuyItemListViewManager__CheckUpdateEventRewardList(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_59346B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59346B8 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0)) == 0
    || (itemList = this->fields.itemList) == 0 )
  {
    sub_21FFECC(Instance, v12);
  }
  if ( itemList->fields._size != LODWORD(Instance->max_length) )
    ShopBuyItemListViewManager__CreateList_41930296(this, 6, eventId, slot, eventNum, isForcedAdjustment, 0, v13);
}


AlphaTransitionCalculator_o *ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  float v2; // s8
  System_Func_float__float__float__float__o *v3; // x19
  AlphaTransitionCalculator_o *v4; // x20

  if ( (byte_59346B0 & 1) == 0 )
  {
    sub_21FFC50(&AlphaTransitionCalculator_TypeInfo);
    byte_59346B0 = 1;
  }
  v2 = ChangedFPSUtil__CovertFrameNumToSecond(7, 0);
  v3 = ExtraEasing__AsymptoticSeriesFloat(0.5, 7.0, 0);
  v4 = (AlphaTransitionCalculator_o *)sub_21FFEBC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v4, v2, v3, 0);
  return v4;
}


void ShopBuyItemListViewManager__CreateEventRewardList(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x7

  ShopBuyItemListViewManager__CreateList_41930296(this, 6, eventId, slot, eventNum, isForcedAdjustment, 0, v6);
}


void ShopBuyItemListViewManager__CreateExRoomAllList(
        ShopBuyItemListViewManager_o *this,
        System_Collections_Generic_List_ShopEntity__o *shopEntities,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7
  long double v4; // q0
  System_Object_array *v7; // x0
  ShopEntity_array *klass; // x6
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x0

  if ( (byte_59346B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_ShopEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    byte_59346B3 = 1;
  }
  if ( !shopEntities
    || (v7 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)shopEntities,
               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__),
        (klass = (ShopEntity_array *)v7) == 0) )
  {
    v9 = Method_System_Array_Empty_ShopEntity___;
    v10 = *((_QWORD *)Method_System_Array_Empty_ShopEntity___ + 7);
    if ( !v10 )
    {
      sub_2237B54(Method_System_Array_Empty_ShopEntity___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_2237AF8(v4);
    if ( !*(_DWORD *)(v11 + 228) )
      *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v11, shopEntities, method);
    v7 = *(System_Object_array **)(v9[7] + 16LL);
    if ( (*(_WORD *)((_BYTE *)&v7->m_Items[34] + 5) & 1) == 0 )
      v7 = (System_Object_array *)sub_2237AF8(v4);
    klass = (ShopEntity_array *)v7->m_Items[19]->klass;
  }
  if ( !this )
    sub_21FFECC(v7, shopEntities);
  ShopBuyItemListViewManager__CreateList_41930296(this, 24, 0, 0, 0, 0, klass, v3);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewManager__CreateExchangeSvtCoinList(
        ShopBuyItemListViewManager_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ShopBuyItemListViewManager_c *v10; // x0
  struct ListViewSort_o *exchangeSvtCoinSortInfo; // x1
  __int64 v12; // x1
  ListViewSort_o *sort; // x0
  const MethodInfo *v14; // x7
  const MethodInfo *v15; // x1

  if ( (byte_59346B2 & 1) == 0 )
  {
    sub_21FFC50(&ShopBuyItemListViewManager_TypeInfo);
    byte_59346B2 = 1;
  }
  v10 = ShopBuyItemListViewManager_TypeInfo;
  if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&svtCoinType, method);
    v10 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v10->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)exchangeSvtCoinSortInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v12);
  ListViewSort__Load(sort, 0);
  ShopBuyItemListViewManager__CreateList_41930296(this, 22, 0, svtCoinType, 0, 0, 0, v14);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v15);
}


void ShopBuyItemListViewManager__CreateList(ShopBuyItemListViewManager_o *this, int32_t kind, const MethodInfo *method)
{
  const MethodInfo *v3; // x7

  ShopBuyItemListViewManager__CreateList_41930296(this, kind, 0, 0, 0, 0, 0, v3);
}


void ShopBuyItemListViewManager__CreateList_41929616(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  ShopBuyItemListViewManager__CreateList_41930296(this, kind, eventId, slot, eventNum, isForcedAdjustment, 0, v7);
}


void ShopBuyItemListViewManager__CreateList_41930008(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7

  ShopBuyItemListViewManager__CreateList_41930296(this, 6, eventId, 0, 0, 0, 0, v3);
}


void ShopBuyItemListViewManager__CreateList_41930296(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        ShopEntity_array *overrideShopEntities,
        const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v14; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v16; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  System_Int32_array *v20; // x21
  struct ShopCurrencyInfoController_o *currencyInfoController; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x6
  ShopBuyItemListViewManager_o *EnterTime; // x0
  const MethodInfo *v30; // x4
  ShopBuyItemListViewManager_o *v31; // x28
  System_Collections_Generic_List_object__o *v32; // x27
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *Master_object; // x28
  ShopEntity_array *v36; // x22
  Il2CppObject *v37; // x29
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  int max_length; // w8
  int v41; // w23
  ShopBuyItemListViewManager_o *v42; // x26
  int32_t v43; // w19
  ShopEntity_o *v44; // x20
  System_Int32_array *targetIds; // x8
  unsigned __int64 v46; // x21
  unsigned __int64 max_length_low; // x9
  bool v48; // w8
  int32_t purchaseType; // w8
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int v56; // w21
  const MethodInfo *v57; // x3
  System_Collections_Generic_List_object__o *itemList; // x21
  ListViewItem_o *v59; // x22
  const MethodInfo *v60; // x2
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  __int64 v75; // x8
  System_Collections_Generic_List_object__o *v76; // x0
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  int32_t v80; // w20
  System_Collections_Generic_List_object__o *v81; // x24
  int32_t v82; // w25
  Il2CppObject *Item; // x22
  ListViewItem_o *v84; // x21
  const MethodInfo *v85; // x2
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  int32_t v96; // w20
  System_Collections_Generic_List_object__o *v97; // x24
  int32_t v98; // w25
  Il2CppObject *v99; // x22
  ListViewItem_o *v100; // x21
  const MethodInfo *v101; // x2
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v113; // w23
  __int64 v114; // x2
  __int64 v115; // x8
  __int64 v116; // x9
  __int64 v117; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  __int64 v119; // x2
  int32_t v120; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  __int64 v122; // x2
  int32_t v123; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v125; // x0
  __int64 *v126; // x8
  int32_t v127; // w9
  __int64 *v128; // x10
  System_String_o *v129; // x21
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  const MethodInfo *sort; // x1
  _BOOL8 v137; // x0
  const MethodInfo *v138; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v140; // [xsp+8h] [xbp-A8h]
  int32_t v141; // [xsp+Ch] [xbp-A4h]
  int32_t v142; // [xsp+10h] [xbp-A0h]
  int32_t v143; // [xsp+14h] [xbp-9Ch]
  int64_t v144; // [xsp+18h] [xbp-98h]
  ShopEntity_array *ShopEntities; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v147; // [xsp+30h] [xbp-80h]
  bool v148; // [xsp+3Ch] [xbp-74h]
  System_Int32_array *possessionAnotherItemId; // [xsp+40h] [xbp-70h] BYREF
  EventRewardSceneEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59346B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ShopBuyItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_12670/*"SHOP_SPECIAL_LIST_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12620/*"SHOP_LIST_EMPTY"*/);
    sub_21FFC50(&StringLiteral_5927/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    sub_21FFC50(&StringLiteral_5992/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/);
    byte_59346B4 = 1;
  }
  v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  possessionAnotherItemId = 0;
  entity = 0;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v14);
  if ( !Instance )
    goto LABEL_142;
  ShopEntities = overrideShopEntities;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v18);
  v16 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v16 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_142;
    Instance = (DataManager_o *)ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, this->fields.eventId, 0);
    if ( !Instance )
      goto LABEL_142;
    v20 = (System_Int32_array *)Instance;
    currencyInfoController = this->fields.currencyInfoController;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v16);
    if ( !currencyInfoController )
      goto LABEL_142;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&currencyInfoController->fields.objectList,
      (int32_t)Instance,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_142;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v20,
      isForcedAdjustment,
      v28);
    LODWORD(v16) = this->fields.kind;
  }
  v142 = eventNum;
  v140 = kind;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v16,
                                                v19);
  v31 = EnterTime;
  if ( !ShopEntities )
    ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                     EnterTime,
                     this->fields.kind,
                     this->fields.eventId,
                     slot,
                     v30);
  v147 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v147,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33, v34);
  v144 = (int64_t)v31;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopAddMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v36 = ShopEntities;
  if ( !Instance
    || (v37 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___),
        ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v38),
        !ShopEntities) )
  {
LABEL_142:
    sub_21FFECC(Instance, v16);
  }
  max_length = ShopEntities->max_length;
  v141 = slot;
  if ( max_length < 1 )
  {
    v42 = this;
    v148 = 0;
    v43 = 0;
    if ( !v32 )
      goto LABEL_142;
    goto LABEL_69;
  }
  v41 = 0;
  v42 = this;
  v43 = 0;
  v148 = 0;
  do
  {
    if ( v41 >= (unsigned int)max_length )
LABEL_143:
      sub_21FFED4(Instance);
    v44 = v36->m_Items[v41];
    if ( !v44 )
      goto LABEL_142;
    if ( v44->fields.purchaseType == 6 )
    {
      targetIds = v44->fields.targetIds;
      possessionAnotherItemId = targetIds;
      if ( !targetIds )
        goto LABEL_142;
      v46 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(targetIds->max_length);
        if ( (__int64)v46 >= (int)max_length_low )
          break;
        if ( v46 >= max_length_low )
          goto LABEL_143;
        if ( v37 )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v37,
                                        targetIds->m_Items[v46],
                                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_65;
          targetIds = possessionAnotherItemId;
          ++v46;
          if ( possessionAnotherItemId )
            continue;
        }
        goto LABEL_142;
      }
    }
    if ( v148 )
    {
      v48 = 1;
    }
    else
    {
      purchaseType = v44->fields.purchaseType;
      v42->fields.targetSlot = v44->fields.slot;
      v48 = purchaseType == 16;
    }
    v148 = v48;
    if ( !Master_object
      || (Instance = (DataManager_o *)ShopAddMaster__IsItemHidden((ShopAddMaster_o *)Master_object, v44->fields.id, 0),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( ShopEntity__IsSoldOut(v44, 0) && !ShopEntity__GetIsNotHavingShopItemReceived(v44, 0) )
      {
        Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v44, &possessionAnotherItemId, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !v147 )
            goto LABEL_142;
          items = v147->fields._items;
          v78 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v147->fields._version;
          if ( !items )
            goto LABEL_142;
          size = v147->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
          {
            v74 = &items->obj.klass + size;
            v147->fields._size = size + 1;
            goto LABEL_60;
          }
          v75 = v78[4];
          v76 = v147;
          goto LABEL_64;
        }
      }
      Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v44, 0);
      v56 = (int)Instance;
      if ( Master_object && ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (DataManager_o *)ShopAddMaster__IsItemLowerDisp((ShopAddMaster_o *)Master_object, v44->fields.id, 0);
        v56 = (int)Instance;
      }
      if ( Master_object && (v56 & 1) != 0 )
      {
        Instance = (DataManager_o *)ShopAddMaster__IsItemLowerDispCancelled(
                                      (ShopAddMaster_o *)Master_object,
                                      v44->fields.id,
                                      0);
        if ( (v56 & ~(_DWORD)Instance & 1) != 0 )
          goto LABEL_51;
      }
      else if ( (v56 & 1) != 0 )
      {
LABEL_51:
        if ( !v32 )
          goto LABEL_142;
        v71 = v32->fields._items;
        v72 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v32->fields._version;
        if ( !v71 )
          goto LABEL_142;
        v73 = v32->fields._size;
        if ( (unsigned int)v73 < LODWORD(v71->max_length) )
        {
          v74 = &v71->obj.klass + v73;
          v32->fields._size = v73 + 1;
LABEL_60:
          v74[4] = (Il2CppClass *)v44;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v74 + 4), (int32_t)v44, v50, v51, v52, v53, v54, v55);
          goto LABEL_65;
        }
        v75 = v72[4];
        v76 = v32;
LABEL_64:
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)v44,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v75 + 192) + 112LL));
        goto LABEL_65;
      }
      Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v44, 0);
      if ( (int)Instance < 1
        || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(v42, v44, (int32_t)Instance, v57),
            ((unsigned __int8)Instance & 1) == 0) )
      {
        if ( v44->fields.id >= 1 )
        {
          itemList = (System_Collections_Generic_List_object__o *)v42->fields.itemList;
          v143 = v42->fields.kind;
          v59 = (ListViewItem_o *)sub_21FFEBC(ShopBuyItemListViewItem_TypeInfo);
          ListViewItem___ctor_50749276(v59, v43, 0);
          v59[1].fields.sortIndex = v143;
          v59[1].fields.sortValue0 = v144;
          ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v59, v44, v60);
          if ( !itemList )
            goto LABEL_142;
          v67 = itemList->fields._items;
          v68 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !v67 )
            goto LABEL_142;
          v69 = itemList->fields._size;
          if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v59,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            v70 = &v67->obj.klass + v69;
            itemList->fields._size = v69 + 1;
            v70[4] = (Il2CppClass *)v59;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v70 + 4), (int32_t)v59, v61, v62, v63, v64, v65, v66);
          }
          v36 = ShopEntities;
          v42 = this;
          ++v43;
        }
      }
    }
LABEL_65:
    max_length = v36->max_length;
    ++v41;
  }
  while ( v41 < max_length );
  if ( !v32 )
    goto LABEL_142;
LABEL_69:
  if ( v32->fields._size >= 1 )
  {
    v80 = 0;
    do
    {
      v81 = (System_Collections_Generic_List_object__o *)v42->fields.itemList;
      v82 = v42->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               v80,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v84 = (ListViewItem_o *)sub_21FFEBC(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_50749276(v84, v43 + v80, 0);
      v84[1].fields.sortIndex = v82;
      v84[1].fields.sortValue0 = v144;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v84, (ShopEntity_o *)Item, v85);
      if ( !v81 )
        goto LABEL_142;
      v92 = v81->fields._items;
      v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v81->fields._version;
      if ( !v92 )
        goto LABEL_142;
      v94 = v81->fields._size;
      if ( (unsigned int)v94 >= LODWORD(v92->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v81,
          (Il2CppObject *)v84,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v95 = &v92->obj.klass + v94;
        v81->fields._size = v94 + 1;
        v95[4] = (Il2CppClass *)v84;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v95 + 4), (int32_t)v84, v86, v87, v88, v89, v90, v91);
      }
      ++v80;
    }
    while ( v80 < v32->fields._size );
    v43 += v80;
  }
  Instance = (DataManager_o *)v147;
  if ( !v147 )
    goto LABEL_142;
  if ( v147->fields._size >= 1 )
  {
    v96 = 0;
    do
    {
      v97 = (System_Collections_Generic_List_object__o *)v42->fields.itemList;
      v98 = v42->fields.kind;
      v99 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Instance,
              v96,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v100 = (ListViewItem_o *)sub_21FFEBC(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_50749276(v100, v43 + v96, 0);
      v100[1].fields.sortIndex = v98;
      v100[1].fields.sortValue0 = v144;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v100, (ShopEntity_o *)v99, v101);
      if ( !v97 )
        goto LABEL_142;
      v108 = v97->fields._items;
      v109 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v97->fields._version;
      if ( !v108 )
        goto LABEL_142;
      v110 = v97->fields._size;
      if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v97,
          (Il2CppObject *)v100,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
      }
      else
      {
        v111 = &v108->obj.klass + v110;
        v97->fields._size = v110 + 1;
        v111[4] = (Il2CppClass *)v100;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v111 + 4), (int32_t)v100, v102, v103, v104, v105, v106, v107);
      }
      Instance = (DataManager_o *)v147;
    }
    while ( ++v96 < v147->fields._size );
  }
  if ( v42->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)v42->fields.scrollBar;
    v113 = v141;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v39);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      Instance = (DataManager_o *)v42->fields.scrollBar;
      if ( !Instance )
        goto LABEL_142;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_142;
      v115 = 348;
      if ( v142 == 1 )
      {
        v115 = 336;
        v116 = 332;
      }
      else
      {
        v116 = 344;
      }
      if ( v142 == 1 )
        v117 = 328;
      else
        v117 = 340;
      v151.fields.z = *(float *)((char *)&v42->klass + v115);
      v151.fields.y = *(float *)((char *)&v42->klass + v116);
      v151.fields.x = *(float *)((char *)&v42->klass + v117);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v151, 0);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)v42->fields.scrollbarBgSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v114);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0, 0) )
    {
      Instance = (DataManager_o *)v42->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_142;
      if ( v142 == 1 )
        v120 = 338;
      else
        v120 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v120, 0);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)v42->fields.scrollbarForeSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v119);
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0, 0) )
    {
      Instance = (DataManager_o *)v42->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_142;
      if ( v142 == 1 )
        v123 = 348;
      else
        v123 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v123, 0);
    }
    emptyMessageLabel = v42->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v122);
    v125 = (System_String_o *)StringLiteral_5927/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/;
  }
  else
  {
    v126 = (__int64 *)&StringLiteral_12670/*"SHOP_SPECIAL_LIST_EMPTY"*/;
    v127 = v42->fields.kind;
    v128 = (__int64 *)&StringLiteral_5992/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
    emptyMessageLabel = v42->fields.emptyMessageLabel;
    v113 = v141;
    if ( v127 != 22 )
      v128 = &StringLiteral_12620/*"SHOP_LIST_EMPTY"*/;
    if ( v127 != 12 )
      v126 = v128;
    v129 = (System_String_o *)*v126;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v39);
    v125 = v129;
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v125, 0);
  if ( !emptyMessageLabel )
    goto LABEL_142;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  sort = (const MethodInfo *)v42->fields.sort;
  if ( sort )
  {
    v42->fields.baseSortInfo = (struct ListViewSort_o *)sort;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v42->fields.baseSortInfo,
      (int32_t)sort,
      v130,
      v131,
      v132,
      v133,
      v134,
      v135);
  }
  if ( !v148 )
    goto LABEL_138;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_142;
  v137 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           v42->fields.eventId,
           v42->fields.targetSlot,
           0);
  ItemFilterId_k__BackingField = 0;
  if ( v137 && entity )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v137, v42->fields.filterBtn, 1, v138);
      EventRewardSaveData__LoadItemFilter(v42->fields.eventId, v42->fields.targetSlot, 0);
      if ( !byte_5932830 )
      {
        sub_21FFC50(&EventRewardSaveData_TypeInfo);
        byte_5932830 = 1;
      }
      ItemFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
      goto LABEL_139;
    }
LABEL_138:
    ItemFilterId_k__BackingField = 0;
  }
LABEL_139:
  v42->fields.filterStatus = ItemFilterId_k__BackingField;
  ShopBuyItemListViewManager__SetList(v42, sort);
  if ( v140 == 22 )
    v42->fields.targetExchangeSvtCoinFolder = v113;
  ListViewManager__SortItem((ListViewManager_o *)v42, -1, 0, 3, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)v42, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewManager__EndSelectFilterKind(
        ShopBuyItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_59346CD & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59346CD = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_41942456(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_21FFECC(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewManager__FocusTopItem(
        ShopBuyItemListViewManager_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  int v6; // w8
  TerminalPramsManager_c *v7; // x0
  unsigned int IndexByTargetId; // w0
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0

  if ( (byte_59346B5 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59346B5 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&state, method);
  if ( !byte_593472B )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593472B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&state, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_ShopFocusItemId_k__BackingField >= 1 )
  {
    v6 = *(&v5->_2.cctor_finished + 1);
    if ( state == 22 )
    {
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&state, method);
      if ( !byte_593472B )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593472B = 1;
      }
      v7 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&state, method);
        v7 = TerminalPramsManager_TypeInfo;
      }
      IndexByTargetId = ShopBuyItemListViewManager__GetIndexByTargetId(
                          this,
                          v7->static_fields->_ShopFocusItemId_k__BackingField,
                          method);
    }
    else
    {
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&state, method);
      if ( !byte_593472B )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593472B = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&state, method);
        v10 = TerminalPramsManager_TypeInfo;
      }
      IndexByTargetId = ShopBuyItemListViewManager__GetIndexByItemId(
                          this,
                          v10->static_fields->_ShopFocusItemId_k__BackingField,
                          method);
    }
    v11 = IndexByTargetId;
    if ( (IndexByTargetId & 0x80000000) == 0 )
      ListViewManager__SetTopItem((ListViewManager_o *)this, IndexByTargetId, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v9);
    if ( !byte_593472C )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593472C = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v9);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_ShopFocusItemId_k__BackingField = 0;
  }
}


int32_t ShopBuyItemListViewManager__GetAlphaAnimCnt(
        ShopBuyItemListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


int32_t ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_ED0298[state - 2];
}


int32_t ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_ED02EC[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_59346B6 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59346B6 = 1;
  }
  if ( (unsigned int)kind > 0x18 || ((1 << kind) & 0x1000304) == 0 )
    return -1;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&kind, method);
  return NetworkManager__getTime(0);
}


int32_t ShopBuyItemListViewManager__GetIndexByItemId(
        ShopBuyItemListViewManager_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t result; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__bool__o *v10; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x21
  System_Predicate_object__o *v12; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v13; // x19
  System_Predicate_object__o *v14; // x21

  if ( (byte_59346BE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_ListViewItem___);
    sub_21FFC50(&System_Func_ListViewItem__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_21FFC50(&System_Predicate_ListViewItem__TypeInfo);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__DisplayClass71_0__GetIndexByItemId_b__0__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__DisplayClass71_0__GetIndexByItemId_b__1__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__DisplayClass71_0__GetIndexByItemId_b__2__);
    sub_21FFC50(&ShopBuyItemListViewManager___c__DisplayClass71_0_TypeInfo);
    byte_59346BE = 1;
  }
  v5 = sub_21FFEBC(ShopBuyItemListViewManager___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass71_0__GetIndexByItemId_b__0__,
    0);
  if ( System_Linq_Enumerable__Count_object__59013780(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)v10,
         (const MethodInfo_3847A94 *)Method_System_Linq_Enumerable_Count_ListViewItem___) < 2 )
    goto LABEL_11;
  v11 = this->fields.itemList;
  v12 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass71_0__GetIndexByItemId_b__2__,
    0);
  if ( !v11 )
    goto LABEL_13;
  result = System_Collections_Generic_List_object___FindIndex(
             (System_Collections_Generic_List_object__o *)v11,
             (System_Predicate_T__o *)v12,
             (const MethodInfo_4450380 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( result < 0 )
  {
LABEL_11:
    v13 = this->fields.itemList;
    v14 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_ShopBuyItemListViewManager___c__DisplayClass71_0__GetIndexByItemId_b__1__,
      0);
    if ( v13 )
      return System_Collections_Generic_List_object___FindIndex(
               (System_Collections_Generic_List_object__o *)v13,
               (System_Predicate_T__o *)v14,
               (const MethodInfo_4450380 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
LABEL_13:
    sub_21FFECC(v6, v7);
  }
  return result;
}


int32_t ShopBuyItemListViewManager__GetIndexByTargetId(
        ShopBuyItemListViewManager_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Predicate_object__o *v10; // x20

  if ( (byte_59346BF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_21FFC50(&System_Predicate_ListViewItem__TypeInfo);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__DisplayClass72_0__GetIndexByTargetId_b__0__);
    sub_21FFC50(&ShopBuyItemListViewManager___c__DisplayClass72_0_TypeInfo);
    byte_59346BF = 1;
  }
  v5 = sub_21FFEBC(ShopBuyItemListViewManager___c__DisplayClass72_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_DWORD *)(v5 + 16) = targetId;
  if ( targetId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v10 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass72_0__GetIndexByTargetId_b__0__,
    0);
  if ( !itemList )
LABEL_9:
    sub_21FFECC(v6, v7);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v10,
           (const MethodInfo_4450380 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
}


float ShopBuyItemListViewManager__GetInvokeDelay(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  float result; // s0

  if ( initMode == 1 )
    return this->fields.listInDelay + 0.5;
  result = 0.0;
  if ( (unsigned int)(initMode - 5) >= 0xFFFFFFFE )
    return 0.6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool ShopBuyItemListViewManager__GetIsShowEventItemWindow(int32_t state, int32_t eventId, const MethodInfo *method)
{
  int v5; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  int32_t PayType; // w0

  if ( (byte_59346CB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&ShopBuyItemListViewManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59346CB = 1;
  }
  if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&eventId, method);
  v5 = ShopBuyItemListViewManager__GetBuyItemKind(state, *(const MethodInfo **)&eventId) - 2;
  result = 1;
  switch ( v5 )
  {
    case 0:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
    case 12:
    case 14:
    case 16:
    case 18:
    case 19:
    case 21:
      return result;
    case 4:
    case 13:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
      {
        sub_21FFECC(Instance, v8);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0);
      if ( EventItemList && EventItemList->max_length )
        goto LABEL_14;
      if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v10, v11);
      PayType = ShopBuyItemListViewManager__GetPayType(eventId, v10);
      if ( PayType == 4 )
LABEL_14:
        result = 1;
      else
        result = (unsigned int)(PayType - 8) < 3;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


ShopBuyItemListViewItem_o *ShopBuyItemListViewManager__GetItem(
        ShopBuyItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_59346BD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ShopBuyItemListViewItem_TypeInfo);
    byte_59346BD = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ShopBuyItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


float ShopBuyItemListViewManager__GetObjectInitDelay(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  float result; // s0

  result = 0.0;
  if ( (unsigned int)(initMode - 3) < 2 || initMode == 1 )
    return 0.1;
  return result;
}


int32_t ShopBuyItemListViewManager__GetObjectInitMode(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( initMode == 5 )
    v3 = 7;
  else
    v3 = 2;
  if ( initMode == 2 )
    return 3;
  else
    return v3;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopBuyItemListViewObject__o *ShopBuyItemListViewManager__GetObjectList(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19

  if ( (byte_59346C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    byte_59346C5 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v6;
}


int32_t ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  ShopEntity_o *v5; // x8

  if ( (byte_59346C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59346C8 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, eventId, 0);
  if ( !Instance )
    goto LABEL_10;
  if ( SLODWORD(Instance->max_length) >= 1 )
  {
    v5 = Instance->m_Items[0];
    if ( v5 )
      return v5->fields.payType;
LABEL_10:
    sub_21FFECC(Instance, v4);
  }
  return 11;
}


ShopEntity_array *ShopBuyItemListViewManager__GetShopEntities(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w1
  int32_t v11; // w2

  if ( (byte_59346B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59346B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_21FFECC(Instance, v9);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 2;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 6:
      if ( !Instance )
        goto LABEL_41;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0);
    case 7:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 6;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 8:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 7;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 9:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 3;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 10:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 4;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 11:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 5;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 12:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 9;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 13:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 10;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 14:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 11;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 15:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 12;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 16:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 13;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 18:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 14;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 20:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 15;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 21:
      if ( !Instance )
        goto LABEL_41;
      v10 = 0;
      v11 = 16;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    case 22:
      if ( !Instance )
        goto LABEL_41;
      return ShopMaster__GetEnableExchangeSvtCoinEntitiyList((ShopMaster_o *)Instance, slot, 0);
    case 23:
      if ( !Instance )
        goto LABEL_41;
      v10 = 23;
      v11 = 18;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v10, v11, 0);
    default:
      return 0;
  }
}


void ShopBuyItemListViewManager__InvalidateList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v4; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Item; // x21
  bool v8; // w0
  __int64 v9; // x2
  Il2CppObject *Component_object; // x21

  if ( (byte_59346BC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59346BC = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_21FFECC(objectList, method);
  v4 = 0;
  while ( v4 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v4,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
    Component_object = 0;
    if ( v8 )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_18;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v4,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v9);
    objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                (UnityEngine_Object_o *)Component_object,
                                                                0,
                                                                0);
    if ( ((unsigned __int8)objectList & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_18;
      ShopBuyItemListViewObject__SetupDisp((ShopBuyItemListViewObject_o *)Component_object, method);
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v4;
    if ( !objectList )
      goto LABEL_18;
  }
}


bool ShopBuyItemListViewManager__ModifyEventRewardList(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return ShopBuyItemListViewManager__ModifyList_41941472(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void ShopBuyItemListViewManager__ModifyFilterList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  int32_t eventCount; // w21
  int32_t targetSlot; // w22
  int32_t eventId; // w23
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v10; // x7
  const MethodInfo *v11; // x2

  if ( (byte_59346B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59346B9 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0),
        !Entity) )
  {
    sub_21FFECC(Instance, v4);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0);
  ShopBuyItemListViewManager__CreateList_41930296(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    0,
    v10);
  ShopBuyItemListViewManager__SetMode_41942456(this, 2, v11);
}


bool ShopBuyItemListViewManager__ModifyItem(
        ShopBuyItemListViewManager_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w22
  const MethodInfo *v9; // x2
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *klass; // x8

  if ( (byte_59346BB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ShopBuyItemListViewItem_TypeInfo);
    byte_59346BB = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_21FFECC(itemList, shopEntity);
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v8,
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ShopBuyItemListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewItem_TypeInfo )
      {
        goto LABEL_13;
      }
      klass = itemList[3].klass;
      if ( klass )
      {
        if ( LODWORD(klass->_1.name) == shopId )
          break;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v8;
      if ( !itemList )
        goto LABEL_13;
    }
    ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)itemList, shopEntity, v9);
  }
  return 1;
}


bool ShopBuyItemListViewManager__ModifyList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  return ShopBuyItemListViewManager__ModifyList_41941472(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


bool ShopBuyItemListViewManager__ModifyList_41941472(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x7
  DataManager_o *v19; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w8
  ShopBuyItemListViewManager_o *v22; // x0
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w4
  bool v27; // w5
  System_Int32_array *EventItemList; // x26
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v31; // x27
  const MethodInfo *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  ShopCurrencyInfoController_o *v39; // x28
  _BOOL4 isEventShop; // w29
  const MethodInfo *v41; // x6
  const MethodInfo *v42; // x3
  int m_CancellationTokenSource; // w8
  unsigned int v44; // w27
  DataManager_c **v45; // x8
  ShopEntity_o *v46; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v48; // x3

  if ( (byte_59346BA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59346BA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)ShopBuyItemListViewManager__GetShopEntities(
                                (ShopBuyItemListViewManager_o *)MasterData_object,
                                kind,
                                0,
                                0,
                                v16);
  v19 = Instance;
  if ( kind == 6 )
  {
    if ( MasterData_object )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, eventId, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v31 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v32);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&currencyInfoController->fields.objectList,
              (int32_t)Instance,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            if ( v31 )
            {
              v39 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v31, 0);
              if ( v39 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v39,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  (unsigned __int8)Instance & 1,
                  v41);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_21FFECC(Instance, v14);
  }
  if ( kind != 12 && kind != 7 )
  {
LABEL_19:
    if ( !v19 )
      return 1;
    goto LABEL_20;
  }
  if ( !Instance )
    goto LABEL_31;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  size = itemList->fields._size;
  if ( size < 1 || size == LODWORD(Instance->fields.m_CancellationTokenSource) )
  {
LABEL_20:
    ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v17);
    m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= m_CancellationTokenSource )
          sub_21FFED4(Instance);
        v45 = &v19->klass + (int)v44;
        v46 = (ShopEntity_o *)v45[4];
        if ( !v46 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      (ShopEntity_o *)v45[4],
                                      v46->fields.id,
                                      v42);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v46, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v46, 0);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v46, PurchaseShop, v48);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
        if ( (int)++v44 >= m_CancellationTokenSource )
          return 1;
      }
      v27 = isForcedAdjustment;
      v22 = this;
      v23 = kind;
      v24 = eventId;
      v25 = slot;
      v26 = eventNum;
      goto LABEL_30;
    }
    return 1;
  }
  v22 = this;
  v23 = kind;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
LABEL_30:
  ShopBuyItemListViewManager__CreateList_41930296(v22, v23, v24, v25, v26, v27, 0, v18);
  return 0;
}


void ShopBuyItemListViewManager__OnClickFilterKind(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_59346CC & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59346CC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_21FFECC(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 15, sort, v8, 0, 0);
  }
}


void ShopBuyItemListViewManager__OnClickListView(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o *onClickListViewItem; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x1

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onClickListViewItem,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))onClickListViewItem->fields.invoke_impl)(
      onClickListViewItem->fields.method_code,
      Index,
      onClickListViewItem->fields.method);
  }
}


void ShopBuyItemListViewManager__OnMoveEnd(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  ShopBuyItemListViewManager_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  char v10; // w20
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  UnityEngine_Object_o *scrollView; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_59346C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59346C7 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
      if ( this->fields.initMode == 1 )
      {
        v10 = 1;
        ShopBuyItemListViewManager__SetScrollBarActive(v6, this->fields.scrollBar, 1, v9);
        itemSortList = this->fields.itemSortList;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( itemSortList )
          v10 = itemSortList->fields._size < 1;
        if ( !emptyMessageBase )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive(emptyMessageBase, v10, 0);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_16;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.element_class)(
          emptyMessageBase,
          1,
          emptyMessageBase->klass[1]._1.castClass);
LABEL_16:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd, 0, v15, v16, v17, v18, v19, v20);
          ((void (__fastcall *)(intptr_t, intptr_t))onMoveEnd->fields.invoke_impl)(
            onMoveEnd->fields.method_code,
            onMoveEnd->fields.method);
        }
        return;
      }
LABEL_18:
      sub_21FFECC(emptyMessageBase, v11);
    }
  }
}


void ShopBuyItemListViewManager__RequestListObject(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int v5; // w23
  int32_t v6; // w21
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  float v9; // s0
  int v10; // w9
  float v11; // s8
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w20
  Il2CppObject *Item; // x23
  System_Action_o *v16; // x24
  const MethodInfo *v17; // x3

  if ( (byte_59346C6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59346C6 = 1;
  }
  if ( initMode > 2 )
  {
    switch ( initMode )
    {
      case 5:
        v5 = 0;
        v6 = 7;
        break;
      case 4:
        v5 = 0;
        v6 = 6;
        break;
      case 3:
        v5 = 0;
        v6 = 5;
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    if ( !initMode )
    {
LABEL_12:
      v5 = 0;
      v6 = 0;
      goto LABEL_16;
    }
    if ( initMode != 1 )
    {
      if ( initMode == 2 )
      {
        v5 = 0;
        v6 = 3;
        goto LABEL_16;
      }
      goto LABEL_12;
    }
    v5 = 1;
    ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
    v6 = 4;
  }
LABEL_16:
  ObjectList = ShopBuyItemListViewManager__GetObjectList(this, initMode, method);
  v9 = 0.0;
  if ( (unsigned int)(initMode - 3) < 2 )
    v10 = 1;
  else
    v10 = v5;
  if ( v10 )
    v11 = 0.1;
  else
    v11 = 0.0;
  if ( !ObjectList )
    goto LABEL_33;
  size = ObjectList->fields._size;
  v13 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               v14,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
      v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      ShopBuyItemListViewObject__Init_41945496((ShopBuyItemListViewObject_o *)Item, v6, v16, v11, v17);
      if ( ++v14 >= v13->fields._size )
        return;
    }
LABEL_33:
    sub_21FFECC(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  if ( (v5 & 1) != 0 )
  {
    v9 = this->fields.listInDelay + 0.5;
  }
  else if ( (unsigned int)(initMode - 5) >= 0xFFFFFFFE )
  {
    v9 = 0.6;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/, v9, 0);
}


void ShopBuyItemListViewManager__SetDragMaskStart(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewManager__SetEmptyMessageBaseUnEnable(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyMessageBase; // x0

  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
  {
    emptyMessageBase = this->fields.emptyMessageBase;
    if ( !emptyMessageBase )
      sub_21FFECC(0, *(_QWORD *)&initMode);
    UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewManager__SetFilterActive(
        ShopBuyItemListViewManager_o *this,
        UICommonButton_o *filterBtn,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_59346C4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59346C4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, filterBtn, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemListViewManager__SetFilterButtonImage(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *filterSprite; // x20
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *v7; // x19
  System_String_o **v8; // x8

  if ( (byte_59346CE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18217/*"btn_filter_on"*/);
    sub_21FFC50(&StringLiteral_18216/*"btn_filter"*/);
    byte_59346CE = 1;
  }
  filterSprite = (UnityEngine_Object_o *)this->fields.filterSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(filterSprite, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort
      || (v7 = this->fields.filterSprite, sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0), !v7) )
    {
      sub_21FFECC(sort, v5);
    }
    v8 = (System_String_o **)&StringLiteral_18216/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v8 = (System_String_o **)&StringLiteral_18217/*"btn_filter_on"*/;
    UISprite__set_spriteName(v7, *v8, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewManager__SetFilterId(ShopBuyItemListViewManager_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.filterStatus = id;
  ShopBuyItemListViewManager__SetList(this, *(const MethodInfo **)&id);
}


void ShopBuyItemListViewManager__SetFilterName(
        ShopBuyItemListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UnityEngine_Object_o *filterTxtSprite; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *v8; // x21
  __int64 v9; // x1
  UIWidget_o *v10; // x0

  if ( (byte_59346C3 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardRootComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59346C3 = 1;
  }
  filterTxtSprite = (UnityEngine_Object_o *)this->fields.filterTxtSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetFile, method);
  if ( !UnityEngine_Object__op_Equality(filterTxtSprite, 0, 0) )
  {
    v8 = this->fields.filterTxtSprite;
    if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v6, v7);
    EventRewardRootComponent__setRewardInfoImg(v8, targetFile, 0);
    v10 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v10 || (UIWidget__set_width(v10, 52, 0), (v10 = (UIWidget_o *)this->fields.filterTxtSprite) == 0) )
      sub_21FFECC(v10, v9);
    UIWidget__set_height(v10, 20, 0);
  }
}


void ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *operationSortInfo; // x0
  bool v15; // w2
  bool v16; // w2

  if ( (byte_59346C2 & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&StringLiteral_18345/*"btn_txt_stock_02"*/);
    sub_21FFC50(&StringLiteral_18344/*"btn_txt_stock"*/);
    sub_21FFC50(&StringLiteral_18273/*"btn_txt_all"*/);
    byte_59346C2 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50785372(v4, baseSortInfo, 0);
  this->fields.operationSortInfo = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_18345/*"btn_txt_stock_02"*/, v12);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0), (operationSortInfo = this->fields.operationSortInfo) == 0) )
    {
LABEL_18:
      sub_21FFECC(operationSortInfo, v11);
    }
    v16 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_18344/*"btn_txt_stock"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v15 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_18273/*"btn_txt_all"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v15 = 0;
    }
    ListViewSort__SetFilter(operationSortInfo, 52, v15, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_18;
    v16 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 53, v16, 0);
LABEL_16:
  operationSortInfo = this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_18;
  ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0);
}


void ShopBuyItemListViewManager__SetMode(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (System_String_o *)onClickListViewItem,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_41942456(this, mode, v10);
}


void ShopBuyItemListViewManager__SetMode_41942456(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  unsigned int initMode; // w1
  const MethodInfo *v9; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  initMode = this->fields.initMode;
  if ( initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
    initMode = this->fields.initMode;
  }
  if ( initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
  {
    ShopBuyItemListViewManager__SetScrollBarActive(v5, this->fields.scrollBar, 0, v7);
    initMode = this->fields.initMode;
  }
  ShopBuyItemListViewManager__SetEmptyMessageBaseUnEnable(this, initMode, v6);
  ShopBuyItemListViewManager__RequestListObject(this, this->fields.initMode, v9);
}


void ShopBuyItemListViewManager__SetMode_41943736(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_41942456(this, mode, v11);
}


void ShopBuyItemListViewManager__SetMultiEventScrollInfo(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59346CA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_59346CA = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v8.fields.x = *((float *)scrollView + 74);
  v8.fields.y = *((float *)scrollView + 75);
  v8.fields.w = 400.0;
  v8.fields.z = *((float *)scrollView + 76);
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v8, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0),
        (scrollView = this->fields.scrollView) == 0)
    || (x = localPosition.fields.x,
        z = localPosition.fields.z,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0) )
  {
LABEL_10:
    sub_21FFECC(scrollView, method);
  }
  v7.fields.y = 16.0;
  v7.fields.x = x;
  v7.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v7, 0);
}


void ShopBuyItemListViewManager__SetObjectItem(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t initMode; // w8
  int v8; // w9
  int32_t v9; // w1

  v5 = this;
  if ( (byte_59346C0 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_21FFC50(&ShopBuyItemListViewObject_TypeInfo);
    byte_59346C0 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopBuyItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_21FFECC(this, obj);
  }
  initMode = v5->fields.initMode;
  if ( initMode == 5 )
    v8 = 7;
  else
    v8 = 2;
  if ( initMode == 2 )
    v9 = 3;
  else
    v9 = v8;
  ShopBuyItemListViewObject__Init_41945496((ShopBuyItemListViewObject_o *)obj, v9, 0, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_59346C1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59346C1 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scrollBar, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemListViewManager__SetScrollBarUnEnable(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
    ShopBuyItemListViewManager__SetScrollBarActive(this, this->fields.scrollBar, 0, v3);
}


void ShopBuyItemListViewManager__SetSingleEventScrollInfo(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59346C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_59346C9 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v8.fields.x = *((float *)scrollView + 74);
  v8.fields.y = *((float *)scrollView + 75);
  v8.fields.w = 470.0;
  v8.fields.z = *((float *)scrollView + 76);
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v8, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0),
        (scrollView = this->fields.scrollView) == 0)
    || (x = localPosition.fields.x,
        z = localPosition.fields.z,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0) )
  {
LABEL_10:
    sub_21FFECC(scrollView, method);
  }
  v7.fields.y = 82.0;
  v7.fields.x = x;
  v7.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v7, 0);
}


void ShopBuyItemListViewManager__SetSkillPartsLimit(
        ShopBuyItemListViewManager_o *this,
        bool haveLimit,
        const MethodInfo *method)
{
  this->fields.havePurchaseLimit = haveLimit;
}


void ShopBuyItemListViewManager__SetSkillPartsLimitLabel(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *skillPartsLimitLabel; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *gameObject; // x22
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x21
  System_Func_object__bool__o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x19
  int max_length; // w8
  CommonReleaseMaster_o *v21; // x23
  int v22; // w19
  Il2CppObject *v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EntitiyList; // x24
  ShopBuyItemListViewManager___c_c *v27; // x8
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__108_2; // x25
  Il2CppObject *v30; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  __int128 v39; // q0
  __int64 v40; // x1
  __int64 condValue; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_IEnumerable_TSource__o *List; // x24
  ShopBuyItemListViewManager___c_c *v45; // x0
  struct ShopBuyItemListViewManager___c_StaticFields *v46; // x8
  System_Func_object__bool__o *_9__108_3; // x25
  Il2CppObject *v48; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x22
  System_Object_array *v57; // x10
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v59; // x21
  Il2CppObject *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  System_Collections_Generic_List_TSource__o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  ShopBuyItemListViewManager___c_c *v65; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x25
  struct ShopBuyItemListViewManager___c_StaticFields *v67; // x9
  System_Func_object__bool__o *_9__108_4; // x26
  Il2CppObject *v69; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_Generic_List_object__o *v78; // x25
  int32_t v79; // w26
  int32_t v80; // w0
  CommonReleaseEntity_array *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  ShopBuyItemListViewManager___c_c *v84; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x27
  struct ShopBuyItemListViewManager___c_StaticFields *v86; // x9
  System_Func_object__int__o *_9__108_5; // x28
  Il2CppObject *v88; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *v89; // x0
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x27
  ShopBuyItemListViewManager___c_c *v100; // x8
  struct ShopBuyItemListViewManager___c_StaticFields *v101; // x9
  System_Func_object__bool__o *_9__108_6; // x28
  Il2CppObject *v103; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *v104; // x0
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  __int64 v111; // x8
  __int64 v112; // x28
  __int64 v113; // x9
  int *v114; // x10
  __int64 v115; // x0
  __int64 v116; // x28
  __int64 v117; // x8
  __int64 v118; // x9
  int *v119; // x10
  __int64 v120; // x0
  __int64 v121; // x28
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x29
  int64_t v129; // x21
  int32_t v130; // w22
  int32_t v131; // w28
  __int64 v132; // x27
  __int64 v133; // x8
  __int64 v134; // x9
  int *v135; // x10
  __int64 v136; // x0
  System_Func_object__bool__o *v137; // x21
  Il2CppObject *v138; // x0
  Il2CppObject *v139; // x20
  System_Collections_ICollection_o *TargetEntityList; // x21
  int v141; // w21
  int klass_high; // w22
  System_String_o **v143; // x8
  __int64 v144; // x2
  void *monitor; // x25
  UserShopMaster_o *v146; // x22
  __int64 v147; // x26
  int v148; // w19
  __int64 v149; // x8
  int32_t v150; // w24
  System_String_o *v151; // x20
  __int64 v152; // x1
  __int64 v153; // x2
  UILabel_o *v154; // x19
  System_String_o *v155; // x20
  Il2CppObject *v156; // x21
  Il2CppObject *v157; // x0
  unsigned __int64 v158; // [xsp+0h] [xbp-E0h]
  ShopReleaseMaster_o *v159; // [xsp+8h] [xbp-D8h]
  System_Object_array *v160; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-C8h]
  ShopBuyItemListViewManager_o *v162; // [xsp+20h] [xbp-C0h]
  int v163; // [xsp+34h] [xbp-ACh] BYREF
  System_Collections_Generic_List_Enumerator_T__o v164; // [xsp+38h] [xbp-A8h] BYREF
  UserShopEntity_o *entity; // [xsp+50h] [xbp-90h] BYREF
  __int64 v166; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v167; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_59346CF & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____91526008);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__);
    sub_21FFC50(&System_Func_CommonReleaseEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_ShopEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_ShopReleaseEntity__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_2__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_3__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_4__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_5__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_6__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__DisplayClass108_0__SetSkillPartsLimitLabel_b__0__);
    sub_21FFC50(&Method_ShopBuyItemListViewManager___c__DisplayClass108_0__SetSkillPartsLimitLabel_b__1__);
    sub_21FFC50(&ShopBuyItemListViewManager___c__DisplayClass108_0_TypeInfo);
    sub_21FFC50(&ShopBuyItemListViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_5908/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/);
    sub_21FFC50(&StringLiteral_5909/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/);
    sub_21FFC50(&StringLiteral_5911/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/);
    byte_59346CF = 1;
  }
  memset(&v167, 0, sizeof(v167));
  entity = 0;
  v166 = 0;
  v7 = sub_21FFEBC(ShopBuyItemListViewManager___c__DisplayClass108_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_157;
  *(_DWORD *)(v7 + 16) = slot;
  skillPartsLimitLabel = (UnityEngine_Object_o *)this->fields.skillPartsLimitLabel;
  v162 = this;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Equality(skillPartsLimitLabel, 0, 0) )
    return;
  Master_object = (__int64)this->fields.skillPartsLimitLabel;
  if ( !Master_object )
    goto LABEL_157;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
    return;
  if ( !this->fields.havePurchaseLimit )
  {
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
    {
      Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
        return;
      }
    }
    goto LABEL_157;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v15);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_157;
  EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                            (ShopMaster_o *)Master_object,
                                                                            eventId,
                                                                            0);
  v17 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_ShopBuyItemListViewManager___c__DisplayClass108_0__SetSkillPartsLimitLabel_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          EventEntitiyList,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  v159 = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v19 )
    goto LABEL_157;
  max_length = v19->max_length;
  v21 = (CommonReleaseMaster_o *)Master_object;
  Master_object = (__int64)v159;
  v160 = v19;
  if ( max_length < 1 )
    goto LABEL_122;
  v22 = 0;
LABEL_18:
  if ( v22 >= (unsigned int)max_length )
    goto LABEL_158;
  v23 = v160->m_Items[v22];
  if ( !v23 || !Master_object )
    goto LABEL_157;
  EntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                       (ShopReleaseMaster_o *)Master_object,
                                                                       (int32_t)v23[1].klass,
                                                                       0);
  v27 = ShopBuyItemListViewManager___c_TypeInfo;
  if ( !*(&ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo, v24, v25);
    v27 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__108_2 = (System_Func_object__bool__o *)static_fields->__9__108_2;
  if ( !_9__108_2 )
  {
    if ( !*(&v27->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v27, v24, v25);
      static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__108_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__108_2,
      v30,
      Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_2__,
      0);
    v31 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    v31->__9__108_2 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__108_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v31->__9__108_2, (int32_t)_9__108_2, v32, v33, v34, v35, v36, v37);
  }
  v38 = System_Linq_Enumerable__Where_object_(
          EntitiyList,
          (System_Func_TSource__bool__o *)_9__108_2,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
  Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                             v38,
                             (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
  if ( !Master_object )
    goto LABEL_157;
  System_Collections_Generic_List_object___GetEnumerator(
    &v164,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  v39 = *(_OWORD *)&v164.fields._list;
  v164.fields._list = 0;
  *(_QWORD *)&v164.fields._index = &v167;
  *(_OWORD *)&v167.fields._list = v39;
  v167.fields._current = v164.fields._current;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v167,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v167,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
      Master_object = (__int64)v159;
      ++v22;
      max_length = v160->max_length;
      if ( v22 >= max_length )
        goto LABEL_122;
      goto LABEL_18;
    }
    if ( !v167.fields._current )
      sub_21FFECC(0, v40);
    condValue = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)v167.fields._current, 0);
    if ( !v21 )
      sub_21FFECC(condValue, (unsigned int)condValue);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(v21, condValue, 0);
    v45 = ShopBuyItemListViewManager___c_TypeInfo;
    if ( !*(&ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo, v42, v43);
      v45 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v46 = v45->static_fields;
    _9__108_3 = (System_Func_object__bool__o *)v46->__9__108_3;
    if ( !_9__108_3 )
    {
      if ( !*(&v45->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v45, v42, v43);
        v46 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)v46->__9;
      _9__108_3 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__108_3,
        v48,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_3__,
        0);
      v49 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v49->__9__108_3 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__108_3;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v49->__9__108_3,
        (int32_t)_9__108_3,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
  }
  while ( !System_Linq_Enumerable__FirstOrDefault_object__59044732(
             List,
             (System_Func_TSource__bool__o *)_9__108_3,
             (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____91526008) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v167,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  v56 = v7;
  v57 = v160;
  *(_QWORD *)(v7 + 20) = 0xFFFFFFFFLL;
  max_length_low = LODWORD(v160->max_length);
  if ( (int)max_length_low < 1 )
    goto LABEL_122;
  source = 0;
  v59 = 0;
  do
  {
    v158 = v59;
    if ( *(_DWORD *)(v56 + 20) != -1 )
      goto LABEL_116;
    if ( v59 >= max_length_low )
      goto LABEL_158;
    v60 = v57->m_Items[v59];
    if ( !v60 )
      goto LABEL_157;
    v61 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                 v159,
                                                                 (int32_t)v60[1].klass,
                                                                 0);
    v62 = System_Linq_Enumerable__ToList_object_(
            v61,
            (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    v65 = ShopBuyItemListViewManager___c_TypeInfo;
    v66 = (System_Collections_Generic_IEnumerable_TSource__o *)v62;
    if ( !*(&ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo, v63, v64);
      v65 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v67 = v65->static_fields;
    _9__108_4 = (System_Func_object__bool__o *)v67->__9__108_4;
    if ( !_9__108_4 )
    {
      if ( !*(&v65->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v65, v63, v64);
        v67 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      }
      v69 = (Il2CppObject *)v67->__9;
      _9__108_4 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__108_4,
        v69,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_4__,
        0);
      v70 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v70->__9__108_4 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__108_4;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v70->__9__108_4,
        (int32_t)_9__108_4,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
    }
    v77 = System_Linq_Enumerable__Where_object_(
            v66,
            (System_Func_TSource__bool__o *)_9__108_4,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                               v77,
                               (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    if ( !Master_object )
      goto LABEL_157;
    v78 = (System_Collections_Generic_List_object__o *)Master_object;
    if ( *(int *)(Master_object + 24) >= 1 )
    {
      v79 = 0;
      do
      {
        if ( *(_DWORD *)(v56 + 20) != -1 )
          break;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   v78,
                                   v79,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_157;
        v80 = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)Master_object, 0);
        v81 = CommonReleaseMaster__getList(v21, v80, 0);
        v84 = ShopBuyItemListViewManager___c_TypeInfo;
        v85 = (System_Collections_Generic_IEnumerable_TSource__o *)v81;
        if ( !*(&ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo, v82, v83);
          v84 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        v86 = v84->static_fields;
        _9__108_5 = (System_Func_object__int__o *)v86->__9__108_5;
        if ( !_9__108_5 )
        {
          if ( !*(&v84->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v84, v82, v83);
            v86 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          }
          v88 = (Il2CppObject *)v86->__9;
          _9__108_5 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_CommonReleaseEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__108_5,
            v88,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_5__,
            0);
          v89 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v89->__9__108_5 = (struct System_Func_CommonReleaseEntity__int__o *)_9__108_5;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v89->__9__108_5,
            (int32_t)_9__108_5,
            v90,
            v91,
            v92,
            v93,
            v94,
            v95);
        }
        v96 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     v85,
                                                                     (System_Func_TSource__TKey__o *)_9__108_5,
                                                                     (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
        v99 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v96,
                                                                     (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
        v100 = ShopBuyItemListViewManager___c_TypeInfo;
        if ( !*(&ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo, v97, v98);
          v100 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        v101 = v100->static_fields;
        _9__108_6 = (System_Func_object__bool__o *)v101->__9__108_6;
        if ( !_9__108_6 )
        {
          if ( !*(&v100->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v100, v97, v98);
            v101 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          }
          v103 = (Il2CppObject *)v101->__9;
          _9__108_6 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__108_6,
            v103,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__108_6__,
            0);
          v104 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v104->__9__108_6 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__108_6;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v104->__9__108_6,
            (int32_t)_9__108_6,
            v105,
            v106,
            v107,
            v108,
            v109,
            v110);
        }
        Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                                   v99,
                                   (System_Func_TSource__bool__o *)_9__108_6,
                                   (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
        if ( !Master_object )
          goto LABEL_157;
        v111 = *(_QWORD *)Master_object;
        v112 = Master_object;
        v113 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v114 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_CommonReleaseEntity__c **)v114 - 1) != System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo )
          {
            --v113;
            v114 += 4;
            if ( !v113 )
              goto LABEL_77;
          }
          v115 = v111 + 16LL * *v114 + 312;
        }
        else
        {
LABEL_77:
          v115 = sub_2237E2C(Master_object, System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo, 0);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v115)(v112, *(_QWORD *)(v115 + 8));
        v116 = Master_object;
        v166 = Master_object;
        v164.fields._list = 0;
        *(_QWORD *)&v164.fields._index = &v166;
        if ( !Master_object )
LABEL_99:
          sub_21FFECC(Master_object, v9);
        while ( 1 )
        {
          v117 = *(_QWORD *)v116;
          v118 = *(unsigned __int16 *)(*(_QWORD *)v116 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v116 + 302LL) )
          {
            v119 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v119 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v118;
              v119 += 4;
              if ( !v118 )
                goto LABEL_84;
            }
            v120 = v117 + 16LL * *v119 + 312;
          }
          else
          {
LABEL_84:
            v120 = sub_2237E2C(v116, System_Collections_IEnumerator_TypeInfo, 0);
          }
          Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v120)(v116, *(_QWORD *)(v120 + 8));
          if ( (Master_object & 1) == 0 )
            break;
          v121 = v166;
          if ( !v166 )
            sub_21FFECC(Master_object, v9);
          v122 = *(_QWORD *)v166;
          v123 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
          {
            v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_CommonReleaseEntity__c **)v124 - 1) != System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo )
            {
              --v123;
              v124 += 4;
              if ( !v123 )
                goto LABEL_92;
            }
            v125 = v122 + 16LL * *v124 + 312;
          }
          else
          {
LABEL_92:
            v125 = sub_2237E2C(v166, System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo, 0);
          }
          v128 = (*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8));
          if ( !v128 )
            sub_21FFECC(0, v126);
          v129 = *(int *)(v128 + 36);
          v131 = *(_DWORD *)(v128 + 28);
          v130 = *(_DWORD *)(v128 + 32);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v126, v127);
          Master_object = CondType__IsOpen(v131, v130, v129, 0, 0, 0);
          if ( (Master_object & 1) != 0 )
          {
            source = v99;
            *(int32x2_t *)(v7 + 20) = vrev64_s32(*(int32x2_t *)(v128 + 20));
            break;
          }
          v116 = v166;
          if ( !v166 )
            goto LABEL_99;
        }
        v132 = v166;
        if ( v166 )
        {
          v133 = *(_QWORD *)v166;
          v134 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
          {
            v135 = (int *)(*(_QWORD *)(v133 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v135 - 1) != System_IDisposable_TypeInfo )
            {
              --v134;
              v135 += 4;
              if ( !v134 )
                goto LABEL_107;
            }
            v136 = v133 + 16LL * *v135 + 312;
          }
          else
          {
LABEL_107:
            v136 = sub_2237E2C(v166, System_IDisposable_TypeInfo, 0);
          }
          Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v136)(v132, *(_QWORD *)(v136 + 8));
        }
        v56 = v7;
        ++v79;
      }
      while ( v79 < v78->fields._size );
    }
    v57 = v160;
    max_length_low = LODWORD(v160->max_length);
    v59 = v158 + 1;
  }
  while ( (int)v158 + 1 < (int)max_length_low );
  if ( *(_DWORD *)(v56 + 20) == -1 )
  {
LABEL_122:
    Master_object = (__int64)v162->fields.skillPartsLimitLabel;
    if ( !Master_object )
      goto LABEL_157;
    goto LABEL_123;
  }
LABEL_116:
  v137 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v137,
    (Il2CppObject *)v56,
    Method_ShopBuyItemListViewManager___c__DisplayClass108_0__SetSkillPartsLimitLabel_b__1__,
    0);
  v138 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
           source,
           (System_Func_TSource__bool__o *)v137,
           (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____91526008);
  if ( !v138 )
  {
    v141 = 0;
    klass_high = 0;
    v143 = (System_String_o **)&StringLiteral_5911/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/;
LABEL_151:
    v151 = *v143;
    Master_object = (__int64)v162->fields.skillPartsLimitLabel;
    if ( Master_object )
    {
      Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        v154 = v162->fields.skillPartsLimitLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v152, v153);
        v155 = LocalizationManager__Get(v151, 0);
        LODWORD(v164.fields._list) = v141;
        v156 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v164);
        v163 = klass_high;
        v157 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v163);
        Master_object = (__int64)System_String__Format_75484576(v155, v156, v157, 0);
        if ( v154 )
        {
          UILabel__set_text(v154, (System_String_o *)Master_object, 0);
          return;
        }
      }
    }
LABEL_157:
    sub_21FFECC(Master_object, v9);
  }
  v139 = v138;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_157;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_157;
  TargetEntityList = (System_Collections_ICollection_o *)ShopGroupMaster__GetTargetEntityList(
                                                           (ShopGroupMaster_o *)Master_object,
                                                           (int32_t)v139[2].klass,
                                                           0);
  if ( !BasicHelper__IsNullOrEmpty(TargetEntityList, 0) )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_157;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !TargetEntityList )
      goto LABEL_157;
    monitor = TargetEntityList[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v146 = (UserShopMaster_o *)Master_object;
      v147 = 0;
      v148 = 0;
      while ( (unsigned int)v147 < LODWORD(TargetEntityList[1].monitor) )
      {
        v149 = *((_QWORD *)&TargetEntityList[2].klass + v147);
        if ( !v149 )
          goto LABEL_157;
        v150 = *(_DWORD *)(v149 + 16);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v144);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        Master_object = (__int64)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v144);
          Master_object = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v146 )
          goto LABEL_157;
        Master_object = UserShopMaster__TryGetEntity(
                          v146,
                          &entity,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          v150,
                          0);
        if ( (Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_157;
          v148 += entity->fields.num;
        }
        if ( (_DWORD)monitor == (_DWORD)++v147 )
          goto LABEL_149;
      }
LABEL_158:
      sub_21FFED4(Master_object);
    }
    v148 = 0;
LABEL_149:
    klass_high = HIDWORD(v139[2].klass);
    v143 = (System_String_o **)&StringLiteral_5908/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/;
    v141 = klass_high - v148;
    if ( klass_high - v148 >= 1 )
      v143 = (System_String_o **)&StringLiteral_5909/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/;
    goto LABEL_151;
  }
  Master_object = (__int64)v162->fields.skillPartsLimitLabel;
  if ( !Master_object )
    goto LABEL_157;
LABEL_123:
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_157;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
}


void ShopBuyItemListViewManager__StopUpdateRemainTime(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_21FFECC(0, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
}


void ShopBuyItemListViewManager__Update(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0);
  ShopBuyItemListViewManager__UpdateAnotherBuyAble(this, v3);
}


void ShopBuyItemListViewManager__UpdateAnotherBuyAble(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *anotherBuyAbleAlphaTransitionCalculator; // x0
  struct AlphaTransitionCalculator_o *AlphaTransitionCalculator; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  float realtimeSinceStartup; // s0
  float v13; // s0
  const MethodInfo *v14; // x1
  float v15; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v17; // w8

  if ( (byte_59346AF & 1) == 0 )
  {
    sub_21FFC50(&Method_TransitionCalculator_float__Update__);
    byte_59346AF = 1;
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
  {
    AlphaTransitionCalculator = ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(0, method);
    this->fields.anotherBuyAbleAlphaTransitionCalculator = AlphaTransitionCalculator;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.anotherBuyAbleAlphaTransitionCalculator,
      (int32_t)AlphaTransitionCalculator,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
    if ( !anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
  }
  v13 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)anotherBuyAbleAlphaTransitionCalculator,
          (const MethodInfo_3BB5C64 *)Method_TransitionCalculator_float__Update__);
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  this->fields.alphaAnimNow = v13;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0)
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.alphaAnimTimeOld) >= 3.0 )
  {
    anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
    if ( !anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__StartFadeOut(anotherBuyAbleAlphaTransitionCalculator, 0);
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(anotherBuyAbleAlphaTransitionCalculator, 0) )
    return;
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
LABEL_19:
    sub_21FFECC(anotherBuyAbleAlphaTransitionCalculator, v11);
  AlphaTransitionCalculator__StartFadeIn(anotherBuyAbleAlphaTransitionCalculator, 0);
  v15 = UnityEngine_Time__get_realtimeSinceStartup(0);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v15;
  if ( alphaAnimCnt + 1 < 232792560 )
    v17 = alphaAnimCnt + 1;
  else
    v17 = alphaAnimCnt - 232792559;
  this->fields.alphaAnimCnt = v17;
  ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(this, v14);
}


float ShopBuyItemListViewManager__get_AlphaAnimNow(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *ShopBuyItemListViewManager__get_ClippingObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  Il2CppObject *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_59346AE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59346AE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_21FFECC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v10 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopBuyItemListViewObject__GetItem(
                                                                  (ShopBuyItemListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50765052(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v18 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v10,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v3;
}


int32_t ShopBuyItemListViewManager__get_EventItemCount(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._EventItemCount_k__BackingField;
}


int32_t ShopBuyItemListViewManager__get_ItemBaseWindowHeight(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_21FFECC(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *ShopBuyItemListViewManager__get_ObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_59346AD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59346AD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_21FFECC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v17 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v3;
}


void ShopBuyItemListViewManager__set_EventItemCount(
        ShopBuyItemListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventItemCount_k__BackingField = value;
}


void ShopBuyItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59346D1 & 1) == 0 )
  {
    sub_21FFC50(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_59346D1 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ShopBuyItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopBuyItemListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopBuyItemListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ShopBuyItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopBuyItemListViewManager___c___ctor(ShopBuyItemListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopBuyItemListViewManager___c___ChangeNextAnotherItemIcon_b__51_0(
        ShopBuyItemListViewManager___c_o *this,
        ShopBuyItemListViewObject_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59346D2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59346D2 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( v4 )
  {
    if ( !x )
      sub_21FFECC(v4, v5);
    ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(x, v5);
  }
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__108_2(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.condType == 113;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__108_3(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.condType == 263;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__108_4(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.condType == 113;
}


int32_t ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__108_5(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.priority;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__108_6(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.condType == 1;
}


void ShopBuyItemListViewManager___c__DisplayClass108_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopBuyItemListViewManager___c__DisplayClass108_0___SetSkillPartsLimitLabel_b__0(
        ShopBuyItemListViewManager___c__DisplayClass108_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.slot == this->fields.slot;
}


bool ShopBuyItemListViewManager___c__DisplayClass108_0___SetSkillPartsLimitLabel_b__1(
        ShopBuyItemListViewManager___c__DisplayClass108_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.condGroup == this->fields.commonReleaseCondGroup
      && x->fields.priority <= this->fields.targetPriority
      && x->fields.condType == 263;
}


void ShopBuyItemListViewManager___c__DisplayClass71_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopBuyItemListViewManager___c__DisplayClass71_0___GetIndexByItemId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass71_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  int64_t sortValue1; // x8

  if ( (byte_59346D3 & 1) == 0 )
  {
    sub_21FFC50(&ShopBuyItemListViewItem_TypeInfo);
    byte_59346D3 = 1;
  }
  if ( n
    && (naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment,
        n->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    sortValue1 = n[1].fields.sortValue1;
    if ( sortValue1 )
      LODWORD(sortValue1) = *(_DWORD *)(sortValue1 + 16);
  }
  else
  {
    LODWORD(sortValue1) = 0;
  }
  return (_DWORD)sortValue1 == this->fields.itemId;
}


bool ShopBuyItemListViewManager___c__DisplayClass71_0___GetIndexByItemId_b__1(
        ShopBuyItemListViewManager___c__DisplayClass71_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  int64_t sortValue1; // x8

  if ( (byte_59346D5 & 1) == 0 )
  {
    sub_21FFC50(&ShopBuyItemListViewItem_TypeInfo);
    byte_59346D5 = 1;
  }
  if ( n
    && (naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment,
        n->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    sortValue1 = n[1].fields.sortValue1;
    if ( sortValue1 )
      LODWORD(sortValue1) = *(_DWORD *)(sortValue1 + 16);
  }
  else
  {
    LODWORD(sortValue1) = 0;
  }
  return (_DWORD)sortValue1 == this->fields.itemId;
}


bool ShopBuyItemListViewManager___c__DisplayClass71_0___GetIndexByItemId_b__2(
        ShopBuyItemListViewManager___c__DisplayClass71_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  ListViewItem_c *klass; // x9
  unsigned int naturalAligment; // w11
  __int64 v7; // x10
  int64_t sortValue1; // x12
  bool v9; // zf
  bool v10; // w12

  if ( (byte_59346D4 & 1) == 0 )
  {
    sub_21FFC50(&ShopBuyItemListViewItem_TypeInfo);
    byte_59346D4 = 1;
  }
  if ( !n )
    return 0;
  klass = n->klass;
  naturalAligment = n->klass->_2.naturalAligment;
  v7 = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v7 )
    return 0;
  if ( (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[v7 - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    sortValue1 = n[1].fields.sortValue1;
    if ( sortValue1 )
      LODWORD(sortValue1) = *(_DWORD *)(sortValue1 + 16);
  }
  else
  {
    LODWORD(sortValue1) = 0;
  }
  v9 = (_DWORD)sortValue1 == this->fields.itemId;
  v10 = 0;
  if ( v9 && naturalAligment >= (unsigned int)v7 )
  {
    if ( (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[v7 - 1] == ShopBuyItemListViewItem_TypeInfo )
      return !ShopBuyItemListViewItem__IsDisabledDisp((ShopBuyItemListViewItem_o *)n, (const MethodInfo *)n);
    return 0;
  }
  return v10;
}


void ShopBuyItemListViewManager___c__DisplayClass72_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopBuyItemListViewManager___c__DisplayClass72_0___GetIndexByTargetId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass72_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewItem_c *klass; // x0

  if ( (byte_59346D6 & 1) == 0 )
  {
    sub_21FFC50(&ShopBuyItemListViewItem_TypeInfo);
    byte_59346D6 = 1;
  }
  if ( n
    && (naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment,
        n->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    klass = n[1].klass;
    if ( klass )
      LODWORD(klass) = ShopEntity__get_TargetId((ShopEntity_o *)klass, 0);
  }
  else
  {
    LODWORD(klass) = 0;
  }
  return (_DWORD)klass == this->fields.targetId;
}