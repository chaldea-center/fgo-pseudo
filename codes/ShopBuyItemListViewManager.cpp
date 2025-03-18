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

  if ( (byte_4C1E385 & 1) == 0 )
  {
    sub_1C3B764(&ListViewSort_TypeInfo, v1);
    sub_1C3B764(&ShopBuyItemListViewManager_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_6417/*"FRIEND_LOCK_HELP_TEXT"*/, v9);
    byte_4C1E385 = 1;
  }
  ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_6417/*"FRIEND_LOCK_HELP_TEXT"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ShopBuyItemListViewManager_TypeInfo->static_fields,
    StringLiteral_6417/*"FRIEND_LOCK_HELP_TEXT"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = ShopBuyItemListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v11 = (ListViewSort_o *)sub_1C3B9B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_42232596(v11, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = ShopBuyItemListViewManager_TypeInfo->static_fields;
  static_fields->exchangeSvtCoinSortInfo = v11;
  sub_1C3B708(
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
  *(_OWORD *)&this->fields.noTabScrollBarPos.fields.x = xmmword_C0DBC0;
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
    this->fields.filterStatus = dword_C47504[filterStatus];
  ShopBuyItemListViewManager__SetList(this, method);
  v5 = this->fields.filterStatus;
  if ( !byte_4C1E409 )
  {
    sub_1C3B764(&EventRewardSaveData_TypeInfo, v4);
    byte_4C1E409 = 1;
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4C1E369 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_ShopBuyItemListViewObject__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__, v3);
    sub_1C3B764(&Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__49_0__, v4);
    sub_1C3B764(&ShopBuyItemListViewManager___c_TypeInfo, v5);
    byte_4C1E369 = 1;
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
    _9__49_0 = (System_Action_object__o *)sub_1C3B9B0(System_Action_ShopBuyItemListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__49_0,
      v11,
      Method_ShopBuyItemListViewManager___c__ChangeNextAnotherItemIcon_b__49_0__,
      0LL);
    static_fields = ShopBuyItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_ShopBuyItemListViewObject__o *)_9__49_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v9 )
    sub_1C3B9C0(ObjectList, v7);
  System_Collections_Generic_List_object___ForEach(
    v9,
    (System_Action_T__o *)_9__49_0,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__ForEach__);
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

  if ( (byte_4C1E36F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C1E36F = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList((ShopMaster_o *)Instance, eventId, slot, 0LL)) == 0LL
    || (itemList = this->fields.itemList) == 0LL )
  {
    sub_1C3B9C0(Instance, v14);
  }
  if ( itemList->fields._size != Instance->max_length )
    ShopBuyItemListViewManager__CreateList_34072028(this, 6, eventId, slot, eventNum, isForcedAdjustment, v15);
}


AlphaTransitionCalculator_o *__fastcall ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(
        ShopBuyItemListViewManager_o *this,
        const MethodInfo *method)
{
  float v2; // s8
  System_Func_float__float__float__float__o *v3; // x19
  AlphaTransitionCalculator_o *v4; // x20

  if ( (byte_4C1E368 & 1) == 0 )
  {
    sub_1C3B764(&AlphaTransitionCalculator_TypeInfo, method);
    byte_4C1E368 = 1;
  }
  v2 = ChangedFPSUtil__CovertFrameNumToSecond(7, 0LL);
  v3 = ExtraEasing__AsymptoticSeriesFloat(0.5, 7.0, 0LL);
  v4 = (AlphaTransitionCalculator_o *)sub_1C3B9B0(AlphaTransitionCalculator_TypeInfo);
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

  ShopBuyItemListViewManager__CreateList_34072028(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_4C1E36A & 1) == 0 )
  {
    sub_1C3B764(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&svtCoinType);
    byte_4C1E36A = 1;
  }
  v10 = ShopBuyItemListViewManager_TypeInfo;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
    v10 = ShopBuyItemListViewManager_TypeInfo;
  }
  exchangeSvtCoinSortInfo = v10->static_fields->exchangeSvtCoinSortInfo;
  this->fields.sort = exchangeSvtCoinSortInfo;
  sub_1C3B708(
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
    sub_1C3B9C0(0LL, v12);
  ListViewSort__Load(sort, 0LL);
  ShopBuyItemListViewManager__CreateList_34072028(this, 22, 0, svtCoinType, 0, 0, v14);
  ShopBuyItemListViewManager__SetFilterButtonImage(this, v15);
}


void __fastcall ShopBuyItemListViewManager__CreateList(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34072028(this, kind, 0, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewManager__CreateList_34072028(
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
  ShopEntity_array *ShopEntities; // x27
  System_Collections_Generic_List_object__o *v46; // x26
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x28
  int v49; // w23
  ShopEntity_o *v50; // x29
  System_Int32_array *targetIds; // x8
  unsigned __int64 v52; // x20
  unsigned __int64 v53; // x9
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  const MethodInfo *v64; // x3
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t v66; // w22
  ShopBuyItemListViewItem_o *v67; // x21
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  __int64 v78; // x8
  System_Collections_Generic_List_object__o *v79; // x0
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  int32_t v83; // w27
  System_Collections_Generic_List_object__o *v84; // x28
  int32_t v85; // w21
  Il2CppObject *Item; // x29
  ShopBuyItemListViewItem_o *v87; // x20
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass **v97; // x0
  System_Collections_Generic_List_object__o *v98; // x28
  int32_t v99; // w26
  System_Collections_Generic_List_object__o *v100; // x27
  int32_t v101; // w21
  Il2CppObject *v102; // x28
  ShopBuyItemListViewItem_o *v103; // x20
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  Il2CppClass **v113; // x0
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v115; // w23
  int32_t v116; // w24
  __int64 v117; // x8
  __int64 v118; // x9
  __int64 v119; // x10
  UnityEngine_Object_o *scrollbarBgSprite; // x20
  int32_t v121; // w1
  UnityEngine_Object_o *scrollbarForeSprite; // x20
  int32_t v123; // w1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v125; // x0
  int32_t v126; // w8
  __int64 *v127; // x9
  __int64 *v128; // x8
  System_String_o *v129; // x21
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  struct ListViewSort_o *sort; // x1
  _BOOL8 v137; // x0
  const MethodInfo *v138; // x3
  int32_t ItemFilterId_k__BackingField; // w8
  int32_t v140; // [xsp+4h] [xbp-9Ch]
  int32_t v141; // [xsp+Ch] [xbp-94h]
  ShopBuyItemListViewManager_o *v142; // [xsp+10h] [xbp-90h]
  ShopBuyItemListViewManager_o *enterTime; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_object__o *v144; // [xsp+20h] [xbp-80h]
  __int64 v145; // [xsp+28h] [xbp-78h]
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  EventRewardSceneEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1E36B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, *(_QWORD *)&kind);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v20);
    sub_1C3B764(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21);
    sub_1C3B764(&LocalizationManager_TypeInfo, v22);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v23);
    sub_1C3B764(&ShopBuyItemListViewItem_TypeInfo, v24);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C3B764(&StringLiteral_12369/*"Sequence contains more than one element"*/, v26);
    sub_1C3B764(&StringLiteral_12319/*"ScrollBarMotionCompleteValue"*/, v27);
    sub_1C3B764(&StringLiteral_5822/*"Element "*/, v28);
    sub_1C3B764(&StringLiteral_5887/*"EndFadein"*/, v29);
    byte_4C1E36B = 1;
  }
  possessionAnotherItemId = 0LL;
  entity = 0LL;
  this->fields.kind = kind;
  this->fields.eventId = eventId;
  this->fields.eventCount = eventNum;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    Instance = (int64_t)ShopMaster__GetEventItemList((ShopMaster_o *)MasterData_object, this->fields.eventId, 0LL);
    if ( !Instance )
      goto LABEL_133;
    currencyInfoController = this->fields.currencyInfoController;
    v36 = (System_Int32_array *)Instance;
    this->fields._EventItemCount_k__BackingField = *(_QWORD *)(Instance + 24);
    Instance = (int64_t)ShopBuyItemListViewManager__get_ObjectList(this, v31);
    if ( !currencyInfoController )
      goto LABEL_133;
    currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
    sub_1C3B708(
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
      goto LABEL_133;
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
  v140 = eventNum;
  enterTime = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetEnterTime(
                                                (ShopBuyItemListViewManager_o *)Instance,
                                                (int32_t)v31,
                                                v34);
  ShopEntities = ShopBuyItemListViewManager__GetShopEntities(
                   enterTime,
                   this->fields.kind,
                   this->fields.eventId,
                   slot,
                   v44);
  v144 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v144,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  v46 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ShopEntities )
    goto LABEL_133;
  max_length = ShopEntities->max_length;
  v141 = slot;
  if ( max_length < 1 )
  {
    v145 = 0LL;
    if ( !v46 )
      goto LABEL_133;
    goto LABEL_57;
  }
  v145 = 0LL;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v49 = 0;
  v142 = this;
  do
  {
    if ( v49 >= (unsigned int)max_length )
LABEL_134:
      sub_1C3B9C8(Instance, v31);
    v50 = ShopEntities->m_Items[v49];
    if ( !v50 )
      goto LABEL_133;
    if ( v50->fields.purchaseType == 6 )
    {
      targetIds = v50->fields.targetIds;
      possessionAnotherItemId = targetIds;
      if ( !targetIds )
        goto LABEL_133;
      v52 = 0LL;
      while ( 1 )
      {
        v53 = targetIds->max_length;
        if ( (__int64)v52 >= (int)v53 )
          break;
        if ( v52 >= v53 )
          goto LABEL_134;
        if ( v48 )
        {
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v48,
                                targetIds->m_Items[v52 + 1],
                                (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_53;
          targetIds = possessionAnotherItemId;
          ++v52;
          if ( possessionAnotherItemId )
            continue;
        }
        goto LABEL_133;
      }
    }
    if ( (v145 & 1) != 0 )
    {
      LOBYTE(v145) = 1;
    }
    else
    {
      LOBYTE(v145) = v50->fields.purchaseType == 16;
      this->fields.targetSlot = v50->fields.slot;
    }
    if ( ShopEntity__IsSoldOut(v50, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(v50, 0LL) )
    {
      Instance = ShopEntity__IsAnotherItemBuyable(v50, &possessionAnotherItemId, 0LL);
      if ( (Instance & 1) == 0 )
      {
        if ( !v144 )
          goto LABEL_133;
        items = v144->fields._items;
        v81 = Method_System_Collections_Generic_List_ShopEntity__Add__;
        ++v144->fields._version;
        if ( !items )
          goto LABEL_133;
        size = v144->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v63 = &items->obj.klass + size;
          v144->fields._size = size + 1;
          goto LABEL_48;
        }
        v78 = v81[4];
        v79 = v144;
        goto LABEL_52;
      }
    }
    Instance = ShopEntity__isClosedShopPriorityLowCheck(v50, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v46 )
        goto LABEL_133;
      v60 = v46->fields._items;
      v61 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v46->fields._version;
      if ( !v60 )
        goto LABEL_133;
      v62 = v46->fields._size;
      if ( (unsigned int)v62 < v60->max_length )
      {
        v63 = &v60->obj.klass + v62;
        v46->fields._size = v62 + 1;
LABEL_48:
        v63[4] = (Il2CppClass *)v50;
        sub_1C3B708((PartyOrganizationUtility_o *)(v63 + 4), (int64_t)v50, v54, v55, v56, v57, v58, v59);
        goto LABEL_53;
      }
      v78 = v61[4];
      v79 = v46;
LABEL_52:
      System_Collections_Generic_List_object___AddWithResize(
        v79,
        (Il2CppObject *)v50,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v78 + 192) + 112LL));
      goto LABEL_53;
    }
    Instance = ShopEntity__GetPurchaseShop(v50, 0LL);
    if ( (int)Instance < 1
      || (Instance = ShopBuyItemListViewManager__ModifyItem(this, v50, Instance, v64), (Instance & 1) == 0) )
    {
      if ( v50->fields.id >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v66 = this->fields.kind;
        v67 = (ShopBuyItemListViewItem_o *)sub_1C3B9B0(ShopBuyItemListViewItem_TypeInfo);
        ShopBuyItemListViewItem___ctor(v67, SHIDWORD(v145), v66, v50, (int64_t)enterTime, 0LL);
        if ( !itemList )
          goto LABEL_133;
        v74 = itemList->fields._items;
        v75 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v74 )
          goto LABEL_133;
        v76 = itemList->fields._size;
        if ( (unsigned int)v76 >= v74->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v67,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = &v74->obj.klass + v76;
          itemList->fields._size = v76 + 1;
          v77[4] = (Il2CppClass *)v67;
          sub_1C3B708((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v67, v68, v69, v70, v71, v72, v73);
        }
        ++HIDWORD(v145);
        this = v142;
      }
    }
