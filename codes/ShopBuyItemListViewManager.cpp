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

  if ( (byte_4AFE2E7 & 1) == 0 )
  {
    sub_1BC3008(&ListViewSort_TypeInfo, v1);
    sub_1BC3008(&ShopBuyItemListViewManager_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_6238/*"ExchangeSvtCoinShop"*/, v5);
    byte_4AFE2E7 = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6238/*"ExchangeSvtCoinShop"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)ShopBuyItemListViewManager_TypeInfo->static_fields, StringLiteral_6238/*"ExchangeSvtCoinShop"*/, v2, v3);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v7 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v7, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->exchangeSvtCoinSortInfo, (int32_t)v7, v9, v10);
}


void __fastcall ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_BDEB80;
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
    this->fields.filterStatus = dword_C1724C[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_4AFC641 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v4);
    byte_4AFC641 = 1;
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
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v11; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4AFE2C9 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_ShopBuyItemListViewObject__TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__, v3);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__, v4);
    sub_1BC3008(&ShopBuyItemListViewManager___c_TypeInfo, v5);
    byte_4AFE2C9 = 1;
  }
  ObjectList = ShopBuyItemListViewManager__get_ObjectList(this, method);
  v8 = ShopBuyItemListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v8 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__51_0 = (System_Action_object__o *)v8->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_1BC3254(System_Action_ShopBuyItemListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__51_0,
      v11,
      Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__,
      0LL);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_ShopBuyItemListViewObject__o *)_9__51_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v13, v14);
  }
  if ( !v9 )
    sub_1BC3264(ObjectList, v7);
  System_Collections_Generic_List_object___ForEach(
    v9,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
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

  if ( (byte_4AFE2CF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4AFE2CF = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_1BC3264(Instance, v14);
  }
  if ( itemList->fields._size != Instance->max_length )
    ShopBuyItemListViewManager__CreateList_34282040(this, 6, eventId, slot, eventNum, isForcedAdjustment, v15);
}


AlphaTransitionCalculator_o *__fastcall ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  float v2; // s8
  System_Func_float__float__float__float__o *v3; // x19
  AlphaTransitionCalculator_o *v4; // x20

  if ( (byte_4AFE2C8 & 1) == 0 )
  {
    sub_1BC3008(&AlphaTransitionCalculator_TypeInfo, method);
    byte_4AFE2C8 = 1;
  }
  v2 = ChangedFPSUtil__CovertFrameNumToSecond(7, 0LL);
  v3 = ExtraEasing__AsymptoticSeriesFloat(0.5, 7.0, 0LL);
  v4 = (AlphaTransitionCalculator_o *)sub_1BC3254(AlphaTransitionCalculator_TypeInfo);
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

  ShopBuyItemListViewManager__CreateList_34282040(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_4AFE2CA & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&svtCoinType);
    byte_4AFE2CA = 1;
  }
  v6 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
    v6 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v6->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)exchangeSvtCoinSortInfo, (int32_t)method, v3);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BC3264(0LL, v8);
  ListViewSort__Load(sort, 0LL);
  ShopBuyItemListViewManager__CreateList_34282040(this, 22, 0, svtCoinType, 0, 0, v10);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v11);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34282040(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_34282040(
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
  const MethodInfo *v39; // x4
  ShopEntity_array *ShopEntities; // x27
  System_Collections_Generic_List_object__o *v41; // x26
  Il2CppObject *v42; // x28
  const MethodInfo *v43; // x3
  __int64 v44; // x2
  int max_length; // w8
  ShopBuyItemListViewManager_o *v46; // x25
  void **v47; // x21
  int v48; // w22
  bool v49; // w24
  ShopEntity_o *v50; // x29
  System_Int32_array *targetIds; // x8
  unsigned __int64 v52; // x20
  unsigned __int64 v53; // x9
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  const MethodInfo *v60; // x3
  void **v61; // x27
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v63; // w25
  ListViewItem_o *v64; // x20
  const MethodInfo *v65; // x2
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  __int64 v72; // x8
  System_Collections_Generic_List_object__o *v73; // x0
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  int32_t v77; // w27
  System_Collections_Generic_List_object__o *v78; // x28
  int32_t v79; // w23
  Il2CppObject *Item; // x29
  ListViewItem_o *v81; // x20
  const MethodInfo *v82; // x2
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  System_Collections_Generic_List_object__o *v89; // x28
  int32_t v90; // w26
  System_Collections_Generic_List_object__o *v91; // x27
  int32_t v92; // w23
  Il2CppObject *v93; // x28
  ListViewItem_o *v94; // x20
  const MethodInfo *v95; // x2
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v103; // w23
  __int64 v104; // x8
  __int64 v105; // x9
  __int64 v106; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v108; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v110; // w22
  int32_t v111; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v113; // x1
  int32_t v114; // w8
  __int64 *v115; // x9
  System_String_o **v116; // x8
  System_String_o *v117; // x21
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  struct ListViewSort_o *sort; // x1
  _BOOL8 v121; // x0
  const MethodInfo *v122; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v124; // [xsp+4h] [xbp-9Ch]
  int32_t v125; // [xsp+8h] [xbp-98h]
  int32_t v126; // [xsp+Ch] [xbp-94h]
  ShopEntity_array *v127; // [xsp+10h] [xbp-90h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_object__o *v129; // [xsp+20h] [xbp-80h]
  int32_t index; // [xsp+2Ch] [xbp-74h]
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  EventRewardSceneEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFE2CB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_1BC3008(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_1BC3008(&LocalizationManager_TypeInfo, v22);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v23);
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BC3008(&StringLiteral_12066/*"SHOP_SPECIAL_LIST_EMPTY"*/, v26);
    sub_1BC3008(&StringLiteral_12015/*"SHOP_LIST_EMPTY"*/, v27);
    sub_1BC3008(&StringLiteral_5658/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v28);
    sub_1BC3008(&StringLiteral_5723/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/, v29);
    byte_4AFE2CB = 1;
  }
  possessionAnotherItemId = 0LL;
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    Instance = (DataManager_o *)ShopMaster__GetEventItemList(
                                  (ShopMaster_o *)MasterData_object,
                                  this->fields.eventId,
                                  0LL);
    if ( !Instance )
      goto LABEL_134;
    currencyInfoController = this->fields.currencyInfoController;
    v36 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v31);
    if ( !currencyInfoController )
      goto LABEL_134;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1BC2FAC((CGThumbnailListItem_o *)&currencyInfoController->fields.objectList, (int32_t)Instance, v37, v38);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_134;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v36,
      isForcedAdjustment,
      0LL);
    LODWORD(v31) = this->fields.kind;
  }
  v124 = eventNum;
  v126 = kind;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v31,
                                                v34);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v39);
  v129 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v129,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  v42 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
  ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v43);
  if ( !ShopEntities )
    goto LABEL_134;
  max_length = ShopEntities->max_length;
  v46 = EnterTime;
  v125 = slot;
  if ( max_length < 1 )
  {
    v49 = 0;
    index = 0;
    if ( !v41 )
      goto LABEL_134;
    goto LABEL_57;
  }
  index = 0;
  v47 = &Method_System_Collections_Generic_List_ShopEntity__Add__;
  v48 = 0;
  v49 = 0;
  v127 = ShopEntities;
  do
  {
    if ( v48 >= (unsigned int)max_length )
LABEL_135:
      sub_1BC326C(Instance, v31, v44);
    v50 = ShopEntities->m_Items[v48];
    if ( !v50 )
      goto LABEL_134;
    if ( v50->fields.purchaseType == 6 )
    {
      targetIds = v50->fields.targetIds;
      possessionAnotherItemId = targetIds;
      if ( !targetIds )
        goto LABEL_134;
      v52 = 0LL;
      while ( 1 )
      {
        v53 = targetIds->max_length;
        if ( (__int64)v52 >= (int)v53 )
          break;
        if ( v52 >= v53 )
          goto LABEL_135;
        if ( v42 )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v42,
                                        targetIds->m_Items[v52 + 1],
                                        (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_53;
          targetIds = possessionAnotherItemId;
          ++v52;
          if ( possessionAnotherItemId )
            continue;
        }
        goto LABEL_134;
      }
    }
    if ( v49 )
    {
      v49 = 1;
    }
    else
    {
      v49 = v50->fields.purchaseType == 16;
      this->fields.targetSlot = v50->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v50, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(v50, 0LL) )
    {
      Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v50, &possessionAnotherItemId, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v129 )
          goto LABEL_134;
        items = v129->fields._items;
        v75 = *v47;
        ++v129->fields._version;
        if ( !items )
          goto LABEL_134;
        size = v129->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v59 = &items->obj.klass + size;
          v129->fields._size = size + 1;
          goto LABEL_48;
        }
        v72 = v75[4];
        v73 = v129;
        goto LABEL_52;
      }
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v50, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_134;
      v56 = v41->fields._items;
      v57 = *v47;
      ++v41->fields._version;
      if ( !v56 )
        goto LABEL_134;
      v58 = v41->fields._size;
      if ( (unsigned int)v58 < v56->max_length )
      {
        v59 = &v56->obj.klass + v58;
        v41->fields._size = v58 + 1;
LABEL_48:
        v59[4] = (Il2CppClass *)v50;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v50, v54, v55);
        goto LABEL_53;
      }
      v72 = v57[4];
      v73 = v41;
