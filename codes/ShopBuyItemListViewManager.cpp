void ShopBuyItemListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v4; // x20
  struct ShopBuyItemListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3F1DE & 1) == 0 )
  {
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_6293/*"ExchangeSvtCoinShop"*/);
    byte_4C3F1DE = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6293/*"ExchangeSvtCoinShop"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)ShopBuyItemListViewManager_TypeInfo->static_fields, StringLiteral_6293/*"ExchangeSvtCoinShop"*/, v1, v2);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v4 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43838564(v4, SORT_SAVE_KEY, 27, 0, 0);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->exchangeSvtCoinSortInfo, (int32_t)v4, v6, v7);
}


void ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_C0F0A0;
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
    this->fields.filterStatus = dword_C47574[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v4 = this->fields.filterStatus;
  if ( !byte_4C3D4B5 )
  {
    sub_1C37058(&EventRewardSaveData_TypeInfo);
    byte_4C3D4B5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v4;
  EventRewardSaveData__SaveItemFilter(this->fields.eventId, this->fields.targetSlot, 0);
}


void ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  ShopBuyItemListViewManager___c_c *v4; // x8
  System_Collections_Generic_List_object__o *v5; // x19
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v7; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3F1C0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_ShopBuyItemListViewObject__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__);
    sub_1C37058(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_4C3F1C0 = 1;
  }
  ObjectList = ShopBuyItemListViewManager__get_ObjectList(this, method);
  v4 = ShopBuyItemListViewManager___c_TypeInfo;
  v5 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v4 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__51_0 = (System_Action_object__o *)v4->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_1C372A4(System_Action_ShopBuyItemListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__51_0,
      v7,
      Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__,
      0);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_ShopBuyItemListViewObject__o *)_9__51_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v9, v10);
  }
  if ( !v5 )
    sub_1C372B4(ObjectList);
  System_Collections_Generic_List_object___ForEach(
    v5,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
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
  const MethodInfo *v12; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_4C3F1C6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F1C6 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0)) == 0
    || (itemList = this->fields.itemList) == 0 )
  {
    sub_1C372B4(Instance);
  }
  if ( itemList->fields._size != LODWORD(Instance->max_length) )
    ShopBuyItemListViewManager__CreateList_35192052(this, 6, eventId, slot, eventNum, isForcedAdjustment, v12);
}


AlphaTransitionCalculator_o *ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  float v2; // s8
  System_Func_float__float__float__float__o *v3; // x19
  AlphaTransitionCalculator_o *v4; // x20

  if ( (byte_4C3F1BF & 1) == 0 )
  {
    sub_1C37058(&AlphaTransitionCalculator_TypeInfo);
    byte_4C3F1BF = 1;
  }
  v2 = ChangedFPSUtil__CovertFrameNumToSecond(7, 0);
  v3 = ExtraEasing__AsymptoticSeriesFloat(0.5, 7.0, 0);
  v4 = (AlphaTransitionCalculator_o *)sub_1C372A4(AlphaTransitionCalculator_TypeInfo);
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

  ShopBuyItemListViewManager__CreateList_35192052(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void ShopBuyItemListViewManager__CreateExchangeSvtCoinList(
        ShopBuyItemListViewManager_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemListViewManager_c *v6; // x0
  struct ListViewSort_o *exchangeSvtCoinSortInfo; // x1
  ListViewSort_o *sort; // x0
  const MethodInfo *v9; // x6
  const MethodInfo *v10; // x1

  if ( (byte_4C3F1C1 & 1) == 0 )
  {
    sub_1C37058(&ShopBuyItemListViewManager_TypeInfo);
    byte_4C3F1C1 = 1;
  }
  v6 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
    v6 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v6->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)exchangeSvtCoinSortInfo, (int32_t)method, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  ListViewSort__Load(sort, 0);
  ShopBuyItemListViewManager__CreateList_35192052(this, 22, 0, svtCoinType, 0, 0, v9);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v10);
}


void ShopBuyItemListViewManager__CreateList(ShopBuyItemListViewManager_o *this, int32_t kind, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_35192052(this, kind, 0, 0, 0, 0, v3);
}


