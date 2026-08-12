void EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A5C3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_596A5C3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectEventExpeditionEntityList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SelectPieceIdxList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


bool EventExpeditionListViewManager__CheckEventEnd(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t currentEventId; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596A5B9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596A5B9 = 1;
  }
  currentEventId = this->fields.currentEventId;
  entity = 0;
  if ( currentEventId < 1 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0);
  if ( !entity )
LABEL_14:
    sub_2213CDC(Master_object, v6);
  return (__int64)Master_object >= (__int64)entity[6].klass;
}


bool EventExpeditionListViewManager__CheckServant(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  void *Instance; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x20
  Il2CppObject *MasterData_object; // x21
  __int64 v7; // x2
  CommonUI_o *v8; // x20
  int32_t v9; // w21
  int32_t svtKeep; // w19
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__40_0; // x22
  Il2CppObject *v13; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  CommonUI_o *v21; // x0
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x2
  CommonUI_o *v26; // x20
  int32_t v27; // w21
  int32_t svtEquipKeep; // w19
  struct EventExpeditionListViewManager___c_StaticFields *v29; // x8
  Il2CppObject *v30; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t Count; // w20
  __int64 v39; // x2
  CommonUI_o *v40; // x21
  BalanceConfig_c *v41; // x8
  int32_t CommandCodeFrameMax; // w19
  struct EventExpeditionListViewManager___c_StaticFields *v43; // x8
  Il2CppObject *v44; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596A5B5 & 1) == 0 )
  {
    sub_2213A60(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__);
    sub_2213A60(&EventExpeditionListViewManager___c_TypeInfo);
    byte_596A5B5 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  v5 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_44;
    v8 = (CommonUI_o *)Instance;
    v9 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !*(&EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, v4, v7);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    static_fields = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v4, v7);
        static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_2213CCC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v13,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
        0);
      v14 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v14->__9__40_0 = _9__40_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__40_0, (int32_t)_9__40_0, v15, v16, v17, v18, v19, v20);
    }
    if ( !v8 )
      goto LABEL_44;
    v21 = v8;
    v22 = v9;
    v23 = svtKeep;
    v24 = 0;
LABEL_41:
    CommonUI__OpenSvtFrameShortDlg(v21, v22, v23, v24, 1, _9__40_0, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
      return 0;
    }
LABEL_44:
    sub_2213CDC(Instance, v4);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v5, 1, 1, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_44;
    v26 = (CommonUI_o *)Instance;
    v27 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !*(&EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, v4, v25);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v29 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v29->__9__40_1;
    if ( !_9__40_0 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v4, v25);
        v29 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)v29->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_2213CCC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v30,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0);
      v31 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v31->__9__40_1 = _9__40_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->__9__40_1, (int32_t)_9__40_0, v32, v33, v34, v35, v36, v37);
    }
    if ( !v26 )
      goto LABEL_44;
    v21 = v26;
    v22 = v27;
    v23 = svtEquipKeep;
    v24 = 1;
    goto LABEL_41;
  }
  if ( !MasterData_object )
    goto LABEL_44;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_44;
    v40 = (CommonUI_o *)Instance;
    if ( !byte_596A5C7 )
    {
      sub_2213A60(&BalanceConfig_TypeInfo);
      byte_596A5C7 = 1;
    }
    v41 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v39);
      v41 = BalanceConfig_TypeInfo;
    }
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    CommandCodeFrameMax = v41->static_fields->CommandCodeFrameMax;
    if ( !*(&EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, v4, v39);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v43 = (struct EventExpeditionListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__40_0 = v43->__9__40_4;
    if ( !_9__40_0 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v4, v39);
        v43 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)v43->__9;
      _9__40_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_2213CCC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__40_0,
        v44,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0);
      v45 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v45->__9__40_4 = _9__40_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v45->__9__40_4, (int32_t)_9__40_0, v46, v47, v48, v49, v50, v51);
    }
    if ( !v40 )
      goto LABEL_44;
    v21 = v40;
    v22 = Count;
    v23 = CommandCodeFrameMax;
    v24 = 2;
    goto LABEL_41;
  }
  return 1;
}


System_Collections_IEnumerator_o *EventExpeditionListViewManager__CoWaitEffectPlay(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596A5BD & 1) == 0 )
  {
    sub_2213A60(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
    byte_596A5BD = 1;
  }
  v3 = sub_2213CCC(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48___ctor(
    (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void EventExpeditionListViewManager__CreateList(
        EventExpeditionListViewManager_o *this,
        EventExpeditionEntity_array *evExpeditionEntList,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v8; // x1
  int max_length; // w8
  unsigned int v10; // w28
  EventExpeditionEntity_o *v11; // x23
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v14; // x26
  EventExpeditionListViewItem_o *v15; // x22
  const MethodInfo *v16; // x6
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_596A5B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventExpeditionListViewItem_TypeInfo);
    sub_2213A60(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_596A5B0 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !evExpeditionEntList )
    goto LABEL_15;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_2213CE4(itemList);
      v11 = evExpeditionEntList->m_Items[v10];
      if ( !v11 )
        break;
      idx = v11->fields.idx;
      assetManager = this->fields.assetManager;
      v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0);
      v15 = (EventExpeditionListViewItem_o *)sub_2213CCC(EventExpeditionListViewItem_TypeInfo);
      EventExpeditionListViewItem___ctor(v15, idx, v11, eventId, assetManager, v14, v16);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v15;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v17, v18, v19, v20, v21, v22);
      }
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(itemList, v8);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void EventExpeditionListViewManager__DestroyList(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  ExpeditionAssetManager_o *assetManager; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    ExpeditionAssetManager__Release(assetManager, this->fields.currentEventId, 0);
}


void EventExpeditionListViewManager__FinishResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        System_Action_o *animFinishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *touchPanel; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x21
  System_Object_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x2

  if ( (byte_596A5BE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__);
    sub_2213A60(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_596A5BE = 1;
  }
  v7 = sub_2213CCC(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass49_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass49_0_o *)v7,
    0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = animFinishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)animFinishCallback, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
    return;
  v24 = (Il2CppObject *)System_String__Concat_75694928(
                          (System_String_o *)StringLiteral_16427/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16691/*"]"*/,
                          0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v22, v23);
  v25 = JsonManager__DeserializeArray_object_(
          v24,
          (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v7 + 24) = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v25, v26, v27, v28, v29, v30, v31);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v33,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0),
        !bitExpeditionFinish) )
  {
LABEL_11:
    sub_2213CDC(touchPanel, v9);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v33, v34);
}


void EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v19; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_596A5BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_596A5BF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectEventExpeditionEntityList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SelectPieceIdxList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (bitExpeditionFinish = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0)) == 0 )
  {
    sub_2213CDC(bitExpeditionFinish, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v19);
  expeditionCallback = this->fields.expeditionCallback;
  if ( expeditionCallback )
    ActionExtensions__Call(expeditionCallback, 0);
}


void EventExpeditionListViewManager__Init(
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w8
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  __int64 v40; // x2
  bool ExpeditionNotification; // w8
  LocalizationManager_c *v42; // x0
  UILabel_o *expeditionNoticeLb; // x21
  int v44; // w9
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  ExpeditionAssetManager_o *assetManager; // x21
  ExpeditionAssetManager_o *v48; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t v55; // w19
  System_Action_o *v56; // x22

  if ( (byte_596A5AF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ExpeditionAssetManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__);
    sub_2213A60(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
    sub_2213A60(&StringLiteral_6042/*"EXPEDITION_PUSH_BTN_LABEL"*/);
    byte_596A5AF = 1;
  }
  v11 = sub_2213CCC(EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass32_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v11,
    0);
  if ( !v11 )
    goto LABEL_13;
  *(_DWORD *)(v11 + 16) = eventId;
  *(_QWORD *)(v11 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = evExpeditionEntList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v11 + 32),
    (int32_t)evExpeditionEntList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = *(_DWORD *)(v11 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.expeditionCallback,
    (int32_t)expeditionCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.requestCallBack = requestCallBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallBack,
    (int32_t)requestCallBack,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  ExpeditionNotification = EventRewardSaveData__GetExpeditionNotification(0);
  v42 = LocalizationManager_TypeInfo;
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  v44 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.isButtonOn = ExpeditionNotification;
  if ( !v44 )
    j_il2cpp_runtime_class_init_0(v42, v39, v40);
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_6042/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0);
  if ( !expeditionNoticeLb )
    goto LABEL_13;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v45);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v46);
  touchPanel = (System_String_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_13;
  touchPanel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)touchPanel, 0);
  if ( !touchPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    v48 = (ExpeditionAssetManager_o *)sub_2213CCC(ExpeditionAssetManager_TypeInfo);
    ExpeditionAssetManager___ctor(v48, 0);
    this->fields.assetManager = v48;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.assetManager,
      (int32_t)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    assetManager = this->fields.assetManager;
  }
  v55 = *(_DWORD *)(v11 + 16);
  v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v11,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0);
  if ( !assetManager )
LABEL_13:
    sub_2213CDC(touchPanel, v13);
  ExpeditionAssetManager__GetAssets(assetManager, v55, v56, 0);
}


void EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v7; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A5B7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    byte_596A5B7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  v6 = 0;
  v7 = &v8;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v8.fields._current,
      v5);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
}


void EventExpeditionListViewManager__InitEventExpeditionObj(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  System_Action_o *v5; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_596A5B8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager_o *)sub_2213A60(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    byte_596A5B8 = 1;
  }
  if ( !obj || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, 0)) == 0 )
    sub_2213CDC(this, obj);
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)obj);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, v4, Method_EventExpeditionListViewManager_OnMoveEnd__, 0);
  EventExpeditionListViewObject__Init(obj, v5, 0);
}


void EventExpeditionListViewManager__LocateDialogToExpeditionObj(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  EventExpeditionListViewManager_o *v6; // x20

  if ( !obj )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_GameObject__get_transform(obj, 0);
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !this )
    goto LABEL_9;
  this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0);
  this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_transform(obj, 0);
  v6 = this;
  if ( !byte_5969AE5 )
  {
    this = (EventExpeditionListViewManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
        EventExpeditionListViewManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  EventExpeditionListViewManager_o *v6; // x20

  if ( !dialog )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !this )
    goto LABEL_9;
  this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0);
  this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  v6 = this;
  if ( !byte_5969AE5 )
  {
    this = (EventExpeditionListViewManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)dialog,
                                                      0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventExpeditionListViewManager__OnClickCompleteButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  Il2CppObject *current; // x25
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  Il2CppObject *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x2
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+0h] [xbp-80h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596A5B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__);
    sub_2213A60(&Method_EventExpeditionListViewManager_OnClickCompleteButton__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A5B6 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                (UserEventExpeditionMaster_o *)Instance,
                                this->fields.currentEventId,
                                0);
  if ( !Instance )
    goto LABEL_27;
  v5 = (System_Collections_Generic_List_object__o *)Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
    || !EventExpeditionListViewManager__CheckServant((EventExpeditionListViewManager_o *)Instance, v4) )
  {
    goto LABEL_20;
  }
  Instance = (DataManager_o *)this->fields.maskPanel;
  if ( !Instance )
LABEL_27:
    sub_2213CDC(Instance, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v29 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v29.fields._current;
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v8 )
      sub_2213CDC(0, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v8,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_2213CDC(MasterData_object, v11);
    if ( !MasterData_object )
      sub_2213CDC(0, v11);
    v12 = EventExpeditionMaster__TryGetEntity(
            (EventExpeditionMaster_o *)MasterData_object,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            0);
    if ( !v6
      || (items = v6->fields._items,
          v13 = (Il2CppObject *)entity,
          v21 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__,
          ++v6->fields._version,
          !items) )
    {
      sub_2213CDC(v12, v13);
    }
    size = v6->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        v13,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v6->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v6,
    v24);
LABEL_20:
  v25 = Method_EventExpeditionListViewManager_OnClickCompleteButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickCompleteButton__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_2213A78(Method_EventExpeditionListViewManager_OnClickCompleteButton__);
  v26 = (System_Reflection_MethodBase_o *)sub_2213A44(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
}


