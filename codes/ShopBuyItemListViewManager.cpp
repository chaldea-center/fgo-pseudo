void ShopBuyItemListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v4; // x20
  struct ShopBuyItemListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB24C0 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewSort_TypeInfo);
    sub_1C6BA08(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_6285/*"ExchangeSvtCoinShop"*/);
    byte_4CB24C0 = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6285/*"ExchangeSvtCoinShop"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)ShopBuyItemListViewManager_TypeInfo->static_fields, StringLiteral_6285/*"ExchangeSvtCoinShop"*/, v1, v2);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v4 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v4, SORT_SAVE_KEY, 27, 0, 0);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->exchangeSvtCoinSortInfo, (int32_t)v4, v6, v7);
}


void ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_CEC9D0;
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816;
  this->fields.listInDelay = 0.1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ShopBuyItemListViewManager__ChangeFilter(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 filterStatus; // x8
  int32_t v4; // w20

  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 2 )
    this->fields.filterStatus = dword_D1F9DC[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v4 = this->fields.filterStatus;
  if ( !byte_4CB077D )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB077D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v4;
  EventRewardSaveData__SaveItemFilter(this->fields.eventId, this->fields.targetSlot, 0);
}


void ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  ShopBuyItemListViewManager___c_c *v5; // x8
  System_Collections_Generic_List_object__o *v6; // x19
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v8; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB24A2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_ShopBuyItemListViewObject__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__);
    sub_1C6BA08(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_4CB24A2 = 1;
  }
  ObjectList = ShopBuyItemListViewManager__get_ObjectList(this, method);
  v5 = ShopBuyItemListViewManager___c_TypeInfo;
  v6 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v5 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__51_0 = (System_Action_object__o *)v5->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_ShopBuyItemListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__51_0,
      v8,
      Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__,
      0);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_ShopBuyItemListViewObject__o *)_9__51_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v10, v11);
  }
  if ( !v6 )
    sub_1C6BC60(ObjectList, v4);
  System_Collections_Generic_List_object___ForEach(
    v6,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
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
  const MethodInfo *v13; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_4CB24A8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB24A8 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0)) == 0
    || (itemList = this->fields.itemList) == 0 )
  {
    sub_1C6BC60(Instance, v12);
  }
  if ( itemList->fields._size != LODWORD(Instance->max_length) )
    ShopBuyItemListViewManager__CreateList_35410532(this, 6, eventId, slot, eventNum, isForcedAdjustment, v13);
}


AlphaTransitionCalculator_o *ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  float v2; // s8
  System_Func_float__float__float__float__o *v3; // x19
  AlphaTransitionCalculator_o *v4; // x20

  if ( (byte_4CB24A1 & 1) == 0 )
  {
    sub_1C6BA08(&AlphaTransitionCalculator_TypeInfo);
    byte_4CB24A1 = 1;
  }
  v2 = ChangedFPSUtil__CovertFrameNumToSecond(7, 0);
  v3 = ExtraEasing__AsymptoticSeriesFloat(0.5, 7.0, 0);
  v4 = (AlphaTransitionCalculator_o *)sub_1C6BC54(AlphaTransitionCalculator_TypeInfo);
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
  const MethodInfo *v6; // x6

  ShopBuyItemListViewManager__CreateList_35410532(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void ShopBuyItemListViewManager__CreateExchangeSvtCoinList(
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

  if ( (byte_4CB24A3 & 1) == 0 )
  {
    sub_1C6BA08(&ShopBuyItemListViewManager_TypeInfo);
    byte_4CB24A3 = 1;
  }
  v6 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
    v6 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v6->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)exchangeSvtCoinSortInfo, (int32_t)method, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C6BC60(0, v8);
  ListViewSort__Load(sort, 0);
  ShopBuyItemListViewManager__CreateList_35410532(this, 22, 0, svtCoinType, 0, 0, v10);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v11);
}


void ShopBuyItemListViewManager__CreateList(ShopBuyItemListViewManager_o *this, int32_t kind, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_35410532(this, kind, 0, 0, 0, 0, v3);
}


