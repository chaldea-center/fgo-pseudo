void __fastcall EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_int__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EB1F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v11, v12, v13);
    byte_42EB1F0 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.SelectPieceIdxList = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v21,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB1E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    byte_42EB1E6 = 1;
  }
  entity = 0LL;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_17:
    sub_B5D69C(Master_WarQuestSelectionMaster, v15);
  return (__int64)Master_WarQuestSelectionMaster >= *(_QWORD *)&entity->fields.eventId;
}


bool __fastcall EventExpeditionListViewManager__CheckServant(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v33; // x1
  UserServantMaster_o *v34; // x19
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  CommonUI_o *v36; // x19
  int32_t v37; // w20
  int32_t svtKeep; // w21
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__40_0; // x22
  Il2CppObject *v41; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CommonUI_o *v49; // x0
  int32_t v50; // w1
  int32_t v51; // w2
  int32_t v52; // w3
  CommonUI_o *v53; // x19
  int32_t v54; // w20
  int32_t svtEquipKeep; // w21
  struct EventExpeditionListViewManager___c_StaticFields *v56; // x8
  Il2CppObject *v57; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int32_t Count; // w19
  int v66; // w2
  __int64 v67; // x3
  CommonUI_o *v68; // x20
  BalanceConfig_c *v69; // x8
  struct EventExpeditionListViewManager___c_StaticFields *v70; // x8
  Il2CppObject *v71; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB1E2 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__, v19, v20, v21);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__, v22, v23, v24);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__, v25, v26, v27);
    sub_B5D5C4(&EventExpeditionListViewManager___c_TypeInfo, v28, v29, v30);
    byte_42EB1E2 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v34 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v34, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v36 = (CommonUI_o *)Instance;
      v37 = servantEquipSum[1];
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
        v41 = (Il2CppObject *)static_fields->__9;
        _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__40_0,
          v41,
          Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
          0LL);
        v42 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
        v42->__9__40_0 = _9__40_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v42->__9__40_0,
          (System_Int32_array **)_9__40_0,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      if ( v36 )
      {
        v49 = v36;
        v50 = v37;
        v51 = svtKeep;
        v52 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B5D69C(Instance, v33);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v34, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v53 = (CommonUI_o *)Instance;
    v54 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v56 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v56->__9__40_1;
    if ( !_9__40_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v56 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)v56->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v57,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0LL);
      v58 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v58->__9__40_1 = _9__40_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v58->__9__40_1,
        (System_Int32_array **)_9__40_0,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
    if ( !v53 )
      goto LABEL_53;
    v52 = 1;
    v49 = v53;
    v50 = v54;
  }
  else
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(MasterData_WarQuestSelectionMaster, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v68 = (CommonUI_o *)Instance;
    if ( !byte_42E4B73 )
    {
      sub_B5D5C4(&BalanceConfig_TypeInfo, v33, v66, v67);
      byte_42E4B73 = 1;
    }
    v69 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v69 = BalanceConfig_TypeInfo;
    }
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v69->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v70 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v70->__9__40_4;
    if ( !_9__40_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v70 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v71 = (Il2CppObject *)v70->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v71,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0LL);
      v72 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v72->__9__40_4 = _9__40_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v72->__9__40_4,
        (System_Int32_array **)_9__40_0,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    if ( !v68 )
      goto LABEL_53;
    v52 = 2;
    v49 = v68;
    v50 = Count;
  }
  v51 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v49, v50, v51, v52, 1, _9__40_0, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
  return 0;
}


System_Collections_IEnumerator_o *__fastcall EventExpeditionListViewManager__CoWaitEffectPlay(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB1EA & 1) == 0 )
  {
    sub_B5D5C4(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB1EA = 1;
  }
  v5 = sub_B5D694(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48___ctor(
    (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall EventExpeditionListViewManager__CreateList(
        EventExpeditionListViewManager_o *this,
        EventExpeditionEntity_array *evExpeditionEntList,
        int32_t eventId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v17; // x1
  signed int max_length; // w8
  unsigned int v19; // w27
  EventExpeditionEntity_o *v20; // x22
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v23; // x26
  EventExpeditionListViewItem_o *v24; // x23
  const MethodInfo *v25; // x6
  __int64 v26; // x0

  if ( (byte_42EB1DD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)evExpeditionEntList, eventId, method);
    sub_B5D5C4(&EventExpeditionListViewItem_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13, v14, v15);
    byte_42EB1DD = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !evExpeditionEntList )
    goto LABEL_11;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        v26 = sub_B5D6C8(itemList);
        sub_B5D668(v26, 0LL);
      }
      v20 = evExpeditionEntList->m_Items[v19];
      if ( !v20 )
        break;
      idx = v20->fields.idx;
      assetManager = this->fields.assetManager;
      v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v23,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0LL);
      v24 = (EventExpeditionListViewItem_o *)sub_B5D694(EventExpeditionListViewItem_TypeInfo);
      EventExpeditionListViewItem___ctor(v24, idx, v20, eventId, assetManager, v23, v25);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_10;
    }
LABEL_11:
    sub_B5D69C(itemList, v17);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x20
  UnityEngine_Component_o *touchPanel; // x0
  __int64 v30; // x1
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
  Il2CppObject *v43; // x21
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  System_Action_o *v52; // x21

  if ( (byte_42EB1EB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)animFinishCallback, method);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___, v7, v8, v9);
    sub_B5D5C4(&JsonManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__, v13, v14, v15);
    sub_B5D5C4(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v25, v26, v27);
    byte_42EB1EB = 1;
  }
  v28 = sub_B5D694(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass49_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass49_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_12;
  *(_QWORD *)(v28 + 16) = animFinishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v28 + 16),
    (System_Int32_array **)animFinishCallback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  *(_QWORD *)(v28 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)this, v37, v38, v39, v40, v41, v42);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    return;
  v43 = (Il2CppObject *)System_String__Concat_44580072(
                          (System_String_o *)StringLiteral_15824/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16061/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v44 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v43,
                                 (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v28 + 24) = v44;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 24), v44, v45, v46, v47, v48, v49, v50);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v52,
          (Il2CppObject *)v28,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_12:
    sub_B5D69C(touchPanel, v30);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v52, 0LL);
}


