void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_BC37B0;
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
    this->fields.filterStatus = dword_BFCAB4[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_4AB22F1 )
  {
    sub_1BAB41C(&EventRewardSaveData_TypeInfo, v4);
    byte_4AB22F1 = 1;
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
  ShopEntity_array *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_4AB2267 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4AB2267 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_1BAB678(Instance, v14);
  }
  if ( itemList->fields._size != Instance->max_length )
    ShopBuyItemListViewManager__CreateList_33151812(this, 6, eventId, slot, eventNum, isForcedAdjustment, v15);
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

  ShopBuyItemListViewManager__CreateList_33151812(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_33151812(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_33151812(
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
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x24
  System_Int32_array *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x6
  const MethodInfo *v39; // x4
  ShopEntity_array *ShopEntities; // x27
  System_Collections_Generic_List_object__o *v41; // x22
  System_Collections_Generic_List_object__o *v42; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x26
  int v45; // w20
  int v46; // w23
  ShopEntity_array *v47; // x21
  ShopEntity_o *v48; // x27
  int32_t v49; // w25
  System_Collections_Generic_List_object__o *v50; // x23
  struct System_Int32_array *targetIds; // x28
  __int64 v52; // x8
  unsigned __int64 v53; // x29
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  const MethodInfo *v60; // x3
  System_Collections_Generic_List_object__o *itemList; // x28
  int32_t v62; // w22
  ListViewItem_o *v63; // x29
  const MethodInfo *v64; // x2
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  __int64 v71; // x8
  System_Collections_Generic_List_object__o *v72; // x0
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  int32_t v76; // w25
  System_Collections_Generic_List_object__o *v77; // x26
  int32_t v78; // w21
  Il2CppObject *Item; // x29
  ListViewItem_o *v80; // x27
  const MethodInfo *v81; // x2
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  int32_t v88; // w24
  System_Collections_Generic_List_object__o *v89; // x25
  int32_t v90; // w21
  Il2CppObject *v91; // x28
  ListViewItem_o *v92; // x26
  const MethodInfo *v93; // x2
  int32_t v94; // w2
  int32_t v95; // w3
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v101; // x8
  __int64 v102; // x9
  __int64 v103; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x21
  int32_t v105; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x21
  int32_t v107; // w1
  struct UILabel_o *emptyMessageLabel; // x21
  System_String_o *v109; // x1
  UILabel_o *v110; // x0
  struct UILabel_o *v111; // x22
  System_String_o **v112; // x8
  System_String_o *v113; // x21
  int32_t v114; // w2
  int32_t v115; // w3
  struct ListViewSort_o *sort; // x1
  _BOOL8 v117; // x0
  const MethodInfo *v118; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v120; // [xsp+8h] [xbp-78h]
  bool v121; // [xsp+Ch] [xbp-74h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+10h] [xbp-70h]
  EventRewardSceneEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB2263 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_1BAB41C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v22);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v23);
    sub_1BAB41C(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BAB41C(&StringLiteral_12127/*"SHOP_SPECIAL_LIST_EMPTY"*/, v26);
    sub_1BAB41C(&StringLiteral_12077/*"SHOP_LIST_EMPTY"*/, v27);
    sub_1BAB41C(&StringLiteral_5705/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v28);
    byte_4AB2263 = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v32);
  v30 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v30 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_131;
    Instance = (DataManager_o *)ShopMaster__GetEventItemList(
                                  (ShopMaster_o *)MasterData_object,
                                  this->fields.eventId,
                                  0LL);
    if ( !Instance )
      goto LABEL_131;
    currencyInfoController = this->fields.currencyInfoController;
    v35 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v30);
    if ( !currencyInfoController )
      goto LABEL_131;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1BAB3C0(
      (ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList,
      (int32_t)Instance,
      v36,
      v37);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_131;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v35,
      isForcedAdjustment,
      v38);
    LODWORD(v30) = this->fields.kind;
  }
  v120 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v30,
                                                v33);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v39);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v42 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_131;
  max_length = ShopEntities->max_length;
  if ( max_length < 1 )
  {
    v121 = 0;
    v46 = 0;
    if ( !v42 )
      goto LABEL_131;
    goto LABEL_58;
  }
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v45 = 0;
  v46 = 0;
  v121 = 0;
  do
  {
    if ( v45 >= (unsigned int)max_length )
      goto LABEL_132;
    v47 = ShopEntities;
    v48 = ShopEntities->m_Items[v45];
    if ( !v48 )
      goto LABEL_131;
    v49 = v46;
    v50 = v41;
    if ( v48->fields.purchaseType == 6 )
    {
      targetIds = v48->fields.targetIds;
      if ( !targetIds )
        goto LABEL_131;
      v52 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v52 >= 1 )
      {
        v53 = 0LL;
        while ( v53 < (unsigned int)v52 )
        {
          if ( !v44 )
            goto LABEL_131;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        v44,
                                        targetIds->m_Items[v53 + 1],
                                        (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_43;
          LODWORD(v52) = targetIds->max_length;
          if ( (__int64)++v53 >= (int)v52 )
            goto LABEL_24;
        }
LABEL_132:
        sub_1BAB680(Instance, v30);
      }
    }
LABEL_24:
    if ( v121 )
    {
      v121 = 1;
    }
    else
    {
      v121 = v48->fields.purchaseType == 16;
      this->fields.targetSlot = v48->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v48, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(v48, 0LL) )
    {
      Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v48, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v41 )
          goto LABEL_131;
        items = v41->fields._items;
        v74 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v41->fields._version;
        if ( !items )
          goto LABEL_131;
        size = v41->fields._size;
        v46 = v49;
        if ( (unsigned int)size < items->max_length )
        {
          v59 = &items->obj.klass + size;
          v41->fields._size = size + 1;
          goto LABEL_48;
        }
        v71 = v74[4];
        v72 = v41;
LABEL_52:
        System_Collections_Generic_List_object___AddWithResize(
          v72,
          (Il2CppObject *)v48,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v71 + 192) + 112LL));
        goto LABEL_53;
      }
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v48, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_131;
      v56 = v42->fields._items;
      v57 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v42->fields._version;
      if ( !v56 )
        goto LABEL_131;
      v58 = v42->fields._size;
      v46 = v49;
      if ( (unsigned int)v58 < v56->max_length )
      {
        v59 = &v56->obj.klass + v58;
        v42->fields._size = v58 + 1;
LABEL_48:
        v59[4] = (Il2CppClass *)v48;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v48, v54, v55);
        goto LABEL_53;
      }
      v71 = v57[4];
      v72 = v42;
      goto LABEL_52;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v48, 0LL);
    if ( (int)Instance >= 1
      && (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v48, (int32_t)Instance, v60),
          ((unsigned __int8)Instance & 1) != 0)
      || v48->fields.id < 1 )
    {
LABEL_43:
      v46 = v49;
LABEL_53:
      ShopEntities = v47;
      goto LABEL_54;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v62 = this->fields.kind;
    v63 = (ListViewItem_o *)sub_1BAB668(ShopBuyItemListViewItem_TypeInfo);
    ListViewItem___ctor_41102532(v63, v49, 0LL);
    v63[1].fields.sortIndex = v62;
    v63[1].fields.sortValue0 = (int64_t)EnterTime;
    ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v63, v48, v64);
    if ( !itemList )
      goto LABEL_131;
    v67 = itemList->fields._items;
    v68 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !v67 )
      goto LABEL_131;
    v69 = itemList->fields._size;
    v41 = v50;
    ShopEntities = v47;
    if ( (unsigned int)v69 >= v67->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v63,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v67->obj.klass + v69;
      itemList->fields._size = v69 + 1;
      v70[4] = (Il2CppClass *)v63;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v63, v65, v66);
    }
    v46 = v49 + 1;