void ShopBuyItemListViewManager__CreateList_35410532(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x21
  System_Int32_array *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x6
  const MethodInfo *v23; // x4
  ShopEntity_array *ShopEntities; // x27
  System_Collections_Generic_List_object__o *v25; // x26
  Il2CppObject *v26; // x28
  const MethodInfo *v27; // x3
  int max_length; // w8
  ShopBuyItemListViewManager_o *v29; // x25
  _QWORD *v30; // x21
  int v31; // w22
  bool v32; // w24
  ShopEntity_o *v33; // x29
  System_Int32_array *targetIds; // x8
  unsigned __int64 v35; // x20
  unsigned __int64 max_length_low; // x9
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  __int64 v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  const MethodInfo *v43; // x3
  _QWORD *v44; // x27
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v46; // w25
  ListViewItem_o *v47; // x20
  const MethodInfo *v48; // x2
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  __int64 v55; // x8
  System_Collections_Generic_List_object__o *v56; // x0
  struct System_Object_array *items; // x8
  __int64 v58; // x9
  __int64 size; // x10
  int32_t v60; // w27
  System_Collections_Generic_List_object__o *v61; // x28
  int32_t v62; // w23
  Il2CppObject *Item; // x29
  ListViewItem_o *v64; // x20
  const MethodInfo *v65; // x2
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  System_Collections_Generic_List_object__o *v72; // x28
  int32_t v73; // w26
  System_Collections_Generic_List_object__o *v74; // x27
  int32_t v75; // w23
  Il2CppObject *v76; // x28
  ListViewItem_o *v77; // x20
  const MethodInfo *v78; // x2
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v86; // w23
  __int64 v87; // x8
  __int64 v88; // x9
  __int64 v89; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v91; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v93; // w22
  int32_t v94; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v96; // x1
  int32_t v97; // w8
  __int64 *v98; // x9
  System_String_o **v99; // x8
  System_String_o *v100; // x21
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  struct ListViewSort_o *sort; // x1
  _BOOL8 v104; // x0
  const MethodInfo *v105; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v107; // [xsp+4h] [xbp-9Ch]
  int32_t v108; // [xsp+8h] [xbp-98h]
  int32_t v109; // [xsp+Ch] [xbp-94h]
  ShopEntity_array *v110; // [xsp+10h] [xbp-90h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_object__o *v112; // [xsp+20h] [xbp-80h]
  int32_t index; // [xsp+2Ch] [xbp-74h]
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  EventRewardSceneEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB24A4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ShopBuyItemListViewItem_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_12179/*"SHOP_SPECIAL_LIST_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_12129/*"SHOP_LIST_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_5698/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_5763/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/);
    byte_4CB24A4 = 1;
  }
  possessionAnotherItemId = 0;
  entity = 0;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v16);
  v14 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v14 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_132;
    Instance = (DataManager_o *)ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, this->fields.eventId, 0);
    if ( !Instance )
      goto LABEL_132;
    currencyInfoController = this->fields.currencyInfoController;
    v19 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v14);
    if ( !currencyInfoController )
      goto LABEL_132;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1C6B9AC((CGThumbnailListItem_o *)&currencyInfoController->fields.objectList, (int32_t)Instance, v20, v21);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_132;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v19,
      isForcedAdjustment,
      v22);
    LODWORD(v14) = this->fields.kind;
  }
  v107 = eventNum;
  v109 = kind;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v14,
                                                v17);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v23);
  v112 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v112,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  v26 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
  ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v27);
  if ( !ShopEntities )
    goto LABEL_132;
  max_length = ShopEntities->max_length;
  v29 = EnterTime;
  v108 = slot;
  if ( max_length < 1 )
  {
    v32 = 0;
    index = 0;
    if ( !v25 )
      goto LABEL_132;
    goto LABEL_57;
  }
  index = 0;
  v30 = &Method_System_Collections_Generic_List_ShopEntity__Add__;
  v31 = 0;
  v32 = 0;
  v110 = ShopEntities;
  do
  {
    if ( v31 >= (unsigned int)max_length )
LABEL_133:
      sub_1C6BC68(Instance);
    v33 = ShopEntities->m_Items[v31];
    if ( !v33 )
      goto LABEL_132;
    if ( v33->fields.purchaseType == 6 )
    {
      targetIds = v33->fields.targetIds;
      possessionAnotherItemId = targetIds;
      if ( !targetIds )
        goto LABEL_132;
      v35 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(targetIds->max_length);
        if ( (__int64)v35 >= (int)max_length_low )
          break;
        if ( v35 >= max_length_low )
          goto LABEL_133;
        if ( v26 )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v26,
                                        targetIds->m_Items[v35],
                                        (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_53;
          targetIds = possessionAnotherItemId;
          ++v35;
          if ( possessionAnotherItemId )
            continue;
        }
        goto LABEL_132;
      }
    }
    if ( v32 )
    {
      v32 = 1;
    }
    else
    {
      v32 = v33->fields.purchaseType == 16;
      this->fields.targetSlot = v33->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v33, 0) && !ShopEntity__GetIsNotHavingShopItemReceived(v33, 0) )
    {
      Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v33, &possessionAnotherItemId, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v112 )
          goto LABEL_132;
        items = v112->fields._items;
        v58 = *v30;
        ++v112->fields._version;
        if ( !items )
          goto LABEL_132;
        size = v112->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
        {
          v42 = &items->obj.klass + size;
          v112->fields._size = size + 1;
          goto LABEL_48;
        }
        v55 = *(_QWORD *)(v58 + 32);
        v56 = v112;
        goto LABEL_52;
      }
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v33, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_132;
      v39 = v25->fields._items;
      v40 = *v30;
      ++v25->fields._version;
      if ( !v39 )
        goto LABEL_132;
      v41 = v25->fields._size;
      if ( (unsigned int)v41 < LODWORD(v39->max_length) )
      {
        v42 = &v39->obj.klass + v41;
        v25->fields._size = v41 + 1;
LABEL_48:
        v42[4] = (Il2CppClass *)v33;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v33, v37, v38);
        goto LABEL_53;
      }
      v55 = *(_QWORD *)(v40 + 32);
      v56 = v25;
LABEL_52:
      System_Collections_Generic_List_object___AddWithResize(
        v56,
        (Il2CppObject *)v33,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v55 + 192) + 112LL));
      goto LABEL_53;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v33, 0);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v33, (int32_t)Instance, v43),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v33->fields.id >= 1 )
      {
        v44 = v30;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v46 = this->fields.kind;
        v47 = (ListViewItem_o *)sub_1C6BC54(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_44050768(v47, index, 0);
        v47[1].fields.sortIndex = v46;
        v29 = EnterTime;
        v47[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v47, v33, v48);
        if ( !itemList )
          goto LABEL_132;
        v51 = itemList->fields._items;
        v52 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v51 )
          goto LABEL_132;
        v53 = itemList->fields._size;
        if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v47,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &v51->obj.klass + v53;
          itemList->fields._size = v53 + 1;
          v54[4] = (Il2CppClass *)v47;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v47, v49, v50);
        }
        v30 = v44;
        ShopEntities = v110;
        ++index;
      }
    }
LABEL_53:
    max_length = ShopEntities->max_length;
    ++v31;
  }
  while ( v31 < max_length );
  if ( !v25 )
    goto LABEL_132;
LABEL_57:
  if ( v25->fields._size >= 1 )
  {
    v60 = 0;
    do
    {
      v61 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v62 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               v60,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v64 = (ListViewItem_o *)sub_1C6BC54(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_44050768(v64, index + v60, 0);
      v64[1].fields.sortIndex = v62;
      v64[1].fields.sortValue0 = (int64_t)v29;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v64, (ShopEntity_o *)Item, v65);
      if ( !v61 )
        goto LABEL_132;
      v68 = v61->fields._items;
      v69 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v61->fields._version;
      if ( !v68 )
        goto LABEL_132;
      v70 = v61->fields._size;
      if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v61,
          (Il2CppObject *)v64,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = &v68->obj.klass + v70;
        v61->fields._size = v70 + 1;
        v71[4] = (Il2CppClass *)v64;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v64, v66, v67);
      }
      ++v60;
    }
    while ( v60 < v25->fields._size );
    index += v60;
  }
  v72 = v112;
  if ( !v112 )
    goto LABEL_132;
  if ( v112->fields._size >= 1 )
  {
    v73 = 0;
    do
    {
      v74 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v75 = this->fields.kind;
      v76 = System_Collections_Generic_List_object___get_Item(
              v72,
              v73,
              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v77 = (ListViewItem_o *)sub_1C6BC54(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_44050768(v77, index + v73, 0);
      v77[1].fields.sortIndex = v75;
      v77[1].fields.sortValue0 = (int64_t)v29;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v77, (ShopEntity_o *)v76, v78);
      if ( !v74 )
        goto LABEL_132;
      v81 = v74->fields._items;
      v82 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v74->fields._version;
      if ( !v81 )
        goto LABEL_132;
      v83 = v74->fields._size;
      v72 = v112;
      if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v74,
          (Il2CppObject *)v77,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v84 = &v81->obj.klass + v83;
        v74->fields._size = v83 + 1;
        v84[4] = (Il2CppClass *)v77;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v77, v79, v80);
      }
    }
    while ( ++v73 < v112->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    v86 = v109;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.scrollBar;
      if ( !Instance )
        goto LABEL_132;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_132;
      v87 = 348;
      if ( v107 == 1 )
      {
        v87 = 336;
        v88 = 332;
      }
      else
      {
        v88 = 344;
      }
      if ( v107 == 1 )
        v89 = 328;
      else
        v89 = 340;
      v116.fields.z = *(float *)((char *)&this->klass + v87);
      v116.fields.y = *(float *)((char *)&this->klass + v88);
      v116.fields.x = *(float *)((char *)&this->klass + v89);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v116, 0);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_132;
      if ( v107 == 1 )
        v91 = 338;
      else
        v91 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v91, 0);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v93 = v108;
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_132;
      if ( v107 == 1 )
        v94 = 348;
      else
        v94 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v94, 0);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5698/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0);
    if ( emptyMessageLabel )
    {
      v96 = (System_String_o *)Instance;
      goto LABEL_117;
    }
LABEL_132:
    sub_1C6BC60(Instance, v14);
  }
  v97 = this->fields.kind;
  v98 = &StringLiteral_12129/*"SHOP_LIST_EMPTY"*/;
  if ( v97 == 22 )
    v98 = (__int64 *)&StringLiteral_5763/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
  if ( v97 == 12 )
    v99 = (System_String_o **)&StringLiteral_12179/*"SHOP_SPECIAL_LIST_EMPTY"*/;
  else
    v99 = (System_String_o **)v98;
  v100 = *v99;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v86 = v109;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v100, 0);
  v93 = v108;
  if ( !emptyMessageLabel )
    goto LABEL_132;
  v96 = (System_String_o *)Instance;
