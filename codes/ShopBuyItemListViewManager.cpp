void ShopBuyItemListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v8; // x20
  struct ShopBuyItemListViewManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4E00B54 & 1) == 0 )
  {
    sub_1CE6700(&ListViewSort_TypeInfo);
    sub_1CE6700(&ShopBuyItemListViewManager_TypeInfo);
    sub_1CE6700(&StringLiteral_6342/*"ExchangeSvtCoinShop"*/);
    byte_4E00B54 = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6342/*"ExchangeSvtCoinShop"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)ShopBuyItemListViewManager_TypeInfo->static_fields,
    StringLiteral_6342/*"ExchangeSvtCoinShop"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v8 = (ListViewSort_o *)sub_1CE694C(ListViewSort_TypeInfo);
  ListViewSort___ctor_44957004(v8, SORT_SAVE_KEY, 27, 0, 0);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v8;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&static_fields->exchangeSvtCoinSortInfo,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void ShopBuyItemListViewManager___ctor(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_D25340;
  *(_QWORD *)&this->fields.tabScrollBarPos.fields.y = 1104674816;
  this->fields.listInDelay = 0.1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ShopBuyItemListViewManager__ChangeFilter(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 filterStatus; // x8
  int32_t v4; // w20

  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 2 )
    this->fields.filterStatus = dword_D58574[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v4 = this->fields.filterStatus;
  if ( !byte_4DFEDAD )
  {
    sub_1CE6700(&EventRewardSaveData_TypeInfo);
    byte_4DFEDAD = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = v4;
  EventRewardSaveData__SaveItemFilter(this->fields.eventId, this->fields.targetSlot, 0);
}


void ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ShopBuyItemListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  ShopBuyItemListViewManager___c_c *v5; // x8
  System_Collections_Generic_List_object__o *v6; // x19
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v8; // x21
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4E00B36 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_ShopBuyItemListViewObject__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__);
    sub_1CE6700(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_4E00B36 = 1;
  }
  ObjectList = ShopBuyItemListViewManager__get_ObjectList(this, method);
  v5 = ShopBuyItemListViewManager___c_TypeInfo;
  v6 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v5 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__51_0 = (System_Action_object__o *)v5->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_1CE694C(System_Action_ShopBuyItemListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__51_0,
      v8,
      Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__51_0__,
      0);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_ShopBuyItemListViewObject__o *)_9__51_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__51_0,
      (int32_t)_9__51_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v6 )
    sub_1CE6958(ObjectList, v4);
  System_Collections_Generic_List_object___ForEach(
    v6,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_39069A8 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
}


void ShopBuyItemListViewManager__CheckUpdateEventRewardList(
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

  if ( (byte_4E00B3C & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E00B3C = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0)) == 0
    || (itemList = this->fields.itemList) == 0 )
  {
    sub_1CE6958(Instance, v12);
  }
  if ( itemList->fields._size != LODWORD(Instance->max_length) )
    ShopBuyItemListViewManager__CreateList_36214340(this, 6, eventId, slot, eventNum, isForcedAdjustment, v13);
}


AlphaTransitionCalculator_o *ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  float v2; // s8
  System_Func_float__float__float__float__o *v3; // x19
  AlphaTransitionCalculator_o *v4; // x20

  if ( (byte_4E00B35 & 1) == 0 )
  {
    sub_1CE6700(&AlphaTransitionCalculator_TypeInfo);
    byte_4E00B35 = 1;
  }
  v2 = ChangedFPSUtil__CovertFrameNumToSecond(7, 0);
  v3 = ExtraEasing__AsymptoticSeriesFloat(0.5, 7.0, 0);
  v4 = (AlphaTransitionCalculator_o *)sub_1CE694C(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v4, v2, v3, 0);
  return v4;
}


void ShopBuyItemListViewManager__CreateEventRewardList(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  ShopBuyItemListViewManager__CreateList_36214340(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void ShopBuyItemListViewManager__CreateExchangeSvtCoinList(
        ShopBuyItemListViewManager_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ShopBuyItemListViewManager_c *v10; // x0
  struct ListViewSort_o *exchangeSvtCoinSortInfo; // x1
  __int64 v12; // x1
  ListViewSort_o *sort; // x0
  const MethodInfo *v14; // x6
  const MethodInfo *v15; // x1

  if ( (byte_4E00B37 & 1) == 0 )
  {
    sub_1CE6700(&ShopBuyItemListViewManager_TypeInfo);
    byte_4E00B37 = 1;
  }
  v10 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
    v10 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v10->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.sort,
    (int32_t)exchangeSvtCoinSortInfo,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  sort = this->fields.sort;
  if ( !sort )
    sub_1CE6958(0, v12);
  ListViewSort__Load(sort, 0);
  ShopBuyItemListViewManager__CreateList_36214340(this, 22, 0, svtCoinType, 0, 0, v14);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v15);
}


void ShopBuyItemListViewManager__CreateList(ShopBuyItemListViewManager_o *this, int32_t kind, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_36214340(this, kind, 0, 0, 0, 0, v3);
}


void ShopBuyItemListViewManager__CreateList_36214340(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  struct ShopCurrencyInfoController_o *currencyInfoController; // x22
  System_Int32_array *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x6
  const MethodInfo *v26; // x4
  System_Collections_Generic_List_object__o *v27; // x27
  System_Collections_Generic_List_object__o *v28; // x26
  Il2CppObject *Master_object; // x28
  Il2CppObject *v30; // x29
  const MethodInfo *v31; // x3
  ShopEntity_array *v32; // x22
  int max_length; // w8
  int v34; // w23
  bool v35; // w25
  ShopEntity_o *v36; // x21
  System_Int32_array *targetIds; // x8
  unsigned __int64 v38; // x20
  unsigned __int64 max_length_low; // x9
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  const MethodInfo *v46; // x3
  System_Collections_Generic_List_object__o *itemList; // x22
  int32_t v48; // w27
  ListViewItem_o *v49; // x20
  const MethodInfo *v50; // x2
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  __int64 v65; // x8
  System_Collections_Generic_List_object__o *v66; // x0
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  int32_t v70; // w21
  System_Collections_Generic_List_object__o *v71; // x27
  int32_t v72; // w24
  Il2CppObject *Item; // x28
  ListViewItem_o *v74; // x20
  const MethodInfo *v75; // x2
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  int32_t v86; // w21
  System_Collections_Generic_List_object__o *v87; // x26
  int32_t v88; // w24
  Il2CppObject *v89; // x27
  ListViewItem_o *v90; // x20
  const MethodInfo *v91; // x2
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
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
  int32_t v110; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v112; // x0
  int32_t v113; // w8
  __int64 *v114; // x9
  __int64 *v115; // x8
  System_String_o *v116; // x21
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  struct ListViewSort_o *sort; // x1
  _BOOL8 v124; // x0
  const MethodInfo *v125; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v127; // [xsp+4h] [xbp-9Ch]
  int32_t v128; // [xsp+8h] [xbp-98h]
  ShopEntity_array *ShopEntities; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_object__o *v131; // [xsp+18h] [xbp-88h]
  ShopBuyItemListViewManager_o *EnterTime; // [xsp+20h] [xbp-80h]
  int32_t index; // [xsp+2Ch] [xbp-74h]
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  EventRewardSceneEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E00B38 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ShopAddMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&ShopBuyItemListViewItem_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_12302/*"SHOP_SPECIAL_LIST_EMPTY"*/);
    sub_1CE6700(&StringLiteral_12252/*"SHOP_LIST_EMPTY"*/);
    sub_1CE6700(&StringLiteral_5748/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    sub_1CE6700(&StringLiteral_5813/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/);
    byte_4E00B38 = 1;
  }
  possessionAnotherItemId = 0;
  entity = 0;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  ShopBuyItemListViewManager__SetFilterActive(
    (ShopBuyItemListViewManager_o *)MasterData_object,
    this->fields.filterBtn,
    0,
    v15);
  v13 = (const MethodInfo *)(unsigned int)this->fields.kind;
  if ( (_DWORD)v13 == 6 )
  {
    if ( !MasterData_object )
      goto LABEL_140;
    Instance = (DataManager_o *)ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, this->fields.eventId, 0);
    if ( !Instance )
      goto LABEL_140;
    currencyInfoController = this->fields.currencyInfoController;
    v18 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = (int32_t)Instance->fields.m_CancellationTokenSource;
    Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v13);
    if ( !currencyInfoController )
      goto LABEL_140;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&currencyInfoController->fields.objectList,
      (int32_t)Instance,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    Instance = (DataManager_o *)this->fields.currencyInfoController;
    if ( !Instance )
      goto LABEL_140;
    ShopCurrencyInfoController__RefreshEventItemInfo(
      (ShopCurrencyInfoController_o *)Instance,
      this->fields.kind,
      this->fields.eventId,
      this->fields.isEventShop,
      v18,
      isForcedAdjustment,
      v25);
    LODWORD(v13) = this->fields.kind;
  }
  v127 = eventNum;
  v128 = kind;
  EnterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v13,
                                                v16);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   EnterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v28 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ShopAddMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v30 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestMaster___),
        ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v31),
        (v32 = ShopEntities) == 0) )
  {
LABEL_140:
    sub_1CE6958(Instance, v13);
  }
  max_length = ShopEntities->max_length;
  v131 = v27;
  if ( max_length < 1 )
  {
    v35 = 0;
    index = 0;
    if ( !v28 )
      goto LABEL_140;
    goto LABEL_66;
  }
  index = 0;
  v34 = 0;
  v35 = 0;
  do
  {
    if ( v34 >= (unsigned int)max_length )
LABEL_141:
      sub_1CE6960(Instance);
    v36 = v32->m_Items[v34];
    if ( !v36 )
      goto LABEL_140;
    if ( v36->fields.purchaseType == 6 )
    {
      targetIds = v36->fields.targetIds;
      possessionAnotherItemId = targetIds;
      if ( !targetIds )
        goto LABEL_140;
      v38 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(targetIds->max_length);
        if ( (__int64)v38 >= (int)max_length_low )
          break;
        if ( v38 >= max_length_low )
          goto LABEL_141;
        if ( v30 )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                                        targetIds->m_Items[v38],
                                        (const MethodInfo_34E925C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_62;
          targetIds = possessionAnotherItemId;
          ++v38;
          if ( possessionAnotherItemId )
            continue;
        }
        goto LABEL_140;
      }
    }
    if ( v35 )
    {
      v35 = 1;
      if ( !Master_object )
        goto LABEL_32;
    }
    else
    {
      v35 = v36->fields.purchaseType == 16;
      this->fields.targetSlot = v36->fields.slot;
      if ( !Master_object )
        goto LABEL_32;
    }
    Instance = (DataManager_o *)ShopAddMaster__IsItemHidden((ShopAddMaster_o *)Master_object, v36->fields.id, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_62;
LABEL_32:
    if ( ShopEntity__IsSoldOut(v36, 0) && !ShopEntity__GetIsNotHavingShopItemReceived(v36, 0) )
    {
      Instance = (DataManager_o *)ShopEntity__IsAnotherItemBuyable(v36, &possessionAnotherItemId, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v27 )
          goto LABEL_140;
        items = v27->fields._items;
        v68 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v27->fields._version;
        if ( !items )
          goto LABEL_140;
        size = v27->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
        {
          v64 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          goto LABEL_57;
        }
        v65 = v68[4];
        v66 = v27;
        goto LABEL_61;
      }
    }
    Instance = (DataManager_o *)ShopEntity__isClosedShopPriorityLowCheck(v36, 0);
    if ( Master_object && ((unsigned __int8)Instance & 1) == 0 )
      Instance = (DataManager_o *)ShopAddMaster__IsItemLowerDisp((ShopAddMaster_o *)Master_object, v36->fields.id, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !Master_object
        || (Instance = (DataManager_o *)ShopAddMaster__IsItemLowerDispCancelled(
                                          (ShopAddMaster_o *)Master_object,
                                          v36->fields.id,
                                          0),
            ((unsigned __int8)Instance & 1) == 0) )
      {
        if ( !v28 )
          goto LABEL_140;
        v61 = v28->fields._items;
        v62 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v28->fields._version;
        if ( !v61 )
          goto LABEL_140;
        v63 = v28->fields._size;
        if ( (unsigned int)v63 < LODWORD(v61->max_length) )
        {
          v64 = &v61->obj.klass + v63;
          v28->fields._size = v63 + 1;
LABEL_57:
          v64[4] = (Il2CppClass *)v36;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v64 + 4), (int32_t)v36, v40, v41, v42, v43, v44, v45);
          goto LABEL_62;
        }
        v65 = v62[4];
        v66 = v28;