void ShopBuyItemListViewManager__CreateList_35192052(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  const MethodInfo *v18; // x1
  struct ShopCurrencyInfoController_o *currencyInfoController; // x21
  System_Int32_array *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x6
  const MethodInfo *v24; // x4
  ShopEntity_array *ShopEntities; // x27
  System_Collections_Generic_List_object__o *v26; // x26
  Il2CppObject *v27; // x28
  const MethodInfo *v28; // x3
  int max_length; // w8
  ShopBuyItemListViewManager_o *v30; // x25
  _QWORD *v31; // x21
  int v32; // w22
  bool v33; // w24
  ShopEntity_o *v34; // x29
  System_Int32_array *targetIds; // x8
  unsigned __int64 v36; // x20
  unsigned __int64 max_length_low; // x9
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *v40; // x8
  __int64 v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  const MethodInfo *v44; // x3
  _QWORD *v45; // x27
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v47; // w25
  ListViewItem_o *v48; // x20
  const MethodInfo *v49; // x2
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  __int64 v56; // x8
  System_Collections_Generic_List_object__o *v57; // x0
  struct System_Object_array *items; // x8
  __int64 v59; // x9
  __int64 size; // x10
  int32_t v61; // w27
  System_Collections_Generic_List_object__o *v62; // x28
  int32_t v63; // w23
  Il2CppObject *Item; // x29
  ListViewItem_o *v65; // x20
  const MethodInfo *v66; // x2
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  System_Collections_Generic_List_object__o *v73; // x28
  int32_t v74; // w26
  System_Collections_Generic_List_object__o *v75; // x27
  int32_t v76; // w23
  Il2CppObject *v77; // x28
  ListViewItem_o *v78; // x20
  const MethodInfo *v79; // x2
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v87; // w23
  __int64 v88; // x8
  __int64 v89; // x9
  __int64 v90; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v92; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v94; // w22
  int32_t v95; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v97; // x1
  int32_t v98; // w8
  __int64 *v99; // x9
  System_String_o **v100; // x8
  System_String_o *v101; // x21
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  struct ListViewSort_o *sort; // x1
  _BOOL8 v105; // x0
  const MethodInfo *v106; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v108; // [xsp+4h] [xbp-9Ch]
  int32_t v109; // [xsp+8h] [xbp-98h]
  int32_t v110; // [xsp+Ch] [xbp-94h]
  ShopEntity_array *v111; // [xsp+10h] [xbp-90h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_object__o *v113; // [xsp+20h] [xbp-80h]
  int32_t index; // [xsp+2Ch] [xbp-74h]
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  EventRewardSceneEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3F1C2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ShopBuyItemListViewItem_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_12180/*"SHOP_SPECIAL_LIST_EMPTY"*/);
    sub_1C37058(&StringLiteral_12130/*"SHOP_LIST_EMPTY"*/);
    sub_1C37058(&StringLiteral_5708/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    sub_1C37058(&StringLiteral_5773/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/);
    byte_4C3F1C2 = 1;
  }
  possessionAnotherItemId = 0;
  entity = 0;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v15);
  v17 = this->fields.kind;
  if ( v17 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_132;
    Instance = (DataManager_o *)ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, this->fields.eventId, 0);
    if ( !Instance )
      goto LABEL_132;
    currencyInfoController = this->fields.currencyInfoController;
    v20 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v18);
    if ( !currencyInfoController )
      goto LABEL_132;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1C36FFC((CGThumbnailListItem_o *)&currencyInfoController->fields.objectList, (int32_t)Instance, v21, v22);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_132;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v20,
      isForcedAdjustment,
      v23);
    v17 = this->fields.kind;
  }
  v108 = eventNum;
  v110 = kind;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                v17,
                                                v16);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v24);
  v113 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v113,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  v27 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v28);
  if ( !ShopEntities )
    goto LABEL_132;
  max_length = ShopEntities->max_length;
  v30 = EnterTime;
  v109 = slot;
  if ( max_length < 1 )
  {
    v33 = 0;
    index = 0;
    if ( !v26 )
      goto LABEL_132;
    goto LABEL_57;
  }
  index = 0;
  v31 = &Method_System_Collections_Generic_List_ShopEntity__Add__;
  v32 = 0;
  v33 = 0;
  v111 = ShopEntities;
  do
  {
    if ( v32 >= (unsigned int)max_length )
LABEL_133:
      sub_1C372BC(Instance);
    v34 = ShopEntities->m_Items[v32];
    if ( !v34 )
      goto LABEL_132;
    if ( v34->fields.purchaseType == 6 )
    {
      targetIds = v34->fields.targetIds;
      possessionAnotherItemId = targetIds;
      if ( !targetIds )
        goto LABEL_132;
      v36 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(targetIds->max_length);
        if ( (__int64)v36 >= (int)max_length_low )
          break;
        if ( v36 >= max_length_low )
          goto LABEL_133;
        if ( v27 )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v27,
                                        targetIds->m_Items[v36],
                                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_53;
          targetIds = possessionAnotherItemId;
          ++v36;
          if ( possessionAnotherItemId )
            continue;
        }
        goto LABEL_132;
      }
    }
    if ( v33 )
    {
      v33 = 1;
    }
    else
    {
      v33 = v34->fields.purchaseType == 16;
      this->fields.targetSlot = v34->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v34, 0) && !ShopEntity__GetIsNotHavingShopItemReceived(v34, 0) )
    {
      Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v34, &possessionAnotherItemId, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v113 )
          goto LABEL_132;
        items = v113->fields._items;
        v59 = *v31;
        ++v113->fields._version;
        if ( !items )
          goto LABEL_132;
        size = v113->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
        {
          v43 = &items->obj.klass + size;
          v113->fields._size = size + 1;
          goto LABEL_48;
        }
        v56 = *(_QWORD *)(v59 + 32);
        v57 = v113;
        goto LABEL_52;
      }
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v34, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_132;
      v40 = v26->fields._items;
      v41 = *v31;
      ++v26->fields._version;
      if ( !v40 )
        goto LABEL_132;
      v42 = v26->fields._size;
      if ( (unsigned int)v42 < LODWORD(v40->max_length) )
      {
        v43 = &v40->obj.klass + v42;
        v26->fields._size = v42 + 1;
LABEL_48:
        v43[4] = (Il2CppClass *)v34;
        sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v34, v38, v39);
        goto LABEL_53;
      }
      v56 = *(_QWORD *)(v41 + 32);
      v57 = v26;
LABEL_52:
      System_Collections_Generic_List_object___AddWithResize(
        v57,
        (Il2CppObject *)v34,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v56 + 192) + 112LL));
      goto LABEL_53;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v34, 0);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v34, (int32_t)Instance, v44),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v34->fields.id >= 1 )
      {
        v45 = v31;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v47 = this->fields.kind;
        v48 = (ListViewItem_o *)sub_1C372A4(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_43804668(v48, index, 0);
        v48[1].fields.sortIndex = v47;
        v30 = EnterTime;
        v48[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v48, v34, v49);
        if ( !itemList )
          goto LABEL_132;
        v52 = itemList->fields._items;
        v53 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v52 )
          goto LABEL_132;
        v54 = itemList->fields._size;
        if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v48,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &v52->obj.klass + v54;
          itemList->fields._size = v54 + 1;
          v55[4] = (Il2CppClass *)v48;
          sub_1C36FFC((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v48, v50, v51);
        }
        v31 = v45;
        ShopEntities = v111;
        ++index;
      }
    }
LABEL_53:
    max_length = ShopEntities->max_length;
    ++v32;
  }
  while ( v32 < max_length );
  if ( !v26 )
    goto LABEL_132;
