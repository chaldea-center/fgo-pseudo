void __fastcall EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_int__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B1A05C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v9, v10);
    byte_4B1A05C = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectEventExpeditionEntityList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v18,
                                                    v19,
                                                    v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SelectPieceIdxList,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


bool __fastcall EventExpeditionListViewManager__CheckEventEnd(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1A052 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B1A052 = 1;
  }
  entity = 0LL;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_14:
    sub_1BCAA3C(Master_object, v11);
  return (__int64)Master_object >= (__int64)entity[6].klass;
}


bool __fastcall EventExpeditionListViewManager__CheckServant(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UserGameEntity_o *SelfUserGame; // x19
  void *Instance; // x0
  __int64 v23; // x1
  UserServantMaster_o *v24; // x20
  Il2CppObject *MasterData_object; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  CommonUI_o *v28; // x20
  int32_t v29; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v31; // x22
  Il2CppObject *v32; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  CommonUI_o *v40; // x0
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x2
  __int64 v45; // x3
  CommonUI_o *v46; // x20
  int32_t v47; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v49; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int32_t Count; // w20
  __int64 v58; // x2
  __int64 v59; // x3
  CommonUI_o *v60; // x21
  BalanceConfig_c *v61; // x8
  Il2CppObject *v62; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A04E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__, v13, v14);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__, v15, v16);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__, v17, v18);
    sub_1BCA7E0(&EventExpeditionListViewManager___c_TypeInfo, v19, v20);
    byte_4B1A04E = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v24 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v24, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v28 = (CommonUI_o *)Instance;
    v29 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, v23);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v31 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v31 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v23);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v31 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v23,
                                                              v26,
                                                              v27);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v31,
        v32,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
        0LL);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__40_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
    }
    if ( !v28 )
      goto LABEL_45;
    v40 = v28;
    v41 = v29;
    v42 = svtKeep;
    v43 = 0;
    goto LABEL_42;
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v24, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v46 = (CommonUI_o *)Instance;
    v47 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, v23);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v31 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
    if ( !v31 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v23);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v49 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v31 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v23,
                                                              v44,
                                                              v45);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v31,
        v49,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0LL);
      v50 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v50->__9__40_1 = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&v50->__9__40_1, (int64_t)v31, v51, v52, v53, v54, v55, v56);
    }
    if ( !v46 )
      goto LABEL_45;
    v43 = 1;
    v40 = v46;
    v41 = v47;
LABEL_41:
    v42 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v40, v41, v42, v43, 1, v31, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
      return 0;
    }
LABEL_45:
    sub_1BCAA3C(Instance, v23);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v60 = (CommonUI_o *)Instance;
    if ( !byte_4B112D7 )
    {
      sub_1BCA7E0(&BalanceConfig_TypeInfo, v23, v58);
      byte_4B112D7 = 1;
    }
    v61 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23);
      v61 = BalanceConfig_TypeInfo;
    }
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v61->static_fields->CommandCodeFrameMax;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, v23);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v31 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v31 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v23);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v62 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v31 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v23,
                                                              v58,
                                                              v59);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v31,
        v62,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0LL);
      v63 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v63->__9__40_4 = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&v63->__9__40_4, (int64_t)v31, v64, v65, v66, v67, v68, v69);
    }
    if ( !v60 )
      goto LABEL_45;
    v43 = 2;
    v40 = v60;
    v41 = Count;
    goto LABEL_41;
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall EventExpeditionListViewManager__CoWaitEffectPlay(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1A056 & 1) == 0 )
  {
    sub_1BCA7E0(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method, v2);
    byte_4B1A056 = 1;
  }
  v5 = sub_1BCAA2C(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__CreateList(
        EventExpeditionListViewManager_o *this,
        EventExpeditionEntity_array *evExpeditionEntList,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  signed int max_length; // w8
  unsigned int v18; // w27
  EventExpeditionEntity_o *v19; // x23
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v22; // x26
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  EventExpeditionListViewItem_o *v26; // x22
  const MethodInfo *v27; // x6
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8

  if ( (byte_4B1A049 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, evExpeditionEntList, *(_QWORD *)&eventId);
    sub_1BCA7E0(&EventExpeditionListViewItem_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12);
    byte_4B1A049 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !evExpeditionEntList )
    goto LABEL_15;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_1BCAA44(itemList, v14);
      v19 = evExpeditionEntList->m_Items[v18];
      if ( !v19 )
        break;
      idx = v19->fields.idx;
      assetManager = this->fields.assetManager;
      v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
      System_Action___ctor(
        v22,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0LL);
      v26 = (EventExpeditionListViewItem_o *)sub_1BCAA2C(EventExpeditionListViewItem_TypeInfo, v23, v24, v25);
      EventExpeditionListViewItem___ctor(v26, idx, v19, eventId, assetManager, v22, v27);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v26,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v26;
        sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v26, v28, v29, v30, v31, v32, v33);
      }
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_1BCAA3C(itemList, v14);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager__DestroyList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  ExpeditionAssetManager_o *assetManager; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    ExpeditionAssetManager__Release(assetManager, this->fields.currentEventId, v3);
}


void __fastcall EventExpeditionListViewManager__FinishResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        System_Action_o *animFinishCallback,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  UnityEngine_Component_o *touchPanel; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  Il2CppObject *v37; // x21
  System_Object_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x21
  const MethodInfo *v50; // x2

  if ( (byte_4B1A057 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, animFinishCallback);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___, v7, v8);
    sub_1BCA7E0(&JsonManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__, v11, v12);
    sub_1BCA7E0(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v19, v20);
    byte_4B1A057 = 1;
  }
  v21 = sub_1BCAA2C(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, result, animFinishCallback, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_11;
  *(_QWORD *)(v21 + 16) = animFinishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)animFinishCallback, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)this, v30, v31, v32, v33, v34, v35);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    return;
  v37 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v36);
  v38 = JsonManager__DeserializeArray_object_(
          v37,
          (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v21 + 24) = v38;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)v38, v39, v40, v41, v42, v43, v44);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48),
        System_Action___ctor(
          v49,
          (Il2CppObject *)v21,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_11:
    sub_1BCAA3C(touchPanel, v23);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v49, v50);
}


