void __fastcall EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_int__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418A3AE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v5);
    byte_418A3AE = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A3A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    byte_418A3A4 = 1;
  }
  entity = 0LL;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_17:
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
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
  __int64 v13; // x1
  UserServantMaster_o *v14; // x19
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  CommonUI_o *v16; // x19
  int32_t v17; // w20
  int32_t svtKeep; // w21
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__40_0; // x22
  Il2CppObject *v21; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CommonUI_o *v29; // x0
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  CommonUI_o *v33; // x19
  int32_t v34; // w20
  int32_t svtEquipKeep; // w21
  struct EventExpeditionListViewManager___c_StaticFields *v36; // x8
  Il2CppObject *v37; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t Count; // w19
  CommonUI_o *v46; // x20
  BalanceConfig_c *v47; // x8
  struct EventExpeditionListViewManager___c_StaticFields *v48; // x8
  Il2CppObject *v49; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A3A0 & 1) == 0 )
  {
    sub_B2C35C(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__, v7);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__, v8);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__, v9);
    sub_B2C35C(&EventExpeditionListViewManager___c_TypeInfo, v10);
    byte_418A3A0 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v14 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v14, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v16 = (CommonUI_o *)Instance;
      v17 = servantEquipSum[1];
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
        v21 = (Il2CppObject *)static_fields->__9;
        _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__40_0,
          v21,
          Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
          0LL);
        v22 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
        v22->__9__40_0 = _9__40_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v22->__9__40_0,
          (System_Int32_array **)_9__40_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      if ( v16 )
      {
        v29 = v16;
        v30 = v17;
        v31 = svtKeep;
        v32 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B2C434(Instance, v13);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v14, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v33 = (CommonUI_o *)Instance;
    v34 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v36 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v36->__9__40_1;
    if ( !_9__40_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v36 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)v36->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v37,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0LL);
      v38 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v38->__9__40_1 = _9__40_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v38->__9__40_1,
        (System_Int32_array **)_9__40_0,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    if ( !v33 )
      goto LABEL_53;
    v32 = 1;
    v29 = v33;
    v30 = v34;
  }
  else
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(MasterData_WarQuestSelectionMaster, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v46 = (CommonUI_o *)Instance;
    if ( !byte_4183CB7 )
    {
      sub_B2C35C(&BalanceConfig_TypeInfo, v13);
      byte_4183CB7 = 1;
    }
    v47 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v47->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v48 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v48->__9__40_4;
    if ( !_9__40_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v48 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)v48->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v49,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0LL);
      v50 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v50->__9__40_4 = _9__40_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v50->__9__40_4,
        (System_Int32_array **)_9__40_0,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    if ( !v46 )
      goto LABEL_53;
    v32 = 2;
    v29 = v46;
    v30 = Count;
  }
  v31 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v29, v30, v31, v32, 1, _9__40_0, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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

  if ( (byte_418A3A8 & 1) == 0 )
  {
    sub_B2C35C(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method);
    byte_418A3A8 = 1;
  }
  v3 = sub_B2C42C(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48___ctor(
    (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  signed int max_length; // w8
  unsigned int v13; // w27
  EventExpeditionEntity_o *v14; // x22
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v17; // x26
  EventExpeditionListViewItem_o *v18; // x23
  const MethodInfo *v19; // x6
  __int64 v20; // x0

  if ( (byte_418A39B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, evExpeditionEntList);
    sub_B2C35C(&EventExpeditionListViewItem_TypeInfo, v7);
    sub_B2C35C(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    byte_418A39B = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !evExpeditionEntList )
    goto LABEL_11;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v20 = sub_B2C460(itemList);
        sub_B2C400(v20, 0LL);
      }
      v14 = evExpeditionEntList->m_Items[v13];
      if ( !v14 )
        break;
      idx = v14->fields.idx;
      assetManager = this->fields.assetManager;
      v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0LL);
      v18 = (EventExpeditionListViewItem_o *)sub_B2C42C(EventExpeditionListViewItem_TypeInfo);
      EventExpeditionListViewItem___ctor(v18, idx, v14, eventId, assetManager, v17, v19);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_10;
    }
LABEL_11:
    sub_B2C434(itemList, v11);
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppObject *v29; // x21
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  System_Action_o *v38; // x21

  if ( (byte_418A3A9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___, v7);
    sub_B2C35C(&JsonManager_TypeInfo, v8);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__, v9);
    sub_B2C35C(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v11);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v12);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v13);
    byte_418A3A9 = 1;
  }
  v14 = sub_B2C42C(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass49_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass49_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = animFinishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)animFinishCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v14 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
    return;
  v29 = (Il2CppObject *)System_String__Concat_44307816(
                          (System_String_o *)StringLiteral_15634/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15870/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v30 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v29,
                                 (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v14 + 24) = v30;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 24), v30, v31, v32, v33, v34, v35, v36);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v14,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_12:
    sub_B2C434(touchPanel, v16);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v38, 0LL);
}


