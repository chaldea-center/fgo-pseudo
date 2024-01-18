void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816LL;
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_31C3530;
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
    this->fields.filterStatus = dword_31C3628[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_418AA1F )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v4);
    byte_418AA1F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v5;
  EventRewardSaveData__SaveItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_418D491 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418D491 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_B2C434(Instance, v14);
  }
  if ( itemList->fields._size != LODWORD(Instance->fields.datalist) )
    ShopBuyItemListViewManager__CreateList_34841984(this, 6, eventId, slot, eventNum, isForcedAdjustment, v15);
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

  ShopBuyItemListViewManager__CreateList_34841984(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34841984(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_34841984(
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
  DataManager_o *Instance; // x0
  const MethodInfo *v30; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  System_Int32_array *v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x6
  const MethodInfo *v43; // x4
  ShopEntity_array *ShopEntities; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x23
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x26
  int v48; // w24
  int32_t v49; // w19
  ShopEntity_o *v50; // x27
  struct System_Int32_array *targetIds; // x20
  __int64 v52; // x8
  unsigned __int64 v53; // x22
  const MethodInfo *v54; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x28
  int32_t v56; // w22
  ListViewItem_o *v57; // x20
  const MethodInfo *v58; // x2
  signed __int64 size; // x8
  unsigned __int64 v60; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x25
  int32_t v62; // w28
  ShopEntity_o *v63; // x27
  ListViewItem_o *v64; // x20
  const MethodInfo *v65; // x2
  signed __int64 v66; // x8
  unsigned __int64 v67; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x23
  int32_t v69; // w28
  ShopEntity_o *v70; // x25
  ListViewItem_o *v71; // x20
  const MethodInfo *v72; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v74; // x8
  __int64 v75; // x9
  __int64 v76; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v78; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v80; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v82; // x0
  __int64 *v83; // x8
  System_String_o *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **sort; // x1
  _BOOL8 v92; // x0
  const MethodInfo *v93; // x3
  __int64 v94; // x0
  int32_t v95; // [xsp+4h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v96; // [xsp+8h] [xbp-78h]
  bool v97; // [xsp+14h] [xbp-6Ch]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+18h] [xbp-68h]
  ShopBuyItemListViewManager_o *v99; // [xsp+20h] [xbp-60h]
  EventRewardSceneEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418D48E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_B2C35C(&LocalizationManager_TypeInfo, v22);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v23);
    sub_B2C35C(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&StringLiteral_12205/*"SHOP_SPECIAL_LIST_EMPTY"*/, v26);
    sub_B2C35C(&StringLiteral_12166/*"SHOP_LIST_EMPTY"*/, v27);
    sub_B2C35C(&StringLiteral_5710/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v28);
    byte_418D48E = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
    this->fields.filterBtn,
    0,
    v32);
  v30 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v30 == 6 )
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
    v35 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.datalist;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v30);
    if ( !currencyInfoController )
      goto LABEL_117;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
      (System_Int32_array **)Instance,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_117;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v35,
      isForcedAdjustment,
      v42);
    LODWORD(v30) = this->fields.kind;
  }
  v95 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v30,
                                                v33);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v43);
  v96 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v96,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_117;
  max_length = ShopEntities->max_length;
  v99 = this;
  if ( max_length < 1 )
  {
    v97 = 0;
    v49 = 0;
    if ( !v45 )
      goto LABEL_117;
    goto LABEL_44;
  }
  v97 = 0;
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v48 = 0;
  v49 = 0;
  do
  {
    if ( v48 >= (unsigned int)max_length )
      goto LABEL_118;
    v50 = ShopEntities->m_Items[v48];
    if ( !v50 )
      goto LABEL_117;
    if ( v50->fields.purchaseType == 6 )
    {
      targetIds = v50->fields.targetIds;
      if ( !targetIds )
        goto LABEL_117;
      v52 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v52 >= 1 )
      {
        v53 = 0LL;
        while ( v53 < (unsigned int)v52 )
        {
          if ( !v47 )
            goto LABEL_117;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v47,
                                        targetIds->m_Items[v53 + 1],
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_40;
          LODWORD(v52) = targetIds->max_length;
          if ( (__int64)++v53 >= (int)v52 )
            goto LABEL_24;
        }
LABEL_118:
        v94 = sub_B2C460(Instance);
        sub_B2C400(v94, 0LL);
      }
    }
