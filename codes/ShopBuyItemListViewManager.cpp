void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816LL;
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_31573F0;
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
    this->fields.filterStatus = dword_31574E8[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_40FD20E )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v4);
    byte_40FD20E = 1;
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
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_array *EnableEventEntityList; // x0
  const MethodInfo *v16; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_40FF802 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FF802 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (EnableEventEntityList = ShopMaster__GetEnableEventEntityList(
                                  MasterData_WarQuestSelectionMaster,
                                  eventId,
                                  slot,
                                  0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_B170D4();
  }
  if ( itemList->fields._size != EnableEventEntityList->max_length )
    ShopBuyItemListViewManager__CreateList_34527020(this, 6, eventId, slot, eventNum, isForcedAdjustment, v16);
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

  ShopBuyItemListViewManager__CreateList_34527020(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34527020(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_34527020(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v31; // x3
  ShopBuyItemListViewManager_o *v32; // x0
  const MethodInfo *v33; // x2
  int32_t v34; // w1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v36; // x1
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  System_Int32_array *v38; // x23
  System_Int32_array **ObjectList; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x6
  ShopCurrencyInfoController_o *v47; // x0
  const MethodInfo *v48; // x4
  ShopEntity_array *ShopEntities; // x25
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x23
  WebViewManager_o *v59; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *PurchaseShop; // x0
  const MethodInfo *v61; // x1
  __int64 v62; // x2
  const MethodInfo *v63; // x3
  __int64 v64; // x4
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x26
  int v67; // w24
  int32_t v68; // w19
  ShopEntity_o *v69; // x27
  struct System_Int32_array *targetIds; // x20
  __int64 v71; // x8
  unsigned __int64 v72; // x22
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x28
  int32_t v77; // w22
  ListViewItem_o *v78; // x20
  const MethodInfo *v79; // x2
  signed __int64 size; // x8
  unsigned __int64 v81; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x25
  int32_t v83; // w28
  ShopEntity_o *v84; // x27
  ListViewItem_o *v85; // x20
  const MethodInfo *v86; // x2
  signed __int64 v87; // x8
  unsigned __int64 v88; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v89; // x23
  int32_t v90; // w28
  ShopEntity_o *v91; // x25
  ListViewItem_o *v92; // x20
  const MethodInfo *v93; // x2
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *v95; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v97; // x8
  __int64 v98; // x9
  __int64 v99; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  UIWidget_o *v101; // x0
  int32_t v102; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  UIWidget_o *v104; // x0
  int32_t v105; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v107; // x0
  __int64 *v108; // x8
  System_String_o *v109; // x21
  System_String_o *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **sort; // x1
  WebViewManager_o *v118; // x0
  EventRewardSceneMaster_o *v119; // x0
  _BOOL8 v120; // x0
  const MethodInfo *v121; // x3
  int32_t v122; // [xsp+4h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v123; // [xsp+8h] [xbp-78h]
  bool v124; // [xsp+14h] [xbp-6Ch]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+18h] [xbp-68h]
  ShopBuyItemListViewManager_o *v126; // [xsp+20h] [xbp-60h]
  EventRewardSceneEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FF7FF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_B16FFC(&LocalizationManager_TypeInfo, v22);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v23);
    sub_B16FFC(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&StringLiteral_12152, v26);
    sub_B16FFC(&StringLiteral_12114, v27);
    sub_B16FFC(&StringLiteral_5692, v28);
    byte_40FF7FF = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
    this->fields.filterBtn,
    0,
    v31);
  v34 = this->fields.kind;
  if ( v34 == 6 )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_117;
    EventItemList = ShopMaster__GetEventItemList(
                      (ShopMaster_o *)MasterData_WarQuestSelectionMaster,
                      this->fields.eventId,
                      0LL);
    if ( !EventItemList )
      goto LABEL_117;
    currencyInfoController = this->fields.currencyInfoController;
    v38 = EventItemList;
    this->fields._EventItemCount_k__BackingField = *(_QWORD *)&EventItemList->max_length;
    ObjectList = (System_Int32_array **)ShopBuyItemListViewManager__get_ObjectList(this, v36);
    if ( !currencyInfoController )
      goto LABEL_117;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)ObjectList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
      ObjectList,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    v47 = this->fields.currencyInfoController;
    if ( !v47 )
      goto LABEL_117;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      v47,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v38,
      isForcedAdjustment,
      v46);
    v34 = this->fields.kind;
  }
  v122 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(v32, v34, v33);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v48);
  v123 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                   v50,
                                                                                                   v51,
                                                                                                   v52,
                                                                                                   v53);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v123,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  v54,
                                                                                                  v55,
                                                                                                  v56,
                                                                                                  v57);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v59 )
    goto LABEL_117;
  PurchaseShop = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v59,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_117;
  max_length = ShopEntities->max_length;
  v126 = this;
  if ( max_length < 1 )
  {
    v124 = 0;
    v68 = 0;
    if ( !v58 )
      goto LABEL_117;
    goto LABEL_44;
  }
  v124 = 0;
  v66 = PurchaseShop;
  v67 = 0;
  v68 = 0;
  do
  {
    if ( v67 >= (unsigned int)max_length )
      goto LABEL_118;
    v69 = ShopEntities->m_Items[v67];
    if ( !v69 )
      goto LABEL_117;
    if ( v69->fields.purchaseType == 6 )
    {
      targetIds = v69->fields.targetIds;
      if ( !targetIds )
        goto LABEL_117;
      v71 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v71 >= 1 )
      {
        v72 = 0LL;
        while ( v72 < (unsigned int)v71 )
        {
          if ( !v66 )
            goto LABEL_117;
          PurchaseShop = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                          v66,
                                                                          targetIds->m_Items[v72 + 1],
                                                                          (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !PurchaseShop )
            goto LABEL_40;
          LODWORD(v71) = targetIds->max_length;
          if ( (__int64)++v72 >= (int)v71 )
            goto LABEL_24;
        }
LABEL_118:
        sub_B17100(PurchaseShop, v61, v62);
        sub_B170A0();
      }
    }