void __fastcall EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_int__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v30; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_42EB1EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v11, v12, v13);
    byte_42EB1EC = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.SelectPieceIdxList = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v21,
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
    sub_B5D69C(bitExpeditionFinish, v28);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0LL);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v30);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x20
  System_String_o *touchPanel; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t v41; // w8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UILabel_o *expeditionNoticeLb; // x21
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  ExpeditionAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x19
  ExpeditionAssetManager_o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int32_t v66; // w19
  System_Action_o *v67; // x22

  if ( (byte_42EB1DC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)evExpeditionEntList, eventId, expeditionCallback);
    sub_B5D5C4(&ExpeditionAssetManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__, v17, v18, v19);
    sub_B5D5C4(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5860/*"EXPEDITION_PUSH_BTN_LABEL"*/, v23, v24, v25);
    byte_42EB1DC = 1;
  }
  v26 = sub_B5D694(EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass32_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_14;
  *(_DWORD *)(v26 + 16) = eventId;
  *(_QWORD *)(v26 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 32) = evExpeditionEntList;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v26 + 32),
    (System_Int32_array **)evExpeditionEntList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = *(_DWORD *)(v26 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.expeditionCallback,
    (System_Int32_array **)expeditionCallback,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.requestCallBack = requestCallBack;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0LL);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_5860/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0LL);
  if ( !expeditionNoticeLb )
    goto LABEL_14;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v55);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v56);
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
    v59 = (ExpeditionAssetManager_o *)sub_B5D694(ExpeditionAssetManager_TypeInfo);
    ExpeditionAssetManager___ctor(v59, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v59;
    sub_B5D560(p_assetManager, (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
    assetManager = (ExpeditionAssetManager_o *)p_assetManager->klass;
  }
  v66 = *(_DWORD *)(v26 + 16);
  v67 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v67,
    (Il2CppObject *)v26,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_14:
    sub_B5D69C(touchPanel, v28);
  ExpeditionAssetManager__GetAssets(assetManager, v66, v67, 0LL);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventExpeditionListViewObject__o *ObjectList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB1E4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v11, v12, v13);
    byte_42EB1E4 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ObjectList = EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B5D69C(0LL, v15);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v17.fields.current,
      v16);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionObj(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  v5 = (Il2CppObject *)this;
  if ( (byte_42EB1E5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    this = (EventExpeditionListViewManager_o *)sub_B5D5C4(
                                                 &Method_EventExpeditionListViewManager_OnMoveEnd__,
                                                 v6,
                                                 v7,
                                                 v8);
    byte_42EB1E5 = 1;
  }
  if ( !obj
    || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_B5D69C(this, obj);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)obj);
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, v5, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
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
    sub_B5D69C(this, obj);
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
    sub_B5D69C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickCompleteButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v40; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x20
  Il2CppObject *current; // x25
  WebViewManager_o *v43; // x0
  __int64 v44; // x1
  EventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x4
  _BOOL8 v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-60h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_42EB1E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventExpeditionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&SoundManager_TypeInfo, v35, v36, v37);
    byte_42EB1E3 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                (UserEventExpeditionMaster_o *)Instance,
                                this->fields.currentEventId,
                                0LL);
  if ( !Instance )
    goto LABEL_25;
  v40 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance;
  if ( SLODWORD(Instance->fields.datalist) < 1
    || !EventExpeditionListViewManager__CheckServant((EventExpeditionListViewManager_o *)Instance, v39) )
  {
    goto LABEL_17;
  }
  Instance = (DataManager_o *)this->fields.maskPanel;
  if ( !Instance )
