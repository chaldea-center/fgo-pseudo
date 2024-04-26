void __fastcall EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_435458F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_435458F = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


bool __fastcall EventExpeditionListViewManager__CheckEventEnd(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4354585 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4354585 = 1;
  }
  entity = 0LL;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_17:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  return (__int64)Master_WarQuestSelectionMaster >= *(_QWORD *)&entity->fields.eventId;
}


bool __fastcall EventExpeditionListViewManager__CheckServant(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x19
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  CommonUI_o *v7; // x19
  int32_t v8; // w20
  int32_t svtKeep; // w21
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__40_0; // x22
  Il2CppObject *v12; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CommonUI_o *v20; // x0
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  CommonUI_o *v24; // x19
  int32_t v25; // w20
  int32_t svtEquipKeep; // w21
  struct EventExpeditionListViewManager___c_StaticFields *v27; // x8
  Il2CppObject *v28; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t Count; // w19
  CommonUI_o *v37; // x20
  BalanceConfig_c *v38; // x8
  struct EventExpeditionListViewManager___c_StaticFields *v39; // x8
  Il2CppObject *v40; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4354581 & 1) == 0 )
  {
    sub_B70694(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__);
    sub_B70694(&EventExpeditionListViewManager___c_TypeInfo);
    byte_4354581 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v5 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v7 = (CommonUI_o *)Instance;
      v8 = servantEquipSum[1];
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
        v12 = (Il2CppObject *)static_fields->__9;
        _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B70764(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__40_0,
          v12,
          Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
          0LL);
        v13 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
        v13->__9__40_0 = _9__40_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v13->__9__40_0,
          (System_Int32_array **)_9__40_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      if ( v7 )
      {
        v20 = v7;
        v21 = v8;
        v22 = svtKeep;
        v23 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B7076C(Instance, v4);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v5, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v24 = (CommonUI_o *)Instance;
    v25 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v27 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v27->__9__40_1;
    if ( !_9__40_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v27 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)v27->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B70764(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v28,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0LL);
      v29 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v29->__9__40_1 = _9__40_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v29->__9__40_1,
        (System_Int32_array **)_9__40_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    if ( !v24 )
      goto LABEL_53;
    v23 = 1;
    v20 = v24;
    v21 = v25;
  }
  else
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(MasterData_WarQuestSelectionMaster, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v37 = (CommonUI_o *)Instance;
    if ( !byte_434DEF6 )
    {
      sub_B70694(&BalanceConfig_TypeInfo);
      byte_434DEF6 = 1;
    }
    v38 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v38 = BalanceConfig_TypeInfo;
    }
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v38->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v39 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v39->__9__40_4;
    if ( !_9__40_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v39 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)v39->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B70764(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v40,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0LL);
      v41 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v41->__9__40_4 = _9__40_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v41->__9__40_4,
        (System_Int32_array **)_9__40_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    if ( !v37 )
      goto LABEL_53;
    v23 = 2;
    v20 = v37;
    v21 = Count;
  }
  v22 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v20, v21, v22, v23, 1, _9__40_0, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
  return 0;
}


System_Collections_IEnumerator_o *__fastcall EventExpeditionListViewManager__CoWaitEffectPlay(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4354589 & 1) == 0 )
  {
    sub_B70694(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
    byte_4354589 = 1;
  }
  v3 = sub_B70764(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48___ctor(
    (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall EventExpeditionListViewManager__CreateList(
        EventExpeditionListViewManager_o *this,
        EventExpeditionEntity_array *evExpeditionEntList,
        int32_t eventId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  unsigned int v10; // w27
  EventExpeditionEntity_o *v11; // x22
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v14; // x26
  EventExpeditionListViewItem_o *v15; // x23
  const MethodInfo *v16; // x6
  __int64 v17; // x0

  if ( (byte_435457C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&EventExpeditionListViewItem_TypeInfo);
    sub_B70694(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_435457C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !evExpeditionEntList )
    goto LABEL_11;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v17 = sub_B70798(itemList);
        sub_B70738(v17, 0LL);
      }
      v11 = evExpeditionEntList->m_Items[v10];
      if ( !v11 )
        break;
      idx = v11->fields.idx;
      assetManager = this->fields.assetManager;
      v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0LL);
      v15 = (EventExpeditionListViewItem_o *)sub_B70764(EventExpeditionListViewItem_TypeInfo);
      EventExpeditionListViewItem___ctor(v15, idx, v11, eventId, assetManager, v14, v16);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_10;
    }
LABEL_11:
    sub_B7076C(itemList, v8);
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
  __int64 v7; // x20
  UnityEngine_Component_o *touchPanel; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  Il2CppObject *v22; // x21
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  System_Action_o *v31; // x21

  if ( (byte_435458A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__);
    sub_B70694(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_435458A = 1;
  }
  v7 = sub_B70764(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass49_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass49_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = animFinishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)animFinishCallback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
    return;
  v22 = (Il2CppObject *)System_String__Concat_44760452(
                          (System_String_o *)StringLiteral_15855/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16092/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v23 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v22,
                                 (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v7 + 24) = v23;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), v23, v24, v25, v26, v27, v28, v29);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v31,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_12:
    sub_B7076C(touchPanel, v9);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v31, 0LL);
}


void __fastcall EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v19; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_435458B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_435458B = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (bitExpeditionFinish = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0LL)) == 0LL )
  {
    sub_B7076C(bitExpeditionFinish, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0LL);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v19);
  expeditionCallback = this->fields.expeditionCallback;
  if ( expeditionCallback )
    ActionExtensions__Call(expeditionCallback, 0LL);
}