LABEL_57:
  if ( v26->fields._size >= 1 )
  {
    v61 = 0;
    do
    {
      v62 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v63 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v26,
               v61,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v65 = (ListViewItem_o *)sub_1C372A4(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_43804668(v65, index + v61, 0);
      v65[1].fields.sortIndex = v63;
      v65[1].fields.sortValue0 = (int64_t)v30;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v65, (ShopEntity_o *)Item, v66);
      if ( !v62 )
        goto LABEL_132;
      v69 = v62->fields._items;
      v70 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v62->fields._version;
      if ( !v69 )
        goto LABEL_132;
      v71 = v62->fields._size;
      if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v62,
          (Il2CppObject *)v65,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = &v69->obj.klass + v71;
        v62->fields._size = v71 + 1;
        v72[4] = (Il2CppClass *)v65;
        sub_1C36FFC((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v65, v67, v68);
      }
      ++v61;
    }
    while ( v61 < v26->fields._size );
    index += v61;
  }
  v73 = v113;
  if ( !v113 )
    goto LABEL_132;
  if ( v113->fields._size >= 1 )
  {
    v74 = 0;
    do
    {
      v75 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v76 = this->fields.kind;
      v77 = System_Collections_Generic_List_object___get_Item(
              v73,
              v74,
              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v78 = (ListViewItem_o *)sub_1C372A4(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_43804668(v78, index + v74, 0);
      v78[1].fields.sortIndex = v76;
      v78[1].fields.sortValue0 = (int64_t)v30;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v78, (ShopEntity_o *)v77, v79);
      if ( !v75 )
        goto LABEL_132;
      v82 = v75->fields._items;
      v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v75->fields._version;
      if ( !v82 )
        goto LABEL_132;
      v84 = v75->fields._size;
      v73 = v113;
      if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v75,
          (Il2CppObject *)v78,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &v82->obj.klass + v84;
        v75->fields._size = v84 + 1;
        v85[4] = (Il2CppClass *)v78;
        sub_1C36FFC((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v78, v80, v81);
      }
    }
    while ( ++v74 < v113->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    v87 = v110;
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
      v88 = 348;
      if ( v108 == 1 )
      {
        v88 = 336;
        v89 = 332;
      }
      else
      {
        v89 = 344;
      }
      if ( v108 == 1 )
        v90 = 328;
      else
        v90 = 340;
      v117.fields.z = *(float *)((char *)&this->klass + v88);
      v117.fields.y = *(float *)((char *)&this->klass + v89);
      v117.fields.x = *(float *)((char *)&this->klass + v90);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v117, 0);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_132;
      if ( v108 == 1 )
        v92 = 338;
      else
        v92 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v92, 0);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v94 = v109;
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_132;
      if ( v108 == 1 )
        v95 = 348;
      else
        v95 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v95, 0);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5708/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0);
    if ( emptyMessageLabel )
    {
      v97 = (System_String_o *)Instance;
      goto LABEL_117;
    }
LABEL_132:
    sub_1C372B4(Instance);
  }
  v98 = this->fields.kind;
  v99 = &StringLiteral_12130/*"SHOP_LIST_EMPTY"*/;
  if ( v98 == 22 )
    v99 = (__int64 *)&StringLiteral_5773/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
  if ( v98 == 12 )
    v100 = (System_String_o **)&StringLiteral_12180/*"SHOP_SPECIAL_LIST_EMPTY"*/;
  else
    v100 = (System_String_o **)v99;
  v101 = *v100;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v87 = v110;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v101, 0);
  v94 = v109;
  if ( !emptyMessageLabel )
    goto LABEL_132;
  v97 = (System_String_o *)Instance;
LABEL_117:
  UILabel__set_text(emptyMessageLabel, v97, 0);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v102, v103);
  }
  if ( !v33 )
    goto LABEL_128;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_132;
  v105 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v105 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v105, this->fields.filterBtn, 1, v106);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0);
      if ( !byte_4C3D4B6 )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4B6 = 1;
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
  if ( v87 == 22 )
    this->fields.targetExchangeSvtCoinFolder = v94;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void ShopBuyItemListViewManager__CreateList_35195052(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_35192052(this, 6, eventId, 0, 0, 0, v3);
}