void EventExpeditionListViewManager__OnClickCompleteView(
        EventExpeditionListViewManager_o *this,
        System_Collections_Generic_List_EventExpeditionEntity__o *eventExpeditionEntities,
        const MethodInfo *method)
{
  __int64 v5; // x24
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  Il2CppObject *MasterData_object; // x22
  __int64 v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t current; // w1
  __int64 v32; // x0
  __int64 v33; // x1
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x22
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Func_object__bool__o *v36; // x25
  Il2CppObject *v37; // x0
  __int64 klass_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  __int64 v42; // x1
  __int64 v43; // x2
  EventExpeditionListViewManager___c_c *v44; // x0
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__51_0; // x22
  Il2CppObject *v47; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Int32_array *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  const MethodInfo *v63; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v65; // x19
  System_Action_o *v66; // x22
  const MethodInfo *v67; // x4
  System_Collections_Generic_List_EventExpeditionEntity__o *v68; // [xsp+8h] [xbp-A8h]
  __int64 v69; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+30h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_596A5C0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__);
    sub_2213A60(&System_Func_ExpeditionInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_EventExpeditionEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__);
    sub_2213A60(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__);
    sub_2213A60(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    sub_2213A60(&EventExpeditionListViewManager___c_TypeInfo);
    byte_596A5C0 = 1;
  }
  entity = 0;
  memset(&v71, 0, sizeof(v71));
  v5 = sub_2213CCC(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass51_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass51_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectEventExpeditionEntityList,
    (int32_t)eventExpeditionEntities,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v20);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v20);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_37;
  v69 = v5;
  Instance = (DataManager_o *)UserEventExpeditionMaster__TryGetEntity(
                                (UserEventExpeditionMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                this->fields.currentEventId,
                                0);
  if ( !eventExpeditionEntities )
    goto LABEL_37;
  v68 = eventExpeditionEntities;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v71 = v70;
  v70.fields._list = 0;
  *(_QWORD *)&v70.fields._index = &v71;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v22 = sub_2213CCC(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    EventExpeditionListViewManager___c__DisplayClass51_1___ctor(
      (EventExpeditionListViewManager___c__DisplayClass51_1_o *)v22,
      0);
    if ( !v22 )
      sub_2213CDC(v23, v24);
    current = (int32_t)v71.fields._current;
    *(_QWORD *)(v22 + 16) = v71.fields._current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 16), current, v25, v26, v27, v28, v29, v30);
    if ( !entity )
      sub_2213CDC(v32, v33);
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    v36 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ExpeditionInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v36,
      (Il2CppObject *)v22,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      0);
    v37 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v36,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v37 )
      sub_2213CDC(0, klass_high);
    if ( !SelectPieceIdxList
      || (items = SelectPieceIdxList->fields._items,
          klass_high = HIDWORD(v37[1].klass),
          v40 = Method_System_Collections_Generic_List_int__Add__,
          ++SelectPieceIdxList->fields._version,
          !items) )
    {
      sub_2213CDC(v37, klass_high);
    }
    size = SelectPieceIdxList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        SelectPieceIdxList,
        klass_high,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      SelectPieceIdxList->fields._size = size + 1;
      items->m_Items[size] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v44 = EventExpeditionListViewManager___c_TypeInfo;
  if ( !*(&EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, v42, v43);
    v44 = EventExpeditionListViewManager___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__51_0 = (System_Func_object__int__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !*(&v44->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v44, v42, v43);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__51_0,
      v47,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      0);
    v48 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    v48->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->__9__51_0, (int32_t)_9__51_0, v49, v50, v51, v52, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v68,
                                                               (System_Func_TSource__TResult__o *)_9__51_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v56 = System_Linq_Enumerable__ToArray_int_(
          v55,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v69 + 24) = v56;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 24), (int32_t)v56, v57, v58, v59, v60, v61, v62);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  EventExpeditionListViewManager__RequestListObject(this, v63);
  Instance = (DataManager_o *)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v65 = this->fields.SelectPieceIdxList,
        v66 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v66,
          (Il2CppObject *)v69,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0),
        !bitExpeditionFinish) )
  {
LABEL_37:
    sub_2213CDC(Instance, v7);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v65, v66, 0, v67);
}


// local variable allocation has failed, the output may be wrong!
void EventExpeditionListViewManager__OnClickDecide(
        EventExpeditionListViewManager_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *maskPanel; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  intptr_t v16; // x8
  intptr_t v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  NetworkManager_ResultCallbackFunc_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2

  if ( (byte_596A5BB & 1) == 0 )
  {
    sub_2213A60(&Method_EventExpeditionListViewManager_StartResponse__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_2213A60(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596A5BB = 1;
  }
  if ( !isDecide )
  {
    maskPanel = this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
      return;
    }
LABEL_23:
    sub_2213CDC(maskPanel, isDecide);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.selectEventExpeditionEntityList;
  if ( !maskPanel )
    goto LABEL_23;
  m_CachedPtr = maskPanel->fields.m_CachedPtr;
  v14 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_23;
  klass_low = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskPanel,
      (Il2CppObject *)eventExpeditionEntity,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = m_CachedPtr + 8 * klass_low;
    LODWORD(maskPanel[1].klass) = klass_low + 1;
    *(_QWORD *)(v16 + 32) = eventExpeditionEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v16 + 32),
      (int32_t)eventExpeditionEntity,
      (System_String_o *)eventExpeditionEntity,
      *(System_String_o **)&pieceIdx,
      (int32_t)method,
      v5,
      v6,
      v7);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.SelectPieceIdxList;
  if ( !maskPanel )
    goto LABEL_23;
  v17 = maskPanel->fields.m_CachedPtr;
  v18 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !v17 )
    goto LABEL_23;
  v19 = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)maskPanel,
      pieceIdx,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(maskPanel[1].klass) = v19 + 1;
    *(_DWORD *)(v17 + 4 * v19 + 32) = pieceIdx;
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.expeditionConfirmDialog;
  if ( !maskPanel )
    goto LABEL_23;
  ExpeditionConfirmDialogComponent__Close((ExpeditionConfirmDialogComponent_o *)maskPanel, 0);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager_StartResponse__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21, v22);
  maskPanel = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                            v20,
                                            (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
  if ( !eventExpeditionEntity || !maskPanel )
    goto LABEL_23;
  EventExpeditionStartRequest__beginRequest(
    (EventExpeditionStartRequest_o *)maskPanel,
    this->fields.currentEventId,
    eventExpeditionEntity->fields.idx,
    pieceIdx,
    0);
}