void __fastcall EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_int__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v22; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_418A3AA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v5);
    byte_418A3AA = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (bitExpeditionFinish = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0LL)) == 0LL )
  {
    sub_B2C434(bitExpeditionFinish, v20);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0LL);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v22);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_String_o *touchPanel; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w8
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UILabel_o *expeditionNoticeLb; // x21
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  ExpeditionAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x19
  ExpeditionAssetManager_o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int32_t v56; // w19
  System_Action_o *v57; // x22

  if ( (byte_418A39A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, evExpeditionEntList);
    sub_B2C35C(&ExpeditionAssetManager_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__, v13);
    sub_B2C35C(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_5783/*"EXPEDITION_PUSH_BTN_LABEL"*/, v15);
    byte_418A39A = 1;
  }
  v16 = sub_B2C42C(EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass32_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_DWORD *)(v16 + 16) = eventId;
  *(_QWORD *)(v16 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 32) = evExpeditionEntList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v16 + 32),
    (System_Int32_array **)evExpeditionEntList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = *(_DWORD *)(v16 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.expeditionCallback,
    (System_Int32_array **)expeditionCallback,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.requestCallBack = requestCallBack;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0LL);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_5783/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0LL);
  if ( !expeditionNoticeLb )
    goto LABEL_14;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v45);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v46);
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
    v49 = (ExpeditionAssetManager_o *)sub_B2C42C(ExpeditionAssetManager_TypeInfo);
    ExpeditionAssetManager___ctor(v49, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v49;
    sub_B2C2F8(p_assetManager, (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
    assetManager = (ExpeditionAssetManager_o *)p_assetManager->klass;
  }
  v56 = *(_DWORD *)(v16 + 16);
  v57 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v16,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_14:
    sub_B2C434(touchPanel, v18);
  ExpeditionAssetManager__GetAssets(assetManager, v56, v57, 0LL);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventExpeditionListViewObject__o *ObjectList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A3A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v5);
    byte_418A3A2 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B2C434(0LL, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v9.fields.current,
      v8);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionObj(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_418A3A3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    this = (EventExpeditionListViewManager_o *)sub_B2C35C(&Method_EventExpeditionListViewManager_OnMoveEnd__, v5);
    byte_418A3A3 = 1;
  }
  if ( !obj
    || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_B2C434(this, obj);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)obj);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, v4, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  EventExpeditionListViewObject__Init(obj, v6, v7);
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
    sub_B2C434(this, obj);
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
    sub_B2C434(this, dialog);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  Il2CppObject *current; // x25
  WebViewManager_o *v19; // x0
  __int64 v20; // x1
  EventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x4
  _BOOL8 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-60h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_418A3A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventExpeditionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    byte_418A3A1 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
    sub_B2C434(Instance, v15);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    v16,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v28.fields.current;
    v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v19 )
      sub_B2C434(0LL, v20);
    MasterData_WarQuestSelectionMaster = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)v19,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_B2C434(MasterData_WarQuestSelectionMaster, v22);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(0LL, v22);
    v24 = EventExpeditionMaster__TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            v23);
    if ( !v17 )
      sub_B2C434(v24, v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v17,
      (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v17,
    v26);
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
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v41; // x22
  __int64 v42; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **current; // x1
  __int64 v51; // x0
  __int64 v52; // x1
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Collections_Generic_List_int__o *SelectPieceIdxList; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v55; // x25
  WarBoardData_SquareRangeSearch_o *v56; // x0
  __int64 v57; // x1
  EventExpeditionListViewManager___c_c *v58; // x0
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__51_0; // x22
  Il2CppObject *v61; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  System_Int32_array **v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  const MethodInfo *v77; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v79; // x19
  System_Action_o *v80; // x22
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+30h] [xbp-70h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_418A3AB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, eventExpeditionEntities);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__, v10);
    sub_B2C35C(&Method_System_Func_EventExpeditionEntity__int___ctor__, v11);
    sub_B2C35C(&Method_System_Func_ExpeditionInfo__bool___ctor__, v12);
    sub_B2C35C(&System_Func_EventExpeditionEntity__int__TypeInfo, v13);
    sub_B2C35C(&System_Func_ExpeditionInfo__bool__TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__, v16);
    sub_B2C35C(&NetworkManager_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__, v19);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__, v20);
    sub_B2C35C(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, v21);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__, v22);
    sub_B2C35C(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v23);
    sub_B2C35C(&EventExpeditionListViewManager___c_TypeInfo, v24);
    byte_418A3AB = 1;
  }
  entity = 0LL;
  memset(&v83, 0, sizeof(v83));
  v25 = sub_B2C42C(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass51_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass51_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_33;
  *(_QWORD *)(v25 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)eventExpeditionEntities,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
    &v82,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventExpeditionEntities,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v83 = v82;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v83,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v41 = sub_B2C42C(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    EventExpeditionListViewManager___c__DisplayClass51_1___ctor(
      (EventExpeditionListViewManager___c__DisplayClass51_1_o *)v41,
      0LL);
    if ( !v41 )
      sub_B2C434(v42, v43);
    current = (System_Int32_array **)v83.fields.current;
    *(_QWORD *)(v41 + 16) = v83.fields.current;
    sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 16), current, v44, v45, v46, v47, v48, v49);
    if ( !entity )
      sub_B2C434(v51, v52);
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    v55 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ExpeditionInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v55,
      (Il2CppObject *)v41,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      (const MethodInfo_2711C04 *)Method_System_Func_ExpeditionInfo__bool___ctor__);
    v56 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v55,
            (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v56 )
      sub_B2C434(0LL, v57);
    if ( !SelectPieceIdxList )
      sub_B2C434(v56, v57);
    System_Collections_Generic_List_int___Add(
      SelectPieceIdxList,
      v56->fields.range,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v83,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v58 = EventExpeditionListViewManager___c_TypeInfo;
  if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
    v58 = EventExpeditionListViewManager___c_TypeInfo;
  }
  static_fields = v58->static_fields;
  _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__51_0,
      v61,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_EventExpeditionEntity__int___ctor__);
    v62 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    v62->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v62->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                                                               (System_Func_TSource__TResult__o *)_9__51_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v70 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                 v69,
                                 (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v25 + 24) = v70;
  sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 24), v70, v71, v72, v73, v74, v75, v76);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v77);
  Instance = (int64_t)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v79 = this->fields.SelectPieceIdxList,
        v80 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v80,
          (Il2CppObject *)v25,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_33:
    sub_B2C434(Instance, v27);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v79, v80, 0LL, 0LL);
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
  NetworkManager_ResultCallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x4

  if ( (byte_418A3A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventExpeditionListViewManager_StartResponse__, isDecide);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    byte_418A3A6 = 1;
  }
  if ( isDecide )
  {
    selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.selectEventExpeditionEntityList;
    if ( selectEventExpeditionEntityList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        selectEventExpeditionEntityList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)eventExpeditionEntity,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.SelectPieceIdxList;
      if ( selectEventExpeditionEntityList )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)selectEventExpeditionEntityList,
          pieceIdx,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
            v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v15,
              (Il2CppObject *)this,
              Method_EventExpeditionListViewManager_StartResponse__,
              0LL);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(v15, (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
            if ( eventExpeditionEntity )
            {
              if ( selectEventExpeditionEntityList )
              {
                EventExpeditionStartRequest__beginRequest(
                  (EventExpeditionStartRequest_o *)selectEventExpeditionEntityList,
                  this->fields.currentEventId,
                  eventExpeditionEntity->fields.idx,
                  pieceIdx,
                  v16);
                return;
              }
            }
          }
        }
      }
    }