LABEL_61:
        System_Collections_Generic_List_object___AddWithResize(
          v66,
          (Il2CppObject *)v36,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v65 + 192) + 112LL));
        goto LABEL_62;
      }
    }
    Instance = (DataManager_o *)ShopEntity__GetPurchaseShop(v36, 0);
    if ( (int)Instance < 1
      || (Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v36, (int32_t)Instance, v46),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( v36->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v48 = this->fields.kind;
        v49 = (ListViewItem_o *)sub_1CE694C(ShopBuyItemListViewItem_TypeInfo);
        ListViewItem___ctor_44921328(v49, index, 0);
        v49[1].fields.sortIndex = v48;
        v49[1].fields.sortValue0 = (int64_t)EnterTime;
        ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v49, v36, v50);
        if ( !itemList )
          goto LABEL_140;
        v57 = itemList->fields._items;
        v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v57 )
          goto LABEL_140;
        v59 = itemList->fields._size;
        v27 = v131;
        if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v49,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &v57->obj.klass + v59;
          itemList->fields._size = v59 + 1;
          v60[4] = (Il2CppClass *)v49;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v60 + 4), (int32_t)v49, v51, v52, v53, v54, v55, v56);
        }
        v32 = ShopEntities;
        ++index;
      }
    }
LABEL_62:
    max_length = v32->max_length;
    ++v34;
  }
  while ( v34 < max_length );
  if ( !v28 )
    goto LABEL_140;
LABEL_66:
  if ( v28->fields._size >= 1 )
  {
    v70 = 0;
    do
    {
      v71 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v72 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v28,
               v70,
               (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v74 = (ListViewItem_o *)sub_1CE694C(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_44921328(v74, index + v70, 0);
      v74[1].fields.sortIndex = v72;
      v74[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v74, (ShopEntity_o *)Item, v75);
      if ( !v71 )
        goto LABEL_140;
      v82 = v71->fields._items;
      v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v71->fields._version;
      if ( !v82 )
        goto LABEL_140;
      v84 = v71->fields._size;
      if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v71,
          (Il2CppObject *)v74,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &v82->obj.klass + v84;
        v71->fields._size = v84 + 1;
        v85[4] = (Il2CppClass *)v74;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v74, v76, v77, v78, v79, v80, v81);
      }
      ++v70;
    }
    while ( v70 < v28->fields._size );
    v27 = v131;
    index += v70;
  }
  if ( !v27 )
    goto LABEL_140;
  if ( v27->fields._size >= 1 )
  {
    v86 = 0;
    do
    {
      v87 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v88 = this->fields.kind;
      v89 = System_Collections_Generic_List_object___get_Item(
              v27,
              v86,
              (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v90 = (ListViewItem_o *)sub_1CE694C(ShopBuyItemListViewItem_TypeInfo);
      ListViewItem___ctor_44921328(v90, index + v86, 0);
      v90[1].fields.sortIndex = v88;
      v90[1].fields.sortValue0 = (int64_t)EnterTime;
      ShopBuyItemListViewItem__Modify((ShopBuyItemListViewItem_o *)v90, (ShopEntity_o *)v89, v91);
      if ( !v87 )
        goto LABEL_140;
      v98 = v87->fields._items;
      v99 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v87->fields._version;
      if ( !v98 )
        goto LABEL_140;
      v100 = v87->fields._size;
      v27 = v131;
      if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v87,
          (Il2CppObject *)v90,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = &v98->obj.klass + v100;
        v87->fields._size = v100 + 1;
        v101[4] = (Il2CppClass *)v90;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v101 + 4), (int32_t)v90, v92, v93, v94, v95, v96, v97);
      }
    }
    while ( ++v86 < v131->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    v103 = v128;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.scrollBar;
      if ( !Instance )
        goto LABEL_140;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_140;
      v104 = 348;
      if ( v127 == 1 )
      {
        v104 = 336;
        v105 = 332;
      }
      else
      {
        v105 = 344;
      }
      if ( v127 == 1 )
        v106 = 328;
      else
        v106 = 340;
      v136.fields.z = *(float *)((char *)&this->klass + v104);
      v136.fields.y = *(float *)((char *)&this->klass + v105);
      v136.fields.x = *(float *)((char *)&this->klass + v106);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v136, 0);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_140;
      if ( v127 == 1 )
        v108 = 338;
      else
        v108 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v108, 0);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_140;
      if ( v127 == 1 )
        v110 = 348;
      else
        v110 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v110, 0);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v112 = (System_String_o *)StringLiteral_5748/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/;
  }
  else
  {
    v113 = this->fields.kind;
    v114 = &StringLiteral_12252/*"SHOP_LIST_EMPTY"*/;
    if ( v113 == 22 )
      v114 = (__int64 *)&StringLiteral_5813/*"EXCHANGE_SVT_COIN_LIST_EMPTY"*/;
    if ( v113 == 12 )
      v115 = (__int64 *)&StringLiteral_12302/*"SHOP_SPECIAL_LIST_EMPTY"*/;
    else
      v115 = v114;
    v116 = (System_String_o *)*v115;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v103 = v128;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v112 = v116;
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v112, 0);
  if ( !emptyMessageLabel )
    goto LABEL_140;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo,
      (int32_t)sort,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
  }
  if ( !v35 )
    goto LABEL_136;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_140;
  v124 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v124 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v124, this->fields.filterBtn, 1, v125);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0);
      if ( !byte_4DFEDAE )
      {
        sub_1CE6700(&EventRewardSaveData_TypeInfo);
        byte_4DFEDAE = 1;
      }
      ItemFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
      goto LABEL_137;
    }