LABEL_25:
    sub_B5D69C(Instance, v39);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    v40,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v52.fields.current;
    v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v43 )
      sub_B5D69C(0LL, v44);
    MasterData_WarQuestSelectionMaster = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)v43,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_B5D69C(MasterData_WarQuestSelectionMaster, v46);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v46);
    v48 = EventExpeditionMaster__TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            v47);
    if ( !v41 )
      sub_B5D69C(v48, v49);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v41,
      (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v41,
    v50);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  __int64 v68; // x21
  int64_t Instance; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v84; // x22
  __int64 v85; // x0
  __int64 v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **current; // x1
  __int64 v94; // x0
  __int64 v95; // x1
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Collections_Generic_List_int__o *SelectPieceIdxList; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v98; // x25
  WarBoardData_SquareRangeSearch_o *v99; // x0
  __int64 v100; // x1
  EventExpeditionListViewManager___c_c *v101; // x0
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__51_0; // x22
  Il2CppObject *v104; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x0
  System_Int32_array **v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  const MethodInfo *v120; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v122; // x19
  System_Action_o *v123; // x22
  System_Collections_Generic_List_Enumerator_T__o v125; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v126; // [xsp+30h] [xbp-70h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42EB1ED & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)eventExpeditionEntities, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_EventExpeditionEntity__int___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_ExpeditionInfo__bool___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Func_EventExpeditionEntity__int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Func_ExpeditionInfo__bool__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__, v41, v42, v43);
    sub_B5D5C4(&NetworkManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__, v50, v51, v52);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__, v53, v54, v55);
    sub_B5D5C4(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__, v59, v60, v61);
    sub_B5D5C4(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&EventExpeditionListViewManager___c_TypeInfo, v65, v66, v67);
    byte_42EB1ED = 1;
  }
  entity = 0LL;
  memset(&v126, 0, sizeof(v126));
  v68 = sub_B5D694(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass51_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass51_0_o *)v68,
    0LL);
  if ( !v68 )
    goto LABEL_33;
  *(_QWORD *)(v68 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v68 + 16), (System_Int32_array **)this, v71, v72, v73, v74, v75, v76);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)eventExpeditionEntities,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
    &v125,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventExpeditionEntities,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v126 = v125;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v126,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v84 = sub_B5D694(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    EventExpeditionListViewManager___c__DisplayClass51_1___ctor(
      (EventExpeditionListViewManager___c__DisplayClass51_1_o *)v84,
      0LL);
    if ( !v84 )
      sub_B5D69C(v85, v86);
    current = (System_Int32_array **)v126.fields.current;
    *(_QWORD *)(v84 + 16) = v126.fields.current;
    sub_B5D560((BattleServantConfConponent_o *)(v84 + 16), current, v87, v88, v89, v90, v91, v92);
    if ( !entity )
      sub_B5D69C(v94, v95);
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    v98 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ExpeditionInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v98,
      (Il2CppObject *)v84,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_ExpeditionInfo__bool___ctor__);
    v99 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v98,
            (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v99 )
      sub_B5D69C(0LL, v100);
    if ( !SelectPieceIdxList )
      sub_B5D69C(v99, v100);
    System_Collections_Generic_List_int___Add(
      SelectPieceIdxList,
      v99->fields.range,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v126,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v101 = EventExpeditionListViewManager___c_TypeInfo;
  if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
    v101 = EventExpeditionListViewManager___c_TypeInfo;
  }
  static_fields = v101->static_fields;
  _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v101->vtable._0_Equals.methodPtr) & 4) != 0 && !v101->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v101);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    }
    v104 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__51_0,
      v104,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_EventExpeditionEntity__int___ctor__);
    v105 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    v105->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v105->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
  }
  v112 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                                                                (System_Func_TSource__TResult__o *)_9__51_0,
                                                                (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v113 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                  v112,
                                  (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v68 + 24) = v113;
  sub_B5D560((BattleServantConfConponent_o *)(v68 + 24), v113, v114, v115, v116, v117, v118, v119);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v120);
  Instance = (int64_t)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v122 = this->fields.SelectPieceIdxList,
        v123 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v123,
          (Il2CppObject *)v68,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_33:
    sub_B5D69C(Instance, v70);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v122, v123, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__OnClickDecide(
        EventExpeditionListViewManager_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *selectEventExpeditionEntityList; // x0
  NetworkManager_ResultCallbackFunc_o *v25; // x22
  const MethodInfo *v26; // x4

  if ( (byte_42EB1E8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_EventExpeditionListViewManager_StartResponse__,
      isDecide,
      (_DWORD)eventExpeditionEntity,
      *(_QWORD *)&pieceIdx);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    byte_42EB1E8 = 1;
  }
  if ( isDecide )
  {
    selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.selectEventExpeditionEntityList;
    if ( selectEventExpeditionEntityList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        selectEventExpeditionEntityList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)eventExpeditionEntity,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.SelectPieceIdxList;
      if ( selectEventExpeditionEntityList )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)selectEventExpeditionEntityList,
          pieceIdx,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
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
            v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v25,
              (Il2CppObject *)this,
              Method_EventExpeditionListViewManager_StartResponse__,
              0LL);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            selectEventExpeditionEntityList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(v25, (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
            if ( eventExpeditionEntity )
            {
              if ( selectEventExpeditionEntityList )
              {
                EventExpeditionStartRequest__beginRequest(
                  (EventExpeditionStartRequest_o *)selectEventExpeditionEntityList,
                  this->fields.currentEventId,
                  eventExpeditionEntity->fields.idx,
                  pieceIdx,
                  v26);
                return;
              }
            }
          }
        }
      }
    }
