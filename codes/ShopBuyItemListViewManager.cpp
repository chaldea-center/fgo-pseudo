void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816LL;
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_32C44F0;
  this->fields.listInDelay = 0.1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__ChangeFilter(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 filterStatus; // x8
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t v7; // w20

  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 2 )
    this->fields.filterStatus = dword_32C45E8[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v7 = this->fields.filterStatus;
  if ( !byte_42EC0E3 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v4, v5, v6);
    byte_42EC0E3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v7;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_42EE551 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, eventId, slot, *(_QWORD *)&eventNum);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EE551 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_B5D69C(Instance, v18);
  }
  if ( itemList->fields._size != LODWORD(Instance->fields.datalist) )
    ShopBuyItemListViewManager__CreateList_35071888(this, 6, eventId, slot, eventNum, isForcedAdjustment, v19);
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

  ShopBuyItemListViewManager__CreateList_35071888(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_35071888(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_35071888(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v62; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  System_Int32_array *v67; // x23
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo *v74; // x6
  const MethodInfo *v75; // x4
  ShopEntity_array *ShopEntities; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x23
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v79; // x26
  int v80; // w24
  int32_t v81; // w19
  ShopEntity_o *v82; // x27
  struct System_Int32_array *targetIds; // x20
  __int64 v84; // x8
  unsigned __int64 v85; // x22
  const MethodInfo *v86; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x28
  int32_t v88; // w22
  ListViewItem_o *v89; // x20
  const MethodInfo *v90; // x2
  signed __int64 size; // x8
  unsigned __int64 v92; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x25
  int32_t v94; // w28
  ShopEntity_o *v95; // x27
  ListViewItem_o *v96; // x20
  const MethodInfo *v97; // x2
  signed __int64 v98; // x8
  unsigned __int64 v99; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v100; // x23
  int32_t v101; // w28
  ShopEntity_o *v102; // x25
  ListViewItem_o *v103; // x20
  const MethodInfo *v104; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v106; // x8
  __int64 v107; // x9
  __int64 v108; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v110; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v112; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v114; // x0
  __int64 *v115; // x8
  System_String_o *v116; // x21
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **sort; // x1
  _BOOL8 v124; // x0
  const MethodInfo *v125; // x3
  int v126; // w2
  __int64 v127; // x3
  __int64 v128; // x0
  int32_t v129; // [xsp+4h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v130; // [xsp+8h] [xbp-78h]
  bool v131; // [xsp+14h] [xbp-6Ch]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+18h] [xbp-68h]
  ShopBuyItemListViewManager_o *v133; // [xsp+20h] [xbp-60h]
  EventRewardSceneEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE54E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, kind, eventId, *(_QWORD *)&slot);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&ShopBuyItemListViewItem_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_12352/*"SHOP_SPECIAL_LIST_EMPTY"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_12313/*"SHOP_LIST_EMPTY"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v58, v59, v60);
    byte_42EE54E = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
    this->fields.filterBtn,
    0,
    v64);
  v62 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v62 == 6 )
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
    v67 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.datalist;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v62);
    if ( !currencyInfoController )
      goto LABEL_117;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_B5D560(
      (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
      (System_Int32_array **)Instance,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_117;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v67,
      isForcedAdjustment,
      v74);
    LODWORD(v62) = this->fields.kind;
  }
  v129 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v62,
                                                v65);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v75);
  v130 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v130,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_117;
  max_length = ShopEntities->max_length;
  v133 = this;
  if ( max_length < 1 )
  {
    v131 = 0;
    v81 = 0;
    if ( !v77 )
      goto LABEL_117;
    goto LABEL_44;
  }
  v131 = 0;
  v79 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v80 = 0;
  v81 = 0;
  do
  {
    if ( v80 >= (unsigned int)max_length )
      goto LABEL_118;
    v82 = ShopEntities->m_Items[v80];
    if ( !v82 )
      goto LABEL_117;
    if ( v82->fields.purchaseType == 6 )
    {
      targetIds = v82->fields.targetIds;
      if ( !targetIds )
        goto LABEL_117;
      v84 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v84 >= 1 )
      {
        v85 = 0LL;
        while ( v85 < (unsigned int)v84 )
        {
          if ( !v79 )
            goto LABEL_117;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v79,
                                        targetIds->m_Items[v85 + 1],
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_40;
          LODWORD(v84) = targetIds->max_length;
          if ( (__int64)++v85 >= (int)v84 )
            goto LABEL_24;
        }
LABEL_118:
        v128 = sub_B5D6C8(Instance);
        sub_B5D668(v128, 0LL);
      }
    }
LABEL_24:
    if ( v131 )
    {
      v131 = 1;
    }
    else
    {
      v131 = v82->fields.purchaseType == 16;
      v133->fields.targetSlot = v82->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v82, v62)
      && !ShopEntity__GetIsNotHavingShopItemReceived(v82, v62)
      && !ShopEntity__IsAnotherItemBuyable(v82, v62) )
    {
      Instance = (DataManager_o *)v130;
      if ( !v130 )
        goto LABEL_117;
      goto LABEL_39;
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v82, v62);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v77 )
        goto LABEL_117;
      Instance = (DataManager_o *)v77;
LABEL_39:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      goto LABEL_40;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v82, v62);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(v133, v82, (int32_t)Instance, v86),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v82->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v133->fields.itemList;
        v88 = v133->fields.kind;
        v89 = (ListViewItem_o *)sub_B5D694(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_23901828(v89, v81, 0LL);
        v89[1].fields.sortIndex = v88;
        v89[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v89, v82, v90);
        if ( !itemList )
          goto LABEL_117;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v81;
      }
    }
LABEL_40:
    max_length = ShopEntities->max_length;
    ++v80;
  }
  while ( v80 < max_length );
  if ( !v77 )
    goto LABEL_117;
LABEL_44:
  LODWORD(size) = v77->fields._size;
  if ( (int)size >= 1 )
  {
    v92 = 0LL;
    do
    {
      v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v133->fields.itemList;
      v94 = v133->fields.kind;
      if ( v92 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v95 = (ShopEntity_o *)v77->fields._items->m_Items[v92];
      v96 = (ListViewItem_o *)sub_B5D694(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_23901828(v96, v81 + v92, 0LL);
      v96[1].fields.sortIndex = v94;
      v96[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v96, v95, v97);
      if ( !v93 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v93,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v96,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      size = v77->fields._size;
      ++v92;
    }
    while ( (__int64)v92 < size );
    v81 += v92;
  }
  if ( !v130 )
LABEL_117:
    sub_B5D69C(Instance, v62);
  LODWORD(v98) = v130->fields._size;
  if ( (int)v98 >= 1 )
  {
    v99 = 0LL;
    do
    {
      v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v133->fields.itemList;
      v101 = v133->fields.kind;
      if ( v99 >= (unsigned int)v98 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v102 = (ShopEntity_o *)v130->fields._items->m_Items[v99];
      v103 = (ListViewItem_o *)sub_B5D694(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_23901828(v103, v81 + v99, 0LL);
      v103[1].fields.sortIndex = v101;
      v103[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v103, v102, v104);
      if ( !v100 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v100,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v98 = v130->fields._size;
    }
    while ( (__int64)++v99 < v98 );
  }
  if ( v133->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)v133->fields.scrollBar;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v133->fields.scrollBar;
      if ( !Instance )
        goto LABEL_117;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_117;
      v106 = 340LL;
      if ( v129 == 1 )
        v106 = 328LL;
      if ( v129 == 1 )
        v107 = 324LL;
      else
        v107 = 336LL;
      if ( v129 == 1 )
        v108 = 320LL;
      else
        v108 = 332LL;
      v135.fields.y = *(float *)((char *)&v133->klass + v107);
      v135.fields.x = *(float *)((char *)&v133->klass + v108);
      v135.fields.z = *(float *)((char *)&v133->klass + v106);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v135, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)v133->fields.scrollbarBgSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v133->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_117;
      if ( v129 == 1 )
        v110 = 338;
      else
        v110 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v110, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)v133->fields.scrollbarForeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v133->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_117;
      if ( v129 == 1 )
        v112 = 348;
      else
        v112 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v112, 0LL);
    }
    emptyMessageLabel = v133->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v114 = (System_String_o *)StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/;
  }
  else
  {
    emptyMessageLabel = v133->fields.emptyMessageLabel;
    if ( v133->fields.kind == 12 )
      v115 = (__int64 *)&StringLiteral_12352/*"SHOP_SPECIAL_LIST_EMPTY"*/;
    else
      v115 = &StringLiteral_12313/*"SHOP_LIST_EMPTY"*/;
    v116 = (System_String_o *)*v115;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v114 = v116;
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v114, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_117;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  sort = (System_Int32_array **)v133->fields.sort;
  if ( sort )
  {
    v133->fields.baseSortInfo = (struct ListViewSort_o *)sort;
    sub_B5D560((BattleServantConfConponent_o *)&v133->fields.baseSortInfo, sort, v117, v118, v119, v120, v121, v122);
  }
  if ( !v131 )
    goto LABEL_115;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_117;
  v124 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           v133->fields.eventId,
           v133->fields.targetSlot,
           0LL);
  if ( entity && v124 && entity->fields.type == 1 )
  {
    ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v124, v133->fields.filterBtn, 1, v125);
    EventRewardSaveData__LoadItemFilter(v133->fields.eventId, v133->fields.targetSlot, 0LL);
    if ( !byte_42EC0E4 )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)sort, v126, v127);
      byte_42EC0E4 = 1;
    }
    v133->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
  }
  else
  {
LABEL_115:
    v133->fields.filterStatus = 0;
  }
  ShopBuyItemListViewManager__SetList(v133, (const MethodInfo *)sort);
  ListViewManager__SortItem((ListViewManager_o *)v133, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)v133, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_35074084(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_35071888(this, 6, eventId, 0, 0, 0, v3);
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_32C4600[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_32C4650[state - 2];
}


int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EE54F & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, kind, (_DWORD)method, v3);
    byte_42EE54F = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w8
  bool result; // w0
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v14; // x1
  int32_t PayType; // w0

  if ( (byte_42EE563 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EE563 = 1;
  }
  v9 = ShopBuyItemListViewManager__GetBuyItemKind(state, *(const MethodInfo **)&eventId) - 2;
  result = 1;
  switch ( v9 )
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_B5D69C(Instance, v12);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
      result = EventItemList && *(_QWORD *)&EventItemList->max_length
            || (PayType = ShopBuyItemListViewManager__GetPayType(eventId, v14), PayType == 4)
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EE556 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&ShopBuyItemListViewItem_TypeInfo, v6, v7, v8);
    byte_42EE556 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (ShopBuyItemListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ShopBuyItemListViewItem_TypeInfo )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19

  if ( (byte_42EE55C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, initMode, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v6, v7, v8);
    byte_42EE55C = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v10;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8

  if ( (byte_42EE560 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EE560 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_B5D69C(Instance, v9);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w2

  if ( (byte_42EE550 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, kind, eventId, *(_QWORD *)&slot);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE550 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_B5D69C(Instance, v12);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_37;
      v13 = 2;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 6:
      if ( !Instance )
        goto LABEL_37;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL);
    case 7:
      if ( !Instance )
        goto LABEL_37;
      v13 = 6;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 8:
      if ( !Instance )
        goto LABEL_37;
      v13 = 7;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 9:
      if ( !Instance )
        goto LABEL_37;
      v13 = 3;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 10:
      if ( !Instance )
        goto LABEL_37;
      v13 = 4;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 11:
      if ( !Instance )
        goto LABEL_37;
      v13 = 5;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 12:
      if ( !Instance )
        goto LABEL_37;
      v13 = 9;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 13:
      if ( !Instance )
        goto LABEL_37;
      v13 = 10;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 14:
      if ( !Instance )
        goto LABEL_37;
      v13 = 11;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 15:
      if ( !Instance )
        goto LABEL_37;
      v13 = 12;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 16:
      if ( !Instance )
        goto LABEL_37;
      v13 = 13;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 17:
      if ( !Instance )
        goto LABEL_37;
      v13 = 14;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 19:
      if ( !Instance )
        goto LABEL_37;
      v13 = 15;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    case 20:
      if ( !Instance )
        goto LABEL_37;
      v13 = 16;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v13, 0LL);
    default:
      return 0LL;
  }
}


