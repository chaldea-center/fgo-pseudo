void __fastcall ShopBuyItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v11; // x20
  struct ShopBuyItemListViewManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B6303F & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewSort_TypeInfo, v1);
    sub_1BE4ACC(&ShopBuyItemListViewManager_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_6391/*"ExchangeSvtCoinShop"*/, v9);
    byte_4B6303F = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6391/*"ExchangeSvtCoinShop"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ShopBuyItemListViewManager_TypeInfo->static_fields,
    StringLiteral_6391/*"ExchangeSvtCoinShop"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v11 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v11, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v11;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->exchangeSvtCoinSortInfo,
    (int64_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_BE23E0;
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
    this->fields.filterStatus = dword_C1B758[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_4B630B7 )
  {
    sub_1BE4ACC(&EventRewardSaveData_TypeInfo, v4);
    byte_4B630B7 = 1;
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

  if ( (byte_4B63029 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B63029 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_1BE4D28(Instance, v14);
  }
  if ( itemList->fields._size != Instance->max_length )
    ShopBuyItemListViewManager__CreateList_33599168(this, 6, eventId, slot, eventNum, isForcedAdjustment, v15);
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

  ShopBuyItemListViewManager__CreateList_33599168(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateExchangeSvtCoinList(
        ShopBuyItemListViewManager_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopBuyItemListViewManager_c *v10; // x0
  struct ListViewSort_o *exchangeSvtCoinSortInfo; // x1
  __int64 v12; // x1
  ListViewSort_o *sort; // x0
  const MethodInfo *v14; // x6
  const MethodInfo *v15; // x1

  if ( (byte_4B63024 & 1) == 0 )
  {
    sub_1BE4ACC(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&svtCoinType);
    byte_4B63024 = 1;
  }
  v10 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
    v10 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v10->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.sort,
    (int64_t)exchangeSvtCoinSortInfo,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BE4D28(0LL, v12);
  ListViewSort__Load(sort, 0LL);
  ShopBuyItemListViewManager__CreateList_33599168(this, 22, 0, svtCoinType, 0, 0, v14);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v15);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_33599168(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_33599168(
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
  int64_t Instance; // x0
  const MethodInfo *v31; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x21
  System_Int32_array *v36; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x4
  ShopEntity_array *ShopEntities; // x29
  System_Collections_Generic_List_object__o *v46; // x24
  System_Collections_Generic_List_object__o *v47; // x26
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x28
  int v50; // w22
  int v51; // w25
  ShopEntity_array *v52; // x23
  ShopEntity_o *v53; // x29
  int32_t v54; // w27
  System_Collections_Generic_List_object__o *v55; // x25
  struct System_Int32_array *targetIds; // x20
  __int64 v57; // x8
  unsigned __int64 v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  const MethodInfo *v69; // x3
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v71; // w24
  ListViewItem_o *v72; // x21
  const MethodInfo *v73; // x2
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  __int64 v84; // x8
  System_Collections_Generic_List_object__o *v85; // x0
  struct System_Object_array *items; // x8
  _QWORD *v87; // x9
  __int64 size; // x10
  int32_t v89; // w27
  System_Collections_Generic_List_object__o *v90; // x28
  int32_t v91; // w23
  Il2CppObject *Item; // x29
  ListViewItem_o *v93; // x20
  const MethodInfo *v94; // x2
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  int32_t v105; // w26
  System_Collections_Generic_List_object__o *v106; // x27
  int32_t v107; // w23
  Il2CppObject *v108; // x28
  ListViewItem_o *v109; // x20
  const MethodInfo *v110; // x2
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v122; // w23
  __int64 v123; // x8
  __int64 v124; // x9
  __int64 v125; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v127; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v129; // w22
  int32_t v130; // w1
  UILabel_o *emptyMessageLabel; // x20
  int32_t v132; // w8
  __int64 *v133; // x9
  System_String_o **v134; // x8
  System_String_o *v135; // x21
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct ListViewSort_o *sort; // x1
  _BOOL8 v143; // x0
  const MethodInfo *v144; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v146; // [xsp+0h] [xbp-80h]
  int32_t v147; // [xsp+4h] [xbp-7Ch]
  int32_t v148; // [xsp+8h] [xbp-78h]
  bool v149; // [xsp+Ch] [xbp-74h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+10h] [xbp-70h]
  EventRewardSceneEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B63025 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1BE4ACC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_1BE4ACC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v22);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v23);
    sub_1BE4ACC(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BE4ACC(&StringLiteral_12288/*"SHOP_SPECIAL_LIST_EMPTY"*/, v26);
    sub_1BE4ACC(&StringLiteral_12238/*"SHOP_LIST_EMPTY"*/, v27);
    sub_1BE4ACC(&StringLiteral_5799/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v28);
    sub_1BE4ACC(&StringLiteral_5864/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/, v29);
    byte_4B63025 = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v33);
  v31 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v31 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_134;
    Instance = (int64_t)ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, this->fields.eventId, 0LL);
    if ( !Instance )
      goto LABEL_134;
    currencyInfoController = this->fields.currencyInfoController;
    v36 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = *(_QWORD *)(Instance + 24);
    Instance = (int64_t)ShopBuyItemListViewManager__get_ObjectList(this, v31);
    if ( !currencyInfoController )
      goto LABEL_134;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
      Instance,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    Instance = (int64_t)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_134;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v36,
      isForcedAdjustment,
      v43);
    LODWORD(v31) = this->fields.kind;
  }
  v146 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v31,
                                                v34);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v44);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v47 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_134;
  max_length = ShopEntities->max_length;
  v147 = slot;
  v148 = kind;
  if ( max_length < 1 )
  {
    v149 = 0;
    v51 = 0;
    if ( !v47 )
      goto LABEL_134;
    goto LABEL_58;
  }
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v50 = 0;
  v51 = 0;
  v149 = 0;
  do
  {
    if ( v50 >= (unsigned int)max_length )
      goto LABEL_135;
    v52 = ShopEntities;
    v53 = ShopEntities->m_Items[v50];
    if ( !v53 )
      goto LABEL_134;
    v54 = v51;
    v55 = v46;
    if ( v53->fields.purchaseType == 6 )
    {
      targetIds = v53->fields.targetIds;
      if ( !targetIds )
        goto LABEL_134;
      v57 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v57 >= 1 )
      {
        v58 = 0LL;
        while ( v58 < (unsigned int)v57 )
        {
          if ( !v49 )
            goto LABEL_134;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v49,
                                targetIds->m_Items[v58 + 1],
                                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_43;
          LODWORD(v57) = targetIds->max_length;
          if ( (__int64)++v58 >= (int)v57 )
            goto LABEL_24;
        }
LABEL_135:
        sub_1BE4D30(Instance, v31);
      }
    }
