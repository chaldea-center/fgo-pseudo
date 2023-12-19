void __fastcall EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_int__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FC677 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v8);
    byte_40FC677 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  int64_t Time; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC66D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    byte_40FC66D = 1;
  }
  entity = 0LL;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_17:
    sub_B170D4();
  return Time >= *(_QWORD *)&entity->fields.eventId;
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v14; // x19
  WebViewManager_o *v15; // x0
  UserCommandCodeMaster_o *v16; // x20
  WebViewManager_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  CommonUI_o *v22; // x19
  int32_t v23; // w20
  int32_t svtKeep; // w21
  EventExpeditionListViewManager___c_c *v25; // x0
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__40_0; // x22
  Il2CppObject *v28; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  CommonUI_o *v36; // x0
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  WebViewManager_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  CommonUI_o *v45; // x19
  int32_t v46; // w20
  int32_t svtEquipKeep; // w21
  EventExpeditionListViewManager___c_c *v48; // x0
  struct EventExpeditionListViewManager___c_StaticFields *v49; // x8
  Il2CppObject *v50; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t Count; // w19
  WebViewManager_o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  CommonUI_o *v64; // x20
  BalanceConfig_c *v65; // x8
  EventExpeditionListViewManager___c_c *v66; // x0
  struct EventExpeditionListViewManager___c_StaticFields *v67; // x8
  Il2CppObject *v68; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  ServantAssetLoadManager_o *v76; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC669 & 1) == 0 )
  {
    sub_B16FFC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__, v7);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__, v8);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__, v9);
    sub_B16FFC(&EventExpeditionListViewManager___c_TypeInfo, v10);
    byte_40FC669 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_53;
  v14 = MasterData_WarQuestSelectionMaster;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_53;
  v16 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v15,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v14, 1, 0LL) )
  {
    v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v22 = (CommonUI_o *)v17;
      v23 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      v25 = EventExpeditionListViewManager___c_TypeInfo;
      if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
        v25 = EventExpeditionListViewManager___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__40_0 = static_fields->__9__40_0;
      if ( !_9__40_0 )
      {
        if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                     ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                     v18,
                                                                     v19,
                                                                     v20,
                                                                     v21);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__40_0,
          v28,
          Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
          0LL);
        v29 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
        v29->__9__40_0 = _9__40_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v29->__9__40_0,
          (System_Int32_array **)_9__40_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      if ( v22 )
      {
        v36 = v22;
        v37 = v23;
        v38 = svtKeep;
        v39 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B170D4();
  }
  if ( UserServantMaster__CheckEquipAdd(v14, 1, 1, 0LL) )
  {
    v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v45 = (CommonUI_o *)v40;
    v46 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    v48 = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v48 = EventExpeditionListViewManager___c_TypeInfo;
    }
    v49 = v48->static_fields;
    _9__40_0 = v49->__9__40_1;
    if ( !_9__40_0 )
    {
      if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v49 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)v49->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                   ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                   v41,
                                                                   v42,
                                                                   v43,
                                                                   v44);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v50,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0LL);
      v51 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v51->__9__40_1 = _9__40_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v51->__9__40_1,
        (System_Int32_array **)_9__40_0,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    if ( !v45 )
      goto LABEL_53;
    v39 = 1;
    v36 = v45;
    v37 = v46;
  }
  else
  {
    if ( !v16 )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(v16, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(v16, 0LL);
    v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v64 = (CommonUI_o *)v59;
    if ( !byte_40F6094 )
    {
      sub_B16FFC(&BalanceConfig_TypeInfo, v60);
      byte_40F6094 = 1;
    }
    v65 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v65 = BalanceConfig_TypeInfo;
    }
    v66 = EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v65->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v66 = EventExpeditionListViewManager___c_TypeInfo;
    }
    v67 = v66->static_fields;
    _9__40_0 = v67->__9__40_4;
    if ( !_9__40_0 )
    {
      if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        v67 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v68 = (Il2CppObject *)v67->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                   ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                   v60,
                                                                   v61,
                                                                   v62,
                                                                   v63);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v68,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0LL);
      v69 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v69->__9__40_4 = _9__40_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v69->__9__40_4,
        (System_Int32_array **)_9__40_0,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    if ( !v64 )
      goto LABEL_53;
    v39 = 2;
    v36 = v64;
    v37 = Count;
  }
  v38 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v36, v37, v38, v39, 1, _9__40_0, 1, 0LL);
  v76 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !v76 )
    goto LABEL_53;
  ServantAssetLoadManager__EndRetryTransition(v76, 0LL);
  return 0;
}


System_Collections_IEnumerator_o *__fastcall EventExpeditionListViewManager__CoWaitEffectPlay(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC671 & 1) == 0 )
  {
    sub_B16FFC(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method);
    byte_40FC671 = 1;
  }
  v6 = sub_B170CC(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method, v2, v3, v4);
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48___ctor(
    (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  signed int max_length; // w8
  unsigned int v16; // w27
  EventExpeditionEntity_o *v17; // x22
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v20; // x26
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  EventExpeditionListViewItem_o *v25; // x23
  const MethodInfo *v26; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0

  if ( (byte_40FC664 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, evExpeditionEntList);
    sub_B16FFC(&EventExpeditionListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    byte_40FC664 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !evExpeditionEntList )
    goto LABEL_11;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v17 = evExpeditionEntList->m_Items[v16];
      if ( !v17 )
        break;
      idx = v17->fields.idx;
      assetManager = this->fields.assetManager;
      v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
      System_Action___ctor(
        v20,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0LL);
      v25 = (EventExpeditionListViewItem_o *)sub_B170CC(EventExpeditionListViewItem_TypeInfo, v21, v22, v23, v24);
      EventExpeditionListViewItem___ctor(v25, idx, v17, eventId, assetManager, v20, v26);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
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
  UnityEngine_Component_o *touchPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x21

  if ( (byte_40FC672 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___, v8);
    sub_B16FFC(&JsonManager_TypeInfo, v9);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__, v10);
    sub_B16FFC(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_20980, v12);
    sub_B16FFC(&StringLiteral_15571, v13);
    sub_B16FFC(&StringLiteral_15807, v14);
    byte_40FC672 = 1;
  }
  v15 = sub_B170CC(
          EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo,
          result,
          animFinishCallback,
          method,
          v4);
  EventExpeditionListViewManager___c__DisplayClass49_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass49_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = animFinishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v15 + 16),
    (System_Int32_array **)animFinishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v15 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL) )
    return;
  v28 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571,
                          result,
                          (System_String_o *)StringLiteral_15807,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v29 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v28,
                                 (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v15 + 24) = v29;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), v29, v30, v31, v32, v33, v34, v35);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (gameObject = UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42),
        System_Action___ctor(
          v43,
          (Il2CppObject *)v15,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_12:
    sub_B170D4();
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v43, 0LL);
}