void __fastcall EventExpeditionListViewManager__Init(
        EventExpeditionListViewManager_o *this,
        EventExpeditionEntity_array *evExpeditionEntList,
        int32_t eventId,
        System_Action_o *expeditionCallback,
        System_Action_BattleDropItem____int__Action__o *requestCallBack,
        const MethodInfo *method)
{
  __int64 v11; // x20
  System_String_o *touchPanel; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t v26; // w8
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
  UILabel_o *expeditionNoticeLb; // x21
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  ExpeditionAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x19
  ExpeditionAssetManager_o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t v51; // w19
  System_Action_o *v52; // x22

  if ( (byte_435457B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ExpeditionAssetManager_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__);
    sub_B70694(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
    sub_B70694(&StringLiteral_5872/*"EXPEDITION_PUSH_BTN_LABEL"*/);
    byte_435457B = 1;
  }
  v11 = sub_B70764(EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass32_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_14;
  *(_DWORD *)(v11 + 16) = eventId;
  *(_QWORD *)(v11 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = evExpeditionEntList;
  sub_B70630(
    (BattleServantConfConponent_o *)(v11 + 32),
    (System_Int32_array **)evExpeditionEntList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = *(_DWORD *)(v11 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v26;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.expeditionCallback,
    (System_Int32_array **)expeditionCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.requestCallBack = requestCallBack;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0LL);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_5872/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0LL);
  if ( !expeditionNoticeLb )
    goto LABEL_14;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v40);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v41);
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
    v44 = (ExpeditionAssetManager_o *)sub_B70764(ExpeditionAssetManager_TypeInfo);
    ExpeditionAssetManager___ctor(v44, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v44;
    sub_B70630(p_assetManager, (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
    assetManager = (ExpeditionAssetManager_o *)p_assetManager->klass;
  }
  v51 = *(_DWORD *)(v11 + 16);
  v52 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v11,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_14:
    sub_B7076C(touchPanel, v13);
  ExpeditionAssetManager__GetAssets(assetManager, v51, v52, 0LL);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventExpeditionListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4354583 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    byte_4354583 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v6.fields.current,
      v5);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionObj(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4354584 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager_o *)sub_B70694(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    byte_4354584 = 1;
  }
  if ( !obj
    || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_B7076C(this, obj);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)obj);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, v4, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  EventExpeditionListViewObject__Init(obj, v5, v6);
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
    sub_B7076C(this, obj);
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
    sub_B7076C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickCompleteButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v5; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  Il2CppObject *current; // x25
  WebViewManager_o *v8; // x0
  __int64 v9; // x1
  EventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-60h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4354582 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__);
    sub_B70694(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4354582 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                (UserEventExpeditionMaster_o *)Instance,
                                this->fields.currentEventId,
                                0LL);
  if ( !Instance )
    goto LABEL_25;
  v5 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance;
  if ( SLODWORD(Instance->fields.datalist) < 1
    || !EventExpeditionListViewManager__CheckServant((EventExpeditionListViewManager_o *)Instance, v4) )
  {
    goto LABEL_17;
  }
  Instance = (DataManager_o *)this->fields.maskPanel;
  if ( !Instance )
LABEL_25:
    sub_B7076C(Instance, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    v5,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v17.fields.current;
    v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v8 )
      sub_B7076C(0LL, v9);
    MasterData_WarQuestSelectionMaster = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)v8,
                                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_B7076C(MasterData_WarQuestSelectionMaster, v11);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7076C(0LL, v11);
    v13 = EventExpeditionMaster__TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            v12);
    if ( !v6 )
      sub_B7076C(v13, v14);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v6,
      (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v6,
    v15);
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
  __int64 v4; // x21
  int64_t Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **current; // x1
  __int64 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Collections_Generic_List_int__o *SelectPieceIdxList; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x25
  WarBoardData_SquareRangeSearch_o *v35; // x0
  __int64 v36; // x1
  EventExpeditionListViewManager___c_c *v37; // x0
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__51_0; // x22
  Il2CppObject *v40; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v58; // x19
  System_Action_o *v59; // x22
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+30h] [xbp-70h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_435458C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__);
    sub_B70694(&Method_System_Func_EventExpeditionEntity__int___ctor__);
    sub_B70694(&Method_System_Func_ExpeditionInfo__bool___ctor__);
    sub_B70694(&System_Func_EventExpeditionEntity__int__TypeInfo);
    sub_B70694(&System_Func_ExpeditionInfo__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__);
    sub_B70694(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__);
    sub_B70694(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    sub_B70694(&EventExpeditionListViewManager___c_TypeInfo);
    byte_435458C = 1;
  }
  entity = 0LL;
  memset(&v62, 0, sizeof(v62));
  v4 = sub_B70764(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass51_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass51_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_33;
  *(_QWORD *)(v4 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)eventExpeditionEntities,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
    &v61,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventExpeditionEntities,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v62 = v61;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v62,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v20 = sub_B70764(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    EventExpeditionListViewManager___c__DisplayClass51_1___ctor(
      (EventExpeditionListViewManager___c__DisplayClass51_1_o *)v20,
      0LL);
    if ( !v20 )
      sub_B7076C(v21, v22);
    current = (System_Int32_array **)v62.fields.current;
    *(_QWORD *)(v20 + 16) = v62.fields.current;
    sub_B70630((BattleServantConfConponent_o *)(v20 + 16), current, v23, v24, v25, v26, v27, v28);
    if ( !entity )
      sub_B7076C(v30, v31);
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ExpeditionInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v34,
      (Il2CppObject *)v20,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      (const MethodInfo_29AC578 *)Method_System_Func_ExpeditionInfo__bool___ctor__);
    v35 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v34,
            (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v35 )
      sub_B7076C(0LL, v36);
    if ( !SelectPieceIdxList )
      sub_B7076C(v35, v36);
    System_Collections_Generic_List_int___Add(
      SelectPieceIdxList,
      v35->fields.range,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v62,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v37 = EventExpeditionListViewManager___c_TypeInfo;
  if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
    v37 = EventExpeditionListViewManager___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__51_0,
      v40,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_EventExpeditionEntity__int___ctor__);
    v41 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    v41->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v41->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                                                               (System_Func_TSource__TResult__o *)_9__51_0,
                                                               (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v49 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                 v48,
                                 (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v4 + 24) = v49;
  sub_B70630((BattleServantConfConponent_o *)(v4 + 24), v49, v50, v51, v52, v53, v54, v55);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v56);
  Instance = (int64_t)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v58 = this->fields.SelectPieceIdxList,
        v59 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v59,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_33:
    sub_B7076C(Instance, v6);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v58, v59, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__OnClickDecide(
        EventExpeditionListViewManager_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *selectEventExpeditionEntityList; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x4

  if ( (byte_4354587 & 1) == 0 )
  {
    sub_B70694(&Method_EventExpeditionListViewManager_StartResponse__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4354587 = 1;
  }
  if ( isDecide )
  {
    selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.selectEventExpeditionEntityList;
    if ( selectEventExpeditionEntityList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        selectEventExpeditionEntityList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)eventExpeditionEntity,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.SelectPieceIdxList;
      if ( selectEventExpeditionEntityList )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)selectEventExpeditionEntityList,
          pieceIdx,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
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
            v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v10,
              (Il2CppObject *)this,
              Method_EventExpeditionListViewManager_StartResponse__,
              0LL);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(v10, (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
            if ( eventExpeditionEntity )
            {
              if ( selectEventExpeditionEntityList )
              {
                EventExpeditionStartRequest__beginRequest(
                  (EventExpeditionStartRequest_o *)selectEventExpeditionEntityList,
                  this->fields.currentEventId,
                  eventExpeditionEntity->fields.idx,
                  pieceIdx,
                  v11);
                return;
              }
            }
          }
        }
      }
    }