LABEL_136:
    ItemFilterId_k__BackingField = 0;
  }
LABEL_137:
  this->fields.filterStatus = ItemFilterId_k__BackingField;
  ShopBuyItemListViewManager__SetList(this, (const MethodInfo *)sort);
  if ( v103 == 22 )
    this->fields.targetExchangeSvtCoinFolder = slot;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void ShopBuyItemListViewManager__CreateList_36217452(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_36214340(this, 6, eventId, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewManager__EndSelectFilterKind(
        ShopBuyItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4E00B51 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E00B51 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_36226784(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1CE6958(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)sort, 0, 0);
}


void ShopBuyItemListViewManager__FocusTopItem(
        ShopBuyItemListViewManager_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  int32_t ShopFocusItemId_k__BackingField; // w1
  int32_t IndexByTargetId; // w0
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4E00B39 & 1) == 0 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E00B39 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E00BB3 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E00BB3 = 1;
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
    if ( !byte_4E00BB3 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E00BB3 = 1;
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
    if ( (IndexByTargetId & 0x80000000) == 0 )
      ListViewManager__SetTopItem((ListViewManager_o *)this, IndexByTargetId, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E00BB4 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E00BB4 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_ShopFocusItemId_k__BackingField = 0;
  }
}


int32_t ShopBuyItemListViewManager__GetAlphaAnimCnt(
        ShopBuyItemListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


int32_t ShopBuyItemListViewManager__GetBuyItemKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D58580[state - 2];
}


int32_t ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x14 )
    return 0;
  else
    return dword_D585D4[state - 2];
}


int64_t ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4E00B3A & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4E00B3A = 1;
  }
  if ( (unsigned int)kind > 9 || ((1 << kind) & 0x304) == 0 )
    return -1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0);
}


