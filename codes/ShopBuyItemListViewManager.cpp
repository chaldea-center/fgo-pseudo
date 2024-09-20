void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_BB4CA0;
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816LL;
  this->fields.listInDelay = 0.1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__ChangeFilter(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 filterStatus; // x8
  int32_t v4; // w20

  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 2 )
    this->fields.filterStatus = dword_BED9EC[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v4 = this->fields.filterStatus;
  if ( !byte_4A577EB )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A577EB = 1;
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
  ShopEntity_array *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_4A57759 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57759 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_1B8880C(Instance, v12);
  }
  if ( itemList->fields._size != Instance->max_length )
    ShopBuyItemListViewManager__CreateList_32863576(this, 6, eventId, slot, eventNum, isForcedAdjustment, v13);
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

  ShopBuyItemListViewManager__CreateList_32863576(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_32863576(this, kind, 0, 0, 0, 0, v3);
}


void __fastcall ShopBuyItemListViewManager__CreateList_32863576(
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
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x24
  System_Int32_array *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x6
  const MethodInfo *v23; // x4
  ShopEntity_array *ShopEntities; // x25
  System_Collections_Generic_List_object__o *v25; // x22
  System_Collections_Generic_List_object__o *v26; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x26
  int v29; // w20
  int32_t v30; // w19
  ShopEntity_o *v31; // x27
  System_Collections_Generic_List_object__o *v32; // x23
  struct System_Int32_array *targetIds; // x28
  __int64 v34; // x8
  unsigned __int64 v35; // x29
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  const MethodInfo *v42; // x3
  System_Collections_Generic_List_object__o *itemList; // x28
  int32_t v44; // w22
  ListViewItem_o *v45; // x29
  const MethodInfo *v46; // x2
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x8
  System_Collections_Generic_List_object__o *v54; // x0
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  int32_t v58; // w25
  System_Collections_Generic_List_object__o *v59; // x26
  int32_t v60; // w21
  Il2CppObject *Item; // x29
  ListViewItem_o *v62; // x27
  const MethodInfo *v63; // x2
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  int32_t v70; // w24
  System_Collections_Generic_List_object__o *v71; // x25
  int32_t v72; // w21
  Il2CppObject *v73; // x28
  ListViewItem_o *v74; // x26
  const MethodInfo *v75; // x2
  int32_t v76; // w2
  int32_t v77; // w3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v83; // x8
  __int64 v84; // x9
  __int64 v85; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x21
  int32_t v87; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x21
  int32_t v89; // w1
  struct UILabel_o *emptyMessageLabel; // x21
  System_String_o *v91; // x1
  UILabel_o *v92; // x0
  struct UILabel_o *v93; // x22
  System_String_o **v94; // x8
  System_String_o *v95; // x21
  int32_t v96; // w2
  int32_t v97; // w3
  struct ListViewSort_o *sort; // x1
  _BOOL8 v99; // x0
  const MethodInfo *v100; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  const MethodInfo *v102; // x2
  TerminalPramsManager_c *v103; // x0
  TerminalPramsManager_c *v104; // x0
  int32_t IndexByItemId; // w0
  TerminalPramsManager_c *v106; // x0
  int32_t v107; // [xsp+0h] [xbp-80h]
  bool v108; // [xsp+4h] [xbp-7Ch]
  ShopBuyItemListViewManager_o *v109; // [xsp+8h] [xbp-78h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+10h] [xbp-70h]
  EventRewardSceneEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57756 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopBuyItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12100/*"SHOP_SPECIAL_LIST_EMPTY"*/);
    sub_1B885B0(&StringLiteral_12061/*"SHOP_LIST_EMPTY"*/);
    sub_1B885B0(&StringLiteral_5703/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_4A57756 = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v16);
  v14 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v14 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_153;
    Instance = (DataManager_o *)ShopMaster__GetEventItemList(
                                  (ShopMaster_o *)MasterData_object,
                                  this->fields.eventId,
                                  0LL);
    if ( !Instance )
      goto LABEL_153;
    currencyInfoController = this->fields.currencyInfoController;
    v19 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v14);
    if ( !currencyInfoController )
      goto LABEL_153;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList,
      (int32_t)Instance,
      v20,
      v21);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_153;
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
  v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_153;
  max_length = ShopEntities->max_length;
  v109 = this;
  if ( max_length < 1 )
  {
    v108 = 0;
    v30 = 0;
    if ( !v26 )
      goto LABEL_153;
    goto LABEL_58;
  }
  v108 = 0;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v29 = 0;
  v30 = 0;
  do
  {
    if ( v29 >= (unsigned int)max_length )
      goto LABEL_154;
    v31 = ShopEntities->m_Items[v29];
    if ( !v31 )
      goto LABEL_153;
    v32 = v25;
    if ( v31->fields.purchaseType == 6 )
    {
      targetIds = v31->fields.targetIds;
      if ( !targetIds )
        goto LABEL_153;
      v34 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v34 >= 1 )
      {
        v35 = 0LL;
        while ( v35 < (unsigned int)v34 )
        {
          if ( !v28 )
            goto LABEL_153;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        v28,
                                        targetIds->m_Items[v35 + 1],
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_51;
          LODWORD(v34) = targetIds->max_length;
          if ( (__int64)++v35 >= (int)v34 )
            goto LABEL_24;
        }
LABEL_154:
        sub_1B88814(Instance, v14);
      }
    }