LABEL_117:
  UILabel__set_text(emptyMessageLabel, v96, 0);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v101, v102);
  }
  if ( !v32 )
    goto LABEL_128;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_132;
  v104 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v104 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v104, this->fields.filterBtn, 1, v105);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0);
      if ( !byte_4CB077E )
      {
        sub_1C6BA08(&EventRewardSaveData_TypeInfo);
        byte_4CB077E = 1;
      }
      ItemFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
      goto LABEL_129;
    }
LABEL_128:
    ItemFilterId_k__BackingField = 0;
  }
LABEL_129:
  this->fields.filterStatus = ItemFilterId_k__BackingField;
  ShopBuyItemListViewManager__SetList(this, (const MethodInfo *)sort);
  if ( v86 == 22 )
    this->fields.targetExchangeSvtCoinFolder = v93;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void ShopBuyItemListViewManager__CreateList_35413532(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_35410532(this, 6, eventId, 0, 0, 0, v3);
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

  if ( (byte_4CB24BD & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB24BD = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_35422864(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1C6BC60(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0, 0);
}


void ShopBuyItemListViewManager__FocusTopItem(
        ShopBuyItemListViewManager_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  int32_t ShopFocusItemId_k__BackingField; // w1
  int32_t IndexByTargetId; // w0
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4CB24A5 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB24A5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2520 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2520 = 1;
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
    if ( !byte_4CB2520 )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB2520 = 1;
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
    if ( (IndexByTargetId & 0x80000000) == 0 )
      ListViewManager__SetTopItem((ListViewManager_o *)this, IndexByTargetId, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CB2521 )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB2521 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_ShopFocusItemId_k__BackingField = 0;
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
    return dword_D1F9E8[state - 2];
}


int32_t ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D1FA3C[state - 2];
}


int64_t ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4CB24A6 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB24A6 = 1;
  }
  if ( (unsigned int)kind > 9 || ((1 << kind) & 0x304) == 0 )
    return -1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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

  if ( (byte_4CB24AE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_ListViewItem___);
    sub_1C6BA08(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_1C6BA08(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__2__);
    sub_1C6BA08(&ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo);
    byte_4CB24AE = 1;
  }
  v5 = sub_1C6BC54(ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v10 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__,
    0);
  if ( System_Linq_Enumerable__Count_object__51761312(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)v10,
         (const MethodInfo_315D0A0 *)Method_System_Linq_Enumerable_Count_ListViewItem___) < 2 )
    goto LABEL_11;
  v11 = this->fields.itemList;
  v12 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__2__,
    0);
  if ( !v11 )
    goto LABEL_13;
  result = System_Collections_Generic_List_object___FindIndex(
             (System_Collections_Generic_List_object__o *)v11,
             (System_Predicate_T__o *)v12,
             (const MethodInfo_38011CC *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( result < 0 )
  {
LABEL_11:
    v13 = this->fields.itemList;
    v14 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__,
      0);
    if ( v13 )
      return System_Collections_Generic_List_object___FindIndex(
               (System_Collections_Generic_List_object__o *)v13,
               (System_Predicate_T__o *)v14,
               (const MethodInfo_38011CC *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
LABEL_13:
    sub_1C6BC60(v6, v7);
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

  if ( (byte_4CB24AF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_1C6BA08(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__);
    sub_1C6BA08(&ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo);
    byte_4CB24AF = 1;
  }
  v5 = sub_1C6BC54(ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_DWORD *)(v5 + 16) = targetId;
  if ( targetId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v10 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__,
    0);
  if ( !itemList )
LABEL_9:
    sub_1C6BC60(v6, v7);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v10,
           (const MethodInfo_38011CC *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
}


float ShopBuyItemListViewManager__GetInvokeDelay(
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
bool ShopBuyItemListViewManager__GetIsShowEventItemWindow(int32_t state, int32_t eventId, const MethodInfo *method)
{
  int v5; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v10; // x1
  int32_t PayType; // w0

  if ( (byte_4CB24BB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB24BB = 1;
  }
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
      {
        sub_1C6BC60(Instance, v8);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0);
      if ( EventItemList && EventItemList->max_length )
        goto LABEL_14;
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
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

  if ( (byte_4CB24AD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CB24AD = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  result = 0.1;
  if ( initMode != 1 && (unsigned int)(initMode - 3) >= 2 )
    return 0.0;
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

  if ( (byte_4CB24B5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    byte_4CB24B5 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v6;
}


int32_t ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  ShopEntity_o *v5; // x8

  if ( (byte_4CB24B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB24B8 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_1C6BC60(Instance, v4);
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
  int32_t v10; // w2
  int32_t v12; // w1

  if ( (byte_4CB24A7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB24A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C6BC60(Instance, v9);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_42;
      v10 = 2;
      goto LABEL_36;
    case 6:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0);
    case 7:
      if ( !Instance )
        goto LABEL_42;
      v10 = 6;
      goto LABEL_36;
    case 8:
      if ( !Instance )
        goto LABEL_42;
      v10 = 7;
      goto LABEL_36;
    case 9:
      if ( !Instance )
        goto LABEL_42;
      v10 = 3;
      goto LABEL_36;
    case 10:
      if ( !Instance )
        goto LABEL_42;
      v10 = 4;
      goto LABEL_36;
    case 11:
      if ( !Instance )
        goto LABEL_42;
      v10 = 5;
      goto LABEL_36;
    case 12:
      if ( !Instance )
        goto LABEL_42;
      v10 = 9;
      goto LABEL_36;
    case 13:
      if ( !Instance )
        goto LABEL_42;
      v10 = 10;
      goto LABEL_36;
    case 14:
      if ( !Instance )
        goto LABEL_42;
      v10 = 11;
      goto LABEL_36;
    case 15:
      if ( !Instance )
        goto LABEL_42;
      v10 = 12;
      goto LABEL_36;
    case 16:
      if ( !Instance )
        goto LABEL_42;
      v10 = 13;
      goto LABEL_36;
    case 18:
      if ( !Instance )
        goto LABEL_42;
      v10 = 14;
      goto LABEL_36;
    case 20:
      if ( !Instance )
        goto LABEL_42;
      v10 = 15;
      goto LABEL_36;
    case 21:
      if ( !Instance )
        goto LABEL_42;
      v10 = 16;
LABEL_36:
      v12 = 0;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v12, v10, 0);
    case 22:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableExchangeSvtCoinEntitiyList((ShopMaster_o *)Instance, slot, 0);
    case 23:
      if ( !Instance )
        goto LABEL_42;
      v12 = 23;
      v10 = 18;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v12, v10, 0);
    default:
      return 0;
  }
}


void ShopBuyItemListViewManager__InvalidateList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v4; // w20
  Il2CppObject *Item; // x21
  bool v6; // w0
  Il2CppObject *Component_object; // x21

  if ( (byte_4CB24AC & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB24AC = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1C6BC60(objectList, method);
  v4 = 0;
  while ( v4 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v4,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
    Component_object = 0;
    if ( v6 )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_18;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v4,
                                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  return ShopBuyItemListViewManager__ModifyList_35421884(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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
  const MethodInfo *v10; // x6
  const MethodInfo *v11; // x2

  if ( (byte_4CB24A9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB24A9 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_33F90DC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0),
        !Entity) )
  {
    sub_1C6BC60(Instance, v4);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0);
  ShopBuyItemListViewManager__CreateList_35410532(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v10);
  ShopBuyItemListViewManager__SetMode_35422864(this, 2, v11);
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

  if ( (byte_4CB24AB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CB24AB = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1C6BC60(itemList, shopEntity);
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v8,
                                                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  return ShopBuyItemListViewManager__ModifyList_35421884(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


bool ShopBuyItemListViewManager__ModifyList_35421884(
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
  const MethodInfo *v18; // x6
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  ShopCurrencyInfoController_o *v35; // x28
  _BOOL4 isEventShop; // w29
  const MethodInfo *v37; // x6
  const MethodInfo *v38; // x3
  int m_CancellationTokenSource; // w8
  unsigned int v40; // w27
  DataManager_c **v41; // x8
  ShopEntity_o *v42; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v44; // x3

  if ( (byte_4CB24AA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB24AA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_33F90DC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v31 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v32);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1C6B9AC(
              (CGThumbnailListItem_o *)&currencyInfoController->fields.objectList,
              (int32_t)Instance,
              v33,
              v34);
            if ( v31 )
            {
              v35 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v31, 0);
              if ( v35 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v35,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  (unsigned __int8)Instance & 1,
                  v37);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1C6BC60(Instance, v14);
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
      v40 = 0;
      while ( 1 )
      {
        if ( v40 >= m_CancellationTokenSource )
          sub_1C6BC68(Instance);
        v41 = &v19->klass + (int)v40;
        v42 = (ShopEntity_o *)v41[4];
        if ( !v42 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      (ShopEntity_o *)v41[4],
                                      v42->fields.id,
                                      v38);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v42, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v42, 0);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v42, PurchaseShop, v44);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
        if ( (int)++v40 >= m_CancellationTokenSource )
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
  ShopBuyItemListViewManager__CreateList_35410532(v22, v23, v24, v25, v26, v27, v18);
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

  if ( (byte_4CB24BC & 1) == 0 )
  {
    sub_1C6BA08(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB24BC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C6BC60(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 15, sort, v8, 0, 0);
  }
}


void ShopBuyItemListViewManager__OnClickListView(
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
    p_onClickListViewItem->klass = 0;
    sub_1C6B9AC(p_onClickListViewItem, 0, (int32_t)method, v3);
    if ( !obj )
      sub_1C6BC60(v7, v8);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickListViewItem->fields.invoke_impl)(
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
  const MethodInfo *v7; // x3
  char v8; // w20
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  UnityEngine_Object_o *scrollView; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4CB24B7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB24B7 = 1;
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
        v8 = 1;
        ShopBuyItemListViewManager__SetScrollBarActive(v6, this->fields.scrollBar, 1, v7);
        itemSortList = this->fields.itemSortList;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( itemSortList )
          v8 = itemSortList->fields._size < 1;
        if ( !emptyMessageBase )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive(emptyMessageBase, v8, 0);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_15;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.element_class)(
          emptyMessageBase,
          1,
          emptyMessageBase->klass[1]._1.castClass);
LABEL_15:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onMoveEnd, 0, v13, v14);
          ((void (__fastcall *)(intptr_t, intptr_t))onMoveEnd->fields.invoke_impl)(
            onMoveEnd->fields.method_code,
            onMoveEnd->fields.method);
        }
        return;
      }
LABEL_18:
      sub_1C6BC60(emptyMessageBase, v9);
    }
  }
}


void ShopBuyItemListViewManager__RequestListObject(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t v5; // w21
  char v6; // w23
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  float v10; // s8
  System_Collections_Generic_List_object__o *v11; // x22
  int32_t size; // w8
  int32_t v13; // w20
  Il2CppObject *Item; // x23
  System_Action_o *v15; // x24
  const MethodInfo *v16; // x3
  float v17; // s0

  if ( (byte_4CB24B6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB24B6 = 1;
  }
  v5 = 6;
  switch ( initMode )
  {
    case 1:
      v6 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v7);
      v10 = 0.1;
      v11 = (System_Collections_Generic_List_object__o *)ObjectList;
      v5 = 4;
      goto LABEL_12;
    case 2:
      v5 = 3;
      goto LABEL_9;
    case 3:
      v5 = 5;
      goto LABEL_9;
    case 4:
      goto LABEL_9;
    case 5:
      v5 = 7;
      goto LABEL_9;
    default:
      v5 = 0;
LABEL_9:
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, initMode, method);
      v11 = (System_Collections_Generic_List_object__o *)ObjectList;
      v6 = 0;
      if ( (unsigned int)(initMode - 3) >= 2 )
        v10 = 0.0;
      else
        v10 = 0.1;
LABEL_12:
      if ( !v11 )
        goto LABEL_23;
      size = v11->fields._size;
      this->fields.callbackCount = size;
      if ( size < 1 )
      {
        this->fields.callbackCount = 1;
        if ( (v6 & 1) != 0 )
        {
          v17 = this->fields.listInDelay + 0.5;
        }
        else
        {
          v17 = 0.6;
          if ( (unsigned int)(initMode - 3) > 1 )
            v17 = 0.0;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
          v17,
          0);
      }
      else
      {
        v13 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v11,
                   v13,
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0);
          if ( !Item )
LABEL_23:
            sub_1C6BC60(ObjectList, v9);
          ShopBuyItemListViewObject__Init_35425904((ShopBuyItemListViewObject_o *)Item, v5, v15, v10, v16);
          ++v13;
        }
        while ( v13 < v11->fields._size );
      }
      return;
  }
}


void ShopBuyItemListViewManager__SetDragMaskStart(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
}


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
      sub_1C6BC60(0, initMode);
    UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0);
  }
}


void ShopBuyItemListViewManager__SetFilterActive(
        ShopBuyItemListViewManager_o *this,
        UICommonButton_o *filterBtn,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4CB24B4 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB24B4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0)) == 0 )
    {
      sub_1C6BC60(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemListViewManager__SetFilterButtonImage(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *filterSprite; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *v6; // x19
  System_String_o **v7; // x8

  if ( (byte_4CB24BE & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17502/*"btn_filter_on"*/);
    sub_1C6BA08(&StringLiteral_17501/*"btn_filter"*/);
    byte_4CB24BE = 1;
  }
  filterSprite = (UnityEngine_Object_o *)this->fields.filterSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterSprite, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort
      || (v6 = this->fields.filterSprite, sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0), !v6) )
    {
      sub_1C6BC60(sort, v4);
    }
    v7 = (System_String_o **)&StringLiteral_17501/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v7 = (System_String_o **)&StringLiteral_17502/*"btn_filter_on"*/;
    UISprite__set_spriteName(v6, *v7, 0);
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
  UISprite_o *v6; // x21
  __int64 v7; // x1
  UIWidget_o *v8; // x0

  if ( (byte_4CB24B3 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardRootComponent_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB24B3 = 1;
  }
  filterTxtSprite = (UnityEngine_Object_o *)this->fields.filterTxtSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(filterTxtSprite, 0, 0) )
  {
    v6 = this->fields.filterTxtSprite;
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v6, targetFile, 0);
    v8 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v8 || (UIWidget__set_width(v8, 52, 0), (v8 = (UIWidget_o *)this->fields.filterTxtSprite) == 0) )
      sub_1C6BC60(v8, v7);
    UIWidget__set_height(v8, 20, 0);
  }
}


void ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *operationSortInfo; // x0
  bool v12; // w2
  bool v13; // w2

  if ( (byte_4CB24B2 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewSort_TypeInfo);
    sub_1C6BA08(&StringLiteral_17625/*"btn_txt_stock_02"*/);
    sub_1C6BA08(&StringLiteral_17624/*"btn_txt_stock"*/);
    sub_1C6BA08(&StringLiteral_17554/*"btn_txt_all"*/);
    byte_4CB24B2 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44085388(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17625/*"btn_txt_stock_02"*/, v9);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0), (operationSortInfo = *p_operationSortInfo) == 0) )
    {
LABEL_18:
      sub_1C6BC60(operationSortInfo, v8);
    }
    v13 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17624/*"btn_txt_stock"*/, v9);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v12 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17554/*"btn_txt_all"*/, v9);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v12 = 0;
    }
    ListViewSort__SetFilter(operationSortInfo, 52, v12, 0);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_18;
    v13 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 53, v13, 0);