LABEL_16:
    sub_B5D69C(selectEventExpeditionEntityList, isDecide);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x20
  void *maskPanel; // x0
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  EventExpeditionListViewObject_o **v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v47; // x21
  const MethodInfo *v48; // x3
  EventExpeditionEntity_o *v49; // x21
  SoundManager_c *v50; // x0
  EventExpeditionListViewManager_o *v51; // x0
  const MethodInfo *v52; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x20
  const MethodInfo *v54; // x2
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v56; // x22

  if ( (byte_42EB1E7 & 1) == 0 )
  {
    sub_B5D5C4(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&SoundManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v24, v25, v26);
    sub_B5D5C4(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, v27, v28, v29);
    byte_42EB1E7 = 1;
  }
  v30 = sub_B5D694(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass45_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass45_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_32;
  *(_QWORD *)(v30 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 24) = obj;
  v39 = (EventExpeditionListViewObject_o **)(v30 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 24), (System_Int32_array **)obj, v40, v41, v42, v43, v44, v45);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  maskPanel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_32;
  maskPanel = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v39 )
    goto LABEL_32;
  currentEventId = this->fields.currentEventId;
  v47 = (EventExpeditionMaster_o *)maskPanel;
  maskPanel = EventExpeditionListViewObject__GetItem(*v39, v32);
  if ( !maskPanel )
    goto LABEL_32;
  if ( !v47 )
    goto LABEL_32;
  maskPanel = EventExpeditionMaster__GetEntity(v47, currentEventId, *((_DWORD *)maskPanel + 5), v48);
  if ( !*v39 )
    goto LABEL_32;
  v49 = (EventExpeditionEntity_o *)maskPanel;
  switch ( (*v39)->fields.dispMode )
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
          v50 = SoundManager_TypeInfo;
LABEL_23:
          j_il2cpp_runtime_class_init_0(v50);
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
        sub_B5D69C(maskPanel, v32);
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v56 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_B5D694(ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v56,
        (Il2CppObject *)v30,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( !expeditionConfirmDialog )
        goto LABEL_32;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v49, 1, v56, 1, 0, 0LL);
      return;
    case 3:
      v50 = SoundManager_TypeInfo;
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
      if ( !EventExpeditionListViewManager__CheckServant(v51, v52) )
        goto LABEL_25;
      v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v53,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v53 )
        goto LABEL_32;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v53,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v53,
        v54);
      return;
    default:
      return;
  }
}


void __fastcall EventExpeditionListViewManager__OnClickNoticeButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 isButtonOn; // w9
  int32_t v6; // w0
  const MethodInfo *v7; // x1

  if ( (byte_42EB1EF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB1EF = 1;
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
    v6 = 1;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v6 = 0;
  }
  SoundManager__playSystemSe(v6, 0LL);
  EventRewardSaveData__SetExpeditionNotification(this->fields.isButtonOn, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v7);
}


void __fastcall EventExpeditionListViewManager__OnMoveEnd(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_42EB1E0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB1E0 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_B5D69C(0LL, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v27; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EB1DF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_EventExpeditionListViewManager_OnMoveEnd__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v23, v24, v25);
    byte_42EB1DF = 1;
  }
  memset(&v34, 0, sizeof(v34));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventExpeditionListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B5D69C(0LL, v27);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v34.fields.current;
      v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v31, v32);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v30, v33);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *expeditionConfirmDialog; // x21
  struct ExpeditionConfirmDialogComponent_o **p_expeditionConfirmDialog; // x20
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  struct ExpeditionAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionConfirmDialog_k__BackingField; // x21
  struct ExpeditionConfirmDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  struct ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  struct ExpeditionAssetManager_o *v39; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionRewardDialog_k__BackingField; // x21
  struct ExpeditionRewardDialogComponent_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  struct ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  struct ExpeditionAssetManager_o *v51; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionPointRewardDialog_k__BackingField; // x21
  struct ExpeditionPointRewardDialogComponent_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v62; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionStart_k__BackingField; // x20
  struct BitExpeditionStartComponent_o *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v72; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v74; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionFinish_k__BackingField; // x20
  struct BitExpeditionFinishComponent_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  UnityEngine_GameObject_o *v83; // x1
  const MethodInfo *v84; // x2

  if ( (byte_42EB1DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EB1DB = 1;
  }
  expeditionConfirmDialog = (UnityEngine_Object_o *)this->fields.expeditionConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionConfirmDialog = &this->fields.expeditionConfirmDialog;
  v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v25 & 1) != 0 )
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
    v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionConfirmDialog_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v25 )
      goto LABEL_59;
    Component_srcLineSprite = (struct ExpeditionConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v25,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.expeditionConfirmDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v36);
  }
  v25 = (UnityEngine_GameObject_o *)*p_expeditionConfirmDialog;
  if ( !*p_expeditionConfirmDialog )
    goto LABEL_59;
  ExpeditionConfirmDialogComponent__Init((ExpeditionConfirmDialogComponent_o *)v25, this->fields.currentEventId, 0LL);
  expeditionRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionRewardDialog = &this->fields.expeditionRewardDialog;
  v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v25 & 1) != 0 )
  {
    v39 = this->fields.assetManager;
    if ( !v39 )
      goto LABEL_59;
    expeditionRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v39->fields._expeditionRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionRewardDialog_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v25 )
      goto LABEL_59;
    v41 = (struct ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v25,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = v41;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.expeditionRewardDialog,
      (System_Int32_array **)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v48);
  }
  v25 = (UnityEngine_GameObject_o *)*p_expeditionRewardDialog;
  if ( !*p_expeditionRewardDialog )
    goto LABEL_59;
  ExpeditionRewardDialogComponent__Init((ExpeditionRewardDialogComponent_o *)v25, 0LL);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionPointRewardDialog = &this->fields.expeditionPointRewardDialog;
  v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v25 & 1) != 0 )
  {
    v51 = this->fields.assetManager;
    if ( !v51 )
      goto LABEL_59;
    expeditionPointRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v51->fields._expeditionPointRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionPointRewardDialog_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v25 )
      goto LABEL_59;
    v53 = (struct ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v25,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = v53;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.expeditionPointRewardDialog,
      (System_Int32_array **)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v60);
  }
  v25 = (UnityEngine_GameObject_o *)*p_expeditionPointRewardDialog;
  if ( !*p_expeditionPointRewardDialog )
    goto LABEL_59;
  ExpeditionPointRewardDialogComponent__Init((ExpeditionPointRewardDialogComponent_o *)v25, 0LL);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionStart, 0LL, 0LL);
  if ( ((unsigned __int8)v25 & 1) != 0 )
  {
    v62 = this->fields.assetManager;
    if ( !v62 )
      goto LABEL_59;
    bitExpeditionStart_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v62->fields._bitExpeditionStart_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        bitExpeditionStart_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v25 )
      goto LABEL_59;
    v64 = (struct BitExpeditionStartComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v25,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = v64;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.bitExpeditionStart,
      (System_Int32_array **)v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    v25 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v25 )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v72);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionFinish, 0LL, 0LL);
  if ( ((unsigned __int8)v25 & 1) != 0 )
  {
    v74 = this->fields.assetManager;
    if ( v74 )
    {
      bitExpeditionFinish_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v74->fields._bitExpeditionFinish_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          bitExpeditionFinish_k__BackingField,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v25 )
      {
        v76 = (struct BitExpeditionFinishComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v25,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = v76;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.bitExpeditionFinish,
          (System_Int32_array **)v76,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82);
        v25 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v25 )
        {
          v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v83, v84);
          return;
        }
      }
    }