LABEL_24:
    if ( v149 )
    {
      v149 = 1;
    }
    else
    {
      v149 = v53->fields.purchaseType == 16;
      this->fields.targetSlot = v53->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v53, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(v53, 0LL) )
    {
      Instance = ShopEntity__IsAnotherItemBuyable(v53, 0LL);
      if ( (Instance & 1) == 0 )
      {
        if ( !v46 )
          goto LABEL_134;
        items = v46->fields._items;
        v87 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v46->fields._version;
        if ( !items )
          goto LABEL_134;
        size = v46->fields._size;
        v51 = v54;
        if ( (unsigned int)size < items->max_length )
        {
          v68 = &items->obj.klass + size;
          v46->fields._size = size + 1;
          goto LABEL_48;
        }
        v84 = v87[4];
        v85 = v46;
LABEL_52:
        System_Collections_Generic_List_object___AddWithResize(
          v85,
          (Il2CppObject *)v53,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v84 + 192) + 112LL));
        goto LABEL_53;
      }
    }
    Instance = ShopEntity__isClosedShopPriorityLowCheck(v53, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v47 )
        goto LABEL_134;
      v65 = v47->fields._items;
      v66 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v47->fields._version;
      if ( !v65 )
        goto LABEL_134;
      v67 = v47->fields._size;
      v51 = v54;
      if ( (unsigned int)v67 < v65->max_length )
      {
        v68 = &v65->obj.klass + v67;
        v47->fields._size = v67 + 1;
LABEL_48:
        v68[4] = (Il2CppClass *)v53;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v53, v59, v60, v61, v62, v63, v64);
        goto LABEL_53;
      }
      v84 = v66[4];
      v85 = v47;
      goto LABEL_52;
    }
    Instance = ShopEntity__GetPurchaseShop(v53, 0LL);
    if ( (int)Instance >= 1
      && (Instance = ShopBuyItemListViewManager__ModifyItem(this, v53, Instance, v69), (Instance & 1) != 0)
      || v53->fields.id < 1 )
    {
LABEL_43:
      v51 = v54;
LABEL_53:
      ShopEntities = v52;
      goto LABEL_54;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v71 = this->fields.kind;
    v72 = (ListViewItem_o *)sub_1BE4D18(ShopBuyItemListViewItem_TypeInfo);
    ListViewItem___ctor_41686696(v72, v54, 0LL);
    v72[1].fields.sortIndex = v71;
    v72[1].fields.sortValue0 = (int64_t)EnterTime;
    ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v72, v53, v73);
    if ( !itemList )
      goto LABEL_134;
    v80 = itemList->fields._items;
    v81 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !v80 )
      goto LABEL_134;
    v82 = itemList->fields._size;
    v46 = v55;
    ShopEntities = v52;
    if ( (unsigned int)v82 >= v80->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v72,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = &v80->obj.klass + v82;
      itemList->fields._size = v82 + 1;
      v83[4] = (Il2CppClass *)v72;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v83 + 4), (int64_t)v72, v74, v75, v76, v77, v78, v79);
    }
    v51 = v54 + 1;
