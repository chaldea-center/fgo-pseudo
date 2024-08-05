void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_BA3820;
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
    this->fields.filterStatus = dword_BDC3B8[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_49FAC0D )
  {
    sub_1B64870(&EventRewardSaveData_TypeInfo, v4);
    byte_49FAC0D = 1;
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

  if ( (byte_49FAB7B & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FAB7B = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_1B64ACC(Instance, v14);
  }
  if ( itemList->fields._size != Instance->max_length )
    ShopBuyItemListViewManager__CreateList_32599524(this, 6, eventId, slot, eventNum, isForcedAdjustment, v15);
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

  ShopBuyItemListViewManager__CreateList_32599524(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_32599524(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_32599524(
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
  __int64 v29; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v31; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x24
  System_Int32_array *v36; // x23
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x6
  const MethodInfo *v40; // x4
  ShopEntity_array *ShopEntities; // x25
  System_Collections_Generic_List_object__o *v42; // x22
  System_Collections_Generic_List_object__o *v43; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x26
  int v46; // w20
  int32_t v47; // w19
  ShopEntity_o *v48; // x27
  System_Collections_Generic_List_object__o *v49; // x23
  struct System_Int32_array *targetIds; // x28
  __int64 v51; // x8
  unsigned __int64 v52; // x29
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  const MethodInfo *v59; // x3
  System_Collections_Generic_List_object__o *itemList; // x28
  int32_t v61; // w22
  ListViewItem_o *v62; // x29
  const MethodInfo *v63; // x2
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  __int64 v70; // x8
  System_Collections_Generic_List_object__o *v71; // x0
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  int32_t v75; // w25
  System_Collections_Generic_List_object__o *v76; // x26
  int32_t v77; // w21
  Il2CppObject *Item; // x29
  ListViewItem_o *v79; // x27
  const MethodInfo *v80; // x2
  int32_t v81; // w2
  int32_t v82; // w3
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  int32_t v87; // w24
  System_Collections_Generic_List_object__o *v88; // x25
  int32_t v89; // w21
  Il2CppObject *v90; // x28
  ListViewItem_o *v91; // x26
  const MethodInfo *v92; // x2
  int32_t v93; // w2
  int32_t v94; // w3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v100; // x8
  __int64 v101; // x9
  __int64 v102; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x21
  int32_t v104; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x21
  int32_t v106; // w1
  struct UILabel_o *emptyMessageLabel; // x21
  System_String_o *v108; // x1
  UILabel_o *v109; // x0
  struct UILabel_o *v110; // x22
  System_String_o **v111; // x8
  System_String_o *v112; // x21
  int32_t v113; // w2
  int32_t v114; // w3
  struct ListViewSort_o *sort; // x1
  _BOOL8 v116; // x0
  const MethodInfo *v117; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  __int64 v119; // x1
  const MethodInfo *v120; // x2
  TerminalPramsManager_c *v121; // x0
  TerminalPramsManager_c *v122; // x0
  int32_t IndexByItemId; // w0
  __int64 v124; // x1
  TerminalPramsManager_c *v125; // x0
  int32_t v126; // [xsp+0h] [xbp-80h]
  bool v127; // [xsp+4h] [xbp-7Ch]
  ShopBuyItemListViewManager_o *v128; // [xsp+8h] [xbp-78h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+10h] [xbp-70h]
  EventRewardSceneEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FAB78 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_1B64870(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_1B64870(&LocalizationManager_TypeInfo, v22);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v23);
    sub_1B64870(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v26);
    sub_1B64870(&StringLiteral_12048/*"SHOP_SPECIAL_LIST_EMPTY"*/, v27);
    sub_1B64870(&StringLiteral_12009/*"SHOP_LIST_EMPTY"*/, v28);
    sub_1B64870(&StringLiteral_5677/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v29);
    byte_49FAB78 = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v33);
  v31 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v31 == 6 )
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
    v36 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v31);
    if ( !currencyInfoController )
      goto LABEL_153;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList,
      (int32_t)Instance,
      v37,
      v38);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_153;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v36,
      isForcedAdjustment,
      v39);
    LODWORD(v31) = this->fields.kind;
  }
  v126 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v31,
                                                v34);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v40);
  v42 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v43 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_153;
  max_length = ShopEntities->max_length;
  v128 = this;
  if ( max_length < 1 )
  {
    v127 = 0;
    v47 = 0;
    if ( !v43 )
      goto LABEL_153;
    goto LABEL_58;
  }
  v127 = 0;
  v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v46 = 0;
  v47 = 0;
  do
  {
    if ( v46 >= (unsigned int)max_length )
      goto LABEL_154;
    v48 = ShopEntities->m_Items[v46];
    if ( !v48 )
      goto LABEL_153;
    v49 = v42;
    if ( v48->fields.purchaseType == 6 )
    {
      targetIds = v48->fields.targetIds;
      if ( !targetIds )
        goto LABEL_153;
      v51 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v51 >= 1 )
      {
        v52 = 0LL;
        while ( v52 < (unsigned int)v51 )
        {
          if ( !v45 )
            goto LABEL_153;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        v45,
                                        targetIds->m_Items[v52 + 1],
                                        (const MethodInfo_30D6180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_51;
          LODWORD(v51) = targetIds->max_length;
          if ( (__int64)++v52 >= (int)v51 )
            goto LABEL_24;
        }
LABEL_154:
        sub_1B64AD4(Instance, v31);
      }
    }
LABEL_24:
    this = v128;
    if ( v127 )
    {
      v127 = 1;
    }
    else
    {
      v127 = v48->fields.purchaseType == 16;
      v128->fields.targetSlot = v48->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v48, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(v48, 0LL) )
    {
      Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v48, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v42 )
          goto LABEL_153;
        items = v42->fields._items;
        v73 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v42->fields._version;
        if ( !items )
          goto LABEL_153;
        size = v42->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v58 = &items->obj.klass + size;
          v42->fields._size = size + 1;
          goto LABEL_48;
        }
        v70 = v73[4];
        v71 = v42;
        goto LABEL_53;
      }
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v48, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_153;
      v55 = v43->fields._items;
      v56 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v43->fields._version;
      if ( !v55 )
        goto LABEL_153;
      v57 = v43->fields._size;
      if ( (unsigned int)v57 < v55->max_length )
      {
        v58 = &v55->obj.klass + v57;
        v43->fields._size = v57 + 1;
LABEL_48:
        v58[4] = (Il2CppClass *)v48;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v48, v53, v54);
        goto LABEL_54;
      }
      v70 = v56[4];
      v71 = v43;