void __fastcall EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_int__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v30; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_4B1A058 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v9, v10);
    byte_4B1A058 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectEventExpeditionEntityList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v18,
                                                    v19,
                                                    v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SelectPieceIdxList,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (bitExpeditionFinish = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0LL)) == 0LL )
  {
    sub_1BCAA3C(bitExpeditionFinish, v28);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0LL);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v30);
  expeditionCallback = this->fields.expeditionCallback;
  if ( expeditionCallback )
    ActionExtensions__Call(expeditionCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__Init(
        EventExpeditionListViewManager_o *this,
        EventExpeditionEntity_array *evExpeditionEntList,
        int32_t eventId,
        System_Action_o *expeditionCallback,
        System_Action_BattleDropItem____int__Action__o *requestCallBack,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  System_String_o *touchPanel; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t v36; // w8
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  UILabel_o *expeditionNoticeLb; // x21
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  ExpeditionAssetManager_o *assetManager; // x21
  PartyOrganizationUtility_o *p_assetManager; // x19
  ExpeditionAssetManager_o *v58; // x21
  const MethodInfo *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int32_t v66; // w19
  System_Action_o *v67; // x22
  const MethodInfo *v68; // x3

  if ( (byte_4B1A048 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, evExpeditionEntList, *(_QWORD *)&eventId);
    sub_1BCA7E0(&ExpeditionAssetManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__, v15, v16);
    sub_1BCA7E0(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_5889/*"EXPEDITION_PUSH_BTN_LABEL"*/, v19, v20);
    byte_4B1A048 = 1;
  }
  v21 = sub_1BCAA2C(
          EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo,
          evExpeditionEntList,
          *(_QWORD *)&eventId,
          expeditionCallback);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_13;
  *(_DWORD *)(v21 + 16) = eventId;
  *(_QWORD *)(v21 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 32) = evExpeditionEntList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)evExpeditionEntList, v30, v31, v32, v33, v34, v35);
  v36 = *(_DWORD *)(v21 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v36;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.expeditionCallback,
    (int64_t)expeditionCallback,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.requestCallBack = requestCallBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.requestCallBack,
    (int64_t)requestCallBack,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0LL);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_5889/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0LL);
  if ( !expeditionNoticeLb )
    goto LABEL_13;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v51);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v52);
  touchPanel = (System_String_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_13;
  touchPanel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)touchPanel, 0LL);
  if ( !touchPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
    v58 = (ExpeditionAssetManager_o *)sub_1BCAA2C(ExpeditionAssetManager_TypeInfo, v53, v54, v55);
    ExpeditionAssetManager___ctor(v58, v59);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v58;
    sub_1BCA784(p_assetManager, (int64_t)v58, v60, v61, v62, v63, v64, v65);
    assetManager = (ExpeditionAssetManager_o *)p_assetManager->klass;
  }
  v66 = *(_DWORD *)(v21 + 16);
  v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
  System_Action___ctor(
    v67,
    (Il2CppObject *)v21,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_13:
    sub_1BCAA3C(touchPanel, v23);
  ExpeditionAssetManager__GetAssets(assetManager, v66, v67, v68);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A050 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v8, v9);
    byte_4B1A050 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    ObjectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v13.fields._current,
      v12);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionObj(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4B1A051 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    this = (EventExpeditionListViewManager_o *)sub_1BCA7E0(&Method_EventExpeditionListViewManager_OnMoveEnd__, v5, v6);
    byte_4B1A051 = 1;
  }
  if ( !obj
    || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_1BCAA3C(this, obj);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)obj);
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, v4, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  EventExpeditionListViewObject__Init(obj, v10, v11);
}


void __fastcall EventExpeditionListViewManager__LocateDialogToExpeditionObj(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x2
  EventExpeditionListViewManager_o *v7; // x20

  if ( !obj )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL);
  this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  v7 = this;
  if ( !byte_4B109C6 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, obj, v6);
    byte_4B109C6 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
        EventExpeditionListViewManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x2
  EventExpeditionListViewManager_o *v7; // x20

  if ( !dialog )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL);
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)dialog,
                                               0LL);
  v7 = this;
  if ( !byte_4B109C6 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, dialog, v6);
    byte_4B109C6 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)dialog,
                                                      0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickCompleteButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v27; // x1
  System_Collections_Generic_List_object__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_object__o *v32; // x20
  Il2CppObject *current; // x25
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Il2CppObject *v46; // x1
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  const MethodInfo *v51; // x2
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+0h] [xbp-80h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A04F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventExpeditionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager_OnClickCompleteButton__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B1A04F = 1;
  }
  memset(&v56, 0, sizeof(v56));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                (UserEventExpeditionMaster_o *)Instance,
                                this->fields.currentEventId,
                                0LL);
  if ( !Instance )
    goto LABEL_28;
  v28 = (System_Collections_Generic_List_object__o *)Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
    || !EventExpeditionListViewManager__CheckServant((EventExpeditionListViewManager_o *)Instance, v27) )
  {
    goto LABEL_20;
  }
  Instance = (DataManager_o *)this->fields.maskPanel;
  if ( !Instance )
LABEL_28:
    sub_1BCAA3C(Instance, v27);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v28,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v56 = v54;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v56.fields._current;
    v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v34 )
      sub_1BCAA3C(0LL, v35);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v34,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_1BCAA3C(MasterData_object, v37);
    if ( !MasterData_object )
      sub_1BCAA3C(0LL, v37);
    v38 = EventExpeditionMaster__TryGetEntity(
            (EventExpeditionMaster_o *)MasterData_object,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            0LL);
    if ( !v32 )
      sub_1BCAA3C(v38, v39);
    v46 = (Il2CppObject *)entity;
    items = v32->fields._items;
    v48 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
    ++v32->fields._version;
    if ( !items )
      sub_1BCAA3C(v38, v46);
    size = v32->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        v46,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &items->obj.klass + size;
      v32->fields._size = size + 1;
      v50[4] = (Il2CppClass *)v46;
      sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v46, v40, v41, v42, v43, v44, v45);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v32,
    v51);