LABEL_52:
      System_Collections_Generic_List_object___AddWithResize(
        v73,
        (Il2CppObject *)v50,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v72 + 192) + 112LL));
      goto LABEL_53;
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v50, 0LL);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v50, (int32_t)Instance, v60),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v50->fields.id >= 1 )
      {
        v61 = v47;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v63 = this->fields.kind;
        v64 = (ListViewItem_o *)sub_1BC3254(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_42769384(v64, index, 0LL);
        v64[1].fields.sortIndex = v63;
        v46 = EnterTime;
        v64[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v64, v50, v65);
        if ( !itemList )
          goto LABEL_134;
        v68 = itemList->fields._items;
        v69 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v68 )
          goto LABEL_134;
        v70 = itemList->fields._size;
        if ( (unsigned int)v70 >= v68->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v64,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = &v68->obj.klass + v70;
          itemList->fields._size = v70 + 1;
          v71[4] = (Il2CppClass *)v64;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v64, v66, v67);
        }
        v47 = v61;
        ShopEntities = v127;
        ++index;
      }
    }
LABEL_53:
    max_length = ShopEntities->max_length;
    ++v48;
  }
  while ( v48 < max_length );
  if ( !v41 )
    goto LABEL_134;
LABEL_57:
  if ( v41->fields._size >= 1 )
  {
    v77 = 0;
    do
    {
      v78 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v79 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v41,
               v77,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v81 = (ListViewItem_o *)sub_1BC3254(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_42769384(v81, index + v77, 0LL);
      v81[1].fields.sortIndex = v79;
      v81[1].fields.sortValue0 = (int64_t)v46;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v81, (ShopEntity_o *)Item, v82);
      if ( !v78 )
        goto LABEL_134;
      v85 = v78->fields._items;
      v86 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v78->fields._version;
      if ( !v85 )
        goto LABEL_134;
      v87 = v78->fields._size;
      if ( (unsigned int)v87 >= v85->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v78,
          (Il2CppObject *)v81,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = &v85->obj.klass + v87;
        v78->fields._size = v87 + 1;
        v88[4] = (Il2CppClass *)v81;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v88 + 4), (int32_t)v81, v83, v84);
      }
      ++v77;
    }
    while ( v77 < v41->fields._size );
    index += v77;
  }
  v89 = v129;
  if ( !v129 )
    goto LABEL_134;
  if ( v129->fields._size >= 1 )
  {
    v90 = 0;
    do
    {
      v91 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v92 = this->fields.kind;
      v93 = System_Collections_Generic_List_object___get_Item(
              v89,
              v90,
              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v94 = (ListViewItem_o *)sub_1BC3254(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_42769384(v94, index + v90, 0LL);
      v94[1].fields.sortIndex = v92;
      v94[1].fields.sortValue0 = (int64_t)v46;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v94, (ShopEntity_o *)v93, v95);
      if ( !v91 )
        goto LABEL_134;
      v98 = v91->fields._items;
      v99 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v91->fields._version;
      if ( !v98 )
        goto LABEL_134;
      v100 = v91->fields._size;
      v89 = v129;
      if ( (unsigned int)v100 >= v98->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v91,
          (Il2CppObject *)v94,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = &v98->obj.klass + v100;
        v91->fields._size = v100 + 1;
        v101[4] = (Il2CppClass *)v94;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v101 + 4), (int32_t)v94, v96, v97);
      }
    }
    while ( ++v90 < v129->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    v103 = v126;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollBar;
      if ( !Instance )
        goto LABEL_134;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      v104 = 348LL;
      if ( v124 == 1 )
        v104 = 336LL;
      if ( v124 == 1 )
        v105 = 332LL;
      else
        v105 = 344LL;
      if ( v124 == 1 )
        v106 = 328LL;
      else
        v106 = 340LL;
      v133.fields.z = *(float *)((char *)&this->klass + v104);
      v133.fields.y = *(float *)((char *)&this->klass + v105);
      v133.fields.x = *(float *)((char *)&this->klass + v106);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v133, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_134;
      if ( v124 == 1 )
        v108 = 338;
      else
        v108 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v108, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v110 = v125;
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_134;
      if ( v124 == 1 )
        v111 = 348;
      else
        v111 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v111, 0LL);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5658/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
    if ( emptyMessageLabel )
    {
      v113 = (System_String_o *)Instance;
      goto LABEL_119;
    }
