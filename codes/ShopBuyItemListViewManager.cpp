void __fastcall ShopBuyItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v7; // x20
  struct ShopBuyItemListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_49B7277 & 1) == 0 )
  {
    sub_1B4CF90(&ListViewSort_TypeInfo, v1);
    sub_1B4CF90(&ShopBuyItemListViewManager_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_6183/*"ExchangeSvtCoinShop"*/, v5);
    byte_49B7277 = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6183/*"ExchangeSvtCoinShop"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)ShopBuyItemListViewManager_TypeInfo->static_fields, StringLiteral_6183/*"ExchangeSvtCoinShop"*/, v2, v3);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v7 = (ListViewSort_o *)sub_1B4D1DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_41359140(v7, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->exchangeSvtCoinSortInfo, (int32_t)v7, v9, v10);
}


void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_BAA610;
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
    this->fields.filterStatus = dword_BE25A0[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_49B72FC )
  {
    sub_1B4CF90(&EventRewardSaveData_TypeInfo, v4);
    byte_49B72FC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v5;
  EventRewardSaveData__SaveItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
}


void __fastcall ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v7; // x1
  ShopBuyItemListViewManager___c_c *v8; // x8
  System_Collections_Generic_List_object__o *v9; // x19
  System_Action_object__o *_9__49_0; // x20
  Il2CppObject *v11; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_49B725B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_ShopBuyItemListViewObject__TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__, v3);
    sub_1B4CF90(&Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__49_0__, v4);
    sub_1B4CF90(&ShopBuyItemListViewManager___c_TypeInfo, v5);
    byte_49B725B = 1;
  }
  ObjectList = ShopBuyItemListViewManager__get_ObjectList(this, method);
  v8 = ShopBuyItemListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v8 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__49_0 = (System_Action_object__o *)v8->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__49_0 = (System_Action_object__o *)sub_1B4D1DC(System_Action_ShopBuyItemListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__49_0,
      v11,
      Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__49_0__,
      0LL);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_ShopBuyItemListViewObject__o *)_9__49_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v13, v14);
  }
  if ( !v9 )
    sub_1B4D1EC(ObjectList, v7);
  System_Collections_Generic_List_object___ForEach(
    v9,
    (System_Action_T__o *)_9__49_0,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
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

  if ( (byte_49B7261 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49B7261 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_1B4D1EC(Instance, v14);
  }
  if ( itemList->fields._size != Instance->max_length )
    ShopBuyItemListViewManager__CreateList_33171108(this, 6, eventId, slot, eventNum, isForcedAdjustment, v15);
}


AlphaTransitionCalculator_o *__fastcall ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  float v2; // s8
  System_Func_float__float__float__float__o *v3; // x19
  AlphaTransitionCalculator_o *v4; // x20

  if ( (byte_49B725A & 1) == 0 )
  {
    sub_1B4CF90(&AlphaTransitionCalculator_TypeInfo, method);
    byte_49B725A = 1;
  }
  v2 = ChangedFPSUtil__CovertFrameNumToSecond(7, 0LL);
  v3 = ExtraEasing__AsymptoticSeriesFloat(0.5, 7.0, 0LL);
  v4 = (AlphaTransitionCalculator_o *)sub_1B4D1DC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v4, v2, v3, 0LL);
  return v4;
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

  ShopBuyItemListViewManager__CreateList_33171108(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateExchangeSvtCoinList(
        ShopBuyItemListViewManager_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemListViewManager_c *v6; // x0
  struct ListViewSort_o *exchangeSvtCoinSortInfo; // x1
  __int64 v8; // x1
  ListViewSort_o *sort; // x0
  const MethodInfo *v10; // x6
  const MethodInfo *v11; // x1

  if ( (byte_49B725C & 1) == 0 )
  {
    sub_1B4CF90(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&svtCoinType);
    byte_49B725C = 1;
  }
  v6 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
    v6 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v6->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)exchangeSvtCoinSortInfo, (int32_t)method, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B4D1EC(0LL, v8);
  ListViewSort__Load(sort, 0LL);
  ShopBuyItemListViewManager__CreateList_33171108(this, 22, 0, svtCoinType, 0, 0, v10);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v11);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_33171108(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_33171108(
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
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x21
  System_Int32_array *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x6
  const MethodInfo *v40; // x4
  ShopEntity_array *ShopEntities; // x27
  System_Collections_Generic_List_object__o *v42; // x26
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x28
  int v45; // w23
  ShopEntity_o *v46; // x29
  System_Int32_array *targetIds; // x8
  unsigned __int64 v48; // x20
  unsigned __int64 v49; // x9
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  const MethodInfo *v56; // x3
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v58; // w22
  ShopBuyItemListViewItem_o *v59; // x21
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  __int64 v66; // x8
  System_Collections_Generic_List_object__o *v67; // x0
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  int32_t v71; // w27
  System_Collections_Generic_List_object__o *v72; // x28
  int32_t v73; // w21
  Il2CppObject *Item; // x29
  ShopBuyItemListViewItem_o *v75; // x20
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  System_Collections_Generic_List_object__o *v82; // x28
  int32_t v83; // w26
  System_Collections_Generic_List_object__o *v84; // x27
  int32_t v85; // w21
  Il2CppObject *v86; // x28
  ShopBuyItemListViewItem_o *v87; // x20
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v95; // w23
  int32_t v96; // w24
  __int64 v97; // x8
  __int64 v98; // x9
  __int64 v99; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v101; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v103; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v105; // x0
  int32_t v106; // w8
  __int64 *v107; // x9
  __int64 *v108; // x8
  System_String_o *v109; // x21
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  struct ListViewSort_o *sort; // x1
  _BOOL8 v113; // x0
  const MethodInfo *v114; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v116; // [xsp+4h] [xbp-9Ch]
  int32_t v117; // [xsp+Ch] [xbp-94h]
  ShopBuyItemListViewManager_o *v118; // [xsp+10h] [xbp-90h]
  ShopBuyItemListViewManager_o *enterTime; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_object__o *v120; // [xsp+20h] [xbp-80h]
  __int64 v121; // [xsp+28h] [xbp-78h]
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  EventRewardSceneEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B725D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v22);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v23);
    sub_1B4CF90(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B4CF90(&StringLiteral_11903/*"SHOP_SPECIAL_LIST_EMPTY"*/, v26);
    sub_1B4CF90(&StringLiteral_11853/*"SHOP_LIST_EMPTY"*/, v27);
    sub_1B4CF90(&StringLiteral_5606/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v28);
    sub_1B4CF90(&StringLiteral_5671/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/, v29);
    byte_49B725D = 1;
  }
  possessionAnotherItemId = 0LL;
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v33);
  v31 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v31 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_133;
    Instance = (DataManager_o *)ShopMaster__GetEventItemList(
                                  (ShopMaster_o *)MasterData_object,
                                  this->fields.eventId,
                                  0LL);
    if ( !Instance )
      goto LABEL_133;
    currencyInfoController = this->fields.currencyInfoController;
    v36 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v31);
    if ( !currencyInfoController )
      goto LABEL_133;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1B4CF34((CGThumbnailListItem_o *)&currencyInfoController->fields.objectList, (int32_t)Instance, v37, v38);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_133;
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
  v116 = eventNum;
  enterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v31,
                                                v34);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   enterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v40);
  v120 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v120,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v42 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_133;
  max_length = ShopEntities->max_length;
  v117 = slot;
  if ( max_length < 1 )
  {
    v121 = 0LL;
    if ( !v42 )
      goto LABEL_133;
    goto LABEL_57;
  }
  v121 = 0LL;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v45 = 0;
  v118 = this;
  do
  {
    if ( v45 >= (unsigned int)max_length )
LABEL_134:
      sub_1B4D1F4(Instance, v31);
    v46 = ShopEntities->m_Items[v45];
    if ( !v46 )
      goto LABEL_133;
    if ( v46->fields.purchaseType == 6 )
    {
      targetIds = v46->fields.targetIds;
      possessionAnotherItemId = targetIds;
      if ( !targetIds )
        goto LABEL_133;
      v48 = 0LL;
      while ( 1 )
      {
        v49 = targetIds->max_length;
        if ( (__int64)v48 >= (int)v49 )
          break;
        if ( v48 >= v49 )
          goto LABEL_134;
        if ( v44 )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        v44,
                                        targetIds->m_Items[v48 + 1],
                                        (const MethodInfo_319D99C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_53;
          targetIds = possessionAnotherItemId;
          ++v48;
          if ( possessionAnotherItemId )
            continue;
        }
        goto LABEL_133;
      }
    }
    if ( (v121 & 1) != 0 )
    {
      LOBYTE(v121) = 1;
    }
    else
    {
      LOBYTE(v121) = v46->fields.purchaseType == 16;
      this->fields.targetSlot = v46->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v46, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(v46, 0LL) )
    {
      Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v46, &possessionAnotherItemId, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v120 )
          goto LABEL_133;
        items = v120->fields._items;
        v69 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v120->fields._version;
        if ( !items )
          goto LABEL_133;
        size = v120->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v55 = &items->obj.klass + size;
          v120->fields._size = size + 1;
          goto LABEL_48;
        }
        v66 = v69[4];
        v67 = v120;
        goto LABEL_52;
      }
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v46, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_133;
      v52 = v42->fields._items;
      v53 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v42->fields._version;
      if ( !v52 )
        goto LABEL_133;
      v54 = v42->fields._size;
      if ( (unsigned int)v54 < v52->max_length )
      {
        v55 = &v52->obj.klass + v54;
        v42->fields._size = v54 + 1;
LABEL_48:
        v55[4] = (Il2CppClass *)v46;
        sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v46, v50, v51);
        goto LABEL_53;
      }
      v66 = v53[4];
      v67 = v42;