LABEL_53:
      System_Collections_Generic_List_object___AddWithResize(
        v71,
        (Il2CppObject *)v48,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v70 + 192) + 112LL));
      goto LABEL_54;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v48, 0LL);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(v128, v48, (int32_t)Instance, v59),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v48->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)v128->fields.itemList;
        v61 = v128->fields.kind;
        v62 = (ListViewItem_o *)sub_1B64ABC(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_40375592(v62, v47, 0LL);
        v62[1].fields.sortIndex = v61;
        v62[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v62, v48, v63);
        if ( !itemList )
          goto LABEL_153;
        v66 = itemList->fields._items;
        v67 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v66 )
          goto LABEL_153;
        v68 = itemList->fields._size;
        v42 = v49;
        if ( (unsigned int)v68 >= v66->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v62,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v69 = &v66->obj.klass + v68;
          itemList->fields._size = v68 + 1;
          v69[4] = (Il2CppClass *)v62;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v69 + 4), (int32_t)v62, v64, v65);
        }
        ++v47;
LABEL_51:
        this = v128;
      }
    }
LABEL_54:
    max_length = ShopEntities->max_length;
    ++v46;
  }
  while ( v46 < max_length );
  if ( !v43 )
    goto LABEL_153;
LABEL_58:
  if ( v43->fields._size >= 1 )
  {
    v75 = 0;
    do
    {
      v76 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v77 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v43,
               v75,
               (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v79 = (ListViewItem_o *)sub_1B64ABC(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_40375592(v79, v47 + v75, 0LL);
      v79[1].fields.sortIndex = v77;
      v79[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v79, (ShopEntity_o *)Item, v80);
      if ( !v76 )
        goto LABEL_153;
      v83 = v76->fields._items;
      v84 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v76->fields._version;
      if ( !v83 )
        goto LABEL_153;
      v85 = v76->fields._size;
      this = v128;
      if ( (unsigned int)v85 >= v83->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)v79,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v86 = &v83->obj.klass + v85;
        v76->fields._size = v85 + 1;
        v86[4] = (Il2CppClass *)v79;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v86 + 4), (int32_t)v79, v81, v82);
      }
      ++v75;
    }
    while ( v75 < v43->fields._size );
    v47 += v75;
  }
  if ( !v42 )
    goto LABEL_153;
  if ( v42->fields._size >= 1 )
  {
    v87 = 0;
    do
    {
      v88 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v89 = this->fields.kind;
      v90 = System_Collections_Generic_List_object___get_Item(
              v42,
              v87,
              (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v91 = (ListViewItem_o *)sub_1B64ABC(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_40375592(v91, v47 + v87, 0LL);
      v91[1].fields.sortIndex = v89;
      v91[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v91, (ShopEntity_o *)v90, v92);
      if ( !v88 )
        goto LABEL_153;
      v95 = v88->fields._items;
      v96 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v88->fields._version;
      if ( !v95 )
        goto LABEL_153;
      v97 = v88->fields._size;
      if ( (unsigned int)v97 >= v95->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v88,
          (Il2CppObject *)v91,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v98 = &v95->obj.klass + v97;
        v88->fields._size = v97 + 1;
        v98[4] = (Il2CppClass *)v91;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v98 + 4), (int32_t)v91, v93, v94);
      }
    }
    while ( ++v87 < v42->fields._size );
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
      v100 = 348LL;
      if ( v126 == 1 )
        v100 = 336LL;
      if ( v126 == 1 )
        v101 = 332LL;
      else
        v101 = 344LL;
      if ( v126 == 1 )
        v102 = 328LL;
      else
        v102 = 340LL;
      v131.fields.z = *(float *)((char *)&this->klass + v100);
      v131.fields.y = *(float *)((char *)&this->klass + v101);
      v131.fields.x = *(float *)((char *)&this->klass + v102);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v131, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_153;
      if ( v126 == 1 )
        v104 = 338;
      else
        v104 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v104, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_153;
      if ( v126 == 1 )
        v106 = 348;
      else
        v106 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v106, 0LL);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5677/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
    if ( emptyMessageLabel )
    {
      v108 = (System_String_o *)Instance;
      v109 = emptyMessageLabel;
      goto LABEL_118;
    }
LABEL_153:
    sub_1B64ACC(Instance, v31);
  }
  v110 = this->fields.emptyMessageLabel;
  if ( this->fields.kind == 12 )
    v111 = (System_String_o **)&StringLiteral_12048/*"SHOP_SPECIAL_LIST_EMPTY"*/;
  else
    v111 = (System_String_o **)&StringLiteral_12009/*"SHOP_LIST_EMPTY"*/;
  v112 = *v111;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v112, 0LL);
  if ( !v110 )
    goto LABEL_153;
  v108 = (System_String_o *)Instance;
  v109 = v110;