LABEL_53:
    max_length = ShopEntities->max_length;
    ++v49;
  }
  while ( v49 < max_length );
  if ( !v46 )
    goto LABEL_133;
LABEL_57:
  if ( v46->fields._size >= 1 )
  {
    v83 = 0;
    do
    {
      v84 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v85 = this->fields.kind;
      Item = System_Collections_Generic_List_object___get_Item(
               v46,
               v83,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v87 = (ShopBuyItemListViewItem_o *)sub_1C3B9B0(ShopBuyItemListViewItem_TypeInfo);
      ShopBuyItemListViewItem___ctor(v87, HIDWORD(v145) + v83, v85, (ShopEntity_o *)Item, (int64_t)enterTime, 0LL);
      if ( !v84 )
        goto LABEL_133;
      v94 = v84->fields._items;
      v95 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v84->fields._version;
      if ( !v94 )
        goto LABEL_133;
      v96 = v84->fields._size;
      if ( (unsigned int)v96 >= v94->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v84,
          (Il2CppObject *)v87,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
      }
      else
      {
        v97 = &v94->obj.klass + v96;
        v84->fields._size = v96 + 1;
        v97[4] = (Il2CppClass *)v87;
        sub_1C3B708((PartyOrganizationUtility_o *)(v97 + 4), (int64_t)v87, v88, v89, v90, v91, v92, v93);
      }
      ++v83;
    }
    while ( v83 < v46->fields._size );
    HIDWORD(v145) += v83;
  }
  v98 = v144;
  if ( !v144 )
LABEL_133:
    sub_1C3B9C0(Instance, v31);
  if ( v144->fields._size >= 1 )
  {
    v99 = 0;
    do
    {
      v100 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v101 = this->fields.kind;
      v102 = System_Collections_Generic_List_object___get_Item(
               v98,
               v99,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      v103 = (ShopBuyItemListViewItem_o *)sub_1C3B9B0(ShopBuyItemListViewItem_TypeInfo);
      ShopBuyItemListViewItem___ctor(v103, HIDWORD(v145) + v99, v101, (ShopEntity_o *)v102, (int64_t)enterTime, 0LL);
      if ( !v100 )
        goto LABEL_133;
      v110 = v100->fields._items;
      v111 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v100->fields._version;
      if ( !v110 )
        goto LABEL_133;
      v112 = v100->fields._size;
      v98 = v144;
      if ( (unsigned int)v112 >= v110->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v100,
          (Il2CppObject *)v103,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v113 = &v110->obj.klass + v112;
        v100->fields._size = v112 + 1;
        v113[4] = (Il2CppClass *)v103;
        sub_1C3B708((PartyOrganizationUtility_o *)(v113 + 4), (int64_t)v103, v104, v105, v106, v107, v108, v109);
      }
    }
    while ( ++v99 < v144->fields._size );
  }
  if ( this->fields.isEventShop )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    v116 = kind;
    v115 = v141;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.scrollBar;
      if ( !Instance )
        goto LABEL_133;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_133;
      v117 = 348LL;
      if ( v140 == 1 )
        v117 = 336LL;
      if ( v140 == 1 )
        v118 = 332LL;
      else
        v118 = 344LL;
      if ( v140 == 1 )
        v119 = 328LL;
      else
        v119 = 340LL;
      v148.fields.z = *(float *)((char *)&this->klass + v117);
      v148.fields.y = *(float *)((char *)&this->klass + v118);
      v148.fields.x = *(float *)((char *)&this->klass + v119);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v148, 0LL);
    }
    scrollbarBgSprite = (UnityEngine_Object_o *)this->fields.scrollbarBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarBgSprite, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.scrollbarBgSprite;
      if ( !Instance )
        goto LABEL_133;
      if ( v140 == 1 )
        v121 = 338;
      else
        v121 = 276;
      UIWidget__set_height((UIWidget_o *)Instance, v121, 0LL);
    }
    scrollbarForeSprite = (UnityEngine_Object_o *)this->fields.scrollbarForeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollbarForeSprite, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.scrollbarForeSprite;
      if ( !Instance )
        goto LABEL_133;
      if ( v140 == 1 )
        v123 = 348;
      else
        v123 = 286;
      UIWidget__set_height((UIWidget_o *)Instance, v123, 0LL);
    }
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v125 = (System_String_o *)StringLiteral_5822/*"Element "*/;
  }
  else
  {
    v126 = this->fields.kind;
    v127 = &StringLiteral_12319/*"ScrollBarMotionCompleteValue"*/;
    if ( v126 == 22 )
      v127 = (__int64 *)&StringLiteral_5887/*"EndFadein"*/;
    if ( v126 == 12 )
      v128 = (__int64 *)&StringLiteral_12369/*"Sequence contains more than one element"*/;
    else
      v128 = v127;
    v129 = (System_String_o *)*v128;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v116 = kind;
    v115 = v141;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v125 = v129;
  }
  Instance = (int64_t)LocalizationManager__Get(v125, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_133;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.baseSortInfo,
      (int64_t)sort,
      v130,
      v131,
      v132,
      v133,
      v134,
      v135);
  }
  if ( (v145 & 1) == 0 )
    goto LABEL_129;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !Instance )
    goto LABEL_133;
  v137 = EventRewardSceneMaster__TryGetEntity(
           (EventRewardSceneMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           this->fields.targetSlot,
           0LL);
  ItemFilterId_k__BackingField = 0;
  if ( entity && v137 )
  {
    if ( entity->fields.type == 1 )
    {
      ShopBuyItemListViewManager__SetFilterActive((ShopBuyItemListViewManager_o *)v137, this->fields.filterBtn, 1, v138);
      EventRewardSaveData__LoadItemFilter(this->fields.eventId, this->fields.targetSlot, 0LL);
      if ( !byte_4C1E406 )
      {
        sub_1C3B764(&EventRewardSaveData_TypeInfo, sort);
        byte_4C1E406 = 1;
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
  if ( v116 == 22 )
    this->fields.targetExchangeSvtCoinFolder = v115;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewManager__CreateList_34074960(
        ShopBuyItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ShopBuyItemListViewManager__CreateList_34072028(this, 6, eventId, 0, 0, 0, v3);
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

  if ( (byte_4C1E383 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4C1E383 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ShopBuyItemListViewManager__CreateExchangeSvtCoinList(this, this->fields.targetExchangeSvtCoinFolder, v6);
    ShopBuyItemListViewManager__SetMode_34079944(this, 2, v7);
  }
  sort = (ListViewSort_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !sort )
LABEL_8:
    sub_1C3B9C0(sort, isDecide);
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

  if ( (byte_4C1E36C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1E36C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1E407 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1E407 = 1;
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
    if ( !byte_4C1E407 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
      byte_4C1E407 = 1;
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
    if ( !byte_4C1E408 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
      byte_4C1E408 = 1;
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
    return dword_C47510[state - 2];
}


int32_t __fastcall ShopBuyItemListViewManager__GetCurrencyKind(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C47560[state - 2];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ShopBuyItemListViewManager__GetEnterTime(
        ShopBuyItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (byte_4C1E36D & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_4C1E36D = 1;
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

  if ( (byte_4C1E375 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Count_ListViewItem___, *(_QWORD *)&itemId);
    sub_1C3B764(&System_Func_ListViewItem__bool__TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__FindIndex__, v6);
    sub_1C3B764(&System_Predicate_ListViewItem__TypeInfo, v7);
    sub_1C3B764(&Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__0__, v8);
    sub_1C3B764(&Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__1__, v9);
    sub_1C3B764(&Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__2__, v10);
    sub_1C3B764(&ShopBuyItemListViewManager___c__DisplayClass67_0_TypeInfo, v11);
    byte_4C1E375 = 1;
  }
  v12 = sub_1C3B9B0(ShopBuyItemListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_DWORD *)(v12 + 16) = itemId;
  if ( itemId < 1 || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return -1;
  itemList = this->fields.itemList;
  v17 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Count_object__50384956(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)v17,
         (const MethodInfo_300D03C *)Method_System_Linq_Enumerable_Count_ListViewItem___) < 2 )
    goto LABEL_11;
  v18 = this->fields.itemList;
  v19 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_ListViewItem__TypeInfo);
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
             (const MethodInfo_368C4C4 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
  if ( (result & 0x80000000) != 0 )
  {
LABEL_11:
    v20 = this->fields.itemList;
    v21 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v12,
      Method_ShopBuyItemListViewManager___c__DisplayClass67_0__GetIndexByItemId_b__1__,
      0LL);
    if ( v20 )
      return System_Collections_Generic_List_object___FindIndex(
               (System_Collections_Generic_List_object__o *)v20,
               (System_Predicate_T__o *)v21,
               (const MethodInfo_368C4C4 *)Method_System_Collections_Generic_List_ListViewItem__FindIndex__);
LABEL_13:
    sub_1C3B9C0(v13, v14);
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

  if ( (byte_4C1E381 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&ShopBuyItemListViewManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C1E381 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
      {
        sub_1C3B9C0(Instance, v10);
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

  if ( (byte_4C1E374 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C3B764(&ShopBuyItemListViewItem_TypeInfo, v5);
    byte_4C1E374 = 1;
  }
  result = (ShopBuyItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopBuyItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C1E37B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, *(_QWORD *)&initMode);
    sub_1C3B764(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v5);
    byte_4C1E37B = 1;
  }
  if ( (unsigned int)initMode > 5 )
    goto LABEL_8;
  if ( ((1 << initMode) & 0x26) != 0 )
    return ShopBuyItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
  if ( ((1 << initMode) & 0x18) != 0 )
    return ShopBuyItemListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
LABEL_8:
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  return (System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v7;
}


int32_t __fastcall ShopBuyItemListViewManager__GetPayType(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopEntity_array *Instance; // x0
  __int64 v5; // x1
  ShopEntity_o *v6; // x8

  if ( (byte_4C1E37E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C1E37E = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_1C3B9C0(Instance, v5);
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

  if ( (byte_4C1E36E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&kind);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C1E36E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_39:
    sub_1C3B9C0(Instance, v10);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
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

  if ( (byte_4C1E373 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C1E373 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_1C3B9C0(objectList, method);
  v7 = 0;
  while ( v7 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v7,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_18;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)objectList,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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

  return ShopBuyItemListViewManager__ModifyList_34078980(this, 6, eventId, slot, eventNum, isForcedAdjustment, v6);
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

  if ( (byte_4C1E370 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C1E370 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.eventId,
                   (const MethodInfo_329AE48 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__),
        (Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = ShopMaster__GetEnableEventEntityList(
                     (ShopMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.targetSlot,
                     0LL),
        !Entity) )
  {
    sub_1C3B9C0(Instance, v7);
  }
  eventCount = this->fields.eventCount;
  targetSlot = this->fields.targetSlot;
  eventId = this->fields.eventId;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Entity, 0LL);
  ShopBuyItemListViewManager__CreateList_34072028(
    this,
    6,
    eventId,
    targetSlot,
    eventCount,
    IsForcedAdjustmentDialog,
    v13);
  ShopBuyItemListViewManager__SetMode_34079944(this, 2, v14);
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

  if ( (byte_4C1E372 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, shopEntity);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1C3B764(&ShopBuyItemListViewItem_TypeInfo, v8);
    byte_4C1E372 = 1;
  }
  if ( shopId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_13:
      sub_1C3B9C0(itemList, shopEntity);
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= itemList->fields._size )
        return 0;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  return ShopBuyItemListViewManager__ModifyList_34078980(this, this->fields.kind, this->fields.eventId, 0, 0, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemListViewManager__ModifyList_34078980(
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

  if ( (byte_4C1E371 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4C1E371 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( Instance )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          currencyInfoController = this->fields.currencyInfoController;
          v35 = (EventDetailEntity_o *)Entity;
          Instance = (int64_t)ShopBuyItemListViewManager__get_ObjectList(this, v36);
          if ( currencyInfoController )
          {
            currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)Instance;
            sub_1C3B708(
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
    sub_1C3B9C0(Instance, v18);
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
          sub_1C3B9C8(Instance, v18);
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
  ShopBuyItemListViewManager__CreateList_34072028(v26, v27, v28, v29, v30, v31, v22);
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

  if ( (byte_4C1E382 & 1) == 0 )
  {
    sub_1C3B764(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_ShopBuyItemListViewManager_EndSelectFilterKind__, v3);
    sub_1C3B764(&Method_ShopBuyItemListViewManager_OnClickFilterKind__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1E382 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ShopBuyItemListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ShopBuyItemListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3B77C(Method_ShopBuyItemListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C3B9B0(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ShopBuyItemListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1C3B9C0(v12, v13);
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
    sub_1C3B708(p_onClickListViewItem, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( !obj )
      sub_1C3B9C0(v11, v12);
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

  if ( (byte_4C1E37D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1E37D = 1;
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
          sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onMoveEnd, 0LL, v14, v15, v16, v17, v18, v19);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_18:
      sub_1C3B9C0(emptyMessageBase, v10);
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

  if ( (byte_4C1E37C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v6);
    sub_1C3B764(&Method_ShopBuyItemListViewManager_OnMoveEnd__, v7);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v8);
    byte_4C1E37C = 1;
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
          (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
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
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
          v19 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopBuyItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
LABEL_23:
            sub_1C3B9C0(ObjectList, v13);
          ShopBuyItemListViewObject__Init_34082976((ShopBuyItemListViewObject_o *)Item, v9, v19, v14, v20);
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
      sub_1C3B9C0(0LL, initMode);
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

  if ( (byte_4C1E37A & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, filterBtn);
    byte_4C1E37A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)filterBtn, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !filterBtn
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterBtn, 0LL)) == 0LL )
    {
      sub_1C3B9C0(gameObject, v7);
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

  if ( (byte_4C1E384 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_17849/*"componentPackage"*/, v3);
    sub_1C3B764(&StringLiteral_17848/*"componentHash"*/, v4);
    byte_4C1E384 = 1;
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
      sub_1C3B9C0(sort, v6);
    }
    v9 = (System_String_o **)&StringLiteral_17848/*"componentHash"*/;
    if ( ((unsigned __int8)sort & 1) == 0 )
      v9 = (System_String_o **)&StringLiteral_17849/*"componentPackage"*/;
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

  if ( (byte_4C1E379 & 1) == 0 )
  {
    sub_1C3B764(&EventRewardRootComponent_TypeInfo, targetFile);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C1E379 = 1;
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
      sub_1C3B9C0(v9, v8);
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

  if ( (byte_4C1E378 & 1) == 0 )
  {
    sub_1C3B764(&ListViewSort_TypeInfo, method);
    sub_1C3B764(&StringLiteral_17961/*"cp863"*/, v3);
    sub_1C3B764(&StringLiteral_17960/*"cp862"*/, v4);
    sub_1C3B764(&StringLiteral_17890/*"context"*/, v5);
    byte_4C1E378 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v7 = (ListViewSort_o *)sub_1C3B9B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_42233320(v7, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.operationSortInfo, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus == 2 )
  {
    ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17961/*"cp863"*/, v16);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 52, 0, 0LL), (operationSortInfo = *p_operationSortInfo) == 0LL) )
    {
LABEL_18:
      sub_1C3B9C0(operationSortInfo, v15);
    }
    v20 = 1;
  }
  else
  {
    if ( filterStatus == 1 )
    {
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17960/*"cp862"*/, v16);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_18;
      v19 = 1;
    }
    else
    {
      if ( filterStatus )
        goto LABEL_16;
      ShopBuyItemListViewManager__SetFilterName(this, (System_String_o *)StringLiteral_17890/*"context"*/, v16);
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.onClickListViewItem,
    (int64_t)onClickListViewItem,
    (int64_t)onClickListViewItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ShopBuyItemListViewManager__SetMode_34079944(this, mode, v10);
}


void __fastcall ShopBuyItemListViewManager__SetMode_34079944(
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


void __fastcall ShopBuyItemListViewManager__SetMode_34081216(
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.onMoveEnd,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  ShopBuyItemListViewManager__SetMode_34079944(this, mode, v11);
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

  if ( (byte_4C1E380 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4C1E380 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C3B9C0(scrollView, method);
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
  if ( (byte_4C1E376 & 1) == 0 )
  {
    this = (ShopBuyItemListViewManager_o *)sub_1C3B764(&ShopBuyItemListViewObject_TypeInfo, obj);
    byte_4C1E376 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopBuyItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopBuyItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewObject_TypeInfo )
  {
    sub_1C3B9C0(this, obj);
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
  ShopBuyItemListViewObject__Init_34082976((ShopBuyItemListViewObject_o *)obj, v9, 0LL, 0.0, method);
}


void __fastcall ShopBuyItemListViewManager__SetScrollBarActive(
        ShopBuyItemListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C1E377 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_4C1E377 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1C3B9C0(gameObject, v7);
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

  if ( (byte_4C1E37F & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4C1E37F = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C3B9C0(scrollView, method);
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
    sub_1C3B9C0(0LL, method);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  float realtimeSinceStartup; // s0
  float v14; // s0
  const MethodInfo *v15; // x1
  float v16; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v18; // w8

  if ( (byte_4C1E367 & 1) == 0 )
  {
    sub_1C3B764(&Method_TransitionCalculator_float__Update__, method);
    byte_4C1E367 = 1;
  }
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  p_anotherBuyAbleAlphaTransitionCalculator = &this->fields.anotherBuyAbleAlphaTransitionCalculator;
  if ( !anotherBuyAbleAlphaTransitionCalculator )
  {
    AlphaTransitionCalculator = ShopBuyItemListViewManager__CreateAlphaTransitionCalculator(0LL, method);
    *p_anotherBuyAbleAlphaTransitionCalculator = AlphaTransitionCalculator;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.anotherBuyAbleAlphaTransitionCalculator,
      (int64_t)AlphaTransitionCalculator,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
  v14 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)anotherBuyAbleAlphaTransitionCalculator,
          (const MethodInfo_394A868 *)Method_TransitionCalculator_float__Update__);
  anotherBuyAbleAlphaTransitionCalculator = this->fields.anotherBuyAbleAlphaTransitionCalculator;
  this->fields.alphaAnimNow = v14;
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
    sub_1C3B9C0(anotherBuyAbleAlphaTransitionCalculator, v12);
  AlphaTransitionCalculator__StartFadeIn(anotherBuyAbleAlphaTransitionCalculator, 0LL);
  v16 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  if ( alphaAnimCnt + 1 < 232792560 )
    v18 = alphaAnimCnt + 1;
  else
    v18 = alphaAnimCnt - 232792559;
  this->fields.alphaAnimTimeOld = v16;
  this->fields.alphaAnimCnt = v18;
  ShopBuyItemListViewManager__ChangeNextAnotherItemIcon(this, v15);
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

  if ( (byte_4C1E366 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1C3B764(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    byte_4C1E366 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C3B9C0(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42215272(
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
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C1E365 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__Add__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1C3B764(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    byte_4C1E365 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C3B9C0(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ShopBuyItemListViewObject___);
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
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v23;
        sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1E386 & 1) == 0 )
  {
    sub_1C3B764(&ShopBuyItemListViewManager___c_TypeInfo, v1);
    byte_4C1E386 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ShopBuyItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopBuyItemListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopBuyItemListViewManager___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ShopBuyItemListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4C1E387 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, x);
    byte_4C1E387 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( v4 )
  {
    if ( !x )
      sub_1C3B9C0(v4, v5);
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

  if ( (byte_4C1E388 & 1) == 0 )
  {
    sub_1C3B764(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4C1E388 = 1;
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

  if ( (byte_4C1E38A & 1) == 0 )
  {
    sub_1C3B764(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4C1E38A = 1;
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

  if ( (byte_4C1E389 & 1) == 0 )
  {
    sub_1C3B764(&ShopBuyItemListViewItem_TypeInfo, n);
    byte_4C1E389 = 1;
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