void EventExpeditionListViewManager__OnClickListView(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x21
  void *maskPanel; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  EventExpeditionListViewObject_o **v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  EventExpeditionMaster_o *v21; // x20
  int32_t currentEventId; // w23
  int dispMode; // w8
  EventExpeditionEntity_o *v24; // x20
  bool v25; // w8
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  EventExpeditionListViewManager_o *v30; // x0
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_object__o *v32; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  const MethodInfo *v43; // x2
  System_Reflection_MethodBase_o *v44; // x0
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v46; // x22

  if ( (byte_596A5BA & 1) == 0 )
  {
    sub_2213A60(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_2213A60(&Method_EventExpeditionListViewManager_OnClickListView__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__);
    sub_2213A60(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
    byte_596A5BA = 1;
  }
  v5 = sub_2213CCC(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
  EventExpeditionListViewManager___c__DisplayClass45_0___ctor(
    (EventExpeditionListViewManager___c__DisplayClass45_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = obj;
  v14 = (EventExpeditionListViewObject_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)obj, v15, v16, v17, v18, v19, v20);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  maskPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_37;
  maskPanel = DataManager__GetMasterData_object_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v14 )
    goto LABEL_37;
  v21 = (EventExpeditionMaster_o *)maskPanel;
  currentEventId = this->fields.currentEventId;
  maskPanel = EventExpeditionListViewObject__GetItem(*v14, 0);
  if ( !maskPanel )
    goto LABEL_37;
  if ( !v21 )
    goto LABEL_37;
  maskPanel = EventExpeditionMaster__GetEntity(v21, currentEventId, *((_DWORD *)maskPanel + 5), 0);
  if ( !*v14 )
    goto LABEL_37;
  dispMode = (*v14)->fields.dispMode;
  v24 = (EventExpeditionEntity_o *)maskPanel;
  if ( dispMode <= 2 )
  {
    if ( (unsigned int)(dispMode - 1) < 2 )
    {
      v25 = EventExpeditionListViewManager__CheckEventEnd(this, v7);
      v26 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( v25 )
      {
        if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) == 0 )
        {
LABEL_15:
          v27 = (System_Reflection_MethodBase_o *)sub_2213A44(v26, v26[4]);
          OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0, 0);
          goto LABEL_26;
        }
LABEL_14:
        v26 = (_QWORD *)sub_2213A78(v26);
        goto LABEL_15;
      }
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_2213A78(Method_EventExpeditionListViewManager_OnClickListView__);
      v44 = (System_Reflection_MethodBase_o *)sub_2213A44(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0, 0);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v46 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_2213CCC(ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v46,
        (Il2CppObject *)v5,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0);
      if ( !expeditionConfirmDialog )
        goto LABEL_37;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v24, 1, v46, 1, 0, 0);
      return;
    }
    if ( dispMode )
      return;
LABEL_26:
    maskPanel = this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
      return;
    }
LABEL_37:
    sub_2213CDC(maskPanel, v7);
  }
  if ( dispMode == 3 )
  {
    v26 = Method_EventExpeditionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) == 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( dispMode == 4 )
  {
    v28 = Method_EventExpeditionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_2213A78(Method_EventExpeditionListViewManager_OnClickListView__);
    v29 = (System_Reflection_MethodBase_o *)sub_2213A44(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
    if ( EventExpeditionListViewManager__CheckServant(v30, v31) )
    {
      v32 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v32 )
        goto LABEL_37;
      items = v32->fields._items;
      v40 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
      ++v32->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v32->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)v24,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v32->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v24;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v24, v33, v34, v35, v36, v37, v38);
      }
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v32,
        v43);
      return;
    }
    goto LABEL_26;
  }
}


void EventExpeditionListViewManager__OnClickNoticeButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _BYTE *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_596A5C2 & 1) == 0 )
  {
    sub_2213A60(&Method_EventExpeditionListViewManager_OnClickNoticeButton__);
    byte_596A5C2 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  v4 = Method_EventExpeditionListViewManager_OnClickNoticeButton__;
  this->fields.isButtonOn = isButtonOn ^ 1;
  if ( (v4[83] & 2) != 0 )
    v4 = (_BYTE *)sub_2213A78(v4);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, *((_QWORD *)v4 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0, 0);
  EventRewardSaveData__SetExpeditionNotification(this->fields.isButtonOn, 0);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v6);
}


void EventExpeditionListViewManager__OnMoveEnd(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_596A5B3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A5B3 = 1;
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
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_2213CDC(0, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void EventExpeditionListViewManager__RequestListObject(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v6; // x1
  Il2CppObject *current; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596A5B2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__);
    sub_2213A60(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A5B2 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v6 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      v6);
    v11 = 0;
    v12 = &v13;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v9, v10);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v8, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
  }
}


void EventExpeditionListViewManager__SetCallBack(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  EventExpeditionListViewManager__RequestListObject(this, v3);
}


void EventExpeditionListViewManager__SetExpeditionObject(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *expeditionConfirmDialog; // x20
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ExpeditionAssetManager_o *assetManager; // x8
  Il2CppObject *expeditionConfirmDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x20
  __int64 v21; // x2
  struct ExpeditionAssetManager_o *v22; // x8
  Il2CppObject *expeditionRewardDialog_k__BackingField; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x20
  __int64 v35; // x2
  struct ExpeditionAssetManager_o *v36; // x8
  Il2CppObject *expeditionPointRewardDialog_k__BackingField; // x20
  Il2CppObject *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  const MethodInfo *v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  __int64 v49; // x2
  struct ExpeditionAssetManager_o *v50; // x8
  Il2CppObject *bitExpeditionStart_k__BackingField; // x20
  Il2CppObject *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v60; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  __int64 v62; // x2
  struct ExpeditionAssetManager_o *v63; // x8
  Il2CppObject *bitExpeditionFinish_k__BackingField; // x20
  Il2CppObject *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  UnityEngine_GameObject_o *v72; // x1
  const MethodInfo *v73; // x2

  if ( (byte_596A5AE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A5AE = 1;
  }
  expeditionConfirmDialog = (UnityEngine_Object_o *)this->fields.expeditionConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_49;
    expeditionConfirmDialog_k__BackingField = (Il2CppObject *)assetManager->fields._expeditionConfirmDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       expeditionConfirmDialog_k__BackingField,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = (struct ExpeditionConfirmDialogComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.expeditionConfirmDialog,
      (int32_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v17);
  }
  v5 = (UnityEngine_GameObject_o *)this->fields.expeditionConfirmDialog;
  if ( !v5 )
    goto LABEL_49;
  ExpeditionConfirmDialogComponent__Init((ExpeditionConfirmDialogComponent_o *)v5, this->fields.currentEventId, 0);
  expeditionRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v22 = this->fields.assetManager;
    if ( !v22 )
      goto LABEL_49;
    expeditionRewardDialog_k__BackingField = (Il2CppObject *)v22->fields._expeditionRewardDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v21);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       expeditionRewardDialog_k__BackingField,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    v24 = UnityEngine_GameObject__GetComponent_object_(
            v5,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = (struct ExpeditionRewardDialogComponent_o *)v24;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.expeditionRewardDialog,
      (int32_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v31);
  }
  v5 = (UnityEngine_GameObject_o *)this->fields.expeditionRewardDialog;
  if ( !v5 )
    goto LABEL_49;
  ExpeditionRewardDialogComponent__Init((ExpeditionRewardDialogComponent_o *)v5, 0);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v36 = this->fields.assetManager;
    if ( !v36 )
      goto LABEL_49;
    expeditionPointRewardDialog_k__BackingField = (Il2CppObject *)v36->fields._expeditionPointRewardDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v35);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       expeditionPointRewardDialog_k__BackingField,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    v38 = UnityEngine_GameObject__GetComponent_object_(
            v5,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = (struct ExpeditionPointRewardDialogComponent_o *)v38;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.expeditionPointRewardDialog,
      (int32_t)v38,
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
  v5 = (UnityEngine_GameObject_o *)this->fields.expeditionPointRewardDialog;
  if ( !v5 )
    goto LABEL_49;
  ExpeditionPointRewardDialogComponent__Init((ExpeditionPointRewardDialogComponent_o *)v5, 0);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionStart, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v50 = this->fields.assetManager;
    if ( !v50 )
      goto LABEL_49;
    bitExpeditionStart_k__BackingField = (Il2CppObject *)v50->fields._bitExpeditionStart_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v49);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       bitExpeditionStart_k__BackingField,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    v52 = UnityEngine_GameObject__GetComponent_object_(
            v5,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = (struct BitExpeditionStartComponent_o *)v52;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.bitExpeditionStart,
      (int32_t)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    v5 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v5 )
      goto LABEL_49;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v60);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v49);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionFinish, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v63 = this->fields.assetManager;
    if ( v63 )
    {
      bitExpeditionFinish_k__BackingField = (Il2CppObject *)v63->fields._bitExpeditionFinish_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v62);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         bitExpeditionFinish_k__BackingField,
                                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v65 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = (struct BitExpeditionFinishComponent_o *)v65;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.bitExpeditionFinish,
          (int32_t)v65,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
        v5 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v5 )
        {
          v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v72, v73);
          return;
        }
      }
    }