LABEL_20:
  v52 = Method_EventExpeditionListViewManager_OnClickCompleteButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickCompleteButton__ + 83) & 2) != 0 )
    v52 = (_QWORD *)sub_1BCA7F8(Method_EventExpeditionListViewManager_OnClickCompleteButton__);
  v53 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v52, v52[4]);
  OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickCompleteView(
        EventExpeditionListViewManager_o *this,
        System_Collections_Generic_List_EventExpeditionEntity__o *eventExpeditionEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x21
  int64_t Instance; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x23
  __int64 v65; // x0
  __int64 v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *current; // x1
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x22
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Func_object__bool__o *v80; // x25
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  __int64 klass_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  EventExpeditionListViewManager___c_c *v90; // x0
  System_Func_object__int__o *_9__51_0; // x22
  Il2CppObject *v92; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Int32_array *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  const MethodInfo *v108; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v110; // x19
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  System_Action_o *v114; // x22
  const MethodInfo *v115; // x4
  System_Collections_Generic_List_EventExpeditionEntity__o *v116; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+30h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B1A059 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, eventExpeditionEntities, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__, v18, v19);
    sub_1BCA7E0(&System_Func_ExpeditionInfo__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Func_EventExpeditionEntity__int__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__, v32, v33);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__, v34, v35);
    sub_1BCA7E0(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__, v38, v39);
    sub_1BCA7E0(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v40, v41);
    sub_1BCA7E0(&EventExpeditionListViewManager___c_TypeInfo, v42, v43);
    byte_4B1A059 = 1;
  }
  entity = 0LL;
  memset(&v118, 0, sizeof(v118));
  v44 = sub_1BCAA2C(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, eventExpeditionEntities, method, v3);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_34;
  *(_QWORD *)(v44 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 16), (int64_t)this, v47, v48, v49, v50, v51, v52);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectEventExpeditionEntityList,
    (int64_t)eventExpeditionEntities,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_34;
  Instance = UserEventExpeditionMaster__TryGetEntity(
               (UserEventExpeditionMaster_o *)MasterData_object,
               &entity,
               Instance,
               this->fields.currentEventId,
               0LL);
  if ( !eventExpeditionEntities )
    goto LABEL_34;
  v116 = eventExpeditionEntities;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v117,
    (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v118 = v117;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v118,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v64 = sub_1BCAA2C(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v61, v62, v63);
    System_Object___ctor((Il2CppObject *)v64, 0LL);
    if ( !v64 )
      sub_1BCAA3C(v65, v66);
    current = v118.fields._current;
    *(_QWORD *)(v64 + 16) = v118.fields._current;
    sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 16), (int64_t)current, v67, v68, v69, v70, v71, v72);
    if ( !entity )
      sub_1BCAA3C(v74, v75);
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    v80 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ExpeditionInfo__bool__TypeInfo, v75, v76, v77);
    System_Func_object__bool____ctor(
      v80,
      (Il2CppObject *)v64,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      0LL);
    v81 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v80,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v81 )
      sub_1BCAA3C(0LL, v82);
    if ( !SelectPieceIdxList )
      sub_1BCAA3C(v81, v82);
    klass_high = HIDWORD(v81[1].klass);
    items = SelectPieceIdxList->fields._items;
    v85 = Method_System_Collections_Generic_List_int__Add__;
    ++SelectPieceIdxList->fields._version;
    if ( !items )
      sub_1BCAA3C(v81, klass_high);
    size = SelectPieceIdxList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        SelectPieceIdxList,
        klass_high,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
    }
    else
    {
      SelectPieceIdxList->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v118,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v90 = EventExpeditionListViewManager___c_TypeInfo;
  if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, v87);
    v90 = EventExpeditionListViewManager___c_TypeInfo;
  }
  _9__51_0 = (System_Func_object__int__o *)v90->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v90->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v90, v87);
      v90 = EventExpeditionListViewManager___c_TypeInfo;
    }
    v92 = (Il2CppObject *)v90->static_fields->__9;
    _9__51_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_EventExpeditionEntity__int__TypeInfo,
                                               v87,
                                               v88,
                                               v89);
    System_Func_object__int____ctor(
      _9__51_0,
      v92,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      0LL);
    static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__51_0,
      (int64_t)_9__51_0,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
  }
  v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v116,
                                                                (System_Func_TSource__TResult__o *)_9__51_0,
                                                                (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v101 = System_Linq_Enumerable__ToArray_int_(
           v100,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v44 + 24) = v101;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 24), (int64_t)v101, v102, v103, v104, v105, v106, v107);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v108);
  Instance = (int64_t)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v110 = this->fields.SelectPieceIdxList,
        v114 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v111, v112, v113),
        System_Action___ctor(
          v114,
          (Il2CppObject *)v44,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_34:
    sub_1BCAA3C(Instance, v46);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v110, v114, 0LL, v115);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__OnClickDecide(
        EventExpeditionListViewManager_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  __int64 v26; // x8
  const MethodInfo *v27; // x2
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  NetworkManager_ResultCallbackFunc_o *v34; // x22
  __int64 v35; // x1

  if ( (byte_4B1A054 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventExpeditionListViewManager_StartResponse__, isDecide, eventExpeditionEntity);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v20, v21);
    byte_4B1A054 = 1;
  }
  if ( !isDecide )
  {
    maskPanel = this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
      return;
    }
LABEL_23:
    sub_1BCAA3C(maskPanel, isDecide);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.selectEventExpeditionEntityList;
  if ( !maskPanel )
    goto LABEL_23;
  v23 = *(_QWORD *)&maskPanel->fields.m_CachedPtr;
  v24 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !v23 )
    goto LABEL_23;
  klass_low = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskPanel,
      (Il2CppObject *)eventExpeditionEntity,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * klass_low;
    LODWORD(maskPanel[1].klass) = klass_low + 1;
    *(_QWORD *)(v26 + 32) = eventExpeditionEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v26 + 32),
      (int64_t)eventExpeditionEntity,
      (int64_t)eventExpeditionEntity,
      pieceIdx,
      (System_String_o *)method,
      v5,
      v6,
      v7);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.SelectPieceIdxList;
  if ( !maskPanel )
    goto LABEL_23;
  v28 = *(_QWORD *)&maskPanel->fields.m_CachedPtr;
  v29 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !v28 )
    goto LABEL_23;
  v30 = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)maskPanel,
      pieceIdx,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(maskPanel[1].klass) = v30 + 1;
    *(_DWORD *)(v28 + 4 * v30 + 32) = pieceIdx;
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.expeditionConfirmDialog;
  if ( !maskPanel )
    goto LABEL_23;
  ExpeditionConfirmDialogComponent__Close_46433476((ExpeditionConfirmDialogComponent_o *)maskPanel, 0LL, v27);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v31, v32, v33);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager_StartResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
  maskPanel = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                            v34,
                                            (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
  if ( !eventExpeditionEntity || !maskPanel )
    goto LABEL_23;
  EventExpeditionStartRequest__beginRequest(
    (EventExpeditionStartRequest_o *)maskPanel,
    this->fields.currentEventId,
    eventExpeditionEntity->fields.idx,
    pieceIdx,
    0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickListView(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x21
  void *maskPanel; // x0
  const MethodInfo *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  EventExpeditionListViewObject_o **v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v39; // x20
  EventExpeditionEntity_o *v40; // x20
  bool v41; // w22
  _QWORD *v42; // x8
  System_Reflection_MethodBase_o *v43; // x0
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v48; // x22
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x6
  _QWORD *v51; // x0
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  EventExpeditionListViewManager_o *v54; // x0
  const MethodInfo *v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_object__o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  const MethodInfo *v69; // x2

  if ( (byte_4B1A053 & 1) == 0 )
  {
    sub_1BCA7E0(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v6, v7);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager_OnClickListView__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v18, v19);
    sub_1BCA7E0(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, v20, v21);
    byte_4B1A053 = 1;
  }
  v22 = sub_1BCAA2C(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, obj, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_31;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = obj;
  v31 = (EventExpeditionListViewObject_o **)(v22 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)obj, v32, v33, v34, v35, v36, v37);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  maskPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_31;
  maskPanel = DataManager__GetMasterData_object_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v31 )
    goto LABEL_31;
  currentEventId = this->fields.currentEventId;
  v39 = (EventExpeditionMaster_o *)maskPanel;
  maskPanel = EventExpeditionListViewObject__GetItem(*v31, v24);
  if ( !maskPanel )
    goto LABEL_31;
  if ( !v39 )
    goto LABEL_31;
  maskPanel = EventExpeditionMaster__GetEntity(v39, currentEventId, *((_DWORD *)maskPanel + 5), 0LL);
  if ( !*v31 )
    goto LABEL_31;
  v40 = (EventExpeditionEntity_o *)maskPanel;
  switch ( (*v31)->fields.dispMode )
  {
    case 0:
      goto LABEL_20;
    case 1:
    case 2:
      v41 = EventExpeditionListViewManager__CheckEventEnd(this, v24);
      v42 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1BCA7F8(Method_EventExpeditionListViewManager_OnClickListView__);
      v43 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v42, v42[4]);
      if ( v41 )
        goto LABEL_19;
      OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0LL);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v48 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                                  ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo,
                                                                  v45,
                                                                  v46,
                                                                  v47);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v48,
        (Il2CppObject *)v22,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        v49);
      if ( !expeditionConfirmDialog )
        goto LABEL_31;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v40, 1, v48, 1, 0, v50);
      return;
    case 3:
      v51 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v51 = (_QWORD *)sub_1BCA7F8(Method_EventExpeditionListViewManager_OnClickListView__);
      v43 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v51, v51[4]);