int32_t ShopBuyItemListViewManager__GetIndexByItemId(
        ShopBuyItemListViewManager_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t result; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__bool__o *v10; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x21
  System_Predicate_object__o *v12; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v13; // x19
  System_Predicate_object__o *v14; // x21

  if ( (byte_4E00B42 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Count_ListViewItem___);
    sub_1CE6700(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_1CE6700(&System_Predicate_ListViewItem__TypeInfo);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__2__);
    sub_1CE6700(&ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo);
    byte_4E00B42 = 1;
  }
  v5 = sub_1CE694C(ShopBuyItemListViewManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v10 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_ListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__0__,
    0);
  if ( System_Linq_Enumerable__Count_object__52582204(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)v10,
         (const MethodInfo_322573C *)Method_System_Linq_Enumerable_Count_ListViewItem___) < 2 )
    goto LABEL_11;
  v11 = this->fields.itemList;
  v12 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__2__,
    0);
  if ( !v11 )
    goto LABEL_13;
  result = System_Collections_Generic_List_object___FindIndex(
             (System_Collections_Generic_List_object__o *)v11,
             (System_Predicate_T__o *)v12,
             (const MethodInfo_39067C0 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( result < 0 )
  {
LABEL_11:
    v13 = this->fields.itemList;
    v14 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_ShopBuyItemListViewManager___c__DisplayClass69_0__GetIndexByItemId_b__1__,
      0);
    if ( v13 )
      return System_Collections_Generic_List_object___FindIndex(
               (System_Collections_Generic_List_object__o *)v13,
               (System_Predicate_T__o *)v14,
               (const MethodInfo_39067C0 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
LABEL_13:
    sub_1CE6958(v6, v7);
  }
  return result;
}


int32_t ShopBuyItemListViewManager__GetIndexByTargetId(
        ShopBuyItemListViewManager_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  System_Predicate_object__o *v10; // x20

  if ( (byte_4E00B43 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
    sub_1CE6700(&System_Predicate_ListViewItem__TypeInfo);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__);
    sub_1CE6700(&ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo);
    byte_4E00B43 = 1;
  }
  v5 = sub_1CE694C(ShopBuyItemListViewManager___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_DWORD *)(v5 + 16) = targetId;
  if ( targetId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return -1;
  itemList = this->fields.itemList;
  v10 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ShopBuyItemListViewManager___c__DisplayClass70_0__GetIndexByTargetId_b__0__,
    0);
  if ( !itemList )
LABEL_9:
    sub_1CE6958(v6, v7);
  return System_Collections_Generic_List_object___FindIndex(
           (System_Collections_Generic_List_object__o *)itemList,
           (System_Predicate_T__o *)v10,
           (const MethodInfo_39067C0 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
}


float ShopBuyItemListViewManager__GetInvokeDelay(
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
bool ShopBuyItemListViewManager__GetIsShowEventItemWindow(int32_t state, int32_t eventId, const MethodInfo *method)
{
  int v5; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Int32_array *EventItemList; // x0
  const MethodInfo *v10; // x1
  int32_t PayType; // w0

  if ( (byte_4E00B4F & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&ShopBuyItemListViewManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E00B4F = 1;
  }
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
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
    case 16:
    case 18:
    case 19:
    case 21:
      return result;
    case 4:
    case 13:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
      {
        sub_1CE6958(Instance, v8);
      }
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0);
      if ( EventItemList && EventItemList->max_length )
        goto LABEL_14;
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
      PayType = ShopBuyItemListViewManager__GetPayType(eventId, v10);
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


ShopBuyItemListViewItem_o *ShopBuyItemListViewManager__GetItem(
        ShopBuyItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopBuyItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4E00B41 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1CE6700(&ShopBuyItemListViewItem_TypeInfo);
    byte_4E00B41 = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ShopBuyItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


float ShopBuyItemListViewManager__GetObjectInitDelay(
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


int32_t ShopBuyItemListViewManager__GetObjectInitMode(
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
System_Collections_Generic_List_ShopBuyItemListViewObject__o *ShopBuyItemListViewManager__GetObjectList(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19

  if ( (byte_4E00B49 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    byte_4E00B49 = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v6 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v6;
}


int32_t ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  ShopEntity_o *v5; // x8

  if ( (byte_4E00B4C & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E00B4C = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, eventId, 0);
  if ( !Instance )
    goto LABEL_10;
  if ( SLODWORD(Instance->max_length) >= 1 )
  {
    v5 = Instance->m_Items[0];
    if ( v5 )
      return v5->fields.payType;
LABEL_10:
    sub_1CE6958(Instance, v4);
  }
  return 11;
}


ShopEntity_array *ShopBuyItemListViewManager__GetShopEntities(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v12; // w1

  if ( (byte_4E00B3B & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E00B3B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1CE6958(Instance, v9);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  switch ( kind )
  {
    case 2:
      if ( !Instance )
        goto LABEL_42;
      v10 = 2;
      goto LABEL_36;
    case 6:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0);
    case 7:
      if ( !Instance )
        goto LABEL_42;
      v10 = 6;
      goto LABEL_36;
    case 8:
      if ( !Instance )
        goto LABEL_42;
      v10 = 7;
      goto LABEL_36;
    case 9:
      if ( !Instance )
        goto LABEL_42;
      v10 = 3;
      goto LABEL_36;
    case 10:
      if ( !Instance )
        goto LABEL_42;
      v10 = 4;
      goto LABEL_36;
    case 11:
      if ( !Instance )
        goto LABEL_42;
      v10 = 5;
      goto LABEL_36;
    case 12:
      if ( !Instance )
        goto LABEL_42;
      v10 = 9;
      goto LABEL_36;
    case 13:
      if ( !Instance )
        goto LABEL_42;
      v10 = 10;
      goto LABEL_36;
    case 14:
      if ( !Instance )
        goto LABEL_42;
      v10 = 11;
      goto LABEL_36;
    case 15:
      if ( !Instance )
        goto LABEL_42;
      v10 = 12;
      goto LABEL_36;
    case 16:
      if ( !Instance )
        goto LABEL_42;
      v10 = 13;
      goto LABEL_36;
    case 18:
      if ( !Instance )
        goto LABEL_42;
      v10 = 14;
      goto LABEL_36;
    case 20:
      if ( !Instance )
        goto LABEL_42;
      v10 = 15;
      goto LABEL_36;
    case 21:
      if ( !Instance )
        goto LABEL_42;
      v10 = 16;
LABEL_36:
      v12 = 0;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v12, v10, 0);
    case 22:
      if ( !Instance )
        goto LABEL_42;
      return ShopMaster__GetEnableExchangeSvtCoinEntitiyList((ShopMaster_o *)Instance, slot, 0);
    case 23:
      if ( !Instance )
        goto LABEL_42;
      v12 = 23;
      v10 = 18;
      return ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, v12, v10, 0);
    default:
      return 0;
  }
}


void ShopBuyItemListViewManager__InvalidateList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v4; // w20
  Il2CppObject *Item; // x21
  bool v6; // w0
  Il2CppObject *Component_object; // x21

  if ( (byte_4E00B40 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00B40 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1CE6958(objectList, method);
  v4 = 0;
  while ( v4 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v4,
             (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
    Component_object = 0;
    if ( v6 )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_18;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v4,
                                                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                (UnityEngine_Object_o *)Component_object,
                                                                0,
                                                                0);
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


bool ShopBuyItemListViewManager__ModifyEventRewardList(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t eventNum,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return ShopBuyItemListViewManager__ModifyList_36225804(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
}


void ShopBuyItemListViewManager__ModifyFilterList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4E00B3D & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E00B3D = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_34E925C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0),
        !Entity) )
  {
    sub_1CE6958(Instance, v4);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0);
  ShopBuyItemListViewManager__CreateList_36214340(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v10);
  ShopBuyItemListViewManager__SetMode_36226784(this, 2, v11);
}


bool ShopBuyItemListViewManager__ModifyItem(
        ShopBuyItemListViewManager_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w22
  const MethodInfo *v9; // x2
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *klass; // x8

  if ( (byte_4E00B3F & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1CE6700(&ShopBuyItemListViewItem_TypeInfo);
    byte_4E00B3F = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1CE6958(itemList, shopEntity);
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v8,
                                                                (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_13;
      naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ShopBuyItemListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewItem_TypeInfo )
      {
        goto LABEL_13;
      }
      klass = itemList[3].klass;
      if ( klass )
      {
        if ( LODWORD(klass->_1.name) == shopId )
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


bool ShopBuyItemListViewManager__ModifyList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  return ShopBuyItemListViewManager__ModifyList_36225804(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


bool ShopBuyItemListViewManager__ModifyList_36225804(
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
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  ShopCurrencyInfoController_o *v39; // x28
  _BOOL4 isEventShop; // w29
  const MethodInfo *v41; // x6
  const MethodInfo *v42; // x3
  int m_CancellationTokenSource; // w8
  unsigned int v44; // w27
  DataManager_c **v45; // x8
  ShopEntity_o *v46; // x26
  int32_t PurchaseShop; // w0
  const MethodInfo *v48; // x3

  if ( (byte_4E00B3E & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E00B3E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
      EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, eventId, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_34E925C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v31 = (EventDetailEntity_o *)Entity;
          Instance = (DataManager_o *)ShopBuyItemListViewManager__get_ObjectList(this, v32);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1CE66A4(
              (GrandQuestFolderBoardItem_o *)&currencyInfoController->fields.objectList,
              (int32_t)Instance,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            if ( v31 )
            {
              v39 = this->fields.currencyInfoController;
              isEventShop = this->fields.isEventShop;
              Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v31, 0);
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
    sub_1CE6958(Instance, v14);
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
    ShopBuyItemListViewManager__SetSkillPartsLimitLabel(this, eventId, slot, v17);
    m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= m_CancellationTokenSource )
          sub_1CE6960(Instance);
        v45 = &v19->klass + (int)v44;
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
          Instance = (DataManager_o *)ShopEntity__IsSoldOut(v46, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            PurchaseShop = ShopEntity__GetPurchaseShop(v46, 0);
            Instance = (DataManager_o *)ShopBuyItemListViewManager__ModifyItem(this, v46, PurchaseShop, v48);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
        if ( (int)++v44 >= m_CancellationTokenSource )
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
  ShopBuyItemListViewManager__CreateList_36214340(v22, v23, v24, v25, v26, v27, v18);
  return 0;
}


void ShopBuyItemListViewManager__OnClickFilterKind(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4E00B50 & 1) == 0 )
  {
    sub_1CE6700(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E00B50 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1CE694C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1CE6958(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 15, sort, v8, 0, 0);
  }
}


void ShopBuyItemListViewManager__OnClickListView(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_int__o *onClickListViewItem; // x20
  GrandQuestFolderBoardItem_o *p_onClickListViewItem; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int Index; // w0

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    p_onClickListViewItem = (GrandQuestFolderBoardItem_o *)&this->fields.onClickListViewItem;
    p_onClickListViewItem->klass = 0;
    sub_1CE66A4(p_onClickListViewItem, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( !obj )
      sub_1CE6958(v11, v12);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickListViewItem->fields.invoke_impl)(
      onClickListViewItem->fields.method_code,
      Index,
      onClickListViewItem->fields.method);
  }
}


void ShopBuyItemListViewManager__OnMoveEnd(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4E00B4B & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00B4B = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
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
        UnityEngine_GameObject__SetActive(emptyMessageBase, v8, 0);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_15;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.element_class)(
          emptyMessageBase,
          1,
          emptyMessageBase->klass[1]._1.castClass);
LABEL_15:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd, 0, v13, v14, v15, v16, v17, v18);
          ((void (__fastcall *)(intptr_t, intptr_t))onMoveEnd->fields.invoke_impl)(
            onMoveEnd->fields.method_code,
            onMoveEnd->fields.method);
        }
        return;
      }
LABEL_18:
      sub_1CE6958(emptyMessageBase, v9);
    }
  }
}


void ShopBuyItemListViewManager__RequestListObject(
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

  if ( (byte_4E00B4A & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager_OnMoveEnd__);
    sub_1CE6700(&StringLiteral_10019/*"OnMoveEnd"*/);
    byte_4E00B4A = 1;
  }
  v5 = 6;
  switch ( initMode )
  {
    case 1:
      v6 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
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
          (System_String_o *)StringLiteral_10019/*"OnMoveEnd"*/,
          v17,
          0);
      }
      else
      {
        v13 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v11,
                   v13,
                   (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v15 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0);
          if ( !Item )
LABEL_23:
            sub_1CE6958(ObjectList, v9);
          ShopBuyItemListViewObject__Init_36229824((ShopBuyItemListViewObject_o *)Item, v5, v15, v10, v16);
          ++v13;
        }
        while ( v13 < v11->fields._size );
      }
      return;
  }
}


void ShopBuyItemListViewManager__SetDragMaskStart(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
}


void ShopBuyItemListViewManager__SetEmptyMessageBaseUnEnable(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyMessageBase; // x0

  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
  {
    emptyMessageBase = this->fields.emptyMessageBase;
    if ( !emptyMessageBase )
      sub_1CE6958(0, initMode);
    UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0);
  }
}


void ShopBuyItemListViewManager__SetFilterActive(
        ShopBuyItemListViewManager_o *this,
        UICommonButton_o *filterBtn,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4E00B48 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00B48 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0)) == 0 )
    {
      sub_1CE6958(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemListViewManager__SetFilterButtonImage(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *filterSprite; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *v6; // x19
  System_String_o **v7; // x8

  if ( (byte_4E00B52 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_17675/*"btn_filter_on"*/);
    sub_1CE6700(&StringLiteral_17674/*"btn_filter"*/);
    byte_4E00B52 = 1;
  }
  filterSprite = (UnityEngine_Object_o *)this->fields.filterSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(filterSprite, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort
      || (v6 = this->fields.filterSprite, sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0), !v6) )
    {
      sub_1CE6958(sort, v4);
    }
    v7 = (System_String_o **)&StringLiteral_17674/*"btn_filter"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v7 = (System_String_o **)&StringLiteral_17675/*"btn_filter_on"*/;
    UISprite__set_spriteName(v6, *v7, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewManager__SetFilterId(ShopBuyItemListViewManager_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.filterStatus = id;
  ShopBuyItemListViewManager__SetList(this, *(const MethodInfo **)&id);
}


void ShopBuyItemListViewManager__SetFilterName(
        ShopBuyItemListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UnityEngine_Object_o *filterTxtSprite; // x21
  UISprite_o *v6; // x21
  __int64 v7; // x1
  UIWidget_o *v8; // x0

  if ( (byte_4E00B47 & 1) == 0 )
  {
    sub_1CE6700(&EventRewardRootComponent_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00B47 = 1;
  }
  filterTxtSprite = (UnityEngine_Object_o *)this->fields.filterTxtSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(filterTxtSprite, 0, 0) )
  {
    v6 = this->fields.filterTxtSprite;
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v6, targetFile, 0);
    v8 = (UIWidget_o *)this->fields.filterTxtSprite;
    if ( !v8 || (UIWidget__set_width(v8, 52, 0), (v8 = (UIWidget_o *)this->fields.filterTxtSprite) == 0) )
      sub_1CE6958(v8, v7);
    UIWidget__set_height(v8, 20, 0);
  }
}


void ShopBuyItemListViewManager__SetList(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t filterStatus; // w8
  ListViewSort_o *operationSortInfo; // x0
  bool v16; // w2
  bool v17; // w2

  if ( (byte_4E00B46 & 1) == 0 )
  {
    sub_1CE6700(&ListViewSort_TypeInfo);
    sub_1CE6700(&StringLiteral_17801/*"btn_txt_stock_02"*/);
    sub_1CE6700(&StringLiteral_17800/*"btn_txt_stock"*/);
    sub_1CE6700(&StringLiteral_17730/*"btn_txt_all"*/);
    byte_4E00B46 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1CE694C(ListViewSort_TypeInfo);
  ListViewSort___ctor_44957728(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17801/*"btn_txt_stock_02"*/, v13);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0), (operationSortInfo = *p_operationSortInfo) == 0) )
    {
LABEL_18:
      sub_1CE6958(operationSortInfo, v12);
    }
    v17 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17800/*"btn_txt_stock"*/, v13);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v16 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17730/*"btn_txt_all"*/, v13);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v16 = 0;
    }
    ListViewSort__SetFilter(operationSortInfo, 52, v16, 0);
    operationSortInfo = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_18;
    v17 = 0;
  }
  ListViewSort__SetFilter(operationSortInfo, 53, v17, 0);
LABEL_16:
  operationSortInfo = this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_18;
  ListViewSort__Set(operationSortInfo, *p_operationSortInfo, 0);
}