void ShopBuyItemListViewManager__EndSelectFilterKind(
        ShopBuyItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4C3F1DB & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F1DB = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_35204384(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1C372B4(sort);
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

  if ( (byte_4C3F1C3 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F1C3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F23E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F23E = 1;
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
    if ( !byte_4C3F23E )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F23E = 1;
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
    if ( !byte_4C3F23F )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F23F = 1;
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
    return dword_C47580[state - 2];
}


int32_t ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_C475D4[state - 2];
}


int64_t ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4C3F1C4 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3F1C4 = 1;
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
  int32_t result; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__bool__o *v9; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v10; // x21
  System_Predicate_object__o *v11; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v12; // x19
  System_Predicate_object__o *v13; // x21

  if ( (byte_4C3F1CC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_ListViewItem___);
    sub_1C37058(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_1C37058(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__2__);
    sub_1C37058(&ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo);
    byte_4C3F1CC = 1;
  }
  v5 = sub_1C372A4(ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v9 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__,
    0);
  if ( System_Linq_Enumerable__Count_object__51419316(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)v9,
         (const MethodInfo_31098B4 *)Method_System_Linq_Enumerable_Count_ListViewItem___) < 2 )
    goto LABEL_11;
  v10 = this->fields.itemList;
  v11 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__2__,
    0);
  if ( !v10 )
    goto LABEL_13;
  result = System_Collections_Generic_List_object___FindIndex(
             (System_Collections_Generic_List_object__o *)v10,
             (System_Predicate_T__o *)v11,
             (const MethodInfo_37A387C *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( result < 0 )
  {
LABEL_11:
    v12 = this->fields.itemList;
    v13 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v13,
      (Il2CppObject *)v5,
      Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__,
      0);
    if ( v12 )
      return System_Collections_Generic_List_object___FindIndex(
               (System_Collections_Generic_List_object__o *)v12,
               (System_Predicate_T__o *)v13,
               (const MethodInfo_37A387C *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
LABEL_13:
    sub_1C372B4(v6);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C3F1CD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_1C37058(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__);
    sub_1C37058(&ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo);
    byte_4C3F1CD = 1;
  }
  v5 = sub_1C372A4(ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_DWORD *)(v5 + 16) = targetId;
  if ( targetId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v9 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__,
    0);
  if ( !itemList )
LABEL_9:
    sub_1C372B4(v6);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v9,
           (const MethodInfo_37A387C *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
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
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v9; // x1
  int32_t PayType; // w0

  if ( (byte_4C3F1D9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F1D9 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
      {
        sub_1C372B4(Instance);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0);
      if ( EventItemList && EventItemList->max_length )
        goto LABEL_14;
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
      PayType = ShopBuyItemListViewManager__GetPayType(eventId, v9);
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

  if ( (byte_4C3F1CB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C3F1CB = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C3F1D3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    byte_4C3F1D3 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v6;
}


int32_t ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  ShopEntity_o *v4; // x8

  if ( (byte_4C3F1D6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F1D6 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, eventId, 0);
  if ( !Instance )
    goto LABEL_10;
  if ( SLODWORD(Instance->max_length) >= 1 )
  {
    v4 = Instance->m_Items[0];
    if ( v4 )
      return v4->fields.payType;
LABEL_10:
    sub_1C372B4(Instance);
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
  int32_t v9; // w2
  int32_t v11; // w1

  if ( (byte_4C3F1C5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F1C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C372B4(Instance);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_42;
      v9 = 2;
      goto LABEL_36;
    case 6:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0);
    case 7:
      if ( !Instance )
        goto LABEL_42;
      v9 = 6;
      goto LABEL_36;
    case 8:
      if ( !Instance )
        goto LABEL_42;
      v9 = 7;
      goto LABEL_36;
    case 9:
      if ( !Instance )
        goto LABEL_42;
      v9 = 3;
      goto LABEL_36;
    case 10:
      if ( !Instance )
        goto LABEL_42;
      v9 = 4;
      goto LABEL_36;
    case 11:
      if ( !Instance )
        goto LABEL_42;
      v9 = 5;
      goto LABEL_36;
    case 12:
      if ( !Instance )
        goto LABEL_42;
      v9 = 9;
      goto LABEL_36;
    case 13:
      if ( !Instance )
        goto LABEL_42;
      v9 = 10;
      goto LABEL_36;
    case 14:
      if ( !Instance )
        goto LABEL_42;
      v9 = 11;
      goto LABEL_36;
    case 15:
      if ( !Instance )
        goto LABEL_42;
      v9 = 12;
      goto LABEL_36;
    case 16:
      if ( !Instance )
        goto LABEL_42;
      v9 = 13;
      goto LABEL_36;
    case 18:
      if ( !Instance )
        goto LABEL_42;
      v9 = 14;
      goto LABEL_36;
    case 20:
      if ( !Instance )
        goto LABEL_42;
      v9 = 15;
      goto LABEL_36;
    case 21:
      if ( !Instance )
        goto LABEL_42;
      v9 = 16;
LABEL_36:
      v11 = 0;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v11, v9, 0);
    case 22:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableExchangeSvtCoinEntitiyList((ShopMaster_o *)Instance, slot, 0);
    case 23:
      if ( !Instance )
        goto LABEL_42;
      v11 = 23;
      v9 = 18;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v11, v9, 0);
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
  const MethodInfo *v8; // x1

  if ( (byte_4C3F1CA & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F1CA = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1C372B4(objectList);
  v4 = 0;
  while ( v4 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v4,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
      ShopBuyItemListViewObject__SetupDisp((ShopBuyItemListViewObject_o *)Component_object, v8);
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

  return ShopBuyItemListViewManager__ModifyList_35203404(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void ShopBuyItemListViewManager__ModifyFilterList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  Il2CppObject *Entity; // x20
  int32_t eventCount; // w21
  int32_t targetSlot; // w22
  int32_t eventId; // w23
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v9; // x6
  const MethodInfo *v10; // x2

  if ( (byte_4C3F1C7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F1C7 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0),
        !Entity) )
  {
    sub_1C372B4(Instance);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0);
  ShopBuyItemListViewManager__CreateList_35192052(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v9);
  ShopBuyItemListViewManager__SetMode_35204384(this, 2, v10);
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

  if ( (byte_4C3F1C9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C3F1C9 = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1C372B4(itemList);
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v8,
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  return ShopBuyItemListViewManager__ModifyList_35203404(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


bool ShopBuyItemListViewManager__ModifyList_35203404(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x6
  DataManager_o *v18; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w8
  ShopBuyItemListViewManager_o *v21; // x0
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w4
  bool v26; // w5
  System_Int32_array *EventItemList; // x26
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v30; // x27
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  ShopCurrencyInfoController_o *v34; // x28
  _BOOL4 isEventShop; // w29
  const MethodInfo *v36; // x6
  const MethodInfo *v37; // x3
  int m_CancellationTokenSource; // w8
  unsigned int v39; // w27
  DataManager_c **v40; // x8
  ShopEntity_o *v41; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v43; // x3

  if ( (byte_4C3F1C8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F1C8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)ShopBuyItemListViewManager__GetShopEntities(
                                (ShopBuyItemListViewManager_o *)MasterData_object,
                                kind,
                                0,
                                0,
                                v15);
  v18 = Instance;
  if ( kind == 6 )
  {
    if ( MasterData_object )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, eventId, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v30 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v31);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1C36FFC(
              (CGThumbnailListItem_o *)&currencyInfoController->fields.objectList,
              (int32_t)Instance,
              v32,
              v33);
            if ( v30 )
            {
              v34 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v30, 0);
              if ( v34 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v34,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  (unsigned __int8)Instance & 1,
                  v36);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1C372B4(Instance);
  }
  if ( kind != 12 && kind != 7 )
  {
LABEL_19:
    if ( !v18 )
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
    ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v16);
    m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
    {
      v39 = 0;
      while ( 1 )
      {
        if ( v39 >= m_CancellationTokenSource )
          sub_1C372BC(Instance);
        v40 = &v18->klass + (int)v39;
        v41 = (ShopEntity_o *)v40[4];
        if ( !v41 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      (ShopEntity_o *)v40[4],
                                      v41->fields.id,
                                      v37);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v41, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v41, 0);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v41, PurchaseShop, v43);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
        if ( (int)++v39 >= m_CancellationTokenSource )
          return 1;
      }
      v26 = isForcedAdjustment;
      v21 = this;
      v22 = kind;
      v23 = eventId;
      v24 = slot;
      v25 = eventNum;
      goto LABEL_30;
    }
    return 1;
  }
  v21 = this;
  v22 = kind;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
LABEL_30:
  ShopBuyItemListViewManager__CreateList_35192052(v21, v22, v23, v24, v25, v26, v17);
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

  if ( (byte_4C3F1DA & 1) == 0 )
  {
    sub_1C37058(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__);
    sub_1C37058(&Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F1DA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C372B4(v9);
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
  unsigned int Index; // w0

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    p_onClickListViewItem = (CGThumbnailListItem_o *)&this->fields.onClickListViewItem;
    p_onClickListViewItem->klass = 0;
    sub_1C36FFC(p_onClickListViewItem, 0, (int32_t)method, v3);
    if ( !obj )
      sub_1C372B4(v7);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  UnityEngine_Object_o *scrollView; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4C3F1D5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F1D5 = 1;
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
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onMoveEnd, 0, v12, v13);
          ((void (__fastcall *)(intptr_t, intptr_t))onMoveEnd->fields.invoke_impl)(
            onMoveEnd->fields.method_code,
            onMoveEnd->fields.method);
        }
        return;
      }
LABEL_18:
      sub_1C372B4(emptyMessageBase);
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
  float v9; // s8
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t size; // w8
  int32_t v12; // w20
  Il2CppObject *Item; // x23
  System_Action_o *v14; // x24
  const MethodInfo *v15; // x3
  float v16; // s0

  if ( (byte_4C3F1D4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_1C37058(&Method_ShopBuyItemListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3F1D4 = 1;
  }
  v5 = 6;
  switch ( initMode )
  {
    case 1:
      v6 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v7);
      v9 = 0.1;
      v10 = (System_Collections_Generic_List_object__o *)ObjectList;
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
      v10 = (System_Collections_Generic_List_object__o *)ObjectList;
      v6 = 0;
      if ( (unsigned int)(initMode - 3) >= 2 )
        v9 = 0.0;
      else
        v9 = 0.1;
LABEL_12:
      if ( !v10 )
        goto LABEL_23;
      size = v10->fields._size;
      this->fields.callbackCount = size;
      if ( size < 1 )
      {
        this->fields.callbackCount = 1;
        if ( (v6 & 1) != 0 )
        {
          v16 = this->fields.listInDelay + 0.5;
        }
        else
        {
          v16 = 0.6;
          if ( (unsigned int)(initMode - 3) > 1 )
            v16 = 0.0;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
          v16,
          0);
      }
      else
      {
        v12 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v10,
                   v12,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v14, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0);
          if ( !Item )
LABEL_23:
            sub_1C372B4(ObjectList);
          ShopBuyItemListViewObject__Init_35207424((ShopBuyItemListViewObject_o *)Item, v5, v14, v9, v15);
          ++v12;
        }
        while ( v12 < v10->fields._size );
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
      sub_1C372B4(0);
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

  if ( (byte_4C3F1D2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F1D2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0)) == 0 )
    {
      sub_1C372B4(gameObject);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemListViewManager__SetFilterButtonImage(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *filterSprite; // x20
  ListViewSort_o *sort; // x0
  UISprite_o *v5; // x19
  System_String_o **v6; // x8

  if ( (byte_4C3F1DC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17487/*"btn_filter_on"*/);
    sub_1C37058(&StringLiteral_17486/*"btn_filter"*/);
    byte_4C3F1DC = 1;
  }
  filterSprite = (UnityEngine_Object_o *)this->fields.filterSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterSprite, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort
      || (v5 = this->fields.filterSprite, sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0), !v5) )
    {
      sub_1C372B4(sort);
    }
    v6 = (System_String_o **)&StringLiteral_17486/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v6 = (System_String_o **)&StringLiteral_17487/*"btn_filter_on"*/;
    UISprite__set_spriteName(v5, *v6, 0);
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
  UIWidget_o *v7; // x0

  if ( (byte_4C3F1D1 & 1) == 0 )
  {
    sub_1C37058(&EventRewardRootComponent_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F1D1 = 1;
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
    v7 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v7 || (UIWidget__set_width(v7, 52, 0), (v7 = (UIWidget_o *)this->fields.filterTxtSprite) == 0) )
      sub_1C372B4(v7);
    UIWidget__set_height(v7, 20, 0);
  }
}


void ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *operationSortInfo; // x0
  bool v11; // w2
  bool v12; // w2

  if ( (byte_4C3F1D0 & 1) == 0 )
  {
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&StringLiteral_17610/*"btn_txt_stock_02"*/);
    sub_1C37058(&StringLiteral_17609/*"btn_txt_stock"*/);
    sub_1C37058(&StringLiteral_17539/*"btn_txt_all"*/);
    byte_4C3F1D0 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43839288(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17610/*"btn_txt_stock_02"*/, v8);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0), (operationSortInfo = *p_operationSortInfo) == 0) )
    {
LABEL_18:
      sub_1C372B4(operationSortInfo);
    }
    v12 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17609/*"btn_txt_stock"*/, v8);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v11 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17539/*"btn_txt_all"*/, v8);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v11 = 0;
    }
    ListViewSort__SetFilter(operationSortInfo, 52, v11, 0);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_18;
    v12 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 53, v12, 0);
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
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    method);
  ShopBuyItemListViewManager__SetMode_35204384(this, mode, v6);
}


void ShopBuyItemListViewManager__SetMode_35204384(
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


void ShopBuyItemListViewManager__SetMode_35205664(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)callback, (int32_t)callback, method);
  ShopBuyItemListViewManager__SetMode_35204384(this, mode, v7);
}


void ShopBuyItemListViewManager__SetMultiEventScrollInfo(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3F1D8 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C3F1D8 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C372B4(scrollView);
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
  if ( (byte_4C3F1CE & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1C37058(&ShopBuyItemListViewObject_TypeInfo);
    byte_4C3F1CE = 1;
  }
  if ( !obj
    || (naturalAligment = ShopBuyItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
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
  ShopBuyItemListViewObject__Init_35207424((ShopBuyItemListViewObject_o *)obj, v9, 0, 0.0, method);
}


void ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C3F1CF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F1CF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0)) == 0 )
    {
      sub_1C372B4(gameObject);
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

  if ( (byte_4C3F1D7 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C3F1D7 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C372B4(scrollView);
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
  UnityEngine_Object_o *skillPartsLimitLabel; // x19
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x19
  System_Func_object__bool__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Object_array *v14; // x19
  int max_length; // w8
  CommonReleaseMaster_o *v16; // x24
  int v17; // w20
  Il2CppObject *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EntitiyList; // x24
  ShopBuyItemListViewManager___c_c *v20; // x8
  System_Func_object__bool__o *_9__106_2; // x22
  Il2CppObject *v22; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  CommonReleaseMaster_o *v27; // x24
  __int64 condValue; // x0
  System_Collections_Generic_IEnumerable_TSource__o *List; // x24
  ShopBuyItemListViewManager___c_c *v30; // x8
  System_Func_object__bool__o *_9__106_3; // x22
  Il2CppObject *v32; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x0
  __int64 v37; // x21
  System_Object_array *v38; // x11
  int v39; // w8
  unsigned int v40; // w26
  bool v41; // w9
  Il2CppObject *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_List_TSource__o *v44; // x0
  ShopBuyItemListViewManager___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x25
  System_Func_object__bool__o *_9__106_4; // x22
  Il2CppObject *v48; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_List_object__o *v53; // x25
  int32_t v54; // w26
  int v55; // w10
  int32_t v56; // w0
  CommonReleaseEntity_array *v57; // x0
  ShopBuyItemListViewManager___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x27
  System_Func_object__int__o *_9__106_5; // x22
  Il2CppObject *v61; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x28
  ShopBuyItemListViewManager___c_c *v67; // x8
  System_Func_object__bool__o *_9__106_6; // x22
  Il2CppObject *v69; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x8
  __int64 v74; // x27
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x27
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x22
  int32_t v88; // w19
  int32_t v89; // w29
  int64_t v90; // x21
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0
  System_Func_object__bool__o *v95; // x19
  Il2CppObject *v96; // x0
  Il2CppObject *v97; // x20
  System_Collections_ICollection_o *TargetEntityList; // x21
  System_String_o **v99; // x8
  int v100; // w21
  int klass_high; // w22
  void *monitor; // x8
  int v103; // w25
  UserShopMaster_o *v104; // x22
  int v105; // w26
  int v106; // w19
  __int64 v107; // x8
  int32_t v108; // w24
  System_String_o *v109; // x20
  UILabel_o *v110; // x19
  System_String_o *v111; // x20
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  __int64 v115; // x5
  __int64 v116; // x6
  __int64 v117; // x7
  Il2CppObject *v118; // x21
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  __int64 v122; // x5
  __int64 v123; // x6
  __int64 v124; // x7
  Il2CppObject *v125; // x0
  unsigned int v126; // [xsp+4h] [xbp-DCh]
  ShopReleaseMaster_o *v127; // [xsp+8h] [xbp-D8h]
  System_Object_array *v128; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-C8h]
  __int64 v130; // [xsp+28h] [xbp-B8h]
  CommonReleaseMaster_o *v131; // [xsp+30h] [xbp-B0h]
  int v132; // [xsp+3Ch] [xbp-A4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v133; // [xsp+40h] [xbp-A0h] BYREF
  UserShopEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C3F1DD & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____78147176);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__);
    sub_1C37058(&System_Func_CommonReleaseEntity__int__TypeInfo);
    sub_1C37058(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_ShopReleaseEntity__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__);
    sub_1C37058(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__);
    sub_1C37058(&ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo);
    sub_1C37058(&ShopBuyItemListViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_5689/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/);
    sub_1C37058(&StringLiteral_5690/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/);
    sub_1C37058(&StringLiteral_5692/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/);
    byte_4C3F1DD = 1;
  }
  memset(&v135, 0, sizeof(v135));
  entity = 0;
  v7 = sub_1C372A4(ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo);
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_152;
  EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                            (ShopMaster_o *)Master_object,
                                                                            eventId,
                                                                            0);
  v12 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ShopEntity__bool__TypeInfo);
  v130 = v7;
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          EventEntitiyList,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          v13,
          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  v127 = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v14 )