void __fastcall EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_int__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_40FC673 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v8);
    byte_40FC673 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish || (gameObject = UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v29);
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
  int32_t v29; // w8
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UILabel_o *expeditionNoticeLb; // x21
  System_String_o *v43; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  UnityEngine_Component_o *touchPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  ExpeditionAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x19
  ExpeditionAssetManager_o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t v61; // w19
  System_Action_o *v62; // x22

  if ( (byte_40FC663 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, evExpeditionEntList);
    sub_B16FFC(&ExpeditionAssetManager_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__, v13);
    sub_B16FFC(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_5766, v15);
    byte_40FC663 = 1;
  }
  v16 = sub_B170CC(
          EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo,
          evExpeditionEntList,
          *(_QWORD *)&eventId,
          expeditionCallback,
          requestCallBack);
  EventExpeditionListViewManager___c__DisplayClass32_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_DWORD *)(v16 + 16) = eventId;
  *(_QWORD *)(v16 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 32) = evExpeditionEntList;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v16 + 32),
    (System_Int32_array **)evExpeditionEntList,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = *(_DWORD *)(v16 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.expeditionCallback,
    (System_Int32_array **)expeditionCallback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.requestCallBack = requestCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0LL);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5766, 0LL);
  if ( !expeditionNoticeLb )
    goto LABEL_14;
  UILabel__set_text(expeditionNoticeLb, v43, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v44);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v45);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(touchPanel, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
    v54 = (ExpeditionAssetManager_o *)sub_B170CC(ExpeditionAssetManager_TypeInfo, v48, v49, v50, v51);
    ExpeditionAssetManager___ctor(v54, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v54;
    sub_B16F98(p_assetManager, (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
    assetManager = (ExpeditionAssetManager_o *)p_assetManager->klass;
  }
  v61 = *(_DWORD *)(v16 + 16);
  v62 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(
    v62,
    (Il2CppObject *)v16,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_14:
    sub_B170D4();
  ExpeditionAssetManager__GetAssets(assetManager, v61, v62, 0LL);
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

  if ( (byte_40FC66B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v5);
    byte_40FC66B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  ObjectList = EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v8.fields.current,
      v7);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionObj(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventExpeditionListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_40FC66C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_EventExpeditionListViewManager_OnMoveEnd__, v5);
    byte_40FC66C = 1;
  }
  if ( !obj || (Item = EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
    sub_B170D4();
  EventExpeditionListViewItem__CheckExpeditionCondition(Item, v7);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  EventExpeditionListViewObject__Init(obj, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__LocateDialogToExpeditionObj(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x0

  if ( !obj )
    goto LABEL_7;
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v7 = UnityEngine_GameObject__get_transform(gameObject, 0LL), !transform)
    || (UnityEngine_Transform__SetParent(transform, v7, 0LL),
        v8 = UnityEngine_GameObject__get_transform(obj, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_one(0LL),
        !v8)
    || (UnityEngine_Transform__set_localScale(v8, *(UnityEngine_Vector3_o *)&v9, 0LL),
        (v12 = UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v12, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
        EventExpeditionListViewManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x0

  if ( !dialog )
    goto LABEL_7;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v7 = UnityEngine_GameObject__get_transform(gameObject, 0LL), !transform)
    || (UnityEngine_Transform__SetParent(transform, v7, 0LL),
        v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_one(0LL),
        !v8)
    || (UnityEngine_Transform__set_localScale(v8, *(UnityEngine_Vector3_o *)&v9, 0LL),
        (v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v12, 0, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_ExpeditionInfo__o *CompleteExpeditionInfoList; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v18; // x21
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  Il2CppObject *current; // x25
  WebViewManager_o *v26; // x0
  EventExpeditionMaster_o *v27; // x0
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x2
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-60h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_40FC66A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventExpeditionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    byte_40FC66A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  CompleteExpeditionInfoList = UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                 MasterData_WarQuestSelectionMaster,
                                 this->fields.currentEventId,
                                 0LL);
  if ( !CompleteExpeditionInfoList )
    goto LABEL_25;
  v18 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CompleteExpeditionInfoList;
  if ( CompleteExpeditionInfoList->fields._size < 1
    || !EventExpeditionListViewManager__CheckServant(
          (EventExpeditionListViewManager_o *)CompleteExpeditionInfoList,
          v17) )
  {
    goto LABEL_17;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
LABEL_25:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    v18,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v31.fields.current;
    v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v26 )
      sub_B170D4();
    v27 = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v26,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_B170D4();
    if ( !v27 )
      sub_B170D4();
    EventExpeditionMaster__TryGetEntity(v27, &entity, this->fields.currentEventId, (int32_t)current[1].klass, v28);
    if ( !v24 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v24,
      (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v24,
    v29);
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
  __int64 v4; // x4
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x21
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
  WebViewManager_o *Instance; // x0
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **current; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Collections_Generic_List_int__o *SelectPieceIdxList; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v61; // x25
  WarBoardData_SquareRangeSearch_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  EventExpeditionListViewManager___c_c *v67; // x0
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__51_0; // x22
  Il2CppObject *v70; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  const MethodInfo *v86; // x1
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BitExpeditionFinishComponent_o *v89; // x20
  System_Collections_Generic_List_int__o *v90; // x19
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Action_o *v95; // x22
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+30h] [xbp-70h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FC674 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, eventExpeditionEntities);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__, v12);
    sub_B16FFC(&Method_System_Func_EventExpeditionEntity__int___ctor__, v13);
    sub_B16FFC(&Method_System_Func_ExpeditionInfo__bool___ctor__, v14);
    sub_B16FFC(&System_Func_EventExpeditionEntity__int__TypeInfo, v15);
    sub_B16FFC(&System_Func_ExpeditionInfo__bool__TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__, v18);
    sub_B16FFC(&NetworkManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__, v21);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__, v22);
    sub_B16FFC(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, v23);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__, v24);
    sub_B16FFC(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v25);
    sub_B16FFC(&EventExpeditionListViewManager___c_TypeInfo, v26);
    byte_40FC674 = 1;
  }
  entity = 0LL;
  memset(&v98, 0, sizeof(v98));
  v27 = sub_B170CC(
          EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo,
          eventExpeditionEntities,
          method,
          v3,
          v4);
  EventExpeditionListViewManager___c__DisplayClass51_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass51_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_33;
  *(_QWORD *)(v27 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)eventExpeditionEntities,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  UserEventExpeditionMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    UserId,
    this->fields.currentEventId,
    0LL);
  if ( !eventExpeditionEntities )
    goto LABEL_33;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v97,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventExpeditionEntities,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v98 = v97;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v98,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v47 = sub_B170CC(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v43, v44, v45, v46);
    EventExpeditionListViewManager___c__DisplayClass51_1___ctor(
      (EventExpeditionListViewManager___c__DisplayClass51_1_o *)v47,
      0LL);
    if ( !v47 )
      sub_B170D4();
    current = (System_Int32_array **)v98.fields.current;
    *(_QWORD *)(v47 + 16) = v98.fields.current;
    sub_B16F98((BattleServantConfConponent_o *)(v47 + 16), current, v48, v49, v50, v51, v52, v53);
    if ( !entity )
      sub_B170D4();
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    v61 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_ExpeditionInfo__bool__TypeInfo,
                                                                               v55,
                                                                               v56,
                                                                               v57,
                                                                               v58);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v61,
      (Il2CppObject *)v47,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_ExpeditionInfo__bool___ctor__);
    v62 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v61,
            (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v62 )
      sub_B170D4();
    if ( !SelectPieceIdxList )
      sub_B170D4();
    System_Collections_Generic_List_int___Add(
      SelectPieceIdxList,
      v62->fields.range,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v98,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v67 = EventExpeditionListViewManager___c_TypeInfo;
  if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
    v67 = EventExpeditionListViewManager___c_TypeInfo;
  }
  static_fields = v67->static_fields;
  _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_EventExpeditionEntity__int__TypeInfo,
                                                                                 v63,
                                                                                 v64,
                                                                                 v65,
                                                                                 v66);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__51_0,
      v70,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_EventExpeditionEntity__int___ctor__);
    v71 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    v71->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v71->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                                                               (System_Func_TSource__TResult__o *)_9__51_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v79 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                 v78,
                                 (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v27 + 24) = v79;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 24), v79, v80, v81, v82, v83, v84, v85);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v86);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (gameObject = UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        v89 = this->fields.bitExpeditionFinish,
        v90 = this->fields.SelectPieceIdxList,
        v95 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v91, v92, v93, v94),
        System_Action___ctor(
          v95,
          (Il2CppObject *)v27,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0LL),
        !v89) )
  {
LABEL_33:
    sub_B170D4();
  }
  BitExpeditionFinishComponent__SetUp(v89, v90, v95, 0LL, 0LL);
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
  struct System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x0
  System_Collections_Generic_List_int__o *SelectPieceIdxList; // x0
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x0
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  NetworkManager_ResultCallbackFunc_o *v22; // x22
  EventExpeditionStartRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v24; // x4
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_40FC66F & 1) == 0 )
  {
    sub_B16FFC(&Method_EventExpeditionListViewManager_StartResponse__, isDecide);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    byte_40FC66F = 1;
  }
  if ( isDecide )
  {
    selectEventExpeditionEntityList = this->fields.selectEventExpeditionEntityList;
    if ( selectEventExpeditionEntityList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)selectEventExpeditionEntityList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)eventExpeditionEntity,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      SelectPieceIdxList = this->fields.SelectPieceIdxList;
      if ( SelectPieceIdxList )
      {
        System_Collections_Generic_List_int___Add(
          SelectPieceIdxList,
          pieceIdx,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
        if ( expeditionConfirmDialog )
        {
          ExpeditionConfirmDialogComponent__Close(expeditionConfirmDialog, 0LL);
          maskPanel = this->fields.maskPanel;
          if ( maskPanel )
          {
            UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
            v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                           NetworkManager_ResultCallbackFunc_TypeInfo,
                                                           v18,
                                                           v19,
                                                           v20,
                                                           v21);
            NetworkManager_ResultCallbackFunc___ctor(
              v22,
              (Il2CppObject *)this,
              Method_EventExpeditionListViewManager_StartResponse__,
              0LL);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Request_WarBoardWallAttackRequest = (EventExpeditionStartRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                   v22,
                                                                                   (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
            if ( eventExpeditionEntity )
            {
              if ( Request_WarBoardWallAttackRequest )
              {
                EventExpeditionStartRequest__beginRequest(
                  Request_WarBoardWallAttackRequest,
                  this->fields.currentEventId,
                  eventExpeditionEntity->fields.idx,
                  pieceIdx,
                  v24);
                return;
              }
            }
          }
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
  v25 = this->fields.maskPanel;
  if ( !v25 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v25, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickListView(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
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
  UnityEngine_GameObject_o *maskPanel; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v32; // x1
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v34; // x21
  EventExpeditionListViewItem_o *Item; // x0
  const MethodInfo *v36; // x3
  EventExpeditionEntity_o *Entity; // x0
  const MethodInfo *v38; // x1
  EventExpeditionEntity_o *v39; // x21
  SoundManager_c *v40; // x0
  EventExpeditionListViewManager_o *v41; // x0
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x20
  const MethodInfo *v48; // x2
  UnityEngine_GameObject_o *v49; // x0
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v55; // x22

  if ( (byte_40FC66E & 1) == 0 )
  {
    sub_B16FFC(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v13);
    sub_B16FFC(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, v14);
    byte_40FC66E = 1;
  }
  v15 = sub_B170CC(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, obj, method, v3, v4);
  EventExpeditionListViewManager___c__DisplayClass45_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass45_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_32;
  *(_QWORD *)(v15 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 24) = obj;
  v22 = (EventExpeditionListViewObject_o **)(v15 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)obj, v23, v24, v25, v26, v27, v28);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v22 )
    goto LABEL_32;
  currentEventId = this->fields.currentEventId;
  v34 = (EventExpeditionMaster_o *)MasterData_WarQuestSelectionMaster;
  Item = EventExpeditionListViewObject__GetItem(*v22, v32);
  if ( !Item )
    goto LABEL_32;
  if ( !v34 )
    goto LABEL_32;
  Entity = EventExpeditionMaster__GetEntity(v34, currentEventId, Item->fields.index, v36);
  if ( !*v22 )
    goto LABEL_32;
  v39 = Entity;
  switch ( (*v22)->fields.dispMode )
  {
    case 0:
      goto LABEL_25;
    case 1:
    case 2:
      if ( EventExpeditionListViewManager__CheckEventEnd(this, v38) )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          v40 = SoundManager_TypeInfo;
LABEL_23:
          j_il2cpp_runtime_class_init_0(v40);
        }
LABEL_24:
        SoundManager__playSystemSe(2, 0LL);
LABEL_25:
        v49 = this->fields.maskPanel;
        if ( v49 )
        {
          UnityEngine_GameObject__SetActive(v49, 0, 0LL);
          return;
        }
LABEL_32:
        sub_B170D4();
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v55 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_B170CC(
                                                                  ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo,
                                                                  v51,
                                                                  v52,
                                                                  v53,
                                                                  v54);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v55,
        (Il2CppObject *)v15,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( !expeditionConfirmDialog )
        goto LABEL_32;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v39, 1, v55, 1, 0, 0LL);
      return;
    case 3:
      v40 = SoundManager_TypeInfo;
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
      if ( !EventExpeditionListViewManager__CheckServant(v41, v42) )
        goto LABEL_25;
      v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v43, v44, v45, v46);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v47,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v47 )
        goto LABEL_32;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v47,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v47,
        v48);
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

  if ( (byte_40FC676 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC676 = 1;
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

  if ( (byte_40FC667 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC667 = 1;
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
          sub_B170D4();
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
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *current; // x20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FC666 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v5);
    sub_B16FFC(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__, v8);
    sub_B16FFC(&StringLiteral_10004, v9);
    byte_40FC666 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventExpeditionListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v17, v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  ExpeditionConfirmDialogComponent_o **p_expeditionConfirmDialog; // x20
  struct ExpeditionAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionConfirmDialog_k__BackingField; // x21
  UnityEngine_GameObject_o *v13; // x0
  struct ExpeditionConfirmDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  struct ExpeditionAssetManager_o *v24; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionRewardDialog_k__BackingField; // x21
  UnityEngine_GameObject_o *v26; // x0
  struct ExpeditionRewardDialogComponent_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  struct ExpeditionAssetManager_o *v37; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *expeditionPointRewardDialog_k__BackingField; // x21
  UnityEngine_GameObject_o *v39; // x0
  struct ExpeditionPointRewardDialogComponent_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v49; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionStart_k__BackingField; // x20
  UnityEngine_GameObject_o *v51; // x0
  struct BitExpeditionStartComponent_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Component_o *v59; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v61; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v63; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *bitExpeditionFinish_k__BackingField; // x20
  UnityEngine_GameObject_o *v65; // x0
  struct BitExpeditionFinishComponent_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UnityEngine_Component_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x1
  const MethodInfo *v75; // x2

  if ( (byte_40FC662 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FC662 = 1;
  }
  expeditionConfirmDialog = (UnityEngine_Object_o *)this->fields.expeditionConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionConfirmDialog = &this->fields.expeditionConfirmDialog;
  if ( UnityEngine_Object__op_Equality(expeditionConfirmDialog, 0LL, 0LL) )
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
    v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionConfirmDialog_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v13 )
      goto LABEL_59;
    Component_srcLineSprite = (struct ExpeditionConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v13,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = Component_srcLineSprite;
    sub_B16F98(
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
  if ( !*p_expeditionConfirmDialog )
    goto LABEL_59;
  ExpeditionConfirmDialogComponent__Init(*p_expeditionConfirmDialog, this->fields.currentEventId, 0LL);
  expeditionRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionRewardDialog = &this->fields.expeditionRewardDialog;
  if ( UnityEngine_Object__op_Equality(expeditionRewardDialog, 0LL, 0LL) )
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
    v26 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionRewardDialog_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v26 )
      goto LABEL_59;
    v27 = (struct ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v26,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = v27;
    sub_B16F98(
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
  if ( !*p_expeditionRewardDialog )
    goto LABEL_59;
  ExpeditionRewardDialogComponent__Init(*p_expeditionRewardDialog, 0LL);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_expeditionPointRewardDialog = &this->fields.expeditionPointRewardDialog;
  if ( UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0LL, 0LL) )
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
    v39 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        expeditionPointRewardDialog_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v39 )
      goto LABEL_59;
    v40 = (struct ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v39,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = v40;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.expeditionPointRewardDialog,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v47);
  }
  if ( !*p_expeditionPointRewardDialog )
    goto LABEL_59;
  ExpeditionPointRewardDialogComponent__Init(*p_expeditionPointRewardDialog, 0LL);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(bitExpeditionStart, 0LL, 0LL) )
  {
    v49 = this->fields.assetManager;
    if ( !v49 )
      goto LABEL_59;
    bitExpeditionStart_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v49->fields._bitExpeditionStart_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v51 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        bitExpeditionStart_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v51 )
      goto LABEL_59;
    v52 = (struct BitExpeditionStartComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v51,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = v52;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.bitExpeditionStart,
      (System_Int32_array **)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    v59 = (UnityEngine_Component_o *)this->fields.bitExpeditionStart;
    if ( !v59 )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject(v59, 0LL);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v61);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(bitExpeditionFinish, 0LL, 0LL) )
  {
    v63 = this->fields.assetManager;
    if ( v63 )
    {
      bitExpeditionFinish_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v63->fields._bitExpeditionFinish_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v65 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          bitExpeditionFinish_k__BackingField,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v65 )
      {
        v66 = (struct BitExpeditionFinishComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v65,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = v66;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.bitExpeditionFinish,
          (System_Int32_array **)v66,
          v67,
          v68,
          v69,
          v70,
          v71,
          v72);
        v73 = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
        if ( v73 )
        {
          v74 = UnityEngine_Component__get_gameObject(v73, 0LL);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v74, v75);
          return;
        }
      }
    }
LABEL_59:
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x10

  if ( (byte_40FC665 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_EventExpeditionListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&EventExpeditionListViewObject_TypeInfo, v8);
    byte_40FC665 = 1;
  }
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, obj, item, method, v4);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v11 = *(&EventExpeditionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[v11 - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)obj, v9, v10);
}