void ShopBuyItemListViewManager__SetMode(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_36226784(this, mode, v10);
}


void ShopBuyItemListViewManager__SetMode_36226784(
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
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  initMode = this->fields.initMode;
  if ( initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
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


void ShopBuyItemListViewManager__SetMode_36228064(
        ShopBuyItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        float delay,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.onMoveEnd = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_36226784(this, mode, v11);
}


void ShopBuyItemListViewManager__SetMultiEventScrollInfo(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E00B4E & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4E00B4E = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v8.fields.x = *((float *)scrollView + 74);
  v8.fields.y = *((float *)scrollView + 75);
  v8.fields.z = *((float *)scrollView + 76);
  v8.fields.w = 400.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v8, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0),
        (scrollView = this->fields.scrollView) == 0)
    || (x = localPosition.fields.x,
        z = localPosition.fields.z,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0) )
  {
LABEL_10:
    sub_1CE6958(scrollView, method);
  }
  v7.fields.y = 16.0;
  v7.fields.x = x;
  v7.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v7, 0);
}


void ShopBuyItemListViewManager__SetObjectItem(
        ShopBuyItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t initMode; // w8
  int v8; // w9
  int32_t v9; // w1

  v5 = this;
  if ( (byte_4E00B44 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1CE6700(&ShopBuyItemListViewObject_TypeInfo);
    byte_4E00B44 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopBuyItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1CE6958(this, obj);
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
  ShopBuyItemListViewObject__Init_36229824((ShopBuyItemListViewObject_o *)obj, v9, 0, 0.0, method);
}


void ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4E00B45 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00B45 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0)) == 0 )
    {
      sub_1CE6958(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemListViewManager__SetScrollBarUnEnable(
        ShopBuyItemListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
    ShopBuyItemListViewManager__SetScrollBarActive(this, this->fields.scrollBar, 0, v3);
}


void ShopBuyItemListViewManager__SetSingleEventScrollInfo(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E00B4D & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4E00B4D = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v8.fields.x = *((float *)scrollView + 74);
  v8.fields.y = *((float *)scrollView + 75);
  v8.fields.z = *((float *)scrollView + 76);
  v8.fields.w = 470.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v8, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0),
        (scrollView = this->fields.scrollView) == 0)
    || (x = localPosition.fields.x,
        z = localPosition.fields.z,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0) )
  {
LABEL_10:
    sub_1CE6958(scrollView, method);
  }
  v7.fields.y = 82.0;
  v7.fields.x = x;
  v7.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v7, 0);
}


void ShopBuyItemListViewManager__SetSkillPartsLimit(
        ShopBuyItemListViewManager_o *this,
        bool haveLimit,
        const MethodInfo *method)
{
  this->fields.havePurchaseLimit = haveLimit;
}