LABEL_19:
      OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0LL);
      goto LABEL_20;
    case 4:
      v52 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v52 = (_QWORD *)sub_1BCA7F8(Method_EventExpeditionListViewManager_OnClickListView__);
      v53 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v52, v52[4]);
      OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0LL);
      if ( !EventExpeditionListViewManager__CheckServant(v54, v55) )
      {
LABEL_20:
        maskPanel = this->fields.maskPanel;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
          return;
        }
LABEL_31:
        sub_1BCAA3C(maskPanel, v24);
      }
      v58 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                           v24,
                                                           v56,
                                                           v57);
      System_Collections_Generic_List_object____ctor(
        v58,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v58 )
        goto LABEL_31;
      items = v58->fields._items;
      v66 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
      ++v58->fields._version;
      if ( !items )
        goto LABEL_31;
      size = v58->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v58,
          (Il2CppObject *)v40,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &items->obj.klass + size;
        v58->fields._size = size + 1;
        v68[4] = (Il2CppClass *)v40;
        sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v40, v59, v60, v61, v62, v63, v64);
      }
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v58,
        v69);
      return;
    default:
      return;
  }
}


void __fastcall EventExpeditionListViewManager__OnClickNoticeButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isButtonOn; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B1A05B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventExpeditionListViewManager_OnClickNoticeButton__, method, v2);
    byte_4B1A05B = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v5 = Method_EventExpeditionListViewManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_EventExpeditionListViewManager_OnClickNoticeButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, isButtonOn, 0LL);
  EventRewardSaveData__SetExpeditionNotification(this->fields.isButtonOn, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v7);
}


void __fastcall EventExpeditionListViewManager__OnMoveEnd(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_4B1A04C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A04C = 1;
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
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BCAA3C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall EventExpeditionListViewManager__RequestListObject(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v19; // x1
  int32_t size; // w8
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *current; // x20
  System_Action_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1A04B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager_OnMoveEnd__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__, v14, v15);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v16, v17);
    byte_4B1A04B = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v19);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v29.fields._current;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v26, v27);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v25, v28);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
  }
}


void __fastcall EventExpeditionListViewManager__SetCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v3);
}


void __fastcall EventExpeditionListViewManager__SetExpeditionObject(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *expeditionConfirmDialog; // x21
  struct ExpeditionConfirmDialogComponent_o **p_expeditionConfirmDialog; // x20
  UnityEngine_GameObject_o *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  struct ExpeditionAssetManager_o *assetManager; // x8
  Il2CppObject *expeditionConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  struct ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  struct ExpeditionAssetManager_o *v34; // x8
  Il2CppObject *expeditionRewardDialog_k__BackingField; // x21
  Il2CppObject *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x2
  __int64 v44; // x1
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  struct ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  struct ExpeditionAssetManager_o *v47; // x8
  Il2CppObject *expeditionPointRewardDialog_k__BackingField; // x21
  Il2CppObject *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x2
  __int64 v57; // x1
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v59; // x8
  Il2CppObject *bitExpeditionStart_k__BackingField; // x20
  Il2CppObject *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v69; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v71; // x8
  Il2CppObject *bitExpeditionFinish_k__BackingField; // x20
  Il2CppObject *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  UnityEngine_GameObject_o *v80; // x1
  const MethodInfo *v81; // x2

  if ( (byte_4B1A047 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B1A047 = 1;
  }
  expeditionConfirmDialog = (UnityEngine_Object_o *)this->fields.expeditionConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_expeditionConfirmDialog = &this->fields.expeditionConfirmDialog;
  v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_49;
    expeditionConfirmDialog_k__BackingField = (Il2CppObject *)assetManager->fields._expeditionConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        expeditionConfirmDialog_k__BackingField,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v18 )
      goto LABEL_49;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v18,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = (struct ExpeditionConfirmDialogComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.expeditionConfirmDialog,
      (int64_t)Component_object,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v30);
  }
  v18 = (UnityEngine_GameObject_o *)*p_expeditionConfirmDialog;
  if ( !*p_expeditionConfirmDialog )
    goto LABEL_49;
  ExpeditionConfirmDialogComponent__Init((ExpeditionConfirmDialogComponent_o *)v18, this->fields.currentEventId, v20);
  expeditionRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  p_expeditionRewardDialog = &this->fields.expeditionRewardDialog;
  v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v34 = this->fields.assetManager;
    if ( !v34 )
      goto LABEL_49;
    expeditionRewardDialog_k__BackingField = (Il2CppObject *)v34->fields._expeditionRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        expeditionRewardDialog_k__BackingField,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v18 )
      goto LABEL_49;
    v36 = UnityEngine_GameObject__GetComponent_object_(
            v18,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = (struct ExpeditionRewardDialogComponent_o *)v36;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.expeditionRewardDialog,
      (int64_t)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v43);
  }
  v18 = (UnityEngine_GameObject_o *)*p_expeditionRewardDialog;
  if ( !*p_expeditionRewardDialog )
    goto LABEL_49;
  ExpeditionRewardDialogComponent__Init((ExpeditionRewardDialogComponent_o *)v18, v19);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  p_expeditionPointRewardDialog = &this->fields.expeditionPointRewardDialog;
  v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v47 = this->fields.assetManager;
    if ( !v47 )
      goto LABEL_49;
    expeditionPointRewardDialog_k__BackingField = (Il2CppObject *)v47->fields._expeditionPointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        expeditionPointRewardDialog_k__BackingField,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v18 )
      goto LABEL_49;
    v49 = UnityEngine_GameObject__GetComponent_object_(
            v18,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = (struct ExpeditionPointRewardDialogComponent_o *)v49;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.expeditionPointRewardDialog,
      (int64_t)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v56);
  }
  v18 = (UnityEngine_GameObject_o *)*p_expeditionPointRewardDialog;
  if ( !*p_expeditionPointRewardDialog )
    goto LABEL_49;
  ExpeditionPointRewardDialogComponent__Init((ExpeditionPointRewardDialogComponent_o *)v18, v19);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionStart, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v59 = this->fields.assetManager;
    if ( !v59 )
      goto LABEL_49;
    bitExpeditionStart_k__BackingField = (Il2CppObject *)v59->fields._bitExpeditionStart_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        bitExpeditionStart_k__BackingField,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v18 )
      goto LABEL_49;
    v61 = UnityEngine_GameObject__GetComponent_object_(
            v18,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = (struct BitExpeditionStartComponent_o *)v61;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.bitExpeditionStart,
      (int64_t)v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v18 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v18 )
      goto LABEL_49;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v69);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionFinish, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v71 = this->fields.assetManager;
    if ( v71 )
    {
      bitExpeditionFinish_k__BackingField = (Il2CppObject *)v71->fields._bitExpeditionFinish_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                          bitExpeditionFinish_k__BackingField,
                                          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v18 )
      {
        v73 = UnityEngine_GameObject__GetComponent_object_(
                v18,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = (struct BitExpeditionFinishComponent_o *)v73;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.bitExpeditionFinish,
          (int64_t)v73,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
        v18 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v18 )
        {
          v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v80, v81);
          return;
        }
      }
    }