LABEL_24:
    this = v109;
    if ( v108 )
    {
      v108 = 1;
    }
    else
    {
      v108 = v31->fields.purchaseType == 16;
      v109->fields.targetSlot = v31->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v31, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(v31, 0LL) )
    {
      Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v31, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v25 )
          goto LABEL_153;
        items = v25->fields._items;
        v56 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v25->fields._version;
        if ( !items )
          goto LABEL_153;
        size = v25->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v41 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          goto LABEL_48;
        }
        v53 = v56[4];
        v54 = v25;
        goto LABEL_53;
      }
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v31, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_153;
      v38 = v26->fields._items;
      v39 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v26->fields._version;
      if ( !v38 )
        goto LABEL_153;
      v40 = v26->fields._size;
      if ( (unsigned int)v40 < v38->max_length )
      {
        v41 = &v38->obj.klass + v40;
        v26->fields._size = v40 + 1;
LABEL_48:
        v41[4] = (Il2CppClass *)v31;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v31, v36, v37);
        goto LABEL_54;
      }
      v53 = v39[4];
      v54 = v26;
LABEL_53:
      System_Collections_Generic_List_object___AddWithResize(
        v54,
        (Il2CppObject *)v31,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v53 + 192) + 112LL));
      goto LABEL_54;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v31, 0LL);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(v109, v31, (int32_t)Instance, v42),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v31->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v109->fields.itemList;
        v44 = v109->fields.kind;
        v45 = (ListViewItem_o *)sub_1B887FC(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_40706472(v45, v30, 0LL);
        v45[1].fields.sortIndex = v44;
        v45[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v45, v31, v46);
        if ( !itemList )
          goto LABEL_153;
        v49 = itemList->fields._items;
        v50 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v49 )
          goto LABEL_153;
        v51 = itemList->fields._size;
        v25 = v32;
        if ( (unsigned int)v51 >= v49->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v45,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &v49->obj.klass + v51;
          itemList->fields._size = v51 + 1;
          v52[4] = (Il2CppClass *)v45;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v45, v47, v48);
        }
        ++v30;
LABEL_51:
        this = v109;
      }
    }
LABEL_54:
    max_length = ShopEntities->max_length;
    ++v29;
  }
  while ( v29 < max_length );
  if ( !v26 )
    goto LABEL_153;