void ShopBuyItemListViewManager__SetSkillPartsLimitLabel(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x24
  __int64 Master_object; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *skillPartsLimitLabel; // x19
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x19
  System_Func_object__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Object_array *v15; // x19
  int max_length; // w8
  CommonReleaseMaster_o *v17; // x24
  int v18; // w20
  Il2CppObject *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EntitiyList; // x24
  ShopBuyItemListViewManager___c_c *v21; // x8
  System_Func_object__bool__o *_9__106_2; // x22
  Il2CppObject *v23; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  CommonReleaseMaster_o *v32; // x24
  __int64 v33; // x1
  __int64 condValue; // x0
  System_Collections_Generic_IEnumerable_TSource__o *List; // x24
  ShopBuyItemListViewManager___c_c *v36; // x8
  System_Func_object__bool__o *_9__106_3; // x22
  Il2CppObject *v38; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *v46; // x0
  __int64 v47; // x21
  System_Object_array *v48; // x11
  int v49; // w8
  unsigned int v50; // w26
  bool v51; // w9
  Il2CppObject *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_List_TSource__o *v54; // x0
  ShopBuyItemListViewManager___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x25
  System_Func_object__bool__o *_9__106_4; // x22
  Il2CppObject *v58; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Collections_Generic_List_object__o *v67; // x25
  int32_t v68; // w26
  int v69; // w10
  int32_t v70; // w0
  CommonReleaseEntity_array *v71; // x0
  ShopBuyItemListViewManager___c_c *v72; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x27
  System_Func_object__int__o *_9__106_5; // x22
  Il2CppObject *v75; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x28
  ShopBuyItemListViewManager___c_c *v85; // x8
  System_Func_object__bool__o *_9__106_6; // x22
  Il2CppObject *v87; // x19
  struct ShopBuyItemListViewManager___c_StaticFields *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  __int64 v95; // x8
  __int64 v96; // x27
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x27
  __int64 v102; // x8
  __int64 v103; // x9
  int *v104; // x10
  __int64 v105; // x0
  __int64 v106; // x8
  __int64 v107; // x9
  int *v108; // x10
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x22
  int32_t v112; // w19
  int32_t v113; // w29
  int64_t v114; // x21
  __int64 v115; // x8
  __int64 v116; // x9
  int *v117; // x10
  __int64 v118; // x0
  System_Func_object__bool__o *v119; // x19
  Il2CppObject *v120; // x0
  Il2CppObject *v121; // x20
  System_Collections_ICollection_o *TargetEntityList; // x21
  System_String_o **v123; // x8
  int v124; // w21
  int klass_high; // w22
  void *monitor; // x8
  int v127; // w25
  UserShopMaster_o *v128; // x22
  int v129; // w26
  int v130; // w19
  __int64 v131; // x8
  int32_t v132; // w24
  System_String_o *v133; // x20
  UILabel_o *v134; // x19
  System_String_o *v135; // x20
  Il2CppObject *v136; // x21
  Il2CppObject *v137; // x0
  unsigned int v138; // [xsp+4h] [xbp-DCh]
  ShopReleaseMaster_o *v139; // [xsp+8h] [xbp-D8h]
  System_Object_array *v140; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-C8h]
  __int64 v142; // [xsp+28h] [xbp-B8h]
  CommonReleaseMaster_o *v143; // [xsp+30h] [xbp-B0h]
  int v144; // [xsp+3Ch] [xbp-A4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v145; // [xsp+40h] [xbp-A0h] BYREF
  UserShopEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4E00B53 & 1) == 0 )
  {
    sub_1CE6700(&CondType_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____79947672);
    sub_1CE6700(&Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_ShopEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__);
    sub_1CE6700(&System_Func_CommonReleaseEntity__int__TypeInfo);
    sub_1CE6700(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1CE6700(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1CE6700(&System_Func_ShopReleaseEntity__bool__TypeInfo);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__);
    sub_1CE6700(&Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__);
    sub_1CE6700(&ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo);
    sub_1CE6700(&ShopBuyItemListViewManager___c_TypeInfo);
    sub_1CE6700(&StringLiteral_5729/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/);
    sub_1CE6700(&StringLiteral_5730/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/);
    sub_1CE6700(&StringLiteral_5732/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/);
    byte_4E00B53 = 1;
  }
  memset(&v147, 0, sizeof(v147));
  entity = 0;
  v7 = sub_1CE694C(ShopBuyItemListViewManager___c__DisplayClass106_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_152;
  *(_DWORD *)(v7 + 16) = slot;
  skillPartsLimitLabel = (UnityEngine_Object_o *)this->fields.skillPartsLimitLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillPartsLimitLabel, 0, 0) )
    return;
  Master_object = (__int64)this->fields.skillPartsLimitLabel;
  if ( !Master_object )
    goto LABEL_152;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_152;
  EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                            (ShopMaster_o *)Master_object,
                                                                            eventId,
                                                                            0);
  v13 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_ShopEntity__bool__TypeInfo);
  v142 = v7;
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          EventEntitiyList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          v14,
          (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_ShopEntity___);
  v139 = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v15 )
LABEL_152:
    sub_1CE6958(Master_object, v9);
  max_length = v15->max_length;
  v17 = (CommonReleaseMaster_o *)Master_object;
  Master_object = (__int64)v139;
  v140 = v15;
  if ( max_length < 1 )
    goto LABEL_117;
  v18 = 0;
  v143 = v17;
LABEL_18:
  if ( v18 >= (unsigned int)max_length )
LABEL_141:
    sub_1CE6960(Master_object);
  v19 = v140->m_Items[v18];
  if ( !v19 || !Master_object )
    goto LABEL_152;
  EntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                       (ShopReleaseMaster_o *)Master_object,
                                                                       (int32_t)v19[1].klass,
                                                                       0);
  v21 = ShopBuyItemListViewManager___c_TypeInfo;
  if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
    v21 = ShopBuyItemListViewManager___c_TypeInfo;
  }
  _9__106_2 = (System_Func_object__bool__o *)v21->static_fields->__9__106_2;
  if ( !_9__106_2 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__106_2 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_ShopReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_2,
      v23,
      Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_2__,
      0);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_2 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_2;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__106_2,
      (int32_t)_9__106_2,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          EntitiyList,
          (System_Func_TSource__bool__o *)_9__106_2,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
  Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                             v31,
                             (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
  if ( !Master_object )
    goto LABEL_152;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v145,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  v32 = v143;
  v147 = v145;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v147,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v147,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
      Master_object = (__int64)v139;
      ++v18;
      max_length = v140->max_length;
      if ( v18 >= max_length )
        goto LABEL_117;
      goto LABEL_18;
    }
    if ( !v147.fields._current )
      sub_1CE6958(0, v33);
    condValue = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)v147.fields._current, 0);
    if ( !v32 )
      sub_1CE6958(condValue, (unsigned int)condValue);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(v32, condValue, 0);
    v36 = ShopBuyItemListViewManager___c_TypeInfo;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v36 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_3 = (System_Func_object__bool__o *)v36->static_fields->__9__106_3;
    if ( !_9__106_3 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v36->static_fields->__9;
      _9__106_3 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_3,
        v38,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_3__,
        0);
      v39 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v39->__9__106_3 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_3;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v39->__9__106_3, (int32_t)_9__106_3, v40, v41, v42, v43, v44, v45);
    }
    v46 = System_Linq_Enumerable__FirstOrDefault_object__52613440(
            List,
            (System_Func_TSource__bool__o *)_9__106_3,
            (const MethodInfo_322D140 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____79947672);
    v32 = v143;
  }
  while ( !v46 );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v147,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  v47 = v142;
  v48 = v140;
  *(_QWORD *)(v142 + 20) = 0xFFFFFFFFLL;
  v49 = v140->max_length;
  if ( v49 < 1 )
    goto LABEL_117;
  source = 0;
  v50 = 0;
  v51 = 1;
  do
  {
    if ( !v51 )
      goto LABEL_111;
    if ( v50 >= v49 )
      goto LABEL_141;
    v52 = v48->m_Items[v50];
    if ( !v52 )
      goto LABEL_152;
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)ShopReleaseMaster__GetEntitiyList(
                                                                 v139,
                                                                 (int32_t)v52[1].klass,
                                                                 0);
    v54 = System_Linq_Enumerable__ToList_object_(
            v53,
            (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    v55 = ShopBuyItemListViewManager___c_TypeInfo;
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)v54;
    if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
      v55 = ShopBuyItemListViewManager___c_TypeInfo;
    }
    _9__106_4 = (System_Func_object__bool__o *)v55->static_fields->__9__106_4;
    if ( !_9__106_4 )
    {
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v55 = ShopBuyItemListViewManager___c_TypeInfo;
      }
      v58 = (Il2CppObject *)v55->static_fields->__9;
      _9__106_4 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_ShopReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__106_4,
        v58,
        Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_4__,
        0);
      v59 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
      v59->__9__106_4 = (struct System_Func_ShopReleaseEntity__bool__o *)_9__106_4;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v59->__9__106_4, (int32_t)_9__106_4, v60, v61, v62, v63, v64, v65);
    }
    v66 = System_Linq_Enumerable__Where_object_(
            v56,
            (System_Func_TSource__bool__o *)_9__106_4,
            (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_ShopReleaseEntity___);
    Master_object = (__int64)System_Linq_Enumerable__ToList_object_(
                               v66,
                               (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_ShopReleaseEntity___);
    if ( !Master_object )
      goto LABEL_152;
    v67 = (System_Collections_Generic_List_object__o *)Master_object;
    v138 = v50;
    if ( *(int *)(Master_object + 24) < 1 )
    {
LABEL_108:
      v69 = *(_DWORD *)(v47 + 20);
    }
    else
    {
      v68 = 0;
      while ( 1 )
      {
        v69 = *(_DWORD *)(v47 + 20);
        if ( v69 != -1 )
          break;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   v67,
                                   v68,
                                   (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ShopReleaseEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_152;
        v70 = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)Master_object, 0);
        v71 = CommonReleaseMaster__getList(v143, v70, 0);
        v72 = ShopBuyItemListViewManager___c_TypeInfo;
        v73 = (System_Collections_Generic_IEnumerable_TSource__o *)v71;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v72 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_5 = (System_Func_object__int__o *)v72->static_fields->__9__106_5;
        if ( !_9__106_5 )
        {
          if ( !v72->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v72);
            v72 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v75 = (Il2CppObject *)v72->static_fields->__9;
          _9__106_5 = (System_Func_object__int__o *)sub_1CE694C(System_Func_CommonReleaseEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__106_5,
            v75,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_5__,
            0);
          v76 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v76->__9__106_5 = (struct System_Func_CommonReleaseEntity__int__o *)_9__106_5;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v76->__9__106_5, (int32_t)_9__106_5, v77, v78, v79, v80, v81, v82);
        }
        v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     v73,
                                                                     (System_Func_TSource__TKey__o *)_9__106_5,
                                                                     (const MethodInfo_32338E0 *)Method_System_Linq_Enumerable_OrderByDescending_CommonReleaseEntity__int___);
        v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v83,
                                                                     (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
        v85 = ShopBuyItemListViewManager___c_TypeInfo;
        if ( !ShopBuyItemListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager___c_TypeInfo);
          v85 = ShopBuyItemListViewManager___c_TypeInfo;
        }
        _9__106_6 = (System_Func_object__bool__o *)v85->static_fields->__9__106_6;
        if ( !_9__106_6 )
        {
          if ( !v85->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v85);
            v85 = ShopBuyItemListViewManager___c_TypeInfo;
          }
          v87 = (Il2CppObject *)v85->static_fields->__9;
          _9__106_6 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__106_6,
            v87,
            Method_ShopBuyItemListViewManager___c__SetSkillPartsLimitLabel_b__106_6__,
            0);
          v88 = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
          v88->__9__106_6 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__106_6;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v88->__9__106_6, (int32_t)_9__106_6, v89, v90, v91, v92, v93, v94);
        }
        Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                                   v84,
                                   (System_Func_TSource__bool__o *)_9__106_6,
                                   (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
        if ( !Master_object )
          goto LABEL_152;
        v95 = *(_QWORD *)Master_object;
        v96 = Master_object;
        v97 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v98 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_CommonReleaseEntity__c **)v98 - 1) != System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo )
          {
            --v97;
            v98 += 4;
            if ( !v97 )
              goto LABEL_77;
          }
          v99 = v95 + 16LL * *v98 + 312;
        }
        else
        {
LABEL_77:
          v99 = sub_1CBCA7C(Master_object, System_Collections_Generic_IEnumerable_CommonReleaseEntity__TypeInfo, 0);
        }
        v101 = (*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v96, *(_QWORD *)(v99 + 8));
        if ( !v101 )
          sub_1CE6958(0, v100);
        while ( 1 )
        {
          v102 = *(_QWORD *)v101;
          v103 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
          {
            v104 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v104 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v103;
              v104 += 4;
              if ( !v103 )
                goto LABEL_84;
            }
            v105 = v102 + 16LL * *v104 + 312;
          }
          else
          {
LABEL_84:
            v105 = sub_1CBCA7C(v101, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v101, *(_QWORD *)(v105 + 8)) & 1) == 0 )
            break;
          v106 = *(_QWORD *)v101;
          v107 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
          {
            v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_CommonReleaseEntity__c **)v108 - 1) != System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo )
            {
              --v107;
              v108 += 4;
              if ( !v107 )
                goto LABEL_91;
            }
            v109 = v106 + 16LL * *v108 + 312;
          }
          else
          {
LABEL_91:
            v109 = sub_1CBCA7C(v101, System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo, 0);
          }
          v111 = (*(__int64 (__fastcall **)(__int64, _QWORD))v109)(v101, *(_QWORD *)(v109 + 8));
          if ( !v111 )
            sub_1CE6958(0, v110);
          v112 = *(_DWORD *)(v111 + 28);
          v113 = *(_DWORD *)(v111 + 32);
          v114 = *(int *)(v111 + 36);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(v112, v113, v114, 0, 0, 0) )
          {
            *(int32x2_t *)(v142 + 20) = vrev64_s32(*(int32x2_t *)(v111 + 20));
            source = v84;
            break;
          }
        }
        v115 = *(_QWORD *)v101;
        v116 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
        {
          v117 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
          {
            --v116;
            v117 += 4;
            if ( !v116 )
              goto LABEL_102;
          }
          v118 = v115 + 16LL * *v117 + 312;
        }
        else
        {
LABEL_102:
          v118 = sub_1CBCA7C(v101, System_IDisposable_TypeInfo, 0);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v118)(v101, *(_QWORD *)(v118 + 8));
        v47 = v142;
        if ( ++v68 >= v67->fields._size )
          goto LABEL_108;
      }
    }
    v48 = v140;
    v51 = v69 == -1;
    v49 = v140->max_length;
    v50 = v138 + 1;
  }
  while ( (int)(v138 + 1) < v49 );
  if ( v69 == -1 )
  {
LABEL_117:
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
      goto LABEL_120;
    goto LABEL_152;
  }