LABEL_49:
    sub_2213CDC(v5, v6);
  }
}


void EventExpeditionListViewManager__SetMaskPanel(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.maskPanel = mask;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.maskPanel,
    (int32_t)mask,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventExpeditionListViewManager__SetObjectItem(
        EventExpeditionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  System_Action_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 naturalAligment; // x10

  if ( (byte_596A5B1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    sub_2213A60(&EventExpeditionListViewObject_TypeInfo);
    byte_596A5B1 = 1;
  }
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0);
  if ( !obj
    || (naturalAligment = EventExpeditionListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_2213CDC(v7, v8);
  }
  EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)obj, v6, 0);
}


void EventExpeditionListViewManager__StartResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_596A5BC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596A5BC = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  }
}


void EventExpeditionListViewManager__UpdateButtonDisp(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v4; // x8

  if ( (byte_596A5C1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596A5C1 = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_2213CDC(0, method);
  v4 = &StringLiteral_18274/*"btn_off"*/;
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_18275/*"btn_on"*/;
  UISprite__set_spriteName(expeditionNoticeBtnSp, (System_String_o *)*v4, 0);
}


void EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x8

  if ( (byte_596A5B4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A5B4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0
    || (Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      0)) == 0
    || (v5 = Instance, (Instance = (DataManager_o *)this->fields.expeditionNoticeNumber) == 0)
    || (NoticeNumberComponent__SetNumber(
          (NoticeNumberComponent_o *)Instance,
          (int32_t)v5->fields.m_CancellationTokenSource,
          0),
        (Instance = (DataManager_o *)this->fields.completeBtn) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  ((void (*)(void))Instance->klass[1]._1.name)();
}


void EventExpeditionListViewManager___CoWaitEffectPlay_b__48_1(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  struct UITouchPress_o *touchPanel; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  int32_t size; // w2
  int v7; // w10
  System_Collections_Generic_List_EventDelegate__o *v8; // x20
  EventDelegate_Callback_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596A5C4 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_596A5C4 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
  maskPanel = (UnityEngine_GameObject_o *)this->fields.touchPanel;
  if ( !maskPanel )
    goto LABEL_13;
  maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
  if ( !maskPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  touchPanel = this->fields.touchPanel;
  if ( !touchPanel
    || (onClick = touchPanel->fields.onClick) == 0
    || (size = onClick->fields._size,
        v7 = onClick->fields._version + 1,
        onClick->fields._size = 0,
        onClick->fields._version = v7,
        size >= 1)
    && (System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0),
        (touchPanel = this->fields.touchPanel) == 0) )
  {
LABEL_13:
    sub_2213CDC(maskPanel, method);
  }
  v8 = touchPanel->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10, v11);
  EventDelegate__Set_56322328(v8, v9, 0);
}


void EventExpeditionListViewManager___CoWaitEffectPlay_b__48_2(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *touchPanel; // x0
  void *monitor; // x8
  int32_t v5; // w2
  int v6; // w9
  System_Collections_Generic_List_object__o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_int__o *v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596A5C6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_596A5C6 = 1;
  }
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_12;
  monitor = touchPanel[1].monitor;
  if ( !monitor )
    goto LABEL_12;
  v5 = *((_DWORD *)monitor + 6);
  v6 = *((_DWORD *)monitor + 7) + 1;
  *((_DWORD *)monitor + 6) = 0;
  *((_DWORD *)monitor + 7) = v6;
  if ( v5 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)monitor + 2), 0, v5, 0);
    touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
    if ( !touchPanel )
      goto LABEL_12;
  }
  touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0);
  if ( !touchPanel )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0);
  touchPanel = (UnityEngine_Component_o *)this->fields.maskPanel;
  if ( !touchPanel )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectEventExpeditionEntityList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SelectPieceIdxList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  touchPanel = (UnityEngine_Component_o *)this->fields.bitExpeditionStart;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0)) == 0 )
  {
LABEL_12:
    sub_2213CDC(touchPanel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0);
}


void EventExpeditionListViewManager___CoWaitEffectPlay_b__48_3(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *touchPanel; // x0
  void *monitor; // x8
  int32_t v5; // w2
  int v6; // w9
  struct BitExpeditionStartComponent_o *bitExpeditionStart; // x8

  if ( (byte_596A5C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_596A5C5 = 1;
  }
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_11;
  monitor = touchPanel[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  v5 = *((_DWORD *)monitor + 6);
  v6 = *((_DWORD *)monitor + 7) + 1;
  *((_DWORD *)monitor + 6) = 0;
  *((_DWORD *)monitor + 7) = v6;
  if ( v5 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)monitor + 2), 0, v5, 0);
    touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
    if ( !touchPanel )
      goto LABEL_11;
  }
  touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0);
  if ( !touchPanel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0),
        (bitExpeditionStart = this->fields.bitExpeditionStart) == 0)
    || (touchPanel = (UnityEngine_Component_o *)bitExpeditionStart->fields.animation) == 0 )
  {
LABEL_11:
    sub_2213CDC(touchPanel, method);
  }
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)touchPanel, 0);
}


