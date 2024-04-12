void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816LL;
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_329D640;
  this->fields.listInDelay = 0.1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__ChangeFilter(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 filterStatus; // x8
  int32_t v4; // w20

  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 2 )
    this->fields.filterStatus = dword_329D738[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v4 = this->fields.filterStatus;
  if ( !byte_42B3525 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3525 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v4;
  EventRewardSaveData__SaveItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CheckUpdateEventRewardList(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_42B5BC1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5BC1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_B52A5C(Instance, v12);
  }
  if ( itemList->fields._size != LODWORD(Instance->fields.datalist) )
    ShopBuyItemListViewManager__CreateList_34955628(this, 6, eventId, slot, eventNum, isForcedAdjustment, v13);
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

  ShopBuyItemListViewManager__CreateList_34955628(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34955628(this, kind, 0, 0, 0, 0, v3);
}


void __fastcall ShopBuyItemListViewManager__CreateList_34955628(
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  System_Int32_array *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x6
  const MethodInfo *v27; // x4
  ShopEntity_array *ShopEntities; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x23
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x26
  int v32; // w24
  int32_t v33; // w19
  ShopEntity_o *v34; // x27
  struct System_Int32_array *targetIds; // x20
  __int64 v36; // x8
  unsigned __int64 v37; // x22
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x28
  int32_t v40; // w22
  ListViewItem_o *v41; // x20
  const MethodInfo *v42; // x2
  signed __int64 size; // x8
  unsigned __int64 v44; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x25
  int32_t v46; // w28
  ShopEntity_o *v47; // x27
  ListViewItem_o *v48; // x20
  const MethodInfo *v49; // x2
  signed __int64 v50; // x8
  unsigned __int64 v51; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x23
  int32_t v53; // w28
  ShopEntity_o *v54; // x25
  ListViewItem_o *v55; // x20
  const MethodInfo *v56; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v58; // x8
  __int64 v59; // x9
  __int64 v60; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v62; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v64; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v66; // x0
  __int64 *v67; // x8
  System_String_o *v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **sort; // x1
  _BOOL8 v76; // x0
  const MethodInfo *v77; // x3
  __int64 v78; // x0
  int32_t v79; // [xsp+4h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v80; // [xsp+8h] [xbp-78h]
  bool v81; // [xsp+14h] [xbp-6Ch]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+18h] [xbp-68h]
  ShopBuyItemListViewManager_o *v83; // [xsp+20h] [xbp-60h]
  EventRewardSceneEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B5BBE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ShopBuyItemListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12294/*"SHOP_SPECIAL_LIST_EMPTY"*/);
    sub_B52984(&StringLiteral_12255/*"SHOP_LIST_EMPTY"*/);
    sub_B52984(&StringLiteral_5752/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_42B5BBE = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
    this->fields.filterBtn,
    0,
    v16);
  v14 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v14 == 6 )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_117;
    Instance = (DataManager_o *)ShopMaster__GetEventItemList(
                                  (ShopMaster_o *)MasterData_WarQuestSelectionMaster,
                                  this->fields.eventId,
                                  0LL);
    if ( !Instance )
      goto LABEL_117;
    currencyInfoController = this->fields.currencyInfoController;
    v19 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.datalist;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v14);
    if ( !currencyInfoController )
      goto LABEL_117;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_B52920(
      (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
      (System_Int32_array **)Instance,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_117;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v19,
      isForcedAdjustment,
      v26);
    LODWORD(v14) = this->fields.kind;
  }
  v79 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v14,
                                                v17);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v27);
  v80 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v80,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_117;
  max_length = ShopEntities->max_length;
  v83 = this;
  if ( max_length < 1 )
  {
    v81 = 0;
    v33 = 0;
    if ( !v29 )
      goto LABEL_117;
    goto LABEL_44;
  }
  v81 = 0;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v32 = 0;
  v33 = 0;
  do
  {
    if ( v32 >= (unsigned int)max_length )
      goto LABEL_118;
    v34 = ShopEntities->m_Items[v32];
    if ( !v34 )
      goto LABEL_117;
    if ( v34->fields.purchaseType == 6 )
    {
      targetIds = v34->fields.targetIds;
      if ( !targetIds )
        goto LABEL_117;
      v36 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v36 >= 1 )
      {
        v37 = 0LL;
        while ( v37 < (unsigned int)v36 )
        {
          if ( !v31 )
            goto LABEL_117;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v31,
                                        targetIds->m_Items[v37 + 1],
                                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_40;
          LODWORD(v36) = targetIds->max_length;
          if ( (__int64)++v37 >= (int)v36 )
            goto LABEL_24;
        }
LABEL_118:
        v78 = sub_B52A88(Instance);
        sub_B52A28(v78, 0LL);
      }
    }
