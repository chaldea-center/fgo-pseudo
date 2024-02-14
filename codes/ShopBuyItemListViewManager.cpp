void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816LL;
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_3225010;
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
    this->fields.filterStatus = dword_3225108[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_4217A18 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v4);
    byte_4217A18 = 1;
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
  const MethodInfo *v14; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_421A0FC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_421A0FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  if ( itemList->fields._size != LODWORD(Instance->fields.datalist) )
    ShopBuyItemListViewManager__CreateList_34150188(this, 6, eventId, slot, eventNum, isForcedAdjustment, v14);
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

  ShopBuyItemListViewManager__CreateList_34150188(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34150188(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_34150188(
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  int32_t v33; // w1
  const MethodInfo *v34; // x1
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  System_Int32_array *v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x4
  ShopEntity_array *ShopEntities; // x25
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x23
  const MethodInfo *v51; // x1
  __int64 v52; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v54; // x26
  int v55; // w24
  int32_t v56; // w19
  ShopEntity_o *v57; // x27
  struct System_Int32_array *targetIds; // x20
  __int64 v59; // x8
  unsigned __int64 v60; // x22
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x28
  int32_t v65; // w22
  ListViewItem_o *v66; // x20
  const MethodInfo *v67; // x2
  signed __int64 size; // x8
  unsigned __int64 v69; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x25
  int32_t v71; // w28
  ShopEntity_o *v72; // x27
  ListViewItem_o *v73; // x20
  const MethodInfo *v74; // x2
  signed __int64 v75; // x8
  unsigned __int64 v76; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x23
  int32_t v78; // w28
  ShopEntity_o *v79; // x25
  ListViewItem_o *v80; // x20
  const MethodInfo *v81; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v83; // x8
  __int64 v84; // x9
  __int64 v85; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v87; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v89; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v91; // x0
  __int64 *v92; // x8
  System_String_o *v93; // x21
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **sort; // x1
  _BOOL8 v101; // x0
  const MethodInfo *v102; // x3
  __int64 v103; // x0
  int32_t v104; // [xsp+4h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v105; // [xsp+8h] [xbp-78h]
  bool v106; // [xsp+14h] [xbp-6Ch]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+18h] [xbp-68h]
  ShopBuyItemListViewManager_o *v108; // [xsp+20h] [xbp-60h]
  EventRewardSceneEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421A0F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v22);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v23);
    sub_B0D8A4(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&StringLiteral_12243/*"SHOP_SPECIAL_LIST_EMPTY"*/, v26);
    sub_B0D8A4(&StringLiteral_12204/*"SHOP_LIST_EMPTY"*/, v27);
    sub_B0D8A4(&StringLiteral_5726/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v28);
    byte_421A0F9 = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
    this->fields.filterBtn,
    0,
    v31);
  v33 = this->fields.kind;
  if ( v33 == 6 )
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
    v36 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.datalist;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v34);
    if ( !currencyInfoController )
      goto LABEL_117;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_B0D840(
      (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
      (System_Int32_array **)Instance,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_117;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v36,
      isForcedAdjustment,
      v43);
    v33 = this->fields.kind;
  }
  v104 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                v33,
                                                v32);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v44);
  v105 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                   v46,
                                                                                                   v47);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v105,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  v48,
                                                                                                  v49);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_117;
  max_length = ShopEntities->max_length;
  v108 = this;
  if ( max_length < 1 )
  {
    v106 = 0;
    v56 = 0;
    if ( !v50 )
      goto LABEL_117;
    goto LABEL_44;
  }
  v106 = 0;
  v54 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v55 = 0;
  v56 = 0;
  do
  {
    if ( v55 >= (unsigned int)max_length )
      goto LABEL_118;
    v57 = ShopEntities->m_Items[v55];
    if ( !v57 )
      goto LABEL_117;
    if ( v57->fields.purchaseType == 6 )
    {
      targetIds = v57->fields.targetIds;
      if ( !targetIds )
        goto LABEL_117;
      v59 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v59 >= 1 )
      {
        v60 = 0LL;
        while ( v60 < (unsigned int)v59 )
        {
          if ( !v54 )
            goto LABEL_117;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v54,
                                        targetIds->m_Items[v60 + 1],
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_40;
          LODWORD(v59) = targetIds->max_length;
          if ( (__int64)++v60 >= (int)v59 )
            goto LABEL_24;
        }
LABEL_118:
        v103 = sub_B0D9A8(Instance);
        sub_B0D948(v103, 0LL);
      }
    }