LABEL_49:
    sub_1BCAA3C(v18, v19);
  }
}


void __fastcall EventExpeditionListViewManager__SetMaskPanel(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.maskPanel = mask;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.maskPanel, (int64_t)mask, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall EventExpeditionListViewManager__SetObjectItem(
        EventExpeditionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A04A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, item);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6, v7);
    sub_1BCA7E0(&EventExpeditionListViewObject_TypeInfo, v8, v9);
    byte_4B1A04A = 1;
  }
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, obj, item, method);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventExpeditionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_1BCAA3C(v11, v12);
  }
  EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)obj, v10, v13);
}


void __fastcall EventExpeditionListViewManager__StartResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4B1A055 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, result, method);
    byte_4B1A055 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager__UpdateButtonDisp(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v7; // x8

  if ( (byte_4B1A05A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B1A05A = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isButtonOn )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UISprite__set_spriteName(expeditionNoticeBtnSp, (System_String_o *)*v7, 0LL);
}


void __fastcall EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  DataManager_o *v10; // x8

  if ( (byte_4B1A04D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1A04D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      0LL)) == 0LL
    || (v10 = Instance, (Instance = (DataManager_o *)this->fields.expeditionNoticeNumber) == 0LL)
    || (NoticeNumberComponent__SetNumber(
          (NoticeNumberComponent_o *)Instance,
          (int32_t)v10->fields.m_CancellationTokenSource,
          0LL),
        (Instance = (DataManager_o *)this->fields.completeBtn) == 0LL) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  ((void (*)(void))Instance->klass[1]._1.namespaze)();
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_1(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v11; // x3
  struct UITouchPress_o *touchPanel; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  __int64 size; // x2
  int v15; // w10
  System_Collections_Generic_List_EventDelegate__o *v16; // x20
  EventDelegate_Callback_o *v17; // x21
  __int64 v18; // x1

  if ( (byte_4B1A05D & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8, v9);
    byte_4B1A05D = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
  maskPanel = (UnityEngine_GameObject_o *)this->fields.touchPanel;
  if ( !maskPanel )
    goto LABEL_13;
  maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
  if ( !maskPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  touchPanel = this->fields.touchPanel;
  if ( !touchPanel
    || (onClick = touchPanel->fields.onClick) == 0LL
    || (size = (unsigned int)onClick->fields._size,
        v15 = onClick->fields._version + 1,
        onClick->fields._size = 0,
        onClick->fields._version = v15,
        (int)size >= 1)
    && (System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL),
        (touchPanel = this->fields.touchPanel) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(maskPanel, method);
  }
  v16 = touchPanel->fields.onClick;
  v17 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, size, v11);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v18);
  EventDelegate__Set_47333340(v16, v17, 0LL);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_2(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Component_o *touchPanel; // x0
  void *monitor; // x8
  int32_t v14; // w2
  int v15; // w9
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_int__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B1A05F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v10, v11);
    byte_4B1A05F = 1;
  }
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_12;
  monitor = touchPanel[1].monitor;
  if ( !monitor )
    goto LABEL_12;
  v14 = *((_DWORD *)monitor + 6);
  v15 = *((_DWORD *)monitor + 7) + 1;
  *((_DWORD *)monitor + 6) = 0;
  *((_DWORD *)monitor + 7) = v15;
  if ( v14 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)monitor + 2), 0, v14, 0LL);
    touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
    if ( !touchPanel )
      goto LABEL_12;
  }
  touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL);
  if ( !touchPanel )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL);
  touchPanel = (UnityEngine_Component_o *)this->fields.maskPanel;
  if ( !touchPanel )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectEventExpeditionEntityList,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v29 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SelectPieceIdxList,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  touchPanel = (UnityEngine_Component_o *)this->fields.bitExpeditionStart;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(touchPanel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_3(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *touchPanel; // x0
  void *monitor; // x8
  int32_t v6; // w2
  int v7; // w9
  struct BitExpeditionStartComponent_o *bitExpeditionStart; // x8

  if ( (byte_4B1A05E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method, v2);
    byte_4B1A05E = 1;
  }
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_11;
  monitor = touchPanel[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  v6 = *((_DWORD *)monitor + 6);
  v7 = *((_DWORD *)monitor + 7) + 1;
  *((_DWORD *)monitor + 6) = 0;
  *((_DWORD *)monitor + 7) = v7;
  if ( v6 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)monitor + 2), 0, v6, 0LL);
    touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
    if ( !touchPanel )
      goto LABEL_11;
  }
  touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL);
  if ( !touchPanel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL),
        (bitExpeditionStart = this->fields.bitExpeditionStart) == 0LL)
    || (touchPanel = (UnityEngine_Component_o *)bitExpeditionStart->fields.animation) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(touchPanel, method);
  }
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)touchPanel, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager__get_HakkenshiBaseWindowHeight(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.hakkenshiInfo )
    sub_1BCAA3C(this, method);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight((HakkenshiListController_o *)this, method);
}


