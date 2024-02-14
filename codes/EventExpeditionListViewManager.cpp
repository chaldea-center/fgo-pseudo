void __fastcall EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4216F8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v6);
    byte_4216F8F = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


bool __fastcall EventExpeditionListViewManager__CheckEventEnd(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216F85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    byte_4216F85 = 1;
  }
  entity = 0LL;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_17:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  return (__int64)Master_WarQuestSelectionMaster >= *(_QWORD *)&entity->fields.eventId;
}


bool __fastcall EventExpeditionListViewManager__CheckServant(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  UserServantMaster_o *v13; // x19
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *v17; // x19
  int32_t v18; // w20
  int32_t svtKeep; // w21
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__40_0; // x22
  Il2CppObject *v22; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CommonUI_o *v30; // x0
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  CommonUI_o *v36; // x19
  int32_t v37; // w20
  int32_t svtEquipKeep; // w21
  struct EventExpeditionListViewManager___c_StaticFields *v39; // x8
  Il2CppObject *v40; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t Count; // w19
  __int64 v49; // x1
  __int64 v50; // x2
  CommonUI_o *v51; // x20
  BalanceConfig_c *v52; // x8
  struct EventExpeditionListViewManager___c_StaticFields *v53; // x8
  Il2CppObject *v54; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4216F81 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__, v7);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__, v8);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__, v9);
    sub_B0D8A4(&EventExpeditionListViewManager___c_TypeInfo, v10);
    byte_4216F81 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v13 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v13, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v17 = (CommonUI_o *)Instance;
      v18 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventExpeditionListViewManager___c_TypeInfo;
      if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      static_fields = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__40_0 = static_fields->__9__40_0;
      if ( !_9__40_0 )
      {
        if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                     ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                     v15,
                                                                     v16);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__40_0,
          v22,
          Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
          0LL);
        v23 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
        v23->__9__40_0 = _9__40_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v23->__9__40_0,
          (System_Int32_array **)_9__40_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      if ( v17 )
      {
        v30 = v17;
        v31 = v18;
        v32 = svtKeep;
        v33 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B0D97C(Instance);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v13, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v36 = (CommonUI_o *)Instance;
    v37 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v39 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v39->__9__40_1;
    if ( !_9__40_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v39 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)v39->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                   ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                   v34,
                                                                   v35);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v40,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0LL);
      v41 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v41->__9__40_1 = _9__40_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v41->__9__40_1,
        (System_Int32_array **)_9__40_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    if ( !v36 )
      goto LABEL_53;
    v33 = 1;
    v30 = v36;
    v31 = v37;
  }
  else
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(MasterData_WarQuestSelectionMaster, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v51 = (CommonUI_o *)Instance;
    if ( !byte_421088F )
    {
      sub_B0D8A4(&BalanceConfig_TypeInfo, v49);
      byte_421088F = 1;
    }
    v52 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v52->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v53 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v53->__9__40_4;
    if ( !_9__40_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v53 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)v53->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                   ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                   v49,
                                                                   v50);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v54,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0LL);
      v55 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v55->__9__40_4 = _9__40_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v55->__9__40_4,
        (System_Int32_array **)_9__40_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    if ( !v51 )
      goto LABEL_53;
    v33 = 2;
    v30 = v51;
    v31 = Count;
  }
  v32 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v30, v31, v32, v33, 1, _9__40_0, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
  return 0;
}


System_Collections_IEnumerator_o *__fastcall EventExpeditionListViewManager__CoWaitEffectPlay(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4216F89 & 1) == 0 )
  {
    sub_B0D8A4(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method);
    byte_4216F89 = 1;
  }
  v4 = sub_B0D974(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method, v2);
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48___ctor(
    (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall EventExpeditionListViewManager__CreateList(
        EventExpeditionListViewManager_o *this,
        EventExpeditionEntity_array *evExpeditionEntList,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  signed int max_length; // w8
  unsigned int v14; // w27
  EventExpeditionEntity_o *v15; // x22
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v18; // x26
  __int64 v19; // x1
  __int64 v20; // x2
  EventExpeditionListViewItem_o *v21; // x23
  const MethodInfo *v22; // x6
  __int64 v23; // x0

  if ( (byte_4216F7C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, evExpeditionEntList);
    sub_B0D8A4(&EventExpeditionListViewItem_TypeInfo, v7);
    sub_B0D8A4(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    byte_4216F7C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !evExpeditionEntList )
    goto LABEL_11;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v23 = sub_B0D9A8(itemList);
        sub_B0D948(v23, 0LL);
      }
      v15 = evExpeditionEntList->m_Items[v14];
      if ( !v15 )
        break;
      idx = v15->fields.idx;
      assetManager = this->fields.assetManager;
      v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0LL);
      v21 = (EventExpeditionListViewItem_o *)sub_B0D974(EventExpeditionListViewItem_TypeInfo, v19, v20);
      EventExpeditionListViewItem___ctor(v21, idx, v15, eventId, assetManager, v18, v22);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_10;
    }
LABEL_11:
    sub_B0D97C(itemList);
  }
LABEL_10:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager__DestroyList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  ExpeditionAssetManager_o *assetManager; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    ExpeditionAssetManager__Release(assetManager, this->fields.currentEventId, 0LL);
}