LABEL_54:
    max_length = ShopEntities->max_length;
    ++v45;
  }
  while ( v45 < max_length );
  if ( !v42 )
    goto LABEL_131;
LABEL_58:
  if ( v42->fields._size >= 1 )
  {
    v76 = 0;
    do
    {
      v77 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v78 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v42,
               v76,
               (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v80 = (ListViewItem_o *)sub_1BAB668(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_41102532(v80, v46 + v76, 0LL);
      v80[1].fields.sortIndex = v78;
      v80[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v80, (ShopEntity_o *)Item, v81);
      if ( !v77 )
        goto LABEL_131;
      v84 = v77->fields._items;
      v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v77->fields._version;
      if ( !v84 )
        goto LABEL_131;
      v86 = v77->fields._size;
      if ( (unsigned int)v86 >= v84->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v77,
          (Il2CppObject *)v80,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = &v84->obj.klass + v86;
        v77->fields._size = v86 + 1;
        v87[4] = (Il2CppClass *)v80;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v87 + 4), (int32_t)v80, v82, v83);
      }
      ++v76;
    }
    while ( v76 < v42->fields._size );
    v46 += v76;
  }
  if ( !v41 )
    goto LABEL_131;
  if ( v41->fields._size >= 1 )
  {
    v88 = 0;
    do
    {
      v89 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v90 = this->fields.kind;
      v91 = System_Collections_Generic_List_object___get_Item(
              v41,
              v88,
              (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v92 = (ListViewItem_o *)sub_1BAB668(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_41102532(v92, v46 + v88, 0LL);
      v92[1].fields.sortIndex = v90;
      v92[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v92, (ShopEntity_o *)v91, v93);
      if ( !v89 )
        goto LABEL_131;
      v96 = v89->fields._items;
      v97 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v89->fields._version;
      if ( !v96 )
        goto LABEL_131;
      v98 = v89->fields._size;
      if ( (unsigned int)v98 >= v96->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v89,
          (Il2CppObject *)v92,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
      }
      else
      {
        v99 = &v96->obj.klass + v98;
        v89->fields._size = v98 + 1;
        v99[4] = (Il2CppClass *)v92;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v99 + 4), (int32_t)v92, v94, v95);
      }
    }
    while ( ++v88 < v41->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollBar;
      if ( !Instance )
        goto LABEL_131;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_131;
      v101 = 348LL;
      if ( v120 == 1 )
        v101 = 336LL;
      if ( v120 == 1 )
        v102 = 332LL;
      else
        v102 = 344LL;
      if ( v120 == 1 )
        v103 = 328LL;
      else
        v103 = 340LL;
      v124.fields.z = *(float *)((char *)&this->klass + v101);
      v124.fields.y = *(float *)((char *)&this->klass + v102);
      v124.fields.x = *(float *)((char *)&this->klass + v103);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v124, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_131;
      if ( v120 == 1 )
        v105 = 338;
      else
        v105 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v105, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_131;
      if ( v120 == 1 )
        v107 = 348;
      else
        v107 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v107, 0LL);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5705/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
    if ( emptyMessageLabel )
    {
      v109 = (System_String_o *)Instance;
      v110 = emptyMessageLabel;
      goto LABEL_118;
    }
LABEL_131:
    sub_1BAB678(Instance, v30);
  }
  v111 = this->fields.emptyMessageLabel;
  if ( this->fields.kind == 12 )
    v112 = (System_String_o **)&StringLiteral_12127/*"SHOP_SPECIAL_LIST_EMPTY"*/;
  else
    v112 = (System_String_o **)&StringLiteral_12077/*"SHOP_LIST_EMPTY"*/;
  v113 = *v112;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v113, 0LL);
  if ( !v111 )
    goto LABEL_131;
  v109 = (System_String_o *)Instance;
  v110 = v111;
