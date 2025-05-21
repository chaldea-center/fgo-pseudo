void __fastcall ShopBuyItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v7; // x20
  struct ShopBuyItemListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B40D75 & 1) == 0 )
  {
    sub_1BDB878(&ListViewSort_TypeInfo, v1);
    sub_1BDB878(&ShopBuyItemListViewManager_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_6303/*"ExchangeSvtCoinShop"*/, v5);
    byte_4B40D75 = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6303/*"ExchangeSvtCoinShop"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)ShopBuyItemListViewManager_TypeInfo->static_fields, StringLiteral_6303/*"ExchangeSvtCoinShop"*/, v2, v3);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v7 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42767496(v7, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->exchangeSvtCoinSortInfo, (int32_t)v7, v9, v10);
}


void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_BEB240;
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816LL;
  this->fields.listInDelay = 0.1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__ChangeFilter(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 filterStatus; // x8
  __int64 v4; // x1
  int32_t v5; // w20

  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 2 )
    this->fields.filterStatus = dword_C23B94[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_4B3F0ED )
  {
    sub_1BDB878(&EventRewardSaveData_TypeInfo, v4);
    byte_4B3F0ED = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v5;
  EventRewardSaveData__SaveItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
}


void __fastcall ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v7; // x1
  ShopBuyItemListViewManager___c_c *v8; // x8
  System_Collections_Generic_List_object__o *v9; // x19
  System_Action_object__o *_9__49_0; // x20
  Il2CppObject *v11; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B40D58 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_ShopBuyItemListViewObject__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__, v3);
    sub_1BDB878(&Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__49_0__, v4);
    sub_1BDB878(&ShopBuyItemListViewManager___c_TypeInfo, v5);
    byte_4B40D58 = 1;
  }
  ObjectList = ShopBuyItemListViewManager__get_ObjectList(this, method);
  v8 = ShopBuyItemListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v8 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__49_0 = (System_Action_object__o *)v8->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__49_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ShopBuyItemListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__49_0,
      v11,
      Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__49_0__,
      0LL);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_ShopBuyItemListViewObject__o *)_9__49_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v13, v14);
  }
  if ( !v9 )
    sub_1BDBAD4(ObjectList, v7);
  System_Collections_Generic_List_object___ForEach(
    v9,
    (System_Action_T__o *)_9__49_0,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CheckUpdateEventRewardList(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  ShopEntity_array *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_4B40D5E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B40D5E = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_1BDBAD4(Instance, v14);
  }
  if ( itemList->fields._size != Instance->max_length )
    ShopBuyItemListViewManager__CreateList_34287024(this, 6, eventId, slot, eventNum, isForcedAdjustment, v15);
}


AlphaTransitionCalculator_o *__fastcall ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  float v2; // s8
  System_Func_float__float__float__float__o *v3; // x19
  AlphaTransitionCalculator_o *v4; // x20

  if ( (byte_4B40D57 & 1) == 0 )
  {
    sub_1BDB878(&AlphaTransitionCalculator_TypeInfo, method);
    byte_4B40D57 = 1;
  }
  v2 = ChangedFPSUtil__CovertFrameNumToSecond(7, 0LL);
  v3 = ExtraEasing__AsymptoticSeriesFloat(0.5, 7.0, 0LL);
  v4 = (AlphaTransitionCalculator_o *)sub_1BDBAC4(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v4, v2, v3, 0LL);
  return v4;
}