void __fastcall ShopBuyItemListViewManager__InvalidateList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ShopBuyItemListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  __int64 v15; // x21
  unsigned __int64 v16; // x24
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct System_Collections_Generic_List_GameObject__o *v19; // x20

  v4 = this;
  if ( (byte_42EE555 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8, v9, v10);
    this = (ShopBuyItemListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EE555 = 1;
  }
  objectList = v4->fields.objectList;
  if ( !objectList )
LABEL_24:
    sub_B5D69C(this, method);
  v15 = 4LL;
  while ( 1 )
  {
    v16 = v15 - 4;
    if ( v15 - 4 >= objectList->fields._size )
      break;
    if ( v16 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v17 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v15);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ShopBuyItemListViewManager_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    Component_srcLineSprite = 0LL;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v19 = v4->fields.objectList;
      if ( !v19 )
        goto LABEL_24;
      if ( v16 >= (unsigned int)v19->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (ShopBuyItemListViewManager_o *)*((_QWORD *)&v19->fields._items->obj.klass + v15);
      if ( !this )
        goto LABEL_24;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
    objectList = v4->fields.objectList;
    ++v15;
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

  return ShopBuyItemListViewManager__ModifyList_35077588(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__ModifyFilterList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  EventDetailEntity_o *Entity; // x20
  int32_t eventCount; // w21
  int32_t targetSlot; // w22
  int32_t eventId; // w23
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x2

  if ( (byte_42EE552 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EE552 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.eventId,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopMaster__GetEnableEventEntityList(
                                      (ShopMaster_o *)Instance,
                                      this->fields.eventId,
                                      this->fields.targetSlot,
                                      0LL),
        !Entity) )
  {
    sub_B5D69C(Instance, v15);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_35071888(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v21);
  ShopBuyItemListViewManager__SetMode_35078600(this, 2, v22);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyItem(
        ShopBuyItemListViewManager_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v14; // x22
  __int64 v15; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8

  v6 = this;
  if ( (byte_42EE554 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)shopEntity, shopId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8, v9);
    this = (ShopBuyItemListViewManager_o *)sub_B5D5C4(&ShopBuyItemListViewItem_TypeInfo, v10, v11, v12);
    byte_42EE554 = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = v6->fields.itemList;
    if ( !itemList )
LABEL_15:
      sub_B5D69C(this, shopEntity);
    v14 = 0LL;
    while ( 1 )
    {
      if ( (__int64)v14 >= itemList->fields._size )
        return 0;
      if ( v14 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (ShopBuyItemListViewManager_o *)itemList->fields._items->m_Items[v14];
      if ( !this )
        goto LABEL_15;
      v15 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (ShopBuyItemListViewItem_c *)this->klass->_2.typeHierarchy[v15 - 1] != ShopBuyItemListViewItem_TypeInfo )
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
      ++v14;
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

  return ShopBuyItemListViewManager__ModifyList_35077588(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_35077588(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  int32_t v9; // w21
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v26; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x6
  DataManager_o *v31; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w8
  ShopBuyItemListViewManager_o *v34; // x0
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w4
  bool v39; // w5
  System_Int32_array *EventItemList; // x26
  int32_t v41; // w23
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v44; // x27
  const MethodInfo *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t v52; // w21
  ShopCurrencyInfoController_o *v53; // x28
  _BOOL4 isEventShop; // w19
  const MethodInfo *v55; // x6
  int datalist; // w8
  __int64 v57; // x27
  ShopEntity_o *v58; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v60; // x3
  __int64 v62; // x0
  bool v63; // [xsp+Ch] [xbp-54h]

  v9 = slot;
  if ( (byte_42EE553 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, kind, eventId, *(_QWORD *)&slot);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42EE553 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)ShopBuyItemListViewManager__GetShopEntities(
                                (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
                                kind,
                                0,
                                0,
                                v28);
  v31 = Instance;
  if ( kind == 6 )
  {
    if ( MasterData_WarQuestSelectionMaster )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_WarQuestSelectionMaster, eventId, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v63 = isForcedAdjustment;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          v41 = v9;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v44 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v45);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            v52 = eventNum;
            sub_B5D560(
              (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
              (System_Int32_array **)Instance,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51);
            if ( v44 )
            {
              v53 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v44, 0LL);
              if ( v53 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v53,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  (unsigned __int8)Instance & 1,
                  v55);
                eventNum = v52;
                v9 = v41;
                isForcedAdjustment = v63;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B5D69C(Instance, v26);
  }
  if ( kind != 12 && kind != 7 )
  {
LABEL_19:
    if ( !v31 )
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
    datalist = (int)v31->fields.datalist;
    if ( datalist >= 1 )
    {
      v57 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v57 >= datalist )
        {
          v62 = sub_B5D6C8(Instance);
          sub_B5D668(v62, 0LL);
        }
        v58 = (ShopEntity_o *)*((_QWORD *)&v31->fields.lookup + v57);
        if ( !v58 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      *((ShopEntity_o **)&v31->fields.lookup + v57),
                                      v58->fields.id,
                                      v29);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v58, v26);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v58, v26);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v58, PurchaseShop, v60);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        datalist = (int)v31->fields.datalist;
        if ( (int)++v57 >= datalist )
          return 1;
      }
      v39 = isForcedAdjustment;
      v34 = this;
      v35 = kind;
      v36 = eventId;
      v37 = v9;
      v38 = eventNum;
      goto LABEL_30;
    }
    return 1;
  }
  v34 = this;
  v35 = kind;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
LABEL_30:
  ShopBuyItemListViewManager__CreateList_35071888(v34, v35, v36, v37, v38, v39, v30);
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

  if ( (byte_42EE55F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, (_DWORD)obj, (_DWORD)method, v3);
    byte_42EE55F = 1;
  }
  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_B5D69C(v11, v12);
    Index = ListViewObject__get_Index(obj, 0LL);
    System_Action_int___Invoke(
      onClickListViewItem,
      Index,
      (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ShopBuyItemListViewManager__OnMoveEnd(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t callbackCount; // w8
  bool v9; // vf
  int32_t v10; // w8
  ShopBuyItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x3
  char v13; // w20
  __int64 v14; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_o *onMoveEnd; // x20

  if ( (byte_42EE55E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE55E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v9 = __OFSUB__(callbackCount, 1);
  v10 = callbackCount - 1;
  if ( v10 < 0 == v9 )
  {
    this->fields.callbackCount = v10;
    if ( v10 <= 0 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      if ( this->fields.initMode == 1 )
      {
        v13 = 1;
        ShopBuyItemListViewManager__SetScrollBarActive(v11, this->fields.scrollBar, 1, v12);
        itemSortList = this->fields.itemSortList;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( itemSortList )
          v13 = itemSortList->fields._size < 1;
        if ( !emptyMessageBase )
          goto LABEL_19;
        UnityEngine_GameObject__SetActive(emptyMessageBase, v13, 0LL);
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
          sub_B5D560((BattleServantConfConponent_o *)&this->fields.onMoveEnd, 0LL, v18, v19, v20, v21, v22, v23);
          System_Action__Invoke(onMoveEnd, 0LL);
        }
        return;
      }
LABEL_19:
      sub_B5D69C(emptyMessageBase, v14);
    }
  }
}


void __fastcall ShopBuyItemListViewManager__RequestListObject(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t v18; // w21
  char v19; // w23
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v22; // x1
  float v23; // s8
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *v24; // x22
  int size; // w8
  __int64 v26; // x24
  ShopBuyItemListViewObject_o *v27; // x20
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3
  float v30; // s0

  if ( (byte_42EE55D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, initMode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v15, v16, v17);
    byte_42EE55D = 1;
  }
  v18 = 6;
  switch ( initMode )
  {
    case 1:
      v19 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v20);
      v23 = 0.1;
      v24 = ObjectList;
      v18 = 4;
      if ( !ObjectList )
        goto LABEL_26;
      goto LABEL_14;
    case 2:
      v18 = 3;
      goto LABEL_10;
    case 3:
      v18 = 5;
      goto LABEL_10;
    case 4:
      goto LABEL_10;
    case 5:
      v18 = 7;
      goto LABEL_10;
    default:
      v18 = 0;
LABEL_10:
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, initMode, method);
      v24 = ObjectList;
      v19 = 0;
      if ( (unsigned int)(initMode - 3) >= 2 )
        v23 = 0.0;
      else
        v23 = 0.1;
      if ( !ObjectList )
        goto LABEL_26;
LABEL_14:
      this->fields.callbackCount = v24->fields._size;
      size = v24->fields._size;
      if ( size < 1 )
      {
        this->fields.callbackCount = 1;
        if ( (v19 & 1) != 0 )
        {
          v30 = this->fields.listInDelay + 0.5;
        }
        else
        {
          v30 = 0.6;
          if ( (unsigned int)(initMode - 3) > 1 )
            v30 = 0.0;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
          v30,
          0LL);
      }
      else
      {
        v26 = 0LL;
        do
        {
          if ( size <= (unsigned int)v26 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v27 = v24->fields._items->m_Items[v26];
          v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v28, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v27 )
LABEL_26:
            sub_B5D69C(ObjectList, v22);
          ShopBuyItemListViewObject__Init_35081904(v27, v18, v28, v23, v29);
          size = v24->fields._size;
          ++v26;
        }
        while ( (int)v26 < size );
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
      sub_B5D69C(0LL, initMode);
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

  if ( (byte_42EE55B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)filterBtn, isActive, method);
    byte_42EE55B = 1;
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
      sub_B5D69C(gameObject, v7);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *filterTxtSprite; // x21
  UISprite_o *v10; // x21
  __int64 v11; // x1
  UIWidget_o *v12; // x0

  if ( (byte_42EE55A & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, (_DWORD)targetFile, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EE55A = 1;
  }
  filterTxtSprite = (UnityEngine_Object_o *)this->fields.filterTxtSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(filterTxtSprite, 0LL, 0LL) )
  {
    v10 = this->fields.filterTxtSprite;
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(v10, targetFile, 0LL);
    v12 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v12 || (UIWidget__set_width(v12, 52, 0LL), (v12 = (UIWidget_o *)this->fields.filterTxtSprite) == 0LL) )
      sub_B5D69C(v12, v11);
    UIWidget__set_height(v12, 20, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v21; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UILabel_o *emptyMessageLabel; // x21
  ListViewSort_o *operationSortInfo; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  int32_t filterStatus; // w8
  bool v34; // w2
  bool v35; // w2

  if ( (byte_42EE559 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17308/*"btn_txt_stock_02"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17307/*"btn_txt_stock"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17238/*"btn_txt_all"*/, v17, v18, v19);
    byte_42EE559 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v21 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34029496(v21, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_22;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)operationSortInfo, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17308/*"btn_txt_stock_02"*/, v32);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( *p_operationSortInfo )
      {
        v35 = 1;
        goto LABEL_19;
      }
    }
LABEL_22:
    sub_B5D69C(operationSortInfo, v31);
  }
  if ( filterStatus == 1 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17307/*"btn_txt_stock"*/, v32);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_22;
    v34 = 1;
  }
  else
  {
    if ( filterStatus )
      goto LABEL_20;
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17238/*"btn_txt_all"*/, v32);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_22;
    v34 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 52, v34, 0LL);
  operationSortInfo = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_22;
  v35 = 0;
LABEL_19:
  ListViewSort__SetFilter(operationSortInfo, 53, v35, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
    (System_Int32_array **)onClickListViewItem,
    (System_String_array **)onClickListViewItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_35078600(this, mode, v10);
}


void __fastcall ShopBuyItemListViewManager__SetMode_35078600(
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


void __fastcall ShopBuyItemListViewManager__SetMode_35079976(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_35078600(this, mode, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__SetMultiEventScrollInfo(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  void *scrollView; // x0
  float v6; // s0
  float v7; // s2
  float v8; // s8
  float v9; // s9
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EE562 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    byte_42EE562 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v11.fields.x = *((float *)scrollView + 72);
  v11.fields.y = *((float *)scrollView + 73);
  v11.fields.z = *((float *)scrollView + 74);
  v11.fields.w = 400.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v11, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)scrollView,
                                          0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v8 = v6,
        v9 = v7,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(scrollView, method);
  }
  v10.fields.y = 16.0;
  v10.fields.x = v8;
  v10.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v10, 0LL);
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
  if ( (byte_42EE557 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_B5D5C4(
                                             &ShopBuyItemListViewObject_TypeInfo,
                                             (_DWORD)obj,
                                             (_DWORD)item,
                                             method);
    byte_42EE557 = 1;
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
    sub_B5D69C(this, v8);
  }
  ShopBuyItemListViewObject__Init_35081904((ShopBuyItemListViewObject_o *)obj, v8, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42EE558 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)scrollBar, isActive, method);
    byte_42EE558 = 1;
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
      sub_B5D69C(gameObject, v7);
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
  int v2; // w2
  __int64 v3; // x3
  void *scrollView; // x0
  float v6; // s0
  float v7; // s2
  float v8; // s8
  float v9; // s9
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EE561 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    byte_42EE561 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v11.fields.x = *((float *)scrollView + 72);
  v11.fields.y = *((float *)scrollView + 73);
  v11.fields.z = *((float *)scrollView + 74);
  v11.fields.w = 470.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v11, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)scrollView,
                                          0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v8 = v6,
        v9 = v7,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(scrollView, method);
  }
  v10.fields.y = 82.0;
  v10.fields.x = v8;
  v10.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v10, 0LL);
}


void __fastcall ShopBuyItemListViewManager__StopUpdateRemainTime(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B5D69C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ClippingObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v27; // x22
  unsigned __int64 v28; // x26
  UnityEngine_Object_o *v29; // x21
  struct System_Collections_Generic_List_GameObject__o *v30; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x21

  if ( (byte_42EE54D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EE54D = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v23;
    if ( v28 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v27);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v30 = this->fields.objectList;
      if ( !v30 )
        goto LABEL_23;
      if ( v28 >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v30->fields._items->obj.klass + v27);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ShopBuyItemListViewObject__GetItem(
                                                              (ShopBuyItemListViewObject_o *)Component_srcLineSprite,
                                                              v25);
      if ( Component_srcLineSprite )
      {
        v25 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23920288(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v23 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v31,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v27;
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
    sub_B5D69C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v27; // x22
  unsigned __int64 v28; // x26
  UnityEngine_Object_o *v29; // x21
  struct System_Collections_Generic_List_GameObject__o *v30; // x21

  if ( (byte_42EE54C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EE54C = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v23;
    if ( v28 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v27);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v30 = this->fields.objectList;
      if ( !v30 )
        goto LABEL_19;
      if ( v28 >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v30->fields._items->obj.klass + v27);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v23 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v27;
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