System_Collections_Generic_List_EventExpeditionListViewObject__o *__fastcall EventExpeditionListViewManager__get_ObjectList(
        EventExpeditionListViewManager_o *this,
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A046 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1A046 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventExpeditionListViewObject__o *)v21;
}


void __fastcall EventExpeditionListViewManager__CoWaitEffectPlay_d__48___ctor(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventExpeditionListViewManager__CoWaitEffectPlay_d__48__MoveNext(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  int32_t _1__state; // w8
  PartyOrganizationUtility_o *p__2__current; // x20
  bool result; // w0
  struct EventExpeditionListViewManager_o *_4__this; // x19
  __int64 v29; // x2
  __int64 v30; // x3
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v31; // x20
  EventExpeditionListViewManager___c_c *v32; // x8
  System_Action_object__o *_9__48_0; // x21
  Il2CppObject *v34; // x22
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x1
  HakkenshiListController_o *hakkenshiInfo; // x20
  const MethodInfo *v44; // x3
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  EventExpeditionEntity_o *v46; // x21
  int32_t Item; // w22
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x24
  const MethodInfo *v56; // x5

  v8 = this;
  if ( (byte_4B1A06F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventExpeditionListViewObject__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__, v11, v12);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v19, v20);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__, v21, v22);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_1BCA7E0(
                                                                         &EventExpeditionListViewManager___c_TypeInfo,
                                                                         v23,
                                                                         v24);
    byte_4B1A06F = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)EventExpeditionListViewManager__get_ObjectList(
                                                                         _4__this,
                                                                         method);
    v31 = this;
    v32 = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, method);
      v32 = EventExpeditionListViewManager___c_TypeInfo;
    }
    _9__48_0 = (System_Action_object__o *)v32->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32, method);
        v32 = EventExpeditionListViewManager___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__48_0 = (System_Action_object__o *)sub_1BCAA2C(
                                              System_Action_EventExpeditionListViewObject__TypeInfo,
                                              method,
                                              v29,
                                              v30);
      System_Action_object____ctor(
        _9__48_0,
        v34,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        0LL);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__48_0,
        (int64_t)_9__48_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    if ( !v31 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v31,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    _4__this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)_4__this, 0LL);
    EventExpeditionListViewManager__RequestListObject(_4__this, v42);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.SelectPieceIdxList;
    if ( !this )
      goto LABEL_25;
    hakkenshiInfo = _4__this->fields.hakkenshiInfo;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)System_Collections_Generic_List_int___get_Item(
                                                                         (System_Collections_Generic_List_int__o *)this,
                                                                         0,
                                                                         (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !hakkenshiInfo )
      goto LABEL_25;
    HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, (int32_t)this, 0, v44);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.touchPanel;
    if ( !this )
      goto LABEL_25;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
    if ( !this )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.bitExpeditionStart;
    if ( !this )
      goto LABEL_25;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
    if ( !this )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.selectEventExpeditionEntityList;
    if ( !this )
      goto LABEL_25;
    bitExpeditionStart = _4__this->fields.bitExpeditionStart;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this,
                                                                         0,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    if ( !_4__this->fields.SelectPieceIdxList
      || (v46 = (EventExpeditionEntity_o *)this,
          Item = System_Collections_Generic_List_int___get_Item(
                   _4__this->fields.SelectPieceIdxList,
                   0,
                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
          v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50),
          System_Action___ctor(
            v51,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
            0LL),
          v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54),
          System_Action___ctor(
            v55,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
            0LL),
          !bitExpeditionStart) )
    {
LABEL_25:
      sub_1BCAA3C(this, method);
    }
    BitExpeditionStartComponent__SetUp(bitExpeditionStart, v46, Item, v51, v55, v56);
  }
  else if ( !_1__state )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
    sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall EventExpeditionListViewManager__CoWaitEffectPlay_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventExpeditionListViewManager__CoWaitEffectPlay_d__48__System_Collections_IEnumerator_Reset(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventExpeditionListViewManager__CoWaitEffectPlay_d__48__System_Collections_IEnumerator_get_Current(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventExpeditionListViewManager__CoWaitEffectPlay_d__48__System_IDisposable_Dispose(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventExpeditionListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A060 & 1) == 0 )
  {
    sub_1BCA7E0(&EventExpeditionListViewManager___c_TypeInfo, v1, v2);
    byte_4B1A060 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventExpeditionListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventExpeditionListViewManager___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventExpeditionListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventExpeditionListViewManager___c___ctor(
        EventExpeditionListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_0(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B1A061 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__, v7, v8);
    sub_1BCA7E0(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, v9, v10);
    byte_4B1A061 = 1;
  }
  v11 = sub_1BCAA2C(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_1(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B1A062 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__, v7, v8);
    sub_1BCA7E0(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, v9, v10);
    byte_4B1A062 = 1;
  }
  v11 = sub_1BCAA2C(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_4(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B1A063 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__, v7, v8);
    sub_1BCA7E0(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, v9, v10);
    byte_4B1A063 = 1;
  }
  v11 = sub_1BCAA2C(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (EventExpeditionListViewManager___c_o *)EventExpeditionListViewObject__GetItem(x, (const MethodInfo *)x)) == 0LL )
  {
    sub_1BCAA3C(this, x);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)x);
}