void __fastcall ShopBuyItemListViewManager__CreateEventRewardList(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  ShopBuyItemListViewManager__CreateList_34287024(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateExchangeSvtCoinList(
        ShopBuyItemListViewManager_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemListViewManager_c *v6; // x0
  struct ListViewSort_o *exchangeSvtCoinSortInfo; // x1
  __int64 v8; // x1
  ListViewSort_o *sort; // x0
  const MethodInfo *v10; // x6
  const MethodInfo *v11; // x1

  if ( (byte_4B40D59 & 1) == 0 )
  {
    sub_1BDB878(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&svtCoinType);
    byte_4B40D59 = 1;
  }
  v6 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
    v6 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v6->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)exchangeSvtCoinSortInfo, (int32_t)method, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BDBAD4(0LL, v8);
  ListViewSort__Load(sort, 0LL);
  ShopBuyItemListViewManager__CreateList_34287024(this, 22, 0, svtCoinType, 0, 0, v10);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v11);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34287024(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_34287024(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v31; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x21
  System_Int32_array *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x4
  ShopEntity_array *ShopEntities; // x27
  System_Collections_Generic_List_object__o *v41; // x26
  __int64 v42; // x2
  int max_length; // w8
  void **v44; // x21
  ShopBuyItemListViewManager_o *v45; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // x28
  int v47; // w22
  bool v48; // w24
  ShopEntity_o *v49; // x29
  System_Int32_array *targetIds; // x8
  unsigned __int64 v51; // x20
  unsigned __int64 v52; // x9
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  const MethodInfo *v59; // x3
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v61; // w25
  void **v62; // x27
  ListViewItem_o *v63; // x21
  const MethodInfo *v64; // x2
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  __int64 v71; // x8
  System_Collections_Generic_List_object__o *v72; // x0
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  int32_t v76; // w27
  System_Collections_Generic_List_object__o *v77; // x28
  int32_t v78; // w23
  Il2CppObject *Item; // x29
  ListViewItem_o *v80; // x20
  const MethodInfo *v81; // x2
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  System_Collections_Generic_List_object__o *v88; // x28
  int32_t v89; // w26
  System_Collections_Generic_List_object__o *v90; // x27
  int32_t v91; // w23
  Il2CppObject *v92; // x28
  ListViewItem_o *v93; // x20
  const MethodInfo *v94; // x2
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v102; // w23
  __int64 v103; // x8
  __int64 v104; // x9
  __int64 v105; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v107; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v109; // w22
  int32_t v110; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v112; // x1
  int32_t v113; // w8
  __int64 *v114; // x9
  System_String_o **v115; // x8
  System_String_o *v116; // x21
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  struct ListViewSort_o *sort; // x1
  _BOOL8 v120; // x0
  const MethodInfo *v121; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v123; // [xsp+4h] [xbp-9Ch]
  int32_t v124; // [xsp+8h] [xbp-98h]
  int32_t v125; // [xsp+Ch] [xbp-94h]
  ShopEntity_array *v126; // [xsp+10h] [xbp-90h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_object__o *v128; // [xsp+20h] [xbp-80h]
  int32_t index; // [xsp+2Ch] [xbp-74h]
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  EventRewardSceneEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B40D5A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_1BDB878(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_1BDB878(&LocalizationManager_TypeInfo, v22);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v23);
    sub_1BDB878(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BDB878(&StringLiteral_12150/*"SHOP_SPECIAL_LIST_EMPTY"*/, v26);
    sub_1BDB878(&StringLiteral_12099/*"SHOP_LIST_EMPTY"*/, v27);
    sub_1BDB878(&StringLiteral_5722/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v28);
    sub_1BDB878(&StringLiteral_5787/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/, v29);
    byte_4B40D5A = 1;
  }
  possessionAnotherItemId = 0LL;
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v33);
  v31 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v31 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_134;
    Instance = (DataManager_o *)ShopMaster__GetEventItemList(
                                  (ShopMaster_o *)MasterData_object,
                                  this->fields.eventId,
                                  0LL);
    if ( !Instance )
      goto LABEL_134;
    currencyInfoController = this->fields.currencyInfoController;
    v36 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v31);
    if ( !currencyInfoController )
      goto LABEL_134;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1BDB81C((CGThumbnailListItem_o *)&currencyInfoController->fields.objectList, (int32_t)Instance, v37, v38);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_134;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v36,
      isForcedAdjustment,
      0LL);
    LODWORD(v31) = this->fields.kind;
  }
  v123 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v31,
                                                v34);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v39);
  v128 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v128,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_134;
  max_length = ShopEntities->max_length;
  v124 = slot;
  v125 = kind;
  if ( max_length < 1 )
  {
    v45 = EnterTime;
    v48 = 0;
    index = 0;
    if ( !v41 )
      goto LABEL_134;
    goto LABEL_57;
  }
  index = 0;
  v44 = &Method_System_Collections_Generic_List_ShopEntity__Add__;
  v45 = EnterTime;
  v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v47 = 0;
  v48 = 0;
  v126 = ShopEntities;
  do
  {
    if ( v47 >= (unsigned int)max_length )
LABEL_135:
      sub_1BDBADC(Instance, v31, v42);
    v49 = ShopEntities->m_Items[v47];
    if ( !v49 )
      goto LABEL_134;
    if ( v49->fields.purchaseType == 6 )
    {
      targetIds = v49->fields.targetIds;
      possessionAnotherItemId = targetIds;
      if ( !targetIds )
        goto LABEL_134;
      v51 = 0LL;
      while ( 1 )
      {
        v52 = targetIds->max_length;
        if ( (__int64)v51 >= (int)v52 )
          break;
        if ( v51 >= v52 )
          goto LABEL_135;
        if ( v46 )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        v46,
                                        targetIds->m_Items[v51 + 1],
                                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_53;
          targetIds = possessionAnotherItemId;
          ++v51;
          if ( possessionAnotherItemId )
            continue;
        }
        goto LABEL_134;
      }
    }
    if ( v48 )
    {
      v48 = 1;
    }
    else
    {
      v48 = v49->fields.purchaseType == 16;
      this->fields.targetSlot = v49->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v49, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(v49, 0LL) )
    {
      Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v49, &possessionAnotherItemId, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v128 )
          goto LABEL_134;
        items = v128->fields._items;
        v74 = *v44;
        ++v128->fields._version;
        if ( !items )
          goto LABEL_134;
        size = v128->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v58 = &items->obj.klass + size;
          v128->fields._size = size + 1;
          goto LABEL_48;
        }
        v71 = v74[4];
        v72 = v128;
        goto LABEL_52;
      }
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v49, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_134;
      v55 = v41->fields._items;
      v56 = *v44;
      ++v41->fields._version;
      if ( !v55 )
        goto LABEL_134;
      v57 = v41->fields._size;
      if ( (unsigned int)v57 < v55->max_length )
      {
        v58 = &v55->obj.klass + v57;
        v41->fields._size = v57 + 1;
LABEL_48:
        v58[4] = (Il2CppClass *)v49;
        sub_1BDB81C((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v49, v53, v54);
        goto LABEL_53;
      }
      v71 = v56[4];
      v72 = v41;
LABEL_52:
      System_Collections_Generic_List_object___AddWithResize(
        v72,
        (Il2CppObject *)v49,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v71 + 192) + 112LL));
      goto LABEL_53;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v49, 0LL);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v49, (int32_t)Instance, v59),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v49->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v61 = this->fields.kind;
        v62 = v44;
        v63 = (ListViewItem_o *)sub_1BDBAC4(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_42734232(v63, index, 0LL);
        v63[1].fields.sortIndex = v61;
        v45 = EnterTime;
        v63[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v63, v49, v64);
        if ( !itemList )
          goto LABEL_134;
        v67 = itemList->fields._items;
        v68 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v67 )
          goto LABEL_134;
        v69 = itemList->fields._size;
        if ( (unsigned int)v69 >= v67->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v63,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = &v67->obj.klass + v69;
          itemList->fields._size = v69 + 1;
          v70[4] = (Il2CppClass *)v63;
          sub_1BDB81C((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v63, v65, v66);
        }
        v44 = v62;
        ShopEntities = v126;
        ++index;
      }
    }