int32_t EventExpeditionListViewManager__get_HakkenshiBaseWindowHeight(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  HakkenshiListController_o *hakkenshiInfo; // x0

  hakkenshiInfo = this->fields.hakkenshiInfo;
  if ( !hakkenshiInfo )
    sub_2213CDC(0, method);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight(hakkenshiInfo, 0);
}


System_Collections_Generic_List_EventExpeditionListViewObject__o *EventExpeditionListViewManager__get_ObjectList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596A5AD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A5AD = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventExpeditionListViewObject__o *)v3;
}


void EventExpeditionListViewManager__CoWaitEffectPlay_d__48___ctor(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventExpeditionListViewManager__CoWaitEffectPlay_d__48__MoveNext(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v8; // x20
  int32_t _1__state; // w25
  struct EventExpeditionListViewManager_o *_4__this; // x19
  __int64 v11; // x2
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v12; // x20
  EventExpeditionListViewManager___c_c *v13; // x8
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__48_0; // x21
  Il2CppObject *v16; // x22
  struct EventExpeditionListViewManager___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  HakkenshiListController_o *hakkenshiInfo; // x20
  const MethodInfo *v25; // x3
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  EventExpeditionEntity_o *v27; // x21
  int32_t Item; // w22
  System_Action_o *v29; // x23
  System_Action_o *v30; // x24
  MissionNaviTransitionBoardItem_o *p__2__current; // x20

  v8 = this;
  if ( (byte_596A5D7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventExpeditionListViewObject__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__);
    sub_2213A60(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_2213A60(&EventExpeditionListViewManager___c_TypeInfo);
    byte_596A5D7 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = v8->fields.__4__this;
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_25;
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)EventExpeditionListViewManager__get_ObjectList(
                                                                           _4__this,
                                                                           0);
      v12 = this;
      v13 = EventExpeditionListViewManager___c_TypeInfo;
      if ( !*(&EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo, method, v11);
        v13 = EventExpeditionListViewManager___c_TypeInfo;
      }
      static_fields = v13->static_fields;
      _9__48_0 = (System_Action_object__o *)static_fields->__9__48_0;
      if ( !_9__48_0 )
      {
        if ( !*(&v13->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v13, method, v11);
          static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
        }
        v16 = (Il2CppObject *)static_fields->__9;
        _9__48_0 = (System_Action_object__o *)sub_2213CCC(System_Action_EventExpeditionListViewObject__TypeInfo);
        System_Action_object____ctor(
          _9__48_0,
          v16,
          Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
          0);
        v17 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
        v17->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v17->__9__48_0,
          (int32_t)_9__48_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      if ( !v12 )
        goto LABEL_25;
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)v12,
        (System_Action_T__o *)_9__48_0,
        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
      EventExpeditionListViewManager__SetCallBack(_4__this, 0);
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.SelectPieceIdxList;
      if ( !this )
        goto LABEL_25;
      hakkenshiInfo = _4__this->fields.hakkenshiInfo;
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)System_Collections_Generic_List_int___get_Item(
                                                                           (System_Collections_Generic_List_int__o *)this,
                                                                           0,
                                                                           (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !hakkenshiInfo )
        goto LABEL_25;
      HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, (int32_t)this, 0, v25);
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.touchPanel;
      if ( !this )
        goto LABEL_25;
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
      if ( !this )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.bitExpeditionStart;
      if ( !this )
        goto LABEL_25;
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
      if ( !this )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.selectEventExpeditionEntityList;
      if ( !this )
        goto LABEL_25;
      bitExpeditionStart = _4__this->fields.bitExpeditionStart;
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           0,
                                                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
      if ( !_4__this->fields.SelectPieceIdxList
        || (v27 = (EventExpeditionEntity_o *)this,
            Item = System_Collections_Generic_List_int___get_Item(
                     _4__this->fields.SelectPieceIdxList,
                     0,
                     (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__),
            v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
            System_Action___ctor(
              v29,
              (Il2CppObject *)_4__this,
              Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
              0),
            v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
            System_Action___ctor(
              v30,
              (Il2CppObject *)_4__this,
              Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
              0),
            !bitExpeditionStart) )
      {
LABEL_25:
        sub_2213CDC(this, method);
      }
      BitExpeditionStartComponent__SetUp(bitExpeditionStart, v27, Item, v29, v30, 0);
    }
  }
  else
  {
    v8->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    p__2__current[-1].fields._BoardType_k__BackingField = -1;
    sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *EventExpeditionListViewManager__CoWaitEffectPlay_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventExpeditionListViewManager__CoWaitEffectPlay_d__48__System_Collections_IEnumerator_Reset(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *EventExpeditionListViewManager__CoWaitEffectPlay_d__48__System_Collections_IEnumerator_get_Current(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventExpeditionListViewManager__CoWaitEffectPlay_d__48__System_IDisposable_Dispose(
        EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void EventExpeditionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A5C8 & 1) == 0 )
  {
    sub_2213A60(&EventExpeditionListViewManager___c_TypeInfo);
    byte_596A5C8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventExpeditionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventExpeditionListViewManager___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventExpeditionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventExpeditionListViewManager___c___ctor(EventExpeditionListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventExpeditionListViewManager___c___CheckServant_b__40_0(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_596A5C9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__);
    sub_2213A60(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
    byte_596A5C9 = 1;
  }
  v4 = sub_2213CCC(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0),
        !Instance) )
  {
    sub_2213CDC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void EventExpeditionListViewManager___c___CheckServant_b__40_1(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_596A5CA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__);
    sub_2213A60(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
    byte_596A5CA = 1;
  }
  v4 = sub_2213CCC(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0),
        !Instance) )
  {
    sub_2213CDC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void EventExpeditionListViewManager___c___CheckServant_b__40_4(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_596A5CB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__);
    sub_2213A60(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
    byte_596A5CB = 1;
  }
  v4 = sub_2213CCC(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0),
        !Instance) )
  {
    sub_2213CDC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (EventExpeditionListViewManager___c_o *)EventExpeditionListViewObject__GetItem(x, (const MethodInfo *)x)) == 0 )
  {
    sub_2213CDC(this, x);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, 0);
}


int32_t EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.idx;
}