LABEL_24:
    if ( v124 )
    {
      v124 = 1;
    }
    else
    {
      v124 = v69->fields.purchaseType == 16;
      v126->fields.targetSlot = v69->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v69, v61)
      && !ShopEntity__GetIsNotHavingShopItemReceived(v69, v73)
      && !ShopEntity__IsAnotherItemBuyable(v69, v73) )
    {
      v75 = v123;
      if ( !v123 )
        goto LABEL_117;
      goto LABEL_39;
    }
    if ( ShopEntity__isClosedShopPriorityLowCheck(v69, v73) )
    {
      if ( !v58 )
        goto LABEL_117;
      v75 = v58;
LABEL_39:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v75,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      goto LABEL_40;
    }
    PurchaseShop = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__GetPurchaseShop(v69, v74);
    if ( (int)PurchaseShop < 1
      || (PurchaseShop = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopBuyItemListViewManager__ModifyItem(
                                                                          v126,
                                                                          v69,
                                                                          (int32_t)PurchaseShop,
                                                                          v63),
          ((unsigned __int8)PurchaseShop & 1) == 0) )
    {
      if ( v69->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v126->fields.itemList;
        v77 = v126->fields.kind;
        v78 = (ListViewItem_o *)sub_B170CC(ShopBuyItemListViewItem_TypeInfo, v61, v62, v63, v64);
        ListViewItem___ctor_30173668(v78, v68, 0LL);
        v78[1].fields.sortIndex = v77;
        v78[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v78, v69, v79);
        if ( !itemList )
          goto LABEL_117;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v68;
      }
    }
LABEL_40:
    max_length = ShopEntities->max_length;
    ++v67;
  }
  while ( v67 < max_length );
  if ( !v58 )
    goto LABEL_117;