void __fastcall EventExpeditionListViewManager__FinishResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        System_Action_o *animFinishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  UnityEngine_Component_o *touchPanel; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  Il2CppObject *v28; // x21
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x21

  if ( (byte_4216F8A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, result);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___, v7);
    sub_B0D8A4(&JsonManager_TypeInfo, v8);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__, v9);
    sub_B0D8A4(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v11);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v12);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v13);
    byte_4216F8A = 1;
  }
  v14 = sub_B0D974(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, result, animFinishCallback);
  EventExpeditionListViewManager___c__DisplayClass49_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass49_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = animFinishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)animFinishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v14 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
    return;
  v28 = (Il2CppObject *)System_String__Concat_43852188(
                          (System_String_o *)StringLiteral_15681/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15917/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v29 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v28,
                                 (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v14 + 24) = v29;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), v29, v30, v31, v32, v33, v34, v35);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v39 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v37, v38),
        System_Action___ctor(
          v39,
          (Il2CppObject *)v14,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_12:
    sub_B0D97C(touchPanel);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v39, 0LL);
}


void __fastcall EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v24; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_4216F8B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v6);
    byte_4216F8B = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (bitExpeditionFinish = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0LL)) == 0LL )
  {
    sub_B0D97C(bitExpeditionFinish);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0LL);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v24);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_String_o *touchPanel; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w8
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UILabel_o *expeditionNoticeLb; // x21
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  ExpeditionAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x19
  ExpeditionAssetManager_o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t v57; // w19
  System_Action_o *v58; // x22

  if ( (byte_4216F7B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, evExpeditionEntList);
    sub_B0D8A4(&ExpeditionAssetManager_TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__, v13);
    sub_B0D8A4(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_5799/*"EXPEDITION_PUSH_BTN_LABEL"*/, v15);
    byte_4216F7B = 1;
  }
  v16 = sub_B0D974(
          EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo,
          evExpeditionEntList,
          *(_QWORD *)&eventId);
  EventExpeditionListViewManager___c__DisplayClass32_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_DWORD *)(v16 + 16) = eventId;
  *(_QWORD *)(v16 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v16 + 32) = evExpeditionEntList;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v16 + 32),
    (System_Int32_array **)evExpeditionEntList,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = *(_DWORD *)(v16 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.expeditionCallback,
    (System_Int32_array **)expeditionCallback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.requestCallBack = requestCallBack;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0LL);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_5799/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0LL);
  if ( !expeditionNoticeLb )
    goto LABEL_14;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v44);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v45);
  touchPanel = (System_String_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_14;
  touchPanel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)touchPanel, 0LL);
  if ( !touchPanel )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
    v50 = (ExpeditionAssetManager_o *)sub_B0D974(ExpeditionAssetManager_TypeInfo, v46, v47);
    ExpeditionAssetManager___ctor(v50, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v50;
    sub_B0D840(p_assetManager, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
    assetManager = (ExpeditionAssetManager_o *)p_assetManager->klass;
  }
  v57 = *(_DWORD *)(v16 + 16);
  v58 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v46, v47);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v16,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_14:
    sub_B0D97C(touchPanel);
  ExpeditionAssetManager__GetAssets(assetManager, v57, v58, 0LL);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventExpeditionListViewObject__o *ObjectList; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4216F83 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v5);
    byte_4216F83 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  ObjectList = EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v8.fields.current,
      v7);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionObj(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4216F84 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    this = (EventExpeditionListViewManager_o *)sub_B0D8A4(&Method_EventExpeditionListViewManager_OnMoveEnd__, v5);
    byte_4216F84 = 1;
  }
  if ( !obj
    || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_B0D97C(this);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, v6);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, v4, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  EventExpeditionListViewObject__Init(obj, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__LocateDialogToExpeditionObj(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x20
  int v7; // s0

  if ( !obj )
    goto LABEL_7;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL),
        !transform)
    || (UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL),
        v6 = UnityEngine_GameObject__get_transform(obj, 0LL),
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_one(0LL),
        !v6)
    || (UnityEngine_Transform__set_localScale(v6, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
        EventExpeditionListViewManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x20
  int v7; // s0

  if ( !dialog )
    goto LABEL_7;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL),
        !transform)
    || (UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL),
        v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL),
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_one(0LL),
        !v6)
    || (UnityEngine_Transform__set_localScale(v6, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)dialog,
                                                      0LL)) == 0LL) )
  {
LABEL_7:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickCompleteButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  Il2CppObject *current; // x25
  WebViewManager_o *v21; // x0
  EventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v23; // x4
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-60h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4216F82 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventExpeditionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&SoundManager_TypeInfo, v13);
    byte_4216F82 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                (UserEventExpeditionMaster_o *)Instance,
                                this->fields.currentEventId,
                                0LL);
  if ( !Instance )
    goto LABEL_25;
  v16 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance;
  if ( SLODWORD(Instance->fields.datalist) < 1
    || !EventExpeditionListViewManager__CheckServant((EventExpeditionListViewManager_o *)Instance, v15) )
  {
    goto LABEL_17;
  }
  Instance = (DataManager_o *)this->fields.maskPanel;
  if ( !Instance )
LABEL_25:
    sub_B0D97C(Instance);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    v16,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v27.fields.current;
    v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v21 )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)v21,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_B0D97C(MasterData_WarQuestSelectionMaster);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    v24 = EventExpeditionMaster__TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            v23);
    if ( !v19 )
      sub_B0D97C(v24);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v19,
      (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v19,
    v25);