LABEL_134:
    sub_1BC3264(Instance, v31);
  }
  v114 = this->fields.kind;
  v115 = &StringLiteral_12015/*"SHOP_LIST_EMPTY"*/;
  if ( v114 == 22 )
    v115 = (__int64 *)&StringLiteral_5723/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
  if ( v114 == 12 )
    v116 = (System_String_o **)&StringLiteral_12066/*"SHOP_SPECIAL_LIST_EMPTY"*/;
  else
    v116 = (System_String_o **)v115;
  v117 = *v116;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v103 = v126;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v117, 0LL);
  v110 = v125;
  if ( !emptyMessageLabel )
    goto LABEL_134;
  v113 = (System_String_o *)Instance;
LABEL_119:
  UILabel__set_text(emptyMessageLabel, v113, 0LL);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v118, v119);
  }
  if ( !v49 )
    goto LABEL_130;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_134;
  v121 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0LL);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v121 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v121, this->fields.filterBtn, 1, v122);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
      if ( !byte_4AFC642 )
      {
        sub_1BC3008(&EventRewardSaveData_TypeInfo, sort);
        byte_4AFC642 = 1;
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
  if ( v103 == 22 )
    this->fields.targetExchangeSvtCoinFolder = v110;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_34285044(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34282040(this, 6, eventId, 0, 0, 0, v3);
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

  if ( (byte_4AFE2E4 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AFE2E4 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_34292448(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1BC3264(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__FocusTopItem(
        ShopBuyItemListViewManager_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  int32_t ShopFocusItemId_k__BackingField; // w1
  unsigned int IndexByTargetId; // w0
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4AFE2CC & 1) == 0 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_4AFE2CC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFE2E8 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_4AFE2E8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_ShopFocusItemId_k__BackingField >= 1 )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4AFE2E8 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
      byte_4AFE2E8 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    ShopFocusItemId_k__BackingField = v6->static_fields->_ShopFocusItemId_k__BackingField;
    if ( state == 22 )
      IndexByTargetId = ShopBuyItemListViewManager__GetIndexByTargetId(this, ShopFocusItemId_k__BackingField, method);
    else
      IndexByTargetId = ShopBuyItemListViewManager__GetIndexByItemId(this, ShopFocusItemId_k__BackingField, method);
    v9 = IndexByTargetId;
    if ( (IndexByTargetId & 0x80000000) == 0 )
      ListViewManager__SetTopItem((ListViewManager_o *)this, IndexByTargetId, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFE2E9 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v9);
      byte_4AFE2E9 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_ShopFocusItemId_k__BackingField = 0;
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
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_C17258[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_C172AC[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4AFE2CD & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_4AFE2CD = 1;
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
  ShopBuyItemListViewManager___c__DisplayClass69_0_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t result; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__bool__o *v17; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x21
  System_Predicate_object__o *v19; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x19
  System_Predicate_object__o *v21; // x21

  if ( (byte_4AFE2D5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_ListViewItem___, *(_QWORD *)&itemId);
    sub_1BC3008(&System_Func_ListViewItem__bool__TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, v6);
    sub_1BC3008(&System_Predicate_ListViewItem__TypeInfo, v7);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__, v8);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__, v9);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__2__, v10);
    sub_1BC3008(&ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo, v11);
    byte_4AFE2D5 = 1;
  }
  v12 = (ShopBuyItemListViewManager___c__DisplayClass69_0_o *)sub_1BC3254(ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo);
  ShopBuyItemListViewManager___c__DisplayClass69_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v12->fields.itemId = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v17 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_ListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Count_object__50461416(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)v17,
         (const MethodInfo_301FAE8 *)Method_System_Linq_Enumerable_Count_ListViewItem___) < 2 )
    goto LABEL_11;
  v18 = this->fields.itemList;
  v19 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__2__,
    0LL);
  if ( !v18 )
    goto LABEL_13;
  result = System_Collections_Generic_List_object___FindIndex(
             (System_Collections_Generic_List_object__o *)v18,
             (System_Predicate_T__o *)v19,
             (const MethodInfo_36A1698 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( (result & 0x80000000) != 0 )
  {
LABEL_11:
    v20 = this->fields.itemList;
    v21 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v12,
      Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__,
      0LL);
    if ( v20 )
      return System_Collections_Generic_List_object___FindIndex(
               (System_Collections_Generic_List_object__o *)v20,
               (System_Predicate_T__o *)v21,
               (const MethodInfo_36A1698 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
LABEL_13:
    sub_1BC3264(v13, v14);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemListViewManager__GetIndexByTargetId(
        ShopBuyItemListViewManager_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ShopBuyItemListViewManager___c__DisplayClass70_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4AFE2D6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, *(_QWORD *)&targetId);
    sub_1BC3008(&System_Predicate_ListViewItem__TypeInfo, v5);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__, v6);
    sub_1BC3008(&ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo, v7);
    byte_4AFE2D6 = 1;
  }
  v8 = (ShopBuyItemListViewManager___c__DisplayClass70_0_o *)sub_1BC3254(ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo);
  ShopBuyItemListViewManager___c__DisplayClass70_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  v8->fields.targetId = targetId;
  if ( targetId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v13 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__,
    0LL);
  if ( !itemList )
LABEL_9:
    sub_1BC3264(v9, v10);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_36A1698 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
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

  if ( (byte_4AFE2E2 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&ShopBuyItemListViewManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4AFE2E2 = 1;
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
    case 21:
      return result;
    case 4:
    case 13:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_1BC3264(Instance, v10);
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

  if ( (byte_4AFE2D4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_4AFE2D4 = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4AFE2DC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_1BC3008(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v5);
    byte_4AFE2DC = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v7 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v7;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopEntity_array *Instance; // x0
  __int64 v5; // x1
  ShopEntity_o *v6; // x8

  if ( (byte_4AFE2DF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4AFE2DF = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_1BC3264(Instance, v5);
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
  int32_t v13; // w1

  if ( (byte_4AFE2CE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AFE2CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1BC3264(Instance, v10);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_42;
      v11 = 2;
      goto LABEL_36;
    case 6:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL);
    case 7:
      if ( !Instance )
        goto LABEL_42;
      v11 = 6;
      goto LABEL_36;
    case 8:
      if ( !Instance )
        goto LABEL_42;
      v11 = 7;
      goto LABEL_36;
    case 9:
      if ( !Instance )
        goto LABEL_42;
      v11 = 3;
      goto LABEL_36;
    case 10:
      if ( !Instance )
        goto LABEL_42;
      v11 = 4;
      goto LABEL_36;
    case 11:
      if ( !Instance )
        goto LABEL_42;
      v11 = 5;
      goto LABEL_36;
    case 12:
      if ( !Instance )
        goto LABEL_42;
      v11 = 9;
      goto LABEL_36;
    case 13:
      if ( !Instance )
        goto LABEL_42;
      v11 = 10;
      goto LABEL_36;
    case 14:
      if ( !Instance )
        goto LABEL_42;
      v11 = 11;
      goto LABEL_36;
    case 15:
      if ( !Instance )
        goto LABEL_42;
      v11 = 12;
      goto LABEL_36;
    case 16:
      if ( !Instance )
        goto LABEL_42;
      v11 = 13;
      goto LABEL_36;
    case 18:
      if ( !Instance )
        goto LABEL_42;
      v11 = 14;
      goto LABEL_36;
    case 20:
      if ( !Instance )
        goto LABEL_42;
      v11 = 15;
      goto LABEL_36;
    case 21:
      if ( !Instance )
        goto LABEL_42;
      v11 = 16;
LABEL_36:
      v13 = 0;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v13, v11, 0LL);
    case 22:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableExchangeSvtCoinEntitiyList((ShopMaster_o *)Instance, slot, 0LL);
    case 23:
      if ( !Instance )
        goto LABEL_42;
      v13 = 23;
      v11 = 18;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v13, v11, 0LL);
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

  if ( (byte_4AFE2D3 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFE2D3 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1BC3264(objectList, method);
  v7 = 0;
  while ( v7 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v7,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
      ShopBuyItemListViewObject__SetupDisp((ShopBuyItemListViewObject_o *)Component_object, 0LL);
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

  return ShopBuyItemListViewManager__ModifyList_34291464(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_4AFE2D0 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AFE2D0 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0LL),
        !Entity) )
  {
    sub_1BC3264(Instance, v7);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_34282040(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v13);
  ShopBuyItemListViewManager__SetMode_34292448(this, 2, v14);
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

  if ( (byte_4AFE2D2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_4AFE2D2 = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1BC3264(itemList, shopEntity);
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  return ShopBuyItemListViewManager__ModifyList_34291464(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_34291464(
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
  __int64 v41; // x2
  const MethodInfo *v42; // x3
  int m_CancellationTokenSource; // w8
  unsigned int v44; // w27
  DataManager_c **v45; // x8
  ShopEntity_o *v46; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v48; // x3

  if ( (byte_4AFE2D1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4AFE2D1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v35 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v36);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1BC2FAC(
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
                  0LL);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1BC3264(Instance, v18);
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
    ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v21);
    m_CancellationTokenSource = (int)v23->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= m_CancellationTokenSource )
          sub_1BC326C(Instance, v18, v41);
        v45 = &v23->klass + (int)v44;
        v46 = (ShopEntity_o *)v45[4];
        if ( !v46 )
          goto LABEL_31;
        Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(
                                      this,
                                      (ShopEntity_o *)v45[4],
                                      v46->fields.id,
                                      v42);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v46, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v46, 0LL);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v46, PurchaseShop, v48);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        m_CancellationTokenSource = (int)v23->fields.m_CancellationTokenSource;
        if ( (int)++v44 >= m_CancellationTokenSource )
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
  ShopBuyItemListViewManager__CreateList_34282040(v26, v27, v28, v29, v30, v31, v22);
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

  if ( (byte_4AFE2E3 & 1) == 0 )
  {
    sub_1BC3008(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__, v3);
    sub_1BC3008(&Method_ShopBuyItemListViewManager_OnClickFilterKind__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFE2E3 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BC3254(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1BC3264(v12, v13);
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
    sub_1BC2FAC(p_onClickListViewItem, 0, (int32_t)method, v3);
    if ( !obj )
      sub_1BC3264(v7, v8);
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

  if ( (byte_4AFE2DE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4AFE2DE = 1;
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
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onMoveEnd, 0, v14, v15);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_18:
      sub_1BC3264(emptyMessageBase, v10);
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
  const MethodInfo *v9; // x2
  int32_t v10; // w20
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v13; // x1
  float v14; // s8
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t size; // w8
  int32_t v17; // w21
  Il2CppObject *Item; // x23
  System_Action_o *v19; // x24
  float v20; // s0

  if ( (byte_4AFE2DD & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_1BC3008(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v8);
    byte_4AFE2DD = 1;
  }
  v10 = ShopBuyItemListViewObject__GetInitMode(initMode, 0LL);
  if ( initMode == 1 )
  {
    ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
    ObjectList = ShopBuyItemListViewManager__GetObjectList(this, 1, v11);
    v14 = 0.1;
    v15 = (System_Collections_Generic_List_object__o *)ObjectList;
  }
  else
  {
    ObjectList = ShopBuyItemListViewManager__GetObjectList(this, initMode, v9);
    v15 = (System_Collections_Generic_List_object__o *)ObjectList;
    if ( (unsigned int)(initMode - 3) >= 2 )
      v14 = 0.0;
    else
      v14 = 0.1;
  }
  if ( !v15 )
    goto LABEL_19;
  size = v15->fields._size;
  this->fields.callbackCount = size;
  if ( size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               v17,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
      v19 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ShopBuyItemListViewObject__Init_34299604((ShopBuyItemListViewObject_o *)Item, v10, v19, v14, 0LL);
      if ( ++v17 >= v15->fields._size )
        return;
    }
LABEL_19:
    sub_1BC3264(ObjectList, v13);
  }
  this->fields.callbackCount = 1;
  if ( initMode == 1 )
  {
    v20 = this->fields.listInDelay + 0.5;
  }
  else
  {
    v20 = 0.6;
    if ( (unsigned int)(initMode - 3) > 1 )
      v20 = 0.0;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
    v20,
    0LL);
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
      sub_1BC3264(0LL, initMode);
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

  if ( (byte_4AFE2DB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_4AFE2DB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_1BC3264(gameObject, v7);
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

  if ( (byte_4AFE2E5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17332/*"btn_filter_on"*/, v3);
    sub_1BC3008(&StringLiteral_17331/*"btn_filter"*/, v4);
    byte_4AFE2E5 = 1;
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
      sub_1BC3264(sort, v6);
    }
    v9 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v9 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
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

  if ( (byte_4AFE2DA & 1) == 0 )
  {
    sub_1BC3008(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFE2DA = 1;
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
      sub_1BC3264(v9, v8);
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

  if ( (byte_4AFE2D9 & 1) == 0 )
  {
    sub_1BC3008(&ListViewSort_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17454/*"btn_txt_stock_02"*/, v3);
    sub_1BC3008(&StringLiteral_17453/*"btn_txt_stock"*/, v4);
    sub_1BC3008(&StringLiteral_17383/*"btn_txt_all"*/, v5);
    byte_4AFE2D9 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v7 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42803372(v7, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v7, v9, v10);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17454/*"btn_txt_stock_02"*/, v12);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL), (operationSortInfo = *p_operationSortInfo) == 0LL) )
    {
LABEL_18:
      sub_1BC3264(operationSortInfo, v11);
    }
    v16 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17453/*"btn_txt_stock"*/, v12);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v15 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17383/*"btn_txt_all"*/, v12);
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
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    method);
  ShopBuyItemListViewManager__SetMode_34292448(this, mode, v6);
}


void __fastcall ShopBuyItemListViewManager__SetMode_34292448(
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


void __fastcall ShopBuyItemListViewManager__SetMode_34293348(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)callback, (int32_t)callback, method);
  ShopBuyItemListViewManager__SetMode_34292448(this, mode, v7);
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

  if ( (byte_4AFE2E1 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4AFE2E1 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BC3264(scrollView, method);
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
  if ( (byte_4AFE2D7 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1BC3008(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_4AFE2D7 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1BC3264(this, obj);
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
  ShopBuyItemListViewObject__Init((ShopBuyItemListViewObject_o *)obj, v9, 0LL);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4AFE2D8 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_4AFE2D8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1BC3264(gameObject, v7);
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

  if ( (byte_4AFE2E0 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4AFE2E0 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BC3264(scrollView, method);
  }
  v8.fields.y = 82.0;
  v8.fields.x = v6;
  v8.fields.z = v7;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v8, 0LL);
}


void __fastcall ShopBuyItemListViewManager__SetSkillPartsLimit(
        ShopBuyItemListViewManager_o *this,
        bool haveLimit,
        const MethodInfo *method)
{
  this->fields.havePurchaseLimit = haveLimit;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__SetSkillPartsLimitLabel(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  ShopBuyItemListViewManager___c__DisplayClass106_0_o *v52; // x24
  __int64 Master_object; // x0
  __int64 v54; // x1
  UnityEngine_Object_o *skillPartsLimitLabel; // x19
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x19
  System_Func_object__bool__o *v58; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Object_array *v60; // x19
  __int64 v61; // x2
  int max_length; // w8
  CommonReleaseMaster_o *v63; // x24
  int v64; // w20
  Il2CppObject *v65; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EntitiyList; // x24
  ShopBuyItemListViewManager___c_c *v67; // x8
  System_Func_object__bool__o *_9__106_2; // x22
  Il2CppObject *v69; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  CommonReleaseMaster_o *v74; // x24
  __int64 v75; // x1
  __int64 condValue; // x0
  System_Collections_Generic_IEnumerable_TSource__o *List; // x24
  ShopBuyItemListViewManager___c_c *v78; // x8
  System_Func_object__bool__o *_9__106_3; // x22
  Il2CppObject *v80; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  Il2CppObject *v84; // x0
  ShopBuyItemListViewManager___c__DisplayClass106_0_o *v85; // x21
  System_Object_array *v86; // x11
  int v87; // w8
  unsigned int v88; // w26
  bool v89; // w9
  Il2CppObject *v90; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  System_Collections_Generic_List_TSource__o *v92; // x0
  ShopBuyItemListViewManager___c_c *v93; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x25
  System_Func_object__bool__o *_9__106_4; // x22
  Il2CppObject *v96; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Collections_Generic_List_object__o *v101; // x25
  int32_t v102; // w26
  int32_t commonReleaseCondGroup; // w10
  int32_t v104; // w0
  CommonReleaseEntity_array *v105; // x0
  ShopBuyItemListViewManager___c_c *v106; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x27
  System_Func_object__int__o *_9__106_5; // x22
  Il2CppObject *v109; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v110; // x0
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x28
  ShopBuyItemListViewManager___c_c *v115; // x8
  System_Func_object__bool__o *_9__106_6; // x22
  Il2CppObject *v117; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  __int64 v121; // x8
  __int64 v122; // x27
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x27
  __int64 v128; // x8
  __int64 v129; // x9
  int *v130; // x10
  __int64 v131; // x0
  __int64 v132; // x8
  __int64 v133; // x9
  int *v134; // x10
  __int64 v135; // x0
  __int64 v136; // x1
  __int64 v137; // x22
  int32_t v138; // w19
  int32_t v139; // w29
  int64_t v140; // x21
  __int64 v141; // x8
  __int64 v142; // x9
  int *v143; // x10
  __int64 v144; // x0
  System_Func_object__bool__o *v145; // x19
  Il2CppObject *v146; // x0
  Il2CppObject *v147; // x20
  System_Collections_ICollection_o *TargetEntityList; // x21
  System_String_o **v149; // x8
  int v150; // w21
  int klass_high; // w22
  void *monitor; // x8
  int v153; // w25
  UserShopMaster_o *v154; // x22
  int v155; // w26
  int v156; // w19
  __int64 v157; // x8
  int32_t v158; // w24
  System_String_o *v159; // x20
  UILabel_o *v160; // x19
  System_String_o *v161; // x20
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  Il2CppObject *v165; // x21
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  Il2CppObject *v169; // x0
  unsigned int v170; // [xsp+4h] [xbp-DCh]
  ShopReleaseMaster_o *v171; // [xsp+8h] [xbp-D8h]
  System_Object_array *v172; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-C8h]
  ShopBuyItemListViewManager___c__DisplayClass106_0_o *v174; // [xsp+28h] [xbp-B8h]
  CommonReleaseMaster_o *v175; // [xsp+30h] [xbp-B0h]
  int v176; // [xsp+3Ch] [xbp-A4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v177; // [xsp+40h] [xbp-A0h] BYREF
  UserShopEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v179; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4AFE2E6 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopGroupMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserShopMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopReleaseMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____76851008, v13);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___, v14);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_ShopEntity___, v15);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___, v16);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___, v17);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v18);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_ShopEntity___, v19);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_ShopReleaseEntity___, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__, v23);
    sub_1BC3008(&System_Func_CommonReleaseEntity__int__TypeInfo, v24);
    sub_1BC3008(&System_Func_CommonReleaseEntity__bool__TypeInfo, v25);
    sub_1BC3008(&System_Func_ShopEntity__bool__TypeInfo, v26);
    sub_1BC3008(&System_Func_ShopReleaseEntity__bool__TypeInfo, v27);
    sub_1BC3008(&System_IDisposable_TypeInfo, v28);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo, v29);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo, v30);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v31);
    sub_1BC3008(&int_TypeInfo, v32);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__, v33);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Count__, v34);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__, v35);
    sub_1BC3008(&LocalizationManager_TypeInfo, v36);
    sub_1BC3008(&NetworkManager_TypeInfo, v37);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v38);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__, v40);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__, v41);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__, v42);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__, v43);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__, v44);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__, v45);
    sub_1BC3008(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__, v46);
    sub_1BC3008(&ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo, v47);
    sub_1BC3008(&ShopBuyItemListViewManager___c_TypeInfo, v48);
    sub_1BC3008(&StringLiteral_5639/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/, v49);
    sub_1BC3008(&StringLiteral_5640/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/, v50);
    sub_1BC3008(&StringLiteral_5642/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/, v51);
    byte_4AFE2E6 = 1;
  }
  memset(&v179, 0, sizeof(v179));
  entity = 0LL;
  v52 = (ShopBuyItemListViewManager___c__DisplayClass106_0_o *)sub_1BC3254(ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo);
  ShopBuyItemListViewManager___c__DisplayClass106_0___ctor(v52, 0LL);
  if ( !v52 )
    goto LABEL_152;
  v52->fields.slot = slot;
  skillPartsLimitLabel = (UnityEngine_Object_o *)this->fields.skillPartsLimitLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillPartsLimitLabel, 0LL, 0LL) )
    return;
  Master_object = (__int64)this->fields.skillPartsLimitLabel;
  if ( !Master_object )
    goto LABEL_152;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
    return;
  if ( !this->fields.havePurchaseLimit )
  {
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( !Master_object )
      goto LABEL_152;
    goto LABEL_120;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_152;
  EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                            (ShopMaster_o *)Master_object,
                                                                            eventId,
                                                                            0LL);
  v58 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_ShopEntity__bool__TypeInfo);
  v174 = v52;
  System_Func_object__bool____ctor(
    v58,
    (Il2CppObject *)v52,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__,
    0LL);
  v59 = System_Linq_Enumerable__Where_object_(
          EventEntitiyList,
          (System_Func_TSource__bool__o *)v58,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v60 = System_Linq_Enumerable__ToArray_object_(
          v59,
          (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  v171 = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v60 )
LABEL_152:
    sub_1BC3264(Master_object, v54);
  max_length = v60->max_length;
  v63 = (CommonReleaseMaster_o *)Master_object;
  Master_object = (__int64)v171;
  v172 = v60;
  if ( max_length < 1 )
    goto LABEL_117;
  v64 = 0;
  v175 = v63;
LABEL_18:
  if ( v64 >= (unsigned int)max_length )
LABEL_141:
    sub_1BC326C(Master_object, v54, v61);
  v65 = v172->m_Items[v64];
  if ( !v65 || !Master_object )
    goto LABEL_152;
  EntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                       (ShopReleaseMaster_o *)Master_object,
                                                                       (int32_t)v65[1].klass,
                                                                       0LL);
  v67 = ShopBuyItemListViewManager___c_TypeInfo;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v67 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__106_2 = (System_Func_object__bool__o *)v67->static_fields->__9__106_2;
  if ( !_9__106_2 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v67->static_fields->__9;
    _9__106_2 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_ShopReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_2,
      v69,
      Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__,
      0LL);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_2 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__106_2, (int32_t)_9__106_2, v71, v72);
  }
  v73 = System_Linq_Enumerable__Where_object_(
          EntitiyList,
          (System_Func_TSource__bool__o *)_9__106_2,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
  Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                             v73,
                             (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
  if ( !Master_object )
    goto LABEL_152;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v177,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  v74 = v175;
  v179 = v177;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v179,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v179,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
      Master_object = (__int64)v171;
      ++v64;
      max_length = v172->max_length;
      if ( v64 >= max_length )
        goto LABEL_117;
      goto LABEL_18;
    }
    if ( !v179.fields._current )
      sub_1BC3264(0LL, v75);
    condValue = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)v179.fields._current, 0LL);
    if ( !v74 )
      sub_1BC3264(condValue, (unsigned int)condValue);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(v74, condValue, 0LL);
    v78 = ShopBuyItemListViewManager___c_TypeInfo;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v78 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_3 = (System_Func_object__bool__o *)v78->static_fields->__9__106_3;
    if ( !_9__106_3 )
    {
      if ( !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78);
        v78 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v80 = (Il2CppObject *)v78->static_fields->__9;
      _9__106_3 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_3,
        v80,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__,
        0LL);
      v81 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v81->__9__106_3 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_3;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v81->__9__106_3, (int32_t)_9__106_3, v82, v83);
    }
    v84 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
            List,
            (System_Func_TSource__bool__o *)_9__106_3,
            (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____76851008);
    v74 = v175;
  }
  while ( !v84 );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v179,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  v85 = v174;
  v86 = v172;
  *(_QWORD *)&v174->fields.commonReleaseCondGroup = 0xFFFFFFFFLL;
  v87 = v172->max_length;
  if ( v87 < 1 )
    goto LABEL_117;
  source = 0LL;
  v88 = 0;
  v89 = 1;
  do
  {
    if ( !v89 )
      goto LABEL_111;
    if ( v88 >= v87 )
      goto LABEL_141;
    v90 = v86->m_Items[v88];
    if ( !v90 )
      goto LABEL_152;
    v91 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                 v171,
                                                                 (int32_t)v90[1].klass,
                                                                 0LL);
    v92 = System_Linq_Enumerable__ToList_object_(
            v91,
            (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    v93 = ShopBuyItemListViewManager___c_TypeInfo;
    v94 = (System_Collections_Generic_IEnumerable_TSource__o *)v92;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v93 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_4 = (System_Func_object__bool__o *)v93->static_fields->__9__106_4;
    if ( !_9__106_4 )
    {
      if ( !v93->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v93);
        v93 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v96 = (Il2CppObject *)v93->static_fields->__9;
      _9__106_4 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_ShopReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_4,
        v96,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__,
        0LL);
      v97 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v97->__9__106_4 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_4;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v97->__9__106_4, (int32_t)_9__106_4, v98, v99);
    }
    v100 = System_Linq_Enumerable__Where_object_(
             v94,
             (System_Func_TSource__bool__o *)_9__106_4,
             (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                               v100,
                               (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    if ( !Master_object )
      goto LABEL_152;
    v101 = (System_Collections_Generic_List_object__o *)Master_object;
    v170 = v88;
    if ( *(int *)(Master_object + 24) < 1 )
    {
LABEL_108:
      commonReleaseCondGroup = v85->fields.commonReleaseCondGroup;
    }
    else
    {
      v102 = 0;
      while ( 1 )
      {
        commonReleaseCondGroup = v85->fields.commonReleaseCondGroup;
        if ( commonReleaseCondGroup != -1 )
          break;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   v101,
                                   v102,
                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_152;
        v104 = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)Master_object, 0LL);
        v105 = CommonReleaseMaster__getList(v175, v104, 0LL);
        v106 = ShopBuyItemListViewManager___c_TypeInfo;
        v107 = (System_Collections_Generic_IEnumerable_TSource__o *)v105;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v106 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_5 = (System_Func_object__int__o *)v106->static_fields->__9__106_5;
        if ( !_9__106_5 )
        {
          if ( !v106->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v106);
            v106 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v109 = (Il2CppObject *)v106->static_fields->__9;
          _9__106_5 = (System_Func_object__int__o *)sub_1BC3254(System_Func_CommonReleaseEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__106_5,
            v109,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__,
            0LL);
          v110 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v110->__9__106_5 = (struct System_Func_CommonReleaseEntity__int__o *)_9__106_5;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v110->__9__106_5, (int32_t)_9__106_5, v111, v112);
        }
        v113 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                      v107,
                                                                      (System_Func_TSource__TKey__o *)_9__106_5,
                                                                      (const MethodInfo_302DA1C *)Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
        v114 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v113,
                                                                      (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
        v115 = ShopBuyItemListViewManager___c_TypeInfo;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v115 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_6 = (System_Func_object__bool__o *)v115->static_fields->__9__106_6;
        if ( !_9__106_6 )
        {
          if ( !v115->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v115);
            v115 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v117 = (Il2CppObject *)v115->static_fields->__9;
          _9__106_6 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__106_6,
            v117,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__,
            0LL);
          v118 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v118->__9__106_6 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_6;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v118->__9__106_6, (int32_t)_9__106_6, v119, v120);
        }
        Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                                   v114,
                                   (System_Func_TSource__bool__o *)_9__106_6,
                                   (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
        if ( !Master_object )
          goto LABEL_152;
        v121 = *(_QWORD *)Master_object;
        v122 = Master_object;
        v123 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v124 = (int *)(*(_QWORD *)(v121 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_CommonReleaseEntity__c **)v124 - 1) != System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo )
          {
            --v123;
            v124 += 4;
            if ( !v123 )
              goto LABEL_77;
          }
          v125 = v121 + 16LL * *v124 + 312;
        }
        else
        {
LABEL_77:
          v125 = sub_1C13570(Master_object, System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo, 0LL);
        }
        v127 = (*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v122, *(_QWORD *)(v125 + 8));
        if ( !v127 )
          sub_1BC3264(0LL, v126);
        while ( 1 )
        {
          v128 = *(_QWORD *)v127;
          v129 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
          {
            v130 = (int *)(*(_QWORD *)(v128 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v130 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v129;
              v130 += 4;
              if ( !v129 )
                goto LABEL_84;
            }
            v131 = v128 + 16LL * *v130 + 312;
          }
          else
          {
LABEL_84:
            v131 = sub_1C13570(v127, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v131)(v127, *(_QWORD *)(v131 + 8)) & 1) == 0 )
            break;
          v132 = *(_QWORD *)v127;
          v133 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
          {
            v134 = (int *)(*(_QWORD *)(v132 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_CommonReleaseEntity__c **)v134 - 1) != System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo )
            {
              --v133;
              v134 += 4;
              if ( !v133 )
                goto LABEL_91;
            }
            v135 = v132 + 16LL * *v134 + 312;
          }
          else
          {
LABEL_91:
            v135 = sub_1C13570(v127, System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo, 0LL);
          }
          v137 = (*(__int64 (__fastcall **)(__int64, _QWORD))v135)(v127, *(_QWORD *)(v135 + 8));
          if ( !v137 )
            sub_1BC3264(0LL, v136);
          v138 = *(_DWORD *)(v137 + 28);
          v139 = *(_DWORD *)(v137 + 32);
          v140 = *(int *)(v137 + 36);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(v138, v139, v140, 0, 0LL, 0LL) )
          {
            *(int32x2_t *)&v174->fields.commonReleaseCondGroup = vrev64_s32(*(int32x2_t *)(v137 + 20));
            source = v114;
            break;
          }
        }
        v141 = *(_QWORD *)v127;
        v142 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
        {
          v143 = (int *)(*(_QWORD *)(v141 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v143 - 1) != System_IDisposable_TypeInfo )
          {
            --v142;
            v143 += 4;
            if ( !v142 )
              goto LABEL_102;
          }
          v144 = v141 + 16LL * *v143 + 312;
        }
        else
        {
LABEL_102:
          v144 = sub_1C13570(v127, System_IDisposable_TypeInfo, 0LL);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v144)(v127, *(_QWORD *)(v144 + 8));
        v85 = v174;
        if ( ++v102 >= v101->fields._size )
          goto LABEL_108;
      }
    }
    v86 = v172;
    v89 = commonReleaseCondGroup == -1;
    v87 = v172->max_length;
    v88 = v170 + 1;
  }
  while ( (int)(v170 + 1) < v87 );
  if ( commonReleaseCondGroup == -1 )
  {
LABEL_117:
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
      goto LABEL_120;
    goto LABEL_152;
  }