LABEL_111:
  v119 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_CommonReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v119,
    (Il2CppObject *)v47,
    Method_ShopBuyItemListViewManager___c__DisplayClass106_0__SetSkillPartsLimitLabel_b__1__,
    0);
  v120 = System_Linq_Enumerable__FirstOrDefault_object__52613440(
           source,
           (System_Func_TSource__bool__o *)v119,
           (const MethodInfo_322D140 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity____79947672);
  if ( !v120 )
  {
    v123 = (System_String_o **)&StringLiteral_5732/*"EVENT_REWARD_PARTS_NO_LIMIT_TEXT"*/;
    v124 = 0;
    klass_high = 0;
LABEL_146:
    v133 = *v123;
    Master_object = (__int64)this->fields.skillPartsLimitLabel;
    if ( Master_object )
    {
      Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        v134 = this->fields.skillPartsLimitLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v135 = LocalizationManager__Get(v133, 0);
        LODWORD(v145.fields._list) = v124;
        v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v145);
        v144 = klass_high;
        v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144);
        Master_object = (__int64)System_String__Format_65164136(v135, v136, v137, 0);
        if ( v134 )
        {
          UILabel__set_text(v134, (System_String_o *)Master_object, 0);
          return;
        }
      }
    }
    goto LABEL_152;
  }
  v121 = v120;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_152;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_152;
  TargetEntityList = (System_Collections_ICollection_o *)ShopGroupMaster__GetTargetEntityList(
                                                           (ShopGroupMaster_o *)Master_object,
                                                           (int32_t)v121[2].klass,
                                                           0);
  if ( !BasicHelper__IsNullOrEmpty(TargetEntityList, 0) )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !TargetEntityList )
      goto LABEL_152;
    monitor = TargetEntityList[1].monitor;
    v127 = (_DWORD)monitor - 1;
    if ( (int)monitor >= 1 )
    {
      v128 = (UserShopMaster_o *)Master_object;
      v129 = 0;
      v130 = 0;
      while ( 1 )
      {
        v131 = *((_QWORD *)&TargetEntityList[2].klass + v129);
        if ( !v131 )
          goto LABEL_152;
        v132 = *(_DWORD *)(v131 + 16);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4DFE4CA )
        {
          sub_1CE6700(&NetworkManager_TypeInfo);
          byte_4DFE4CA = 1;
        }
        Master_object = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v128 )
          goto LABEL_152;
        Master_object = UserShopMaster__TryGetEntity(
                          v128,
                          &entity,
                          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                          v132,
                          0);
        if ( (Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_152;
          v130 += entity->fields.num;
        }
        if ( v127 == v129 )
          goto LABEL_144;
        if ( (unsigned int)++v129 >= LODWORD(TargetEntityList[1].monitor) )
          goto LABEL_141;
      }
    }
    v130 = 0;
LABEL_144:
    klass_high = HIDWORD(v121[2].klass);
    v123 = (System_String_o **)&StringLiteral_5729/*"EVENT_REWARD_PARTS_CANT_PURCHASE_TEXT"*/;
    v124 = klass_high - v130;
    if ( klass_high - v130 >= 1 )
      v123 = (System_String_o **)&StringLiteral_5730/*"EVENT_REWARD_PARTS_CAN_PURCHASE_TEXT"*/;
    goto LABEL_146;
  }
  Master_object = (__int64)this->fields.skillPartsLimitLabel;
  if ( !Master_object )
    goto LABEL_152;
LABEL_120:
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
}


void ShopBuyItemListViewManager__StopUpdateRemainTime(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1CE6958(0, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, method);
}


void ShopBuyItemListViewManager__Update(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0);
  ShopBuyItemListViewManager__UpdateAnotherBuyAble(this, v3);
}