void __fastcall EventExpeditionListViewManager__StartResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_40FC670 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20980, result);
    byte_40FC670 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager__UpdateButtonDisp(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v5; // x8

  if ( (byte_40FC675 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FC675 = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_B170D4();
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_16940;
  else
    v5 = &StringLiteral_16939;
  UISprite__set_spriteName(expeditionNoticeBtnSp, (System_String_o *)*v5, 0LL);
}


void __fastcall EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_ExpeditionInfo__o *CompleteExpeditionInfoList; // x0
  System_Collections_Generic_List_ExpeditionInfo__o *v8; // x8
  NoticeNumberComponent_o *expeditionNoticeNumber; // x0
  struct UICommonButton_o *completeBtn; // x0

  if ( (byte_40FC668 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FC668 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0LL
    || (CompleteExpeditionInfoList = UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                       MasterData_WarQuestSelectionMaster,
                                       this->fields.currentEventId,
                                       0LL)) == 0LL
    || (v8 = CompleteExpeditionInfoList, (expeditionNoticeNumber = this->fields.expeditionNoticeNumber) == 0LL)
    || (NoticeNumberComponent__SetNumber(expeditionNoticeNumber, v8->fields._size, 0LL),
        (completeBtn = this->fields.completeBtn) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (*)(void))completeBtn->klass->vtable._5_set_isEnabled.method)();
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_1(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *maskPanel; // x0
  UnityEngine_Component_o *touchPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UITouchPress_o *v9; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct UITouchPress_o *v15; // x8
  System_Collections_Generic_List_EventDelegate__o *v16; // x20
  EventDelegate_Callback_o *v17; // x21
  const MethodInfo *v18; // x2

  if ( (byte_40FC678 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&EventDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v5);
    byte_40FC678 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (gameObject = UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (v9 = this->fields.touchPanel) == 0LL)
    || (onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v9->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          onClick,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v15 = this->fields.touchPanel) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  v16 = v15->fields.onClick;
  v17 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v11, v12, v13, v14);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29416612(v16, v17, v18);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_2(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UITouchPress_o *touchPanel; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_int__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Component_o *bitExpeditionStart; // x0
  UnityEngine_GameObject_o *v35; // x0

  if ( (byte_40FC67A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v6);
    byte_40FC67A = 1;
  }
  touchPanel = this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_11;
  onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)touchPanel->fields.onClick;
  if ( !onClick )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    onClick,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
  v9 = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !v9 )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectEventExpeditionEntityList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v27 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25,
                                                    v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SelectPieceIdxList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  bitExpeditionStart = (UnityEngine_Component_o *)this->fields.bitExpeditionStart;
  if ( !bitExpeditionStart || (v35 = UnityEngine_Component__get_gameObject(bitExpeditionStart, 0LL)) == 0LL )
LABEL_11:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v35, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_3(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  struct UITouchPress_o *touchPanel; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BitExpeditionStartComponent_o *bitExpeditionStart; // x0

  if ( (byte_40FC679 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    byte_40FC679 = 1;
  }
  touchPanel = this->fields.touchPanel;
  if ( !touchPanel
    || (onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)touchPanel->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          onClick,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v5 = (UnityEngine_Component_o *)this->fields.touchPanel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (bitExpeditionStart = this->fields.bitExpeditionStart) == 0LL) )
  {
    sub_B170D4();
  }
  BitExpeditionStartComponent__SkipAnimation(bitExpeditionStart, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager__get_HakkenshiBaseWindowHeight(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  HakkenshiListController_o *hakkenshiInfo; // x0

  hakkenshiInfo = this->fields.hakkenshiInfo;
  if ( !hakkenshiInfo )
    sub_B170D4();
  return HakkenshiListController__get_HakkenshiBaseWindowHeight(hakkenshiInfo, 0LL);
}


System_Collections_Generic_List_EventExpeditionListViewObject__o *__fastcall EventExpeditionListViewManager__get_ObjectList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FC661 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FC661 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventExpeditionListViewObject__o *)v14;
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct EventExpeditionListViewManager_o *_4__this; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventExpeditionListViewObject__o *ObjectList; // x20
  EventExpeditionListViewManager___c_c *v27; // x8
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__48_0; // x21
  Il2CppObject *v30; // x22
  struct EventExpeditionListViewManager___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x21
  UnityEngine_Component_o *touchPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *bitExpeditionStart; // x0
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  struct System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x21
  BitExpeditionStartComponent_o *v48; // x20
  struct System_Collections_Generic_List_int__o *v49; // x22
  EventExpeditionEntity_o *v50; // x21
  int32_t v51; // w22
  System_Action_o *v52; // x23
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x24

  if ( (byte_40F6FA2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventExpeditionListViewObject___ctor__, method);
    sub_B16FFC(&System_Action_EventExpeditionListViewObject__TypeInfo, v9);
    sub_B16FFC(&System_Action_TypeInfo, v10);
    sub_B16FFC(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__, v11);
    sub_B16FFC(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v15);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__, v16);
    sub_B16FFC(&EventExpeditionListViewManager___c_TypeInfo, v17);
    byte_40F6FA2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_33;
    ObjectList = EventExpeditionListViewManager__get_ObjectList(_4__this, 0LL);
    v27 = EventExpeditionListViewManager___c_TypeInfo;
    if ( (BYTE3(EventExpeditionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v27 = EventExpeditionListViewManager___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__48_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                        System_Action_EventExpeditionListViewObject__TypeInfo,
                                                                                        v22,
                                                                                        v23,
                                                                                        v24,
                                                                                        v25);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__48_0,
        v30,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        (const MethodInfo_24B7310 *)Method_System_Action_EventExpeditionListViewObject___ctor__);
      v31 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v31->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v31->__9__48_0,
        (System_Int32_array **)_9__48_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    if ( !ObjectList )
      goto LABEL_33;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)ObjectList,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    EventExpeditionListViewManager__SetCallBack(_4__this, 0LL);
    SelectPieceIdxList = _4__this->fields.SelectPieceIdxList;
    if ( !SelectPieceIdxList )
      goto LABEL_33;
    if ( !SelectPieceIdxList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !_4__this->fields.hakkenshiInfo )
      goto LABEL_33;
    HakkenshiListController__DisplayHakkenshiObj(
      _4__this->fields.hakkenshiInfo,
      SelectPieceIdxList->fields._items->m_Items[1],
      0,
      0LL);
    touchPanel = (UnityEngine_Component_o *)_4__this->fields.touchPanel;
    if ( !touchPanel )
      goto LABEL_33;
    gameObject = UnityEngine_Component__get_gameObject(touchPanel, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    bitExpeditionStart = (UnityEngine_Component_o *)_4__this->fields.bitExpeditionStart;
    if ( !bitExpeditionStart )
      goto LABEL_33;
    v42 = UnityEngine_Component__get_gameObject(bitExpeditionStart, 0LL);
    if ( !v42 )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(v42, 1, 0LL);
    selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
    if ( !selectEventExpeditionEntityList )
      goto LABEL_33;
    v48 = _4__this->fields.bitExpeditionStart;
    if ( !selectEventExpeditionEntityList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v49 = _4__this->fields.SelectPieceIdxList;
    if ( !v49 )
      goto LABEL_33;
    v50 = selectEventExpeditionEntityList->fields._items->m_Items[0];
    if ( !v49->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v51 = v49->fields._items->m_Items[1];
    v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
    System_Action___ctor(
      v52,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
      0LL);
    v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
    System_Action___ctor(
      v57,
      (Il2CppObject *)_4__this,
      Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
      0LL);
    if ( !v48 )
LABEL_33:
      sub_B170D4();
    BitExpeditionStartComponent__SetUp(v48, v50, v51, v52, v57, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6F93 & 1) == 0 )
  {
    sub_B16FFC(&EventExpeditionListViewManager___c_TypeInfo, v1);
    byte_40F6F93 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventExpeditionListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventExpeditionListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F6F94 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__, v7);
    sub_B16FFC(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, v8);
    byte_40F6F94 = 1;
  }
  v9 = sub_B170CC(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_1(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F6F95 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__, v7);
    sub_B16FFC(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, v8);
    byte_40F6F95 = 1;
  }
  v9 = sub_B170CC(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_4(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F6F96 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__, v7);
    sub_B16FFC(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, v8);
    byte_40F6F96 = 1;
  }
  v9 = sub_B170CC(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  EventExpeditionListViewItem_o *Item; // x0

  if ( !x || (Item = EventExpeditionListViewObject__GetItem(x, 0LL)) == 0LL )
    sub_B170D4();
  EventExpeditionListViewItem__CheckExpeditionCondition(Item, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *completeBtnSp; // x21
  struct EventExpeditionListViewManager_o *v9; // x8
  UILabel_o *completeBtnLb; // x20
  System_String_o *v11; // x0
  EventExpeditionListViewManager_o *v12; // x0
  struct EventExpeditionListViewManager_o *v13; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  EventExpeditionListViewManager_o *v15; // x0
  EventExpeditionListViewManager_o *v16; // x0

  if ( (byte_40F6F97 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_16920, v4);
    sub_B16FFC(&StringLiteral_5751, v5);
    byte_40F6F97 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  eventId = this->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, completeBtnSp, (System_String_o *)StringLiteral_16920, 0LL);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_18;
  completeBtnLb = v9->fields.completeBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5751, 0LL);
  if ( !completeBtnLb )
    goto LABEL_18;
  UILabel__set_text(completeBtnLb, v11, 0LL);
  v12 = this->fields.__4__this;
  if ( !v12
    || (EventExpeditionListViewManager__SetExpeditionObject(v12, 0LL), (v13 = this->fields.__4__this) == 0LL)
    || (hakkenshiInfo = v13->fields.hakkenshiInfo) == 0LL
    || (HakkenshiListController__CreateHakkenshiWindow(
          hakkenshiInfo,
          this->fields.eventId,
          v13->fields.assetManager,
          0LL),
        (v15 = this->fields.__4__this) == 0LL)
    || (EventExpeditionListViewManager__CreateList(v15, this->fields.evExpeditionEntList, this->fields.eventId, 0LL),
        (v16 = this->fields.__4__this) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  EventExpeditionListViewManager__SetCallBack(v16, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  SceneJumpInfo_o *v12; // x20
  int32_t v13; // w1
  AvalonSceneManager_o *v14; // x0
  Il2CppObject *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4

  if ( (byte_40F6F98 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12612, v4);
    sub_B16FFC(&StringLiteral_12651, v5);
    byte_40F6F98 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v12 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v16, v17, v18, v19);
      SceneJumpInfo___ctor_29748028(v12, (System_String_o *)StringLiteral_12612, 0, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B170D4();
    case 1:
      v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v14 )
      {
        v13 = 71;
        v15 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v14, v13, 1, v15, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v12 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v8, v9, v10, v11);
      SceneJumpInfo___ctor_29747932(v12, (System_String_o *)StringLiteral_12651, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        v14 = (AvalonSceneManager_o *)Instance;
        v15 = (Il2CppObject *)v12;
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
  __int64 v11; // x3
  __int64 v12; // x4
  SceneJumpInfo_o *v13; // x20
  int32_t v14; // w1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4

  if ( (byte_40F6F99 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12655, v4);
    sub_B16FFC(&StringLiteral_12612, v5);
    sub_B16FFC(&StringLiteral_12654, v6);
    byte_40F6F99 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v13 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v19, v20, v21, v22);
      SceneJumpInfo___ctor_29748028(v13, (System_String_o *)StringLiteral_12612, 1, 0LL);
      if ( Instance )
      {
        v14 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v13 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v15, v16, v17, v18);
      SceneJumpInfo___ctor_29747932(v13, (System_String_o *)StringLiteral_12655, 0LL);
      if ( Instance )
      {
        v14 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B170D4();
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v13 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v9, v10, v11, v12);
      SceneJumpInfo___ctor_29747932(v13, (System_String_o *)StringLiteral_12654, 0LL);
      if ( Instance )
      {
        v14 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v14, 1, (Il2CppObject *)v13, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  SceneJumpInfo_o *v10; // x20

  if ( (byte_40F6F9A & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12612, v4);
    byte_40F6F9A = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v10 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v6, v7, v8, v9);
    SceneJumpInfo___ctor_29748028(v10, (System_String_o *)StringLiteral_12612, 2, 0LL);
    if ( !Instance )
      sub_B170D4();
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v10, 0LL);
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
  EventExpeditionListViewManager_o *v10; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionObj(_4__this, this->fields.obj, 0LL),
        (v10 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  EventExpeditionListViewManager__OnClickDecide(v10, isDecide, eventExpeditionEntity, pieceIdx, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v27; // x8
  System_Int32_array **resultEventRewardInfos; // x1
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  BattleDropItem_array **v30; // x22
  __int64 v31; // x3
  __int64 v32; // x4
  struct EventExpeditionListViewManager_resData_array *v33; // x8
  EventExpeditionListViewManager_resData_o *v34; // x9
  struct EventExpeditionListViewManager_o *_4__this; // x8
  BattleDropItem_array *v36; // x20
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x24
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x25
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x27
  UserGameEntity_array *oldUserGame; // x22
  System_Action_bool__o *v42; // x26
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *closeCallback; // x27

  if ( (byte_40F6F9B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v6);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_SetActive__, v8);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__, v9);
    sub_B16FFC(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, v10);
    byte_40F6F9B = 1;
  }
  v11 = sub_B170CC(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_14;
  *(_QWORD *)(v11 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  ActionExtensions__Call(this->fields.animFinishCallback, 0LL);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !res->max_length )
    goto LABEL_15;
  v27 = res->m_Items[0];
  if ( !v27
    || (resultExpeditionRewardInfos = v27->fields.resultExpeditionRewardInfos,
        resultEventRewardInfos = (System_Int32_array **)v27->fields.resultEventRewardInfos,
        *(_QWORD *)(v11 + 16) = resultEventRewardInfos,
        v30 = (BattleDropItem_array **)(v11 + 16),
        sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), resultEventRewardInfos, v20, v21, v22, v23, v24, v25),
        (v33 = this->fields.res) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  if ( !v33->max_length )
  {
LABEL_15:
    sub_B17100(v18, v19, v20);
    sub_B170A0();
  }
  v34 = v33->m_Items[0];
  if ( !v34 )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v36 = *v30;
  if ( !*v30 )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  oldUserGame = v34->fields.oldUserGame;
  v42 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v19, v20, v31, v32);
  System_Action_bool____ctor(
    v42,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  closeCallback = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v11,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0LL);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v36,
    oldUserGame,
    currentEventId,
    v36->max_length != 0,
    v42,
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  EventExpeditionListViewManager_o *_4__this; // x0
  struct System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x22
  ExpeditionPointRewardDialogComponent_o *expeditionPointRewardDialog; // x21
  struct EventExpeditionListViewManager_o *v16; // x8
  struct EventExpeditionEntity_array *items; // x9
  int32_t currentEventId; // w22
  Il2CppObject *maskPanel; // x25
  EventExpeditionEntity_o *v20; // x23
  System_Action_bool__o *v21; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *_9__2; // x25
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F6F9C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v6);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_SetActive__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v9);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__, v10);
    byte_40F6F9C = 1;
  }
  resultEventRewardInfos = this->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_16;
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
    if ( selectEventExpeditionEntityList )
    {
      expeditionPointRewardDialog = _4__this->fields.expeditionPointRewardDialog;
      if ( !selectEventExpeditionEntityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = CS___8__locals1->fields.__4__this;
      if ( v16 )
      {
        items = selectEventExpeditionEntityList->fields._items;
        currentEventId = v16->fields.currentEventId;
        maskPanel = (Il2CppObject *)v16->fields.maskPanel;
        v20 = items->m_Items[0];
        v21 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, method, v2, v3, v4);
        System_Action_bool____ctor(
          v21,
          maskPanel,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
        _9__2 = this->fields.__9__2;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
            0LL);
          this->fields.__9__2 = _9__2;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__9__2,
            (System_Int32_array **)_9__2,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
        }
        if ( expeditionPointRewardDialog )
        {
          ExpeditionPointRewardDialogComponent__Open(
            expeditionPointRewardDialog,
            v20,
            resultEventRewardInfos,
            currentEventId,
            v21,
            _9__2,
            0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
  EventExpeditionListViewManager__FinishResponseCallBack(_4__this, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x21
  struct EventExpeditionListViewManager_o *_4__this; // x8
  System_Action_T1__T2__T3__o *requestCallBack; // x19
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  System_Action_o *_9__3; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F6F9D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B16FFC(&System_Action_TypeInfo, v6);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__, v7);
    byte_40F6F9D = 1;
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  requestCallBack = (System_Action_T1__T2__T3__o *)_4__this->fields.requestCallBack;
  resultEventRewardInfos = this->fields.resultEventRewardInfos;
  _9__3 = CS___8__locals1->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0LL);
    CS___8__locals1->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&CS___8__locals1->fields.__9__3,
      (System_Int32_array **)_9__3,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !requestCallBack )
LABEL_9:
    sub_B170D4();
  System_Action_object__int__object___Invoke(
    requestCallBack,
    &resultEventRewardInfos->obj,
    0,
    (Il2CppObject *)_9__3,
    (const MethodInfo_24C705C *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  UnityEngine_Component_o *touchPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventExpeditionListViewManager_o *v9; // x8
  struct UITouchPress_o *v10; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct EventExpeditionListViewManager_o *v16; // x8
  struct UITouchPress_o *v17; // x8
  System_Collections_Generic_List_EventDelegate__o *v18; // x20
  EventDelegate_Callback_o *_9__3; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F6F9E & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&EventDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v4);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__, v5);
    byte_40F6F9E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  touchPanel = (UnityEngine_Component_o *)_4__this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(touchPanel, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (v9 = this->fields.__4__this) == 0LL)
    || (v10 = v9->fields.touchPanel) == 0LL
    || (onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->fields.onClick) == 0LL
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          onClick,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__),
        (v16 = this->fields.__4__this) == 0LL)
    || (v17 = v16->fields.touchPanel) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  v18 = v17->fields.onClick;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v12, v13, v14, v15);
    EventDelegate_Callback___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29416612(v18, _9__3, 0LL);
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
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct UITouchPress_o *touchPanel; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EventExpeditionFinishRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct EventExpeditionListViewManager_o *v23; // x8

  if ( (byte_40F6F9F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__, v7);
    byte_40F6F9F = 1;
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
  onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)touchPanel->fields.onClick;
  if ( !onClick )
    goto LABEL_17;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    onClick,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v11,
                                                     v12,
                                                     v13,
                                                     v14);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__4,
      (System_Int32_array **)_9__4,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventExpeditionFinishRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                          _9__4,
                                                                          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v23 = this->fields.__4__this;
  if ( !v23 || !Request_WarBoardWallAttackRequest )
LABEL_17:
    sub_B170D4();
  EventExpeditionFinishRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v23->fields.currentEventId,
    this->fields.idxList,
    0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__4(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  System_Action_o *_9__5; // x22
  EventExpeditionListViewManager_o *_4__this; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F6FA0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__, v7);
    byte_40F6FA0 = 1;
  }
  _9__5 = this->fields.__9__5;
  _4__this = this->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, result, method, v3, v4);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__5,
      (System_Int32_array **)_9__5,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !_4__this )
    sub_B170D4();
  EventExpeditionListViewManager__FinishResponse(_4__this, result, _9__5, 0LL);
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
  System_Collections_Generic_List_int__o *SelectPieceIdxList; // x0
  struct EventExpeditionListViewManager_o *v9; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  System_Collections_Generic_List_Enumerator_int__o v11; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_40F6FA1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    byte_40F6FA1 = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, 0LL), (v7 = this->fields.__4__this) == 0LL)
    || (SelectPieceIdxList = v7->fields.SelectPieceIdxList) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    SelectPieceIdxList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v11;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields.current, 1, 0LL) )
  {
    v9 = this->fields.__4__this;
    if ( !v9 )
      sub_B170D4();
    hakkenshiInfo = v9->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_B170D4();
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_B170D4();
  return x->fields.expeditionIdx == entity->fields.idx;
}


void __fastcall EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}