LABEL_16:
  operationSortInfo = this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_18;
  ListViewSort__Set(operationSortInfo, *p_operationSortInfo, 0);
}


void ShopBuyItemListViewManager__SetMode(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    method);
  ShopBuyItemListViewManager__SetMode_35422864(this, mode, v6);
}


void ShopBuyItemListViewManager__SetMode_35422864(
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


void ShopBuyItemListViewManager__SetMode_35424144(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)callback, (int32_t)callback, method);
  ShopBuyItemListViewManager__SetMode_35422864(this, mode, v7);
}


void ShopBuyItemListViewManager__SetMultiEventScrollInfo(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB24BA & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4CB24BA = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v8.fields.x = *((float *)scrollView + 74);
  v8.fields.y = *((float *)scrollView + 75);
  v8.fields.z = *((float *)scrollView + 76);
  v8.fields.w = 400.0;
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
    sub_1C6BC60(scrollView, method);
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
  if ( (byte_4CB24B0 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1C6BA08(&ShopBuyItemListViewObject_TypeInfo);
    byte_4CB24B0 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopBuyItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
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
  ShopBuyItemListViewObject__Init_35425904((ShopBuyItemListViewObject_o *)obj, v9, 0, 0.0, method);
}


void ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4CB24B1 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB24B1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0)) == 0 )
    {
      sub_1C6BC60(gameObject, v7);
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

  if ( (byte_4CB24B9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4CB24B9 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v8.fields.x = *((float *)scrollView + 74);
  v8.fields.y = *((float *)scrollView + 75);
  v8.fields.z = *((float *)scrollView + 76);
  v8.fields.w = 470.0;
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
    sub_1C6BC60(scrollView, method);
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
  __int64 v7; // x24
  __int64 Master_object; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *skillPartsLimitLabel; // x19
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x19
  System_Func_object__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Object_array *v15; // x19
  int max_length; // w8
  CommonReleaseMaster_o *v17; // x24
  int v18; // w20
  Il2CppObject *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EntitiyList; // x24
  ShopBuyItemListViewManager___c_c *v21; // x8
  System_Func_object__bool__o *_9__106_2; // x22
  Il2CppObject *v23; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  CommonReleaseMaster_o *v28; // x24
  __int64 v29; // x1
  __int64 condValue; // x0
  System_Collections_Generic_IEnumerable_TSource__o *List; // x24
  ShopBuyItemListViewManager___c_c *v32; // x8
  System_Func_object__bool__o *_9__106_3; // x22
  Il2CppObject *v34; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x0
  __int64 v39; // x21
  System_Object_array *v40; // x11
  int v41; // w8
  unsigned int v42; // w26
  bool v43; // w9
  Il2CppObject *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_List_TSource__o *v46; // x0
  ShopBuyItemListViewManager___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x25
  System_Func_object__bool__o *_9__106_4; // x22
  Il2CppObject *v50; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Collections_Generic_List_object__o *v55; // x25
  int32_t v56; // w26
  int v57; // w10
  int32_t v58; // w0
  CommonReleaseEntity_array *v59; // x0
  ShopBuyItemListViewManager___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x27
  System_Func_object__int__o *_9__106_5; // x22
  Il2CppObject *v63; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x28
  ShopBuyItemListViewManager___c_c *v69; // x8
  System_Func_object__bool__o *_9__106_6; // x22
  Il2CppObject *v71; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  __int64 v75; // x8
  __int64 v76; // x27
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x27
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x22
  int32_t v92; // w19
  int32_t v93; // w29
  int64_t v94; // x21
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  System_Func_object__bool__o *v99; // x19
  Il2CppObject *v100; // x0
  Il2CppObject *v101; // x20
  System_Collections_ICollection_o *TargetEntityList; // x21
  System_String_o **v103; // x8
  int v104; // w21
  int klass_high; // w22
  void *monitor; // x8
  int v107; // w25
  UserShopMaster_o *v108; // x22
  int v109; // w26
  int v110; // w19
  __int64 v111; // x8
  int32_t v112; // w24
  System_String_o *v113; // x20
  UILabel_o *v114; // x19
  System_String_o *v115; // x20
  Il2CppObject *v116; // x21
  Il2CppObject *v117; // x0
  unsigned int v118; // [xsp+4h] [xbp-DCh]
  ShopReleaseMaster_o *v119; // [xsp+8h] [xbp-D8h]
  System_Object_array *v120; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-C8h]
  __int64 v122; // [xsp+28h] [xbp-B8h]
  CommonReleaseMaster_o *v123; // [xsp+30h] [xbp-B0h]
  int v124; // [xsp+3Ch] [xbp-A4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+40h] [xbp-A0h] BYREF
  UserShopEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v127; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4CB24BF & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____78610376);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__);
    sub_1C6BA08(&System_Func_CommonReleaseEntity__int__TypeInfo);
    sub_1C6BA08(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_ShopReleaseEntity__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__);
    sub_1C6BA08(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__);
    sub_1C6BA08(&ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo);
    sub_1C6BA08(&ShopBuyItemListViewManager___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_5679/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/);
    sub_1C6BA08(&StringLiteral_5680/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/);
    sub_1C6BA08(&StringLiteral_5682/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/);
    byte_4CB24BF = 1;
  }
  memset(&v127, 0, sizeof(v127));
  entity = 0;
  v7 = sub_1C6BC54(ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_152;
  *(_DWORD *)(v7 + 16) = slot;
  skillPartsLimitLabel = (UnityEngine_Object_o *)this->fields.skillPartsLimitLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillPartsLimitLabel, 0, 0) )
    return;
  Master_object = (__int64)this->fields.skillPartsLimitLabel;
  if ( !Master_object )
    goto LABEL_152;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
    return;
  if ( !this->fields.havePurchaseLimit )
  {
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( !Master_object )
      goto LABEL_152;
    goto LABEL_120;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_152;
  EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                            (ShopMaster_o *)Master_object,
                                                                            eventId,
                                                                            0);
  v13 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ShopEntity__bool__TypeInfo);
  v122 = v7;
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          EventEntitiyList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          v14,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  v119 = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v15 )
LABEL_152:
    sub_1C6BC60(Master_object, v9);
  max_length = v15->max_length;
  v17 = (CommonReleaseMaster_o *)Master_object;
  Master_object = (__int64)v119;
  v120 = v15;
  if ( max_length < 1 )
    goto LABEL_117;
  v18 = 0;
  v123 = v17;