LABEL_58:
  if ( v26->fields._size >= 1 )
  {
    v58 = 0;
    do
    {
      v59 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v60 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v26,
               v58,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v62 = (ListViewItem_o *)sub_1B887FC(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_40706472(v62, v30 + v58, 0LL);
      v62[1].fields.sortIndex = v60;
      v62[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v62, (ShopEntity_o *)Item, v63);
      if ( !v59 )
        goto LABEL_153;
      v66 = v59->fields._items;
      v67 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v59->fields._version;
      if ( !v66 )
        goto LABEL_153;
      v68 = v59->fields._size;
      this = v109;
      if ( (unsigned int)v68 >= v66->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          (Il2CppObject *)v62,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &v66->obj.klass + v68;
        v59->fields._size = v68 + 1;
        v69[4] = (Il2CppClass *)v62;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 4), (int32_t)v62, v64, v65);
      }
      ++v58;
    }
    while ( v58 < v26->fields._size );
    v30 += v58;
  }
  if ( !v25 )
    goto LABEL_153;
  if ( v25->fields._size >= 1 )
  {
    v70 = 0;
    do
    {
      v71 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v72 = this->fields.kind;
      v73 = System_Collections_Generic_List_object___get_Item(
              v25,
              v70,
              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v74 = (ListViewItem_o *)sub_1B887FC(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_40706472(v74, v30 + v70, 0LL);
      v74[1].fields.sortIndex = v72;
      v74[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v74, (ShopEntity_o *)v73, v75);
      if ( !v71 )
        goto LABEL_153;
      v78 = v71->fields._items;
      v79 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v71->fields._version;
      if ( !v78 )
        goto LABEL_153;
      v80 = v71->fields._size;
      if ( (unsigned int)v80 >= v78->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v71,
          (Il2CppObject *)v74,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = &v78->obj.klass + v80;
        v71->fields._size = v80 + 1;
        v81[4] = (Il2CppClass *)v74;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v74, v76, v77);
      }
    }
    while ( ++v70 < v25->fields._size );
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
        goto LABEL_153;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_153;
      v83 = 348LL;
      if ( v107 == 1 )
        v83 = 336LL;
      if ( v107 == 1 )
        v84 = 332LL;
      else
        v84 = 344LL;
      if ( v107 == 1 )
        v85 = 328LL;
      else
        v85 = 340LL;
      v112.fields.z = *(float *)((char *)&this->klass + v83);
      v112.fields.y = *(float *)((char *)&this->klass + v84);
      v112.fields.x = *(float *)((char *)&this->klass + v85);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v112, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_153;
      if ( v107 == 1 )
        v87 = 338;
      else
        v87 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v87, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_153;
      if ( v107 == 1 )
        v89 = 348;
      else
        v89 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v89, 0LL);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
    if ( emptyMessageLabel )
    {
      v91 = (System_String_o *)Instance;
      v92 = emptyMessageLabel;
      goto LABEL_118;
    }
LABEL_153:
    sub_1B8880C(Instance, v14);
  }
  v93 = this->fields.emptyMessageLabel;
  if ( this->fields.kind == 12 )
    v94 = (System_String_o **)&StringLiteral_12100/*"SHOP_SPECIAL_LIST_EMPTY"*/;
  else
    v94 = (System_String_o **)&StringLiteral_12061/*"SHOP_LIST_EMPTY"*/;
  v95 = *v94;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v95, 0LL);
  if ( !v93 )
    goto LABEL_153;
  v91 = (System_String_o *)Instance;
  v92 = v93;
LABEL_118:
  UILabel__set_text(v92, v91, 0LL);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v96, v97);
  }
  if ( !v108 )
    goto LABEL_129;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_153;
  v99 = EventRewardSceneMaster__TryGetEntity(
          (EventRewardSceneMaster_o *)Instance,
          &entity,
          this->fields.eventId,
          this->fields.targetSlot,
          0LL);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v99 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v99, this->fields.filterBtn, 1, v100);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
      if ( !byte_4A577E8 )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A577E8 = 1;
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
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A577E9 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A577E9 = 1;
  }
  v103 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v103 = TerminalPramsManager_TypeInfo;
  }
  if ( v103->static_fields->_ShopFocusItemId_k__BackingField >= 1 )
  {
    if ( !v103->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v103);
    if ( !byte_4A577E9 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A577E9 = 1;
    }
    v104 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v104 = TerminalPramsManager_TypeInfo;
    }
    IndexByItemId = ShopBuyItemListViewManager__GetIndexByItemId(
                      this,
                      v104->static_fields->_ShopFocusItemId_k__BackingField,
                      v102);
    if ( (IndexByItemId & 0x80000000) == 0 )
      ListViewManager__SetTopItem((ListViewManager_o *)this, IndexByItemId, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A577EA )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A577EA = 1;
    }
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->_ShopFocusItemId_k__BackingField = 0;
  }
}


void __fastcall ShopBuyItemListViewManager__CreateList_32866404(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_32863576(this, 6, eventId, 0, 0, 0, v3);
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BED9F8[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BEDA48[state - 2];
}


int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4A57757 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A57757 = 1;
  }
  if ( (unsigned int)kind > 9 || ((1 << kind) & 0x304) == 0 )
    return -1LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL);
}


