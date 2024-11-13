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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *SORT_SAVE_KEY; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ListViewSort_o *v16; // x20
  struct ShopBuyItemListViewManager_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B126E2 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&ShopBuyItemListViewManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_6376/*"ExchangeSvtCoinShop"*/, v10, v11);
    byte_4B126E2 = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6376/*"ExchangeSvtCoinShop"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopBuyItemListViewManager_TypeInfo->static_fields,
    StringLiteral_6376/*"ExchangeSvtCoinShop"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v16 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v13, v14, v15);
  ListViewSort___ctor_41480716(v16, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v16;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->exchangeSvtCoinSortInfo,
    (int64_t)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_BD2E60;
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816LL;
  this->fields.listInDelay = 0.1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__ChangeFilter(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 filterStatus; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t v6; // w20

  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 2 )
    this->fields.filterStatus = dword_C0C1F8[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v6 = this->fields.filterStatus;
  if ( !byte_4B1275A )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v4, v5);
    byte_4B1275A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v6;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ShopEntity_array *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_4B126CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId, *(_QWORD *)&slot);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B126CC = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_1BCAA3C(Instance, v16);
  }
  if ( itemList->fields._size != Instance->max_length )
    ShopBuyItemListViewManager__CreateList_33461920(this, 6, eventId, slot, eventNum, isForcedAdjustment, v17);
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

  ShopBuyItemListViewManager__CreateList_33461920(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_4B126C7 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&svtCoinType, method);
    byte_4B126C7 = 1;
  }
  v10 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&svtCoinType);
    v10 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v10->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, v12);
  ListViewSort__Load(sort, 0LL);
  ShopBuyItemListViewManager__CreateList_33461920(this, 22, 0, svtCoinType, 0, 0, v14);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v15);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_33461920(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_33461920(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  int64_t Instance; // x0
  const MethodInfo *v48; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x21
  System_Int32_array *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  const MethodInfo *v60; // x6
  const MethodInfo *v61; // x4
  ShopEntity_array *ShopEntities; // x29
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Collections_Generic_List_object__o *v66; // x24
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Collections_Generic_List_object__o *v70; // x26
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x28
  int v73; // w22
  int v74; // w25
  ShopEntity_array *v75; // x23
  ShopEntity_o *v76; // x29
  int32_t v77; // w27
  System_Collections_Generic_List_object__o *v78; // x25
  struct System_Int32_array *targetIds; // x20
  __int64 v80; // x8
  unsigned __int64 v81; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  __int64 v92; // x2
  const MethodInfo *v93; // x3
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v95; // w24
  ListViewItem_o *v96; // x21
  const MethodInfo *v97; // x2
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  __int64 v108; // x8
  System_Collections_Generic_List_object__o *v109; // x0
  struct System_Object_array *items; // x8
  _QWORD *v111; // x9
  __int64 size; // x10
  int32_t v113; // w27
  System_Collections_Generic_List_object__o *v114; // x28
  int32_t v115; // w23
  Il2CppObject *Item; // x29
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  ListViewItem_o *v120; // x20
  const MethodInfo *v121; // x2
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  int32_t v132; // w26
  System_Collections_Generic_List_object__o *v133; // x27
  int32_t v134; // w23
  Il2CppObject *v135; // x28
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  ListViewItem_o *v139; // x20
  const MethodInfo *v140; // x2
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  struct System_Object_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  Il2CppClass **v150; // x0
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v152; // w23
  __int64 v153; // x8
  __int64 v154; // x9
  __int64 v155; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v157; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v159; // w22
  int32_t v160; // w1
  UILabel_o *emptyMessageLabel; // x20
  int32_t v162; // w8
  __int64 *v163; // x9
  System_String_o **v164; // x8
  System_String_o *v165; // x21
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  struct ListViewSort_o *sort; // x1
  _BOOL8 v173; // x0
  const MethodInfo *v174; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  __int64 v176; // x2
  int32_t v177; // [xsp+0h] [xbp-80h]
  int32_t v178; // [xsp+4h] [xbp-7Ch]
  int32_t v179; // [xsp+8h] [xbp-78h]
  bool v180; // [xsp+Ch] [xbp-74h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+10h] [xbp-70h]
  EventRewardSceneEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v183; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B126C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&ShopBuyItemListViewItem_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&StringLiteral_12256/*"SHOP_SPECIAL_LIST_EMPTY"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_12206/*"SHOP_LIST_EMPTY"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_5851/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/, v45, v46);
    byte_4B126C8 = 1;
  }
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v50);
  v48 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v48 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_134;
    Instance = (int64_t)ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, this->fields.eventId, 0LL);
    if ( !Instance )
      goto LABEL_134;
    currencyInfoController = this->fields.currencyInfoController;
    v53 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = *(_QWORD *)(Instance + 24);
    Instance = (int64_t)ShopBuyItemListViewManager__get_ObjectList(this, v48);
    if ( !currencyInfoController )
      goto LABEL_134;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
      Instance,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    Instance = (int64_t)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_134;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v53,
      isForcedAdjustment,
      v60);
    LODWORD(v48) = this->fields.kind;
  }
  v177 = eventNum;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v48,
                                                v51);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v61);
  v66 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v63,
                                                       v64,
                                                       v65);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v70 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       v67,
                                                       v68,
                                                       v69);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_134;
  max_length = ShopEntities->max_length;
  v178 = slot;
  v179 = kind;
  if ( max_length < 1 )
  {
    v180 = 0;
    v74 = 0;
    if ( !v70 )
      goto LABEL_134;
    goto LABEL_58;
  }
  v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v73 = 0;
  v74 = 0;
  v180 = 0;
  do
  {
    if ( v73 >= (unsigned int)max_length )
      goto LABEL_135;
    v75 = ShopEntities;
    v76 = ShopEntities->m_Items[v73];
    if ( !v76 )
      goto LABEL_134;
    v77 = v74;
    v78 = v66;
    if ( v76->fields.purchaseType == 6 )
    {
      targetIds = v76->fields.targetIds;
      if ( !targetIds )
        goto LABEL_134;
      v80 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v80 >= 1 )
      {
        v81 = 0LL;
        while ( v81 < (unsigned int)v80 )
        {
          if ( !v72 )
            goto LABEL_134;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v72,
                                targetIds->m_Items[v81 + 1],
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_43;
          LODWORD(v80) = targetIds->max_length;
          if ( (__int64)++v81 >= (int)v80 )
            goto LABEL_24;
        }
LABEL_135:
        sub_1BCAA44(Instance, v48);
      }
    }
LABEL_24:
    if ( v180 )
    {
      v180 = 1;
    }
    else
    {
      v180 = v76->fields.purchaseType == 16;
      this->fields.targetSlot = v76->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v76, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(v76, 0LL) )
    {
      Instance = ShopEntity__IsAnotherItemBuyable(v76, 0LL);
      if ( (Instance & 1) == 0 )
      {
        if ( !v66 )
          goto LABEL_134;
        items = v66->fields._items;
        v111 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v66->fields._version;
        if ( !items )
          goto LABEL_134;
        size = v66->fields._size;
        v74 = v77;
        if ( (unsigned int)size < items->max_length )
        {
          v91 = &items->obj.klass + size;
          v66->fields._size = size + 1;
          goto LABEL_48;
        }
        v108 = v111[4];
        v109 = v66;
LABEL_52:
        System_Collections_Generic_List_object___AddWithResize(
          v109,
          (Il2CppObject *)v76,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108 + 192) + 112LL));
        goto LABEL_53;
      }
    }
    Instance = ShopEntity__isClosedShopPriorityLowCheck(v76, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v70 )
        goto LABEL_134;
      v88 = v70->fields._items;
      v89 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v70->fields._version;
      if ( !v88 )
        goto LABEL_134;
      v90 = v70->fields._size;
      v74 = v77;
      if ( (unsigned int)v90 < v88->max_length )
      {
        v91 = &v88->obj.klass + v90;
        v70->fields._size = v90 + 1;
LABEL_48:
        v91[4] = (Il2CppClass *)v76;
        sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v76, v82, v83, v84, v85, v86, v87);
        goto LABEL_53;
      }
      v108 = v89[4];
      v109 = v70;
      goto LABEL_52;
    }
    Instance = ShopEntity__GetPurchaseShop(v76, 0LL);
    if ( (int)Instance >= 1
      && (Instance = ShopBuyItemListViewManager__ModifyItem(this, v76, Instance, v93), (Instance & 1) != 0)
      || v76->fields.id < 1 )
    {
LABEL_43:
      v74 = v77;
LABEL_53:
      ShopEntities = v75;
      goto LABEL_54;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v95 = this->fields.kind;
    v96 = (ListViewItem_o *)sub_1BCAA2C(ShopBuyItemListViewItem_TypeInfo, v48, v92, v93);
    ListViewItem___ctor_41447164(v96, v77, 0LL);
    v96[1].fields.sortIndex = v95;
    v96[1].fields.sortValue0 = (int64_t)EnterTime;
    ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v96, v76, v97);
    if ( !itemList )
      goto LABEL_134;
    v104 = itemList->fields._items;
    v105 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !v104 )
      goto LABEL_134;
    v106 = itemList->fields._size;
    v66 = v78;
    ShopEntities = v75;
    if ( (unsigned int)v106 >= v104->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v96,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
    }
    else
    {
      v107 = &v104->obj.klass + v106;
      itemList->fields._size = v106 + 1;
      v107[4] = (Il2CppClass *)v96;
      sub_1BCA784((PartyOrganizationUtility_o *)(v107 + 4), (int64_t)v96, v98, v99, v100, v101, v102, v103);
    }
    v74 = v77 + 1;
LABEL_54:
    max_length = ShopEntities->max_length;
    ++v73;
  }
  while ( v73 < max_length );
  if ( !v70 )
    goto LABEL_134;
LABEL_58:
  if ( v70->fields._size >= 1 )
  {
    v113 = 0;
    do
    {
      v114 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v115 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v70,
               v113,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v120 = (ListViewItem_o *)sub_1BCAA2C(ShopBuyItemListViewItem_TypeInfo, v117, v118, v119);
      ListViewItem___ctor_41447164(v120, v74 + v113, 0LL);
      v120[1].fields.sortIndex = v115;
      v120[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v120, (ShopEntity_o *)Item, v121);
      if ( !v114 )
        goto LABEL_134;
      v128 = v114->fields._items;
      v129 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v114->fields._version;
      if ( !v128 )
        goto LABEL_134;
      v130 = v114->fields._size;
      if ( (unsigned int)v130 >= v128->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v114,
          (Il2CppObject *)v120,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
      }
      else
      {
        v131 = &v128->obj.klass + v130;
        v114->fields._size = v130 + 1;
        v131[4] = (Il2CppClass *)v120;
        sub_1BCA784((PartyOrganizationUtility_o *)(v131 + 4), (int64_t)v120, v122, v123, v124, v125, v126, v127);
      }
      ++v113;
    }
    while ( v113 < v70->fields._size );
    v74 += v113;
  }
  if ( !v66 )
    goto LABEL_134;
  if ( v66->fields._size >= 1 )
  {
    v132 = 0;
    do
    {
      v133 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v134 = this->fields.kind;
      v135 = System_Collections_Generic_List_object___get_Item(
               v66,
               v132,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v139 = (ListViewItem_o *)sub_1BCAA2C(ShopBuyItemListViewItem_TypeInfo, v136, v137, v138);
      ListViewItem___ctor_41447164(v139, v74 + v132, 0LL);
      v139[1].fields.sortIndex = v134;
      v139[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v139, (ShopEntity_o *)v135, v140);
      if ( !v133 )
        goto LABEL_134;
      v147 = v133->fields._items;
      v148 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v133->fields._version;
      if ( !v147 )
        goto LABEL_134;
      v149 = v133->fields._size;
      if ( (unsigned int)v149 >= v147->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v133,
          (Il2CppObject *)v139,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
      }
      else
      {
        v150 = &v147->obj.klass + v149;
        v133->fields._size = v149 + 1;
        v150[4] = (Il2CppClass *)v139;
        sub_1BCA784((PartyOrganizationUtility_o *)(v150 + 4), (int64_t)v139, v141, v142, v143, v144, v145, v146);
      }
    }
    while ( ++v132 < v66->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    v152 = v179;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.scrollBar;
      if ( !Instance )
        goto LABEL_134;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      v153 = 348LL;
      if ( v177 == 1 )
        v153 = 336LL;
      if ( v177 == 1 )
        v154 = 332LL;
      else
        v154 = 344LL;
      if ( v177 == 1 )
        v155 = 328LL;
      else
        v155 = 340LL;
      v183.fields.z = *(float *)((char *)&this->klass + v153);
      v183.fields.y = *(float *)((char *)&this->klass + v154);
      v183.fields.x = *(float *)((char *)&this->klass + v155);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v183, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_134;
      if ( v177 == 1 )
        v157 = 338;
      else
        v157 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v157, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    v159 = v178;
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_134;
      if ( v177 == 1 )
        v160 = 348;
      else
        v160 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v160, 0LL);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
    if ( !emptyMessageLabel )
LABEL_134:
      sub_1BCAA3C(Instance, v48);
  }
  else
  {
    v162 = this->fields.kind;
    v163 = &StringLiteral_12206/*"SHOP_LIST_EMPTY"*/;
    if ( v162 == 22 )
      v163 = (__int64 *)&StringLiteral_5851/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
    if ( v162 == 12 )
      v164 = (System_String_o **)&StringLiteral_12256/*"SHOP_SPECIAL_LIST_EMPTY"*/;
    else
      v164 = (System_String_o **)v163;
    v165 = *v164;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v152 = v179;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
    Instance = (int64_t)LocalizationManager__Get(v165, 0LL);
    v159 = v178;
    if ( !emptyMessageLabel )
      goto LABEL_134;
  }
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseSortInfo,
      (int64_t)sort,
      v166,
      v167,
      v168,
      v169,
      v170,
      v171);
  }
  if ( !v180 )
    goto LABEL_130;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_134;
  v173 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0LL);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v173 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v173, this->fields.filterBtn, 1, v174);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
      if ( !byte_4B12757 )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, sort, v176);
        byte_4B12757 = 1;
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
  if ( v152 == 22 )
    this->fields.targetExchangeSvtCoinFolder = v159;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_33464912(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_33461920(this, 6, eventId, 0, 0, 0, v3);
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

  if ( (byte_4B126E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B126E0 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_33469684(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1BCAA3C(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0LL, 0LL);
}


void __fastcall ShopBuyItemListViewManager__FocusTopItem(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t IndexByItemId; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4B126C9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B126C9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12758 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12758 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_ShopFocusItemId_k__BackingField >= 1 )
  {
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4, method);
    if ( !byte_4B12758 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
      byte_4B12758 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v5 = TerminalPramsManager_TypeInfo;
    }
    IndexByItemId = ShopBuyItemListViewManager__GetIndexByItemId(
                      this,
                      v5->static_fields->_ShopFocusItemId_k__BackingField,
                      v2);
    if ( (IndexByItemId & 0x80000000) == 0 )
      ListViewManager__SetTopItem((ListViewManager_o *)this, IndexByItemId, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    if ( !byte_4B12759 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
      byte_4B12759 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_ShopFocusItemId_k__BackingField = 0;
  }
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C0C204[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C0C254[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4B126CA & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&kind, method);
    byte_4B126CA = 1;
  }
  if ( (unsigned int)kind > 9 || ((1 << kind) & 0x304) == 0 )
    return -1LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&kind);
  return NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemListViewManager__GetIndexByItemId(
        ShopBuyItemListViewManager_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Predicate_object__o *v20; // x20

  if ( (byte_4B126D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, *(_QWORD *)&itemId, method);
    sub_1BCA7E0(&System_Predicate_ListViewItem__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ShopBuyItemListViewManager___c__DisplayClass52_0__GetIndexByItemId_b__0__, v8, v9);
    sub_1BCA7E0(&ShopBuyItemListViewManager___c__DisplayClass52_0_TypeInfo, v10, v11);
    byte_4B126D2 = 1;
  }
  v12 = sub_1BCAA2C(ShopBuyItemListViewManager___c__DisplayClass52_0_TypeInfo, *(_QWORD *)&itemId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_DWORD *)(v12 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v20 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ListViewItem__TypeInfo, v15, v16, v17);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v12,
    Method_ShopBuyItemListViewManager___c__DisplayClass52_0__GetIndexByItemId_b__0__,
    0LL);
  if ( !itemList )
LABEL_9:
    sub_1BCAA3C(v13, v14);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v20,
           (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int v9; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v14; // x1
  int32_t PayType; // w0

  if ( (byte_4B126DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&ShopBuyItemListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B126DE = 1;
  }
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&eventId);
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
    case 16:
    case 18:
    case 19:
      return result;
    case 4:
    case 13:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_1BCAA3C(Instance, v12);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
      if ( EventItemList && *(_QWORD *)&EventItemList->max_length )
        goto LABEL_14;
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v14);
      PayType = ShopBuyItemListViewManager__GetPayType(eventId, v14);
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
  __int64 v6; // x2
  ShopBuyItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B126D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ShopBuyItemListViewItem_TypeInfo, v5, v6);
    byte_4B126D1 = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v9; // x19

  if ( (byte_4B126D8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__,
      *(_QWORD *)&initMode,
      method);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v6, v7);
    byte_4B126D8 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                      *(_QWORD *)&initMode,
                                                      method,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v9;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ShopEntity_array *Instance; // x0
  __int64 v7; // x1
  ShopEntity_o *v8; // x8

  if ( (byte_4B126DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B126DB = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, eventId, 0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( (int)Instance->max_length >= 1 )
  {
    v8 = Instance->m_Items[0];
    if ( v8 )
      return v8->fields.payType;
LABEL_10:
    sub_1BCAA3C(Instance, v7);
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
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  ShopEntity_array *result; // x0

  if ( (byte_4B126CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B126CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_39:
    sub_1BCAA3C(Instance, v11);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_39;
      v12 = 2;
      goto LABEL_36;
    case 6:
      if ( !Instance )
        goto LABEL_39;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL);
    case 7:
      if ( !Instance )
        goto LABEL_39;
      v12 = 6;
      goto LABEL_36;
    case 8:
      if ( !Instance )
        goto LABEL_39;
      v12 = 7;
      goto LABEL_36;
    case 9:
      if ( !Instance )
        goto LABEL_39;
      v12 = 3;
      goto LABEL_36;
    case 10:
      if ( !Instance )
        goto LABEL_39;
      v12 = 4;
      goto LABEL_36;
    case 11:
      if ( !Instance )
        goto LABEL_39;
      v12 = 5;
      goto LABEL_36;
    case 12:
      if ( !Instance )
        goto LABEL_39;
      v12 = 9;
      goto LABEL_36;
    case 13:
      if ( !Instance )
        goto LABEL_39;
      v12 = 10;
      goto LABEL_36;
    case 14:
      if ( !Instance )
        goto LABEL_39;
      v12 = 11;
      goto LABEL_36;
    case 15:
      if ( !Instance )
        goto LABEL_39;
      v12 = 12;
      goto LABEL_36;
    case 16:
      if ( !Instance )
        goto LABEL_39;
      v12 = 13;
      goto LABEL_36;
    case 18:
      if ( !Instance )
        goto LABEL_39;
      v12 = 14;
      goto LABEL_36;
    case 20:
      if ( !Instance )
        goto LABEL_39;
      v12 = 15;
      goto LABEL_36;
    case 21:
      if ( !Instance )
        goto LABEL_39;
      v12 = 16;
LABEL_36:
      result = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, v12, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v11; // w20
  __int64 v12; // x1
  Il2CppObject *Item; // x21
  bool v14; // w0
  Il2CppObject *Component_object; // x21

  if ( (byte_4B126D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B126D0 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1BCAA3C(objectList, method);
  v11 = 0;
  while ( v11 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v11,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
    Component_object = 0LL;
    if ( v14 )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_18;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v11,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    ++v11;
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

  return ShopBuyItemListViewManager__ModifyList_33468720(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void __fastcall ShopBuyItemListViewManager__ModifyFilterList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ShopEntity_array *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x20
  int32_t eventCount; // w21
  int32_t targetSlot; // w22
  int32_t eventId; // w23
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v17; // x6
  const MethodInfo *v18; // x2

  if ( (byte_4B126CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B126CD = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0LL),
        !Entity) )
  {
    sub_1BCAA3C(Instance, v11);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_33461920(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v17);
  ShopBuyItemListViewManager__SetMode_33469684(this, 2, v18);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyItem(
        ShopBuyItemListViewManager_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v12; // w22
  const MethodInfo *v13; // x2
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8

  if ( (byte_4B126CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity, *(_QWORD *)&shopId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    sub_1BCA7E0(&ShopBuyItemListViewItem_TypeInfo, v9, v10);
    byte_4B126CF = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1BCAA3C(itemList, shopEntity);
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v12,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      ++v12;
      if ( !itemList )
        goto LABEL_13;
    }
    ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)itemList, shopEntity, v13);
  }
  return 1;
}


bool __fastcall ShopBuyItemListViewManager__ModifyList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  return ShopBuyItemListViewManager__ModifyList_33468720(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_33468720(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t Instance; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x6
  int64_t v27; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w8
  ShopBuyItemListViewManager_o *v30; // x0
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w4
  bool v35; // w5
  System_Int32_array *EventItemList; // x26
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x28
  EventDetailEntity_o *v39; // x27
  const MethodInfo *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  ShopCurrencyInfoController_o *v47; // x28
  _BOOL4 isEventShop; // w29
  const MethodInfo *v49; // x6
  int v50; // w8
  __int64 v51; // x27
  ShopEntity_o *v52; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v54; // x3

  if ( (byte_4B126CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B126CE = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (int64_t)ShopBuyItemListViewManager__GetShopEntities(
                        (ShopBuyItemListViewManager_o *)MasterData_object,
                        kind,
                        0,
                        0,
                        v24);
  v27 = Instance;
  if ( kind == 6 )
  {
    if ( MasterData_object )
    {
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, eventId, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v39 = (EventDetailEntity_o *)Entity;
          Instance = (int64_t)ShopBuyItemListViewManager__get_ObjectList(this, v40);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
              Instance,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            if ( v39 )
            {
              v47 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = EventDetailEntity__IsForcedAdjustmentDialog(v39, 0LL);
              if ( v47 )
              {
                ShopCurrencyInfoController__RefreshEventItemInfo(
                  v47,
                  6,
                  eventId,
                  isEventShop,
                  EventItemList,
                  Instance & 1,
                  v49);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1BCAA3C(Instance, v22);
  }
  if ( kind != 12 && kind != 7 )
  {
LABEL_19:
    if ( !v27 )
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
    v50 = *(_DWORD *)(v27 + 24);
    if ( v50 >= 1 )
    {
      v51 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v51 >= v50 )
          sub_1BCAA44(Instance, v22);
        v52 = *(ShopEntity_o **)(v27 + 32 + 8 * v51);
        if ( !v52 )
          goto LABEL_31;
        Instance = ShopBuyItemListViewManager__ModifyItem(
                     this,
                     *(ShopEntity_o **)(v27 + 32 + 8 * v51),
                     v52->fields.id,
                     v25);
        if ( (Instance & 1) == 0 )
        {
          Instance = ShopEntity__IsSoldOut(v52, 0LL);
          if ( (Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v52, 0LL);
            Instance = ShopBuyItemListViewManager__ModifyItem(this, v52, PurchaseShop, v54);
            if ( (Instance & 1) == 0 )
              break;
          }
        }
        v50 = *(_DWORD *)(v27 + 24);
        if ( (int)++v51 >= v50 )
          return 1;
      }
      v35 = isForcedAdjustment;
      v30 = this;
      v31 = kind;
      v32 = eventId;
      v33 = slot;
      v34 = eventNum;
      goto LABEL_30;
    }
    return 1;
  }
  v30 = this;
  v31 = kind;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
LABEL_30:
  ShopBuyItemListViewManager__CreateList_33461920(v30, v31, v32, v33, v34, v35, v26);
  return 0;
}


void __fastcall ShopBuyItemListViewManager__OnClickFilterKind(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B126DF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_ShopBuyItemListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B126DF = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu(v14, 15, sort, v18, 0, 0LL);
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
    sub_1BCA784(p_onClickListViewItem, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( !obj )
      sub_1BCAA3C(v11, v12);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickListViewItem->fields.m_target)(
      onClickListViewItem->fields.original_method_info,
      Index,
      *(_QWORD *)&onClickListViewItem->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemListViewManager__OnMoveEnd(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t callbackCount; // w8
  bool v7; // vf
  int32_t v8; // w8
  ShopBuyItemListViewManager_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  char v12; // w20
  __int64 v13; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  UnityEngine_Object_o *scrollView; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4B126DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B126DA = 1;
  }
  callbackCount = this->fields.callbackCount;
  v7 = __OFSUB__(callbackCount, 1);
  v8 = callbackCount - 1;
  if ( v8 < 0 == v7 )
  {
    this->fields.callbackCount = v8;
    if ( !v8 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      if ( this->fields.initMode == 1 )
      {
        v12 = 1;
        ShopBuyItemListViewManager__SetScrollBarActive(v9, this->fields.scrollBar, 1, v11);
        itemSortList = this->fields.itemSortList;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( itemSortList )
          v12 = itemSortList->fields._size < 1;
        if ( !emptyMessageBase )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive(emptyMessageBase, v12, 0LL);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onMoveEnd, 0LL, v17, v18, v19, v20, v21, v22);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_18:
      sub_1BCAA3C(emptyMessageBase, v13);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w21
  char v14; // w23
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v17; // x1
  float v18; // s8
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t size; // w8
  int32_t v21; // w20
  Il2CppObject *Item; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x24
  const MethodInfo *v27; // x3
  float v28; // s0

  if ( (byte_4B126D9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&initMode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v9, v10);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v11, v12);
    byte_4B126D9 = 1;
  }
  v13 = 6;
  switch ( initMode )
  {
    case 1:
      v14 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v15);
      v18 = 0.1;
      v19 = (System_Collections_Generic_List_object__o *)ObjectList;
      v13 = 4;
      goto LABEL_12;
    case 2:
      v13 = 3;
      goto LABEL_9;
    case 3:
      v13 = 5;
      goto LABEL_9;
    case 4:
      goto LABEL_9;
    case 5:
      v13 = 7;
      goto LABEL_9;
    default:
      v13 = 0;
LABEL_9:
      ObjectList = ShopBuyItemListViewManager__GetObjectList(this, initMode, method);
      v19 = (System_Collections_Generic_List_object__o *)ObjectList;
      v14 = 0;
      if ( (unsigned int)(initMode - 3) >= 2 )
        v18 = 0.0;
      else
        v18 = 0.1;
LABEL_12:
      if ( !v19 )
        goto LABEL_23;
      size = v19->fields._size;
      this->fields.callbackCount = size;
      if ( size < 1 )
      {
        this->fields.callbackCount = 1;
        if ( (v14 & 1) != 0 )
        {
          v28 = this->fields.listInDelay + 0.5;
        }
        else
        {
          v28 = 0.6;
          if ( (unsigned int)(initMode - 3) > 1 )
            v28 = 0.0;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
          v28,
          0LL);
      }
      else
      {
        v21 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v19,
                   v21,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
          System_Action___ctor(v26, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
LABEL_23:
            sub_1BCAA3C(ObjectList, v17);
          ShopBuyItemListViewObject__Init_33472716((ShopBuyItemListViewObject_o *)Item, v13, v26, v18, v27);
          ++v21;
        }
        while ( v21 < v19->fields._size );
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


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&initMode);
    UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__SetFilterActive(
        ShopBuyItemListViewManager_o *this,
        UICommonButton_o *filterBtn,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B126D7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, filterBtn, isActive);
    byte_4B126D7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, filterBtn);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetFilterButtonImage(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *filterSprite; // x20
  __int64 v9; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *v11; // x19
  System_String_o **v12; // x8

  if ( (byte_4B126E1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v6, v7);
    byte_4B126E1 = 1;
  }
  filterSprite = (UnityEngine_Object_o *)this->fields.filterSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(filterSprite, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort
      || (v11 = this->fields.filterSprite,
          sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
          !v11) )
    {
      sub_1BCAA3C(sort, v9);
    }
    v12 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v12 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
    UISprite__set_spriteName(v11, *v12, 0LL);
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
  __int64 v6; // x2
  UnityEngine_Object_o *filterTxtSprite; // x21
  __int64 v8; // x1
  UISprite_o *v9; // x21
  __int64 v10; // x1
  UIWidget_o *v11; // x0

  if ( (byte_4B126D6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, targetFile, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B126D6 = 1;
  }
  filterTxtSprite = (UnityEngine_Object_o *)this->fields.filterTxtSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetFile);
  if ( !UnityEngine_Object__op_Equality(filterTxtSprite, 0LL, 0LL) )
  {
    v9 = this->fields.filterTxtSprite;
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v8);
    EventRewardRootComponent__setRewardInfoImg(v9, targetFile, 0LL);
    v11 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v11 || (UIWidget__set_width(v11, 52, 0LL), (v11 = (UIWidget_o *)this->fields.filterTxtSprite) == 0LL) )
      sub_1BCAA3C(v11, v10);
    UIWidget__set_height(v11, 20, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v12; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *operationSortInfo; // x0
  bool v24; // w2
  bool v25; // w2

  if ( (byte_4B126D5 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17799/*"btn_txt_stock_02"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17798/*"btn_txt_stock"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17728/*"btn_txt_all"*/, v9, v10);
    byte_4B126D5 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v12 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, method, v2, v3);
  ListViewSort___ctor_41481440(v12, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.operationSortInfo, (int64_t)v12, v14, v15, v16, v17, v18, v19);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17799/*"btn_txt_stock_02"*/, v21);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL), (operationSortInfo = *p_operationSortInfo) == 0LL) )
    {
LABEL_18:
      sub_1BCAA3C(operationSortInfo, v20);
    }
    v25 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17798/*"btn_txt_stock"*/, v21);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v24 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17728/*"btn_txt_all"*/, v21);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v24 = 0;
    }
    ListViewSort__SetFilter(operationSortInfo, 52, v24, 0LL);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_18;
    v25 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 53, v25, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClickListViewItem,
    (int64_t)onClickListViewItem,
    (int64_t)onClickListViewItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_33469684(this, mode, v10);
}


void __fastcall ShopBuyItemListViewManager__SetMode_33469684(
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


void __fastcall ShopBuyItemListViewManager__SetMode_33470956(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onMoveEnd,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_33469684(this, mode, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__SetMultiEventScrollInfo(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  void *scrollView; // x0
  float v5; // s0
  float v6; // s2
  float v7; // s8
  float v8; // s9
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B126DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    byte_4B126DD = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v10.fields.x = *((float *)scrollView + 74);
  v10.fields.y = *((float *)scrollView + 75);
  v10.fields.z = *((float *)scrollView + 76);
  v10.fields.w = 400.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v10, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)scrollView,
                                          0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v7 = v5,
        v8 = v6,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(scrollView, method);
  }
  v9.fields.y = 16.0;
  v9.fields.x = v7;
  v9.fields.z = v8;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v9, 0LL);
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
  if ( (byte_4B126D3 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1BCA7E0(&ShopBuyItemListViewObject_TypeInfo, obj, item);
    byte_4B126D3 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
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
  ShopBuyItemListViewObject__Init_33472716((ShopBuyItemListViewObject_o *)obj, v9, 0LL, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B126D4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, scrollBar, isActive);
    byte_4B126D4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scrollBar);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v7);
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
  __int64 v2; // x2
  void *scrollView; // x0
  float v5; // s0
  float v6; // s2
  float v7; // s8
  float v8; // s9
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B126DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    byte_4B126DC = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v10.fields.x = *((float *)scrollView + 74);
  v10.fields.y = *((float *)scrollView + 75);
  v10.fields.z = *((float *)scrollView + 76);
  v10.fields.w = 470.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v10, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)scrollView,
                                          0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v7 = v5,
        v8 = v6,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(scrollView, method);
  }
  v9.fields.y = 82.0;
  v9.fields.x = v7;
  v9.fields.z = v8;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v9, 0LL);
}


void __fastcall ShopBuyItemListViewManager__StopUpdateRemainTime(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BCAA3C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ClippingObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B126C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B126C6 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v23 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopBuyItemListViewObject__GetItem(
                                                                  (ShopBuyItemListViewObject_o *)objectList,
                                                                  v18);
      if ( objectList )
      {
        v18 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            goto LABEL_21;
          items = v17->fields._items;
          v31 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v23,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v17;
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
    sub_1BCAA3C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *__fastcall ShopBuyItemListViewManager__get_ObjectList(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int64_t v32; // x1
  Il2CppClass **v33; // x0

  if ( (byte_4B126C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B126C5 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v17 )
        goto LABEL_17;
      items = v17->fields._items;
      v30 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v17->fields._size;
      v32 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v32;
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v32, v23, v24, v25, v26, v27, v28);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v17;
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

  if ( (byte_4B126E3 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemListViewItem_TypeInfo, n, method);
    byte_4B126E3 = 1;
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