LABEL_16:
    sub_B2C434(selectEventExpeditionEntityList, isDecide);
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
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EventExpeditionListViewObject_o **v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v30; // x21
  const MethodInfo *v31; // x3
  EventExpeditionEntity_o *v32; // x21
  SoundManager_c *v33; // x0
  EventExpeditionListViewManager_o *v34; // x0
  const MethodInfo *v35; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  const MethodInfo *v37; // x2
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v39; // x22

  if ( (byte_418A3A5 & 1) == 0 )
  {
    sub_B2C35C(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo, obj);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v11);
    sub_B2C35C(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, v12);
    byte_418A3A5 = 1;
  }
  v13 = sub_B2C42C(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass45_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass45_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_32;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = obj;
  v22 = (EventExpeditionListViewObject_o **)(v13 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)obj, v23, v24, v25, v26, v27, v28);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  maskPanel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_32;
  maskPanel = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v22 )
    goto LABEL_32;
  currentEventId = this->fields.currentEventId;
  v30 = (EventExpeditionMaster_o *)maskPanel;
  maskPanel = EventExpeditionListViewObject__GetItem(*v22, v15);
  if ( !maskPanel )
    goto LABEL_32;
  if ( !v30 )
    goto LABEL_32;
  maskPanel = EventExpeditionMaster__GetEntity(v30, currentEventId, *((_DWORD *)maskPanel + 5), v31);
  if ( !*v22 )
    goto LABEL_32;
  v32 = (EventExpeditionEntity_o *)maskPanel;
  switch ( (*v22)->fields.dispMode )
  {
    case 0:
      goto LABEL_25;
    case 1:
    case 2:
      if ( EventExpeditionListViewManager__CheckEventEnd(this, v15) )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          v33 = SoundManager_TypeInfo;
LABEL_23:
          j_il2cpp_runtime_class_init_0(v33);
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
        sub_B2C434(maskPanel, v15);
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v39 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_B2C42C(ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v39,
        (Il2CppObject *)v13,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( !expeditionConfirmDialog )
        goto LABEL_32;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v32, 1, v39, 1, 0, 0LL);
      return;
    case 3:
      v33 = SoundManager_TypeInfo;
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
      if ( !EventExpeditionListViewManager__CheckServant(v34, v35) )
        goto LABEL_25;
      v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v36,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v36 )
        goto LABEL_32;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v36,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v36,
        v37);
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

  if ( (byte_418A3AD & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A3AD = 1;
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

  if ( (byte_418A39E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A39E = 1;
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
          sub_B2C434(0LL, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v11; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418A39D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v5);
    sub_B2C35C(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__, v8);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v9);
    byte_418A39D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventExpeditionListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B2C434(0LL, v11);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v18.fields.current;
      v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v15, v16);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v14, v17);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  __int64 v12; // x1
  struct ExpeditionAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionConfirmDialog_k__BackingField; // x21
  struct ExpeditionConfirmDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  struct ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  struct ExpeditionAssetManager_o *v25; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionRewardDialog_k__BackingField; // x21
  struct ExpeditionRewardDialogComponent_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  struct ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  struct ExpeditionAssetManager_o *v37; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionPointRewardDialog_k__BackingField; // x21
  struct ExpeditionPointRewardDialogComponent_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v48; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionStart_k__BackingField; // x20
  struct BitExpeditionStartComponent_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v58; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v60; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionFinish_k__BackingField; // x20
  struct BitExpeditionFinishComponent_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UnityEngine_GameObject_o *v69; // x1
  const MethodInfo *v70; // x2

  if ( (byte_418A399 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418A399 = 1;
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
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_59;
    Component_srcLineSprite = (struct ExpeditionConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v11,
                                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.expeditionConfirmDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v22);
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
    v25 = this->fields.assetManager;
    if ( !v25 )
      goto LABEL_59;
    expeditionRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v25->fields._expeditionRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionRewardDialog_k__BackingField,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_59;
    v27 = (struct ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v11,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = v27;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.expeditionRewardDialog,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v34);
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
    v37 = this->fields.assetManager;
    if ( !v37 )
      goto LABEL_59;
    expeditionPointRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v37->fields._expeditionPointRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionPointRewardDialog_k__BackingField,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_59;
    v39 = (struct ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v11,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = v39;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.expeditionPointRewardDialog,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v46);
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
    v48 = this->fields.assetManager;
    if ( !v48 )
      goto LABEL_59;
    bitExpeditionStart_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v48->fields._bitExpeditionStart_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        bitExpeditionStart_k__BackingField,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_59;
    v50 = (struct BitExpeditionStartComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v11,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = v50;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.bitExpeditionStart,
      (System_Int32_array **)v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    v11 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v11 )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v58);
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
    v60 = this->fields.assetManager;
    if ( v60 )
    {
      bitExpeditionFinish_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v60->fields._bitExpeditionFinish_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          bitExpeditionFinish_k__BackingField,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v11 )
      {
        v62 = (struct BitExpeditionFinishComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v11,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = v62;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.bitExpeditionFinish,
          (System_Int32_array **)v62,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
        v11 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v11 )
        {
          v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v69, v70);
          return;
        }
      }
    }