LABEL_44:
  LODWORD(size) = v58->fields._size;
  if ( (int)size >= 1 )
  {
    v81 = 0LL;
    do
    {
      v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v126->fields.itemList;
      v83 = v126->fields.kind;
      if ( v81 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v84 = (ShopEntity_o *)v58->fields._items->m_Items[v81];
      v85 = (ListViewItem_o *)sub_B170CC(ShopBuyItemListViewItem_TypeInfo, v61, v62, v63, v64);
      ListViewItem___ctor_30173668(v85, v68 + v81, 0LL);
      v85[1].fields.sortIndex = v83;
      v85[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v85, v84, v86);
      if ( !v82 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v82,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      size = v58->fields._size;
      ++v81;
    }
    while ( (__int64)v81 < size );
    v68 += v81;
  }
  if ( !v123 )
LABEL_117:
    sub_B170D4();
  LODWORD(v87) = v123->fields._size;
  if ( (int)v87 >= 1 )
  {
    v88 = 0LL;
    do
    {
      v89 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v126->fields.itemList;
      v90 = v126->fields.kind;
      if ( v88 >= (unsigned int)v87 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v91 = (ShopEntity_o *)v123->fields._items->m_Items[v88];
      v92 = (ListViewItem_o *)sub_B170CC(ShopBuyItemListViewItem_TypeInfo, v61, v62, v63, v64);
      ListViewItem___ctor_30173668(v92, v68 + v88, 0LL);
      v92[1].fields.sortIndex = v90;
      v92[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v92, v91, v93);
      if ( !v89 )
        goto LABEL_117;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v89,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v87 = v123->fields._size;
    }
    while ( (__int64)++v88 < v87 );
  }
  if ( v126->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)v126->fields.scrollBar;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      v95 = (UnityEngine_Component_o *)v126->fields.scrollBar;
      if ( !v95 )
        goto LABEL_117;
      transform = UnityEngine_Component__get_transform(v95, 0LL);
      if ( !transform )
        goto LABEL_117;
      v97 = 340LL;
      if ( v122 == 1 )
        v97 = 328LL;
      if ( v122 == 1 )
        v98 = 324LL;
      else
        v98 = 336LL;
      if ( v122 == 1 )
        v99 = 320LL;
      else
        v99 = 332LL;
      v128.fields.y = *(float *)((char *)&v126->klass + v98);
      v128.fields.x = *(float *)((char *)&v126->klass + v99);
      v128.fields.z = *(float *)((char *)&v126->klass + v97);
      UnityEngine_Transform__set_localPosition(transform, v128, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)v126->fields.scrollbarBgSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      v101 = (UIWidget_o *)v126->fields.scrollbarBgSprite;
      if ( !v101 )
        goto LABEL_117;
      if ( v122 == 1 )
        v102 = 338;
      else
        v102 = 276;
      UIWidget__set_height(v101, v102, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)v126->fields.scrollbarForeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      v104 = (UIWidget_o *)v126->fields.scrollbarForeSprite;
      if ( !v104 )
        goto LABEL_117;
      if ( v122 == 1 )
        v105 = 348;
      else
        v105 = 286;
      UIWidget__set_height(v104, v105, 0LL);
    }
    emptyMessageLabel = v126->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v107 = (System_String_o *)StringLiteral_5692;
  }
  else
  {
    emptyMessageLabel = v126->fields.emptyMessageLabel;
    if ( v126->fields.kind == 12 )
      v108 = (__int64 *)&StringLiteral_12152;
    else
      v108 = &StringLiteral_12114;
    v109 = (System_String_o *)*v108;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v107 = v109;
  }
  v110 = LocalizationManager__Get(v107, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_117;
  UILabel__set_text(emptyMessageLabel, v110, 0LL);
  sort = (System_Int32_array **)v126->fields.sort;
  if ( sort )
  {
    v126->fields.baseSortInfo = (struct ListViewSort_o *)sort;
    sub_B16F98((BattleServantConfConponent_o *)&v126->fields.baseSortInfo, sort, v111, v112, v113, v114, v115, v116);
  }
  if ( !v124 )
    goto LABEL_115;
  v118 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v118 )
    goto LABEL_117;
  v119 = (EventRewardSceneMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v118,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !v119 )
    goto LABEL_117;
  v120 = EventRewardSceneMaster__TryGetEntity(v119, &entity, v126->fields.eventId, v126->fields.targetSlot, 0LL);
  if ( entity && v120 && entity->fields.type == 1 )
  {
    ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v120, v126->fields.filterBtn, 1, v121);
    EventRewardSaveData__LoadItemFilter(v126->fields.eventId, v126->fields.targetSlot, 0LL);
    if ( !byte_40FD20F )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, sort);
      byte_40FD20F = 1;
    }
    v126->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
  }
  else
  {
LABEL_115:
    v126->fields.filterStatus = 0;
  }
  ShopBuyItemListViewManager__SetList(v126, (const MethodInfo *)sort);
  ListViewManager__SortItem((ListViewManager_o *)v126, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)v126, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_34529216(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34527020(this, 6, eventId, 0, 0, 0, v3);
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_3157500[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_3157550[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_40FF800 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_40FF800 = 1;
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
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v11; // x1
  int32_t PayType; // w0

  if ( (byte_40FF814 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF814 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_B170D4();
      }
      EventItemList = ShopMaster__GetEventItemList(MasterData_WarQuestSelectionMaster, eventId, 0LL);
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

  if ( (byte_40FF807 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_40FF807 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19

  if ( (byte_40FF80D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_B16FFC(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    byte_40FF80D = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                 *(_QWORD *)&initMode,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v9;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_array *EnableEventEntitiyList; // x0
  ShopEntity_o *v7; // x8

  if ( (byte_40FF811 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FF811 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  EnableEventEntitiyList = ShopMaster__GetEnableEventEntitiyList(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  if ( !EnableEventEntitiyList )
    goto LABEL_10;
  if ( (int)EnableEventEntitiyList->max_length >= 1 )
  {
    v7 = EnableEventEntitiyList->m_Items[0];
    if ( v7 )
      return v7->fields.payType;
LABEL_10:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v11; // w2

  if ( (byte_40FF801 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FF801 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 2;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 6:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      return ShopMaster__GetEnableEventEntityList(MasterData_WarQuestSelectionMaster, eventId, slot, 0LL);
    case 7:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 6;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 8:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 7;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 9:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 3;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 10:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 4;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 11:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 5;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 12:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 9;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 13:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 10;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 14:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 11;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 15:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 12;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 16:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 13;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 17:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 14;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 19:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 15;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
    case 20:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_37;
      v11 = 16;
      return ShopMaster__GetEnableEntitiyList(MasterData_WarQuestSelectionMaster, 0, v11, 0LL);
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
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  __int64 v7; // x21
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x20
  bool v10; // w0
  ShopBuyItemListViewObject_o *Component_srcLineSprite; // x20
  struct System_Collections_Generic_List_GameObject__o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40FF806 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FF806 = 1;
  }
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_24:
    sub_B170D4();
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      break;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    Component_srcLineSprite = 0LL;
    if ( v10 )
    {
      v12 = this->fields.objectList;
      if ( !v12 )
        goto LABEL_24;
      if ( v8 >= (unsigned int)v12->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = (UnityEngine_GameObject_o *)*((_QWORD *)&v12->fields._items->obj.klass + v7);
      if ( !v13 )
        goto LABEL_24;
      Component_srcLineSprite = (ShopBuyItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v13,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_24;
      ShopBuyItemListViewObject__SetupDisp(Component_srcLineSprite, v14);
    }
    objectList = this->fields.objectList;
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

  return ShopBuyItemListViewManager__ModifyList_34532720(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__ModifyFilterList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x20
  WebViewManager_o *v9; // x0
  ShopMaster_o *v10; // x0
  int32_t eventCount; // w21
  int32_t targetSlot; // w22
  int32_t eventId; // w23
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x2

  if ( (byte_40FF803 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF803 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          this->fields.eventId,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v10 = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v9,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (ShopMaster__GetEnableEventEntityList(v10, this->fields.eventId, this->fields.targetSlot, 0LL), !Entity) )
  {
    sub_B170D4();
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_34527020(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v15);
  ShopBuyItemListViewManager__SetMode_34533732(this, 2, v16);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyItem(
        ShopBuyItemListViewManager_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v10; // x22
  ShopBuyItemListViewItem_o *v11; // x0
  __int64 v12; // x10
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_40FF805 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_40FF805 = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_15:
      sub_B170D4();
    v10 = 0LL;
    while ( 1 )
    {
      if ( (__int64)v10 >= itemList->fields._size )
        return 0;
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = (ShopBuyItemListViewItem_o *)itemList->fields._items->m_Items[v10];
      if ( !v11 )
        goto LABEL_15;
      v12 = *(&ShopBuyItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (ShopBuyItemListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != ShopBuyItemListViewItem_TypeInfo )
      {
        goto LABEL_15;
      }
      Shop_k__BackingField = v11->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        if ( Shop_k__BackingField->fields.id == shopId )
          break;
      }
      itemList = this->fields.itemList;
      ++v10;
      if ( !itemList )
        goto LABEL_15;
    }
    ShopBuyItemListViewItem__Modify(v11, shopEntity, *(const MethodInfo **)&shopId);
  }
  return 1;
}


bool __fastcall ShopBuyItemListViewManager__ModifyList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  return ShopBuyItemListViewManager__ModifyList_34532720(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_34532720(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  const MethodInfo *v19; // x4
  ShopEntity_array *ShopEntities; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x6
  ShopEntity_array *v25; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w8
  ShopBuyItemListViewManager_o *v28; // x0
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w4
  bool v33; // w5
  System_Int32_array *EventItemList; // x26
  WebViewManager_o *v35; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x0
  int32_t v37; // w23
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v40; // x27
  const MethodInfo *v41; // x1
  System_Int32_array **ObjectList; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int32_t v49; // w21
  ShopCurrencyInfoController_o *v50; // x28
  _BOOL4 isEventShop; // w19
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v53; // x6
  int max_length; // w8
  __int64 v55; // x27
  ShopEntity_o *v56; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v58; // x3
  bool v60; // [xsp+Ch] [xbp-54h]

  if ( (byte_40FF804 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FF804 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   (ShopBuyItemListViewManager_o *)MasterData_WarQuestSelectionMaster,
                   kind,
                   0,
                   0,
                   v19);
  v25 = ShopEntities;
  if ( kind == 6 )
  {
    if ( MasterData_WarQuestSelectionMaster )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_WarQuestSelectionMaster, eventId, 0LL);
      v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v35 )
      {
        v60 = isForcedAdjustment;
        v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v35,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( v36 )
        {
          v37 = slot;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v36,
                     this->fields.eventId,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v40 = (EventDetailEntity_o *)Entity;
          ObjectList = (System_Int32_array **)ShopBuyItemListViewManager__get_ObjectList(this, v41);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)ObjectList;
            v49 = eventNum;
            sub_B16F98(
              (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
              ObjectList,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
            if ( v40 )
            {
              v50 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(v40, 0LL);
              if ( v50 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v50,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  IsForcedAdjustmentDialog,
                  v53);
                eventNum = v49;
                slot = v37;
                isForcedAdjustment = v60;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
  if ( kind != 12 && kind != 7 )
  {
LABEL_19:
    if ( !v25 )
      return 1;
    goto LABEL_20;
  }
  if ( !ShopEntities )
    goto LABEL_31;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  size = itemList->fields._size;
  if ( size < 1 || size == ShopEntities->max_length )
  {
LABEL_20:
    max_length = v25->max_length;
    if ( max_length >= 1 )
    {
      v55 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v55 >= max_length )
        {
          sub_B17100(ShopEntities, v21, v22);
          sub_B170A0();
        }
        v56 = v25->m_Items[v55];
        if ( !v56 )
          goto LABEL_31;
        ShopEntities = (ShopEntity_array *)ShopBuyItemListViewManager__ModifyItem(
                                             this,
                                             v25->m_Items[v55],
                                             v56->fields.id,
                                             v23);
        if ( ((unsigned __int8)ShopEntities & 1) == 0 )
        {
          ShopEntities = (ShopEntity_array *)ShopEntity__IsSoldOut(v56, v21);
          if ( ((unsigned __int8)ShopEntities & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v56, v21);
            ShopEntities = (ShopEntity_array *)ShopBuyItemListViewManager__ModifyItem(this, v56, PurchaseShop, v58);
            if ( ((unsigned __int8)ShopEntities & 1) == 0 )
              break;
          }
        }
        max_length = v25->max_length;
        if ( (int)++v55 >= max_length )
          return 1;
      }
      v33 = isForcedAdjustment;
      v28 = this;
      v29 = kind;
      v30 = eventId;
      v31 = slot;
      v32 = eventNum;
      goto LABEL_30;
    }
    return 1;
  }
  v28 = this;
  v29 = kind;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
LABEL_30:
  ShopBuyItemListViewManager__CreateList_34527020(v28, v29, v30, v31, v32, v33, v24);
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
  int32_t Index; // w1

  if ( (byte_40FF810 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, obj);
    byte_40FF810 = 1;
  }
  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_B170D4();
    Index = ListViewObject__get_Index(obj, 0LL);
    System_Action_int___Invoke(
      onClickListViewItem,
      Index,
      (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
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
  struct UIScrollView_o *v19; // x0
  System_Action_o *onMoveEnd; // x20

  if ( (byte_40FF80F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FF80F = 1;
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
      v19 = this->fields.scrollView;
      if ( v19 )
      {
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v19->klass->vtable._8_UpdateScrollbars.method)(
          v19,
          1LL,
          v19->klass->vtable._9_SetDragAmount.methodPtr);
LABEL_17:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.onMoveEnd, 0LL, v13, v14, v15, v16, v17, v18);
          System_Action__Invoke(onMoveEnd, 0LL);
        }
        return;
      }
LABEL_19:
      sub_B170D4();
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
  float v12; // s8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x22
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *v18; // x0
  int size; // w8
  __int64 v20; // x24
  ShopBuyItemListViewObject_o *v21; // x20
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  float v24; // s0

  if ( (byte_40FF80E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_B16FFC(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&StringLiteral_10004, v8);
    byte_40FF80E = 1;
  }
  v9 = 6;
  switch ( initMode )
  {
    case 1:
      v10 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      v12 = 0.1;
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v11);
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
      v18 = ShopBuyItemListViewManager__GetObjectList(this, initMode, method);
      ObjectList = v18;
      v10 = 0;
      if ( (unsigned int)(initMode - 3) >= 2 )
        v12 = 0.0;
      else
        v12 = 0.1;
      if ( !v18 )
        goto LABEL_26;
LABEL_14:
      this->fields.callbackCount = ObjectList->fields._size;
      size = ObjectList->fields._size;
      if ( size < 1 )
      {
        this->fields.callbackCount = 1;
        if ( (v10 & 1) != 0 )
        {
          v24 = this->fields.listInDelay + 0.5;
        }
        else
        {
          v24 = 0.6;
          if ( (unsigned int)(initMode - 3) > 1 )
            v24 = 0.0;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10004,
          v24,
          0LL);
      }
      else
      {
        v20 = 0LL;
        do
        {
          if ( size <= (unsigned int)v20 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v21 = ObjectList->fields._items->m_Items[v20];
          v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
          System_Action___ctor(v22, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v21 )
LABEL_26:
            sub_B170D4();
          ShopBuyItemListViewObject__Init_34537036(v21, v9, v22, v12, v23);
          size = ObjectList->fields._size;
          ++v20;
        }
        while ( (int)v20 < size );
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
      sub_B170D4();
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

  if ( (byte_40FF80C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_40FF80C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL) )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_B170D4();
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
  UIWidget_o *v9; // x0

  if ( (byte_40FF80B & 1) == 0 )
  {
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FF80B = 1;
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
    if ( !v8 || (UIWidget__set_width(v8, 52, 0LL), (v9 = (UIWidget_o *)this->fields.filterTxtSprite) == 0LL) )
      sub_B170D4();
    UIWidget__set_height(v9, 20, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v12; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *v21; // x0
  const MethodInfo *v22; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *v24; // x0
  bool v25; // w2
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v27; // x0
  bool v28; // w2
  ListViewSort_o *v29; // x0

  if ( (byte_40FF80A & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_17032, v7);
    sub_B16FFC(&StringLiteral_17031, v8);
    sub_B16FFC(&StringLiteral_5692, v9);
    sub_B16FFC(&StringLiteral_16963, v10);
    byte_40FF80A = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v12 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, method, v2, v3, v4);
  ListViewSort___ctor_30209040(v12, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5692, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_22;
  UILabel__set_text(emptyMessageLabel, v21, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17032, v22);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL);
      v27 = *p_operationSortInfo;
      if ( *p_operationSortInfo )
      {
        v28 = 1;
        goto LABEL_19;
      }
    }
LABEL_22:
    sub_B170D4();
  }
  if ( filterStatus == 1 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17031, v22);
    v24 = this->fields.operationSortInfo;
    if ( !v24 )
      goto LABEL_22;
    v25 = 1;
  }
  else
  {
    if ( filterStatus )
      goto LABEL_20;
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_16963, v22);
    v24 = this->fields.operationSortInfo;
    if ( !v24 )
      goto LABEL_22;
    v25 = 0;
  }
  ListViewSort__SetFilter(v24, 52, v25, 0LL);
  v27 = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_22;
  v28 = 0;
LABEL_19:
  ListViewSort__SetFilter(v27, 53, v28, 0LL);
LABEL_20:
  v29 = this->fields.baseSortInfo;
  if ( !v29 )
    goto LABEL_22;
  ListViewSort__Set(v29, *p_operationSortInfo, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
    (System_Int32_array **)onClickListViewItem,
    (System_String_array **)onClickListViewItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_34533732(this, mode, v10);
}


void __fastcall ShopBuyItemListViewManager__SetMode_34533732(
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


void __fastcall ShopBuyItemListViewManager__SetMode_34535108(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_34533732(this, mode, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__SetMultiEventScrollInfo(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UIPanel_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0
  float v7; // s0
  float v8; // s2
  UnityEngine_Component_o *v9; // x0
  float v10; // s8
  float v11; // s9
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FF813 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_40FF813 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  Component_WebViewObject = (UIPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           scrollView,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    goto LABEL_10;
  v14.fields.x = Component_WebViewObject->fields.mClipRange.fields.x;
  v14.fields.y = Component_WebViewObject->fields.mClipRange.fields.y;
  v14.fields.z = Component_WebViewObject->fields.mClipRange.fields.z;
  v14.fields.w = 400.0;
  UIPanel__set_baseClipRegion(Component_WebViewObject, v14, 0LL);
  v5 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v5
    || (transform = UnityEngine_Component__get_transform(v5, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v9 = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v10 = v7, v11 = v8, (v12 = UnityEngine_Component__get_transform(v9, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v13.fields.y = 16.0;
  v13.fields.x = v10;
  v13.fields.z = v11;
  UnityEngine_Transform__set_localPosition(v12, v13, 0LL);
}


void __fastcall ShopBuyItemListViewManager__SetObjectItem(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t initMode; // w8
  int v7; // w9
  int32_t v8; // w1
  __int64 v9; // x10

  if ( (byte_40FF808 & 1) == 0 )
  {
    sub_B16FFC(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_40FF808 = 1;
  }
  initMode = this->fields.initMode;
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
    sub_B170D4();
  }
  ShopBuyItemListViewObject__Init_34537036((ShopBuyItemListViewObject_o *)obj, v8, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FF809 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_40FF809 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL) )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_B170D4();
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
  UnityEngine_Component_o *scrollView; // x0
  UIPanel_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0
  float v7; // s0
  float v8; // s2
  UnityEngine_Component_o *v9; // x0
  float v10; // s8
  float v11; // s9
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FF812 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_40FF812 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  Component_WebViewObject = (UIPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           scrollView,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    goto LABEL_10;
  v14.fields.x = Component_WebViewObject->fields.mClipRange.fields.x;
  v14.fields.y = Component_WebViewObject->fields.mClipRange.fields.y;
  v14.fields.z = Component_WebViewObject->fields.mClipRange.fields.z;
  v14.fields.w = 470.0;
  UIPanel__set_baseClipRegion(Component_WebViewObject, v14, 0LL);
  v5 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v5
    || (transform = UnityEngine_Component__get_transform(v5, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v9 = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v10 = v7, v11 = v8, (v12 = UnityEngine_Component__get_transform(v9, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v13.fields.y = 82.0;
  v13.fields.x = v10;
  v13.fields.z = v11;
  UnityEngine_Transform__set_localPosition(v12, v13, 0LL);
}


void __fastcall ShopBuyItemListViewManager__StopUpdateRemainTime(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B170D4();
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ClippingObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_GameObject__o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  ShopBuyItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v20; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40FF7FE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FF7FE = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v12;
    if ( v15 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.objectList;
      if ( !v17 )
        goto LABEL_23;
      if ( v15 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->fields._items->obj.klass + v14);
      if ( !v18 )
        goto LABEL_23;
      Component_srcLineSprite = (ShopBuyItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v18,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Item = (ListViewItem_o *)ShopBuyItemListViewObject__GetItem(Component_srcLineSprite, v20);
      if ( Item
        && (!Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL)) )
      {
        if ( !v12 )
          goto LABEL_23;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v21,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
      }
    }
    objectList = this->fields.objectList;
    ++v14;
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
    sub_B170D4();
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_GameObject__o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40FF7FD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FF7FD = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v12;
    if ( v15 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.objectList;
      if ( !v17 )
        goto LABEL_19;
      if ( v15 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->fields._items->obj.klass + v14);
      if ( !v18 )
        goto LABEL_19;
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         v18,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v12 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v14;
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