LABEL_53:
    max_length = ShopEntities->max_length;
    ++v47;
  }
  while ( v47 < max_length );
  if ( !v41 )
    goto LABEL_134;
LABEL_57:
  if ( v41->fields._size >= 1 )
  {
    v76 = 0;
    do
    {
      v77 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v78 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v41,
               v76,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v80 = (ListViewItem_o *)sub_1BDBAC4(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_42734232(v80, index + v76, 0LL);
      v80[1].fields.sortIndex = v78;
      v80[1].fields.sortValue0 = (int64_t)v45;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v80, (ShopEntity_o *)Item, v81);
      if ( !v77 )
        goto LABEL_134;
      v84 = v77->fields._items;
      v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v77->fields._version;
      if ( !v84 )
        goto LABEL_134;
      v86 = v77->fields._size;
      if ( (unsigned int)v86 >= v84->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v77,
          (Il2CppObject *)v80,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = &v84->obj.klass + v86;
        v77->fields._size = v86 + 1;
        v87[4] = (Il2CppClass *)v80;
        sub_1BDB81C((CGThumbnailListItem_o *)(v87 + 4), (int32_t)v80, v82, v83);
      }
      ++v76;
    }
    while ( v76 < v41->fields._size );
    index += v76;
  }
  v88 = v128;
  if ( !v128 )
    goto LABEL_134;
  if ( v128->fields._size >= 1 )
  {
    v89 = 0;
    do
    {
      v90 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v91 = this->fields.kind;
      v92 = System_Collections_Generic_List_object___get_Item(
              v88,
              v89,
              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v93 = (ListViewItem_o *)sub_1BDBAC4(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_42734232(v93, index + v89, 0LL);
      v93[1].fields.sortIndex = v91;
      v93[1].fields.sortValue0 = (int64_t)v45;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v93, (ShopEntity_o *)v92, v94);
      if ( !v90 )
        goto LABEL_134;
      v97 = v90->fields._items;
      v98 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v90->fields._version;
      if ( !v97 )
        goto LABEL_134;
      v99 = v90->fields._size;
      v88 = v128;
      if ( (unsigned int)v99 >= v97->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v90,
          (Il2CppObject *)v93,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = &v97->obj.klass + v99;
        v90->fields._size = v99 + 1;
        v100[4] = (Il2CppClass *)v93;
        sub_1BDB81C((CGThumbnailListItem_o *)(v100 + 4), (int32_t)v93, v95, v96);
      }
    }
    while ( ++v89 < v128->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    v102 = v125;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollBar;
      if ( !Instance )
        goto LABEL_134;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      v103 = 348LL;
      if ( v123 == 1 )
        v103 = 336LL;
      if ( v123 == 1 )
        v104 = 332LL;
      else
        v104 = 344LL;
      if ( v123 == 1 )
        v105 = 328LL;
      else
        v105 = 340LL;
      v132.fields.z = *(float *)((char *)&this->klass + v103);
      v132.fields.y = *(float *)((char *)&this->klass + v104);
      v132.fields.x = *(float *)((char *)&this->klass + v105);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v132, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_134;
      if ( v123 == 1 )
        v107 = 338;
      else
        v107 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v107, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v109 = v124;
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_134;
      if ( v123 == 1 )
        v110 = 348;
      else
        v110 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v110, 0LL);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5722/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
    if ( emptyMessageLabel )
    {
      v112 = (System_String_o *)Instance;
      goto LABEL_119;
    }
LABEL_134:
    sub_1BDBAD4(Instance, v31);
  }
  v113 = this->fields.kind;
  v114 = &StringLiteral_12099/*"SHOP_LIST_EMPTY"*/;
  if ( v113 == 22 )
    v114 = (__int64 *)&StringLiteral_5787/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
  if ( v113 == 12 )
    v115 = (System_String_o **)&StringLiteral_12150/*"SHOP_SPECIAL_LIST_EMPTY"*/;
  else
    v115 = (System_String_o **)v114;
  v116 = *v115;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v102 = v125;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v116, 0LL);
  v109 = v124;
  if ( !emptyMessageLabel )
    goto LABEL_134;
  v112 = (System_String_o *)Instance;
LABEL_119:
  UILabel__set_text(emptyMessageLabel, v112, 0LL);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v117, v118);
  }
  if ( !v48 )
    goto LABEL_130;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_134;
  v120 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0LL);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v120 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v120, this->fields.filterBtn, 1, v121);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
      if ( !byte_4B3F0EE )
      {
        sub_1BDB878(&EventRewardSaveData_TypeInfo, sort);
        byte_4B3F0EE = 1;
      }
      ItemFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
      goto LABEL_131;
    }
LABEL_130:
    ItemFilterId_k__BackingField = 0;
  }