LABEL_17:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickCompleteView(
        EventExpeditionListViewManager_o *this,
        System_Collections_Generic_List_EventExpeditionEntity__o *eventExpeditionEntities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v25; // x21
  int64_t Instance; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x22
  __int64 v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **current; // x1
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Collections_Generic_List_int__o *SelectPieceIdxList; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v56; // x25
  WarBoardData_SquareRangeSearch_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  EventExpeditionListViewManager___c_c *v60; // x0
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__51_0; // x22
  Il2CppObject *v63; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Int32_array **v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  const MethodInfo *v79; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v81; // x19
  __int64 v82; // x1
  __int64 v83; // x2
  System_Action_o *v84; // x22
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+30h] [xbp-70h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4216F8C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, eventExpeditionEntities);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__, v10);
    sub_B0D8A4(&Method_System_Func_EventExpeditionEntity__int___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_ExpeditionInfo__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_EventExpeditionEntity__int__TypeInfo, v13);
    sub_B0D8A4(&System_Func_ExpeditionInfo__bool__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__, v16);
    sub_B0D8A4(&NetworkManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__, v19);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__, v20);
    sub_B0D8A4(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, v21);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__, v22);
    sub_B0D8A4(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v23);
    sub_B0D8A4(&EventExpeditionListViewManager___c_TypeInfo, v24);
    byte_4216F8C = 1;
  }
  entity = 0LL;
  memset(&v87, 0, sizeof(v87));
  v25 = sub_B0D974(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, eventExpeditionEntities, method);
  EventExpeditionListViewManager___c__DisplayClass51_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass51_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_33;
  *(_QWORD *)(v25 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)eventExpeditionEntities,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  Instance = UserEventExpeditionMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               this->fields.currentEventId,
               0LL);
  if ( !eventExpeditionEntities )
    goto LABEL_33;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v86,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventExpeditionEntities,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v87 = v86;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v87,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v42 = sub_B0D974(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v40, v41);
    EventExpeditionListViewManager___c__DisplayClass51_1___ctor(
      (EventExpeditionListViewManager___c__DisplayClass51_1_o *)v42,
      0LL);
    if ( !v42 )
      sub_B0D97C(v43);
    current = (System_Int32_array **)v87.fields.current;
    *(_QWORD *)(v42 + 16) = v87.fields.current;
    sub_B0D840((BattleServantConfConponent_o *)(v42 + 16), current, v44, v45, v46, v47, v48, v49);
    if ( !entity )
      sub_B0D97C(v51);
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    v56 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_ExpeditionInfo__bool__TypeInfo,
                                                                               v52,
                                                                               v53);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v56,
      (Il2CppObject *)v42,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      (const MethodInfo_26189B8 *)Method_System_Func_ExpeditionInfo__bool___ctor__);
    v57 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v56,
            (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v57 )
      sub_B0D97C(0LL);
    if ( !SelectPieceIdxList )
      sub_B0D97C(v57);
    System_Collections_Generic_List_int___Add(
      SelectPieceIdxList,
      v57->fields.range,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v87,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v60 = EventExpeditionListViewManager___c_TypeInfo;
  if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
    v60 = EventExpeditionListViewManager___c_TypeInfo;
  }
  static_fields = v60->static_fields;
  _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_EventExpeditionEntity__int__TypeInfo,
                                                                                 v58,
                                                                                 v59);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__51_0,
      v63,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      (const MethodInfo_2619564 *)Method_System_Func_EventExpeditionEntity__int___ctor__);
    v64 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    v64->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v64->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                                                               (System_Func_TSource__TResult__o *)_9__51_0,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v72 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                 v71,
                                 (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v25 + 24) = v72;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 24), v72, v73, v74, v75, v76, v77, v78);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v79);
  Instance = (int64_t)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v81 = this->fields.SelectPieceIdxList,
        v84 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v82, v83),
        System_Action___ctor(
          v84,
          (Il2CppObject *)v25,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_33:
    sub_B0D97C(Instance);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v81, v84, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__OnClickDecide(
        EventExpeditionListViewManager_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *selectEventExpeditionEntityList; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  NetworkManager_ResultCallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x4

  if ( (byte_4216F87 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventExpeditionListViewManager_StartResponse__, isDecide);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    byte_4216F87 = 1;
  }
  if ( isDecide )
  {
    selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.selectEventExpeditionEntityList;
    if ( selectEventExpeditionEntityList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        selectEventExpeditionEntityList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)eventExpeditionEntity,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.SelectPieceIdxList;
      if ( selectEventExpeditionEntityList )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)selectEventExpeditionEntityList,
          pieceIdx,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.expeditionConfirmDialog;
        if ( selectEventExpeditionEntityList )
        {
          ExpeditionConfirmDialogComponent__Close(
            (ExpeditionConfirmDialogComponent_o *)selectEventExpeditionEntityList,
            0LL);
          selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.maskPanel;
          if ( selectEventExpeditionEntityList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectEventExpeditionEntityList, 1, 0LL);
            v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                           NetworkManager_ResultCallbackFunc_TypeInfo,
                                                           v15,
                                                           v16);
            NetworkManager_ResultCallbackFunc___ctor(
              v17,
              (Il2CppObject *)this,
              Method_EventExpeditionListViewManager_StartResponse__,
              0LL);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(v17, (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
            if ( eventExpeditionEntity )
            {
              if ( selectEventExpeditionEntityList )
              {
                EventExpeditionStartRequest__beginRequest(
                  (EventExpeditionStartRequest_o *)selectEventExpeditionEntityList,
                  this->fields.currentEventId,
                  eventExpeditionEntity->fields.idx,
                  pieceIdx,
                  v18);
                return;
              }
            }
          }
        }
      }
    }