LABEL_111:
  v145 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_CommonReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v145,
    (Il2CppObject *)v85,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__,
    0LL);
  v146 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
           source,
           (System_Func_TSource__bool__o *)v145,
           (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____76851008);
  if ( !v146 )
  {
    v149 = (System_String_o **)&StringLiteral_5642/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/;
    v150 = 0;
    klass_high = 0;
LABEL_146:
    v159 = *v149;
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
    {
      Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        v160 = this->fields.skillPartsLimitLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v161 = LocalizationManager__Get(v159, 0LL);
        LODWORD(v177.fields._list) = v150;
        v165 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v177, v162, v163, v164);
        v176 = klass_high;
        v169 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176, v166, v167, v168);
        Master_object = (__int64)System_String__Format_62389940(v161, v165, v169, 0LL);
        if ( v160 )
        {
          UILabel__set_text(v160, (System_String_o *)Master_object, 0LL);
          return;
        }
      }
    }
    goto LABEL_152;
  }
  v147 = v146;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_152;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_152;
  TargetEntityList = (System_Collections_ICollection_o *)ShopGroupMaster__GetTargetEntityList(
                                                           (ShopGroupMaster_o *)Master_object,
                                                           (int32_t)v147[2].klass,
                                                           0LL);
  if ( !BasicHelper__IsNullOrEmpty(TargetEntityList, 0LL) )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !TargetEntityList )
      goto LABEL_152;
    monitor = TargetEntityList[1].monitor;
    v153 = (_DWORD)monitor - 1;
    if ( (int)monitor >= 1 )
    {
      v154 = (UserShopMaster_o *)Master_object;
      v155 = 0;
      v156 = 0;
      while ( 1 )
      {
        v157 = *((_QWORD *)&TargetEntityList[2].klass + v155);
        if ( !v157 )
          goto LABEL_152;
        v158 = *(_DWORD *)(v157 + 16);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, v54);
          byte_4AFC1F1 = 1;
        }
        Master_object = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v154 )
          goto LABEL_152;
        Master_object = UserShopMaster__TryGetEntity(
                          v154,
                          &entity,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          v158,
                          0LL);
        if ( (Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_152;
          v156 += entity->fields.num;
        }
        if ( v153 == v155 )
          goto LABEL_144;
        if ( (unsigned int)++v155 >= LODWORD(TargetEntityList[1].monitor) )
          goto LABEL_141;
      }
    }
    v156 = 0;