void EventExpeditionListViewManager___c__DisplayClass32_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass32_0___Init_b__0(
        EventExpeditionListViewManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventExpeditionListViewManager___c__DisplayClass32_0_o *v3; // x19
  struct EventExpeditionListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *completeBtnSp; // x21
  __int64 v7; // x2
  struct EventExpeditionListViewManager_o *v8; // x8
  UILabel_o *completeBtnLb; // x20
  const MethodInfo *v10; // x3
  struct EventExpeditionListViewManager_o *v11; // x8

  v3 = this;
  if ( (byte_596A5CC & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18237/*"btn_completecheck_bg"*/);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_2213A60(&StringLiteral_6027/*"EXPEDITION_COMP_BTN_LABEL"*/);
    byte_596A5CC = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  eventId = v3->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_47569484(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_18237/*"btn_completecheck_bg"*/,
                                                                     0);
  v8 = v3->fields.__4__this;
  if ( !v8 )
    goto LABEL_16;
  completeBtnLb = v8->fields.completeBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v7);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_6027/*"EXPEDITION_COMP_BTN_LABEL"*/,
                                                                     0);
  if ( !completeBtnLb )
    goto LABEL_16;
  UILabel__set_text(completeBtnLb, (System_String_o *)this, 0);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v3->fields.__4__this;
  if ( !this
    || (EventExpeditionListViewManager__SetExpeditionObject((EventExpeditionListViewManager_o *)this, 0),
        (v11 = v3->fields.__4__this) == 0)
    || (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v11->fields.hakkenshiInfo) == 0
    || (HakkenshiListController__CreateHakkenshiWindow(
          (HakkenshiListController_o *)this,
          v3->fields.eventId,
          v11->fields.assetManager,
          v10),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v3->fields.__4__this) == 0)
    || (EventExpeditionListViewManager__CreateList(
          (EventExpeditionListViewManager_o *)this,
          v3->fields.evExpeditionEntList,
          v3->fields.eventId,
          0),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v3->fields.__4__this) == 0) )
  {
LABEL_16:
    sub_2213CDC(this, method);
  }
  EventExpeditionListViewManager__SetCallBack((EventExpeditionListViewManager_o *)this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass40_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass40_0___CheckServant_b__2(
        EventExpeditionListViewManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3
  Il2CppObject *Instance; // x19

  if ( (byte_596A5CD & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    sub_2213A60(&StringLiteral_13262/*"ServantCombine"*/);
    byte_596A5CD = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464916(v5, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v6 = Instance;
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_2213CDC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464828(v5, (System_String_o *)StringLiteral_13262/*"ServantCombine"*/, 0);
      if ( v4 )
      {
        v6 = v4;
        v8 = 32;
LABEL_12:
        v9 = (Il2CppObject *)v5;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}


void EventExpeditionListViewManager___c__DisplayClass40_1___ctor(
        EventExpeditionListViewManager___c__DisplayClass40_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass40_1___CheckServant_b__3(
        EventExpeditionListViewManager___c__DisplayClass40_1_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  AvalonSceneManager_o *v8; // x0
  int32_t v9; // w1
  Il2CppObject *v10; // x19
  Il2CppObject *Instance; // x19

  if ( (byte_596A5CE & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_13267/*"ServantEquipList"*/);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    sub_2213A60(&StringLiteral_13266/*"ServantEQCombine"*/);
    byte_596A5CE = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464916(v5, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = (AvalonSceneManager_o *)Instance;
        v9 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464828(v5, (System_String_o *)StringLiteral_13267/*"ServantEquipList"*/, 0);
      if ( v10 )
      {
        v8 = (AvalonSceneManager_o *)v10;
        v9 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_2213CDC(v6, v7);
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464828(v5, (System_String_o *)StringLiteral_13266/*"ServantEQCombine"*/, 0);
      if ( v4 )
      {
        v8 = (AvalonSceneManager_o *)v4;
        v9 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(v8, v9, 1, (Il2CppObject *)v5, 0);
        return;
      }
      goto LABEL_14;
  }
}


void EventExpeditionListViewManager___c__DisplayClass40_2___ctor(
        EventExpeditionListViewManager___c__DisplayClass40_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass40_2___CheckServant_b__5(
        EventExpeditionListViewManager___c__DisplayClass40_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596A5CF & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    byte_596A5CF = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48464916(v4, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_2213CDC(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
  }
}


void EventExpeditionListViewManager___c__DisplayClass45_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventExpeditionListViewManager___c__DisplayClass45_0___OnClickListView_b__0(
        EventExpeditionListViewManager___c__DisplayClass45_0_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionObj(_4__this, this->fields.obj, 0),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, isDecide);
  }
  EventExpeditionListViewManager__OnClickDecide(_4__this, isDecide, eventExpeditionEntity, pieceIdx, 0);
}


void EventExpeditionListViewManager___c__DisplayClass49_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass49_0___FinishResponse_b__0(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v19; // x8
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  __int64 *v22; // x22
  struct EventExpeditionListViewManager_resData_array *v23; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  __int64 v25; // x26
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x22
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x23
  int32_t currentEventId; // w20
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v30; // x24
  System_Action_o *closeCallback; // x25
  BattleDropItem_array *v32; // x3
  UserGameEntity_array *v33; // x4
  const MethodInfo *v34; // [xsp+8h] [xbp-68h]

  if ( (byte_596A5D0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_SetActive__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__);
    sub_2213A60(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
    byte_596A5D0 = 1;
  }
  v3 = sub_2213CCC(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  ActionExtensions__Call(this->fields.animFinishCallback, 0);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !LODWORD(res->max_length) )
    goto LABEL_15;
  v19 = res->m_Items[0];
  if ( !v19
    || (resultExpeditionRewardInfos = v19->fields.resultExpeditionRewardInfos,
        resultEventRewardInfos = v19->fields.resultEventRewardInfos,
        *(_QWORD *)(v3 + 16) = resultEventRewardInfos,
        v22 = (__int64 *)(v3 + 16),
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v3 + 16),
          (int32_t)resultEventRewardInfos,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v23 = this->fields.res) == 0) )
  {
LABEL_14:
    sub_2213CDC(v4, v5);
  }
  if ( !LODWORD(v23->max_length) )
LABEL_15:
    sub_2213CE4(v4);
  if ( !v23->m_Items[0] )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v25 = *v22;
  if ( !*v22 )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  v30 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v30, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
  closeCallback = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v3,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v32,
    v33,
    currentEventId,
    *(_DWORD *)(v25 + 24) != 0,
    v30,
    closeCallback,
    v34);
}


void EventExpeditionListViewManager___c__DisplayClass49_0___FinishResponse_b__3(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventExpeditionListViewManager__FinishResponseCallBack(_4__this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass49_1___ctor(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__1(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  il2cpp_array_size_t max_length; // x9
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  ExpeditionPointRewardDialogComponent_o *expeditionPointRewardDialog; // x20
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *v8; // x8
  struct EventExpeditionListViewManager_o *v9; // x8
  EventExpeditionEntity_o *v10; // x21
  BattleDropItem_array *v11; // x22
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v14; // x24
  const MethodInfo *v15; // x6
  System_Action_o *_9__2; // x25
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  v2 = this;
  if ( (byte_596A5D1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_SetActive__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__);
    byte_596A5D1 = 1;
  }
  resultEventRewardInfos = v2->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_17;
  max_length = resultEventRewardInfos->max_length;
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( max_length )
  {
    if ( CS___8__locals1 )
    {
      _4__this = CS___8__locals1->fields.__4__this;
      if ( _4__this )
      {
        this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)_4__this->fields.selectEventExpeditionEntityList;
        if ( this )
        {
          expeditionPointRewardDialog = _4__this->fields.expeditionPointRewardDialog;
          this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___get_Item(
                                                                             (System_Collections_Generic_List_object__o *)this,
                                                                             0,
                                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
          v8 = v2->fields.CS___8__locals1;
          if ( v8 )
          {
            v9 = v8->fields.__4__this;
            if ( v9 )
            {
              v10 = (EventExpeditionEntity_o *)this;
              v11 = v2->fields.resultEventRewardInfos;
              currentEventId = v9->fields.currentEventId;
              maskPanel = (Il2CppObject *)v9->fields.maskPanel;
              v14 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
              System_Action_bool____ctor(v14, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
              _9__2 = v2->fields.__9__2;
              if ( !_9__2 )
              {
                _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__2,
                  (Il2CppObject *)v2,
                  Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
                  0);
                v2->fields.__9__2 = _9__2;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2,
                  (int32_t)_9__2,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22);
              }
              if ( expeditionPointRewardDialog )
              {
                ExpeditionPointRewardDialogComponent__Open(
                  expeditionPointRewardDialog,
                  v10,
                  v11,
                  currentEventId,
                  v14,
                  _9__2,
                  v15);
                return;
              }
            }
          }
        }
      }
    }
LABEL_17:
    sub_2213CDC(this, method);
  }
  if ( !CS___8__locals1 )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_17;
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x20
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  System_Action_o *_9__3; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v2 = this;
  if ( (byte_596A5D2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__);
    byte_596A5D2 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  requestCallBack = _4__this->fields.requestCallBack;
  resultEventRewardInfos = v2->fields.resultEventRewardInfos;
  _9__3 = CS___8__locals1->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0);
    CS___8__locals1->fields.__9__3 = _9__3;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&CS___8__locals1->fields.__9__3,
      (int32_t)_9__3,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !requestCallBack )
LABEL_9:
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, struct BattleDropItem_array *, _QWORD, System_Action_o *, intptr_t))requestCallBack->fields.invoke_impl)(
    requestCallBack->fields.method_code,
    resultEventRewardInfos,
    0,
    _9__3,
    requestCallBack->fields.method);
}


void EventExpeditionListViewManager___c__DisplayClass51_0___ctor(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__1(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager___c__DisplayClass51_0_o *v2; // x19
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct EventExpeditionListViewManager_o *v4; // x8
  struct UITouchPress_o *touchPanel; // x9
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  __int64 size; // x2
  int v8; // w10
  struct UITouchPress_o *v9; // x8
  EventDelegate_Callback_o *_9__3; // x21
  System_Collections_Generic_List_EventDelegate__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  v2 = this;
  if ( (byte_596A5D3 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
    byte_596A5D3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)_4__this->fields.touchPanel;
  if ( !this )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_17;
  touchPanel = v4->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_17;
  onClick = touchPanel->fields.onClick;
  if ( !onClick )
    goto LABEL_17;
  size = (unsigned int)onClick->fields._size;
  v8 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v8;
  if ( (int)size >= 1 )
  {
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_17;
  }
  v9 = v4->fields.touchPanel;
  if ( !v9 )
LABEL_17:
    sub_2213CDC(this, method);
  _9__3 = v2->fields.__9__3;
  v11 = v9->fields.onClick;
  if ( !_9__3 )
  {
    _9__3 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__3,
      (Il2CppObject *)v2,
      (intptr_t)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v12, v13, v14, v15, v16, v17);
  }
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, method, size);
  EventDelegate__Set_56322328(v11, _9__3, 0);
}


void EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__3(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct UITouchPress_o *touchPanel; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x8
  __int64 size; // x2
  int v11; // w9
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct EventExpeditionListViewManager_o *v19; // x8

  if ( (byte_596A5D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
    sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__);
    byte_596A5D4 = 1;
  }
  v3 = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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
  v11 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v11;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__4, (int32_t)_9__4, v13, v14, v15, v16, v17, v18);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, size);
  Request_object = NetworkManager__getRequest_object_(
                     _9__4,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v19 = this->fields.__4__this;
  if ( !v19 || !Request_object )
LABEL_17:
    sub_2213CDC(Request_object, v6);
  EventExpeditionFinishRequest__beginRequest(
    (EventExpeditionFinishRequest_o *)Request_object,
    v19->fields.currentEventId,
    this->fields.idxList,
    0);
}


void EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__4(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventExpeditionListViewManager___c__DisplayClass51_0_o *v4; // x20
  System_Action_o *_9__5; // x23
  EventExpeditionListViewManager_o *_4__this; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v4 = this;
  if ( (byte_596A5D5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_2213A60(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__);
    byte_596A5D5 = 1;
  }
  _9__5 = v4->fields.__9__5;
  _4__this = v4->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_2213CDC(this, result);
  EventExpeditionListViewManager__FinishResponse(_4__this, result, _9__5, 0);
}


void EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__5(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0
  struct EventExpeditionListViewManager_o *v4; // x8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct EventExpeditionListViewManager_o *v8; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  __int64 v10; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_int__o *v11; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A5D6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_596A5D6 = 1;
  }
  _4__this = this->fields.__4__this;
  memset(&v12, 0, sizeof(v12));
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, 0), (v4 = this->fields.__4__this) == 0)
    || (_4__this = (EventExpeditionListViewManager_o *)v4->fields.SelectPieceIdxList) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v10 = 0;
  v11 = &v12;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v12,
           (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v5 )
      break;
    v8 = this->fields.__4__this;
    if ( !v8 )
      sub_2213CDC(v5, v6);
    hakkenshiInfo = v8->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_2213CDC(0, v6);
    HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, v12.fields._current, 1, v7);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v12,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void EventExpeditionListViewManager___c__DisplayClass51_1___ctor(
        EventExpeditionListViewManager___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventExpeditionListViewManager___c__DisplayClass51_1___OnClickCompleteView_b__2(
        EventExpeditionListViewManager___c__DisplayClass51_1_o *this,
        ExpeditionInfo_o *x,
        const MethodInfo *method)
{
  struct EventExpeditionEntity_o *entity; // x8

  if ( !x || (entity = this->fields.entity) == 0 )
    sub_2213CDC(this, x);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}