LABEL_16:
    sub_B7076C(selectEventExpeditionEntityList, isDecide);
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
  __int64 v5; // x20
  void *maskPanel; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  EventExpeditionListViewObject_o **v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v22; // x21
  const MethodInfo *v23; // x3
  EventExpeditionEntity_o *v24; // x21
  SoundManager_c *v25; // x0
  EventExpeditionListViewManager_o *v26; // x0
  const MethodInfo *v27; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  const MethodInfo *v29; // x2
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v31; // x22

  if ( (byte_4354586 & 1) == 0 )
  {
    sub_B70694(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__);
    sub_B70694(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
    byte_4354586 = 1;
  }
  v5 = sub_B70764(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass45_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass45_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = obj;
  v14 = (EventExpeditionListViewObject_o **)(v5 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)obj, v15, v16, v17, v18, v19, v20);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  maskPanel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_32;
  maskPanel = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v14 )
    goto LABEL_32;
  currentEventId = this->fields.currentEventId;
  v22 = (EventExpeditionMaster_o *)maskPanel;
  maskPanel = EventExpeditionListViewObject__GetItem(*v14, v7);
  if ( !maskPanel )
    goto LABEL_32;
  if ( !v22 )
    goto LABEL_32;
  maskPanel = EventExpeditionMaster__GetEntity(v22, currentEventId, *((_DWORD *)maskPanel + 5), v23);
  if ( !*v14 )
    goto LABEL_32;
  v24 = (EventExpeditionEntity_o *)maskPanel;
  switch ( (*v14)->fields.dispMode )
  {
    case 0:
      goto LABEL_25;
    case 1:
    case 2:
      if ( EventExpeditionListViewManager__CheckEventEnd(this, v7) )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          v25 = SoundManager_TypeInfo;
LABEL_23:
          j_il2cpp_runtime_class_init_0(v25);
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
        sub_B7076C(maskPanel, v7);
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v31 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_B70764(ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v31,
        (Il2CppObject *)v5,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( !expeditionConfirmDialog )
        goto LABEL_32;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v24, 1, v31, 1, 0, 0LL);
      return;
    case 3:
      v25 = SoundManager_TypeInfo;
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
      if ( !EventExpeditionListViewManager__CheckServant(v26, v27) )
        goto LABEL_25;
      v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v28,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v28 )
        goto LABEL_32;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v28,
        v29);
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

  if ( (byte_435458E & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435458E = 1;
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
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_435457F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435457F = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B7076C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall EventExpeditionListViewManager__RequestListObject(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_435457E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__);
    sub_B70694(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_435457E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventExpeditionListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B7076C(0LL, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v11.fields.current;
      v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v8, v9);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v7, v10);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  UnityEngine_Object_o *expeditionConfirmDialog; // x21
  struct ExpeditionConfirmDialogComponent_o **p_expeditionConfirmDialog; // x20
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct ExpeditionAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionConfirmDialog_k__BackingField; // x21
  struct ExpeditionConfirmDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  struct ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  struct ExpeditionAssetManager_o *v19; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionRewardDialog_k__BackingField; // x21
  struct ExpeditionRewardDialogComponent_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  struct ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  struct ExpeditionAssetManager_o *v31; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionPointRewardDialog_k__BackingField; // x21
  struct ExpeditionPointRewardDialogComponent_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v42; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionStart_k__BackingField; // x20
  struct BitExpeditionStartComponent_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v52; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v54; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionFinish_k__BackingField; // x20
  struct BitExpeditionFinishComponent_o *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UnityEngine_GameObject_o *v63; // x1
  const MethodInfo *v64; // x2

  if ( (byte_435457A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435457A = 1;
  }
  expeditionConfirmDialog = (UnityEngine_Object_o *)this->fields.expeditionConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionConfirmDialog = &this->fields.expeditionConfirmDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
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
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       expeditionConfirmDialog_k__BackingField,
                                       (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_59;
    Component_srcLineSprite = (struct ExpeditionConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v5,
                                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.expeditionConfirmDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v16);
  }
  v5 = (UnityEngine_GameObject_o *)*p_expeditionConfirmDialog;
  if ( !*p_expeditionConfirmDialog )
    goto LABEL_59;
  ExpeditionConfirmDialogComponent__Init((ExpeditionConfirmDialogComponent_o *)v5, this->fields.currentEventId, 0LL);
  expeditionRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionRewardDialog = &this->fields.expeditionRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v19 = this->fields.assetManager;
    if ( !v19 )
      goto LABEL_59;
    expeditionRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v19->fields._expeditionRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       expeditionRewardDialog_k__BackingField,
                                       (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_59;
    v21 = (struct ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v5,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = v21;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.expeditionRewardDialog,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v28);
  }
  v5 = (UnityEngine_GameObject_o *)*p_expeditionRewardDialog;
  if ( !*p_expeditionRewardDialog )
    goto LABEL_59;
  ExpeditionRewardDialogComponent__Init((ExpeditionRewardDialogComponent_o *)v5, 0LL);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionPointRewardDialog = &this->fields.expeditionPointRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v31 = this->fields.assetManager;
    if ( !v31 )
      goto LABEL_59;
    expeditionPointRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v31->fields._expeditionPointRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       expeditionPointRewardDialog_k__BackingField,
                                       (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_59;
    v33 = (struct ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v5,
                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = v33;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.expeditionPointRewardDialog,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v40);
  }
  v5 = (UnityEngine_GameObject_o *)*p_expeditionPointRewardDialog;
  if ( !*p_expeditionPointRewardDialog )
    goto LABEL_59;
  ExpeditionPointRewardDialogComponent__Init((ExpeditionPointRewardDialogComponent_o *)v5, 0LL);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionStart, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v42 = this->fields.assetManager;
    if ( !v42 )
      goto LABEL_59;
    bitExpeditionStart_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v42->fields._bitExpeditionStart_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       bitExpeditionStart_k__BackingField,
                                       (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_59;
    v44 = (struct BitExpeditionStartComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v5,
                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = v44;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.bitExpeditionStart,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v5 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v5 )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v52);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionFinish, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v54 = this->fields.assetManager;
    if ( v54 )
    {
      bitExpeditionFinish_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v54->fields._bitExpeditionFinish_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         bitExpeditionFinish_k__BackingField,
                                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v56 = (struct BitExpeditionFinishComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v5,
                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = v56;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.bitExpeditionFinish,
          (System_Int32_array **)v56,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
        v5 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v5 )
        {
          v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v63, v64);
          return;
        }
      }
    }
LABEL_59:
    sub_B7076C(v5, v6);
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
  sub_B70630(
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
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x10

  if ( (byte_435457D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    sub_B70694(&EventExpeditionListViewObject_TypeInfo);
    byte_435457D = 1;
  }
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v10 = *(&EventExpeditionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[v10 - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_B7076C(v7, v8);
  }
  EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)obj, v6, v9);
}


void __fastcall EventExpeditionListViewManager__StartResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4354588 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4354588 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager__UpdateButtonDisp(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v4; // x8

  if ( (byte_435458D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_435458D = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_B7076C(0LL, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17262/*"btn_on"*/;
  else
    v4 = &StringLiteral_17261/*"btn_off"*/;
  UISprite__set_spriteName(expeditionNoticeBtnSp, (System_String_o *)*v4, 0LL);
}


void __fastcall EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x8

  if ( (byte_4354580 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4354580 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      0LL)) == 0LL
    || (v5 = Instance, (Instance = (DataManager_o *)this->fields.expeditionNoticeNumber) == 0LL)
    || (NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, (int32_t)v5->fields.datalist, 0LL),
        (Instance = (DataManager_o *)this->fields.completeBtn) == 0LL) )
  {
    sub_B7076C(Instance, v4);
  }
  ((void (*)(void))Instance->klass[1]._1.namespaze)();
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_1(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  struct UITouchPress_o *touchPanel; // x8
  struct UITouchPress_o *v5; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4354590 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4354590 = 1;
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
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v5 = this->fields.touchPanel) == 0LL) )
  {
LABEL_13:
    sub_B7076C(maskPanel, method);
  }
  onClick = v5->fields.onClick;
  v7 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29879148(onClick, v7, v8);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_2(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *v2; // x19
  struct UITouchPress_o *touchPanel; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_List_int__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  v2 = this;
  if ( (byte_4354592 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    this = (EventExpeditionListViewManager_o *)sub_B70694(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_4354592 = 1;
  }
  touchPanel = v2->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_11;
  this = (EventExpeditionListViewManager_o *)touchPanel->fields.onClick;
  if ( !this )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
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
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  v2->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v2->fields.SelectPieceIdxList = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.SelectPieceIdxList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this = (EventExpeditionListViewManager_o *)v2->fields.bitExpeditionStart;
  if ( !this
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_11:
    sub_B7076C(this, method);
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
  if ( (byte_4354591 & 1) == 0 )
  {
    this = (EventExpeditionListViewManager_o *)sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4354591 = 1;
  }
  touchPanel = v2->fields.touchPanel;
  if ( !touchPanel
    || (this = (EventExpeditionListViewManager_o *)touchPanel->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (this = (EventExpeditionListViewManager_o *)v2->fields.touchPanel) == 0LL)
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (EventExpeditionListViewManager_o *)v2->fields.bitExpeditionStart) == 0LL) )
  {
    sub_B7076C(this, method);
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
    sub_B7076C(0LL, method);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight(hakkenshiInfo, 0LL);
}


System_Collections_Generic_List_EventExpeditionListViewObject__o *__fastcall EventExpeditionListViewManager__get_ObjectList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4354579 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354579 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventExpeditionListViewObject__o *)v3;
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
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct EventExpeditionListViewManager_o *_4__this; // x19
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v7; // x20
  EventExpeditionListViewManager___c_c *v8; // x8
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__48_0; // x21
  Il2CppObject *v11; // x22
  struct EventExpeditionListViewManager___c_StaticFields *v12; // x0
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x21
  struct System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x21
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  struct System_Collections_Generic_List_int__o *v16; // x22
  EventExpeditionEntity_o *v17; // x21
  int32_t v18; // w22
  System_Action_o *v19; // x23
  System_Action_o *v20; // x24

  v2 = this;
  if ( (byte_434F054 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_EventExpeditionListViewObject___ctor__);
    sub_B70694(&System_Action_EventExpeditionListViewObject__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__);
    sub_B70694(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_B70694(&EventExpeditionListViewManager___c_TypeInfo);
    byte_434F054 = 1;
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
    v7 = this;
    v8 = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v8 = EventExpeditionListViewManager___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_EventExpeditionListViewObject__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__48_0,
        v11,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        (const MethodInfo_264C148 *)Method_System_Action_EventExpeditionListViewObject___ctor__);
      v12 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v12->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      sub_B70630(&v12->__9__48_0);
    }
    if ( !v7 )
      goto LABEL_33;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v7,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    EventExpeditionListViewManager__SetCallBack(_4__this, 0LL);
    SelectPieceIdxList = _4__this->fields.SelectPieceIdxList;
    if ( !SelectPieceIdxList )
      goto LABEL_33;
    if ( !SelectPieceIdxList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v16 = _4__this->fields.SelectPieceIdxList;
    if ( !v16 )
      goto LABEL_33;
    v17 = selectEventExpeditionEntityList->fields._items->m_Items[0];
    if ( !v16->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v18 = v16->fields._items->m_Items[1];
    v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
      0LL);
    v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
      0LL);
    if ( !bitExpeditionStart )
LABEL_33:
      sub_B7076C(this, method);
    BitExpeditionStartComponent__SetUp(bitExpeditionStart, v17, v18, v19, v20, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B70630(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  Il2CppObject *v1; // x19
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_434F045 & 1) == 0 )
  {
    sub_B70694(&EventExpeditionListViewManager___c_TypeInfo);
    byte_434F045 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventExpeditionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall EventExpeditionListViewManager___c___ctor(
        EventExpeditionListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_0(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_434F046 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__);
    sub_B70694(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
    byte_434F046 = 1;
  }
  v4 = sub_B70764(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_1(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_434F047 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__);
    sub_B70694(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
    byte_434F047 = 1;
  }
  v4 = sub_B70764(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_4(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_434F048 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__);
    sub_B70694(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
    byte_434F048 = 1;
  }
  v4 = sub_B70764(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (EventExpeditionListViewManager___c_o *)EventExpeditionListViewObject__GetItem(x, 0LL)) == 0LL )
    sub_B7076C(this, x);
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
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
  struct EventExpeditionListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *completeBtnSp; // x21
  struct EventExpeditionListViewManager_o *v6; // x8
  UILabel_o *completeBtnLb; // x20
  struct EventExpeditionListViewManager_o *v8; // x8

  v2 = this;
  if ( (byte_434F049 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_17242/*"btn_completecheck_bg"*/);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_B70694(&StringLiteral_5857/*"EXPEDITION_COMP_BTN_LABEL"*/);
    byte_434F049 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  eventId = v2->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_31552376(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_17242/*"btn_completecheck_bg"*/,
                                                                     0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_18;
  completeBtnLb = v6->fields.completeBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_5857/*"EXPEDITION_COMP_BTN_LABEL"*/,
                                                                     0LL);
  if ( !completeBtnLb )
    goto LABEL_18;
  UILabel__set_text(completeBtnLb, (System_String_o *)this, 0LL);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventExpeditionListViewManager__SetExpeditionObject((EventExpeditionListViewManager_o *)this, 0LL),
        (v8 = v2->fields.__4__this) == 0LL)
    || (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v8->fields.hakkenshiInfo) == 0LL
    || (HakkenshiListController__CreateHakkenshiWindow(
          (HakkenshiListController_o *)this,
          v2->fields.eventId,
          v8->fields.assetManager,
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
    sub_B7076C(this, method);
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
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  AvalonSceneManager_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_434F04A & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    sub_B70694(&StringLiteral_12879/*"ServantCombine"*/);
    byte_434F04A = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523760(v5, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B7076C(v6, v7);
    case 1:
      v6 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v6, v8, 1, v9, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523664(v5, (System_String_o *)StringLiteral_12879/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        v6 = (AvalonSceneManager_o *)Instance;
        v9 = (Il2CppObject *)v5;
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
  int32_t result; // w8
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_434F04B & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&StringLiteral_12883/*"ServantEquipList"*/);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    sub_B70694(&StringLiteral_12882/*"ServantEQCombine"*/);
    byte_434F04B = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523760(v5, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523664(v5, (System_String_o *)StringLiteral_12883/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B7076C(v6, v7);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523664(v5, (System_String_o *)StringLiteral_12882/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v8, 1, (Il2CppObject *)v5, 0LL);
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
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_434F04C & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    byte_434F04C = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17523760(v4, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B7076C(v5, v6);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v4, 0LL);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionObj(_4__this, this->fields.obj, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B7076C(_4__this, isDecide);
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
  Il2CppObject *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v7; // x8
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  BattleDropItem_array **v9; // x22
  struct EventExpeditionListViewManager_resData_array *v10; // x8
  EventExpeditionListViewManager_resData_o *v11; // x9
  struct EventExpeditionListViewManager_o *_4__this; // x8
  BattleDropItem_array *v13; // x20
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x24
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x25
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x27
  UserGameEntity_array *oldUserGame; // x22
  System_Action_bool__o *v19; // x26
  System_Action_o *closeCallback; // x27
  __int64 v21; // x0

  if ( (byte_434F04D & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_SetActive__);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__);
    sub_B70694(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
    byte_434F04D = 1;
  }
  v3 = (Il2CppObject *)sub_B70764(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_14;
  v3[1].monitor = this;
  sub_B70630(&v3[1].monitor);
  ActionExtensions__Call(this->fields.animFinishCallback, 0LL);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !res->max_length )
    goto LABEL_15;
  v7 = res->m_Items[0];
  if ( !v7
    || (resultExpeditionRewardInfos = v7->fields.resultExpeditionRewardInfos,
        v3[1].klass = (Il2CppClass *)v7->fields.resultEventRewardInfos,
        v9 = (BattleDropItem_array **)&v3[1],
        sub_B70630(&v3[1]),
        (v10 = this->fields.res) == 0LL) )
  {
LABEL_14:
    sub_B7076C(v4, v5);
  }
  if ( !v10->max_length )
  {
LABEL_15:
    v21 = sub_B70798(v4);
    sub_B70738(v21, 0LL);
  }
  v11 = v10->m_Items[0];
  if ( !v11 )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v13 = *v9;
  if ( !*v9 )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  oldUserGame = v11->fields.oldUserGame;
  v19 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v19,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
  closeCallback = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    v3,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0LL);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v13,
    oldUserGame,
    currentEventId,
    v13->max_length != 0,
    v19,
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
    sub_B7076C(0LL, method);
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
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x20
  void *monitor; // x8
  struct System_Action_o *_9__2; // x22
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x21
  __int64 v7; // x8
  __int64 v8; // x9
  int32_t v9; // w22
  Il2CppObject *v10; // x25
  EventExpeditionEntity_o *v11; // x23
  System_Action_bool__o *v12; // x24
  System_Action_o *v13; // x25

  v2 = (Il2CppObject *)this;
  if ( (byte_434F04E & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_SetActive__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__);
    byte_434F04E = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_16;
  monitor = v2[1].monitor;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v7 = *((_QWORD *)monitor + 4);
      if ( v7 )
      {
        v8 = *(_QWORD *)&_9__2->fields.method_ptr;
        v9 = *(_DWORD *)(v7 + 408);
        v10 = *(Il2CppObject **)(v7 + 384);
        v11 = *(EventExpeditionEntity_o **)(v8 + 32);
        v12 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v12,
          v10,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
        v13 = (System_Action_o *)v2[2].klass;
        if ( !v13 )
        {
          v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v13,
            v2,
            Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
            0LL);
          v2[2].klass = (Il2CppClass *)v13;
          sub_B70630(&v2[2]);
        }
        if ( CS___8__locals1 )
        {
          ExpeditionPointRewardDialogComponent__Open(
            (ExpeditionPointRewardDialogComponent_o *)CS___8__locals1,
            v11,
            (BattleDropItem_array *)klass,
            v9,
            v12,
            v13,
            0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B7076C(this, method);
  }
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v2; // x20
  Il2CppObject *CS___8__locals1; // x21
  Il2CppClass *klass; // x8
  System_Action_T1__T2__T3__o *methodPtr; // x19
  Il2CppObject *p_obj; // x20
  System_Action_o *monitor; // x22

  v2 = this;
  if ( (byte_434F04F & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleDropItem____int__Action__Invoke__);
    sub_B70694(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__);
    byte_434F04F = 1;
  }
  CS___8__locals1 = (Il2CppObject *)v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  klass = CS___8__locals1[2].klass;
  if ( !klass )
    goto LABEL_9;
  methodPtr = (System_Action_T1__T2__T3__o *)klass->vtable[6].methodPtr;
  p_obj = &v2->fields.resultEventRewardInfos->obj;
  monitor = (System_Action_o *)CS___8__locals1[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0LL);
    CS___8__locals1[2].monitor = monitor;
    sub_B70630(&CS___8__locals1[2].monitor);
  }
  if ( !methodPtr )
LABEL_9:
    sub_B7076C(this, method);
  System_Action_object__int__object___Invoke(
    methodPtr,
    p_obj,
    0,
    (Il2CppObject *)monitor,
    (const MethodInfo_265C4F8 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct EventExpeditionListViewManager_o *v4; // x8
  struct UITouchPress_o *touchPanel; // x8
  struct EventExpeditionListViewManager_o *v6; // x8
  struct UITouchPress_o *v7; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  __int64 _9__3; // x21
  __int64 v10; // x9

  v2 = this;
  if ( (byte_434F050 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
    byte_434F050 = 1;
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
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v4 = v2->fields.__4__this) == 0LL)
    || (touchPanel = v4->fields.touchPanel) == 0LL
    || (this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)touchPanel->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v6 = v2->fields.__4__this) == 0LL)
    || (v7 = v6->fields.touchPanel) == 0LL )
  {
LABEL_17:
    sub_B7076C(this, method);
  }
  onClick = v7->fields.onClick;
  _9__3 = (__int64)v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = sub_B70764(EventDelegate_Callback_TypeInfo);
    v10 = *(_QWORD *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
    *(_QWORD *)(_9__3 + 40) = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
    *(_QWORD *)(_9__3 + 16) = v10;
    *(_QWORD *)(_9__3 + 32) = v2;
    sub_B70630(_9__3 + 32);
    v2->fields.__9__3 = (struct EventDelegate_Callback_o *)_9__3;
    sub_B70630(&v2->fields.__9__3);
  }
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29879148(onClick, (EventDelegate_Callback_o *)_9__3, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__3(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  WarBoardWallAttackRequest_o *onClick; // x0
  __int64 v4; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct UITouchPress_o *touchPanel; // x8
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  struct EventExpeditionListViewManager_o *v8; // x8

  if ( (byte_434F051 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_B70694(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__);
    byte_434F051 = 1;
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
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B70630(&this->fields.__9__4);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  onClick = NetworkManager__getRequest_WarBoardWallAttackRequest_(
              _9__4,
              (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v8 = this->fields.__4__this;
  if ( !v8 || !onClick )
LABEL_17:
    sub_B7076C(onClick, v4);
  EventExpeditionFinishRequest__beginRequest(
    (EventExpeditionFinishRequest_o *)onClick,
    v8->fields.currentEventId,
    this->fields.idxList,
    0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__4(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  System_Action_o *klass; // x22
  EventExpeditionListViewManager_o *v6; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_434F052 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_B70694(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__);
    byte_434F052 = 1;
  }
  klass = (System_Action_o *)v4[2].klass;
  v6 = (EventExpeditionListViewManager_o *)v4[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v4,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0LL);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B70630(&v4[2]);
  }
  if ( !v6 )
    sub_B7076C(this, result);
  EventExpeditionListViewManager__FinishResponse(v6, result, klass, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__5(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0
  struct EventExpeditionListViewManager_o *v4; // x8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct EventExpeditionListViewManager_o *v7; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  System_Collections_Generic_List_Enumerator_int__o v9; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_434F053 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_434F053 = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL)
    || (_4__this = (EventExpeditionListViewManager_o *)v4->fields.SelectPieceIdxList) == 0LL )
  {
    sub_B7076C(_4__this, method);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v9; ; HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields.current, 1, 0LL) )
  {
    v5 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &i,
           (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v5 )
      break;
    v7 = this->fields.__4__this;
    if ( !v7 )
      sub_B7076C(v5, v6);
    hakkenshiInfo = v7->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_B7076C(0LL, v6);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_B7076C(this, x);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void __fastcall EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}