LABEL_54:
    max_length = ShopEntities->max_length;
    ++v50;
  }
  while ( v50 < max_length );
  if ( !v47 )
    goto LABEL_134;
LABEL_58:
  if ( v47->fields._size >= 1 )
  {
    v89 = 0;
    do
    {
      v90 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v91 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v47,
               v89,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v93 = (ListViewItem_o *)sub_1BE4D18(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_41686696(v93, v51 + v89, 0LL);
      v93[1].fields.sortIndex = v91;
      v93[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v93, (ShopEntity_o *)Item, v94);
      if ( !v90 )
        goto LABEL_134;
      v101 = v90->fields._items;
      v102 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v90->fields._version;
      if ( !v101 )
        goto LABEL_134;
      v103 = v90->fields._size;
      if ( (unsigned int)v103 >= v101->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v90,
          (Il2CppObject *)v93,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
      }
      else
      {
        v104 = &v101->obj.klass + v103;
        v90->fields._size = v103 + 1;
        v104[4] = (Il2CppClass *)v93;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v104 + 4), (int64_t)v93, v95, v96, v97, v98, v99, v100);
      }
      ++v89;
    }
    while ( v89 < v47->fields._size );
    v51 += v89;
  }
  if ( !v46 )
    goto LABEL_134;
  if ( v46->fields._size >= 1 )
  {
    v105 = 0;
    do
    {
      v106 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v107 = this->fields.kind;
      v108 = System_Collections_Generic_List_object___get_Item(
               v46,
               v105,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v109 = (ListViewItem_o *)sub_1BE4D18(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_41686696(v109, v51 + v105, 0LL);
      v109[1].fields.sortIndex = v107;
      v109[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v109, (ShopEntity_o *)v108, v110);
      if ( !v106 )
        goto LABEL_134;
      v117 = v106->fields._items;
      v118 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v106->fields._version;
      if ( !v117 )
        goto LABEL_134;
      v119 = v106->fields._size;
      if ( (unsigned int)v119 >= v117->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v106,
          (Il2CppObject *)v109,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = &v117->obj.klass + v119;
        v106->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)v109;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v120 + 4), (int64_t)v109, v111, v112, v113, v114, v115, v116);
      }
    }
    while ( ++v105 < v46->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    v122 = v148;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.scrollBar;
      if ( !Instance )
        goto LABEL_134;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      v123 = 348LL;
      if ( v146 == 1 )
        v123 = 336LL;
      if ( v146 == 1 )
        v124 = 332LL;
      else
        v124 = 344LL;
      if ( v146 == 1 )
        v125 = 328LL;
      else
        v125 = 340LL;
      v152.fields.z = *(float *)((char *)&this->klass + v123);
      v152.fields.y = *(float *)((char *)&this->klass + v124);
      v152.fields.x = *(float *)((char *)&this->klass + v125);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v152, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_134;
      if ( v146 == 1 )
        v127 = 338;
      else
        v127 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v127, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v129 = v147;
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_134;
      if ( v146 == 1 )
        v130 = 348;
      else
        v130 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v130, 0LL);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5799/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
    if ( !emptyMessageLabel )
