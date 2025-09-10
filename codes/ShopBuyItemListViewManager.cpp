void ShopBuyItemListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v4; // x20
  struct ShopBuyItemListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C23524 & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6284/*"ExchangeSvtCoinShop"*/);
    byte_4C23524 = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6284/*"ExchangeSvtCoinShop"*/;
  sub_1C2D434((CGThumbnailListItem_o *)ShopBuyItemListViewManager_TypeInfo->static_fields, StringLiteral_6284/*"ExchangeSvtCoinShop"*/, v1, v2);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v4 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v4, SORT_SAVE_KEY, 27, 0, 0);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->exchangeSvtCoinSortInfo, (int32_t)v4, v6, v7);
}


void ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_C09D40;
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
    this->fields.filterStatus = dword_C42150[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v4 = this->fields.filterStatus;
  if ( !byte_4C217FC )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217FC = 1;
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

  if ( (byte_4C23506 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_ShopBuyItemListViewObject__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__);
    sub_1C2D490(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_4C23506 = 1;
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
    _9__51_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_ShopBuyItemListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__51_0,
      v8,
      Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__,
      0);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_ShopBuyItemListViewObject__o *)_9__51_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v10, v11);
  }
  if ( !v6 )
    sub_1C2D6EC(ObjectList, v4);
  System_Collections_Generic_List_object___ForEach(
    v6,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
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

  if ( (byte_4C2350C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2350C = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0)) == 0
    || (itemList = this->fields.itemList) == 0 )
  {
    sub_1C2D6EC(Instance, v12);
  }
  if ( itemList->fields._size != LODWORD(Instance->max_length) )
    ShopBuyItemListViewManager__CreateList_34981048(this, 6, eventId, slot, eventNum, isForcedAdjustment, v13);
}


AlphaTransitionCalculator_o *ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  float v2; // s8
  System_Func_float__float__float__float__o *v3; // x19
  AlphaTransitionCalculator_o *v4; // x20

  if ( (byte_4C23505 & 1) == 0 )
  {
    sub_1C2D490(&AlphaTransitionCalculator_TypeInfo);
    byte_4C23505 = 1;
  }
  v2 = ChangedFPSUtil__CovertFrameNumToSecond(7, 0);
  v3 = ExtraEasing__AsymptoticSeriesFloat(0.5, 7.0, 0);
  v4 = (AlphaTransitionCalculator_o *)sub_1C2D6DC(AlphaTransitionCalculator_TypeInfo);
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

  ShopBuyItemListViewManager__CreateList_34981048(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_4C23507 & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemListViewManager_TypeInfo);
    byte_4C23507 = 1;
  }
  v6 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
    v6 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v6->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)exchangeSvtCoinSortInfo, (int32_t)method, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, v8);
  ListViewSort__Load(sort, 0);
  ShopBuyItemListViewManager__CreateList_34981048(this, 22, 0, svtCoinType, 0, 0, v10);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v11);
}


void ShopBuyItemListViewManager__CreateList(ShopBuyItemListViewManager_o *this, int32_t kind, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34981048(this, kind, 0, 0, 0, 0, v3);
}