LABEL_118:
  UILabel__set_text(v109, v108, 0LL);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v113, v114);
  }
  if ( !v127 )
    goto LABEL_129;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_153;
  v116 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0LL);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v116 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v116, this->fields.filterBtn, 1, v117);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
      if ( !byte_49FAC0A )
      {
        sub_1B64870(&EventRewardSaveData_TypeInfo, sort);
        byte_49FAC0A = 1;
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
  if ( !byte_49FAC0B )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v119);
    byte_49FAC0B = 1;
  }
  v121 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v121 = TerminalPramsManager_TypeInfo;
  }
  if ( v121->static_fields->_ShopFocusItemId_k__BackingField >= 1 )
  {
    if ( !v121->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v121);
    if ( !byte_49FAC0B )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v119);
      byte_49FAC0B = 1;
    }
    v122 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v122 = TerminalPramsManager_TypeInfo;
    }
    IndexByItemId = ShopBuyItemListViewManager__GetIndexByItemId(
                      this,
                      v122->static_fields->_ShopFocusItemId_k__BackingField,
                      v120);
    if ( (IndexByItemId & 0x80000000) == 0 )
      ListViewManager__SetTopItem((ListViewManager_o *)this, IndexByItemId, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FAC0C )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v124);
      byte_49FAC0C = 1;
    }
    v125 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v125 = TerminalPramsManager_TypeInfo;
    }
    v125->static_fields->_ShopFocusItemId_k__BackingField = 0;
  }
}