LABEL_59:
    sub_B2C434(v11, v12);
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
  sub_B2C2F8(
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x10

  if ( (byte_418A39C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6);
    sub_B2C35C(&EventExpeditionListViewObject_TypeInfo, v7);
    byte_418A39C = 1;
  }
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v12 = *(&EventExpeditionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[v12 - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_B2C434(v9, v10);
  }
  EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)obj, v8, v11);
}


void __fastcall EventExpeditionListViewManager__StartResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_418A3A7 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, result);
    byte_418A3A7 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager__UpdateButtonDisp(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v5; // x8

  if ( (byte_418A3AC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_418A3AC = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_B2C434(0LL, method);
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_17006/*"btn_on"*/;
  else
    v5 = &StringLiteral_17005/*"btn_off"*/;
  UISprite__set_spriteName(expeditionNoticeBtnSp, (System_String_o *)*v5, 0LL);
}


void __fastcall EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x8

  if ( (byte_418A39F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A39F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      0LL)) == 0LL
    || (v7 = Instance, (Instance = (DataManager_o *)this->fields.expeditionNoticeNumber) == 0LL)
    || (NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, (int32_t)v7->fields.datalist, 0LL),
        (Instance = (DataManager_o *)this->fields.completeBtn) == 0LL) )
  {
    sub_B2C434(Instance, v6);
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
  struct UITouchPress_o *v8; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_418A3AF & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&EventDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v5);
    byte_418A3AF = 1;
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
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v8 = this->fields.touchPanel) == 0LL) )
  {
LABEL_13:
    sub_B2C434(maskPanel, method);
  }
  onClick = v8->fields.onClick;
  v10 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29727552(onClick, v10, v11);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_int__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  v2 = this;
  if ( (byte_418A3B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    this = (EventExpeditionListViewManager_o *)sub_B2C35C(
                                                 &System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                 v6);
    byte_418A3B1 = 1;
  }
  touchPanel = v2->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_11;
  this = (EventExpeditionListViewManager_o *)touchPanel->fields.onClick;
  if ( !this )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
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
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  v2->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v2->fields.SelectPieceIdxList = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.SelectPieceIdxList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this = (EventExpeditionListViewManager_o *)v2->fields.bitExpeditionStart;
  if ( !this
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_11:
    sub_B2C434(this, method);
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
  if ( (byte_418A3B0 & 1) == 0 )
  {
    this = (EventExpeditionListViewManager_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_EventDelegate__Clear__,
                                                 method);
    byte_418A3B0 = 1;
  }
  touchPanel = v2->fields.touchPanel;
  if ( !touchPanel
    || (this = (EventExpeditionListViewManager_o *)touchPanel->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (this = (EventExpeditionListViewManager_o *)v2->fields.touchPanel) == 0LL)
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (EventExpeditionListViewManager_o *)v2->fields.bitExpeditionStart) == 0LL) )
  {
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight(hakkenshiInfo, 0LL);
}