LABEL_18:
  if ( v18 >= (unsigned int)max_length )
LABEL_141:
    sub_1C6BC68(Master_object);
  v19 = v120->m_Items[v18];
  if ( !v19 || !Master_object )
    goto LABEL_152;
  EntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                       (ShopReleaseMaster_o *)Master_object,
                                                                       (int32_t)v19[1].klass,
                                                                       0);
  v21 = ShopBuyItemListViewManager___c_TypeInfo;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v21 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__106_2 = (System_Func_object__bool__o *)v21->static_fields->__9__106_2;
  if ( !_9__106_2 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__106_2 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ShopReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_2,
      v23,
      Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__,
      0);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_2 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__106_2, (int32_t)_9__106_2, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          EntitiyList,
          (System_Func_TSource__bool__o *)_9__106_2,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
  Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                             v27,
                             (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
  if ( !Master_object )
    goto LABEL_152;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v125,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  v28 = v123;
  v127 = v125;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v127,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v127,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
      Master_object = (__int64)v119;
      ++v18;
      max_length = v120->max_length;
      if ( v18 >= max_length )
        goto LABEL_117;
      goto LABEL_18;
    }
    if ( !v127.fields._current )
      sub_1C6BC60(0, v29);
    condValue = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)v127.fields._current, 0);
    if ( !v28 )
      sub_1C6BC60(condValue, (unsigned int)condValue);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(v28, condValue, 0);
    v32 = ShopBuyItemListViewManager___c_TypeInfo;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v32 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_3 = (System_Func_object__bool__o *)v32->static_fields->__9__106_3;
    if ( !_9__106_3 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__106_3 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_3,
        v34,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__,
        0);
      v35 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v35->__9__106_3 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_3;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v35->__9__106_3, (int32_t)_9__106_3, v36, v37);
    }
    v38 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
            List,
            (System_Func_TSource__bool__o *)_9__106_3,
            (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____78610376);
    v28 = v123;
  }
  while ( !v38 );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v127,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  v39 = v122;
  v40 = v120;
  *(_QWORD *)(v122 + 20) = 0xFFFFFFFFLL;
  v41 = v120->max_length;
  if ( v41 < 1 )
    goto LABEL_117;
  source = 0;
  v42 = 0;
  v43 = 1;
  do
  {
    if ( !v43 )
      goto LABEL_111;
    if ( v42 >= v41 )
      goto LABEL_141;
    v44 = v40->m_Items[v42];
    if ( !v44 )
      goto LABEL_152;
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                 v119,
                                                                 (int32_t)v44[1].klass,
                                                                 0);
    v46 = System_Linq_Enumerable__ToList_object_(
            v45,
            (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    v47 = ShopBuyItemListViewManager___c_TypeInfo;
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v46;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v47 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_4 = (System_Func_object__bool__o *)v47->static_fields->__9__106_4;
    if ( !_9__106_4 )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v47 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v47->static_fields->__9;
      _9__106_4 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ShopReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_4,
        v50,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__,
        0);
      v51 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v51->__9__106_4 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_4;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v51->__9__106_4, (int32_t)_9__106_4, v52, v53);
    }
    v54 = System_Linq_Enumerable__Where_object_(
            v48,
            (System_Func_TSource__bool__o *)_9__106_4,
            (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                               v54,
                               (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    if ( !Master_object )
      goto LABEL_152;
    v55 = (System_Collections_Generic_List_object__o *)Master_object;
    v118 = v42;
    if ( *(int *)(Master_object + 24) < 1 )
    {
LABEL_108:
      v57 = *(_DWORD *)(v39 + 20);
    }
    else
    {
      v56 = 0;
      while ( 1 )
      {
        v57 = *(_DWORD *)(v39 + 20);
        if ( v57 != -1 )
          break;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   v55,
                                   v56,
                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_152;
        v58 = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)Master_object, 0);
        v59 = CommonReleaseMaster__getList(v123, v58, 0);
        v60 = ShopBuyItemListViewManager___c_TypeInfo;
        v61 = (System_Collections_Generic_IEnumerable_TSource__o *)v59;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v60 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_5 = (System_Func_object__int__o *)v60->static_fields->__9__106_5;
        if ( !_9__106_5 )
        {
          if ( !v60->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v60);
            v60 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v63 = (Il2CppObject *)v60->static_fields->__9;
          _9__106_5 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_CommonReleaseEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__106_5,
            v63,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__,
            0);
          v64 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v64->__9__106_5 = (struct System_Func_CommonReleaseEntity__int__o *)_9__106_5;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v64->__9__106_5, (int32_t)_9__106_5, v65, v66);
        }
        v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     v61,
                                                                     (System_Func_TSource__TKey__o *)_9__106_5,
                                                                     (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
        v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v67,
                                                                     (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
        v69 = ShopBuyItemListViewManager___c_TypeInfo;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v69 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_6 = (System_Func_object__bool__o *)v69->static_fields->__9__106_6;
        if ( !_9__106_6 )
        {
          if ( !v69->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v69);
            v69 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v71 = (Il2CppObject *)v69->static_fields->__9;
          _9__106_6 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__106_6,
            v71,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__,
            0);
          v72 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v72->__9__106_6 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_6;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v72->__9__106_6, (int32_t)_9__106_6, v73, v74);
        }
        Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                                   v68,
                                   (System_Func_TSource__bool__o *)_9__106_6,
                                   (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
        if ( !Master_object )
          goto LABEL_152;
        v75 = *(_QWORD *)Master_object;
        v76 = Master_object;
        v77 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v78 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_CommonReleaseEntity__c **)v78 - 1) != System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo )
          {
            --v77;
            v78 += 4;
            if ( !v77 )
              goto LABEL_77;
          }
          v79 = v75 + 16LL * *v78 + 312;
        }
        else
        {
LABEL_77:
          v79 = sub_1C41D90(Master_object, System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo, 0);
        }
        v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v76, *(_QWORD *)(v79 + 8));
        if ( !v81 )
          sub_1C6BC60(0, v80);
        while ( 1 )
        {
          v82 = *(_QWORD *)v81;
          v83 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
          {
            v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v84 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v83;
              v84 += 4;
              if ( !v83 )
                goto LABEL_84;
            }
            v85 = v82 + 16LL * *v84 + 312;
          }
          else
          {
LABEL_84:
            v85 = sub_1C41D90(v81, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8)) & 1) == 0 )
            break;
          v86 = *(_QWORD *)v81;
          v87 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
          {
            v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_CommonReleaseEntity__c **)v88 - 1) != System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo )
            {
              --v87;
              v88 += 4;
              if ( !v87 )
                goto LABEL_91;
            }
            v89 = v86 + 16LL * *v88 + 312;
          }
          else
          {
LABEL_91:
            v89 = sub_1C41D90(v81, System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo, 0);
          }
          v91 = (*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v81, *(_QWORD *)(v89 + 8));
          if ( !v91 )
            sub_1C6BC60(0, v90);
          v92 = *(_DWORD *)(v91 + 28);
          v93 = *(_DWORD *)(v91 + 32);
          v94 = *(int *)(v91 + 36);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(v92, v93, v94, 0, 0, 0) )
          {
            *(int32x2_t *)(v122 + 20) = vrev64_s32(*(int32x2_t *)(v91 + 20));
            source = v68;
            break;
          }
        }
        v95 = *(_QWORD *)v81;
        v96 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
        {
          v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v97 - 1) != System_IDisposable_TypeInfo )
          {
            --v96;
            v97 += 4;
            if ( !v96 )
              goto LABEL_102;
          }
          v98 = v95 + 16LL * *v97 + 312;
        }
        else
        {
LABEL_102:
          v98 = sub_1C41D90(v81, System_IDisposable_TypeInfo, 0);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v81, *(_QWORD *)(v98 + 8));
        v39 = v122;
        if ( ++v56 >= v55->fields._size )
          goto LABEL_108;
      }
    }
    v40 = v120;
    v43 = v57 == -1;
    v41 = v120->max_length;
    v42 = v118 + 1;
  }
  while ( (int)(v118 + 1) < v41 );
  if ( v57 == -1 )
  {
LABEL_117:
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
      goto LABEL_120;
    goto LABEL_152;
  }