LABEL_59:
    sub_B5D69C(v25, v26);
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
  sub_B5D560(
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x10

  if ( (byte_42EB1DE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)item, method);
    sub_B5D5C4(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6, v7, v8);
    sub_B5D5C4(&EventExpeditionListViewObject_TypeInfo, v9, v10, v11);
    byte_42EB1DE = 1;
  }
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v16 = *(&EventExpeditionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v16)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[v16 - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_B5D69C(v13, v14);
  }
  EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)obj, v12, v15);
}


void __fastcall EventExpeditionListViewManager__StartResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_42EB1E9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42EB1E9 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    v7 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager__UpdateButtonDisp(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v9; // x8

  if ( (byte_42EB1EE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42EB1EE = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_B5D69C(0LL, method);
  if ( this->fields.isButtonOn )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UISprite__set_spriteName(expeditionNoticeBtnSp, (System_String_o *)*v9, 0LL);
}


void __fastcall EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataManager_o *v13; // x8

  if ( (byte_42EB1E1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB1E1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      0LL)) == 0LL
    || (v13 = Instance, (Instance = (DataManager_o *)this->fields.expeditionNoticeNumber) == 0LL)
    || (NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, (int32_t)v13->fields.datalist, 0LL),
        (Instance = (DataManager_o *)this->fields.completeBtn) == 0LL) )
  {
    sub_B5D69C(Instance, v12);
  }
  ((void (*)(void))Instance->klass[1]._1.namespaze)();
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_1(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *maskPanel; // x0
  struct UITouchPress_o *touchPanel; // x8
  struct UITouchPress_o *v16; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_42EB1F1 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v11, v12, v13);
    byte_42EB1F1 = 1;
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
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v16 = this->fields.touchPanel) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(maskPanel, method);
  }
  onClick = v16->fields.onClick;
  v18 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v18,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29826436(onClick, v18, v19);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_2(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventExpeditionListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct UITouchPress_o *touchPanel; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  v4 = this;
  if ( (byte_42EB1F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    this = (EventExpeditionListViewManager_o *)sub_B5D5C4(
                                                 &System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                 v14,
                                                 v15,
                                                 v16);
    byte_42EB1F3 = 1;
  }
  touchPanel = v4->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_11;
  this = (EventExpeditionListViewManager_o *)touchPanel->fields.onClick;
  if ( !this )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
  this = (EventExpeditionListViewManager_o *)v4->fields.touchPanel;
  if ( !this )
    goto LABEL_11;
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (EventExpeditionListViewManager_o *)v4->fields.maskPanel;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  v4->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v4->fields.SelectPieceIdxList = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.SelectPieceIdxList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this = (EventExpeditionListViewManager_o *)v4->fields.bitExpeditionStart;
  if ( !this
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_11:
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_3(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventExpeditionListViewManager_o *v4; // x19
  struct UITouchPress_o *touchPanel; // x8

  v4 = this;
  if ( (byte_42EB1F2 & 1) == 0 )
  {
    this = (EventExpeditionListViewManager_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_EventDelegate__Clear__,
                                                 (_DWORD)method,
                                                 v2,
                                                 v3);
    byte_42EB1F2 = 1;
  }
  touchPanel = v4->fields.touchPanel;
  if ( !touchPanel
    || (this = (EventExpeditionListViewManager_o *)touchPanel->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (this = (EventExpeditionListViewManager_o *)v4->fields.touchPanel) == 0LL)
    || (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (EventExpeditionListViewManager_o *)v4->fields.bitExpeditionStart) == 0LL) )
  {
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight(hakkenshiInfo, 0LL);
}


System_Collections_Generic_List_EventExpeditionListViewObject__o *__fastcall EventExpeditionListViewManager__get_ObjectList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB1DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB1DA = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventExpeditionListViewObject__o *)v29;
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
  int v2; // w2
  __int64 v3; // x3
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct EventExpeditionListViewManager_o *_4__this; // x19
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v36; // x20
  EventExpeditionListViewManager___c_c *v37; // x8
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__48_0; // x21
  Il2CppObject *v40; // x22
  struct EventExpeditionListViewManager___c_StaticFields *v41; // x0
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x21
  struct System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x21
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  struct System_Collections_Generic_List_int__o *v45; // x22
  EventExpeditionEntity_o *v46; // x21
  int32_t v47; // w22
  System_Action_o *v48; // x23
  System_Action_o *v49; // x24

  v4 = this;
  if ( (byte_42E6508 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventExpeditionListViewObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_EventExpeditionListViewObject__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__, v11, v12, v13);
    sub_B5D5C4(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v23, v24, v25);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__, v26, v27, v28);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_B5D5C4(
                                                                         &EventExpeditionListViewManager___c_TypeInfo,
                                                                         v29,
                                                                         v30,
                                                                         v31);
    byte_42E6508 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_33;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)EventExpeditionListViewManager__get_ObjectList(
                                                                         _4__this,
                                                                         0LL);
    v36 = this;
    v37 = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v37 = EventExpeditionListViewManager___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventExpeditionListViewObject__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__48_0,
        v40,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        (const MethodInfo_258B320 *)Method_System_Action_EventExpeditionListViewObject___ctor__);
      v41 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v41->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      sub_B5D560(&v41->__9__48_0);
    }
    if ( !v36 )
      goto LABEL_33;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v36,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    EventExpeditionListViewManager__SetCallBack(_4__this, 0LL);
    SelectPieceIdxList = _4__this->fields.SelectPieceIdxList;
    if ( !SelectPieceIdxList )
      goto LABEL_33;
    if ( !SelectPieceIdxList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v45 = _4__this->fields.SelectPieceIdxList;
    if ( !v45 )
      goto LABEL_33;
    v46 = selectEventExpeditionEntityList->fields._items->m_Items[0];
    if ( !v45->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v47 = v45->fields._items->m_Items[1];
    v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v48,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
      0LL);
    v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v49,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
      0LL);
    if ( !bitExpeditionStart )