void __fastcall ShopBuyItemListViewManager__CreateList_32602352(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_32599524(this, 6, eventId, 0, 0, 0, v3);
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BDC3C4[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BDC414[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_49FAB79 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_49FAB79 = 1;
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

  if ( (byte_49FAB81 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, *(_QWORD *)&itemId);
    sub_1B64870(&System_Predicate_ListViewItem__TypeInfo, v5);
    sub_1B64870(&Method_ShopBuyItemListViewManager___c__DisplayClass46_0__GetIndexByItemId_b__0__, v6);
    sub_1B64870(&ShopBuyItemListViewManager___c__DisplayClass46_0_TypeInfo, v7);
    byte_49FAB81 = 1;
  }
  v8 = sub_1B64ABC(ShopBuyItemListViewManager___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_DWORD *)(v8 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v13 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_ShopBuyItemListViewManager___c__DisplayClass46_0__GetIndexByItemId_b__0__,
    0LL);
  if ( !itemList )
LABEL_9:
    sub_1B64ACC(v9, v10);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
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

  if ( (byte_49FAB8D & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FAB8D = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_1B64ACC(Instance, v9);
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

  if ( (byte_49FAB80 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B64870(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_49FAB80 = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_49FAB87 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_1B64870(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v5);
    byte_49FAB87 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v7;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopEntity_array *Instance; // x0
  __int64 v5; // x1
  ShopEntity_o *v6; // x8

  if ( (byte_49FAB8A & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FAB8A = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_1B64ACC(Instance, v5);
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

  if ( (byte_49FAB7A & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FAB7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1B64ACC(Instance, v10);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  bool v9; // w0
  Il2CppObject *Component_object; // x21

  if ( (byte_49FAB7F & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_49FAB7F = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1B64ACC(objectList, method);
  v7 = 0;
  while ( v7 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v7,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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

  return ShopBuyItemListViewManager__ModifyList_32605776(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_49FAB7C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B64870(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1B64870(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FAB7C = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_30D6180 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0LL),
        !Entity) )
  {
    sub_1B64ACC(Instance, v7);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_32599524(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v13);
  ShopBuyItemListViewManager__SetMode_32606740(this, 2, v14);
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

  if ( (byte_49FAB7E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B64870(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_49FAB7E = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1B64ACC(itemList, shopEntity);
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  return ShopBuyItemListViewManager__ModifyList_32605776(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_32605776(
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

  if ( (byte_49FAB7D & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1B64870(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1B64870(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FAB7D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_30D6180 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v35 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v36);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1B64814(
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
    sub_1B64ACC(Instance, v18);
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
          sub_1B64AD4(Instance, v18);
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
  ShopBuyItemListViewManager__CreateList_32599524(v26, v27, v28, v29, v30, v31, v22);
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
    sub_1B64814(p_onClickListViewItem, 0, (int32_t)method, v3);
    if ( !obj )
      sub_1B64ACC(v7, v8);
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

  if ( (byte_49FAB89 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FAB89 = 1;
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
          sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd, 0, v14, v15);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_18:
      sub_1B64ACC(emptyMessageBase, v10);
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

  if ( (byte_49FAB88 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_1B64870(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v8);
    byte_49FAB88 = 1;
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
          (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
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
                   (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v19 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
LABEL_23:
            sub_1B64ACC(ObjectList, v13);
          ShopBuyItemListViewObject__Init_32609872((ShopBuyItemListViewObject_o *)Item, v9, v19, v14, v20);
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
      sub_1B64ACC(0LL, initMode);
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

  if ( (byte_49FAB86 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_49FAB86 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_1B64ACC(gameObject, v7);
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

  if ( (byte_49FAB85 & 1) == 0 )
  {
    sub_1B64870(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_49FAB85 = 1;
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
      sub_1B64ACC(v9, v8);
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

  if ( (byte_49FAB84 & 1) == 0 )
  {
    sub_1B64870(&ListViewSort_TypeInfo, method);
    sub_1B64870(&LocalizationManager_TypeInfo, v3);
    sub_1B64870(&StringLiteral_17554/*"btn_txt_stock_02"*/, v4);
    sub_1B64870(&StringLiteral_17553/*"btn_txt_stock"*/, v5);
    sub_1B64870(&StringLiteral_5677/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v6);
    sub_1B64870(&StringLiteral_17483/*"btn_txt_all"*/, v7);
    byte_49FAB84 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v9 = (ListViewSort_o *)sub_1B64ABC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40431992(v9, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v9;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v9, v11, v12);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5677/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_21;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)operationSortInfo, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17554/*"btn_txt_stock_02"*/, v16);
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
    sub_1B64ACC(operationSortInfo, v15);
  }
  if ( filterStatus == 1 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17553/*"btn_txt_stock"*/, v16);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_21;
    v18 = 1;
  }
  else
  {
    if ( filterStatus )
      goto LABEL_19;
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17483/*"btn_txt_all"*/, v16);
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
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)method);
  ShopBuyItemListViewManager__SetMode_32606740(this, mode, v6);
}


void __fastcall ShopBuyItemListViewManager__SetMode_32606740(
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


void __fastcall ShopBuyItemListViewManager__SetMode_32608012(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ShopBuyItemListViewManager__SetMode_32606740(this, mode, v7);
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

  if ( (byte_49FAB8C & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_49FAB8C = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B64ACC(scrollView, method);
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
  if ( (byte_49FAB82 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1B64870(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_49FAB82 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1B64ACC(this, obj);
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
  ShopBuyItemListViewObject__Init_32609872((ShopBuyItemListViewObject_o *)obj, v9, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_49FAB83 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_49FAB83 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1B64ACC(gameObject, v7);
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

  if ( (byte_49FAB8B & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_49FAB8B = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B64ACC(scrollView, method);
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
    sub_1B64ACC(0LL, method);
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

  if ( (byte_49FAB77 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B64870(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    byte_49FAB77 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1B64ACC(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40394112(
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
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
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
    sub_1B64ACC(this, method);
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

  if ( (byte_49FAB76 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B64870(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    byte_49FAB76 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1B64ACC(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
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

  if ( (byte_49FAB8E & 1) == 0 )
  {
    sub_1B64870(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_49FAB8E = 1;
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