LABEL_134:
      sub_1BE4D28(Instance, v31);
  }
  else
  {
    v132 = this->fields.kind;
    v133 = &StringLiteral_12238/*"SHOP_LIST_EMPTY"*/;
    if ( v132 == 22 )
      v133 = (__int64 *)&StringLiteral_5864/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
    if ( v132 == 12 )
      v134 = (System_String_o **)&StringLiteral_12288/*"SHOP_SPECIAL_LIST_EMPTY"*/;
    else
      v134 = (System_String_o **)v133;
    v135 = *v134;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v122 = v148;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get(v135, 0LL);
    v129 = v147;
    if ( !emptyMessageLabel )
      goto LABEL_134;
  }
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.baseSortInfo,
      (int64_t)sort,
      v136,
      v137,
      v138,
      v139,
      v140,
      v141);
  }
  if ( !v149 )
    goto LABEL_130;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_134;
  v143 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0LL);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v143 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v143, this->fields.filterBtn, 1, v144);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
      if ( !byte_4B630B4 )
      {
        sub_1BE4ACC(&EventRewardSaveData_TypeInfo, sort);
        byte_4B630B4 = 1;
      }
      ItemFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
      goto LABEL_131;
    }
LABEL_130:
    ItemFilterId_k__BackingField = 0;
  }