LABEL_24:
    if ( v106 )
    {
      v106 = 1;
    }
    else
    {
      v106 = v57->fields.purchaseType == 16;
      v108->fields.targetSlot = v57->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v57, v51)
      && !ShopEntity__GetIsNotHavingShopItemReceived(v57, v61)
      && !ShopEntity__IsAnotherItemBuyable(v57, v61) )
    {
      Instance = (DataManager_o *)v105;
      if ( !v105 )
        goto LABEL_117;
      goto LABEL_39;
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v57, v61);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v50 )
        goto LABEL_117;
      Instance = (DataManager_o *)v50;
LABEL_39:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      goto LABEL_40;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v57, v62);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(v108, v57, (int32_t)Instance, v63),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v57->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108->fields.itemList;
        v65 = v108->fields.kind;
        v66 = (ListViewItem_o *)sub_B0D974(ShopBuyItemListViewItem_TypeInfo, v51, v52);
        ListViewItem___ctor_23700744(v66, v56, 0LL);
        v66[1].fields.sortIndex = v65;
        v66[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v66, v57, v67);
        if ( !itemList )
          goto LABEL_117;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v56;
      }
    }
LABEL_40:
    max_length = ShopEntities->max_length;
    ++v55;
  }
  while ( v55 < max_length );
  if ( !v50 )
    goto LABEL_117;