LABEL_24:
    if ( v97 )
    {
      v97 = 1;
    }
    else
    {
      v97 = v50->fields.purchaseType == 16;
      v99->fields.targetSlot = v50->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v50, v30)
      && !ShopEntity__GetIsNotHavingShopItemReceived(v50, v30)
      && !ShopEntity__IsAnotherItemBuyable(v50, v30) )
    {
      Instance = (DataManager_o *)v96;
      if ( !v96 )
        goto LABEL_117;
      goto LABEL_39;
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v50, v30);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v45 )
        goto LABEL_117;
      Instance = (DataManager_o *)v45;
LABEL_39:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      goto LABEL_40;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v50, v30);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(v99, v50, (int32_t)Instance, v54),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v50->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v99->fields.itemList;
        v56 = v99->fields.kind;
        v57 = (ListViewItem_o *)sub_B2C42C(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_24128628(v57, v49, 0LL);
        v57[1].fields.sortIndex = v56;
        v57[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v57, v50, v58);
        if ( !itemList )
          goto LABEL_117;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v49;
      }
    }
LABEL_40:
    max_length = ShopEntities->max_length;
    ++v48;
  }
  while ( v48 < max_length );
  if ( !v45 )
    goto LABEL_117;
LABEL_44:
  LODWORD(size) = v45->fields._size;
  if ( (int)size >= 1 )
  {
    v60 = 0LL;
    do
    {
      v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v99->fields.itemList;
      v62 = v99->fields.kind;
      if ( v60 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v63 = (ShopEntity_o *)v45->fields._items->m_Items[v60];
      v64 = (ListViewItem_o *)sub_B2C42C(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_24128628(v64, v49 + v60, 0LL);
      v64[1].fields.sortIndex = v62;
      v64[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v64, v63, v65);
      if ( !v61 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v61,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      size = v45->fields._size;
      ++v60;
    }
    while ( (__int64)v60 < size );
    v49 += v60;
  }
  if ( !v96 )
LABEL_117:
    sub_B2C434(Instance, v30);
  LODWORD(v66) = v96->fields._size;
  if ( (int)v66 >= 1 )
  {
    v67 = 0LL;
    do
    {
      v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v99->fields.itemList;
      v69 = v99->fields.kind;
      if ( v67 >= (unsigned int)v66 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v70 = (ShopEntity_o *)v96->fields._items->m_Items[v67];
      v71 = (ListViewItem_o *)sub_B2C42C(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_24128628(v71, v49 + v67, 0LL);
      v71[1].fields.sortIndex = v69;
      v71[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v71, v70, v72);
      if ( !v68 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v68,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v66 = v96->fields._size;
    }
    while ( (__int64)++v67 < v66 );
  }
  if ( v99->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)v99->fields.scrollBar;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v99->fields.scrollBar;
      if ( !Instance )
        goto LABEL_117;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_117;
      v74 = 340LL;
      if ( v95 == 1 )
        v74 = 328LL;
      if ( v95 == 1 )
        v75 = 324LL;
      else
        v75 = 336LL;
      if ( v95 == 1 )
        v76 = 320LL;
      else
        v76 = 332LL;
      v101.fields.y = *(float *)((char *)&v99->klass + v75);
      v101.fields.x = *(float *)((char *)&v99->klass + v76);
      v101.fields.z = *(float *)((char *)&v99->klass + v74);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v101, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)v99->fields.scrollbarBgSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v99->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_117;
      if ( v95 == 1 )
        v78 = 338;
      else
        v78 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v78, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)v99->fields.scrollbarForeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v99->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_117;
      if ( v95 == 1 )
        v80 = 348;
      else
        v80 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v80, 0LL);
    }
    emptyMessageLabel = v99->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v82 = (System_String_o *)StringLiteral_5710/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/;
  }
  else
  {
    emptyMessageLabel = v99->fields.emptyMessageLabel;
    if ( v99->fields.kind == 12 )
      v83 = (__int64 *)&StringLiteral_12205/*"SHOP_SPECIAL_LIST_EMPTY"*/;
    else
      v83 = &StringLiteral_12166/*"SHOP_LIST_EMPTY"*/;
    v84 = (System_String_o *)*v83;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v82 = v84;
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v82, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_117;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  sort = (System_Int32_array **)v99->fields.sort;
  if ( sort )
  {
    v99->fields.baseSortInfo = (struct ListViewSort_o *)sort;
    sub_B2C2F8((BattleServantConfConponent_o *)&v99->fields.baseSortInfo, sort, v85, v86, v87, v88, v89, v90);
  }
  if ( !v97 )
    goto LABEL_115;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_117;
  v92 = EventRewardSceneMaster__TryGetEntity(
          (EventRewardSceneMaster_o *)Instance,
          &entity,
          v99->fields.eventId,
          v99->fields.targetSlot,
          0LL);
  if ( entity && v92 && entity->fields.type == 1 )
  {
    ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v92, v99->fields.filterBtn, 1, v93);
    EventRewardSaveData__LoadItemFilter(v99->fields.eventId, v99->fields.targetSlot, 0LL);
    if ( !byte_418AA20 )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, sort);
      byte_418AA20 = 1;
    }
    v99->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
  }
  else
  {
LABEL_115:
    v99->fields.filterStatus = 0;
  }
  ShopBuyItemListViewManager__SetList(v99, (const MethodInfo *)sort);
  ListViewManager__SortItem((ListViewManager_o *)v99, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)v99, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_34844180(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34841984(this, 6, eventId, 0, 0, 0, v3);
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_31C3640[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_31C3690[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_418D48F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_418D48F = 1;
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
  __int64 v5; // x1
  int v6; // w8
  bool result; // w0
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v11; // x1
  int32_t PayType; // w0

  if ( (byte_418D4A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418D4A3 = 1;
  }
  v6 = ShopBuyItemListViewManager__GetBuyItemKind(state, *(const MethodInfo **)&eventId) - 2;
  result = 1;
  switch ( v6 )
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_B2C434(Instance, v9);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
      result = EventItemList && *(_QWORD *)&EventItemList->max_length
            || (PayType = ShopBuyItemListViewManager__GetPayType(eventId, v11), PayType == 4)
            || (unsigned int)(PayType - 8) < 3;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_418D496 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_418D496 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ShopBuyItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ShopBuyItemListViewItem_TypeInfo )
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
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19

  if ( (byte_418D49C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_B2C35C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v5);
    byte_418D49C = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v7;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8

  if ( (byte_418D4A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418D4A0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_B2C434(Instance, v5);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w2

  if ( (byte_418D490 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418D490 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_B2C434(Instance, v10);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_37;
      v11 = 2;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 6:
      if ( !Instance )
        goto LABEL_37;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL);
    case 7:
      if ( !Instance )
        goto LABEL_37;
      v11 = 6;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 8:
      if ( !Instance )
        goto LABEL_37;
      v11 = 7;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 9:
      if ( !Instance )
        goto LABEL_37;
      v11 = 3;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 10:
      if ( !Instance )
        goto LABEL_37;
      v11 = 4;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 11:
      if ( !Instance )
        goto LABEL_37;
      v11 = 5;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 12:
      if ( !Instance )
        goto LABEL_37;
      v11 = 9;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 13:
      if ( !Instance )
        goto LABEL_37;
      v11 = 10;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 14:
      if ( !Instance )
        goto LABEL_37;
      v11 = 11;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 15:
      if ( !Instance )
        goto LABEL_37;
      v11 = 12;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 16:
      if ( !Instance )
        goto LABEL_37;
      v11 = 13;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 17:
      if ( !Instance )
        goto LABEL_37;
      v11 = 14;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 19:
      if ( !Instance )
        goto LABEL_37;
      v11 = 15;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 20:
      if ( !Instance )
        goto LABEL_37;
      v11 = 16;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    default:
      return 0LL;
  }
}


void __fastcall ShopBuyItemListViewManager__InvalidateList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  __int64 v7; // x21
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct System_Collections_Generic_List_GameObject__o *v11; // x20

  v2 = this;
  if ( (byte_418D495 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (ShopBuyItemListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418D495 = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
LABEL_24:
    sub_B2C434(this, method);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      break;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ShopBuyItemListViewManager_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    Component_srcLineSprite = 0LL;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v2->fields.objectList;
      if ( !v11 )
        goto LABEL_24;
      if ( v8 >= (unsigned int)v11->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (ShopBuyItemListViewManager_o *)*((_QWORD *)&v11->fields._items->obj.klass + v7);
      if ( !this )
        goto LABEL_24;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
    ++v7;
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

  return ShopBuyItemListViewManager__ModifyList_34847684(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__ModifyFilterList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventDetailEntity_o *Entity; // x20
  int32_t eventCount; // w21
  int32_t targetSlot; // w22
  int32_t eventId; // w23
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v13; // x6
  const MethodInfo *v14; // x2

  if ( (byte_418D492 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418D492 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.eventId,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopMaster__GetEnableEventEntityList(
                                      (ShopMaster_o *)Instance,
                                      this->fields.eventId,
                                      this->fields.targetSlot,
                                      0LL),
        !Entity) )
  {
    sub_B2C434(Instance, v7);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_34841984(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v13);
  ShopBuyItemListViewManager__SetMode_34848696(this, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyItem(
        ShopBuyItemListViewManager_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v10; // x22
  __int64 v11; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8

  v6 = this;
  if ( (byte_418D494 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    this = (ShopBuyItemListViewManager_o *)sub_B2C35C(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_418D494 = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = v6->fields.itemList;
    if ( !itemList )
LABEL_15:
      sub_B2C434(this, shopEntity);
    v10 = 0LL;
    while ( 1 )
    {
      if ( (__int64)v10 >= itemList->fields._size )
        return 0;
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (ShopBuyItemListViewManager_o *)itemList->fields._items->m_Items[v10];
      if ( !this )
        goto LABEL_15;
      v11 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (ShopBuyItemListViewItem_c *)this->klass->_2.typeHierarchy[v11 - 1] != ShopBuyItemListViewItem_TypeInfo )
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
      ++v10;
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

  return ShopBuyItemListViewManager__ModifyList_34847684(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_34847684(
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
  const MethodInfo *v18; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x6
  DataManager_o *v23; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w8
  ShopBuyItemListViewManager_o *v26; // x0
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w4
  bool v31; // w5
  System_Int32_array *EventItemList; // x26
  int32_t v33; // w23
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v36; // x27
  const MethodInfo *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t v44; // w21
  ShopCurrencyInfoController_o *v45; // x28
  _BOOL4 isEventShop; // w19
  const MethodInfo *v47; // x6
  int datalist; // w8
  __int64 v49; // x27
  ShopEntity_o *v50; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v52; // x3
  __int64 v54; // x0
  bool v55; // [xsp+Ch] [xbp-54h]

  if ( (byte_418D493 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418D493 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)ShopBuyItemListViewManager__GetShopEntities(
                                (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
                                kind,
                                0,
                                0,
                                v20);
  v23 = Instance;
  if ( kind == 6 )
  {
    if ( MasterData_WarQuestSelectionMaster )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_WarQuestSelectionMaster, eventId, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v55 = isForcedAdjustment;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          v33 = slot;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v36 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v37);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            v44 = eventNum;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
              (System_Int32_array **)Instance,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
            if ( v36 )
            {
              v45 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v36, 0LL);
              if ( v45 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v45,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  (unsigned __int8)Instance & 1,
                  v47);
                eventNum = v44;
                slot = v33;
                isForcedAdjustment = v55;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B2C434(Instance, v18);
  }
  if ( kind != 12 && kind != 7 )
  {
LABEL_19:
    if ( !v23 )
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
    datalist = (int)v23->fields.datalist;
    if ( datalist >= 1 )
    {
      v49 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v49 >= datalist )
        {
          v54 = sub_B2C460(Instance);
          sub_B2C400(v54, 0LL);
        }
        v50 = (ShopEntity_o *)*((_QWORD *)&v23->fields.lookup + v49);
        if ( !v50 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      *((ShopEntity_o **)&v23->fields.lookup + v49),
                                      v50->fields.id,
                                      v21);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v50, v18);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v50, v18);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v50, PurchaseShop, v52);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        datalist = (int)v23->fields.datalist;
        if ( (int)++v49 >= datalist )
          return 1;
      }
      v31 = isForcedAdjustment;
      v26 = this;
      v27 = kind;
      v28 = eventId;
      v29 = slot;
      v30 = eventNum;
      goto LABEL_30;
    }
    return 1;
  }
  v26 = this;
  v27 = kind;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
LABEL_30:
  ShopBuyItemListViewManager__CreateList_34841984(v26, v27, v28, v29, v30, v31, v22);
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

  if ( (byte_418D49F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__Invoke__, obj);
    byte_418D49F = 1;
  }
  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_B2C434(v11, v12);
    Index = ListViewObject__get_Index(obj, 0LL);
    System_Action_int___Invoke(
      onClickListViewItem,
      Index,
      (const MethodInfo_24BA55C *)Method_System_Action_int__Invoke__);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *onMoveEnd; // x20

  if ( (byte_418D49E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418D49E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( v6 <= 0 )
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
          goto LABEL_19;
        UnityEngine_GameObject__SetActive(emptyMessageBase, v9, 0LL);
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
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onMoveEnd, 0LL, v14, v15, v16, v17, v18, v19);
          System_Action__Invoke(onMoveEnd, 0LL);
        }
        return;
      }
LABEL_19:
      sub_B2C434(emptyMessageBase, v10);
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
  int32_t v9; // w21
  char v10; // w23
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v13; // x1
  float v14; // s8
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *v15; // x22
  int size; // w8
  __int64 v17; // x24
  ShopBuyItemListViewObject_o *v18; // x20
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  float v21; // s0

  if ( (byte_418D49D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_B2C35C(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v8);
    byte_418D49D = 1;
  }
  v9 = 6;
  switch ( initMode )
  {
    case 1:
      v10 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v11);
      v14 = 0.1;
      v15 = ObjectList;
      v9 = 4;
      if ( !ObjectList )
        goto LABEL_26;
      goto LABEL_14;
    case 2:
      v9 = 3;
      goto LABEL_10;
    case 3:
      v9 = 5;
      goto LABEL_10;
    case 4:
      goto LABEL_10;
    case 5:
      v9 = 7;
      goto LABEL_10;
    default:
      v9 = 0;
LABEL_10:
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, initMode, method);
      v15 = ObjectList;
      v10 = 0;
      if ( (unsigned int)(initMode - 3) >= 2 )
        v14 = 0.0;
      else
        v14 = 0.1;
      if ( !ObjectList )
        goto LABEL_26;
LABEL_14:
      this->fields.callbackCount = v15->fields._size;
      size = v15->fields._size;
      if ( size < 1 )
      {
        this->fields.callbackCount = 1;
        if ( (v10 & 1) != 0 )
        {
          v21 = this->fields.listInDelay + 0.5;
        }
        else
        {
          v21 = 0.6;
          if ( (unsigned int)(initMode - 3) > 1 )
            v21 = 0.0;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
          v21,
          0LL);
      }
      else
      {
        v17 = 0LL;
        do
        {
          if ( size <= (unsigned int)v17 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v18 = v15->fields._items->m_Items[v17];
          v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v18 )
LABEL_26:
            sub_B2C434(ObjectList, v13);
          ShopBuyItemListViewObject__Init_34852000(v18, v9, v19, v14, v20);
          size = v15->fields._size;
          ++v17;
        }
        while ( (int)v17 < size );
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
      sub_B2C434(0LL, initMode);
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

  if ( (byte_418D49B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_418D49B = 1;
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
      sub_B2C434(gameObject, v7);
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
  __int64 v5; // x1
  UnityEngine_Object_o *filterTxtSprite; // x21
  UISprite_o *v7; // x21
  __int64 v8; // x1
  UIWidget_o *v9; // x0

  if ( (byte_418D49A & 1) == 0 )
  {
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418D49A = 1;
  }
  filterTxtSprite = (UnityEngine_Object_o *)this->fields.filterTxtSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(filterTxtSprite, 0LL, 0LL) )
  {
    v7 = this->fields.filterTxtSprite;
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(v7, targetFile, 0LL);
    v9 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v9 || (UIWidget__set_width(v9, 52, 0LL), (v9 = (UIWidget_o *)this->fields.filterTxtSprite) == 0LL) )
      sub_B2C434(v9, v8);
    UIWidget__set_height(v9, 20, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v9; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UILabel_o *emptyMessageLabel; // x21
  ListViewSort_o *operationSortInfo; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  int32_t filterStatus; // w8
  bool v22; // w2
  bool v23; // w2

  if ( (byte_418D499 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_17098/*"btn_txt_stock_02"*/, v4);
    sub_B2C35C(&StringLiteral_17097/*"btn_txt_stock"*/, v5);
    sub_B2C35C(&StringLiteral_5710/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v6);
    sub_B2C35C(&StringLiteral_17029/*"btn_txt_all"*/, v7);
    byte_418D499 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v9 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914748(v9, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5710/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_22;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)operationSortInfo, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17098/*"btn_txt_stock_02"*/, v20);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( *p_operationSortInfo )
      {
        v23 = 1;
        goto LABEL_19;
      }
    }
LABEL_22:
    sub_B2C434(operationSortInfo, v19);
  }
  if ( filterStatus == 1 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17097/*"btn_txt_stock"*/, v20);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_22;
    v22 = 1;
  }
  else
  {
    if ( filterStatus )
      goto LABEL_20;
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17029/*"btn_txt_all"*/, v20);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_22;
    v22 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 52, v22, 0LL);
  operationSortInfo = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_22;
  v23 = 0;
LABEL_19:
  ListViewSort__SetFilter(operationSortInfo, 53, v23, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
    (System_Int32_array **)onClickListViewItem,
    (System_String_array **)onClickListViewItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_34848696(this, mode, v10);
}


void __fastcall ShopBuyItemListViewManager__SetMode_34848696(
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


void __fastcall ShopBuyItemListViewManager__SetMode_34850072(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_34848696(this, mode, v11);
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

  if ( (byte_418D4A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_418D4A2 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_B2C434(scrollView, method);
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
  if ( (byte_418D497 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_B2C35C(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_418D497 = 1;
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
    sub_B2C434(this, v8);
  }
  ShopBuyItemListViewObject__Init_34852000((ShopBuyItemListViewObject_o *)obj, v8, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_418D498 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_418D498 = 1;
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
      sub_B2C434(gameObject, v7);
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

  if ( (byte_418D4A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_418D4A1 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_B2C434(scrollView, method);
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
    sub_B2C434(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21

  if ( (byte_418D48D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418D48D = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B2C434(Component_srcLineSprite, v11);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v9;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v16 = this->fields.objectList;
      if ( !v16 )
        goto LABEL_23;
      if ( v14 >= (unsigned int)v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ShopBuyItemListViewObject__GetItem(
                                                              (ShopBuyItemListViewObject_o *)Component_srcLineSprite,
                                                              v11);
      if ( Component_srcLineSprite )
      {
        v11 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_24147020(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            v17,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v13;
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
    sub_B2C434(this, method);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21

  if ( (byte_418D48C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418D48C = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B2C434(Component_srcLineSprite, v11);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v9;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v16 = this->fields.objectList;
      if ( !v16 )
        goto LABEL_19;
      if ( v14 >= (unsigned int)v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v9 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v13;
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