LABEL_33:
      sub_B5D69C(this, method);
    BitExpeditionStartComponent__SetUp(bitExpeditionStart, v46, v47, v48, v49, 0LL);
  }
  else if ( !_1__state )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = &v4->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E64F9 & 1) == 0 )
  {
    sub_B5D5C4(&EventExpeditionListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E64F9 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventExpeditionListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E64FA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__, v8, v9, v10);
    sub_B5D5C4(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, v11, v12, v13);
    byte_42E64FA = 1;
  }
  v14 = sub_B5D694(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_1(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E64FB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__, v8, v9, v10);
    sub_B5D5C4(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, v11, v12, v13);
    byte_42E64FB = 1;
  }
  v14 = sub_B5D694(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_4(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E64FC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__, v8, v9, v10);
    sub_B5D5C4(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, v11, v12, v13);
    byte_42E64FC = 1;
  }
  v14 = sub_B5D694(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (EventExpeditionListViewManager___c_o *)EventExpeditionListViewObject__GetItem(x, 0LL)) == 0LL )
    sub_B5D69C(this, x);
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  EventExpeditionListViewManager___c__DisplayClass32_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct EventExpeditionListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *completeBtnSp; // x21
  struct EventExpeditionListViewManager_o *v17; // x8
  UILabel_o *completeBtnLb; // x20
  struct EventExpeditionListViewManager_o *v19; // x8

  v4 = this;
  if ( (byte_42E64FD & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17195/*"btn_completecheck_bg"*/, v8, v9, v10);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_B5D5C4(&StringLiteral_5845/*"EXPEDITION_COMP_BTN_LABEL"*/, v11, v12, v13);
    byte_42E64FD = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  eventId = v4->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_31190412(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_17195/*"btn_completecheck_bg"*/,
                                                                     0LL);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_18;
  completeBtnLb = v17->fields.completeBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_5845/*"EXPEDITION_COMP_BTN_LABEL"*/,
                                                                     0LL);
  if ( !completeBtnLb )
    goto LABEL_18;
  UILabel__set_text(completeBtnLb, (System_String_o *)this, 0LL);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v4->fields.__4__this;
  if ( !this
    || (EventExpeditionListViewManager__SetExpeditionObject((EventExpeditionListViewManager_o *)this, 0LL),
        (v19 = v4->fields.__4__this) == 0LL)
    || (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v19->fields.hakkenshiInfo) == 0LL
    || (HakkenshiListController__CreateHakkenshiWindow(
          (HakkenshiListController_o *)this,
          v4->fields.eventId,
          v19->fields.assetManager,
          0LL),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v4->fields.__4__this) == 0LL)
    || (EventExpeditionListViewManager__CreateList(
          (EventExpeditionListViewManager_o *)this,
          v4->fields.evExpeditionEntList,
          v4->fields.eventId,
          0LL),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v16; // x20
  AvalonSceneManager_o *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w1
  Il2CppObject *v20; // x3

  if ( (byte_42E64FE & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12858/*"ServantCombine"*/, v11, v12, v13);
    byte_42E64FE = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v16 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17509080(v16, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v19 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B5D69C(v17, v18);
    case 1:
      v17 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v17 )
      {
        v19 = 71;
        v20 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v17, v19, 1, v20, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v16 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v16, (System_String_o *)StringLiteral_12858/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v19 = 32;
LABEL_12:
        v17 = (AvalonSceneManager_o *)Instance;
        v20 = (Il2CppObject *)v16;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t result; // w8
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w1

  if ( (byte_42E64FF & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12862/*"ServantEquipList"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12861/*"ServantEQCombine"*/, v14, v15, v16);
    byte_42E64FF = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17509080(v19, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v22 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v19, (System_String_o *)StringLiteral_12862/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v22 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B5D69C(v20, v21);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v19, (System_String_o *)StringLiteral_12861/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v22 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v22, 1, (Il2CppObject *)v19, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E6500 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v8, v9, v10);
    byte_42E6500 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v12 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17509080(v12, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B5D69C(v13, v14);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v12, 0LL);
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
    sub_B5D69C(_4__this, isDecide);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  Il2CppObject *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v24; // x8
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  BattleDropItem_array **v26; // x22
  struct EventExpeditionListViewManager_resData_array *v27; // x8
  EventExpeditionListViewManager_resData_o *v28; // x9
  struct EventExpeditionListViewManager_o *_4__this; // x8
  BattleDropItem_array *v30; // x20
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x24
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x25
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x27
  UserGameEntity_array *oldUserGame; // x22
  System_Action_bool__o *v36; // x26
  System_Action_o *closeCallback; // x27
  __int64 v38; // x0

  if ( (byte_42E6501 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_SetActive__, v11, v12, v13);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__, v14, v15, v16);
    sub_B5D5C4(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, v17, v18, v19);
    byte_42E6501 = 1;
  }
  v20 = (Il2CppObject *)sub_B5D694(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_14;
  v20[1].monitor = this;
  sub_B5D560(&v20[1].monitor);
  ActionExtensions__Call(this->fields.animFinishCallback, 0LL);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !res->max_length )
    goto LABEL_15;
  v24 = res->m_Items[0];
  if ( !v24
    || (resultExpeditionRewardInfos = v24->fields.resultExpeditionRewardInfos,
        v20[1].klass = (Il2CppClass *)v24->fields.resultEventRewardInfos,
        v26 = (BattleDropItem_array **)&v20[1],
        sub_B5D560(&v20[1]),
        (v27 = this->fields.res) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(v21, v22);
  }
  if ( !v27->max_length )
  {
LABEL_15:
    v38 = sub_B5D6C8(v21);
    sub_B5D668(v38, 0LL);
  }
  v28 = v27->m_Items[0];
  if ( !v28 )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v30 = *v26;
  if ( !*v26 )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  oldUserGame = v28->fields.oldUserGame;
  v36 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v36,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  closeCallback = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    v20,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0LL);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v30,
    oldUserGame,
    currentEventId,
    v30->max_length != 0,
    v36,
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  Il2CppClass *klass; // x20
  void *monitor; // x8
  struct System_Action_o *_9__2; // x22
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x21
  __int64 v24; // x8
  __int64 v25; // x9
  int32_t v26; // w22
  Il2CppObject *v27; // x25
  EventExpeditionEntity_o *v28; // x23
  System_Action_bool__o *v29; // x24
  System_Action_o *v30; // x25

  v4 = (Il2CppObject *)this;
  if ( (byte_42E6502 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_SetActive__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v14, v15, v16);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_B5D5C4(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
                                                                       v17,
                                                                       v18,
                                                                       v19);
    byte_42E6502 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_16;
  monitor = v4[1].monitor;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v24 = *((_QWORD *)monitor + 4);
      if ( v24 )
      {
        v25 = *(_QWORD *)&_9__2->fields.method_ptr;
        v26 = *(_DWORD *)(v24 + 408);
        v27 = *(Il2CppObject **)(v24 + 384);
        v28 = *(EventExpeditionEntity_o **)(v25 + 32);
        v29 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v29,
          v27,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
        v30 = (System_Action_o *)v4[2].klass;
        if ( !v30 )
        {
          v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v30,
            v4,
            Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
            0LL);
          v4[2].klass = (Il2CppClass *)v30;
          sub_B5D560(&v4[2]);
        }
        if ( CS___8__locals1 )
        {
          ExpeditionPointRewardDialogComponent__Open(
            (ExpeditionPointRewardDialogComponent_o *)CS___8__locals1,
            v28,
            (BattleDropItem_array *)klass,
            v26,
            v29,
            v30,
            0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B5D69C(this, method);
  }
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *CS___8__locals1; // x21
  Il2CppClass *klass; // x8
  System_Action_T1__T2__T3__o *methodPtr; // x19
  Il2CppObject *p_obj; // x20
  System_Action_o *monitor; // x22

  v4 = this;
  if ( (byte_42E6503 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleDropItem____int__Action__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_B5D5C4(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
                                                                       v8,
                                                                       v9,
                                                                       v10);
    byte_42E6503 = 1;
  }
  CS___8__locals1 = (Il2CppObject *)v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  klass = CS___8__locals1[2].klass;
  if ( !klass )
    goto LABEL_9;
  methodPtr = (System_Action_T1__T2__T3__o *)klass->vtable[6].methodPtr;
  p_obj = &v4->fields.resultEventRewardInfos->obj;
  monitor = (System_Action_o *)CS___8__locals1[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0LL);
    CS___8__locals1[2].monitor = monitor;
    sub_B5D560(&CS___8__locals1[2].monitor);
  }
  if ( !methodPtr )
LABEL_9:
    sub_B5D69C(this, method);
  System_Action_object__int__object___Invoke(
    methodPtr,
    p_obj,
    0,
    (Il2CppObject *)monitor,
    (const MethodInfo_259B6D0 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
  int v2; // w2
  __int64 v3; // x3
  EventExpeditionListViewManager___c__DisplayClass51_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct EventExpeditionListViewManager_o *v15; // x8
  struct UITouchPress_o *touchPanel; // x8
  struct EventExpeditionListViewManager_o *v17; // x8
  struct UITouchPress_o *v18; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  __int64 _9__3; // x21
  __int64 v21; // x9

  v4 = this;
  if ( (byte_42E6504 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8, v9, v10);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_B5D5C4(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
                                                                       v11,
                                                                       v12,
                                                                       v13);
    byte_42E6504 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)_4__this->fields.touchPanel;
  if ( !this )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v15 = v4->fields.__4__this) == 0LL)
    || (touchPanel = v15->fields.touchPanel) == 0LL
    || (this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)touchPanel->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v17 = v4->fields.__4__this) == 0LL)
    || (v18 = v17->fields.touchPanel) == 0LL )
  {
LABEL_17:
    sub_B5D69C(this, method);
  }
  onClick = v18->fields.onClick;
  _9__3 = (__int64)v4->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = sub_B5D694(EventDelegate_Callback_TypeInfo);
    v21 = *(_QWORD *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
    *(_QWORD *)(_9__3 + 40) = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
    *(_QWORD *)(_9__3 + 16) = v21;
    *(_QWORD *)(_9__3 + 32) = v4;
    sub_B5D560(_9__3 + 32);
    v4->fields.__9__3 = (struct EventDelegate_Callback_o *)_9__3;
    sub_B5D560(&v4->fields.__9__3);
  }
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29826436(onClick, (EventDelegate_Callback_o *)_9__3, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__3(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  WarBoardWallAttackRequest_o *onClick; // x0
  __int64 v21; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct UITouchPress_o *touchPanel; // x8
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  struct EventExpeditionListViewManager_o *v25; // x8

  if ( (byte_42E6505 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__, v17, v18, v19);
    byte_42E6505 = 1;
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
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B5D560(&this->fields.__9__4);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  onClick = NetworkManager__getRequest_WarBoardWallAttackRequest_(
              _9__4,
              (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v25 = this->fields.__4__this;
  if ( !v25 || !onClick )
LABEL_17:
    sub_B5D69C(onClick, v21);
  EventExpeditionFinishRequest__beginRequest(
    (EventExpeditionFinishRequest_o *)onClick,
    v25->fields.currentEventId,
    this->fields.idxList,
    0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__4(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *klass; // x22
  EventExpeditionListViewManager_o *v10; // x21

  v5 = (Il2CppObject *)this;
  if ( (byte_42E6506 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_B5D5C4(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
                                                                       v6,
                                                                       v7,
                                                                       v8);
    byte_42E6506 = 1;
  }
  klass = (System_Action_o *)v5[2].klass;
  v10 = (EventExpeditionListViewManager_o *)v5[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v5,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0LL);
    v5[2].klass = (Il2CppClass *)klass;
    sub_B5D560(&v5[2]);
  }
  if ( !v10 )
    sub_B5D69C(this, result);
  EventExpeditionListViewManager__FinishResponse(v10, result, klass, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__5(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  EventExpeditionListViewManager_o *_4__this; // x0
  struct EventExpeditionListViewManager_o *v15; // x8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct EventExpeditionListViewManager_o *v18; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_42E6507 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11, v12, v13);
    byte_42E6507 = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, 0LL), (v15 = this->fields.__4__this) == 0LL)
    || (_4__this = (EventExpeditionListViewManager_o *)v15->fields.SelectPieceIdxList) == 0LL )
  {
    sub_B5D69C(_4__this, method);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v20; ; HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields.current, 1, 0LL) )
  {
    v16 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v16 )
      break;
    v18 = this->fields.__4__this;
    if ( !v18 )
      sub_B5D69C(v16, v17);
    hakkenshiInfo = v18->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_B5D69C(0LL, v17);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_B5D69C(this, x);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void __fastcall EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}