int32_t __fastcall EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.idx;
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass32_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass32_0___Init_b__0(
        EventExpeditionListViewManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventExpeditionListViewManager___c__DisplayClass32_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct EventExpeditionListViewManager_o *_4__this; // x8
  int32_t eventId; // w21
  UISprite_o *completeBtnSp; // x20
  struct EventExpeditionListViewManager_o *v13; // x8
  UILabel_o *completeBtnLb; // x20
  const MethodInfo *v15; // x3
  struct EventExpeditionListViewManager_o *v16; // x8
  const MethodInfo *v17; // x3
  struct EventExpeditionListViewManager_o *v18; // x19
  const MethodInfo *v19; // x1

  v3 = this;
  if ( (byte_4B1A064 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_17677/*"btn_completecheck_bg"*/, v6, v7);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_1BCA7E0(&StringLiteral_5874/*"EXPEDITION_COMP_BTN_LABEL"*/, v8, v9);
    byte_4B1A064 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  eventId = v3->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_38574572(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_17677/*"btn_completecheck_bg"*/,
                                                                     0LL);
  v13 = v3->fields.__4__this;
  if ( !v13 )
    goto LABEL_16;
  completeBtnLb = v13->fields.completeBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_5874/*"EXPEDITION_COMP_BTN_LABEL"*/,
                                                                     0LL);
  if ( !completeBtnLb )
    goto LABEL_16;
  UILabel__set_text(completeBtnLb, (System_String_o *)this, 0LL);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v3->fields.__4__this;
  if ( !this
    || (EventExpeditionListViewManager__SetExpeditionObject((EventExpeditionListViewManager_o *)this, method),
        (v16 = v3->fields.__4__this) == 0LL)
    || (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v16->fields.hakkenshiInfo) == 0LL
    || (HakkenshiListController__CreateHakkenshiWindow(
          (HakkenshiListController_o *)this,
          v3->fields.eventId,
          v16->fields.assetManager,
          v15),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v3->fields.__4__this) == 0LL)
    || (EventExpeditionListViewManager__CreateList(
          (EventExpeditionListViewManager_o *)this,
          v3->fields.evExpeditionEntList,
          v3->fields.eventId,
          v17),
        (v18 = v3->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(this, method);
  }
  v18->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)v18, 0LL);
  EventExpeditionListViewManager__RequestListObject(v18, v19);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass40_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass40_0___CheckServant_b__2(
        EventExpeditionListViewManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SceneJumpInfo_o *v15; // x20
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x3

  if ( (byte_4B1A065 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v8, v9);
    byte_4B1A065 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v19, v20, v21);
      SceneJumpInfo___ctor_39380884(v15, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v18 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1BCAA3C(v16, v17);
    case 1:
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v16 )
      {
        v18 = 71;
        v22 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v12, v13, v14);
      SceneJumpInfo___ctor_39380796(v15, (System_String_o *)StringLiteral_12781/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v18 = 32;
LABEL_10:
        v16 = Instance;
        v22 = (Il2CppObject *)v15;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v16, v18, 1, v22, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass40_1___ctor(
        EventExpeditionListViewManager___c__DisplayClass40_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass40_1___CheckServant_b__3(
        EventExpeditionListViewManager___c__DisplayClass40_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  SceneJumpInfo_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3

  if ( (byte_4B1A066 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12785/*"ServantEquipList"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12784/*"ServantEQCombine"*/, v10, v11);
    byte_4B1A066 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v21, v22, v23);
      SceneJumpInfo___ctor_39380884(v17, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v20 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1BCAA3C(v18, v19);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v24, v25, v26);
      SceneJumpInfo___ctor_39380796(v17, (System_String_o *)StringLiteral_12785/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v20 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v14, v15, v16);
      SceneJumpInfo___ctor_39380796(v17, (System_String_o *)StringLiteral_12784/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v20 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v20, 1, (Il2CppObject *)v17, 0LL);
        return;
      }
      goto LABEL_14;
  }
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass40_2___ctor(
        EventExpeditionListViewManager___c__DisplayClass40_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass40_2___CheckServant_b__5(
        EventExpeditionListViewManager___c__DisplayClass40_2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  SceneJumpInfo_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1A067 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    byte_4B1A067 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v12 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v9, v10, v11);
    SceneJumpInfo___ctor_39380884(v12, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v13, v14);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v12, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass45_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager___c__DisplayClass45_0___OnClickListView_b__0(
        EventExpeditionListViewManager___c__DisplayClass45_0_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0
  const MethodInfo *v10; // x4

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionObj(
          _4__this,
          this->fields.obj,
          (const MethodInfo *)eventExpeditionEntity),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, isDecide);
  }
  EventExpeditionListViewManager__OnClickDecide(_4__this, isDecide, eventExpeditionEntity, pieceIdx, v10);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_0___FinishResponse_b__0(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
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
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v29; // x8
  int64_t resultEventRewardInfos; // x1
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  __int64 *v32; // x22
  __int64 v33; // x2
  __int64 v34; // x3
  struct EventExpeditionListViewManager_resData_array *v35; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  __int64 v37; // x26
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x22
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x23
  int32_t currentEventId; // w20
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *closeCallback; // x25
  BattleDropItem_array *v47; // x3
  UserGameEntity_array *v48; // x4
  const MethodInfo *v49; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1A068 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_SetActive__, v7, v8);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__, v9, v10);
    sub_1BCA7E0(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, v11, v12);
    byte_4B1A068 = 1;
  }
  v13 = sub_1BCAA2C(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  ActionExtensions__Call(this->fields.animFinishCallback, 0LL);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !res->max_length )
    goto LABEL_15;
  v29 = res->m_Items[0];
  if ( !v29
    || (resultExpeditionRewardInfos = v29->fields.resultExpeditionRewardInfos,
        resultEventRewardInfos = (int64_t)v29->fields.resultEventRewardInfos,
        *(_QWORD *)(v13 + 16) = resultEventRewardInfos,
        v32 = (__int64 *)(v13 + 16),
        sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), resultEventRewardInfos, v22, v23, v24, v25, v26, v27),
        (v35 = this->fields.res) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(v14, v15);
  }
  if ( !v35->max_length )