LABEL_111:
  v99 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CommonReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v99,
    (Il2CppObject *)v39,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__,
    0);
  v100 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
           source,
           (System_Func_TSource__bool__o *)v99,
           (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____78610376);
  if ( !v100 )
  {
    v103 = (System_String_o **)&StringLiteral_5682/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/;
    v104 = 0;
    klass_high = 0;
LABEL_146:
    v113 = *v103;
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
    {
      Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        v114 = this->fields.skillPartsLimitLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v115 = LocalizationManager__Get(v113, 0);
        LODWORD(v125.fields._list) = v104;
        v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
        v124 = klass_high;
        v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124);
        Master_object = (__int64)System_String__Format_64008100(v115, v116, v117, 0);
        if ( v114 )
        {
          UILabel__set_text(v114, (System_String_o *)Master_object, 0);
          return;
        }
      }
    }
    goto LABEL_152;
  }
  v101 = v100;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_152;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_152;
  TargetEntityList = (System_Collections_ICollection_o *)ShopGroupMaster__GetTargetEntityList(
                                                           (ShopGroupMaster_o *)Master_object,
                                                           (int32_t)v101[2].klass,
                                                           0);
  if ( !BasicHelper__IsNullOrEmpty(TargetEntityList, 0) )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !TargetEntityList )
      goto LABEL_152;
    monitor = TargetEntityList[1].monitor;
    v107 = (_DWORD)monitor - 1;
    if ( (int)monitor >= 1 )
    {
      v108 = (UserShopMaster_o *)Master_object;
      v109 = 0;
      v110 = 0;
      while ( 1 )
      {
        v111 = *((_QWORD *)&TargetEntityList[2].klass + v109);
        if ( !v111 )
          goto LABEL_152;
        v112 = *(_DWORD *)(v111 + 16);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        Master_object = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v108 )
          goto LABEL_152;
        Master_object = UserShopMaster__TryGetEntity(
                          v108,
                          &entity,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          v112,
                          0);
        if ( (Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_152;
          v110 += entity->fields.num;
        }
        if ( v107 == v109 )
          goto LABEL_144;
        if ( (unsigned int)++v109 >= LODWORD(TargetEntityList[1].monitor) )
          goto LABEL_141;
      }
    }
    v110 = 0;