void ShopBuyItemListViewManager__CreateList_34981048(
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
  __int64 v28; // x2
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

  if ( (byte_4C23508 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopBuyItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12176/*"SHOP_SPECIAL_LIST_EMPTY"*/);
    sub_1C2D490(&StringLiteral_12125/*"SHOP_LIST_EMPTY"*/);
    sub_1C2D490(&StringLiteral_5699/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    sub_1C2D490(&StringLiteral_5764/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/);
    byte_4C23508 = 1;
  }
  possessionAnotherItemId = 0;
  entity = 0;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_1C2D434((CGThumbnailListItem_o *)&currencyInfoController->fields.objectList, (int32_t)Instance, v20, v21);
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
  v108 = eventNum;
  v110 = kind;
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
  v113 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v113,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  v26 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v27);
  if ( !ShopEntities )
    goto LABEL_132;
  max_length = ShopEntities->max_length;
  v30 = EnterTime;
  v109 = slot;
  if ( max_length < 1 )
  {
    v33 = 0;
    index = 0;
    if ( !v25 )
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
      sub_1C2D6F4(Instance, v14, v28);
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
        if ( v26 )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v26,
                                        targetIds->m_Items[v36],
                                        (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
      if ( !v25 )
        goto LABEL_132;
      v40 = v25->fields._items;
      v41 = *v31;
      ++v25->fields._version;
      if ( !v40 )
        goto LABEL_132;
      v42 = v25->fields._size;
      if ( (unsigned int)v42 < LODWORD(v40->max_length) )
      {
        v43 = &v40->obj.klass + v42;
        v25->fields._size = v42 + 1;
LABEL_48:
        v43[4] = (Il2CppClass *)v34;
        sub_1C2D434((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v34, v38, v39);
        goto LABEL_53;
      }
      v56 = *(_QWORD *)(v41 + 32);
      v57 = v25;
LABEL_52:
      System_Collections_Generic_List_object___AddWithResize(
        v57,
        (Il2CppObject *)v34,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v56 + 192) + 112LL));
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
        v48 = (ListViewItem_o *)sub_1C2D6DC(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_43566844(v48, index, 0);
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &v52->obj.klass + v54;
          itemList->fields._size = v54 + 1;
          v55[4] = (Il2CppClass *)v48;
          sub_1C2D434((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v48, v50, v51);
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
  if ( !v25 )
    goto LABEL_132;
LABEL_57:
  if ( v25->fields._size >= 1 )
  {
    v61 = 0;
    do
    {
      v62 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v63 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               v61,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v65 = (ListViewItem_o *)sub_1C2D6DC(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_43566844(v65, index + v61, 0);
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
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = &v69->obj.klass + v71;
        v62->fields._size = v71 + 1;
        v72[4] = (Il2CppClass *)v65;
        sub_1C2D434((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v65, v67, v68);
      }
      ++v61;
    }
    while ( v61 < v25->fields._size );
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
              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v78 = (ListViewItem_o *)sub_1C2D6DC(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_43566844(v78, index + v74, 0);
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
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &v82->obj.klass + v84;
        v75->fields._size = v84 + 1;
        v85[4] = (Il2CppClass *)v78;
        sub_1C2D434((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v78, v80, v81);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5699/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0);
    if ( emptyMessageLabel )
    {
      v97 = (System_String_o *)Instance;
      goto LABEL_117;
    }
LABEL_132:
    sub_1C2D6EC(Instance, v14);
  }
  v98 = this->fields.kind;
  v99 = &StringLiteral_12125/*"SHOP_LIST_EMPTY"*/;
  if ( v98 == 22 )
    v99 = (__int64 *)&StringLiteral_5764/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
  if ( v98 == 12 )
    v100 = (System_String_o **)&StringLiteral_12176/*"SHOP_SPECIAL_LIST_EMPTY"*/;
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v102, v103);
  }
  if ( !v33 )
    goto LABEL_128;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
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
      if ( !byte_4C217FD )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217FD = 1;
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


void ShopBuyItemListViewManager__CreateList_34984048(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34981048(this, 6, eventId, 0, 0, 0, v3);
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

  if ( (byte_4C23521 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23521 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_34993380(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1C2D6EC(sort, isDecide);
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

  if ( (byte_4C23509 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23509 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23584 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23584 = 1;
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
    if ( !byte_4C23584 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23584 = 1;
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
    if ( !byte_4C23585 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23585 = 1;
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
    return dword_C4215C[state - 2];
}


int32_t ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_C421B0[state - 2];
}


int64_t ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4C2350A & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2350A = 1;
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

  if ( (byte_4C23512 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_ListViewItem___);
    sub_1C2D490(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_1C2D490(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__2__);
    sub_1C2D490(&ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo);
    byte_4C23512 = 1;
  }
  v5 = sub_1C2D6DC(ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v10 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__,
    0);
  if ( System_Linq_Enumerable__Count_object__51316140(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)v10,
         (const MethodInfo_30F05AC *)Method_System_Linq_Enumerable_Count_ListViewItem___) < 2 )
    goto LABEL_11;
  v11 = this->fields.itemList;
  v12 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ListViewItem__TypeInfo);
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
             (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( result < 0 )
  {
LABEL_11:
    v13 = this->fields.itemList;
    v14 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__,
      0);
    if ( v13 )
      return System_Collections_Generic_List_object___FindIndex(
               (System_Collections_Generic_List_object__o *)v13,
               (System_Predicate_T__o *)v14,
               (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
LABEL_13:
    sub_1C2D6EC(v6, v7);
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

  if ( (byte_4C23513 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_1C2D490(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__);
    sub_1C2D490(&ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo);
    byte_4C23513 = 1;
  }
  v5 = sub_1C2D6DC(ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_DWORD *)(v5 + 16) = targetId;
  if ( targetId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v10 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__,
    0);
  if ( !itemList )
LABEL_9:
    sub_1C2D6EC(v6, v7);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v10,
           (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
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

  if ( (byte_4C2351F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2351F = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
      {
        sub_1C2D6EC(Instance, v8);
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

  if ( (byte_4C23511 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C23511 = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C23519 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    byte_4C23519 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v6;
}


int32_t ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  ShopEntity_o *v5; // x8

  if ( (byte_4C2351C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2351C = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C2350B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2350B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C2D6EC(Instance, v9);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___);
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

  if ( (byte_4C23510 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23510 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1C2D6EC(objectList, method);
  v4 = 0;
  while ( v4 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v4,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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

  return ShopBuyItemListViewManager__ModifyList_34992400(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_4C2350D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2350D = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0),
        !Entity) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0);
  ShopBuyItemListViewManager__CreateList_34981048(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v10);
  ShopBuyItemListViewManager__SetMode_34993380(this, 2, v11);
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

  if ( (byte_4C2350F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C2350F = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1C2D6EC(itemList, shopEntity);
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v8,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  return ShopBuyItemListViewManager__ModifyList_34992400(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


bool ShopBuyItemListViewManager__ModifyList_34992400(
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
  __int64 v38; // x2
  const MethodInfo *v39; // x3
  int m_CancellationTokenSource; // w8
  unsigned int v41; // w27
  DataManager_c **v42; // x8
  ShopEntity_o *v43; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v45; // x3

  if ( (byte_4C2350E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2350E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v31 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v32);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1C2D434(
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
    sub_1C2D6EC(Instance, v14);
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
      v41 = 0;
      while ( 1 )
      {
        if ( v41 >= m_CancellationTokenSource )
          sub_1C2D6F4(Instance, v14, v38);
        v42 = &v19->klass + (int)v41;
        v43 = (ShopEntity_o *)v42[4];
        if ( !v43 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      (ShopEntity_o *)v42[4],
                                      v43->fields.id,
                                      v39);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v43, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v43, 0);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v43, PurchaseShop, v45);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
        if ( (int)++v41 >= m_CancellationTokenSource )
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
  ShopBuyItemListViewManager__CreateList_34981048(v22, v23, v24, v25, v26, v27, v18);
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

  if ( (byte_4C23520 & 1) == 0 )
  {
    sub_1C2D490(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23520 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
    sub_1C2D434(p_onClickListViewItem, 0, (int32_t)method, v3);
    if ( !obj )
      sub_1C2D6EC(v7, v8);
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

  if ( (byte_4C2351B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2351B = 1;
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
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onMoveEnd, 0, v13, v14);
          ((void (__fastcall *)(intptr_t, intptr_t))onMoveEnd->fields.invoke_impl)(
            onMoveEnd->fields.method_code,
            onMoveEnd->fields.method);
        }
        return;
      }
LABEL_18:
      sub_1C2D6EC(emptyMessageBase, v9);
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

  if ( (byte_4C2351A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2351A = 1;
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
          (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
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
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0);
          if ( !Item )
LABEL_23:
            sub_1C2D6EC(ObjectList, v9);
          ShopBuyItemListViewObject__Init_34996420((ShopBuyItemListViewObject_o *)Item, v5, v15, v10, v16);
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
      sub_1C2D6EC(0, initMode);
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

  if ( (byte_4C23518 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23518 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0)) == 0 )
    {
      sub_1C2D6EC(gameObject, v7);
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

  if ( (byte_4C23522 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C23522 = 1;
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
      sub_1C2D6EC(sort, v4);
    }
    v7 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v7 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
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

  if ( (byte_4C23517 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23517 = 1;
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
      sub_1C2D6EC(v8, v7);
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

  if ( (byte_4C23516 & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&StringLiteral_17604/*"btn_txt_stock_02"*/);
    sub_1C2D490(&StringLiteral_17603/*"btn_txt_stock"*/);
    sub_1C2D490(&StringLiteral_17533/*"btn_txt_all"*/);
    byte_4C23516 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43601448(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17604/*"btn_txt_stock_02"*/, v9);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0), (operationSortInfo = *p_operationSortInfo) == 0) )
    {
LABEL_18:
      sub_1C2D6EC(operationSortInfo, v8);
    }
    v13 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17603/*"btn_txt_stock"*/, v9);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v12 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17533/*"btn_txt_all"*/, v9);
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
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    method);
  ShopBuyItemListViewManager__SetMode_34993380(this, mode, v6);
}


void ShopBuyItemListViewManager__SetMode_34993380(
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


void ShopBuyItemListViewManager__SetMode_34994660(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)callback, (int32_t)callback, method);
  ShopBuyItemListViewManager__SetMode_34993380(this, mode, v7);
}


void ShopBuyItemListViewManager__SetMultiEventScrollInfo(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2351E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C2351E = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C2D6EC(scrollView, method);
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
  if ( (byte_4C23514 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1C2D490(&ShopBuyItemListViewObject_TypeInfo);
    byte_4C23514 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopBuyItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
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
  ShopBuyItemListViewObject__Init_34996420((ShopBuyItemListViewObject_o *)obj, v9, 0, 0.0, method);
}


void ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C23515 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23515 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0)) == 0 )
    {
      sub_1C2D6EC(gameObject, v7);
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

  if ( (byte_4C2351D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C2351D = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C2D6EC(scrollView, method);
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
  __int64 v16; // x2
  int max_length; // w8
  CommonReleaseMaster_o *v18; // x24
  int v19; // w20
  Il2CppObject *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EntitiyList; // x24
  ShopBuyItemListViewManager___c_c *v22; // x8
  System_Func_object__bool__o *_9__106_2; // x22
  Il2CppObject *v24; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  CommonReleaseMaster_o *v29; // x24
  __int64 v30; // x1
  __int64 condValue; // x0
  System_Collections_Generic_IEnumerable_TSource__o *List; // x24
  ShopBuyItemListViewManager___c_c *v33; // x8
  System_Func_object__bool__o *_9__106_3; // x22
  Il2CppObject *v35; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x0
  __int64 v40; // x21
  System_Object_array *v41; // x11
  int v42; // w8
  unsigned int v43; // w26
  bool v44; // w9
  Il2CppObject *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_List_TSource__o *v47; // x0
  ShopBuyItemListViewManager___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x25
  System_Func_object__bool__o *_9__106_4; // x22
  Il2CppObject *v51; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_List_object__o *v56; // x25
  int32_t v57; // w26
  int v58; // w10
  int32_t v59; // w0
  CommonReleaseEntity_array *v60; // x0
  ShopBuyItemListViewManager___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x27
  System_Func_object__int__o *_9__106_5; // x22
  Il2CppObject *v64; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x28
  ShopBuyItemListViewManager___c_c *v70; // x8
  System_Func_object__bool__o *_9__106_6; // x22
  Il2CppObject *v72; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  __int64 v76; // x8
  __int64 v77; // x27
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x27
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x22
  int32_t v93; // w19
  int32_t v94; // w29
  int64_t v95; // x21
  __int64 v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  System_Func_object__bool__o *v100; // x19
  Il2CppObject *v101; // x0
  Il2CppObject *v102; // x20
  System_Collections_ICollection_o *TargetEntityList; // x21
  System_String_o **v104; // x8
  int v105; // w21
  int klass_high; // w22
  void *monitor; // x8
  int v108; // w25
  UserShopMaster_o *v109; // x22
  int v110; // w26
  int v111; // w19
  __int64 v112; // x8
  int32_t v113; // w24
  System_String_o *v114; // x20
  UILabel_o *v115; // x19
  System_String_o *v116; // x20
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  Il2CppObject *v120; // x21
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  Il2CppObject *v124; // x0
  unsigned int v125; // [xsp+4h] [xbp-DCh]
  ShopReleaseMaster_o *v126; // [xsp+8h] [xbp-D8h]
  System_Object_array *v127; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-C8h]
  __int64 v129; // [xsp+28h] [xbp-B8h]
  CommonReleaseMaster_o *v130; // [xsp+30h] [xbp-B0h]
  int v131; // [xsp+3Ch] [xbp-A4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v132; // [xsp+40h] [xbp-A0h] BYREF
  UserShopEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C23523 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____78036000);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__);
    sub_1C2D490(&System_Func_CommonReleaseEntity__int__TypeInfo);
    sub_1C2D490(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_ShopReleaseEntity__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__);
    sub_1C2D490(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__);
    sub_1C2D490(&ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo);
    sub_1C2D490(&ShopBuyItemListViewManager___c_TypeInfo);
    sub_1C2D490(&StringLiteral_5680/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/);
    sub_1C2D490(&StringLiteral_5681/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/);
    sub_1C2D490(&StringLiteral_5683/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/);
    byte_4C23523 = 1;
  }
  memset(&v134, 0, sizeof(v134));
  entity = 0;
  v7 = sub_1C2D6DC(ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo);
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_152;
  EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                            (ShopMaster_o *)Master_object,
                                                                            eventId,
                                                                            0);
  v13 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ShopEntity__bool__TypeInfo);
  v129 = v7;
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          EventEntitiyList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          v14,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  v126 = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v15 )
LABEL_152:
    sub_1C2D6EC(Master_object, v9);
  max_length = v15->max_length;
  v18 = (CommonReleaseMaster_o *)Master_object;
  Master_object = (__int64)v126;
  v127 = v15;
  if ( max_length < 1 )
    goto LABEL_117;
  v19 = 0;
  v130 = v18;
LABEL_18:
  if ( v19 >= (unsigned int)max_length )
LABEL_141:
    sub_1C2D6F4(Master_object, v9, v16);
  v20 = v127->m_Items[v19];
  if ( !v20 || !Master_object )
    goto LABEL_152;
  EntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                       (ShopReleaseMaster_o *)Master_object,
                                                                       (int32_t)v20[1].klass,
                                                                       0);
  v22 = ShopBuyItemListViewManager___c_TypeInfo;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v22 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__106_2 = (System_Func_object__bool__o *)v22->static_fields->__9__106_2;
  if ( !_9__106_2 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__106_2 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ShopReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_2,
      v24,
      Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__,
      0);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_2 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_2;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__106_2, (int32_t)_9__106_2, v26, v27);
  }
  v28 = System_Linq_Enumerable__Where_object_(
          EntitiyList,
          (System_Func_TSource__bool__o *)_9__106_2,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
  Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                             v28,
                             (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
  if ( !Master_object )
    goto LABEL_152;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v132,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  v29 = v130;
  v134 = v132;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v134,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v134,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
      Master_object = (__int64)v126;
      ++v19;
      max_length = v127->max_length;
      if ( v19 >= max_length )
        goto LABEL_117;
      goto LABEL_18;
    }
    if ( !v134.fields._current )
      sub_1C2D6EC(0, v30);
    condValue = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)v134.fields._current, 0);
    if ( !v29 )
      sub_1C2D6EC(condValue, (unsigned int)condValue);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(v29, condValue, 0);
    v33 = ShopBuyItemListViewManager___c_TypeInfo;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v33 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_3 = (System_Func_object__bool__o *)v33->static_fields->__9__106_3;
    if ( !_9__106_3 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__106_3 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_3,
        v35,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__,
        0);
      v36 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v36->__9__106_3 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_3;
      sub_1C2D434((CGThumbnailListItem_o *)&v36->__9__106_3, (int32_t)_9__106_3, v37, v38);
    }
    v39 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
            List,
            (System_Func_TSource__bool__o *)_9__106_3,
            (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____78036000);
    v29 = v130;
  }
  while ( !v39 );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v134,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  v40 = v129;
  v41 = v127;
  *(_QWORD *)(v129 + 20) = 0xFFFFFFFFLL;
  v42 = v127->max_length;
  if ( v42 < 1 )
    goto LABEL_117;
  source = 0;
  v43 = 0;
  v44 = 1;
  do
  {
    if ( !v44 )
      goto LABEL_111;
    if ( v43 >= v42 )
      goto LABEL_141;
    v45 = v41->m_Items[v43];
    if ( !v45 )
      goto LABEL_152;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                 v126,
                                                                 (int32_t)v45[1].klass,
                                                                 0);
    v47 = System_Linq_Enumerable__ToList_object_(
            v46,
            (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    v48 = ShopBuyItemListViewManager___c_TypeInfo;
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v48 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_4 = (System_Func_object__bool__o *)v48->static_fields->__9__106_4;
    if ( !_9__106_4 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v48->static_fields->__9;
      _9__106_4 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ShopReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_4,
        v51,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__,
        0);
      v52 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v52->__9__106_4 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_4;
      sub_1C2D434((CGThumbnailListItem_o *)&v52->__9__106_4, (int32_t)_9__106_4, v53, v54);
    }
    v55 = System_Linq_Enumerable__Where_object_(
            v49,
            (System_Func_TSource__bool__o *)_9__106_4,
            (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                               v55,
                               (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    if ( !Master_object )
      goto LABEL_152;
    v56 = (System_Collections_Generic_List_object__o *)Master_object;
    v125 = v43;
    if ( *(int *)(Master_object + 24) < 1 )
    {
LABEL_108:
      v58 = *(_DWORD *)(v40 + 20);
    }
    else
    {
      v57 = 0;
      while ( 1 )
      {
        v58 = *(_DWORD *)(v40 + 20);
        if ( v58 != -1 )
          break;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   v56,
                                   v57,
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_152;
        v59 = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)Master_object, 0);
        v60 = CommonReleaseMaster__getList(v130, v59, 0);
        v61 = ShopBuyItemListViewManager___c_TypeInfo;
        v62 = (System_Collections_Generic_IEnumerable_TSource__o *)v60;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v61 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_5 = (System_Func_object__int__o *)v61->static_fields->__9__106_5;
        if ( !_9__106_5 )
        {
          if ( !v61->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v61);
            v61 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v64 = (Il2CppObject *)v61->static_fields->__9;
          _9__106_5 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_CommonReleaseEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__106_5,
            v64,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__,
            0);
          v65 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v65->__9__106_5 = (struct System_Func_CommonReleaseEntity__int__o *)_9__106_5;
          sub_1C2D434((CGThumbnailListItem_o *)&v65->__9__106_5, (int32_t)_9__106_5, v66, v67);
        }
        v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     v62,
                                                                     (System_Func_TSource__TKey__o *)_9__106_5,
                                                                     (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
        v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v68,
                                                                     (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
        v70 = ShopBuyItemListViewManager___c_TypeInfo;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v70 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_6 = (System_Func_object__bool__o *)v70->static_fields->__9__106_6;
        if ( !_9__106_6 )
        {
          if ( !v70->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v70);
            v70 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v72 = (Il2CppObject *)v70->static_fields->__9;
          _9__106_6 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__106_6,
            v72,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__,
            0);
          v73 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v73->__9__106_6 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_6;
          sub_1C2D434((CGThumbnailListItem_o *)&v73->__9__106_6, (int32_t)_9__106_6, v74, v75);
        }
        Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                                   v69,
                                   (System_Func_TSource__bool__o *)_9__106_6,
                                   (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
        if ( !Master_object )
          goto LABEL_152;
        v76 = *(_QWORD *)Master_object;
        v77 = Master_object;
        v78 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v79 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_CommonReleaseEntity__c **)v79 - 1) != System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo )
          {
            --v78;
            v79 += 4;
            if ( !v78 )
              goto LABEL_77;
          }
          v80 = v76 + 16LL * *v79 + 312;
        }
        else
        {
LABEL_77:
          v80 = sub_1C7DCA8(Master_object, System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo, 0);
        }
        v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v77, *(_QWORD *)(v80 + 8));
        if ( !v82 )
          sub_1C2D6EC(0, v81);
        while ( 1 )
        {
          v83 = *(_QWORD *)v82;
          v84 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
          {
            v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v85 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v84;
              v85 += 4;
              if ( !v84 )
                goto LABEL_84;
            }
            v86 = v83 + 16LL * *v85 + 312;
          }
          else
          {
LABEL_84:
            v86 = sub_1C7DCA8(v82, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8)) & 1) == 0 )
            break;
          v87 = *(_QWORD *)v82;
          v88 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
          {
            v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_CommonReleaseEntity__c **)v89 - 1) != System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo )
            {
              --v88;
              v89 += 4;
              if ( !v88 )
                goto LABEL_91;
            }
            v90 = v87 + 16LL * *v89 + 312;
          }
          else
          {
LABEL_91:
            v90 = sub_1C7DCA8(v82, System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo, 0);
          }
          v92 = (*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v82, *(_QWORD *)(v90 + 8));
          if ( !v92 )
            sub_1C2D6EC(0, v91);
          v93 = *(_DWORD *)(v92 + 28);
          v94 = *(_DWORD *)(v92 + 32);
          v95 = *(int *)(v92 + 36);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(v93, v94, v95, 0, 0, 0) )
          {
            *(int32x2_t *)(v129 + 20) = vrev64_s32(*(int32x2_t *)(v92 + 20));
            source = v69;
            break;
          }
        }
        v96 = *(_QWORD *)v82;
        v97 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
        {
          v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
          {
            --v97;
            v98 += 4;
            if ( !v97 )
              goto LABEL_102;
          }
          v99 = v96 + 16LL * *v98 + 312;
        }
        else
        {
LABEL_102:
          v99 = sub_1C7DCA8(v82, System_IDisposable_TypeInfo, 0);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v82, *(_QWORD *)(v99 + 8));
        v40 = v129;
        if ( ++v57 >= v56->fields._size )
          goto LABEL_108;
      }
    }
    v41 = v127;
    v44 = v58 == -1;
    v42 = v127->max_length;
    v43 = v125 + 1;
  }
  while ( (int)(v125 + 1) < v42 );
  if ( v58 == -1 )
  {
LABEL_117:
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
      goto LABEL_120;
    goto LABEL_152;
  }
LABEL_111:
  v100 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_CommonReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v100,
    (Il2CppObject *)v40,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__,
    0);
  v101 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
           source,
           (System_Func_TSource__bool__o *)v100,
           (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____78036000);
  if ( !v101 )
  {
    v104 = (System_String_o **)&StringLiteral_5683/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/;
    v105 = 0;
    klass_high = 0;
LABEL_146:
    v114 = *v104;
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
    {
      Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        v115 = this->fields.skillPartsLimitLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v116 = LocalizationManager__Get(v114, 0);
        LODWORD(v132.fields._list) = v105;
        v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132, v117, v118, v119);
        v131 = klass_high;
        v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131, v121, v122, v123);
        Master_object = (__int64)System_String__Format_63499156(v116, v120, v124, 0);
        if ( v115 )
        {
          UILabel__set_text(v115, (System_String_o *)Master_object, 0);
          return;
        }
      }
    }
    goto LABEL_152;
  }
  v102 = v101;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_152;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_152;
  TargetEntityList = (System_Collections_ICollection_o *)ShopGroupMaster__GetTargetEntityList(
                                                           (ShopGroupMaster_o *)Master_object,
                                                           (int32_t)v102[2].klass,
                                                           0);
  if ( !BasicHelper__IsNullOrEmpty(TargetEntityList, 0) )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !TargetEntityList )
      goto LABEL_152;
    monitor = TargetEntityList[1].monitor;
    v108 = (_DWORD)monitor - 1;
    if ( (int)monitor >= 1 )
    {
      v109 = (UserShopMaster_o *)Master_object;
      v110 = 0;
      v111 = 0;
      while ( 1 )
      {
        v112 = *((_QWORD *)&TargetEntityList[2].klass + v110);
        if ( !v112 )
          goto LABEL_152;
        v113 = *(_DWORD *)(v112 + 16);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        Master_object = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v109 )
          goto LABEL_152;
        Master_object = UserShopMaster__TryGetEntity(
                          v109,
                          &entity,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          v113,
                          0);
        if ( (Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_152;
          v111 += entity->fields.num;
        }
        if ( v108 == v110 )
          goto LABEL_144;
        if ( (unsigned int)++v110 >= LODWORD(TargetEntityList[1].monitor) )
          goto LABEL_141;
      }
    }
    v111 = 0;