LABEL_15:
    sub_1BCAA44(v14, v15);
  if ( !v35->m_Items[0] )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v37 = *v32;
  if ( !*v32 )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  v42 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v15, v33, v34);
  System_Action_bool____ctor(v42, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  closeCallback = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v13,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0LL);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v47,
    v48,
    currentEventId,
    *(_DWORD *)(v37 + 24) != 0,
    v42,
    closeCallback,
    v49);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_0___FinishResponse_b__3(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventExpeditionListViewManager__FinishResponseCallBack(_4__this, method);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___ctor(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__1(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x9
  ExpeditionPointRewardDialogComponent_o *_9__2; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *v17; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  EventExpeditionEntity_o *v19; // x21
  BattleDropItem_array *v20; // x22
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v23; // x24
  __int64 v24; // x2
  __int64 v25; // x3
  const MethodInfo *v26; // x6
  System_Action_o *v27; // x25
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  v3 = this;
  if ( (byte_4B1A069 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_SetActive__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v8, v9);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1BCA7E0(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
                                                                       v10,
                                                                       v11);
    byte_4B1A069 = 1;
  }
  resultEventRewardInfos = v3->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_15;
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_15;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    if ( this[11].klass )
    {
      _9__2 = (ExpeditionPointRewardDialogComponent_o *)this[11].fields.__9__2;
      this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this[11].klass,
                                                                         0,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
      v17 = v3->fields.CS___8__locals1;
      if ( v17 )
      {
        _4__this = v17->fields.__4__this;
        if ( _4__this )
        {
          v19 = (EventExpeditionEntity_o *)this;
          v20 = v3->fields.resultEventRewardInfos;
          currentEventId = _4__this->fields.currentEventId;
          maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
          v23 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, method, v15, v16);
          System_Action_bool____ctor(v23, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
          v27 = v3->fields.__9__2;
          if ( !v27 )
          {
            v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v24, v25);
            System_Action___ctor(
              v27,
              (Il2CppObject *)v3,
              Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
              0LL);
            v3->fields.__9__2 = v27;
            sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)v27, v28, v29, v30, v31, v32, v33);
          }
          if ( _9__2 )
          {
            ExpeditionPointRewardDialogComponent__Open(_9__2, v19, v20, currentEventId, v23, v27, v26);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(this, method);
  }
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, method);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x20
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  System_Action_o *_9__3; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v4 = this;
  if ( (byte_4B1A06A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1BCA7E0(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
                                                                       v5,
                                                                       v6);
    byte_4B1A06A = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  requestCallBack = _4__this->fields.requestCallBack;
  resultEventRewardInfos = v4->fields.resultEventRewardInfos;
  _9__3 = CS___8__locals1->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0LL);
    CS___8__locals1->fields.__9__3 = _9__3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&CS___8__locals1->fields.__9__3,
      (int64_t)_9__3,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !requestCallBack )
LABEL_9:
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))requestCallBack->fields.m_target)(
    requestCallBack->fields.original_method_info,
    resultEventRewardInfos,
    0LL,
    _9__3,
    *(_QWORD *)&requestCallBack->fields.extra_arg);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__1(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventExpeditionListViewManager___c__DisplayClass51_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct EventExpeditionListViewManager_o *_4__this; // x8
  __int64 v11; // x3
  struct EventExpeditionListViewManager_o *v12; // x8
  struct UITouchPress_o *touchPanel; // x9
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  __int64 size; // x2
  int v16; // w10
  struct UITouchPress_o *v17; // x8
  System_Collections_Generic_List_EventDelegate__o *v18; // x20
  EventDelegate_Callback_o *_9__3; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  v3 = this;
  if ( (byte_4B1A06B & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v6, v7);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1BCA7E0(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
                                                                       v8,
                                                                       v9);
    byte_4B1A06B = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)_4__this->fields.touchPanel;
  if ( !this )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v12 = v3->fields.__4__this;
  if ( !v12 )
    goto LABEL_17;
  touchPanel = v12->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_17;
  onClick = touchPanel->fields.onClick;
  if ( !onClick )
    goto LABEL_17;
  size = (unsigned int)onClick->fields._size;
  v16 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v16;
  if ( (int)size >= 1 )
  {
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
    v12 = v3->fields.__4__this;
    if ( !v12 )
      goto LABEL_17;
  }
  v17 = v12->fields.touchPanel;
  if ( !v17 )
LABEL_17:
    sub_1BCAA3C(this, method);
  v18 = v17->fields.onClick;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, size, v11);
    EventDelegate_Callback___ctor(
      _9__3,
      (Il2CppObject *)v3,
      (intptr_t)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__3, (int64_t)_9__3, v20, v21, v22, v23, v24, v25);
  }
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, method);
  EventDelegate__Set_47333340(v18, _9__3, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__3(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Request_object; // x0
  __int64 v17; // x1
  __int64 v18; // x3
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct UITouchPress_o *touchPanel; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x8
  __int64 size; // x2
  int v23; // w9
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct EventExpeditionListViewManager_o *v31; // x8

  if ( (byte_4B1A06C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__, v10, v11);
    sub_1BCA7E0(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__, v12, v13);
    byte_4B1A06C = 1;
  }
  v14 = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  touchPanel = _4__this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_17;
  onClick = touchPanel->fields.onClick;
  if ( !onClick )
    goto LABEL_17;
  size = (unsigned int)onClick->fields._size;
  v23 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v23;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v17,
                                                     size,
                                                     v18);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v25, v26, v27, v28, v29, v30);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  Request_object = NetworkManager__getRequest_object_(
                     _9__4,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v31 = this->fields.__4__this;
  if ( !v31 || !Request_object )
LABEL_17:
    sub_1BCAA3C(Request_object, v17);
  EventExpeditionFinishRequest__beginRequest(
    (EventExpeditionFinishRequest_o *)Request_object,
    v31->fields.currentEventId,
    this->fields.idxList,
    0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__4(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventExpeditionListViewManager___c__DisplayClass51_0_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__5; // x23
  EventExpeditionListViewManager_o *_4__this; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v5 = this;
  if ( (byte_4B1A06D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1BCA7E0(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
                                                                       v6,
                                                                       v7);
    byte_4B1A06D = 1;
  }
  _9__5 = v5->fields.__9__5;
  _4__this = v5->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, result, method, v3);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v5,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0LL);
    v5->fields.__9__5 = _9__5;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__5, (int64_t)_9__5, v10, v11, v12, v13, v14, v15);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, result);
  EventExpeditionListViewManager__FinishResponse(_4__this, result, _9__5, v3);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__5(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventExpeditionListViewManager_o *_4__this; // x0
  struct EventExpeditionListViewManager_o *v11; // x8
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  struct EventExpeditionListViewManager_o *v15; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B1A06E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8, v9);
    byte_4B1A06E = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, method), (v11 = this->fields.__4__this) == 0LL)
    || (_4__this = (EventExpeditionListViewManager_o *)v11->fields.SelectPieceIdxList) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v17; ; HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields._current, 1, v14) )
  {
    v12 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v12 )
      break;
    v15 = this->fields.__4__this;
    if ( !v15 )
      sub_1BCAA3C(v12, v13);
    hakkenshiInfo = v15->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_1BCAA3C(0LL, v13);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_1___ctor(
        EventExpeditionListViewManager___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventExpeditionListViewManager___c__DisplayClass51_1___OnClickCompleteView_b__2(
        EventExpeditionListViewManager___c__DisplayClass51_1_o *this,
        ExpeditionInfo_o *x,
        const MethodInfo *method)
{
  struct EventExpeditionEntity_o *entity; // x8

  if ( !x || (entity = this->fields.entity) == 0LL )
    sub_1BCAA3C(this, x);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void __fastcall EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}