LABEL_52:
      System_Collections_Generic_List_object___AddWithResize(
        v67,
        (Il2CppObject *)v46,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v66 + 192) + 112LL));
      goto LABEL_53;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v46, 0LL);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v46, (int32_t)Instance, v56),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v46->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v58 = this->fields.kind;
        v59 = (ShopBuyItemListViewItem_o *)sub_1B4D1DC(ShopBuyItemListViewItem_TypeInfo);
        ShopBuyItemListViewItem___ctor(v59, SHIDWORD(v121), v58, v46, (int64_t)enterTime, 0LL);
        if ( !itemList )
          goto LABEL_133;
        v62 = itemList->fields._items;
        v63 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v62 )
          goto LABEL_133;
        v64 = itemList->fields._size;
        if ( (unsigned int)v64 >= v62->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v59,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          itemList->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v59;
          sub_1B4CF34((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v59, v60, v61);
        }
        ++HIDWORD(v121);
        this = v118;
      }
    }
LABEL_53:
    max_length = ShopEntities->max_length;
    ++v45;
  }
  while ( v45 < max_length );
  if ( !v42 )
    goto LABEL_133;
LABEL_57:
  if ( v42->fields._size >= 1 )
  {
    v71 = 0;
    do
    {
      v72 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v73 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v42,
               v71,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v75 = (ShopBuyItemListViewItem_o *)sub_1B4D1DC(ShopBuyItemListViewItem_TypeInfo);
      ShopBuyItemListViewItem___ctor(v75, HIDWORD(v121) + v71, v73, (ShopEntity_o *)Item, (int64_t)enterTime, 0LL);
      if ( !v72 )
        goto LABEL_133;
      v78 = v72->fields._items;
      v79 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v72->fields._version;
      if ( !v78 )
        goto LABEL_133;
      v80 = v72->fields._size;
      if ( (unsigned int)v80 >= v78->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v72,
          (Il2CppObject *)v75,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = &v78->obj.klass + v80;
        v72->fields._size = v80 + 1;
        v81[4] = (Il2CppClass *)v75;
        sub_1B4CF34((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v75, v76, v77);
      }
      ++v71;
    }
    while ( v71 < v42->fields._size );
    HIDWORD(v121) += v71;
  }
  v82 = v120;
  if ( !v120 )
LABEL_133:
    sub_1B4D1EC(Instance, v31);
  if ( v120->fields._size >= 1 )
  {
    v83 = 0;
    do
    {
      v84 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v85 = this->fields.kind;
      v86 = System_Collections_Generic_List_object___get_Item(
              v82,
              v83,
              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v87 = (ShopBuyItemListViewItem_o *)sub_1B4D1DC(ShopBuyItemListViewItem_TypeInfo);
      ShopBuyItemListViewItem___ctor(v87, HIDWORD(v121) + v83, v85, (ShopEntity_o *)v86, (int64_t)enterTime, 0LL);
      if ( !v84 )
        goto LABEL_133;
      v90 = v84->fields._items;
      v91 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v84->fields._version;
      if ( !v90 )
        goto LABEL_133;
      v92 = v84->fields._size;
      v82 = v120;
      if ( (unsigned int)v92 >= v90->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v84,
          (Il2CppObject *)v87,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = &v90->obj.klass + v92;
        v84->fields._size = v92 + 1;
        v93[4] = (Il2CppClass *)v87;
        sub_1B4CF34((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v87, v88, v89);
      }
    }
    while ( ++v83 < v120->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    v96 = kind;
    v95 = v117;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollBar;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_133;
      v97 = 348LL;
      if ( v116 == 1 )
        v97 = 336LL;
      if ( v116 == 1 )
        v98 = 332LL;
      else
        v98 = 344LL;
      if ( v116 == 1 )
        v99 = 328LL;
      else
        v99 = 340LL;
      v124.fields.z = *(float *)((char *)&this->klass + v97);
      v124.fields.y = *(float *)((char *)&this->klass + v98);
      v124.fields.x = *(float *)((char *)&this->klass + v99);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v124, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_133;
      if ( v116 == 1 )
        v101 = 338;
      else
        v101 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v101, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_133;
      if ( v116 == 1 )
        v103 = 348;
      else
        v103 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v103, 0LL);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v105 = (System_String_o *)StringLiteral_5606/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/;
  }
  else
  {
    v106 = this->fields.kind;
    v107 = &StringLiteral_11853/*"SHOP_LIST_EMPTY"*/;
    if ( v106 == 22 )
      v107 = (__int64 *)&StringLiteral_5671/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
    if ( v106 == 12 )
      v108 = (__int64 *)&StringLiteral_11903/*"SHOP_SPECIAL_LIST_EMPTY"*/;
    else
      v108 = v107;
    v109 = (System_String_o *)*v108;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v96 = kind;
    v95 = v117;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v105 = v109;
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v105, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_133;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v110, v111);
  }
  if ( (v121 & 1) == 0 )
    goto LABEL_129;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_133;
  v113 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0LL);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v113 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v113, this->fields.filterBtn, 1, v114);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
      if ( !byte_49B72F9 )
      {
        sub_1B4CF90(&EventRewardSaveData_TypeInfo, sort);
        byte_49B72F9 = 1;
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
  if ( v96 == 22 )
    this->fields.targetExchangeSvtCoinFolder = v95;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_33174040(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_33171108(this, 6, eventId, 0, 0, 0, v3);
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

  if ( (byte_49B7275 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49B7275 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_33179024(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1B4D1EC(sort, isDecide);
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

  if ( (byte_49B725E & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B725E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B72FA )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B72FA = 1;
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
    if ( !byte_49B72FA )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
      byte_49B72FA = 1;
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
    if ( !byte_49B72FB )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v7);
      byte_49B72FB = 1;
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


int32_t __fastcall ShopBuyItemListViewManager__GetAlphaAnimCnt(
        ShopBuyItemListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


int32_t __fastcall ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BE25AC[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_BE25FC[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_49B725F & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_49B725F = 1;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t result; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__bool__o *v17; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x21
  System_Predicate_object__o *v19; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x19
  System_Predicate_object__o *v21; // x21

  if ( (byte_49B7267 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_ListViewItem___, *(_QWORD *)&itemId);
    sub_1B4CF90(&System_Func_ListViewItem__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, v6);
    sub_1B4CF90(&System_Predicate_ListViewItem__TypeInfo, v7);
    sub_1B4CF90(&Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__0__, v8);
    sub_1B4CF90(&Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__1__, v9);
    sub_1B4CF90(&Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__2__, v10);
    sub_1B4CF90(&ShopBuyItemListViewManager___c__DisplayClass67_0_TypeInfo, v11);
    byte_49B7267 = 1;
  }
  v12 = sub_1B4D1DC(ShopBuyItemListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_DWORD *)(v12 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v17 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Count_object__49416428(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)v17,
         (const MethodInfo_2F208EC *)Method_System_Linq_Enumerable_Count_ListViewItem___) < 2 )
    goto LABEL_11;
  v18 = this->fields.itemList;
  v19 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__2__,
    0LL);
  if ( !v18 )
    goto LABEL_13;
  result = System_Collections_Generic_List_object___FindIndex(
             (System_Collections_Generic_List_object__o *)v18,
             (System_Predicate_T__o *)v19,
             (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( (result & 0x80000000) != 0 )
  {
LABEL_11:
    v20 = this->fields.itemList;
    v21 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v12,
      Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__1__,
      0LL);
    if ( v20 )
      return System_Collections_Generic_List_object___FindIndex(
               (System_Collections_Generic_List_object__o *)v20,
               (System_Predicate_T__o *)v21,
               (const MethodInfo_3580A34 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
LABEL_13:
    sub_1B4D1EC(v13, v14);
  }
  return result;
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

  if ( (byte_49B7273 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&ShopBuyItemListViewManager_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49B7273 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_1B4D1EC(Instance, v10);
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

  if ( (byte_49B7266 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B4CF90(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_49B7266 = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_49B726D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_1B4CF90(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v5);
    byte_49B726D = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v7 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v7;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopEntity_array *Instance; // x0
  __int64 v5; // x1
  ShopEntity_o *v6; // x8

  if ( (byte_49B7270 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49B7270 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_1B4D1EC(Instance, v5);
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

  if ( (byte_49B7260 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49B7260 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_39:
    sub_1B4D1EC(Instance, v10);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ShopMaster___);
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

  if ( (byte_49B7265 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B7265 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1B4D1EC(objectList, method);
  v7 = 0;
  while ( v7 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v7,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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

  return ShopBuyItemListViewManager__ModifyList_33178060(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_49B7262 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49B7262 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_319D99C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0LL),
        !Entity) )
  {
    sub_1B4D1EC(Instance, v7);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_33171108(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v13);
  ShopBuyItemListViewManager__SetMode_33179024(this, 2, v14);
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
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8

  if ( (byte_49B7264 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B4CF90(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_49B7264 = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1B4D1EC(itemList, shopEntity);
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)itemList, shopEntity, 0LL);
  }
  return 1;
}


bool __fastcall ShopBuyItemListViewManager__ModifyList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  return ShopBuyItemListViewManager__ModifyList_33178060(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_33178060(
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
  const MethodInfo *v38; // x3
  ShopCurrencyInfoController_o *v39; // x28
  _BOOL4 isEventShop; // w29
  const MethodInfo *v41; // x6
  int m_CancellationTokenSource; // w8
  __int64 v43; // x27
  ShopEntity_o *v44; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v46; // x3

  if ( (byte_49B7263 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49B7263 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ShopMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_319D99C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v35 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v36);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1B4CF34(
              (CGThumbnailListItem_o *)&currencyInfoController->fields.objectList,
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
    sub_1B4D1EC(Instance, v18);
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
          sub_1B4D1F4(Instance, v18);
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
  ShopBuyItemListViewManager__CreateList_33171108(v26, v27, v28, v29, v30, v31, v22);
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

  if ( (byte_49B7274 & 1) == 0 )
  {
    sub_1B4CF90(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__, v3);
    sub_1B4CF90(&Method_ShopBuyItemListViewManager_OnClickFilterKind__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49B7274 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B4CFA8(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B4D1DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B4D1EC(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 15, sort, v11, 0, 0LL);
  }
}


void __fastcall ShopBuyItemListViewManager__OnClickListView(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_int__o *onClickListViewItem; // x20
  CGThumbnailListItem_o *p_onClickListViewItem; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned int Index; // w0

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    p_onClickListViewItem = (CGThumbnailListItem_o *)&this->fields.onClickListViewItem;
    p_onClickListViewItem->klass = 0LL;
    sub_1B4CF34(p_onClickListViewItem, 0, (int32_t)method, v3);
    if ( !obj )
      sub_1B4D1EC(v7, v8);
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
  const MethodInfo *v15; // x3
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_49B726F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B726F = 1;
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
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onMoveEnd, 0, v14, v15);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_18:
      sub_1B4D1EC(emptyMessageBase, v10);
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

  if ( (byte_49B726E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_1B4CF90(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_1B4CF90(&StringLiteral_9737/*"OnMoveEnd"*/, v8);
    byte_49B726E = 1;
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
          (System_String_o *)StringLiteral_9737/*"OnMoveEnd"*/,
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
                   (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v19 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
LABEL_23:
            sub_1B4D1EC(ObjectList, v13);
          ShopBuyItemListViewObject__Init_33182056((ShopBuyItemListViewObject_o *)Item, v9, v19, v14, v20);
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
      sub_1B4D1EC(0LL, initMode);
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

  if ( (byte_49B726C & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_49B726C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_1B4D1EC(gameObject, v7);
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

  if ( (byte_49B7276 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_17197/*"btn_filter_on"*/, v3);
    sub_1B4CF90(&StringLiteral_17196/*"btn_filter"*/, v4);
    byte_49B7276 = 1;
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
      sub_1B4D1EC(sort, v6);
    }
    v9 = (System_String_o **)&StringLiteral_17196/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v9 = (System_String_o **)&StringLiteral_17197/*"btn_filter_on"*/;
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

  if ( (byte_49B726B & 1) == 0 )
  {
    sub_1B4CF90(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B726B = 1;
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
      sub_1B4D1EC(v9, v8);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *operationSortInfo; // x0
  bool v15; // w2
  bool v16; // w2

  if ( (byte_49B726A & 1) == 0 )
  {
    sub_1B4CF90(&ListViewSort_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_17309/*"btn_txt_stock_02"*/, v3);
    sub_1B4CF90(&StringLiteral_17308/*"btn_txt_stock"*/, v4);
    sub_1B4CF90(&StringLiteral_17238/*"btn_txt_all"*/, v5);
    byte_49B726A = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v7 = (ListViewSort_o *)sub_1B4D1DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_41359864(v7, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v7, v9, v10);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17309/*"btn_txt_stock_02"*/, v12);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL), (operationSortInfo = *p_operationSortInfo) == 0LL) )
    {
LABEL_18:
      sub_1B4D1EC(operationSortInfo, v11);
    }
    v16 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17308/*"btn_txt_stock"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v15 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17238/*"btn_txt_all"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v15 = 0;
    }
    ListViewSort__SetFilter(operationSortInfo, 52, v15, 0LL);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_18;
    v16 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 53, v16, 0LL);
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
  const MethodInfo *v6; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    method);
  ShopBuyItemListViewManager__SetMode_33179024(this, mode, v6);
}


void __fastcall ShopBuyItemListViewManager__SetMode_33179024(
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


void __fastcall ShopBuyItemListViewManager__SetMode_33180296(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)callback, (int32_t)callback, method);
  ShopBuyItemListViewManager__SetMode_33179024(this, mode, v7);
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

  if ( (byte_49B7272 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_49B7272 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B4D1EC(scrollView, method);
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
  if ( (byte_49B7268 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1B4CF90(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_49B7268 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1B4D1EC(this, obj);
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
  ShopBuyItemListViewObject__Init_33182056((ShopBuyItemListViewObject_o *)obj, v9, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_49B7269 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_49B7269 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1B4D1EC(gameObject, v7);
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

  if ( (byte_49B7271 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_49B7271 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B4D1EC(scrollView, method);
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
    sub_1B4D1EC(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
}


void __fastcall ShopBuyItemListViewManager__Update(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  ShopBuyItemListViewManager__UpdateAnotherBuyAble(this, v3);
}


void __fastcall ShopBuyItemListViewManager__UpdateAnotherBuyAble(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *anotherBuyAbleAlphaTransitionCalculator; // x0
  struct AlphaTransitionCalculator_o **p_anotherBuyAbleAlphaTransitionCalculator; // x20
  AlphaTransitionCalculator_o *AlphaTransitionCalculator; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  float realtimeSinceStartup; // s0
  float v10; // s0
  const MethodInfo *v11; // x1
  float v12; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v14; // w8

  if ( (byte_49B7259 & 1) == 0 )
  {
    sub_1B4CF90(&Method_TransitionCalculator_float__Update__, method);
    byte_49B7259 = 1;
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  p_anotherBuyAbleAlphaTransitionCalculator = &this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
  {
    AlphaTransitionCalculator = ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(0LL, method);
    *p_anotherBuyAbleAlphaTransitionCalculator = AlphaTransitionCalculator;
    sub_1B4CF34(
      (CGThumbnailListItem_o *)&this->fields.anotherBuyAbleAlphaTransitionCalculator,
      (int32_t)AlphaTransitionCalculator,
      v6,
      v7);
    anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
    if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0LL);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
  }
  v10 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)anotherBuyAbleAlphaTransitionCalculator,
          (const MethodInfo_382D8B8 *)Method_TransitionCalculator_float__Update__);
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  this->fields.alphaAnimNow = v10;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0LL)
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.alphaAnimTimeOld) >= 3.0 )
  {
    anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
    if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__StartFadeOut(anotherBuyAbleAlphaTransitionCalculator, 0LL);
  }
  anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
  if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(anotherBuyAbleAlphaTransitionCalculator, 0LL) )
    return;
  anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
  if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
LABEL_19:
    sub_1B4D1EC(anotherBuyAbleAlphaTransitionCalculator, v8);
  AlphaTransitionCalculator__StartFadeIn(anotherBuyAbleAlphaTransitionCalculator, 0LL);
  v12 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  if ( alphaAnimCnt + 1 < 232792560 )
    v14 = alphaAnimCnt + 1;
  else
    v14 = alphaAnimCnt - 232792559;
  this->fields.alphaAnimTimeOld = v12;
  this->fields.alphaAnimCnt = v14;
  ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(this, v11);
}


float __fastcall ShopBuyItemListViewManager__get_AlphaAnimNow(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
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
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49B7258 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    byte_49B7258 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1B4D1EC(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41341816(
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
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
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
    sub_1B4D1EC(this, method);
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
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_49B7257 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    byte_49B7257 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1B4D1EC(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
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


void __fastcall ShopBuyItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B7278 & 1) == 0 )
  {
    sub_1B4CF90(&ShopBuyItemListViewManager___c_TypeInfo, v1);
    byte_49B7278 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ShopBuyItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopBuyItemListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopBuyItemListViewManager___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ShopBuyItemListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ShopBuyItemListViewManager___c___ctor(ShopBuyItemListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager___c___ChangeNextAnotherItemIcon_b__49_0(
        ShopBuyItemListViewManager___c_o *this,
        ShopBuyItemListViewObject_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49B7279 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, x);
    byte_49B7279 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( v4 )
  {
    if ( !x )
      sub_1B4D1EC(v4, v5);
    ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(x, v5);
  }
}


void __fastcall ShopBuyItemListViewManager___c__DisplayClass67_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass67_0___GetIndexByItemId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass67_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int32_t ItemId; // w0

  if ( (byte_49B727A & 1) == 0 )
  {
    sub_1B4CF90(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_49B727A = 1;
  }
  if ( n
    && (methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(n->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    ItemId = ShopBuyItemListViewItem__get_ItemId((ShopBuyItemListViewItem_o *)n, 0LL);
  }
  else
  {
    ItemId = 0;
  }
  return ItemId == this->fields.itemId;
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass67_0___GetIndexByItemId_b__1(
        ShopBuyItemListViewManager___c__DisplayClass67_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int32_t ItemId; // w0

  if ( (byte_49B727C & 1) == 0 )
  {
    sub_1B4CF90(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_49B727C = 1;
  }
  if ( n
    && (methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(n->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    ItemId = ShopBuyItemListViewItem__get_ItemId((ShopBuyItemListViewItem_o *)n, 0LL);
  }
  else
  {
    ItemId = 0;
  }
  return ItemId == this->fields.itemId;
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass67_0___GetIndexByItemId_b__2(
        ShopBuyItemListViewManager___c__DisplayClass67_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  ListViewItem_c *klass; // x9
  ShopBuyItemListViewItem_c *v6; // x8
  unsigned int methodPtr_low; // w11
  __int64 v8; // x10

  if ( (byte_49B727B & 1) == 0 )
  {
    sub_1B4CF90(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_49B727B = 1;
  }
  if ( !n )
    return 0;
  klass = n->klass;
  v6 = ShopBuyItemListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(n->klass->vtable._0_Equals.methodPtr);
  v8 = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( methodPtr_low >= (unsigned int)v8
    && (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[v8 - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    if ( ShopBuyItemListViewItem__get_ItemId((ShopBuyItemListViewItem_o *)n, 0LL) != this->fields.itemId )
      return 0;
    klass = n->klass;
    v6 = ShopBuyItemListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(n->klass->vtable._0_Equals.methodPtr);
    LODWORD(v8) = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  }
  else if ( this->fields.itemId )
  {
    return 0;
  }
  if ( methodPtr_low >= (unsigned int)v8
    && (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[(unsigned int)v8 - 1] == v6 )
  {
    return !ShopBuyItemListViewItem__IsDisabledDisp((ShopBuyItemListViewItem_o *)n, 0LL);
  }
  return 0;
}