LABEL_144:
    klass_high = HIDWORD(v101[2].klass);
    v103 = (System_String_o **)&StringLiteral_5679/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/;
    v104 = klass_high - v110;
    if ( klass_high - v110 >= 1 )
      v103 = (System_String_o **)&StringLiteral_5680/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/;
    goto LABEL_146;
  }
  Master_object = (__int64)this->fields.skillPartsLimitLabel;
  if ( !Master_object )
    goto LABEL_152;
LABEL_120:
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
}


void ShopBuyItemListViewManager__StopUpdateRemainTime(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C6BC60(0, method);
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

  if ( (byte_4CB24A0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_TransitionCalculator_float__Update__);
    byte_4CB24A0 = 1;
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  p_anotherBuyAbleAlphaTransitionCalculator = &this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
  {
    AlphaTransitionCalculator = ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(0, method);
    *p_anotherBuyAbleAlphaTransitionCalculator = AlphaTransitionCalculator;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.anotherBuyAbleAlphaTransitionCalculator,
      (int32_t)AlphaTransitionCalculator,
      v6,
      v7);
    anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
    if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
  }
  v10 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)anotherBuyAbleAlphaTransitionCalculator,
          (const MethodInfo_3AF12A0 *)Method_TransitionCalculator_float__Update__);
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  this->fields.alphaAnimNow = v10;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0)
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.alphaAnimTimeOld) >= 3.0 )
  {
    anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
    if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__StartFadeOut(anotherBuyAbleAlphaTransitionCalculator, 0);
  }
  anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
  if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(anotherBuyAbleAlphaTransitionCalculator, 0) )
    return;
  anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
  if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