LABEL_16:
    sub_B0D97C(selectEventExpeditionEntityList);
  }
  selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.maskPanel;
  if ( !selectEventExpeditionEntityList )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectEventExpeditionEntityList, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickListView(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  void *maskPanel; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  EventExpeditionListViewObject_o **v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v30; // x21
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  EventExpeditionEntity_o *v33; // x21
  SoundManager_c *v34; // x0
  EventExpeditionListViewManager_o *v35; // x0
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  const MethodInfo *v40; // x2
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  __int64 v42; // x1
  __int64 v43; // x2
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v44; // x22

  if ( (byte_4216F86 & 1) == 0 )
  {
    sub_B0D8A4(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo, obj);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v11);
    sub_B0D8A4(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, v12);
    byte_4216F86 = 1;
  }
  v13 = sub_B0D974(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, obj, method);
  EventExpeditionListViewManager___c__DisplayClass45_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass45_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_32;
  *(_QWORD *)(v13 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v13 + 24) = obj;
  v21 = (EventExpeditionListViewObject_o **)(v13 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)obj, v22, v23, v24, v25, v26, v27);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  maskPanel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_32;
  maskPanel = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v21 )
    goto LABEL_32;
  currentEventId = this->fields.currentEventId;
  v30 = (EventExpeditionMaster_o *)maskPanel;
  maskPanel = EventExpeditionListViewObject__GetItem(*v21, v28);
  if ( !maskPanel )
    goto LABEL_32;
  if ( !v30 )
    goto LABEL_32;
  maskPanel = EventExpeditionMaster__GetEntity(v30, currentEventId, *((_DWORD *)maskPanel + 5), v31);
  if ( !*v21 )
    goto LABEL_32;
  v33 = (EventExpeditionEntity_o *)maskPanel;
  switch ( (*v21)->fields.dispMode )
  {
    case 0:
      goto LABEL_25;
    case 1:
    case 2:
      if ( EventExpeditionListViewManager__CheckEventEnd(this, v32) )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          v34 = SoundManager_TypeInfo;
LABEL_23:
          j_il2cpp_runtime_class_init_0(v34);
        }
LABEL_24:
        SoundManager__playSystemSe(2, 0LL);
LABEL_25:
        maskPanel = this->fields.maskPanel;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
          return;
        }
LABEL_32:
        sub_B0D97C(maskPanel);
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v44 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_B0D974(
                                                                  ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo,
                                                                  v42,
                                                                  v43);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v44,
        (Il2CppObject *)v13,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( !expeditionConfirmDialog )
        goto LABEL_32;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v33, 1, v44, 1, 0, 0LL);
      return;
    case 3:
      v34 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_23;
      }
      goto LABEL_24;
    case 4:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !EventExpeditionListViewManager__CheckServant(v35, v36) )
        goto LABEL_25;
      v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v37, v38);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v39,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v39 )
        goto LABEL_32;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v39,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v39,
        v40);
      return;
    default:
      return;
  }
}


void __fastcall EventExpeditionListViewManager__OnClickNoticeButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w9
  int32_t v4; // w0
  const MethodInfo *v5; // x1

  if ( (byte_4216F8E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216F8E = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  if ( isButtonOn )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v4 = 1;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v4 = 0;
  }
  SoundManager__playSystemSe(v4, 0LL);
  EventRewardSaveData__SetExpeditionNotification(this->fields.isButtonOn, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v5);
}


void __fastcall EventExpeditionListViewManager__OnMoveEnd(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0

  if ( (byte_4216F7F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216F7F = 1;
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
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall EventExpeditionListViewManager__RequestListObject(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *current; // x20
  System_Action_o *v15; // x21
  __int64 v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4216F7E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v5);
    sub_B0D8A4(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__, v8);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v9);
    byte_4216F7E = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventExpeditionListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v18.fields.current;
      v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v16);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v15, v17);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *expeditionConfirmDialog; // x21
  struct ExpeditionConfirmDialogComponent_o **p_expeditionConfirmDialog; // x20
  UnityEngine_GameObject_o *v11; // x0
  struct ExpeditionAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionConfirmDialog_k__BackingField; // x21
  struct ExpeditionConfirmDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  struct ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  struct ExpeditionAssetManager_o *v24; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionRewardDialog_k__BackingField; // x21
  struct ExpeditionRewardDialogComponent_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  struct ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  struct ExpeditionAssetManager_o *v36; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionPointRewardDialog_k__BackingField; // x21
  struct ExpeditionPointRewardDialogComponent_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v47; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionStart_k__BackingField; // x20
  struct BitExpeditionStartComponent_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v57; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v59; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionFinish_k__BackingField; // x20
  struct BitExpeditionFinishComponent_o *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_GameObject_o *v68; // x1
  const MethodInfo *v69; // x2

  if ( (byte_4216F7A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4216F7A = 1;
  }
  expeditionConfirmDialog = (UnityEngine_Object_o *)this->fields.expeditionConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionConfirmDialog = &this->fields.expeditionConfirmDialog;
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_59;
    expeditionConfirmDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._expeditionConfirmDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionConfirmDialog_k__BackingField,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_59;
    Component_srcLineSprite = (struct ExpeditionConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v11,
                                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.expeditionConfirmDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v21);
  }
  v11 = (UnityEngine_GameObject_o *)*p_expeditionConfirmDialog;
  if ( !*p_expeditionConfirmDialog )
    goto LABEL_59;
  ExpeditionConfirmDialogComponent__Init((ExpeditionConfirmDialogComponent_o *)v11, this->fields.currentEventId, 0LL);
  expeditionRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionRewardDialog = &this->fields.expeditionRewardDialog;
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v24 = this->fields.assetManager;
    if ( !v24 )
      goto LABEL_59;
    expeditionRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v24->fields._expeditionRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionRewardDialog_k__BackingField,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_59;
    v26 = (struct ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v11,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = v26;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.expeditionRewardDialog,
      (System_Int32_array **)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v33);
  }
  v11 = (UnityEngine_GameObject_o *)*p_expeditionRewardDialog;
  if ( !*p_expeditionRewardDialog )
    goto LABEL_59;
  ExpeditionRewardDialogComponent__Init((ExpeditionRewardDialogComponent_o *)v11, 0LL);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionPointRewardDialog = &this->fields.expeditionPointRewardDialog;
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v36 = this->fields.assetManager;
    if ( !v36 )
      goto LABEL_59;
    expeditionPointRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v36->fields._expeditionPointRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionPointRewardDialog_k__BackingField,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_59;
    v38 = (struct ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v11,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = v38;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.expeditionPointRewardDialog,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v45);
  }
  v11 = (UnityEngine_GameObject_o *)*p_expeditionPointRewardDialog;
  if ( !*p_expeditionPointRewardDialog )
    goto LABEL_59;
  ExpeditionPointRewardDialogComponent__Init((ExpeditionPointRewardDialogComponent_o *)v11, 0LL);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionStart, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v47 = this->fields.assetManager;
    if ( !v47 )
      goto LABEL_59;
    bitExpeditionStart_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v47->fields._bitExpeditionStart_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        bitExpeditionStart_k__BackingField,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_59;
    v49 = (struct BitExpeditionStartComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v11,
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = v49;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.bitExpeditionStart,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v11 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v11 )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v57);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionFinish, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v59 = this->fields.assetManager;
    if ( v59 )
    {
      bitExpeditionFinish_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v59->fields._bitExpeditionFinish_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          bitExpeditionFinish_k__BackingField,
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v11 )
      {
        v61 = (struct BitExpeditionFinishComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v11,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = v61;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.bitExpeditionFinish,
          (System_Int32_array **)v61,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
        v11 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v11 )
        {
          v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v68, v69);
          return;
        }
      }
    }