System_Collections_Generic_List_EventExpeditionListViewObject__o *__fastcall EventExpeditionListViewManager__get_ObjectList(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418A398 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A398 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventExpeditionListViewObject__o *)v11;
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
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v16; // x20
  EventExpeditionListViewManager___c_c *v17; // x8
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__48_0; // x21
  Il2CppObject *v20; // x22
  struct EventExpeditionListViewManager___c_StaticFields *v21; // x0
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x21
  struct System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x21
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  struct System_Collections_Generic_List_int__o *v25; // x22
  EventExpeditionEntity_o *v26; // x21
  int32_t v27; // w22
  System_Action_o *v28; // x23
  System_Action_o *v29; // x24

  v2 = this;
  if ( (byte_4184AD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventExpeditionListViewObject___ctor__, method);
    sub_B2C35C(&System_Action_EventExpeditionListViewObject__TypeInfo, v3);
    sub_B2C35C(&System_Action_TypeInfo, v4);
    sub_B2C35C(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__, v5);
    sub_B2C35C(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v9);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__, v10);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_B2C35C(
                                                                         &EventExpeditionListViewManager___c_TypeInfo,
                                                                         v11);
    byte_4184AD5 = 1;
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
    v16 = this;
    v17 = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v17 = EventExpeditionListViewManager___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventExpeditionListViewObject__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__48_0,
        v20,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_EventExpeditionListViewObject___ctor__);
      v21 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v21->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      sub_B2C2F8(&v21->__9__48_0, _9__48_0);
    }
    if ( !v16 )
      goto LABEL_33;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v16,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    EventExpeditionListViewManager__SetCallBack(_4__this, 0LL);
    SelectPieceIdxList = _4__this->fields.SelectPieceIdxList;
    if ( !SelectPieceIdxList )
      goto LABEL_33;
    if ( !SelectPieceIdxList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v25 = _4__this->fields.SelectPieceIdxList;
    if ( !v25 )
      goto LABEL_33;
    v26 = selectEventExpeditionEntityList->fields._items->m_Items[0];
    if ( !v25->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v27 = v25->fields._items->m_Items[1];
    v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
      0LL);
    v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
      0LL);
    if ( !bitExpeditionStart )