LABEL_152:
    sub_1C372B4(Master_object);
  max_length = v14->max_length;
  v16 = (CommonReleaseMaster_o *)Master_object;
  Master_object = (__int64)v127;
  v128 = v14;
  if ( max_length < 1 )
    goto LABEL_117;
  v17 = 0;
  v131 = v16;
LABEL_18:
  if ( v17 >= (unsigned int)max_length )
LABEL_141:
    sub_1C372BC(Master_object);
  v18 = v128->m_Items[v17];
  if ( !v18 || !Master_object )
    goto LABEL_152;
  EntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                       (ShopReleaseMaster_o *)Master_object,
                                                                       (int32_t)v18[1].klass,
                                                                       0);
  v20 = ShopBuyItemListViewManager___c_TypeInfo;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v20 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__106_2 = (System_Func_object__bool__o *)v20->static_fields->__9__106_2;
  if ( !_9__106_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__106_2 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ShopReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_2,
      v22,
      Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__,
      0);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_2 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__106_2, (int32_t)_9__106_2, v24, v25);
  }
  v26 = System_Linq_Enumerable__Where_object_(
          EntitiyList,
          (System_Func_TSource__bool__o *)_9__106_2,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
  Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                             v26,
                             (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
  if ( !Master_object )
    goto LABEL_152;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v133,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  v27 = v131;
  v135 = v133;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v135,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v135,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
      Master_object = (__int64)v127;
      ++v17;
      max_length = v128->max_length;
      if ( v17 >= max_length )
        goto LABEL_117;
      goto LABEL_18;
    }
    if ( !v135.fields._current )
      sub_1C372B4(0);
    condValue = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)v135.fields._current, 0);
    if ( !v27 )
      sub_1C372B4(condValue);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(v27, condValue, 0);
    v30 = ShopBuyItemListViewManager___c_TypeInfo;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v30 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_3 = (System_Func_object__bool__o *)v30->static_fields->__9__106_3;
    if ( !_9__106_3 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__106_3 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_3,
        v32,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__,
        0);
      v33 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v33->__9__106_3 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_3;
      sub_1C36FFC((CGThumbnailListItem_o *)&v33->__9__106_3, (int32_t)_9__106_3, v34, v35);
    }
    v36 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
            List,
            (System_Func_TSource__bool__o *)_9__106_3,
            (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____78147176);
    v27 = v131;
  }
  while ( !v36 );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v135,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  v37 = v130;
  v38 = v128;
  *(_QWORD *)(v130 + 20) = 0xFFFFFFFFLL;
  v39 = v128->max_length;
  if ( v39 < 1 )
    goto LABEL_117;
  source = 0;
  v40 = 0;
  v41 = 1;
  do
  {
    if ( !v41 )
      goto LABEL_111;
    if ( v40 >= v39 )
      goto LABEL_141;
    v42 = v38->m_Items[v40];
    if ( !v42 )
      goto LABEL_152;
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                 v127,
                                                                 (int32_t)v42[1].klass,
                                                                 0);
    v44 = System_Linq_Enumerable__ToList_object_(
            v43,
            (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    v45 = ShopBuyItemListViewManager___c_TypeInfo;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v44;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v45 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_4 = (System_Func_object__bool__o *)v45->static_fields->__9__106_4;
    if ( !_9__106_4 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__106_4 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ShopReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_4,
        v48,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__,
        0);
      v49 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v49->__9__106_4 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_4;
      sub_1C36FFC((CGThumbnailListItem_o *)&v49->__9__106_4, (int32_t)_9__106_4, v50, v51);
    }
    v52 = System_Linq_Enumerable__Where_object_(
            v46,
            (System_Func_TSource__bool__o *)_9__106_4,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                               v52,
                               (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    if ( !Master_object )
      goto LABEL_152;
    v53 = (System_Collections_Generic_List_object__o *)Master_object;
    v126 = v40;
    if ( *(int *)(Master_object + 24) < 1 )
    {
LABEL_108:
      v55 = *(_DWORD *)(v37 + 20);
    }
    else
    {
      v54 = 0;
      while ( 1 )
      {
        v55 = *(_DWORD *)(v37 + 20);
        if ( v55 != -1 )
          break;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   v53,
                                   v54,
                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_152;
        v56 = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)Master_object, 0);
        v57 = CommonReleaseMaster__getList(v131, v56, 0);
        v58 = ShopBuyItemListViewManager___c_TypeInfo;
        v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v57;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v58 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_5 = (System_Func_object__int__o *)v58->static_fields->__9__106_5;
        if ( !_9__106_5 )
        {
          if ( !v58->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v58);
            v58 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v61 = (Il2CppObject *)v58->static_fields->__9;
          _9__106_5 = (System_Func_object__int__o *)sub_1C372A4(System_Func_CommonReleaseEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__106_5,
            v61,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__,
            0);
          v62 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v62->__9__106_5 = (struct System_Func_CommonReleaseEntity__int__o *)_9__106_5;
          sub_1C36FFC((CGThumbnailListItem_o *)&v62->__9__106_5, (int32_t)_9__106_5, v63, v64);
        }
        v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     v59,
                                                                     (System_Func_TSource__TKey__o *)_9__106_5,
                                                                     (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
        v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v65,
                                                                     (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
        v67 = ShopBuyItemListViewManager___c_TypeInfo;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v67 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_6 = (System_Func_object__bool__o *)v67->static_fields->__9__106_6;
        if ( !_9__106_6 )
        {
          if ( !v67->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v67);
            v67 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v69 = (Il2CppObject *)v67->static_fields->__9;
          _9__106_6 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__106_6,
            v69,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__,
            0);
          v70 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v70->__9__106_6 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_6;
          sub_1C36FFC((CGThumbnailListItem_o *)&v70->__9__106_6, (int32_t)_9__106_6, v71, v72);
        }
        Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                                   v66,
                                   (System_Func_TSource__bool__o *)_9__106_6,
                                   (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
        if ( !Master_object )
          goto LABEL_152;
        v73 = *(_QWORD *)Master_object;
        v74 = Master_object;
        v75 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v76 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_CommonReleaseEntity__c **)v76 - 1) != System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo )
          {
            --v75;
            v76 += 4;
            if ( !v75 )
              goto LABEL_77;
          }
          v77 = v73 + 16LL * *v76 + 312;
        }
        else
        {
LABEL_77:
          v77 = sub_1C87870(Master_object, System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo, 0);
        }
        v78 = (*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v74, *(_QWORD *)(v77 + 8));
        if ( !v78 )
          sub_1C372B4(0);
        while ( 1 )
        {
          v79 = *(_QWORD *)v78;
          v80 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
          {
            v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v81 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v80;
              v81 += 4;
              if ( !v80 )
                goto LABEL_84;
            }
            v82 = v79 + 16LL * *v81 + 312;
          }
          else
          {
LABEL_84:
            v82 = sub_1C87870(v78, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8)) & 1) == 0 )
            break;
          v83 = *(_QWORD *)v78;
          v84 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
          {
            v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_CommonReleaseEntity__c **)v85 - 1) != System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo )
            {
              --v84;
              v85 += 4;
              if ( !v84 )
                goto LABEL_91;
            }
            v86 = v83 + 16LL * *v85 + 312;
          }
          else
          {
LABEL_91:
            v86 = sub_1C87870(v78, System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo, 0);
          }
          v87 = (*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v78, *(_QWORD *)(v86 + 8));
          if ( !v87 )
            sub_1C372B4(0);
          v88 = *(_DWORD *)(v87 + 28);
          v89 = *(_DWORD *)(v87 + 32);
          v90 = *(int *)(v87 + 36);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(v88, v89, v90, 0, 0, 0) )
          {
            *(int32x2_t *)(v130 + 20) = vrev64_s32(*(int32x2_t *)(v87 + 20));
            source = v66;
            break;
          }
        }
        v91 = *(_QWORD *)v78;
        v92 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
        {
          v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v93 - 1) != System_IDisposable_TypeInfo )
          {
            --v92;
            v93 += 4;
            if ( !v92 )
              goto LABEL_102;
          }
          v94 = v91 + 16LL * *v93 + 312;
        }
        else
        {
LABEL_102:
          v94 = sub_1C87870(v78, System_IDisposable_TypeInfo, 0);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v78, *(_QWORD *)(v94 + 8));
        v37 = v130;
        if ( ++v54 >= v53->fields._size )
          goto LABEL_108;
      }
    }
    v38 = v128;
    v41 = v55 == -1;
    v39 = v128->max_length;
    v40 = v126 + 1;
  }
  while ( (int)(v126 + 1) < v39 );
  if ( v55 == -1 )
  {
LABEL_117:
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
      goto LABEL_120;
    goto LABEL_152;
  }