LABEL_131:
  this->fields.filterStatus = ItemFilterId_k__BackingField;
  ShopBuyItemListViewManager__SetList(this, (const MethodInfo *)sort);
  if ( v122 == 22 )
    this->fields.targetExchangeSvtCoinFolder = v129;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_33602160(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_33599168(this, 6, eventId, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__EndSelectFilterKind(
        ShopBuyItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4B6303D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B6303D = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_33606932(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1BE4D28(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0LL, 0LL);
}


void __fastcall ShopBuyItemListViewManager__FocusTopItem(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t IndexByItemId; // w0
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4B63026 & 1) == 0 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
    byte_4B63026 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B630B5 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
    byte_4B630B5 = 1;
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
    if ( !byte_4B630B5 )
    {
      sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
      byte_4B630B5 = 1;
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
    if ( !byte_4B630B6 )
    {
      sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v7);
      byte_4B630B6 = 1;
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
    return dword_C1B764[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C1B7B4[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4B63027 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_4B63027 = 1;
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

  if ( (byte_4B6302F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, *(_QWORD *)&itemId);
    sub_1BE4ACC(&System_Predicate_ListViewItem__TypeInfo, v5);
    sub_1BE4ACC(&Method_ShopBuyItemListViewManager___c__DisplayClass52_0__GetIndexByItemId_b__0__, v6);
    sub_1BE4ACC(&ShopBuyItemListViewManager___c__DisplayClass52_0_TypeInfo, v7);
    byte_4B6302F = 1;
  }
  v8 = sub_1BE4D18(ShopBuyItemListViewManager___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_DWORD *)(v8 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v13 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_ShopBuyItemListViewManager___c__DisplayClass52_0__GetIndexByItemId_b__0__,
    0LL);
  if ( !itemList )
LABEL_9:
    sub_1BE4D28(v9, v10);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_35ECA7C *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
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
  __int64 v6; // x1
  int v7; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v12; // x1
  int32_t PayType; // w0

  if ( (byte_4B6303B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&ShopBuyItemListViewManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B6303B = 1;
  }
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  v7 = ShopBuyItemListViewManager__GetBuyItemKind(state, *(const MethodInfo **)&eventId) - 2;
  result = 1;
  switch ( v7 )
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_1BE4D28(Instance, v10);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
      if ( EventItemList && *(_QWORD *)&EventItemList->max_length )
        goto LABEL_14;
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
      PayType = ShopBuyItemListViewManager__GetPayType(eventId, v12);
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


// local variable allocation has failed, the output may be wrong!
ShopBuyItemListViewItem_o *__fastcall ShopBuyItemListViewManager__GetItem(
        ShopBuyItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ShopBuyItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B6302E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BE4ACC(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_4B6302E = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B63035 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_1BE4ACC(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v5);
    byte_4B63035 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v7 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v7;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopEntity_array *Instance; // x0
  __int64 v5; // x1
  ShopEntity_o *v6; // x8

  if ( (byte_4B63038 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B63038 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_1BE4D28(Instance, v5);
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
  ShopEntity_array *result; // x0

  if ( (byte_4B63028 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B63028 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_39:
    sub_1BE4D28(Instance, v10);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_39;
      v11 = 2;
      goto LABEL_36;
    case 6:
      if ( !Instance )
        goto LABEL_39;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL);
    case 7:
      if ( !Instance )
        goto LABEL_39;
      v11 = 6;
      goto LABEL_36;
    case 8:
      if ( !Instance )
        goto LABEL_39;
      v11 = 7;
      goto LABEL_36;
    case 9:
      if ( !Instance )
        goto LABEL_39;
      v11 = 3;
      goto LABEL_36;
    case 10:
      if ( !Instance )
        goto LABEL_39;
      v11 = 4;
      goto LABEL_36;
    case 11:
      if ( !Instance )
        goto LABEL_39;
      v11 = 5;
      goto LABEL_36;
    case 12:
      if ( !Instance )
        goto LABEL_39;
      v11 = 9;
      goto LABEL_36;
    case 13:
      if ( !Instance )
        goto LABEL_39;
      v11 = 10;
      goto LABEL_36;
    case 14:
      if ( !Instance )
        goto LABEL_39;
      v11 = 11;
      goto LABEL_36;
    case 15:
      if ( !Instance )
        goto LABEL_39;
      v11 = 12;
      goto LABEL_36;
    case 16:
      if ( !Instance )
        goto LABEL_39;
      v11 = 13;
      goto LABEL_36;
    case 18:
      if ( !Instance )
        goto LABEL_39;
      v11 = 14;
      goto LABEL_36;
    case 20:
      if ( !Instance )
        goto LABEL_39;
      v11 = 15;
      goto LABEL_36;
    case 21:
      if ( !Instance )
        goto LABEL_39;
      v11 = 16;
LABEL_36:
      result = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v11, 0LL);
      break;
    case 22:
      if ( !Instance )
        goto LABEL_39;
      result = ShopMaster__GetEnableExchangeSvtCoinEntitiyList((ShopMaster_o *)Instance, slot, 0LL);
      break;
    default:
      return 0LL;
  }
  return result;
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

  if ( (byte_4B6302D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B6302D = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1BE4D28(objectList, method);
  v7 = 0;
  while ( v7 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v7,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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

  return ShopBuyItemListViewManager__ModifyList_33605968(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_4B6302A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B6302A = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0LL),
        !Entity) )
  {
    sub_1BE4D28(Instance, v7);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_33599168(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v13);
  ShopBuyItemListViewManager__SetMode_33606932(this, 2, v14);
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

  if ( (byte_4B6302C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BE4ACC(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_4B6302C = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1BE4D28(itemList, shopEntity);
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  return ShopBuyItemListViewManager__ModifyList_33605968(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_33605968(
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
  int64_t Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x6
  int64_t v23; // x25
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  ShopCurrencyInfoController_o *v43; // x28
  _BOOL4 isEventShop; // w29
  const MethodInfo *v45; // x6
  int v46; // w8
  __int64 v47; // x27
  ShopEntity_o *v48; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v50; // x3

  if ( (byte_4B6302B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B6302B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (int64_t)ShopBuyItemListViewManager__GetShopEntities(
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v35 = (EventDetailEntity_o *)Entity;
          Instance = (int64_t)ShopBuyItemListViewManager__get_ObjectList(this, v36);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
              Instance,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            if ( v35 )
            {
              v43 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = EventDetailEntity__IsForcedAdjustmentDialog(v35, 0LL);
              if ( v43 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v43,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  Instance & 1,
                  v45);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1BE4D28(Instance, v18);
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
  if ( size < 1 || size == *(_DWORD *)(Instance + 24) )
  {
LABEL_20:
    v46 = *(_DWORD *)(v23 + 24);
    if ( v46 >= 1 )
    {
      v47 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v47 >= v46 )
          sub_1BE4D30(Instance, v18);
        v48 = *(ShopEntity_o **)(v23 + 32 + 8 * v47);
        if ( !v48 )
          goto LABEL_31;
        Instance = ShopBuyItemListViewManager__ModifyItem(
                     this,
                     *(ShopEntity_o **)(v23 + 32 + 8 * v47),
                     v48->fields.id,
                     v21);
        if ( (Instance & 1) == 0 )
        {
          Instance = ShopEntity__IsSoldOut(v48, 0LL);
          if ( (Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v48, 0LL);
            Instance = ShopBuyItemListViewManager__ModifyItem(this, v48, PurchaseShop, v50);
            if ( (Instance & 1) == 0 )
              break;
          }
        }
        v46 = *(_DWORD *)(v23 + 24);
        if ( (int)++v47 >= v46 )
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
  ShopBuyItemListViewManager__CreateList_33599168(v26, v27, v28, v29, v30, v31, v22);
  return 0;
}


void __fastcall ShopBuyItemListViewManager__OnClickFilterKind(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B6303C & 1) == 0 )
  {
    sub_1BE4ACC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__, v3);
    sub_1BE4ACC(&Method_ShopBuyItemListViewManager_OnClickFilterKind__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B6303C = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1BE4D28(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 15, sort, v11, 0, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__OnClickListView(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_int__o *onClickListViewItem; // x20
  PartyOrganizationUtility_o *p_onClickListViewItem; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int Index; // w0

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    p_onClickListViewItem = (PartyOrganizationUtility_o *)&this->fields.onClickListViewItem;
    p_onClickListViewItem->klass = 0LL;
    sub_1BE4A70(p_onClickListViewItem, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( !obj )
      sub_1BE4D28(v11, v12);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4B63037 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B63037 = 1;
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
          sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.onMoveEnd, 0LL, v14, v15, v16, v17, v18, v19);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_18:
      sub_1BE4D28(emptyMessageBase, v10);
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

  if ( (byte_4B63036 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_1BE4ACC(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v8);
    byte_4B63036 = 1;
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
          (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
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
                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v19 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
LABEL_23:
            sub_1BE4D28(ObjectList, v13);
          ShopBuyItemListViewObject__Init_33609964((ShopBuyItemListViewObject_o *)Item, v9, v19, v14, v20);
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
      sub_1BE4D28(0LL, initMode);
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

  if ( (byte_4B63034 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_4B63034 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_1BE4D28(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetFilterButtonImage(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *filterSprite; // x20
  __int64 v6; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *v8; // x19
  System_String_o **v9; // x8

  if ( (byte_4B6303E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17735/*"btn_filter_on"*/, v3);
    sub_1BE4ACC(&StringLiteral_17734/*"btn_filter"*/, v4);
    byte_4B6303E = 1;
  }
  filterSprite = (UnityEngine_Object_o *)this->fields.filterSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterSprite, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort
      || (v8 = this->fields.filterSprite,
          sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
          !v8) )
    {
      sub_1BE4D28(sort, v6);
    }
    v9 = (System_String_o **)&StringLiteral_17734/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v9 = (System_String_o **)&StringLiteral_17735/*"btn_filter_on"*/;
    UISprite__set_spriteName(v8, *v9, 0LL);
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

  if ( (byte_4B63033 & 1) == 0 )
  {
    sub_1BE4ACC(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B63033 = 1;
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
      sub_1BE4D28(v9, v8);
    UIWidget__set_height(v9, 20, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v7; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *operationSortInfo; // x0
  bool v19; // w2
  bool v20; // w2

  if ( (byte_4B63032 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewSort_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17847/*"btn_txt_stock_02"*/, v3);
    sub_1BE4ACC(&StringLiteral_17846/*"btn_txt_stock"*/, v4);
    sub_1BE4ACC(&StringLiteral_17776/*"btn_txt_all"*/, v5);
    byte_4B63032 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v7 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720984(v7, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.operationSortInfo, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17847/*"btn_txt_stock_02"*/, v16);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL), (operationSortInfo = *p_operationSortInfo) == 0LL) )
    {
LABEL_18:
      sub_1BE4D28(operationSortInfo, v15);
    }
    v20 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17846/*"btn_txt_stock"*/, v16);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v19 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17776/*"btn_txt_all"*/, v16);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v19 = 0;
    }
    ListViewSort__SetFilter(operationSortInfo, 52, v19, 0LL);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_18;
    v20 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 53, v20, 0LL);
LABEL_16:
  operationSortInfo = this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_18;
  ListViewSort__Set(operationSortInfo, *p_operationSortInfo, 0LL);
}


void __fastcall ShopBuyItemListViewManager__SetMode(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onClickListViewItem,
    (int64_t)onClickListViewItem,
    (int64_t)onClickListViewItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_33606932(this, mode, v10);
}


void __fastcall ShopBuyItemListViewManager__SetMode_33606932(
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


void __fastcall ShopBuyItemListViewManager__SetMode_33608204(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onMoveEnd,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_33606932(this, mode, v11);
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

  if ( (byte_4B6303A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B6303A = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BE4D28(scrollView, method);
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
  if ( (byte_4B63030 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1BE4ACC(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_4B63030 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
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
  ShopBuyItemListViewObject__Init_33609964((ShopBuyItemListViewObject_o *)obj, v9, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B63031 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_4B63031 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1BE4D28(gameObject, v7);
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

  if ( (byte_4B63039 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B63039 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BE4D28(scrollView, method);
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
    sub_1BE4D28(0LL, method);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B63023 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B63023 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BE4D28(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41702652(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_21;
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v14,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
    sub_1BE4D28(this, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_4B63022 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B63022 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BE4D28(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v21 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      v23 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v23;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
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


void __fastcall ShopBuyItemListViewManager___c__DisplayClass52_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass52_0___GetIndexByItemId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass52_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int64_t sortValue1; // x8

  if ( (byte_4B63040 & 1) == 0 )
  {
    sub_1BE4ACC(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4B63040 = 1;
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