void ShopBuyItemListViewManager__UpdateAnotherBuyAble(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *anotherBuyAbleAlphaTransitionCalculator; // x0
  struct AlphaTransitionCalculator_o **p_anotherBuyAbleAlphaTransitionCalculator; // x20
  AlphaTransitionCalculator_o *AlphaTransitionCalculator; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  float realtimeSinceStartup; // s0
  float v14; // s0
  const MethodInfo *v15; // x1
  float v16; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v18; // w8

  if ( (byte_4E00B34 & 1) == 0 )
  {
    sub_1CE6700(&Method_TransitionCalculator_float__Update__);
    byte_4E00B34 = 1;
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  p_anotherBuyAbleAlphaTransitionCalculator = &this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
  {
    AlphaTransitionCalculator = ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(0, method);
    *p_anotherBuyAbleAlphaTransitionCalculator = AlphaTransitionCalculator;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.anotherBuyAbleAlphaTransitionCalculator,
      (int32_t)AlphaTransitionCalculator,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
    if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
  }
  v14 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)anotherBuyAbleAlphaTransitionCalculator,
          (const MethodInfo_3BF77FC *)Method_TransitionCalculator_float__Update__);
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  this->fields.alphaAnimNow = v14;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(anotherBuyAbleAlphaTransitionCalculator, 0)
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.alphaAnimTimeOld) >= 3.0 )
  {
    anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
    if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__StartFadeOut(anotherBuyAbleAlphaTransitionCalculator, 0);
  }
  anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
  if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
    goto LABEL_19;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(anotherBuyAbleAlphaTransitionCalculator, 0) )
    return;
  anotherBuyAbleAlphaTransitionCalculator = *p_anotherBuyAbleAlphaTransitionCalculator;
  if ( !*p_anotherBuyAbleAlphaTransitionCalculator )
LABEL_19:
    sub_1CE6958(anotherBuyAbleAlphaTransitionCalculator, v12);
  AlphaTransitionCalculator__StartFadeIn(anotherBuyAbleAlphaTransitionCalculator, 0);
  v16 = UnityEngine_Time__get_realtimeSinceStartup(0);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  if ( alphaAnimCnt + 1 < 232792560 )
    v18 = alphaAnimCnt + 1;
  else
    v18 = alphaAnimCnt - 232792559;
  this->fields.alphaAnimTimeOld = v16;
  this->fields.alphaAnimCnt = v18;
  ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(this, v15);
}


float ShopBuyItemListViewManager__get_AlphaAnimNow(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *ShopBuyItemListViewManager__get_ClippingObjectList(
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
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4E00B33 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00B33 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1CE6958(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopBuyItemListViewObject__GetItem(
                                                                  (ShopBuyItemListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44937408(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v16 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
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


int32_t ShopBuyItemListViewManager__get_EventItemCount(ShopBuyItemListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._EventItemCount_k__BackingField;
}


int32_t ShopBuyItemListViewManager__get_ItemBaseWindowHeight(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1CE6958(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_ShopBuyItemListViewObject__o *ShopBuyItemListViewManager__get_ObjectList(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4E00B32 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00B32 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1CE6958(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v15 = Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v17 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v17, v8, v9, v10, v11, v12, v13);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v3;
}


void ShopBuyItemListViewManager__set_EventItemCount(
        ShopBuyItemListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventItemCount_k__BackingField = value;
}


void ShopBuyItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E00B55 & 1) == 0 )
  {
    sub_1CE6700(&ShopBuyItemListViewManager___c_TypeInfo);
    byte_4E00B55 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(ShopBuyItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopBuyItemListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopBuyItemListViewManager___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)ShopBuyItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopBuyItemListViewManager___c___ctor(ShopBuyItemListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopBuyItemListViewManager___c___ChangeNextAnotherItemIcon_b__51_0(
        ShopBuyItemListViewManager___c_o *this,
        ShopBuyItemListViewObject_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4E00B56 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00B56 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( v4 )
  {
    if ( !x )
      sub_1CE6958(v4, v5);
    ShopBuyItemListViewObject__ChangeNextAnotherItemIcon(x, v5);
  }
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_2(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.condType == 113;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_3(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.condType == 263;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_4(
        ShopBuyItemListViewManager___c_o *this,
        ShopReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.condType == 113;
}


int32_t ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_5(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.priority;
}


bool ShopBuyItemListViewManager___c___SetSkillPartsLimitLabel_b__106_6(
        ShopBuyItemListViewManager___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.condType == 1;
}


void ShopBuyItemListViewManager___c__DisplayClass106_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopBuyItemListViewManager___c__DisplayClass106_0___SetSkillPartsLimitLabel_b__0(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.slot == this->fields.slot;
}


bool ShopBuyItemListViewManager___c__DisplayClass106_0___SetSkillPartsLimitLabel_b__1(
        ShopBuyItemListViewManager___c__DisplayClass106_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.condGroup == this->fields.commonReleaseCondGroup
      && x->fields.priority <= this->fields.targetPriority
      && x->fields.condType == 263;
}


void ShopBuyItemListViewManager___c__DisplayClass69_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopBuyItemListViewManager___c__DisplayClass69_0___GetIndexByItemId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  int64_t sortValue1; // x8

  if ( (byte_4E00B57 & 1) == 0 )
  {
    sub_1CE6700(&ShopBuyItemListViewItem_TypeInfo);
    byte_4E00B57 = 1;
  }
  if ( n
    && (naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment,
        n->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewItem_TypeInfo )
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


bool ShopBuyItemListViewManager___c__DisplayClass69_0___GetIndexByItemId_b__1(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  int64_t sortValue1; // x8

  if ( (byte_4E00B59 & 1) == 0 )
  {
    sub_1CE6700(&ShopBuyItemListViewItem_TypeInfo);
    byte_4E00B59 = 1;
  }
  if ( n
    && (naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment,
        n->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewItem_TypeInfo )
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


bool ShopBuyItemListViewManager___c__DisplayClass69_0___GetIndexByItemId_b__2(
        ShopBuyItemListViewManager___c__DisplayClass69_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  ListViewItem_c *klass; // x9
  unsigned int naturalAligment; // w11
  __int64 v7; // x10
  int64_t sortValue1; // x12
  bool v9; // zf
  bool v10; // w12

  if ( (byte_4E00B58 & 1) == 0 )
  {
    sub_1CE6700(&ShopBuyItemListViewItem_TypeInfo);
    byte_4E00B58 = 1;
  }
  if ( !n )
    return 0;
  klass = n->klass;
  naturalAligment = n->klass->_2.naturalAligment;
  v7 = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v7 )
    return 0;
  if ( (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[v7 - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    sortValue1 = n[1].fields.sortValue1;
    if ( sortValue1 )
      LODWORD(sortValue1) = *(_DWORD *)(sortValue1 + 16);
  }
  else
  {
    LODWORD(sortValue1) = 0;
  }
  v9 = (_DWORD)sortValue1 == this->fields.itemId;
  v10 = 0;
  if ( v9 && naturalAligment >= (unsigned int)v7 )
  {
    if ( (ShopBuyItemListViewItem_c *)klass->_2.typeHierarchy[v7 - 1] == ShopBuyItemListViewItem_TypeInfo )
      return !ShopBuyItemListViewItem__IsDisabledDisp((ShopBuyItemListViewItem_o *)n, (const MethodInfo *)n);
    return 0;
  }
  return v10;
}


void ShopBuyItemListViewManager___c__DisplayClass70_0___ctor(
        ShopBuyItemListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopBuyItemListViewManager___c__DisplayClass70_0___GetIndexByTargetId_b__0(
        ShopBuyItemListViewManager___c__DisplayClass70_0_o *this,
        ListViewItem_o *n,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewItem_c *klass; // x0

  if ( (byte_4E00B5A & 1) == 0 )
  {
    sub_1CE6700(&ShopBuyItemListViewItem_TypeInfo);
    byte_4E00B5A = 1;
  }
  if ( n
    && (naturalAligment = ShopBuyItemListViewItem_TypeInfo->_2.naturalAligment,
        n->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ShopBuyItemListViewItem_c *)n->klass->_2.typeHierarchy[naturalAligment - 1] == ShopBuyItemListViewItem_TypeInfo )
  {
    klass = n[1].klass;
    if ( klass )
      LODWORD(klass) = ShopEntity__get_TargetId((ShopEntity_o *)klass, 0);
  }
  else
  {
    LODWORD(klass) = 0;
  }
  return (_DWORD)klass == this->fields.targetId;
}