LABEL_59:
    sub_B0D97C(v11);
  }
}


void __fastcall EventExpeditionListViewManager__SetMaskPanel(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.maskPanel = mask;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.maskPanel,
    (System_Int32_array **)mask,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventExpeditionListViewManager__SetObjectItem(
        EventExpeditionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_o *v8; // x21
  __int64 v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x10

  if ( (byte_4216F7D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6);
    sub_B0D8A4(&EventExpeditionListViewObject_TypeInfo, v7);
    byte_4216F7D = 1;
  }
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, obj, item);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v11 = *(&EventExpeditionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[v11 - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_B0D97C(v9);
  }
  EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)obj, v8, v10);
}


void __fastcall EventExpeditionListViewManager__StartResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4216F88 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, result);
    byte_4216F88 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager__UpdateButtonDisp(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v5; // x8

  if ( (byte_4216F8D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, method);
    sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v3);
    byte_4216F8D = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_B0D97C(0LL);
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_17057/*"btn_on"*/;
  else
    v5 = &StringLiteral_17056/*"btn_off"*/;
  UISprite__set_spriteName(expeditionNoticeBtnSp, (System_String_o *)*v5, 0LL);
}


void __fastcall EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x8

  if ( (byte_4216F80 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4216F80 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      0LL)) == 0LL
    || (v6 = Instance, (Instance = (DataManager_o *)this->fields.expeditionNoticeNumber) == 0LL)
    || (NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, (int32_t)v6->fields.datalist, 0LL),
        (Instance = (DataManager_o *)this->fields.completeBtn) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  ((void (*)(void))Instance->klass[1]._1.namespaze)();
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_1(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *maskPanel; // x0
  struct UITouchPress_o *touchPanel; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  struct UITouchPress_o *v10; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_4216F90 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&EventDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v5);
    byte_4216F90 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
  maskPanel = (UnityEngine_GameObject_o *)this->fields.touchPanel;
  if ( !maskPanel
    || (maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL), (touchPanel = this->fields.touchPanel) == 0LL)
    || (maskPanel = (UnityEngine_GameObject_o *)touchPanel->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)maskPanel,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v10 = this->fields.touchPanel) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(maskPanel);
  }
  onClick = v10->fields.onClick;
  v12 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v8, v9);
  EventDelegate_Callback___ctor(
    v12,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_28893376(onClick, v12, v13);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_2(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UITouchPress_o *touchPanel; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  v2 = this;
  if ( (byte_4216F92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    this = (EventExpeditionListViewManager_o *)sub_B0D8A4(
                                                 &System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                 v6);
    byte_4216F92 = 1;
  }
  touchPanel = v2->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_11;
  this = (EventExpeditionListViewManager_o *)touchPanel->fields.onClick;
  if ( !this )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
  this = (EventExpeditionListViewManager_o *)v2->fields.touchPanel;
  if ( !this )
    goto LABEL_11;
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (EventExpeditionListViewManager_o *)v2->fields.maskPanel;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                                                                  v8,
                                                                                                  v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  v2->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v17, v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v2->fields.SelectPieceIdxList = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields.SelectPieceIdxList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this = (EventExpeditionListViewManager_o *)v2->fields.bitExpeditionStart;
  if ( !this
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_11:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_3(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *v2; // x19
  struct UITouchPress_o *touchPanel; // x8

  v2 = this;
  if ( (byte_4216F91 & 1) == 0 )
  {
    this = (EventExpeditionListViewManager_o *)sub_B0D8A4(
                                                 &Method_System_Collections_Generic_List_EventDelegate__Clear__,
                                                 method);
    byte_4216F91 = 1;
  }
  touchPanel = v2->fields.touchPanel;
  if ( !touchPanel
    || (this = (EventExpeditionListViewManager_o *)touchPanel->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (this = (EventExpeditionListViewManager_o *)v2->fields.touchPanel) == 0LL)
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (EventExpeditionListViewManager_o *)v2->fields.bitExpeditionStart) == 0LL) )
  {
    sub_B0D97C(this);
  }
  BitExpeditionStartComponent__SkipAnimation((BitExpeditionStartComponent_o *)this, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager__get_HakkenshiBaseWindowHeight(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  HakkenshiListController_o *hakkenshiInfo; // x0

  hakkenshiInfo = this->fields.hakkenshiInfo;
  if ( !hakkenshiInfo )
    sub_B0D97C(0LL);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight(hakkenshiInfo, 0LL);
}


System_Collections_Generic_List_EventExpeditionListViewObject__o *__fastcall EventExpeditionListViewManager__get_ObjectList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4216F79 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4216F79 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventExpeditionListViewObject__o *)v12;
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
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct EventExpeditionListViewManager_o *_4__this; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v18; // x20
  EventExpeditionListViewManager___c_c *v19; // x8
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__48_0; // x21
  Il2CppObject *v22; // x22
  struct EventExpeditionListViewManager___c_StaticFields *v23; // x0
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x21
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  struct System_Collections_Generic_List_int__o *v29; // x22
  EventExpeditionEntity_o *v30; // x21
  int32_t v31; // w22
  System_Action_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x24

  v2 = this;
  if ( (byte_4211B34 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventExpeditionListViewObject___ctor__, method);
    sub_B0D8A4(&System_Action_EventExpeditionListViewObject__TypeInfo, v3);
    sub_B0D8A4(&System_Action_TypeInfo, v4);
    sub_B0D8A4(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__, v5);
    sub_B0D8A4(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v9);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__, v10);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_B0D8A4(
                                                                         &EventExpeditionListViewManager___c_TypeInfo,
                                                                         v11);
    byte_4211B34 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_33;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)EventExpeditionListViewManager__get_ObjectList(
                                                                         _4__this,
                                                                         0LL);
    v18 = this;
    v19 = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v19 = EventExpeditionListViewManager___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                        System_Action_EventExpeditionListViewObject__TypeInfo,
                                                                                        v16,
                                                                                        v17);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__48_0,
        v22,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_EventExpeditionListViewObject___ctor__);
      v23 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v23->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      sub_B0D840(&v23->__9__48_0, _9__48_0);
    }
    if ( !v18 )
      goto LABEL_33;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v18,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    EventExpeditionListViewManager__SetCallBack(_4__this, 0LL);
    SelectPieceIdxList = _4__this->fields.SelectPieceIdxList;
    if ( !SelectPieceIdxList )
      goto LABEL_33;
    if ( !SelectPieceIdxList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !_4__this->fields.hakkenshiInfo )
      goto LABEL_33;
    HakkenshiListController__DisplayHakkenshiObj(
      _4__this->fields.hakkenshiInfo,
      SelectPieceIdxList->fields._items->m_Items[1],
      0,
      0LL);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.touchPanel;
    if ( !this )
      goto LABEL_33;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
    if ( !this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.bitExpeditionStart;
    if ( !this )
      goto LABEL_33;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
    if ( !this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
    if ( !selectEventExpeditionEntityList )
      goto LABEL_33;
    bitExpeditionStart = _4__this->fields.bitExpeditionStart;
    if ( !selectEventExpeditionEntityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v29 = _4__this->fields.SelectPieceIdxList;
    if ( !v29 )
      goto LABEL_33;
    v30 = selectEventExpeditionEntityList->fields._items->m_Items[0];
    if ( !v29->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v31 = v29->fields._items->m_Items[1];
    v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(
      v32,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
      0LL);
    v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
    System_Action___ctor(
      v35,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
      0LL);
    if ( !bitExpeditionStart )
LABEL_33:
      sub_B0D97C(this);
    BitExpeditionStartComponent__SetUp(bitExpeditionStart, v30, v31, v32, v35, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B0D840(p__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211B25 & 1) == 0 )
  {
    sub_B0D8A4(&EventExpeditionListViewManager___c_TypeInfo, v1);
    byte_4211B25 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventExpeditionListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211B26 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__, v5);
    sub_B0D8A4(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, v6);
    byte_4211B26 = 1;
  }
  v7 = sub_B0D974(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_1(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211B27 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__, v5);
    sub_B0D8A4(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, v6);
    byte_4211B27 = 1;
  }
  v7 = sub_B0D974(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_4(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211B28 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__, v5);
    sub_B0D8A4(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, v6);
    byte_4211B28 = 1;
  }
  v7 = sub_B0D974(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (EventExpeditionListViewManager___c_o *)EventExpeditionListViewObject__GetItem(x, 0LL)) == 0LL )
    sub_B0D97C(this);
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
  EventExpeditionListViewManager___c__DisplayClass32_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *completeBtnSp; // x21
  struct EventExpeditionListViewManager_o *v9; // x8
  UILabel_o *completeBtnLb; // x20
  struct EventExpeditionListViewManager_o *v11; // x8

  v2 = this;
  if ( (byte_4211B29 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_17037/*"btn_completecheck_bg"*/, v4);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_B0D8A4(&StringLiteral_5784/*"EXPEDITION_COMP_BTN_LABEL"*/, v5);
    byte_4211B29 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  eventId = v2->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_27921852(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_17037/*"btn_completecheck_bg"*/,
                                                                     0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_18;
  completeBtnLb = v9->fields.completeBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_5784/*"EXPEDITION_COMP_BTN_LABEL"*/,
                                                                     0LL);
  if ( !completeBtnLb )
    goto LABEL_18;
  UILabel__set_text(completeBtnLb, (System_String_o *)this, 0LL);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventExpeditionListViewManager__SetExpeditionObject((EventExpeditionListViewManager_o *)this, 0LL),
        (v11 = v2->fields.__4__this) == 0LL)
    || (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v11->fields.hakkenshiInfo) == 0LL
    || (HakkenshiListController__CreateHakkenshiWindow(
          (HakkenshiListController_o *)this,
          v2->fields.eventId,
          v11->fields.assetManager,
          0LL),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this) == 0LL)
    || (EventExpeditionListViewManager__CreateList(
          (EventExpeditionListViewManager_o *)this,
          v2->fields.evExpeditionEntList,
          v2->fields.eventId,
          0LL),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(this);
  }
  EventExpeditionListViewManager__SetCallBack((EventExpeditionListViewManager_o *)this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  SceneJumpInfo_o *v10; // x20
  AvalonSceneManager_o *v11; // x0
  int32_t v12; // w1
  Il2CppObject *v13; // x3
  __int64 v14; // x1
  __int64 v15; // x2

  if ( (byte_4211B2A & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v4);
    sub_B0D8A4(&StringLiteral_12746/*"ServantCombine"*/, v5);
    byte_4211B2A = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_16651652(v10, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B0D97C(v11);
    case 1:
      v11 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v11 )
      {
        v12 = 71;
        v13 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v11, v12, 1, v13, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v8, v9);
      SceneJumpInfo___ctor_16651556(v10, (System_String_o *)StringLiteral_12746/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        v11 = (AvalonSceneManager_o *)Instance;
        v13 = (Il2CppObject *)v10;
        goto LABEL_13;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t result; // w8
  AvalonSceneManager_o *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  SceneJumpInfo_o *v11; // x20
  __int64 v12; // x0
  int32_t v13; // w1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2

  if ( (byte_4211B2B & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12750/*"ServantEquipList"*/, v4);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v5);
    sub_B0D8A4(&StringLiteral_12749/*"ServantEQCombine"*/, v6);
    byte_4211B2B = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v16, v17);
      SceneJumpInfo___ctor_16651652(v11, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_16651556(v11, (System_String_o *)StringLiteral_12750/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v13 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B0D97C(v12);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v9, v10);
      SceneJumpInfo___ctor_16651556(v11, (System_String_o *)StringLiteral_12749/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v13, 1, (Il2CppObject *)v11, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  SceneJumpInfo_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_4211B2C & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v4);
    byte_4211B2C = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v8 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v6, v7);
    SceneJumpInfo___ctor_16651652(v8, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B0D97C(v9);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v8, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass45_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass45_0___OnClickListView_b__0(
        EventExpeditionListViewManager___c__DisplayClass45_0_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionObj(_4__this, this->fields.obj, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(_4__this);
  }
  EventExpeditionListViewManager__OnClickDecide(_4__this, isDecide, eventExpeditionEntity, pieceIdx, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  __int64 v10; // x0
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v12; // x8
  Il2CppClass *resultEventRewardInfos; // x1
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  BattleDropItem_array **v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  struct EventExpeditionListViewManager_resData_array *v18; // x8
  EventExpeditionListViewManager_resData_o *v19; // x9
  struct EventExpeditionListViewManager_o *_4__this; // x8
  BattleDropItem_array *v21; // x20
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x24
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x25
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x27
  UserGameEntity_array *oldUserGame; // x22
  System_Action_bool__o *v27; // x26
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *closeCallback; // x27
  __int64 v31; // x0

  if ( (byte_4211B2D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v4);
    sub_B0D8A4(&System_Action_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_SetActive__, v6);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__, v7);
    sub_B0D8A4(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, v8);
    byte_4211B2D = 1;
  }
  v9 = (Il2CppObject *)sub_B0D974(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, method, v2);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  v9[1].monitor = this;
  sub_B0D840(&v9[1].monitor, this);
  ActionExtensions__Call(this->fields.animFinishCallback, 0LL);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !res->max_length )
    goto LABEL_15;
  v12 = res->m_Items[0];
  if ( !v12
    || (resultExpeditionRewardInfos = v12->fields.resultExpeditionRewardInfos,
        resultEventRewardInfos = (Il2CppClass *)v12->fields.resultEventRewardInfos,
        v9[1].klass = resultEventRewardInfos,
        v15 = (BattleDropItem_array **)&v9[1],
        sub_B0D840(&v9[1], resultEventRewardInfos),
        (v18 = this->fields.res) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(v10);
  }
  if ( !v18->max_length )
  {
LABEL_15:
    v31 = sub_B0D9A8(v10);
    sub_B0D948(v31, 0LL);
  }
  v19 = v18->m_Items[0];
  if ( !v19 )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v21 = *v15;
  if ( !*v15 )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  oldUserGame = v19->fields.oldUserGame;
  v27 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v16, v17);
  System_Action_bool____ctor(
    v27,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  closeCallback = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(
    closeCallback,
    v9,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0LL);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v21,
    oldUserGame,
    currentEventId,
    v21->max_length != 0,
    v27,
    closeCallback,
    0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_0___FinishResponse_b__3(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventExpeditionListViewManager__FinishResponseCallBack(_4__this, 0LL);
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
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppClass *klass; // x20
  void *monitor; // x8
  struct System_Action_o *_9__2; // x22
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x21
  __int64 v13; // x8
  __int64 v14; // x9
  int32_t v15; // w22
  Il2CppObject *v16; // x25
  EventExpeditionEntity_o *v17; // x23
  System_Action_bool__o *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x25

  v3 = (Il2CppObject *)this;
  if ( (byte_4211B2E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v4);
    sub_B0D8A4(&System_Action_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_SetActive__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v7);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_B0D8A4(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
                                                                       v8);
    byte_4211B2E = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_16;
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_16;
  this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)*((_QWORD *)monitor + 4);
  if ( !this )
    goto LABEL_16;
  if ( klass->_1.namespaze )
  {
    _9__2 = this[10].fields.__9__2;
    if ( _9__2 )
    {
      CS___8__locals1 = this[11].fields.CS___8__locals1;
      if ( !LODWORD(_9__2->fields.m_target) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v13 = *((_QWORD *)monitor + 4);
      if ( v13 )
      {
        v14 = *(_QWORD *)&_9__2->fields.method_ptr;
        v15 = *(_DWORD *)(v13 + 408);
        v16 = *(Il2CppObject **)(v13 + 384);
        v17 = *(EventExpeditionEntity_o **)(v14 + 32);
        v18 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, method, v2);
        System_Action_bool____ctor(
          v18,
          v16,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
        v21 = (System_Action_o *)v3[2].klass;
        if ( !v21 )
        {
          v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
          System_Action___ctor(
            v21,
            v3,
            Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
            0LL);
          v3[2].klass = (Il2CppClass *)v21;
          sub_B0D840(&v3[2], v21);
        }
        if ( CS___8__locals1 )
        {
          ExpeditionPointRewardDialogComponent__Open(
            (ExpeditionPointRewardDialogComponent_o *)CS___8__locals1,
            v17,
            (BattleDropItem_array *)klass,
            v15,
            v18,
            v21,
            0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B0D97C(this);
  }
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *CS___8__locals1; // x21
  Il2CppClass *klass; // x8
  System_Action_T1__T2__T3__o *methodPtr; // x19
  Il2CppObject *p_obj; // x20
  System_Action_o *monitor; // x22

  v3 = this;
  if ( (byte_4211B2F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v4);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_B0D8A4(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
                                                                       v5);
    byte_4211B2F = 1;
  }
  CS___8__locals1 = (Il2CppObject *)v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  klass = CS___8__locals1[2].klass;
  if ( !klass )
    goto LABEL_9;
  methodPtr = (System_Action_T1__T2__T3__o *)klass->vtable[6].methodPtr;
  p_obj = &v3->fields.resultEventRewardInfos->obj;
  monitor = (System_Action_o *)CS___8__locals1[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      monitor,
      CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0LL);
    CS___8__locals1[2].monitor = monitor;
    sub_B0D840(&CS___8__locals1[2].monitor, monitor);
  }
  if ( !methodPtr )
LABEL_9:
    sub_B0D97C(this);
  System_Action_object__int__object___Invoke(
    methodPtr,
    p_obj,
    0,
    (Il2CppObject *)monitor,
    (const MethodInfo_247EDEC *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
  EventExpeditionListViewManager___c__DisplayClass51_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct EventExpeditionListViewManager_o *v7; // x8
  struct UITouchPress_o *touchPanel; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventExpeditionListViewManager_o *v11; // x8
  struct UITouchPress_o *v12; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  __int64 _9__3; // x21
  __int64 v15; // x9

  v2 = this;
  if ( (byte_4211B30 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&EventDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v4);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_B0D8A4(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
                                                                       v5);
    byte_4211B30 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)_4__this->fields.touchPanel;
  if ( !this )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v7 = v2->fields.__4__this) == 0LL)
    || (touchPanel = v7->fields.touchPanel) == 0LL
    || (this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)touchPanel->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v11 = v2->fields.__4__this) == 0LL)
    || (v12 = v11->fields.touchPanel) == 0LL )
  {
LABEL_17:
    sub_B0D97C(this);
  }
  onClick = v12->fields.onClick;
  _9__3 = (__int64)v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = sub_B0D974(EventDelegate_Callback_TypeInfo, v9, v10);
    v15 = *(_QWORD *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
    *(_QWORD *)(_9__3 + 40) = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
    *(_QWORD *)(_9__3 + 16) = v15;
    *(_QWORD *)(_9__3 + 32) = v2;
    sub_B0D840(_9__3 + 32, v2);
    v2->fields.__9__3 = (struct EventDelegate_Callback_o *)_9__3;
    sub_B0D840(&v2->fields.__9__3, _9__3);
  }
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_28893376(onClick, (EventDelegate_Callback_o *)_9__3, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__3(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardWallAttackRequest_o *onClick; // x0
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct UITouchPress_o *touchPanel; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  struct EventExpeditionListViewManager_o *v14; // x8

  if ( (byte_4211B31 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__, v7);
    byte_4211B31 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  touchPanel = _4__this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_17;
  onClick = (WarBoardWallAttackRequest_o *)touchPanel->fields.onClick;
  if ( !onClick )
    goto LABEL_17;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)onClick,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B0D840(&this->fields.__9__4, _9__4);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  onClick = NetworkManager__getRequest_WarBoardWallAttackRequest_(
              _9__4,
              (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v14 = this->fields.__4__this;
  if ( !v14 || !onClick )
LABEL_17:
    sub_B0D97C(onClick);
  EventExpeditionFinishRequest__beginRequest(
    (EventExpeditionFinishRequest_o *)onClick,
    v14->fields.currentEventId,
    this->fields.idxList,
    0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__4(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  System_Action_o *klass; // x22
  EventExpeditionListViewManager_o *v7; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4211B32 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, result);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_B0D8A4(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
                                                                       v5);
    byte_4211B32 = 1;
  }
  klass = (System_Action_o *)v4[2].klass;
  v7 = (EventExpeditionListViewManager_o *)v4[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, result, method);
    System_Action___ctor(
      klass,
      v4,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0LL);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B0D840(&v4[2], klass);
  }
  if ( !v7 )
    sub_B0D97C(this);
  EventExpeditionListViewManager__FinishResponse(v7, result, klass, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__5(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventExpeditionListViewManager_o *_4__this; // x0
  struct EventExpeditionListViewManager_o *v7; // x8
  _BOOL8 v8; // x0
  struct EventExpeditionListViewManager_o *v9; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  System_Collections_Generic_List_Enumerator_int__o v11; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_4211B33 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    byte_4211B33 = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, 0LL), (v7 = this->fields.__4__this) == 0LL)
    || (_4__this = (EventExpeditionListViewManager_o *)v7->fields.SelectPieceIdxList) == 0LL )
  {
    sub_B0D97C(_4__this);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v11; ; HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields.current, 1, 0LL) )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &i,
           (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    v9 = this->fields.__4__this;
    if ( !v9 )
      sub_B0D97C(v8);
    hakkenshiInfo = v9->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_B0D97C(this);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void __fastcall EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}