LABEL_33:
      sub_B2C434(this, method);
    BitExpeditionStartComponent__SetUp(bitExpeditionStart, v26, v27, v28, v29, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B2C2F8(p__2__current, 0LL);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184AC6 & 1) == 0 )
  {
    sub_B2C35C(&EventExpeditionListViewManager___c_TypeInfo, v1);
    byte_4184AC6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventExpeditionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v9; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4184AC7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__, v5);
    sub_B2C35C(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, v6);
    byte_4184AC7 = 1;
  }
  v7 = sub_B2C42C(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
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
  __int64 v9; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4184AC8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__, v5);
    sub_B2C35C(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, v6);
    byte_4184AC8 = 1;
  }
  v7 = sub_B2C42C(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
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
  __int64 v9; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4184AC9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__, v5);
    sub_B2C35C(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, v6);
    byte_4184AC9 = 1;
  }
  v7 = sub_B2C42C(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (EventExpeditionListViewManager___c_o *)EventExpeditionListViewObject__GetItem(x, 0LL)) == 0LL )
    sub_B2C434(this, x);
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
  if ( (byte_4184ACA & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_16986/*"btn_completecheck_bg"*/, v4);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_B2C35C(&StringLiteral_5768/*"EXPEDITION_COMP_BTN_LABEL"*/, v5);
    byte_4184ACA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  eventId = v2->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_28451336(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_16986/*"btn_completecheck_bg"*/,
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
                                                                     (System_String_o *)StringLiteral_5768/*"EXPEDITION_COMP_BTN_LABEL"*/,
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
    sub_B2C434(this, method);
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
  SceneJumpInfo_o *v8; // x20
  AvalonSceneManager_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4184ACB & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v4);
    sub_B2C35C(&StringLiteral_12707/*"ServantCombine"*/, v5);
    byte_4184ACB = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292968(v8, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B2C434(v9, v10);
    case 1:
      v9 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v9, v11, 1, v12, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v8, (System_String_o *)StringLiteral_12707/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_12:
        v9 = (AvalonSceneManager_o *)Instance;
        v12 = (Il2CppObject *)v8;
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
  SceneJumpInfo_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4184ACC & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12711/*"ServantEquipList"*/, v4);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v5);
    sub_B2C35C(&StringLiteral_12710/*"ServantEQCombine"*/, v6);
    byte_4184ACC = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292968(v9, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v9, (System_String_o *)StringLiteral_12711/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B2C434(v10, v11);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v9, (System_String_o *)StringLiteral_12710/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v12, 1, (Il2CppObject *)v9, 0LL);
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
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4184ACD & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v4);
    byte_4184ACD = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17292968(v6, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B2C434(v7, v8);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v6, 0LL);
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
    sub_B2C434(_4__this, isDecide);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v12; // x8
  Il2CppClass *resultEventRewardInfos; // x1
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  BattleDropItem_array **v15; // x22
  struct EventExpeditionListViewManager_resData_array *v16; // x8
  EventExpeditionListViewManager_resData_o *v17; // x9
  struct EventExpeditionListViewManager_o *_4__this; // x8
  BattleDropItem_array *v19; // x20
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x24
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x25
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x27
  UserGameEntity_array *oldUserGame; // x22
  System_Action_bool__o *v25; // x26
  System_Action_o *closeCallback; // x27
  __int64 v27; // x0

  if ( (byte_4184ACE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&System_Action_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_SetActive__, v5);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__, v6);
    sub_B2C35C(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, v7);
    byte_4184ACE = 1;
  }
  v8 = (Il2CppObject *)sub_B2C42C(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  v8[1].monitor = this;
  sub_B2C2F8(&v8[1].monitor, this);
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
        v8[1].klass = resultEventRewardInfos,
        v15 = (BattleDropItem_array **)&v8[1],
        sub_B2C2F8(&v8[1], resultEventRewardInfos),
        (v16 = this->fields.res) == 0LL) )
  {
LABEL_14:
    sub_B2C434(v9, v10);
  }
  if ( !v16->max_length )
  {
LABEL_15:
    v27 = sub_B2C460(v9);
    sub_B2C400(v27, 0LL);
  }
  v17 = v16->m_Items[0];
  if ( !v17 )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v19 = *v15;
  if ( !*v15 )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  oldUserGame = v17->fields.oldUserGame;
  v25 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v25,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  closeCallback = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    v8,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0LL);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v19,
    oldUserGame,
    currentEventId,
    v19->max_length != 0,
    v25,
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
    sub_B2C434(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppClass *klass; // x20
  void *monitor; // x8
  struct System_Action_o *_9__2; // x22
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x21
  __int64 v12; // x8
  __int64 v13; // x9
  int32_t v14; // w22
  Il2CppObject *v15; // x25
  EventExpeditionEntity_o *v16; // x23
  System_Action_bool__o *v17; // x24
  System_Action_o *v18; // x25

  v2 = (Il2CppObject *)this;
  if ( (byte_4184ACF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&System_Action_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_SetActive__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v6);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_B2C35C(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
                                                                       v7);
    byte_4184ACF = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v12 = *((_QWORD *)monitor + 4);
      if ( v12 )
      {
        v13 = *(_QWORD *)&_9__2->fields.method_ptr;
        v14 = *(_DWORD *)(v12 + 408);
        v15 = *(Il2CppObject **)(v12 + 384);
        v16 = *(EventExpeditionEntity_o **)(v13 + 32);
        v17 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v17,
          v15,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
        v18 = (System_Action_o *)v2[2].klass;
        if ( !v18 )
        {
          v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v18,
            v2,
            Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
            0LL);
          v2[2].klass = (Il2CppClass *)v18;
          sub_B2C2F8(&v2[2], v18);
        }
        if ( CS___8__locals1 )
        {
          ExpeditionPointRewardDialogComponent__Open(
            (ExpeditionPointRewardDialogComponent_o *)CS___8__locals1,
            v16,
            (BattleDropItem_array *)klass,
            v14,
            v17,
            v18,
            0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B2C434(this, method);
  }
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *CS___8__locals1; // x21
  Il2CppClass *klass; // x8
  System_Action_T1__T2__T3__o *methodPtr; // x19
  Il2CppObject *p_obj; // x20
  System_Action_o *monitor; // x22

  v2 = this;
  if ( (byte_4184AD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_B2C35C(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
                                                                       v4);
    byte_4184AD0 = 1;
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
    monitor = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0LL);
    CS___8__locals1[2].monitor = monitor;
    sub_B2C2F8(&CS___8__locals1[2].monitor, monitor);
  }
  if ( !methodPtr )
LABEL_9:
    sub_B2C434(this, method);
  System_Action_object__int__object___Invoke(
    methodPtr,
    p_obj,
    0,
    (Il2CppObject *)monitor,
    (const MethodInfo_24CBE88 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
  struct EventExpeditionListViewManager_o *v9; // x8
  struct UITouchPress_o *v10; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  __int64 _9__3; // x21
  __int64 v13; // x9

  v2 = this;
  if ( (byte_4184AD1 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&EventDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v4);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_B2C35C(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
                                                                       v5);
    byte_4184AD1 = 1;
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
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v9 = v2->fields.__4__this) == 0LL)
    || (v10 = v9->fields.touchPanel) == 0LL )
  {
LABEL_17:
    sub_B2C434(this, method);
  }
  onClick = v10->fields.onClick;
  _9__3 = (__int64)v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = sub_B2C42C(EventDelegate_Callback_TypeInfo);
    v13 = *(_QWORD *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
    *(_QWORD *)(_9__3 + 40) = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
    *(_QWORD *)(_9__3 + 16) = v13;
    *(_QWORD *)(_9__3 + 32) = v2;
    sub_B2C2F8(_9__3 + 32, v2);
    v2->fields.__9__3 = (struct EventDelegate_Callback_o *)_9__3;
    sub_B2C2F8(&v2->fields.__9__3, _9__3);
  }
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29727552(onClick, (EventDelegate_Callback_o *)_9__3, 0LL);
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
  __int64 v9; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct UITouchPress_o *touchPanel; // x8
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  struct EventExpeditionListViewManager_o *v13; // x8

  if ( (byte_4184AD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__, v7);
    byte_4184AD2 = 1;
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
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B2C2F8(&this->fields.__9__4, _9__4);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  onClick = NetworkManager__getRequest_WarBoardWallAttackRequest_(
              _9__4,
              (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v13 = this->fields.__4__this;
  if ( !v13 || !onClick )
LABEL_17:
    sub_B2C434(onClick, v9);
  EventExpeditionFinishRequest__beginRequest(
    (EventExpeditionFinishRequest_o *)onClick,
    v13->fields.currentEventId,
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
  if ( (byte_4184AD3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_B2C35C(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
                                                                       v5);
    byte_4184AD3 = 1;
  }
  klass = (System_Action_o *)v4[2].klass;
  v7 = (EventExpeditionListViewManager_o *)v4[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v4,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0LL);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v4[2], klass);
  }
  if ( !v7 )
    sub_B2C434(this, result);
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
  __int64 v9; // x1
  struct EventExpeditionListViewManager_o *v10; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_4184AD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    byte_4184AD4 = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, 0LL), (v7 = this->fields.__4__this) == 0LL)
    || (_4__this = (EventExpeditionListViewManager_o *)v7->fields.SelectPieceIdxList) == 0LL )
  {
    sub_B2C434(_4__this, method);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v12; ; HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields.current, 1, 0LL) )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &i,
           (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    v10 = this->fields.__4__this;
    if ( !v10 )
      sub_B2C434(v8, v9);
    hakkenshiInfo = v10->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_B2C434(0LL, v9);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_B2C434(this, x);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void __fastcall EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}