LABEL_19:
    sub_1C6BC60(anotherBuyAbleAlphaTransitionCalculator, v8);
  AlphaTransitionCalculator__StartFadeIn(anotherBuyAbleAlphaTransitionCalculator, 0);
  v12 = UnityEngine_Time__get_realtimeSinceStartup(0);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  if ( alphaAnimCnt + 1 < 232792560 )
    v14 = alphaAnimCnt + 1;
  else
    v14 = alphaAnimCnt - 232792559;
  this->fields.alphaAnimTimeOld = v12;
  this->fields.alphaAnimCnt = v14;
  ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(this, v11);
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
  Il2CppObject *Item; // x22
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4CB249F & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB249F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C6BC60(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopBuyItemListViewObject__GetItem(
                                                                  (ShopBuyItemListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44066648(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
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
    sub_1C6BC60(this, method);
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
  Il2CppObject *Item; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v13; // x1
  Il2CppClass **v14; // x0

  if ( (byte_4CB249E & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB249E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C6BC60(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v11 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v13 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v13;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB24C1 & 1) == 0 )
  {
    sub_1C6BA08(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_4CB24C1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ShopBuyItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopBuyItemListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopBuyItemListViewManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ShopBuyItemListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4CB24C2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB24C2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( v4 )
  {
    if ( !x )
      sub_1C6BC60(v4, v5);
    ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(x, v5);
  }
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_2(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.condType == 113;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_3(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.condType == 263;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_4(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.condType == 113;
}


int32_t ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_5(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.priority;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_6(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.condType == 1;
}


void ShopBuyItemListViewManager___c__DisplayClass106_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopBuyItemListViewManager___c__DisplayClass106_0___SetSkillPartsLimitLabel_b__0(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.slot == this->fields.slot;
}


bool ShopBuyItemListViewManager___c__DisplayClass106_0___SetSkillPartsLimitLabel_b__1(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.condGroup == this->fields.commonReleaseCondGroup
      && x->fields.priority <= this->fields.targetPriority
      && x->fields.condType == 263;
}


void ShopBuyItemListViewManager___c__DisplayClass69_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopBuyItemListViewManager___c__DisplayClass69_0___GetIndexByItemId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  int64_t sortValue1; // x8

  if ( (byte_4CB24C3 & 1) == 0 )
  {
    sub_1C6BA08(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CB24C3 = 1;
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


bool ShopBuyItemListViewManager___c__DisplayClass69_0___GetIndexByItemId_b__1(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  int64_t sortValue1; // x8

  if ( (byte_4CB24C5 & 1) == 0 )
  {
    sub_1C6BA08(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CB24C5 = 1;
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


bool ShopBuyItemListViewManager___c__DisplayClass69_0___GetIndexByItemId_b__2(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  ListViewItem_c *klass; // x9
  unsigned int naturalAligment; // w11
  __int64 v7; // x10
  int64_t sortValue1; // x12
  bool v9; // zf
  bool v10; // w12

  if ( (byte_4CB24C4 & 1) == 0 )
  {
    sub_1C6BA08(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CB24C4 = 1;
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


void ShopBuyItemListViewManager___c__DisplayClass70_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopBuyItemListViewManager___c__DisplayClass70_0___GetIndexByTargetId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass70_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewItem_c *klass; // x0

  if ( (byte_4CB24C6 & 1) == 0 )
  {
    sub_1C6BA08(&ShopBuyItemListViewItem_TypeInfo);
    byte_4CB24C6 = 1;
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