LABEL_24:
    if ( v81 )
    {
      v81 = 1;
    }
    else
    {
      v81 = v34->fields.purchaseType == 16;
      v83->fields.targetSlot = v34->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v34, v14)
      && !ShopEntity__GetIsNotHavingShopItemReceived(v34, v14)
      && !ShopEntity__IsAnotherItemBuyable(v34, v14) )
    {
      Instance = (DataManager_o *)v80;
      if ( !v80 )
        goto LABEL_117;
      goto LABEL_39;
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v34, v14);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_117;
      Instance = (DataManager_o *)v29;
LABEL_39:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      goto LABEL_40;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v34, v14);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(v83, v34, (int32_t)Instance, v38),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v34->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v83->fields.itemList;
        v40 = v83->fields.kind;
        v41 = (ListViewItem_o *)sub_B52A54(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_23532700(v41, v33, 0LL);
        v41[1].fields.sortIndex = v40;
        v41[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v41, v34, v42);
        if ( !itemList )
          goto LABEL_117;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v33;
      }
    }
LABEL_40:
    max_length = ShopEntities->max_length;
    ++v32;
  }
  while ( v32 < max_length );
  if ( !v29 )
    goto LABEL_117;
LABEL_44:
  LODWORD(size) = v29->fields._size;
  if ( (int)size >= 1 )
  {
    v44 = 0LL;
    do
    {
      v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v83->fields.itemList;
      v46 = v83->fields.kind;
      if ( v44 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v47 = (ShopEntity_o *)v29->fields._items->m_Items[v44];
      v48 = (ListViewItem_o *)sub_B52A54(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_23532700(v48, v33 + v44, 0LL);
      v48[1].fields.sortIndex = v46;
      v48[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v48, v47, v49);
      if ( !v45 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v45,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      size = v29->fields._size;
      ++v44;
    }
    while ( (__int64)v44 < size );
    v33 += v44;
  }
  if ( !v80 )
LABEL_117:
    sub_B52A5C(Instance, v14);
  LODWORD(v50) = v80->fields._size;
  if ( (int)v50 >= 1 )
  {
    v51 = 0LL;
    do
    {
      v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v83->fields.itemList;
      v53 = v83->fields.kind;
      if ( v51 >= (unsigned int)v50 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v54 = (ShopEntity_o *)v80->fields._items->m_Items[v51];
      v55 = (ListViewItem_o *)sub_B52A54(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_23532700(v55, v33 + v51, 0LL);
      v55[1].fields.sortIndex = v53;
      v55[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v55, v54, v56);
      if ( !v52 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v50 = v80->fields._size;
    }
    while ( (__int64)++v51 < v50 );
  }
  if ( v83->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)v83->fields.scrollBar;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v83->fields.scrollBar;
      if ( !Instance )
        goto LABEL_117;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_117;
      v58 = 340LL;
      if ( v79 == 1 )
        v58 = 328LL;
      if ( v79 == 1 )
        v59 = 324LL;
      else
        v59 = 336LL;
      if ( v79 == 1 )
        v60 = 320LL;
      else
        v60 = 332LL;
      v85.fields.y = *(float *)((char *)&v83->klass + v59);
      v85.fields.x = *(float *)((char *)&v83->klass + v60);
      v85.fields.z = *(float *)((char *)&v83->klass + v58);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v85, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)v83->fields.scrollbarBgSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v83->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_117;
      if ( v79 == 1 )
        v62 = 338;
      else
        v62 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v62, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)v83->fields.scrollbarForeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v83->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_117;
      if ( v79 == 1 )
        v64 = 348;
      else
        v64 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v64, 0LL);
    }
    emptyMessageLabel = v83->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = (System_String_o *)StringLiteral_5752/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/;
  }
  else
  {
    emptyMessageLabel = v83->fields.emptyMessageLabel;
    if ( v83->fields.kind == 12 )
      v67 = (__int64 *)&StringLiteral_12294/*"SHOP_SPECIAL_LIST_EMPTY"*/;
    else
      v67 = &StringLiteral_12255/*"SHOP_LIST_EMPTY"*/;
    v68 = (System_String_o *)*v67;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = v68;
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v66, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_117;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  sort = (System_Int32_array **)v83->fields.sort;
  if ( sort )
  {
    v83->fields.baseSortInfo = (struct ListViewSort_o *)sort;
    sub_B52920((BattleServantConfConponent_o *)&v83->fields.baseSortInfo, sort, v69, v70, v71, v72, v73, v74);
  }
  if ( !v81 )
    goto LABEL_115;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_117;
  v76 = EventRewardSceneMaster__TryGetEntity(
          (EventRewardSceneMaster_o *)Instance,
          &entity,
          v83->fields.eventId,
          v83->fields.targetSlot,
          0LL);
  if ( entity && v76 && entity->fields.type == 1 )
  {
    ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v76, v83->fields.filterBtn, 1, v77);
    EventRewardSaveData__LoadItemFilter(v83->fields.eventId, v83->fields.targetSlot, 0LL);
    if ( !byte_42B3526 )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42B3526 = 1;
    }
    v83->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
  }
  else
  {
LABEL_115:
    v83->fields.filterStatus = 0;
  }
  ShopBuyItemListViewManager__SetList(v83, (const MethodInfo *)sort);
  ListViewManager__SortItem((ListViewManager_o *)v83, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)v83, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_34957824(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34955628(this, 6, eventId, 0, 0, 0, v3);
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_329D750[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_329D7A0[state - 2];
}


int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_42B5BBF & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B5BBF = 1;
  }
  if ( (unsigned int)kind > 9 || ((1 << kind) & 0x304) == 0 )
    return -1LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getTime(0LL);
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
  int v5; // w8
  bool result; // w0
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v10; // x1
  int32_t PayType; // w0

  if ( (byte_42B5BD3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5BD3 = 1;
  }
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
    case 15:
    case 17:
    case 18:
      return result;
    case 4:
    case 13:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_B52A5C(Instance, v8);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
      result = EventItemList && *(_QWORD *)&EventItemList->max_length
            || (PayType = ShopBuyItemListViewManager__GetPayType(eventId, v10), PayType == 4)
            || (unsigned int)(PayType - 8) < 3;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


ShopBuyItemListViewItem_o *__fastcall ShopBuyItemListViewManager__GetItem(
        ShopBuyItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B5BC6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&ShopBuyItemListViewItem_TypeInfo);
    byte_42B5BC6 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (ShopBuyItemListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == ShopBuyItemListViewItem_TypeInfo )
    return (ShopBuyItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
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
  if ( initMode == 2 )
    return 3;
  if ( initMode == 5 )
    return 7;
  return 2;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__GetObjectList(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19

  if ( (byte_42B5BCC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    byte_42B5BCC = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v6;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8

  if ( (byte_42B5BD0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5BD0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, eventId, 0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( SLODWORD(Instance->fields.datalist) >= 1 )
  {
    lookup = Instance->fields.lookup;
    if ( lookup )
      return HIDWORD(lookup->fields.values);
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return 11;
}


ShopEntity_array *__fastcall ShopBuyItemListViewManager__GetShopEntities(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2

  if ( (byte_42B5BC0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5BC0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_B52A5C(Instance, v9);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_37;
      v10 = 2;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 6:
      if ( !Instance )
        goto LABEL_37;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL);
    case 7:
      if ( !Instance )
        goto LABEL_37;
      v10 = 6;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 8:
      if ( !Instance )
        goto LABEL_37;
      v10 = 7;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 9:
      if ( !Instance )
        goto LABEL_37;
      v10 = 3;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 10:
      if ( !Instance )
        goto LABEL_37;
      v10 = 4;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 11:
      if ( !Instance )
        goto LABEL_37;
      v10 = 5;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 12:
      if ( !Instance )
        goto LABEL_37;
      v10 = 9;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 13:
      if ( !Instance )
        goto LABEL_37;
      v10 = 10;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 14:
      if ( !Instance )
        goto LABEL_37;
      v10 = 11;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 15:
      if ( !Instance )
        goto LABEL_37;
      v10 = 12;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 16:
      if ( !Instance )
        goto LABEL_37;
      v10 = 13;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 17:
      if ( !Instance )
        goto LABEL_37;
      v10 = 14;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 19:
      if ( !Instance )
        goto LABEL_37;
      v10 = 15;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    case 20:
      if ( !Instance )
        goto LABEL_37;
      v10 = 16;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v10, 0LL);
    default:
      return 0LL;
  }
}


void __fastcall ShopBuyItemListViewManager__InvalidateList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  __int64 v4; // x21
  unsigned __int64 v5; // x24
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct System_Collections_Generic_List_GameObject__o *v8; // x20

  v2 = this;
  if ( (byte_42B5BC5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (ShopBuyItemListViewManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BC5 = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
LABEL_24:
    sub_B52A5C(this, method);
  v4 = 4LL;
  while ( 1 )
  {
    v5 = v4 - 4;
    if ( v4 - 4 >= objectList->fields._size )
      break;
    if ( v5 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v6 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v4);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ShopBuyItemListViewManager_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    Component_srcLineSprite = 0LL;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v8 = v2->fields.objectList;
      if ( !v8 )
        goto LABEL_24;
      if ( v5 >= (unsigned int)v8->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (ShopBuyItemListViewManager_o *)*((_QWORD *)&v8->fields._items->obj.klass + v4);
      if ( !this )
        goto LABEL_24;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ShopBuyItemListViewManager_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_24;
      ShopBuyItemListViewObject__SetupDisp((ShopBuyItemListViewObject_o *)Component_srcLineSprite, method);
    }
    objectList = v2->fields.objectList;
    ++v4;
    if ( !objectList )
      goto LABEL_24;
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

  return ShopBuyItemListViewManager__ModifyList_34961328(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__ModifyFilterList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  EventDetailEntity_o *Entity; // x20
  int32_t eventCount; // w21
  int32_t targetSlot; // w22
  int32_t eventId; // w23
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v10; // x6
  const MethodInfo *v11; // x2

  if ( (byte_42B5BC2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5BC2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.eventId,
                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopMaster__GetEnableEventEntityList(
                                      (ShopMaster_o *)Instance,
                                      this->fields.eventId,
                                      this->fields.targetSlot,
                                      0LL),
        !Entity) )
  {
    sub_B52A5C(Instance, v4);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_34955628(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v10);
  ShopBuyItemListViewManager__SetMode_34962340(this, 2, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyItem(
        ShopBuyItemListViewManager_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *v6; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x22
  __int64 v9; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8

  v6 = this;
  if ( (byte_42B5BC4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ShopBuyItemListViewManager_o *)sub_B52984(&ShopBuyItemListViewItem_TypeInfo);
    byte_42B5BC4 = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = v6->fields.itemList;
    if ( !itemList )
LABEL_15:
      sub_B52A5C(this, shopEntity);
    v8 = 0LL;
    while ( 1 )
    {
      if ( (__int64)v8 >= itemList->fields._size )
        return 0;
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (ShopBuyItemListViewManager_o *)itemList->fields._items->m_Items[v8];
      if ( !this )
        goto LABEL_15;
      v9 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (ShopBuyItemListViewItem_c *)this->klass->_2.typeHierarchy[v9 - 1] != ShopBuyItemListViewItem_TypeInfo )
      {
        goto LABEL_15;
      }
      dragParentObject = this->fields.dragParentObject;
      if ( dragParentObject )
      {
        if ( dragParentObject->fields.m_CachedPtr == shopId )
          break;
      }
      itemList = v6->fields.itemList;
      ++v8;
      if ( !itemList )
        goto LABEL_15;
    }
    ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)this, shopEntity, *(const MethodInfo **)&shopId);
  }
  return 1;
}


bool __fastcall ShopBuyItemListViewManager__ModifyList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  return ShopBuyItemListViewManager__ModifyList_34961328(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


bool __fastcall ShopBuyItemListViewManager__ModifyList_34961328(
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
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
  int32_t v29; // w23
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v32; // x27
  const MethodInfo *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int32_t v40; // w21
  ShopCurrencyInfoController_o *v41; // x28
  _BOOL4 isEventShop; // w19
  const MethodInfo *v43; // x6
  int datalist; // w8
  __int64 v45; // x27
  ShopEntity_o *v46; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v48; // x3
  __int64 v50; // x0
  bool v51; // [xsp+Ch] [xbp-54h]

  if ( (byte_42B5BC3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5BC3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)ShopBuyItemListViewManager__GetShopEntities(
                                (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
                                kind,
                                0,
                                0,
                                v16);
  v19 = Instance;
  if ( kind == 6 )
  {
    if ( MasterData_WarQuestSelectionMaster )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_WarQuestSelectionMaster, eventId, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v51 = isForcedAdjustment;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          v29 = slot;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v32 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v33);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            v40 = eventNum;
            sub_B52920(
              (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
              (System_Int32_array **)Instance,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            if ( v32 )
            {
              v41 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v32, 0LL);
              if ( v41 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v41,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  (unsigned __int8)Instance & 1,
                  v43);
                eventNum = v40;
                slot = v29;
                isForcedAdjustment = v51;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B52A5C(Instance, v14);
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
  if ( size < 1 || size == LODWORD(Instance->fields.datalist) )
  {
LABEL_20:
    datalist = (int)v19->fields.datalist;
    if ( datalist >= 1 )
    {
      v45 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v45 >= datalist )
        {
          v50 = sub_B52A88(Instance);
          sub_B52A28(v50, 0LL);
        }
        v46 = (ShopEntity_o *)*((_QWORD *)&v19->fields.lookup + v45);
        if ( !v46 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      *((ShopEntity_o **)&v19->fields.lookup + v45),
                                      v46->fields.id,
                                      v17);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v46, v14);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v46, v14);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v46, PurchaseShop, v48);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        datalist = (int)v19->fields.datalist;
        if ( (int)++v45 >= datalist )
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
  ShopBuyItemListViewManager__CreateList_34955628(v22, v23, v24, v25, v26, v27, v18);
  return 0;
}


void __fastcall ShopBuyItemListViewManager__OnClickListView(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_int__o *onClickListViewItem; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t Index; // w1

  if ( (byte_42B5BCF & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__Invoke__);
    byte_42B5BCF = 1;
  }
  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_B52A5C(v11, v12);
    Index = ListViewObject__get_Index(obj, 0LL);
    System_Action_int___Invoke(
      onClickListViewItem,
      Index,
      (const MethodInfo_2626204 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ShopBuyItemListViewManager__OnMoveEnd(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o *onMoveEnd; // x20

  if ( (byte_42B5BCE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BCE = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( v5 <= 0 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      if ( this->fields.initMode == 1 )
      {
        v8 = 1;
        ShopBuyItemListViewManager__SetScrollBarActive(v6, this->fields.scrollBar, 1, v7);
        itemSortList = this->fields.itemSortList;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( itemSortList )
          v8 = itemSortList->fields._size < 1;
        if ( !emptyMessageBase )
          goto LABEL_19;
        UnityEngine_GameObject__SetActive(emptyMessageBase, v8, 0LL);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_17;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.castClass)(
          emptyMessageBase,
          1LL,
          emptyMessageBase->klass[1]._1.declaringType);
LABEL_17:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0LL;
          sub_B52920((BattleServantConfConponent_o *)&this->fields.onMoveEnd, 0LL, v13, v14, v15, v16, v17, v18);
          System_Action__Invoke(onMoveEnd, 0LL);
        }
        return;
      }
LABEL_19:
      sub_B52A5C(emptyMessageBase, v9);
    }
  }
}


void __fastcall ShopBuyItemListViewManager__RequestListObject(
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
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *v11; // x22
  int size; // w8
  __int64 v13; // x24
  ShopBuyItemListViewObject_o *v14; // x20
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3
  float v17; // s0

  if ( (byte_42B5BCD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_B52984(&Method_ShopBuyItemListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B5BCD = 1;
  }
  v5 = 6;
  switch ( initMode )
  {
    case 1:
      v6 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v7);
      v10 = 0.1;
      v11 = ObjectList;
      v5 = 4;
      if ( !ObjectList )
        goto LABEL_26;
      goto LABEL_14;
    case 2:
      v5 = 3;
      goto LABEL_10;
    case 3:
      v5 = 5;
      goto LABEL_10;
    case 4:
      goto LABEL_10;
    case 5:
      v5 = 7;
      goto LABEL_10;
    default:
      v5 = 0;
LABEL_10:
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, initMode, method);
      v11 = ObjectList;
      v6 = 0;
      if ( (unsigned int)(initMode - 3) >= 2 )
        v10 = 0.0;
      else
        v10 = 0.1;
      if ( !ObjectList )
        goto LABEL_26;
LABEL_14:
      this->fields.callbackCount = v11->fields._size;
      size = v11->fields._size;
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
          (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
          v17,
          0LL);
      }
      else
      {
        v13 = 0LL;
        do
        {
          if ( size <= (unsigned int)v13 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v14 = v11->fields._items->m_Items[v13];
          v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v14 )
LABEL_26:
            sub_B52A5C(ObjectList, v9);
          ShopBuyItemListViewObject__Init_34965644(v14, v5, v15, v10, v16);
          size = v11->fields._size;
          ++v13;
        }
        while ( (int)v13 < size );
      }
      return;
  }
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
      sub_B52A5C(0LL, initMode);
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

  if ( (byte_42B5BCB & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BCB = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_B52A5C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
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
  UnityEngine_Object_o *filterTxtSprite; // x21
  UISprite_o *v6; // x21
  __int64 v7; // x1
  UIWidget_o *v8; // x0

  if ( (byte_42B5BCA & 1) == 0 )
  {
    sub_B52984(&EventRewardRootComponent_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BCA = 1;
  }
  filterTxtSprite = (UnityEngine_Object_o *)this->fields.filterTxtSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(filterTxtSprite, 0LL, 0LL) )
  {
    v6 = this->fields.filterTxtSprite;
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(v6, targetFile, 0LL);
    v8 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v8 || (UIWidget__set_width(v8, 52, 0LL), (v8 = (UIWidget_o *)this->fields.filterTxtSprite) == 0LL) )
      sub_B52A5C(v8, v7);
    UIWidget__set_height(v8, 20, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UILabel_o *emptyMessageLabel; // x21
  ListViewSort_o *operationSortInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int32_t filterStatus; // w8
  bool v17; // w2
  bool v18; // w2

  if ( (byte_42B5BC9 & 1) == 0 )
  {
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_17217/*"btn_txt_stock_02"*/);
    sub_B52984(&StringLiteral_17216/*"btn_txt_stock"*/);
    sub_B52984(&StringLiteral_5752/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    sub_B52984(&StringLiteral_17147/*"btn_txt_all"*/);
    byte_42B5BC9 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999772(v4, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5752/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_22;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)operationSortInfo, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17217/*"btn_txt_stock_02"*/, v15);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( *p_operationSortInfo )
      {
        v18 = 1;
        goto LABEL_19;
      }
    }
LABEL_22:
    sub_B52A5C(operationSortInfo, v14);
  }
  if ( filterStatus == 1 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17216/*"btn_txt_stock"*/, v15);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_22;
    v17 = 1;
  }
  else
  {
    if ( filterStatus )
      goto LABEL_20;
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17147/*"btn_txt_all"*/, v15);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_22;
    v17 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 52, v17, 0LL);
  operationSortInfo = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_22;
  v18 = 0;
LABEL_19:
  ListViewSort__SetFilter(operationSortInfo, 53, v18, 0LL);
LABEL_20:
  operationSortInfo = this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_22;
  ListViewSort__Set(operationSortInfo, *p_operationSortInfo, 0LL);
}


void __fastcall ShopBuyItemListViewManager__SetMode(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
    (System_Int32_array **)onClickListViewItem,
    (System_String_array **)onClickListViewItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_34962340(this, mode, v10);
}


void __fastcall ShopBuyItemListViewManager__SetMode_34962340(
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


void __fastcall ShopBuyItemListViewManager__SetMode_34963716(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_34962340(this, mode, v11);
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

  if ( (byte_42B5BD2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_42B5BD2 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v9.fields.x = *((float *)scrollView + 72);
  v9.fields.y = *((float *)scrollView + 73);
  v9.fields.z = *((float *)scrollView + 74);
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
    sub_B52A5C(scrollView, method);
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
  int32_t initMode; // w8
  unsigned int v7; // w9
  __int64 v8; // x1
  __int64 v9; // x10

  v5 = this;
  if ( (byte_42B5BC7 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_B52984(&ShopBuyItemListViewObject_TypeInfo);
    byte_42B5BC7 = 1;
  }
  initMode = v5->fields.initMode;
  if ( initMode == 5 )
    v7 = 7;
  else
    v7 = 2;
  if ( initMode == 2 )
    v8 = 3LL;
  else
    v8 = v7;
  if ( !obj
    || (v9 = *(&ShopBuyItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[v9 - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_B52A5C(this, v8);
  }
  ShopBuyItemListViewObject__Init_34965644((ShopBuyItemListViewObject_o *)obj, v8, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42B5BC8 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BC8 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_B52A5C(gameObject, v7);
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

  if ( (byte_42B5BD1 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_42B5BD1 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v9.fields.x = *((float *)scrollView + 72);
  v9.fields.y = *((float *)scrollView + 73);
  v9.fields.z = *((float *)scrollView + 74);
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
    sub_B52A5C(scrollView, method);
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
    sub_B52A5C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ClippingObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x26
  UnityEngine_Object_o *v9; // x21
  struct System_Collections_Generic_List_GameObject__o *v10; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21

  if ( (byte_42B5BBD & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BBD = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B52A5C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v10 = this->fields.objectList;
      if ( !v10 )
        goto LABEL_23;
      if ( v8 >= (unsigned int)v10->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ShopBuyItemListViewObject__GetItem(
                                                              (ShopBuyItemListViewObject_o *)Component_srcLineSprite,
                                                              v5);
      if ( Component_srcLineSprite )
      {
        v5 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23551160(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v11,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_23;
  }
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
    sub_B52A5C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x26
  UnityEngine_Object_o *v9; // x21
  struct System_Collections_Generic_List_GameObject__o *v10; // x21

  if ( (byte_42B5BBC & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BBC = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B52A5C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v10 = this->fields.objectList;
      if ( !v10 )
        goto LABEL_19;
      if ( v8 >= (unsigned int)v10->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v3 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ShopBuyItemListViewManager__set_EventItemCount(
        ShopBuyItemListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventItemCount_k__BackingField = value;
}