int32_t __fastcall ShopBuyItemListViewManager__GetIndexByItemId(
        ShopBuyItemListViewManager_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Predicate_object__o *v10; // x20

  if ( (byte_4A5775F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_1B885B0(&System_Predicate_ListViewItem__TypeInfo);
    sub_1B885B0(&Method_ShopBuyItemListViewManager___c__DisplayClass46_0__GetIndexByItemId_b__0__);
    sub_1B885B0(&ShopBuyItemListViewManager___c__DisplayClass46_0_TypeInfo);
    byte_4A5775F = 1;
  }
  v5 = sub_1B887FC(ShopBuyItemListViewManager___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_DWORD *)(v5 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v10 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass46_0__GetIndexByItemId_b__0__,
    0LL);
  if ( !itemList )
LABEL_9:
    sub_1B8880C(v6, v7);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v10,
           (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v10; // x1
  int32_t PayType; // w0

  if ( (byte_4A5776B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5776B = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_1B8880C(Instance, v8);
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
  ShopBuyItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5775E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ShopBuyItemListViewItem_TypeInfo);
    byte_4A5775E = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Collections_Generic_List_object__o *v6; // x19

  if ( (byte_4A57765 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    byte_4A57765 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v6;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  ShopEntity_o *v5; // x8

  if ( (byte_4A57768 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57768 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, eventId, 0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( (int)Instance->max_length >= 1 )
  {
    v5 = Instance->m_Items[0];
    if ( v5 )
      return v5->fields.payType;
LABEL_10:
    sub_1B8880C(Instance, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2

  if ( (byte_4A57758 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57758 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1B8880C(Instance, v9);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v4; // w20
  Il2CppObject *Item; // x21
  bool v6; // w0
  Il2CppObject *Component_object; // x21

  if ( (byte_4A5775D & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5775D = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1B8880C(objectList, method);
  v4 = 0;
  while ( v4 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v4,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
    Component_object = 0LL;
    if ( v6 )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_18;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v4,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
    ++v4;
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

  return ShopBuyItemListViewManager__ModifyList_32869828(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__ModifyFilterList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5775A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5775A = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0LL),
        !Entity) )
  {
    sub_1B8880C(Instance, v4);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_32863576(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v10);
  ShopBuyItemListViewManager__SetMode_32870792(this, 2, v11);
}


bool __fastcall ShopBuyItemListViewManager__ModifyItem(
        ShopBuyItemListViewManager_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w22
  const MethodInfo *v9; // x2
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8

  if ( (byte_4A5775C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ShopBuyItemListViewItem_TypeInfo);
    byte_4A5775C = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1B8880C(itemList, shopEntity);
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v8,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      ++v8;
      if ( !itemList )
        goto LABEL_13;
    }
    ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)itemList, shopEntity, v9);
  }
  return 1;
}


bool __fastcall ShopBuyItemListViewManager__ModifyList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  return ShopBuyItemListViewManager__ModifyList_32869828(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


bool __fastcall ShopBuyItemListViewManager__ModifyList_32869828(
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
  int32_t v34; // w3
  ShopCurrencyInfoController_o *v35; // x28
  _BOOL4 isEventShop; // w29
  const MethodInfo *v37; // x6
  int m_CancellationTokenSource; // w8
  __int64 v39; // x27
  ShopEntity_o *v40; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v42; // x3

  if ( (byte_4A5775B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5775B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
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
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, eventId, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v31 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v32);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList,
              (int32_t)Instance,
              v33,
              v34);
            if ( v31 )
            {
              v35 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v31, 0LL);
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
    sub_1B8880C(Instance, v14);
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
    m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
    {
      v39 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v39 >= m_CancellationTokenSource )
          sub_1B88814(Instance, v14);
        v40 = (ShopEntity_o *)*((_QWORD *)&v19->fields._DispLog + v39);
        if ( !v40 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      *((ShopEntity_o **)&v19->fields._DispLog + v39),
                                      v40->fields.id,
                                      v17);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v40, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v40, 0LL);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v40, PurchaseShop, v42);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
        if ( (int)++v39 >= m_CancellationTokenSource )
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
  ShopBuyItemListViewManager__CreateList_32863576(v22, v23, v24, v25, v26, v27, v18);
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
    sub_1B88554(p_onClickListViewItem, 0, (int32_t)method, v3);
    if ( !obj )
      sub_1B8880C(v7, v8);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickListViewItem->fields.m_target)(
      onClickListViewItem->fields.original_method_info,
      Index,
      *(_QWORD *)&onClickListViewItem->fields.extra_arg);
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4A57767 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57767 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
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
          goto LABEL_18;
        UnityEngine_GameObject__SetActive(emptyMessageBase, v8, 0LL);
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
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd, 0, v13, v14);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_18:
      sub_1B8880C(emptyMessageBase, v9);
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
  System_Collections_Generic_List_object__o *v11; // x22
  int32_t size; // w8
  int32_t v13; // w20
  Il2CppObject *Item; // x23
  System_Action_o *v15; // x24
  const MethodInfo *v16; // x3
  float v17; // s0

  if ( (byte_4A57766 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_1B885B0(&Method_ShopBuyItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57766 = 1;
  }
  v5 = 6;
  switch ( initMode )
  {
    case 1:
      v6 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
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
          (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
          v17,
          0LL);
      }
      else
      {
        v13 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v11,
                   v13,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
LABEL_23:
            sub_1B8880C(ObjectList, v9);
          ShopBuyItemListViewObject__Init_32873924((ShopBuyItemListViewObject_o *)Item, v5, v15, v10, v16);
          ++v13;
        }
        while ( v13 < v11->fields._size );
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
      sub_1B8880C(0LL, initMode);
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

  if ( (byte_4A57764 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57764 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_1B8880C(gameObject, v7);
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

  if ( (byte_4A57763 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57763 = 1;
  }
  filterTxtSprite = (UnityEngine_Object_o *)this->fields.filterTxtSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(filterTxtSprite, 0LL, 0LL) )
  {
    v6 = this->fields.filterTxtSprite;
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v6, targetFile, 0LL);
    v8 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v8 || (UIWidget__set_width(v8, 52, 0LL), (v8 = (UIWidget_o *)this->fields.filterTxtSprite) == 0LL) )
      sub_1B8880C(v8, v7);
    UIWidget__set_height(v8, 20, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  UILabel_o *emptyMessageLabel; // x21
  ListViewSort_o *operationSortInfo; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t filterStatus; // w8
  bool v13; // w2
  bool v14; // w2

  if ( (byte_4A57762 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17622/*"btn_txt_stock_02"*/);
    sub_1B885B0(&StringLiteral_17621/*"btn_txt_stock"*/);
    sub_1B885B0(&StringLiteral_5703/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    sub_1B885B0(&StringLiteral_17551/*"btn_txt_all"*/);
    byte_4A57762 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759792(v4, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_21;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)operationSortInfo, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17622/*"btn_txt_stock_02"*/, v11);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( *p_operationSortInfo )
      {
        v14 = 1;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1B8880C(operationSortInfo, v10);
  }
  if ( filterStatus == 1 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17621/*"btn_txt_stock"*/, v11);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_21;
    v13 = 1;
  }
  else
  {
    if ( filterStatus )
      goto LABEL_19;
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17551/*"btn_txt_all"*/, v11);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_21;
    v13 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 52, v13, 0LL);
  operationSortInfo = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_21;
  v14 = 0;
LABEL_18:
  ListViewSort__SetFilter(operationSortInfo, 53, v14, 0LL);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)method);
  ShopBuyItemListViewManager__SetMode_32870792(this, mode, v6);
}


void __fastcall ShopBuyItemListViewManager__SetMode_32870792(
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


void __fastcall ShopBuyItemListViewManager__SetMode_32872064(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ShopBuyItemListViewManager__SetMode_32870792(this, mode, v7);
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

  if ( (byte_4A5776A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4A5776A = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B8880C(scrollView, method);
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
  if ( (byte_4A57760 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1B885B0(&ShopBuyItemListViewObject_TypeInfo);
    byte_4A57760 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
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
  ShopBuyItemListViewObject__Init_32873924((ShopBuyItemListViewObject_o *)obj, v9, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4A57761 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57761 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1B8880C(gameObject, v7);
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

  if ( (byte_4A57769 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4A57769 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B8880C(scrollView, method);
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
    sub_1B8880C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ClippingObjectList(
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
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A57755 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57755 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1B8880C(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopBuyItemListViewObject__GetItem(
                                                                  (ShopBuyItemListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40722428(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
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
    sub_1B8880C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v13; // x1
  Il2CppClass **v14; // x0

  if ( (byte_4A57754 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57754 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1B8880C(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v11 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v13 = objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v3;
}


void __fastcall ShopBuyItemListViewManager__set_EventItemCount(
        ShopBuyItemListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventItemCount_k__BackingField = value;
}


void __fastcall ShopBuyItemListViewManager___c__DisplayClass46_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass46_0___GetIndexByItemId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass46_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int64_t sortValue1; // x8

  if ( (byte_4A5776C & 1) == 0 )
  {
    sub_1B885B0(&ShopBuyItemListViewItem_TypeInfo);
    byte_4A5776C = 1;
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