LABEL_144:
    klass_high = HIDWORD(v147[2].klass);
    v149 = (System_String_o **)&StringLiteral_5639/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/;
    v150 = klass_high - v156;
    if ( klass_high - v156 >= 1 )
      v149 = (System_String_o **)&StringLiteral_5640/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/;
    goto LABEL_146;
  }
  Master_object = (__int64)this->fields.skillPartsLimitLabel;
  if ( !Master_object )
    goto LABEL_152;
LABEL_120:
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
}


void __fastcall ShopBuyItemListViewManager__StopUpdateRemainTime(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BC3264(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
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

  if ( (byte_4AFE2C7 & 1) == 0 )
  {
    sub_1BC3008(&Method_TransitionCalculator_float__Update__, method);
    byte_4AFE2C7 = 1;
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  p_anotherBuyAbleAlphaTransitionCalculator = &this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
  {
    AlphaTransitionCalculator = ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(0LL, method);
    *p_anotherBuyAbleAlphaTransitionCalculator = AlphaTransitionCalculator;
    sub_1BC2FAC(
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
          (const MethodInfo_3958C34 *)Method_TransitionCalculator_float__Update__);
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
    sub_1BC3264(anotherBuyAbleAlphaTransitionCalculator, v8);
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
  System_Collections_Generic_List_object__o *v10; // x1
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

  if ( (byte_4AFE2C6 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BC3008(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4AFE2C6 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BC3264(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v14 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopBuyItemListViewObject__GetItem(
                                                                  (ShopBuyItemListViewObject_o *)objectList,
                                                                  0LL);
      if ( objectList )
      {
        v10 = objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42785324(
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
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
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
    sub_1BC3264(this, method);
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

  if ( (byte_4AFE2C5 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BC3008(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4AFE2C5 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BC3264(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
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

  if ( (byte_4AFE2EA & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewManager___c_TypeInfo, v1);
    byte_4AFE2EA = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ShopBuyItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopBuyItemListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopBuyItemListViewManager___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ShopBuyItemListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ShopBuyItemListViewManager___c___ctor(ShopBuyItemListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager___c___ChangeNextAnotherItemIcon_b__51_0(
        ShopBuyItemListViewManager___c_o *this,
        ShopBuyItemListViewObject_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4AFE2EB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, x);
    byte_4AFE2EB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( v4 )
  {
    if ( !x )
      sub_1BC3264(v4, v5);
    ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(x, v5);
  }
}


bool __fastcall ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_2(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.condType == 113;
}


bool __fastcall ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_3(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.condType == 263;
}


bool __fastcall ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_4(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.condType == 113;
}


int32_t __fastcall ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_5(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.priority;
}


bool __fastcall ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_6(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.condType == 1;
}


void __fastcall ShopBuyItemListViewManager___c__DisplayClass106_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass106_0___SetSkillPartsLimitLabel_b__0(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.slot == this->fields.slot;
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass106_0___SetSkillPartsLimitLabel_b__1(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.condGroup == this->fields.commonReleaseCondGroup
      && x->fields.priority <= this->fields.targetPriority
      && x->fields.condType == 263;
}


void __fastcall ShopBuyItemListViewManager___c__DisplayClass69_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass69_0___GetIndexByItemId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int32_t ItemId; // w0

  if ( (byte_4AFE2EC & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4AFE2EC = 1;
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


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass69_0___GetIndexByItemId_b__1(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int32_t ItemId; // w0

  if ( (byte_4AFE2EE & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4AFE2EE = 1;
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


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass69_0___GetIndexByItemId_b__2(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  ListViewItem_c *klass; // x9
  ShopBuyItemListViewItem_c *v6; // x8
  unsigned int methodPtr_low; // w11
  __int64 v8; // x10

  if ( (byte_4AFE2ED & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4AFE2ED = 1;
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


void __fastcall ShopBuyItemListViewManager___c__DisplayClass70_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopBuyItemListViewManager___c__DisplayClass70_0___GetIndexByTargetId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass70_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  int32_t TargetId; // w0

  if ( (byte_4AFE2EF & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4AFE2EF = 1;
  }
  if ( n
    && (methodPtr_low = LOBYTE(ShopBuyItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(n->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    TargetId = ShopBuyItemListViewItem__get_TargetId((ShopBuyItemListViewItem_o *)n, 0LL);
  }
  else
  {
    TargetId = 0;
  }
  return TargetId == this->fields.targetId;
}