LABEL_111:
  v95 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CommonReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v95,
    (Il2CppObject *)v37,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__,
    0);
  v96 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
          source,
          (System_Func_TSource__bool__o *)v95,
          (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____78147176);
  if ( !v96 )
  {
    v99 = (System_String_o **)&StringLiteral_5692/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/;
    v100 = 0;
    klass_high = 0;
LABEL_146:
    v109 = *v99;
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
    {
      Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        v110 = this->fields.skillPartsLimitLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v111 = LocalizationManager__Get(v109, 0);
        LODWORD(v133.fields._list) = v100;
        v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133, v112, v113, v114, v115, v116, v117);
        v132 = klass_high;
        v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132, v119, v120, v121, v122, v123, v124);
        Master_object = (__int64)System_String__Format_63602948(v111, v118, v125, 0);
        if ( v110 )
        {
          UILabel__set_text(v110, (System_String_o *)Master_object, 0);
          return;
        }
      }
    }
    goto LABEL_152;
  }
  v97 = v96;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_152;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_152;
  TargetEntityList = (System_Collections_ICollection_o *)ShopGroupMaster__GetTargetEntityList(
                                                           (ShopGroupMaster_o *)Master_object,
                                                           (int32_t)v97[2].klass,
                                                           0);
  if ( !BasicHelper__IsNullOrEmpty(TargetEntityList, 0) )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !TargetEntityList )
      goto LABEL_152;
    monitor = TargetEntityList[1].monitor;
    v103 = (_DWORD)monitor - 1;
    if ( (int)monitor >= 1 )
    {
      v104 = (UserShopMaster_o *)Master_object;
      v105 = 0;
      v106 = 0;
      while ( 1 )
      {
        v107 = *((_QWORD *)&TargetEntityList[2].klass + v105);
        if ( !v107 )
          goto LABEL_152;
        v108 = *(_DWORD *)(v107 + 16);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        Master_object = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v104 )
          goto LABEL_152;
        Master_object = UserShopMaster__TryGetEntity(
                          v104,
                          &entity,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          v108,
                          0);
        if ( (Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_152;
          v106 += entity->fields.num;
        }
        if ( v103 == v105 )
          goto LABEL_144;
        if ( (unsigned int)++v105 >= LODWORD(TargetEntityList[1].monitor) )
          goto LABEL_141;
      }
    }
    v106 = 0;