LABEL_44:
  LODWORD(size) = v50->fields._size;
  if ( (int)size >= 1 )
  {
    v69 = 0LL;
    do
    {
      v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108->fields.itemList;
      v71 = v108->fields.kind;
      if ( v69 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v72 = (ShopEntity_o *)v50->fields._items->m_Items[v69];
      v73 = (ListViewItem_o *)sub_B0D974(ShopBuyItemListViewItem_TypeInfo, v51, v52);
      ListViewItem___ctor_23700744(v73, v56 + v69, 0LL);
      v73[1].fields.sortIndex = v71;
      v73[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v73, v72, v74);
      if ( !v70 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v70,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      size = v50->fields._size;
      ++v69;
    }
    while ( (__int64)v69 < size );
    v56 += v69;
  }
  if ( !v105 )
LABEL_117:
    sub_B0D97C(Instance);
  LODWORD(v75) = v105->fields._size;
  if ( (int)v75 >= 1 )
  {
    v76 = 0LL;
    do
    {
      v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108->fields.itemList;
      v78 = v108->fields.kind;
      if ( v76 >= (unsigned int)v75 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v79 = (ShopEntity_o *)v105->fields._items->m_Items[v76];
      v80 = (ListViewItem_o *)sub_B0D974(ShopBuyItemListViewItem_TypeInfo, v51, v52);
      ListViewItem___ctor_23700744(v80, v56 + v76, 0LL);
      v80[1].fields.sortIndex = v78;
      v80[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v80, v79, v81);
      if ( !v77 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v77,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v75 = v105->fields._size;
    }
    while ( (__int64)++v76 < v75 );
  }
  if ( v108->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)v108->fields.scrollBar;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v108->fields.scrollBar;
      if ( !Instance )
        goto LABEL_117;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_117;
      v83 = 340LL;
      if ( v104 == 1 )
        v83 = 328LL;
      if ( v104 == 1 )
        v84 = 324LL;
      else
        v84 = 336LL;
      if ( v104 == 1 )
        v85 = 320LL;
      else
        v85 = 332LL;
      v110.fields.y = *(float *)((char *)&v108->klass + v84);
      v110.fields.x = *(float *)((char *)&v108->klass + v85);
      v110.fields.z = *(float *)((char *)&v108->klass + v83);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v110, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)v108->fields.scrollbarBgSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v108->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_117;
      if ( v104 == 1 )
        v87 = 338;
      else
        v87 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v87, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)v108->fields.scrollbarForeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)v108->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_117;
      if ( v104 == 1 )
        v89 = 348;
      else
        v89 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v89, 0LL);
    }
    emptyMessageLabel = v108->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v91 = (System_String_o *)StringLiteral_5726/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/;
  }
  else
  {
    emptyMessageLabel = v108->fields.emptyMessageLabel;
    if ( v108->fields.kind == 12 )
      v92 = (__int64 *)&StringLiteral_12243/*"SHOP_SPECIAL_LIST_EMPTY"*/;
    else
      v92 = &StringLiteral_12204/*"SHOP_LIST_EMPTY"*/;
    v93 = (System_String_o *)*v92;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v91 = v93;
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v91, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_117;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  sort = (System_Int32_array **)v108->fields.sort;
  if ( sort )
  {
    v108->fields.baseSortInfo = (struct ListViewSort_o *)sort;
    sub_B0D840((BattleServantConfConponent_o *)&v108->fields.baseSortInfo, sort, v94, v95, v96, v97, v98, v99);
  }
  if ( !v106 )
    goto LABEL_115;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_117;
  v101 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           v108->fields.eventId,
           v108->fields.targetSlot,
           0LL);
  if ( entity && v101 && entity->fields.type == 1 )
  {
    ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v101, v108->fields.filterBtn, 1, v102);
    EventRewardSaveData__LoadItemFilter(v108->fields.eventId, v108->fields.targetSlot, 0LL);
    if ( !byte_4217A19 )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, sort);
      byte_4217A19 = 1;
    }
    v108->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
  }
  else
  {
LABEL_115:
    v108->fields.filterStatus = 0;
  }
  ShopBuyItemListViewManager__SetList(v108, (const MethodInfo *)sort);
  ListViewManager__SortItem((ListViewManager_o *)v108, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)v108, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_34152384(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34150188(this, 6, eventId, 0, 0, 0, v3);
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_3225120[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_3225170[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_421A0FA & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_421A0FA = 1;
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
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v10; // x1
  int32_t PayType; // w0

  if ( (byte_421A10E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A10E = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_B0D97C(Instance);
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

  if ( (byte_421A101 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_421A101 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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

  if ( (byte_421A107 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_B0D8A4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v5);
    byte_421A107 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                 *(_QWORD *)&initMode,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v7;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8

  if ( (byte_421A10B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421A10B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_B0D97C(Instance);
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
  int32_t v10; // w2

  if ( (byte_421A0FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421A0FB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_B0D97C(Instance);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  __int64 v7; // x21
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct System_Collections_Generic_List_GameObject__o *v11; // x20
  const MethodInfo *v12; // x1

  v2 = this;
  if ( (byte_421A100 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (ShopBuyItemListViewManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421A100 = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
LABEL_24:
    sub_B0D97C(this);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      break;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (ShopBuyItemListViewManager_o *)*((_QWORD *)&v11->fields._items->obj.klass + v7);
      if ( !this )
        goto LABEL_24;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
      ShopBuyItemListViewObject__SetupDisp((ShopBuyItemListViewObject_o *)Component_srcLineSprite, v12);
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

  return ShopBuyItemListViewManager__ModifyList_34155888(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__ModifyFilterList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  EventDetailEntity_o *Entity; // x20
  int32_t eventCount; // w21
  int32_t targetSlot; // w22
  int32_t eventId; // w23
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x2

  if ( (byte_421A0FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A0FD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.eventId,
                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopMaster__GetEnableEventEntityList(
                                      (ShopMaster_o *)Instance,
                                      this->fields.eventId,
                                      this->fields.targetSlot,
                                      0LL),
        !Entity) )
  {
    sub_B0D97C(Instance);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_34150188(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v12);
  ShopBuyItemListViewManager__SetMode_34156900(this, 2, v13);
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
  if ( (byte_421A0FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    this = (ShopBuyItemListViewManager_o *)sub_B0D8A4(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_421A0FF = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = v6->fields.itemList;
    if ( !itemList )
LABEL_15:
      sub_B0D97C(this);
    v10 = 0LL;
    while ( 1 )
    {
      if ( (__int64)v10 >= itemList->fields._size )
        return 0;
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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

  return ShopBuyItemListViewManager__ModifyList_34155888(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_34155888(
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x6
  DataManager_o *v22; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w8
  ShopBuyItemListViewManager_o *v25; // x0
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w4
  bool v30; // w5
  System_Int32_array *EventItemList; // x26
  int32_t v32; // w23
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v35; // x27
  const MethodInfo *v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t v43; // w21
  ShopCurrencyInfoController_o *v44; // x28
  _BOOL4 isEventShop; // w19
  const MethodInfo *v46; // x6
  int datalist; // w8
  __int64 v48; // x27
  ShopEntity_o *v49; // x26
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  int32_t PurchaseShop; // w0
  const MethodInfo *v53; // x3
  __int64 v55; // x0
  bool v56; // [xsp+Ch] [xbp-54h]

  if ( (byte_421A0FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_421A0FE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)ShopBuyItemListViewManager__GetShopEntities(
                                (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
                                kind,
                                0,
                                0,
                                v19);
  v22 = Instance;
  if ( kind == 6 )
  {
    if ( MasterData_WarQuestSelectionMaster )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_WarQuestSelectionMaster, eventId, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v56 = isForcedAdjustment;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          v32 = slot;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v35 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v36);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            v43 = eventNum;
            sub_B0D840(
              (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
              (System_Int32_array **)Instance,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            if ( v35 )
            {
              v44 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v35, 0LL);
              if ( v44 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v44,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  (unsigned __int8)Instance & 1,
                  v46);
                eventNum = v43;
                slot = v32;
                isForcedAdjustment = v56;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B0D97C(Instance);
  }
  if ( kind != 12 && kind != 7 )
  {
LABEL_19:
    if ( !v22 )
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
    datalist = (int)v22->fields.datalist;
    if ( datalist >= 1 )
    {
      v48 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v48 >= datalist )
        {
          v55 = sub_B0D9A8(Instance);
          sub_B0D948(v55, 0LL);
        }
        v49 = (ShopEntity_o *)*((_QWORD *)&v22->fields.lookup + v48);
        if ( !v49 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      *((ShopEntity_o **)&v22->fields.lookup + v48),
                                      v49->fields.id,
                                      v20);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v49, v50);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v49, v51);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v49, PurchaseShop, v53);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        datalist = (int)v22->fields.datalist;
        if ( (int)++v48 >= datalist )
          return 1;
      }
      v30 = isForcedAdjustment;
      v25 = this;
      v26 = kind;
      v27 = eventId;
      v28 = slot;
      v29 = eventNum;
      goto LABEL_30;
    }
    return 1;
  }
  v25 = this;
  v26 = kind;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
LABEL_30:
  ShopBuyItemListViewManager__CreateList_34150188(v25, v26, v27, v28, v29, v30, v21);
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
  int32_t Index; // w1

  if ( (byte_421A10A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, obj);
    byte_421A10A = 1;
  }
  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_B0D97C(v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    System_Action_int___Invoke(
      onClickListViewItem,
      Index,
      (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
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

  if ( (byte_421A109 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421A109 = 1;
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
          sub_B0D840((BattleServantConfConponent_o *)&this->fields.onMoveEnd, 0LL, v13, v14, v15, v16, v17, v18);
          System_Action__Invoke(onMoveEnd, 0LL);
        }
        return;
      }
LABEL_19:
      sub_B0D97C(emptyMessageBase);
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
  __int64 v14; // x2
  float v15; // s8
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *v16; // x22
  int size; // w8
  __int64 v18; // x24
  ShopBuyItemListViewObject_o *v19; // x20
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  float v22; // s0

  if ( (byte_421A108 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_B0D8A4(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v8);
    byte_421A108 = 1;
  }
  v9 = 6;
  switch ( initMode )
  {
    case 1:
      v10 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v11);
      v15 = 0.1;
      v16 = ObjectList;
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
      v16 = ObjectList;
      v10 = 0;
      if ( (unsigned int)(initMode - 3) >= 2 )
        v15 = 0.0;
      else
        v15 = 0.1;
      if ( !ObjectList )
        goto LABEL_26;
LABEL_14:
      this->fields.callbackCount = v16->fields._size;
      size = v16->fields._size;
      if ( size < 1 )
      {
        this->fields.callbackCount = 1;
        if ( (v10 & 1) != 0 )
        {
          v22 = this->fields.listInDelay + 0.5;
        }
        else
        {
          v22 = 0.6;
          if ( (unsigned int)(initMode - 3) > 1 )
            v22 = 0.0;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
          v22,
          0LL);
      }
      else
      {
        v18 = 0LL;
        do
        {
          if ( size <= (unsigned int)v18 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v19 = v16->fields._items->m_Items[v18];
          v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
          System_Action___ctor(v20, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v19 )
LABEL_26:
            sub_B0D97C(ObjectList);
          ShopBuyItemListViewObject__Init_34160204(v19, v9, v20, v15, v21);
          size = v16->fields._size;
          ++v18;
        }
        while ( (int)v18 < size );
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
      sub_B0D97C(0LL);
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

  if ( (byte_421A106 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_421A106 = 1;
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
      sub_B0D97C(gameObject);
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
  UIWidget_o *v8; // x0

  if ( (byte_421A105 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421A105 = 1;
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
    v8 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v8 || (UIWidget__set_width(v8, 52, 0LL), (v8 = (UIWidget_o *)this->fields.filterTxtSprite) == 0LL) )
      sub_B0D97C(v8);
    UIWidget__set_height(v8, 20, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v10; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UILabel_o *emptyMessageLabel; // x21
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v20; // x2
  int32_t filterStatus; // w8
  bool v22; // w2
  bool v23; // w2

  if ( (byte_421A104 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_17150/*"btn_txt_stock_02"*/, v5);
    sub_B0D8A4(&StringLiteral_17149/*"btn_txt_stock"*/, v6);
    sub_B0D8A4(&StringLiteral_5726/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v7);
    sub_B0D8A4(&StringLiteral_17080/*"btn_txt_all"*/, v8);
    byte_421A104 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v10 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor_32823928(v10, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5726/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_22;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)operationSortInfo, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17150/*"btn_txt_stock_02"*/, v20);
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
    sub_B0D97C(operationSortInfo);
  }
  if ( filterStatus == 1 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17149/*"btn_txt_stock"*/, v20);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_22;
    v22 = 1;
  }
  else
  {
    if ( filterStatus )
      goto LABEL_20;
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17080/*"btn_txt_all"*/, v20);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
    (System_Int32_array **)onClickListViewItem,
    (System_String_array **)onClickListViewItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_34156900(this, mode, v10);
}


void __fastcall ShopBuyItemListViewManager__SetMode_34156900(
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


void __fastcall ShopBuyItemListViewManager__SetMode_34158276(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_34156900(this, mode, v11);
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

  if ( (byte_421A10D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_421A10D = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_B0D97C(scrollView);
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
  int v7; // w9
  int32_t v8; // w1
  __int64 v9; // x10

  v5 = this;
  if ( (byte_421A102 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_B0D8A4(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_421A102 = 1;
  }
  initMode = v5->fields.initMode;
  if ( initMode == 5 )
    v7 = 7;
  else
    v7 = 2;
  if ( initMode == 2 )
    v8 = 3;
  else
    v8 = v7;
  if ( !obj
    || (v9 = *(&ShopBuyItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[v9 - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  ShopBuyItemListViewObject__Init_34160204((ShopBuyItemListViewObject_o *)obj, v8, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_421A103 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_421A103 = 1;
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
      sub_B0D97C(gameObject);
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

  if ( (byte_421A10C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_421A10C = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_B0D97C(scrollView);
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
    sub_B0D97C(0LL);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ClippingObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21

  if ( (byte_421A0F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_421A0F8 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B0D97C(Component_srcLineSprite);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v10;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ShopBuyItemListViewObject__GetItem(
                                                              (ShopBuyItemListViewObject_o *)Component_srcLineSprite,
                                                              v17);
      if ( Component_srcLineSprite )
      {
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23719204(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v10 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            v18,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
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
    sub_B0D97C(this);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21

  if ( (byte_421A0F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_421A0F7 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B0D97C(Component_srcLineSprite);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v10;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v10 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
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