LABEL_118:
  UILabel__set_text(v110, v109, 0LL);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v114, v115);
  }
  if ( !v121 )
    goto LABEL_129;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_131;
  v117 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0LL);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v117 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v117, this->fields.filterBtn, 1, v118);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
      if ( !byte_4AB22EE )
      {
        sub_1BAB41C(&EventRewardSaveData_TypeInfo, sort);
        byte_4AB22EE = 1;
      }
      ItemFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
      goto LABEL_130;
    }
LABEL_129:
    ItemFilterId_k__BackingField = 0;
  }
LABEL_130:
  this->fields.filterStatus = ItemFilterId_k__BackingField;
  ShopBuyItemListViewManager__SetList(this, (const MethodInfo *)sort);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_33154372(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_33151812(this, 6, eventId, 0, 0, 0, v3);
}


void __fastcall ShopBuyItemListViewManager__FocusTopItem(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t IndexByItemId; // w0
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4AB2264 & 1) == 0 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
    byte_4AB2264 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB22EF )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
    byte_4AB22EF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_ShopFocusItemId_k__BackingField >= 1 )
  {
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_4AB22EF )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
      byte_4AB22EF = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    IndexByItemId = ShopBuyItemListViewManager__GetIndexByItemId(
                      this,
                      v5->static_fields->_ShopFocusItemId_k__BackingField,
                      v2);
    if ( (IndexByItemId & 0x80000000) == 0 )
      ListViewManager__SetTopItem((ListViewManager_o *)this, IndexByItemId, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AB22F0 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v7);
      byte_4AB22F0 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_ShopFocusItemId_k__BackingField = 0;
  }
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BFCAC0[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BFCB10[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4AB2265 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_4AB2265 = 1;
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4AB226D & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, *(_QWORD *)&itemId);
    sub_1BAB41C(&System_Predicate_ListViewItem__TypeInfo, v5);
    sub_1BAB41C(&Method_ShopBuyItemListViewManager___c__DisplayClass47_0__GetIndexByItemId_b__0__, v6);
    sub_1BAB41C(&ShopBuyItemListViewManager___c__DisplayClass47_0_TypeInfo, v7);
    byte_4AB226D = 1;
  }
  v8 = sub_1BAB668(ShopBuyItemListViewManager___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_DWORD *)(v8 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v13 = (System_Predicate_object__o *)sub_1BAB668(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_ShopBuyItemListViewManager___c__DisplayClass47_0__GetIndexByItemId_b__0__,
    0LL);
  if ( !itemList )
LABEL_9:
    sub_1BAB678(v9, v10);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_354E114 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v11; // x1
  int32_t PayType; // w0

  if ( (byte_4AB2279 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AB2279 = 1;
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
    case 16:
    case 18:
    case 19:
      return result;
    case 4:
    case 13:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_1BAB678(Instance, v9);
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
  ShopBuyItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4AB226C & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BAB41C(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_4AB226C = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4AB2273 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_1BAB41C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v5);
    byte_4AB2273 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v7 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v7;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopEntity_array *Instance; // x0
  __int64 v5; // x1
  ShopEntity_o *v6; // x8

  if ( (byte_4AB2276 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4AB2276 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_1BAB678(Instance, v5);
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

  if ( (byte_4AB2266 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AB2266 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1BAB678(Instance, v10);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    case 18:
      if ( !Instance )
        goto LABEL_37;
      v11 = 14;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 20:
      if ( !Instance )
        goto LABEL_37;
      v11 = 15;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
    case 21:
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  bool v9; // w0
  Il2CppObject *Component_object; // x21

  if ( (byte_4AB226B & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB226B = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1BAB678(objectList, method);
  v7 = 0;
  while ( v7 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v7,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
      ShopBuyItemListViewObject__SetupDisp((ShopBuyItemListViewObject_o *)Component_object, method);
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

  return ShopBuyItemListViewManager__ModifyList_33158116(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_4AB2268 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BAB41C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AB2268 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_3163D90 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0LL),
        !Entity) )
  {
    sub_1BAB678(Instance, v7);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_33151812(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v13);
  ShopBuyItemListViewManager__SetMode_33159080(this, 2, v14);
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

  if ( (byte_4AB226A & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BAB41C(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_4AB226A = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1BAB678(itemList, shopEntity);
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  return ShopBuyItemListViewManager__ModifyList_33158116(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_33158116(
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
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v35; // x27
  const MethodInfo *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  ShopCurrencyInfoController_o *v39; // x28
  _BOOL4 isEventShop; // w29
  const MethodInfo *v41; // x6
  int m_CancellationTokenSource; // w8
  __int64 v43; // x27
  ShopEntity_o *v44; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v46; // x3

  if ( (byte_4AB2269 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1BAB41C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4AB2269 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)ShopBuyItemListViewManager__GetShopEntities(
                                (ShopBuyItemListViewManager_o *)MasterData_object,
                                kind,
                                0,
                                0,
                                v20);
  v23 = Instance;
  if ( kind == 6 )
  {
    if ( MasterData_object )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, eventId, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_3163D90 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v35 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v36);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1BAB3C0(
              (ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList,
              (int32_t)Instance,
              v37,
              v38);
            if ( v35 )
            {
              v39 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v35, 0LL);
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
    sub_1BAB678(Instance, v18);
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
  if ( size < 1 || size == LODWORD(Instance->fields.m_CancellationTokenSource) )
  {
LABEL_20:
    m_CancellationTokenSource = (int)v23->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
    {
      v43 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v43 >= m_CancellationTokenSource )
          sub_1BAB680(Instance, v18);
        v44 = (ShopEntity_o *)*((_QWORD *)&v23->fields._DispLog + v43);
        if ( !v44 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      *((ShopEntity_o **)&v23->fields._DispLog + v43),
                                      v44->fields.id,
                                      v21);
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
        m_CancellationTokenSource = (int)v23->fields.m_CancellationTokenSource;
        if ( (int)++v43 >= m_CancellationTokenSource )
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
  ShopBuyItemListViewManager__CreateList_33151812(v26, v27, v28, v29, v30, v31, v22);
  return 0;
}


void __fastcall ShopBuyItemListViewManager__OnClickListView(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Action_int__o *onClickListViewItem; // x20
  ServantStatusBattleListViewItem_o *p_onClickListViewItem; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned int Index; // w0

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    p_onClickListViewItem = (ServantStatusBattleListViewItem_o *)&this->fields.onClickListViewItem;
    p_onClickListViewItem->klass = 0LL;
    sub_1BAB3C0(p_onClickListViewItem, 0, (int32_t)method, v3);
    if ( !obj )
      sub_1BAB678(v7, v8);
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
  int32_t v15; // w3
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4AB2275 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB2275 = 1;
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
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd, 0, v14, v15);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_18:
      sub_1BAB678(emptyMessageBase, v10);
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
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t size; // w8
  int32_t v17; // w20
  Il2CppObject *Item; // x23
  System_Action_o *v19; // x24
  const MethodInfo *v20; // x3
  float v21; // s0

  if ( (byte_4AB2274 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_1BAB41C(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v8);
    byte_4AB2274 = 1;
  }
  v9 = 6;
  switch ( initMode )
  {
    case 1:
      v10 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v11);
      v14 = 0.1;
      v15 = (System_Collections_Generic_List_object__o *)ObjectList;
      v9 = 4;
      goto LABEL_12;
    case 2:
      v9 = 3;
      goto LABEL_9;
    case 3:
      v9 = 5;
      goto LABEL_9;
    case 4:
      goto LABEL_9;
    case 5:
      v9 = 7;
      goto LABEL_9;
    default:
      v9 = 0;
LABEL_9:
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, initMode, method);
      v15 = (System_Collections_Generic_List_object__o *)ObjectList;
      v10 = 0;
      if ( (unsigned int)(initMode - 3) >= 2 )
        v14 = 0.0;
      else
        v14 = 0.1;
LABEL_12:
      if ( !v15 )
        goto LABEL_23;
      size = v15->fields._size;
      this->fields.callbackCount = size;
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
          (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
          v21,
          0LL);
      }
      else
      {
        v17 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v15,
                   v17,
                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v19 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
LABEL_23:
            sub_1BAB678(ObjectList, v13);
          ShopBuyItemListViewObject__Init_33162212((ShopBuyItemListViewObject_o *)Item, v9, v19, v14, v20);
          ++v17;
        }
        while ( v17 < v15->fields._size );
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
      sub_1BAB678(0LL, initMode);
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

  if ( (byte_4AB2272 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_4AB2272 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_1BAB678(gameObject, v7);
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

  if ( (byte_4AB2271 & 1) == 0 )
  {
    sub_1BAB41C(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB2271 = 1;
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
      sub_1BAB678(v9, v8);
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
  int32_t v11; // w2
  int32_t v12; // w3
  UILabel_o *emptyMessageLabel; // x21
  ListViewSort_o *operationSortInfo; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t filterStatus; // w8
  bool v18; // w2
  bool v19; // w2

  if ( (byte_4AB2270 & 1) == 0 )
  {
    sub_1BAB41C(&ListViewSort_TypeInfo, method);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_17652/*"btn_txt_stock_02"*/, v4);
    sub_1BAB41C(&StringLiteral_17651/*"btn_txt_stock"*/, v5);
    sub_1BAB41C(&StringLiteral_5705/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v6);
    sub_1BAB41C(&StringLiteral_17581/*"btn_txt_all"*/, v7);
    byte_4AB2270 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v9 = (ListViewSort_o *)sub_1BAB668(ListViewSort_TypeInfo);
  ListViewSort___ctor_41136808(v9, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v9;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v9, v11, v12);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5705/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_21;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)operationSortInfo, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17652/*"btn_txt_stock_02"*/, v16);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( *p_operationSortInfo )
      {
        v19 = 1;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1BAB678(operationSortInfo, v15);
  }
  if ( filterStatus == 1 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17651/*"btn_txt_stock"*/, v16);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_21;
    v18 = 1;
  }
  else
  {
    if ( filterStatus )
      goto LABEL_19;
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17581/*"btn_txt_all"*/, v16);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_21;
    v18 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 52, v18, 0LL);
  operationSortInfo = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_21;
  v19 = 0;
LABEL_18:
  ListViewSort__SetFilter(operationSortInfo, 53, v19, 0LL);
LABEL_19:
  operationSortInfo = this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_21;
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
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)method);
  ShopBuyItemListViewManager__SetMode_33159080(this, mode, v6);
}


void __fastcall ShopBuyItemListViewManager__SetMode_33159080(
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


void __fastcall ShopBuyItemListViewManager__SetMode_33160352(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ShopBuyItemListViewManager__SetMode_33159080(this, mode, v7);
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

  if ( (byte_4AB2278 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4AB2278 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BAB678(scrollView, method);
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
  if ( (byte_4AB226E & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1BAB41C(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_4AB226E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1BAB678(this, obj);
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
  ShopBuyItemListViewObject__Init_33162212((ShopBuyItemListViewObject_o *)obj, v9, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4AB226F & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_4AB226F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1BAB678(gameObject, v7);
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

  if ( (byte_4AB2277 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4AB2277 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BAB678(scrollView, method);
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
    sub_1BAB678(0LL, method);
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
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4AB2262 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BAB41C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v8);
    byte_4AB2262 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BAB678(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v14 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopBuyItemListViewObject__GetItem(
                                                                  (ShopBuyItemListViewObject_o *)objectList,
                                                                  v10);
      if ( objectList )
      {
        v10 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41118488(
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
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
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
    sub_1BAB678(this, method);
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
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4AB2261 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BAB41C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v8);
    byte_4AB2261 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BAB678(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
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


void __fastcall ShopBuyItemListViewManager___c__DisplayClass47_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass47_0___GetIndexByItemId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass47_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int64_t sortValue1; // x8

  if ( (byte_4AB227A & 1) == 0 )
  {
    sub_1BAB41C(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4AB227A = 1;
  }
  if ( n
    && (methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(n->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewItem_TypeInfo )
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