LABEL_144:
    klass_high = HIDWORD(v102[2].klass);
    v104 = (System_String_o **)&StringLiteral_5680/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/;
    v105 = klass_high - v111;
    if ( klass_high - v111 >= 1 )
      v104 = (System_String_o **)&StringLiteral_5681/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/;
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
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C23504 & 1) == 0 )
  {
    sub_1C2D490(&Method_TransitionCalculator_float__Update__);
    byte_4C23504 = 1;
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  p_anotherBuyAbleAlphaTransitionCalculator = &this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
  {
    AlphaTransitionCalculator = ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(0, method);
    *p_anotherBuyAbleAlphaTransitionCalculator = AlphaTransitionCalculator;
    sub_1C2D434(
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
          (const MethodInfo_3A4CC24 *)Method_TransitionCalculator_float__Update__);
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
    sub_1C2D6EC(anotherBuyAbleAlphaTransitionCalculator, v8);
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

  if ( (byte_4C23503 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23503 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C2D6EC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_43582756(
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
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C23502 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23502 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C2D6EC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v13;
        sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
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

  if ( (byte_4C23525 & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_4C23525 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ShopBuyItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopBuyItemListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopBuyItemListViewManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ShopBuyItemListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C23526 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23526 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( v4 )
  {
    if ( !x )
      sub_1C2D6EC(v4, v5);
    ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(x, v5);
  }
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_2(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.condType == 113;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_3(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.condType == 263;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_4(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.condType == 113;
}


int32_t ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_5(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_6(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return x->fields.slot == this->fields.slot;
}


bool ShopBuyItemListViewManager___c__DisplayClass106_0___SetSkillPartsLimitLabel_b__1(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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

  if ( (byte_4C23527 & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C23527 = 1;
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

  if ( (byte_4C23529 & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C23529 = 1;
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

  if ( (byte_4C23528 & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C23528 = 1;
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

  if ( (byte_4C2352A & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemListViewItem_TypeInfo);
    byte_4C2352A = 1;
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