LABEL_131:
  this->fields.filterStatus = ItemFilterId_k__BackingField;
  ShopBuyItemListViewManager__SetList(this, (const MethodInfo *)sort);
  if ( v102 == 22 )
    this->fields.targetExchangeSvtCoinFolder = v109;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_34290012(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34287024(this, 6, eventId, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__EndSelectFilterKind(
        ShopBuyItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4B40D73 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B40D73 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_34293368(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1BDBAD4(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__FocusTopItem(
        ShopBuyItemListViewManager_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  int32_t ShopFocusItemId_k__BackingField; // w1
  unsigned int IndexByTargetId; // w0
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4B40D5B & 1) == 0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_4B40D5B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B40D76 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_4B40D76 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_ShopFocusItemId_k__BackingField >= 1 )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4B40D76 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
      byte_4B40D76 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    ShopFocusItemId_k__BackingField = v6->static_fields->_ShopFocusItemId_k__BackingField;
    if ( state == 22 )
      IndexByTargetId = ShopBuyItemListViewManager__GetIndexByTargetId(this, ShopFocusItemId_k__BackingField, method);
    else
      IndexByTargetId = ShopBuyItemListViewManager__GetIndexByItemId(this, ShopFocusItemId_k__BackingField, method);
    v9 = IndexByTargetId;
    if ( (IndexByTargetId & 0x80000000) == 0 )
      ListViewManager__SetTopItem((ListViewManager_o *)this, IndexByTargetId, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B40D77 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
      byte_4B40D77 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_ShopFocusItemId_k__BackingField = 0;
  }
}


int32_t __fastcall ShopBuyItemListViewManager__GetAlphaAnimCnt(
        ShopBuyItemListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_C23BA0[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_C23BF4[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4B40D5C & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_4B40D5C = 1;
  }
  if ( (unsigned int)kind > 9 || ((1 << kind) & 0x304) == 0 )
    return -1LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemListViewManager__GetIndexByItemId(
        ShopBuyItemListViewManager_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ShopBuyItemListViewManager___c__DisplayClass67_0_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t result; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__bool__o *v17; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x21
  System_Predicate_object__o *v19; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x19
  System_Predicate_object__o *v21; // x21

  if ( (byte_4B40D64 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Count_ListViewItem___, *(_QWORD *)&itemId);
    sub_1BDB878(&System_Func_ListViewItem__bool__TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, v6);
    sub_1BDB878(&System_Predicate_ListViewItem__TypeInfo, v7);
    sub_1BDB878(&Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__0__, v8);
    sub_1BDB878(&Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__1__, v9);
    sub_1BDB878(&Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__2__, v10);
    sub_1BDB878(&ShopBuyItemListViewManager___c__DisplayClass67_0_TypeInfo, v11);
    byte_4B40D64 = 1;
  }
  v12 = (ShopBuyItemListViewManager___c__DisplayClass67_0_o *)sub_1BDBAC4(ShopBuyItemListViewManager___c__DisplayClass67_0_TypeInfo);
  ShopBuyItemListViewManager___c__DisplayClass67_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v12->fields.itemId = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v17 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Count_object__50665212(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)v17,
         (const MethodInfo_30516FC *)Method_System_Linq_Enumerable_Count_ListViewItem___) < 2 )
    goto LABEL_11;
  v18 = this->fields.itemList;
  v19 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__2__,
    0LL);
  if ( !v18 )
    goto LABEL_13;
  result = System_Collections_Generic_List_object___FindIndex(
             (System_Collections_Generic_List_object__o *)v18,
             (System_Predicate_T__o *)v19,
             (const MethodInfo_36D661C *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( (result & 0x80000000) != 0 )
  {
LABEL_11:
    v20 = this->fields.itemList;
    v21 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v12,
      Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__1__,
      0LL);
    if ( v20 )
      return System_Collections_Generic_List_object___FindIndex(
               (System_Collections_Generic_List_object__o *)v20,
               (System_Predicate_T__o *)v21,
               (const MethodInfo_36D661C *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
LABEL_13:
    sub_1BDBAD4(v13, v14);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemListViewManager__GetIndexByTargetId(
        ShopBuyItemListViewManager_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ShopBuyItemListViewManager___c__DisplayClass68_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4B40D65 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, *(_QWORD *)&targetId);
    sub_1BDB878(&System_Predicate_ListViewItem__TypeInfo, v5);
    sub_1BDB878(&Method_ShopBuyItemListViewManager___c__DisplayClass68_0__GetIndexByTargetId_b__0__, v6);
    sub_1BDB878(&ShopBuyItemListViewManager___c__DisplayClass68_0_TypeInfo, v7);
    byte_4B40D65 = 1;
  }
  v8 = (ShopBuyItemListViewManager___c__DisplayClass68_0_o *)sub_1BDBAC4(ShopBuyItemListViewManager___c__DisplayClass68_0_TypeInfo);
  ShopBuyItemListViewManager___c__DisplayClass68_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  v8->fields.targetId = targetId;
  if ( targetId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v13 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_ShopBuyItemListViewManager___c__DisplayClass68_0__GetIndexByTargetId_b__0__,
    0LL);
  if ( !itemList )
LABEL_9:
    sub_1BDBAD4(v9, v10);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_36D661C *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
}


float __fastcall ShopBuyItemListViewManager__GetInvokeDelay(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  float result; // s0

  if ( initMode == 1 )
    return this->fields.listInDelay + 0.5;
  result = 0.6;
  if ( (unsigned int)(initMode - 3) > 1 )
    return 0.0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__GetIsShowEventItemWindow(
        int32_t state,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int v7; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v12; // x1
  int32_t PayType; // w0

  if ( (byte_4B40D71 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&ShopBuyItemListViewManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B40D71 = 1;
  }
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  v7 = ShopBuyItemListViewManager__GetBuyItemKind(state, *(const MethodInfo **)&eventId) - 2;
  result = 1;
  switch ( v7 )
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_1BDBAD4(Instance, v10);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
      if ( EventItemList && *(_QWORD *)&EventItemList->max_length )
        goto LABEL_14;
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
      PayType = ShopBuyItemListViewManager__GetPayType(eventId, v12);
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


// local variable allocation has failed, the output may be wrong!
ShopBuyItemListViewItem_o *__fastcall ShopBuyItemListViewManager__GetItem(
        ShopBuyItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ShopBuyItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B40D63 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BDB878(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_4B40D63 = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ShopBuyItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


float __fastcall ShopBuyItemListViewManager__GetObjectInitDelay(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  float result; // s0

  result = 0.1;
  if ( initMode != 1 && (unsigned int)(initMode - 3) >= 2 )
    return 0.0;
  return result;
}


int32_t __fastcall ShopBuyItemListViewManager__GetObjectInitMode(
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
System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__GetObjectList(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v7; // x19

  if ( (byte_4B40D6B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_1BDB878(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v5);
    byte_4B40D6B = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v7 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v7;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopEntity_array *Instance; // x0
  __int64 v5; // x1
  ShopEntity_o *v6; // x8

  if ( (byte_4B40D6E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B40D6E = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, eventId, 0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( (int)Instance->max_length >= 1 )
  {
    v6 = Instance->m_Items[0];
    if ( v6 )
      return v6->fields.payType;
LABEL_10:
    sub_1BDBAD4(Instance, v5);
  }
  return 11;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopBuyItemListViewManager__GetShopEntities(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v13; // w1

  if ( (byte_4B40D5D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B40D5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1BDBAD4(Instance, v10);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_42;
      v11 = 2;
      goto LABEL_36;
    case 6:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL);
    case 7:
      if ( !Instance )
        goto LABEL_42;
      v11 = 6;
      goto LABEL_36;
    case 8:
      if ( !Instance )
        goto LABEL_42;
      v11 = 7;
      goto LABEL_36;
    case 9:
      if ( !Instance )
        goto LABEL_42;
      v11 = 3;
      goto LABEL_36;
    case 10:
      if ( !Instance )
        goto LABEL_42;
      v11 = 4;
      goto LABEL_36;
    case 11:
      if ( !Instance )
        goto LABEL_42;
      v11 = 5;
      goto LABEL_36;
    case 12:
      if ( !Instance )
        goto LABEL_42;
      v11 = 9;
      goto LABEL_36;
    case 13:
      if ( !Instance )
        goto LABEL_42;
      v11 = 10;
      goto LABEL_36;
    case 14:
      if ( !Instance )
        goto LABEL_42;
      v11 = 11;
      goto LABEL_36;
    case 15:
      if ( !Instance )
        goto LABEL_42;
      v11 = 12;
      goto LABEL_36;
    case 16:
      if ( !Instance )
        goto LABEL_42;
      v11 = 13;
      goto LABEL_36;
    case 18:
      if ( !Instance )
        goto LABEL_42;
      v11 = 14;
      goto LABEL_36;
    case 20:
      if ( !Instance )
        goto LABEL_42;
      v11 = 15;
      goto LABEL_36;
    case 21:
      if ( !Instance )
        goto LABEL_42;
      v11 = 16;
LABEL_36:
      v13 = 0;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v13, v11, 0LL);
    case 22:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableExchangeSvtCoinEntitiyList((ShopMaster_o *)Instance, slot, 0LL);
    case 23:
      if ( !Instance )
        goto LABEL_42;
      v13 = 23;
      v11 = 18;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v13, v11, 0LL);
    default:
      return 0LL;
  }
}


void __fastcall ShopBuyItemListViewManager__InvalidateList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  bool v9; // w0
  Il2CppObject *Component_object; // x21

  if ( (byte_4B40D62 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B40D62 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1BDBAD4(objectList, method);
  v7 = 0;
  while ( v7 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v7,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
    Component_object = 0LL;
    if ( v9 )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_18;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v7,
                                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                (UnityEngine_Object_o *)Component_object,
                                                                0LL,
                                                                0LL);
    if ( ((unsigned __int8)objectList & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_18;
      ShopBuyItemListViewObject__SetupDisp((ShopBuyItemListViewObject_o *)Component_object, 0LL);
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_18;
  }
}


bool __fastcall ShopBuyItemListViewManager__ModifyEventRewardList(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return ShopBuyItemListViewManager__ModifyList_34292400(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__ModifyFilterList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ShopEntity_array *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x20
  int32_t eventCount; // w21
  int32_t targetSlot; // w22
  int32_t eventId; // w23
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v13; // x6
  const MethodInfo *v14; // x2

  if ( (byte_4B40D5F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B40D5F = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0LL),
        !Entity) )
  {
    sub_1BDBAD4(Instance, v7);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_34287024(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v13);
  ShopBuyItemListViewManager__SetMode_34293368(this, 2, v14);
}


bool __fastcall ShopBuyItemListViewManager__ModifyItem(
        ShopBuyItemListViewManager_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w22
  const MethodInfo *v11; // x2
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8

  if ( (byte_4B40D61 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BDB878(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_4B40D61 = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1BDBAD4(itemList, shopEntity);
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopBuyItemListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewItem_TypeInfo )
      {
        goto LABEL_13;
      }
      syncRoot = itemList[2].fields._syncRoot;
      if ( syncRoot )
      {
        if ( LODWORD(syncRoot[1].klass) == shopId )
          break;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v10;
      if ( !itemList )
        goto LABEL_13;
    }
    ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)itemList, shopEntity, v11);
  }
  return 1;
}


bool __fastcall ShopBuyItemListViewManager__ModifyList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  return ShopBuyItemListViewManager__ModifyList_34292400(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_34292400(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v20; // x4
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x6
  DataManager_o *v24; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w8
  ShopBuyItemListViewManager_o *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w4
  bool v32; // w5
  System_Int32_array *EventItemList; // x26
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v36; // x27
  const MethodInfo *v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  ShopCurrencyInfoController_o *v40; // x28
  _BOOL4 isEventShop; // w29
  int m_CancellationTokenSource; // w8
  __int64 v43; // x27
  ShopEntity_o *v44; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v46; // x3

  if ( (byte_4B40D60 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B40D60 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)ShopBuyItemListViewManager__GetShopEntities(
                                (ShopBuyItemListViewManager_o *)MasterData_object,
                                kind,
                                0,
                                0,
                                v20);
  v24 = Instance;
  if ( kind == 6 )
  {
    if ( MasterData_object )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, eventId, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v36 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v37);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1BDB81C(
              (CGThumbnailListItem_o *)&currencyInfoController->fields.objectList,
              (int32_t)Instance,
              v38,
              v39);
            if ( v36 )
            {
              v40 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v36, 0LL);
              if ( v40 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v40,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  (unsigned __int8)Instance & 1,
                  0LL);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1BDBAD4(Instance, v18);
  }
  if ( kind != 12 && kind != 7 )
  {
LABEL_19:
    if ( !v24 )
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
    m_CancellationTokenSource = (int)v24->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
    {
      v43 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v43 >= m_CancellationTokenSource )
          sub_1BDBADC(Instance, v18, v21);
        v44 = (ShopEntity_o *)*((_QWORD *)&v24->fields._DispLog + v43);
        if ( !v44 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      *((ShopEntity_o **)&v24->fields._DispLog + v43),
                                      v44->fields.id,
                                      v22);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v44, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v44, 0LL);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v44, PurchaseShop, v46);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        m_CancellationTokenSource = (int)v24->fields.m_CancellationTokenSource;
        if ( (int)++v43 >= m_CancellationTokenSource )
          return 1;
      }
      v32 = isForcedAdjustment;
      v27 = this;
      v28 = kind;
      v29 = eventId;
      v30 = slot;
      v31 = eventNum;
      goto LABEL_30;
    }
    return 1;
  }
  v27 = this;
  v28 = kind;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
LABEL_30:
  ShopBuyItemListViewManager__CreateList_34287024(v27, v28, v29, v30, v31, v32, v23);
  return 0;
}


void __fastcall ShopBuyItemListViewManager__OnClickFilterKind(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B40D72 & 1) == 0 )
  {
    sub_1BDB878(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__, v3);
    sub_1BDB878(&Method_ShopBuyItemListViewManager_OnClickFilterKind__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B40D72 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BDB890(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BDBAC4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1BDBAD4(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 15, sort, v11, 0, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__OnClickListView(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_int__o *onClickListViewItem; // x20
  CGThumbnailListItem_o *p_onClickListViewItem; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned int Index; // w0

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    p_onClickListViewItem = (CGThumbnailListItem_o *)&this->fields.onClickListViewItem;
    p_onClickListViewItem->klass = 0LL;
    sub_1BDB81C(p_onClickListViewItem, 0, (int32_t)method, v3);
    if ( !obj )
      sub_1BDBAD4(v7, v8);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickListViewItem->fields.m_target)(
      onClickListViewItem->fields.original_method_info,
      Index,
      *(_QWORD *)&onClickListViewItem->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemListViewManager__OnMoveEnd(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  ShopBuyItemListViewManager_o *v7; // x0
  const MethodInfo *v8; // x3
  char v9; // w20
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  UnityEngine_Object_o *scrollView; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4B40D6D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B40D6D = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      if ( this->fields.initMode == 1 )
      {
        v9 = 1;
        ShopBuyItemListViewManager__SetScrollBarActive(v7, this->fields.scrollBar, 1, v8);
        itemSortList = this->fields.itemSortList;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( itemSortList )
          v9 = itemSortList->fields._size < 1;
        if ( !emptyMessageBase )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive(emptyMessageBase, v9, 0LL);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_15;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.castClass)(
          emptyMessageBase,
          1LL,
          emptyMessageBase->klass[1]._1.declaringType);
LABEL_15:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0LL;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onMoveEnd, 0, v14, v15);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_18:
      sub_1BDBAD4(emptyMessageBase, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__RequestListObject(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w20
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v13; // x1
  float v14; // s8
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t size; // w8
  int32_t v17; // w21
  Il2CppObject *Item; // x23
  System_Action_o *v19; // x24
  float v20; // s0

  if ( (byte_4B40D6C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_1BDB878(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v8);
    byte_4B40D6C = 1;
  }
  v10 = ShopBuyItemListViewObject__GetInitMode(initMode, 0LL);
  if ( initMode == 1 )
  {
    ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
    ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v11);
    v14 = 0.1;
    v15 = (System_Collections_Generic_List_object__o *)ObjectList;
  }
  else
  {
    ObjectList = ShopBuyItemListViewManager__GetObjectList(this, initMode, v9);
    v15 = (System_Collections_Generic_List_object__o *)ObjectList;
    if ( (unsigned int)(initMode - 3) >= 2 )
      v14 = 0.0;
    else
      v14 = 0.1;
  }
  if ( !v15 )
    goto LABEL_19;
  size = v15->fields._size;
  this->fields.callbackCount = size;
  if ( size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               v17,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
      v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ShopBuyItemListViewObject__Init_34300244((ShopBuyItemListViewObject_o *)Item, v10, v19, v14, 0LL);
      if ( ++v17 >= v15->fields._size )
        return;
    }
LABEL_19:
    sub_1BDBAD4(ObjectList, v13);
  }
  this->fields.callbackCount = 1;
  if ( initMode == 1 )
  {
    v20 = this->fields.listInDelay + 0.5;
  }
  else
  {
    v20 = 0.6;
    if ( (unsigned int)(initMode - 3) > 1 )
      v20 = 0.0;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
    v20,
    0LL);
}


void __fastcall ShopBuyItemListViewManager__SetDragMaskStart(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__SetEmptyMessageBaseUnEnable(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyMessageBase; // x0

  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
  {
    emptyMessageBase = this->fields.emptyMessageBase;
    if ( !emptyMessageBase )
      sub_1BDBAD4(0LL, initMode);
    UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetFilterActive(
        ShopBuyItemListViewManager_o *this,
        UICommonButton_o *filterBtn,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B40D6A & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_4B40D6A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_1BDBAD4(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetFilterButtonImage(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *filterSprite; // x20
  __int64 v6; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *v8; // x19
  System_String_o **v9; // x8

  if ( (byte_4B40D74 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17500/*"btn_filter_on"*/, v3);
    sub_1BDB878(&StringLiteral_17499/*"btn_filter"*/, v4);
    byte_4B40D74 = 1;
  }
  filterSprite = (UnityEngine_Object_o *)this->fields.filterSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterSprite, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort
      || (v8 = this->fields.filterSprite,
          sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
          !v8) )
    {
      sub_1BDBAD4(sort, v6);
    }
    v9 = (System_String_o **)&StringLiteral_17499/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v9 = (System_String_o **)&StringLiteral_17500/*"btn_filter_on"*/;
    UISprite__set_spriteName(v8, *v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__SetFilterId(
        ShopBuyItemListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  ShopBuyItemListViewManager__SetList(this, *(const MethodInfo **)&id);
}


void __fastcall ShopBuyItemListViewManager__SetFilterName(
        ShopBuyItemListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *filterTxtSprite; // x21
  UISprite_o *v7; // x21
  __int64 v8; // x1
  UIWidget_o *v9; // x0

  if ( (byte_4B40D69 & 1) == 0 )
  {
    sub_1BDB878(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B40D69 = 1;
  }
  filterTxtSprite = (UnityEngine_Object_o *)this->fields.filterTxtSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(filterTxtSprite, 0LL, 0LL) )
  {
    v7 = this->fields.filterTxtSprite;
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v7, targetFile, 0LL);
    v9 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v9 || (UIWidget__set_width(v9, 52, 0LL), (v9 = (UIWidget_o *)this->fields.filterTxtSprite) == 0LL) )
      sub_1BDBAD4(v9, v8);
    UIWidget__set_height(v9, 20, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v7; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *operationSortInfo; // x0
  bool v15; // w2
  bool v16; // w2

  if ( (byte_4B40D68 & 1) == 0 )
  {
    sub_1BDB878(&ListViewSort_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17622/*"btn_txt_stock_02"*/, v3);
    sub_1BDB878(&StringLiteral_17621/*"btn_txt_stock"*/, v4);
    sub_1BDB878(&StringLiteral_17551/*"btn_txt_all"*/, v5);
    byte_4B40D68 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v7 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
  ListViewSort___ctor_42768220(v7, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v7, v9, v10);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17622/*"btn_txt_stock_02"*/, v12);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL), (operationSortInfo = *p_operationSortInfo) == 0LL) )
    {
LABEL_18:
      sub_1BDBAD4(operationSortInfo, v11);
    }
    v16 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17621/*"btn_txt_stock"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v15 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17551/*"btn_txt_all"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v15 = 0;
    }
    ListViewSort__SetFilter(operationSortInfo, 52, v15, 0LL);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_18;
    v16 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 53, v16, 0LL);
LABEL_16:
  operationSortInfo = this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_18;
  ListViewSort__Set(operationSortInfo, *p_operationSortInfo, 0LL);
}


void __fastcall ShopBuyItemListViewManager__SetMode(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    method);
  ShopBuyItemListViewManager__SetMode_34293368(this, mode, v6);
}


void __fastcall ShopBuyItemListViewManager__SetMode_34293368(
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
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  initMode = this->fields.initMode;
  if ( initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
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


void __fastcall ShopBuyItemListViewManager__SetMode_34294268(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)callback, (int32_t)callback, method);
  ShopBuyItemListViewManager__SetMode_34293368(this, mode, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__SetMultiEventScrollInfo(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s0
  float v5; // s2
  float v6; // s8
  float v7; // s9
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B40D70 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B40D70 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v9.fields.x = *((float *)scrollView + 74);
  v9.fields.y = *((float *)scrollView + 75);
  v9.fields.z = *((float *)scrollView + 76);
  v9.fields.w = 400.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v9, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)scrollView,
                                          0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v6 = v4,
        v7 = v5,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(scrollView, method);
  }
  v8.fields.y = 16.0;
  v8.fields.x = v6;
  v8.fields.z = v7;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v8, 0LL);
}


void __fastcall ShopBuyItemListViewManager__SetObjectItem(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t initMode; // w8
  int v8; // w9
  int32_t v9; // w1

  v5 = this;
  if ( (byte_4B40D66 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1BDB878(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_4B40D66 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
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
  ShopBuyItemListViewObject__Init((ShopBuyItemListViewObject_o *)obj, v9, 0LL);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B40D67 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_4B40D67 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1BDBAD4(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarUnEnable(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
    ShopBuyItemListViewManager__SetScrollBarActive(this, this->fields.scrollBar, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__SetSingleEventScrollInfo(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s0
  float v5; // s2
  float v6; // s8
  float v7; // s9
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B40D6F & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B40D6F = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v9.fields.x = *((float *)scrollView + 74);
  v9.fields.y = *((float *)scrollView + 75);
  v9.fields.z = *((float *)scrollView + 76);
  v9.fields.w = 470.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v9, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)scrollView,
                                          0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v6 = v4,
        v7 = v5,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(scrollView, method);
  }
  v8.fields.y = 82.0;
  v8.fields.x = v6;
  v8.fields.z = v7;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v8, 0LL);
}


void __fastcall ShopBuyItemListViewManager__StopUpdateRemainTime(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BDBAD4(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall ShopBuyItemListViewManager__Update(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  ShopBuyItemListViewManager__UpdateAnotherBuyAble(this, v3);
}


void __fastcall ShopBuyItemListViewManager__UpdateAnotherBuyAble(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *anotherBuyAbleAlphaTransitionCalculator; // x0
  struct AlphaTransitionCalculator_o **p_anotherBuyAbleAlphaTransitionCalculator; // x20
  AlphaTransitionCalculator_o *AlphaTransitionCalculator; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  float realtimeSinceStartup; // s0
  float v10; // s0
  const MethodInfo *v11; // x1
  float v12; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v14; // w8

  if ( (byte_4B40D56 & 1) == 0 )
  {
    sub_1BDB878(&Method_TransitionCalculator_float__Update__, method);
    byte_4B40D56 = 1;
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  p_anotherBuyAbleAlphaTransitionCalculator = &this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
  {
    AlphaTransitionCalculator = ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(0LL, method);
    *p_anotherBuyAbleAlphaTransitionCalculator = AlphaTransitionCalculator;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.anotherBuyAbleAlphaTransitionCalculator,
      (int32_t)AlphaTransitionCalculator,
      v6,
      v7);
    anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
    if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0LL);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
  }
  v10 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)anotherBuyAbleAlphaTransitionCalculator,
          (const MethodInfo_398F200 *)Method_TransitionCalculator_float__Update__);
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  this->fields.alphaAnimNow = v10;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0LL)
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.alphaAnimTimeOld) >= 3.0 )
  {
    anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
    if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__StartFadeOut(anotherBuyAbleAlphaTransitionCalculator, 0LL);
  }
  anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
  if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(anotherBuyAbleAlphaTransitionCalculator, 0LL) )
    return;
  anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
  if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
LABEL_19:
    sub_1BDBAD4(anotherBuyAbleAlphaTransitionCalculator, v8);
  AlphaTransitionCalculator__StartFadeIn(anotherBuyAbleAlphaTransitionCalculator, 0LL);
  v12 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  if ( alphaAnimCnt + 1 < 232792560 )
    v14 = alphaAnimCnt + 1;
  else
    v14 = alphaAnimCnt - 232792559;
  this->fields.alphaAnimTimeOld = v12;
  this->fields.alphaAnimCnt = v14;
  ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(this, v11);
}


float __fastcall ShopBuyItemListViewManager__get_AlphaAnimNow(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ClippingObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_List_object__o *v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B40D55 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BDB878(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B40D55 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BDBAD4(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v14 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopBuyItemListViewObject__GetItem(
                                                                  (ShopBuyItemListViewObject_o *)objectList,
                                                                  0LL);
      if ( objectList )
      {
        v10 = objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42750172(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_21;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v14,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v9;
}


int32_t __fastcall ShopBuyItemListViewManager__get_EventItemCount(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EventItemCount_k__BackingField;
}


int32_t __fastcall ShopBuyItemListViewManager__get_ItemBaseWindowHeight(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BDBAD4(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4B40D54 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BDB878(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B40D54 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BDBAD4(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v17 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)objectList,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v9;
}


void __fastcall ShopBuyItemListViewManager__set_EventItemCount(
        ShopBuyItemListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventItemCount_k__BackingField = value;
}


void __fastcall ShopBuyItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B40D78 & 1) == 0 )
  {
    sub_1BDB878(&ShopBuyItemListViewManager___c_TypeInfo, v1);
    byte_4B40D78 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(ShopBuyItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopBuyItemListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopBuyItemListViewManager___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)ShopBuyItemListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ShopBuyItemListViewManager___c___ctor(ShopBuyItemListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager___c___ChangeNextAnotherItemIcon_b__49_0(
        ShopBuyItemListViewManager___c_o *this,
        ShopBuyItemListViewObject_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B40D79 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, x);
    byte_4B40D79 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( v4 )
  {
    if ( !x )
      sub_1BDBAD4(v4, v5);
    ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(x, v5);
  }
}


void __fastcall ShopBuyItemListViewManager___c__DisplayClass67_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass67_0___GetIndexByItemId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass67_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int32_t ItemId; // w0

  if ( (byte_4B40D7A & 1) == 0 )
  {
    sub_1BDB878(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4B40D7A = 1;
  }
  if ( n
    && (methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(n->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    ItemId = ShopBuyItemListViewItem__get_ItemId((ShopBuyItemListViewItem_o *)n, 0LL);
  }
  else
  {
    ItemId = 0;
  }
  return ItemId == this->fields.itemId;
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass67_0___GetIndexByItemId_b__1(
        ShopBuyItemListViewManager___c__DisplayClass67_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int32_t ItemId; // w0

  if ( (byte_4B40D7C & 1) == 0 )
  {
    sub_1BDB878(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4B40D7C = 1;
  }
  if ( n
    && (methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(n->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    ItemId = ShopBuyItemListViewItem__get_ItemId((ShopBuyItemListViewItem_o *)n, 0LL);
  }
  else
  {
    ItemId = 0;
  }
  return ItemId == this->fields.itemId;
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass67_0___GetIndexByItemId_b__2(
        ShopBuyItemListViewManager___c__DisplayClass67_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  ListViewItem_c *klass; // x9
  ShopBuyItemListViewItem_c *v6; // x8
  unsigned int methodPtr_low; // w11
  __int64 v8; // x10

  if ( (byte_4B40D7B & 1) == 0 )
  {
    sub_1BDB878(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4B40D7B = 1;
  }
  if ( !n )
    return 0;
  klass = n->klass;
  v6 = ShopBuyItemListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(n->klass->vtable._0_Equals.methodPtr);
  v8 = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( methodPtr_low >= (unsigned int)v8
    && (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[v8 - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    if ( ShopBuyItemListViewItem__get_ItemId((ShopBuyItemListViewItem_o *)n, 0LL) != this->fields.itemId )
      return 0;
    klass = n->klass;
    v6 = ShopBuyItemListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(n->klass->vtable._0_Equals.methodPtr);
    LODWORD(v8) = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  }
  else if ( this->fields.itemId )
  {
    return 0;
  }
  if ( methodPtr_low >= (unsigned int)v8
    && (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[(unsigned int)v8 - 1] == v6 )
  {
    return !ShopBuyItemListViewItem__IsDisabledDisp((ShopBuyItemListViewItem_o *)n, 0LL);
  }
  return 0;
}


void __fastcall ShopBuyItemListViewManager___c__DisplayClass68_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass68_0___GetIndexByTargetId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass68_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int32_t TargetId; // w0

  if ( (byte_4B40D7D & 1) == 0 )
  {
    sub_1BDB878(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4B40D7D = 1;
  }
  if ( n
    && (methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(n->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    TargetId = ShopBuyItemListViewItem__get_TargetId((ShopBuyItemListViewItem_o *)n, 0LL);
  }
  else
  {
    TargetId = 0;
  }
  return TargetId == this->fields.targetId;
}