LABEL_144:
    klass_high = HIDWORD(v97[2].klass);
    v99 = (System_String_o **)&StringLiteral_5689/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/;
    v100 = klass_high - v106;
    if ( klass_high - v106 >= 1 )
      v99 = (System_String_o **)&StringLiteral_5690/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/;
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
    sub_1C372B4(0);
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
  float realtimeSinceStartup; // s0
  float v9; // s0
  const MethodInfo *v10; // x1
  float v11; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v13; // w8

  if ( (byte_4C3F1BE & 1) == 0 )
  {
    sub_1C37058(&Method_TransitionCalculator_float__Update__);
    byte_4C3F1BE = 1;
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  p_anotherBuyAbleAlphaTransitionCalculator = &this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
  {
    AlphaTransitionCalculator = ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(0, method);
    *p_anotherBuyAbleAlphaTransitionCalculator = AlphaTransitionCalculator;
    sub_1C36FFC(
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
  v9 = TransitionCalculator_float___Update(
         (TransitionCalculator_float__o *)anotherBuyAbleAlphaTransitionCalculator,
         (const MethodInfo_3A66194 *)Method_TransitionCalculator_float__Update__);
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  this->fields.alphaAnimNow = v9;
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
    sub_1C372B4(anotherBuyAbleAlphaTransitionCalculator);
  AlphaTransitionCalculator__StartFadeIn(anotherBuyAbleAlphaTransitionCalculator, 0);
  v11 = UnityEngine_Time__get_realtimeSinceStartup(0);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  if ( alphaAnimCnt + 1 < 232792560 )
    v13 = alphaAnimCnt + 1;
  else
    v13 = alphaAnimCnt - 232792559;
  this->fields.alphaAnimTimeOld = v11;
  this->fields.alphaAnimCnt = v13;
  ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(this, v10);
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v5; // w21
  Il2CppObject *Item; // x22
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C3F1BD & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F1BD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C372B4(objectList);
  v5 = 0;
  while ( v5 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v5,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v5,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopBuyItemListViewObject__GetItem(
                                                                  (ShopBuyItemListViewObject_o *)objectList,
                                                                  v7);
      if ( objectList )
      {
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_43820548(
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
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v5;
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
    sub_1C372B4(this);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *ShopBuyItemListViewManager__get_ObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v5; // w21
  Il2CppObject *Item; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4C3F1BC & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F1BC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C372B4(objectList);
  v5 = 0;
  while ( v5 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v5,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v5,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v12 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v13 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v13[4] = (Il2CppClass *)v12;
        sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v5;
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

  if ( (byte_4C3F1DF & 1) == 0 )
  {
    sub_1C37058(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_4C3F1DF = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ShopBuyItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopBuyItemListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopBuyItemListViewManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ShopBuyItemListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C3F1E0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F1E0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( v4 )
  {
    if ( !x )
      sub_1C372B4(v4);
    ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(x, v5);
  }
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_2(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.condType == 113;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_3(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.condType == 263;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_4(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.condType == 113;
}


int32_t ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_5(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.priority;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_6(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return x->fields.slot == this->fields.slot;
}


bool ShopBuyItemListViewManager___c__DisplayClass106_0___SetSkillPartsLimitLabel_b__1(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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

  if ( (byte_4C3F1E1 & 1) == 0 )
  {
    sub_1C37058(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C3F1E1 = 1;
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

  if ( (byte_4C3F1E3 & 1) == 0 )
  {
    sub_1C37058(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C3F1E3 = 1;
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

  if ( (byte_4C3F1E2 & 1) == 0 )
  {
    sub_1C37058(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C3F1E2 = 1;
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

  if ( (byte_4C3F1E4 & 1) == 0 )
  {
    sub_1C37058(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C3F1E4 = 1;
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