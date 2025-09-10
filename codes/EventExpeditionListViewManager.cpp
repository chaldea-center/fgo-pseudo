void EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_int__o *v4; // x20

  if ( (byte_4C215EA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_4C215EA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v3;
  sub_1C2D434(&this->fields.selectEventExpeditionEntityList);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v4;
  sub_1C2D434(&this->fields.SelectPieceIdxList);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


bool EventExpeditionListViewManager__CheckEventEnd(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C215E0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C215E0 = 1;
  }
  entity = 0;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0);
  if ( !entity )
LABEL_14:
    sub_1C2D6EC(Master_object, v4);
  return (__int64)Master_object >= (__int64)entity[6].klass;
}


bool EventExpeditionListViewManager__CheckServant(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  __int64 Instance; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x20
  Il2CppObject *MasterData_object; // x21
  CommonUI_o *v7; // x20
  int32_t v8; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v10; // x22
  Il2CppObject *v11; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  CommonUI_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  CommonUI_o *v17; // x20
  int32_t v18; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v20; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v21; // x0
  int32_t Count; // w20
  CommonUI_o *v23; // x21
  BalanceConfig_c *v24; // x8
  Il2CppObject *v25; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v26; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C215DC & 1) == 0 )
  {
    sub_1C2D490(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__);
    sub_1C2D490(&EventExpeditionListViewManager___c_TypeInfo);
    byte_4C215DC = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v5 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v7 = (CommonUI_o *)Instance;
    v8 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = (__int64)EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = (__int64)EventExpeditionListViewManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 8LL);
    if ( !v10 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventExpeditionListViewManager___c_TypeInfo;
      }
      v11 = **(Il2CppObject ***)(Instance + 184);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2D6DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v11,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
        0);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = v10;
      Instance = sub_1C2D434(&static_fields->__9__40_0);
    }
    if ( !v7 )
      goto LABEL_45;
    v13 = v7;
    v14 = v8;
    v15 = svtKeep;
    v16 = 0;
    goto LABEL_42;
  }
  Instance = UserServantMaster__CheckEquipAdd(v5, 1, 1, 0);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v17 = (CommonUI_o *)Instance;
    v18 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = (__int64)EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = (__int64)EventExpeditionListViewManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 16LL);
    if ( !v10 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventExpeditionListViewManager___c_TypeInfo;
      }
      v20 = **(Il2CppObject ***)(Instance + 184);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2D6DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v20,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0);
      v21 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v21->__9__40_1 = v10;
      Instance = sub_1C2D434(&v21->__9__40_1);
    }
    if ( !v17 )
      goto LABEL_45;
    v16 = 1;
    v13 = v17;
    v14 = v18;
LABEL_41:
    v15 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v13, v14, v15, v16, 1, v10, 1, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
      return 0;
    }
LABEL_45:
    sub_1C2D6EC(Instance, v4);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v23 = (CommonUI_o *)Instance;
    if ( !byte_4C2162B )
    {
      sub_1C2D490(&BalanceConfig_TypeInfo);
      byte_4C2162B = 1;
    }
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    Instance = (__int64)EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v24->static_fields->CommandCodeFrameMax;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = (__int64)EventExpeditionListViewManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 24LL);
    if ( !v10 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventExpeditionListViewManager___c_TypeInfo;
      }
      v25 = **(Il2CppObject ***)(Instance + 184);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2D6DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v25,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0);
      v26 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v26->__9__40_4 = v10;
      Instance = sub_1C2D434(&v26->__9__40_4);
    }
    if ( !v23 )
      goto LABEL_45;
    v16 = 2;
    v13 = v23;
    v14 = Count;
    goto LABEL_41;
  }
  return 1;
}


System_Collections_IEnumerator_o *EventExpeditionListViewManager__CoWaitEffectPlay(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4C215E4 & 1) == 0 )
  {
    sub_1C2D490(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
    byte_4C215E4 = 1;
  }
  v3 = sub_1C2D6DC(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434(v3 + 32);
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
  __int64 v9; // x2
  __int64 v10; // x3
  int max_length; // w8
  unsigned int v12; // w27
  EventExpeditionEntity_o *v13; // x23
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v16; // x26
  EventExpeditionListViewItem_o *v17; // x22
  const MethodInfo *v18; // x6
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4C215D7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&EventExpeditionListViewItem_TypeInfo);
    sub_1C2D490(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4C215D7 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !evExpeditionEntList )
    goto LABEL_15;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C2D6F4(itemList, v8, v9, v10);
      v13 = evExpeditionEntList->m_Items[v12];
      if ( !v13 )
        break;
      idx = v13->fields.idx;
      assetManager = this->fields.assetManager;
      v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0);
      v17 = (EventExpeditionListViewItem_o *)sub_1C2D6DC(EventExpeditionListViewItem_TypeInfo);
      EventExpeditionListViewItem___ctor(v17, idx, v13, eventId, assetManager, v16, v18);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v17,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v17;
        itemList = (System_Collections_Generic_List_object__o *)sub_1C2D434(v22 + 4);
      }
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_1C2D6EC(itemList, v8);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void EventExpeditionListViewManager__DestroyList(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  ExpeditionAssetManager_o *assetManager; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    ExpeditionAssetManager__Release(assetManager, this->fields.currentEventId, v3);
}


void EventExpeditionListViewManager__FinishResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        System_Action_o *animFinishCallback,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x20
  UnityEngine_Component_o *touchPanel; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x21
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_4C215E5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__);
    sub_1C2D490(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C215E5 = 1;
  }
  v7 = (Il2CppObject *)sub_1C2D6DC(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_11;
  v7[1].klass = (Il2CppClass *)animFinishCallback;
  sub_1C2D434(&v7[1]);
  v7[2].klass = (Il2CppClass *)this;
  sub_1C2D434(&v7[2]);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
    return;
  v10 = (Il2CppObject *)System_String__Concat_63496112(
                          (System_String_o *)StringLiteral_15801/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16055/*"]"*/,
                          0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7[1].monitor = JsonManager__DeserializeArray_object_(
                    v10,
                    (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  sub_1C2D434(&v7[1].monitor);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          v7,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0),
        !bitExpeditionFinish) )
  {
LABEL_11:
    sub_1C2D6EC(touchPanel, v9);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v12, v13);
}


void EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v7; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_4C215E6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_4C215E6 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v3;
  sub_1C2D434(&this->fields.selectEventExpeditionEntityList);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v4;
  sub_1C2D434(&this->fields.SelectPieceIdxList);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (bitExpeditionFinish = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0)) == 0 )
  {
    sub_1C2D6EC(bitExpeditionFinish, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v7);
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
  int32_t v14; // w8
  UILabel_o *expeditionNoticeLb; // x21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  ExpeditionAssetManager_o *assetManager; // x21
  struct ExpeditionAssetManager_o **p_assetManager; // x19
  ExpeditionAssetManager_o *v20; // x21
  const MethodInfo *v21; // x1
  int32_t v22; // w19
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_4C215D6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&ExpeditionAssetManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__);
    sub_1C2D490(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5802/*"EXPEDITION_PUSH_BTN_LABEL"*/);
    byte_4C215D6 = 1;
  }
  v11 = sub_1C2D6DC(EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_13;
  *(_DWORD *)(v11 + 16) = eventId;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C2D434(v11 + 24);
  *(_QWORD *)(v11 + 32) = evExpeditionEntList;
  sub_1C2D434(v11 + 32);
  v14 = *(_DWORD *)(v11 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v14;
  sub_1C2D434(&this->fields.expeditionCallback);
  this->fields.requestCallBack = requestCallBack;
  sub_1C2D434(&this->fields.requestCallBack);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_5802/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0);
  if ( !expeditionNoticeLb )
    goto LABEL_13;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v16);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v17);
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
    p_assetManager = &this->fields.assetManager;
    v20 = (ExpeditionAssetManager_o *)sub_1C2D6DC(ExpeditionAssetManager_TypeInfo);
    ExpeditionAssetManager___ctor(v20, v21);
    *p_assetManager = v20;
    sub_1C2D434(p_assetManager);
    assetManager = *p_assetManager;
  }
  v22 = *(_DWORD *)(v11 + 16);
  v23 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v11,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0);
  if ( !assetManager )
LABEL_13:
    sub_1C2D6EC(touchPanel, v13);
  ExpeditionAssetManager__GetAssets(assetManager, v22, v23, v24);
}


void EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C215DE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    byte_4C215DE = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    ObjectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v6.fields._current,
      v5);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
}


void EventExpeditionListViewManager__InitEventExpeditionObj(
        EventExpeditionListViewManager_o *this,
        EventExpeditionListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4C215DF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager_o *)sub_1C2D490(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    byte_4C215DF = 1;
  }
  if ( !obj
    || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0 )
  {
    sub_1C2D6EC(this, obj);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)obj);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, v4, Method_EventExpeditionListViewManager_OnMoveEnd__, 0);
  EventExpeditionListViewObject__Init(obj, v5, v6);
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
  if ( !byte_4C20DA6 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0)) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(this, obj);
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
  if ( !byte_4C20DA6 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
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
    sub_1C2D6EC(this, dialog);
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
  __int64 v13; // x1
  Il2CppObject *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+0h] [xbp-80h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C215DD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__);
    sub_1C2D490(&Method_EventExpeditionListViewManager_OnClickCompleteButton__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C215DD = 1;
  }
  memset(&v24, 0, sizeof(v24));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                (UserEventExpeditionMaster_o *)Instance,
                                this->fields.currentEventId,
                                0);
  if ( !Instance )
    goto LABEL_28;
  v5 = (System_Collections_Generic_List_object__o *)Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
    || !EventExpeditionListViewManager__CheckServant((EventExpeditionListViewManager_o *)Instance, v4) )
  {
    goto LABEL_20;
  }
  Instance = (DataManager_o *)this->fields.maskPanel;
  if ( !Instance )
LABEL_28:
    sub_1C2D6EC(Instance, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v5,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v24 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v24.fields._current;
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v8 )
      sub_1C2D6EC(0, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v8,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_1C2D6EC(MasterData_object, v11);
    if ( !MasterData_object )
      sub_1C2D6EC(0, v11);
    v12 = EventExpeditionMaster__TryGetEntity(
            (EventExpeditionMaster_o *)MasterData_object,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            0);
    if ( !v6 )
      sub_1C2D6EC(v12, v13);
    v14 = (Il2CppObject *)entity;
    items = v6->fields._items;
    v16 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
    ++v6->fields._version;
    if ( !items )
      sub_1C2D6EC(v12, v14);
    size = v6->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        v14,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v6->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v14;
      sub_1C2D434(v18 + 4);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v6,
    v19);
LABEL_20:
  v20 = Method_EventExpeditionListViewManager_OnClickCompleteButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickCompleteButton__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C2D4A8(Method_EventExpeditionListViewManager_OnClickCompleteButton__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C2D474(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
}


void EventExpeditionListViewManager__OnClickCompleteView(
        EventExpeditionListViewManager_o *this,
        System_Collections_Generic_List_EventExpeditionEntity__o *eventExpeditionEntities,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x24
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x22
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Func_object__bool__o *v16; // x25
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  __int64 klass_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  EventExpeditionListViewManager___c_c *v23; // x0
  System_Func_object__int__o *_9__51_0; // x22
  Il2CppObject *v25; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  const MethodInfo *v28; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v30; // x19
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x4
  System_Collections_Generic_List_EventExpeditionEntity__o *v33; // [xsp+8h] [xbp-A8h]
  Il2CppObject *v34; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+30h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C215E7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__);
    sub_1C2D490(&System_Func_ExpeditionInfo__bool__TypeInfo);
    sub_1C2D490(&System_Func_EventExpeditionEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__);
    sub_1C2D490(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__);
    sub_1C2D490(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    sub_1C2D490(&EventExpeditionListViewManager___c_TypeInfo);
    byte_4C215E7 = 1;
  }
  entity = 0;
  memset(&v36, 0, sizeof(v36));
  v5 = (Il2CppObject *)sub_1C2D6DC(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_38;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v5[1]);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_1C2D434(&this->fields.selectEventExpeditionEntityList);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_38;
  v34 = v5;
  Instance = (DataManager_o *)UserEventExpeditionMaster__TryGetEntity(
                                (UserEventExpeditionMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                this->fields.currentEventId,
                                0);
  if ( !eventExpeditionEntities )
    goto LABEL_38;
  v33 = eventExpeditionEntities;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v9 = (Il2CppObject *)sub_1C2D6DC(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    System_Object___ctor(v9, 0);
    if ( !v9 )
      sub_1C2D6EC(v10, v11);
    v9[1].klass = (Il2CppClass *)v36.fields._current;
    v12 = sub_1C2D434(&v9[1]);
    if ( !entity )
      sub_1C2D6EC(v12, v13);
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    v16 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ExpeditionInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      v9,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      0);
    v17 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v16,
            (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v17 )
      sub_1C2D6EC(0, v18);
    if ( !SelectPieceIdxList )
      sub_1C2D6EC(v17, v18);
    klass_high = HIDWORD(v17[1].klass);
    items = SelectPieceIdxList->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++SelectPieceIdxList->fields._version;
    if ( !items )
      sub_1C2D6EC(v17, klass_high);
    size = SelectPieceIdxList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        SelectPieceIdxList,
        klass_high,
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      SelectPieceIdxList->fields._size = size + 1;
      items->m_Items[size] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v23 = EventExpeditionListViewManager___c_TypeInfo;
  if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
    v23 = EventExpeditionListViewManager___c_TypeInfo;
  }
  _9__51_0 = (System_Func_object__int__o *)v23->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = EventExpeditionListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__51_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__51_0,
      v25,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      0);
    static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_1C2D434(&static_fields->__9__51_0);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                               (System_Func_TSource__TResult__o *)_9__51_0,
                                                               (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v34[1].monitor = System_Linq_Enumerable__ToArray_int_(
                     v27,
                     (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  sub_1C2D434(&v34[1].monitor);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  EventExpeditionListViewManager__RequestListObject(this, v28);
  Instance = (DataManager_o *)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v30 = this->fields.SelectPieceIdxList,
        v31 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v31,
          v34,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0),
        !bitExpeditionFinish) )
  {
LABEL_38:
    sub_1C2D6EC(Instance, v7);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v30, v31, 0, v32);
}


// local variable allocation has failed, the output may be wrong!
void EventExpeditionListViewManager__OnClickDecide(
        EventExpeditionListViewManager_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v11; // x9
  __int64 klass_low; // x10
  intptr_t v13; // x8
  const MethodInfo *v14; // x2
  intptr_t v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  NetworkManager_ResultCallbackFunc_o *v18; // x22

  if ( (byte_4C215E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventExpeditionListViewManager_StartResponse__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_1C2D490(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C215E2 = 1;
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
    sub_1C2D6EC(maskPanel, isDecide);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.selectEventExpeditionEntityList;
  if ( !maskPanel )
    goto LABEL_23;
  m_CachedPtr = maskPanel->fields.m_CachedPtr;
  v11 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_23;
  klass_low = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskPanel,
      (Il2CppObject *)eventExpeditionEntity,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = m_CachedPtr + 8 * klass_low;
    LODWORD(maskPanel[1].klass) = klass_low + 1;
    *(_QWORD *)(v13 + 32) = eventExpeditionEntity;
    sub_1C2D434(v13 + 32);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.SelectPieceIdxList;
  if ( !maskPanel )
    goto LABEL_23;
  v15 = maskPanel->fields.m_CachedPtr;
  v16 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !v15 )
    goto LABEL_23;
  v17 = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)v17 >= *(_DWORD *)(v15 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)maskPanel,
      pieceIdx,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(maskPanel[1].klass) = v17 + 1;
    *(_DWORD *)(v15 + 4 * v17 + 32) = pieceIdx;
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.expeditionConfirmDialog;
  if ( !maskPanel )
    goto LABEL_23;
  ExpeditionConfirmDialogComponent__Close_31548908((ExpeditionConfirmDialogComponent_o *)maskPanel, 0, v14);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager_StartResponse__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskPanel = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                            v18,
                                            (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
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
  Il2CppObject *v5; // x21
  void *maskPanel; // x0
  const MethodInfo *v7; // x1
  EventExpeditionListViewObject_o **p_monitor; // x22
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v10; // x20
  EventExpeditionEntity_o *v11; // x20
  bool v12; // w22
  _QWORD *v13; // x8
  System_Reflection_MethodBase_o *v14; // x0
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v16; // x22
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x6
  _QWORD *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  EventExpeditionListViewManager_o *v22; // x0
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_object__o *v24; // x21
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  const MethodInfo *v29; // x2

  if ( (byte_4C215E1 & 1) == 0 )
  {
    sub_1C2D490(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C2D490(&Method_EventExpeditionListViewManager_OnClickListView__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__);
    sub_1C2D490(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
    byte_4C215E1 = 1;
  }
  v5 = (Il2CppObject *)sub_1C2D6DC(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_31;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v5[1]);
  v5[1].monitor = obj;
  p_monitor = (EventExpeditionListViewObject_o **)&v5[1].monitor;
  sub_1C2D434(&v5[1].monitor);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  maskPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_31;
  maskPanel = DataManager__GetMasterData_object_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*p_monitor )
    goto LABEL_31;
  currentEventId = this->fields.currentEventId;
  v10 = (EventExpeditionMaster_o *)maskPanel;
  maskPanel = EventExpeditionListViewObject__GetItem(*p_monitor, v7);
  if ( !maskPanel )
    goto LABEL_31;
  if ( !v10 )
    goto LABEL_31;
  maskPanel = EventExpeditionMaster__GetEntity(v10, currentEventId, *((_DWORD *)maskPanel + 5), 0);
  if ( !*p_monitor )
    goto LABEL_31;
  v11 = (EventExpeditionEntity_o *)maskPanel;
  switch ( (*p_monitor)->fields.dispMode )
  {
    case 0:
      goto LABEL_20;
    case 1:
    case 2:
      v12 = EventExpeditionListViewManager__CheckEventEnd(this, v7);
      v13 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C2D4A8(Method_EventExpeditionListViewManager_OnClickListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C2D474(v13, v13[4]);
      if ( v12 )
        goto LABEL_19;
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v16 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_1C2D6DC(ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v16,
        v5,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        v17);
      if ( !expeditionConfirmDialog )
        goto LABEL_31;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v11, 1, v16, 1, 0, v18);
      return;
    case 3:
      v19 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1C2D4A8(Method_EventExpeditionListViewManager_OnClickListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C2D474(v19, v19[4]);
LABEL_19:
      OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0);
      goto LABEL_20;
    case 4:
      v20 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1C2D4A8(Method_EventExpeditionListViewManager_OnClickListView__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C2D474(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
      if ( !EventExpeditionListViewManager__CheckServant(v22, v23) )
      {
LABEL_20:
        maskPanel = this->fields.maskPanel;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
          return;
        }
LABEL_31:
        sub_1C2D6EC(maskPanel, v7);
      }
      v24 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v24,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v24 )
        goto LABEL_31;
      items = v24->fields._items;
      v26 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        goto LABEL_31;
      size = v24->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)v11,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v11;
        sub_1C2D434(v28 + 4);
      }
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v24,
        v29);
      return;
    default:
      return;
  }
}


void EventExpeditionListViewManager__OnClickNoticeButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C215E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventExpeditionListViewManager_OnClickNoticeButton__);
    byte_4C215E9 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = isButtonOn ^ 1;
  v4 = Method_EventExpeditionListViewManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_EventExpeditionListViewManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0, 0);
  EventRewardSaveData__SetExpeditionNotification(this->fields.isButtonOn, 0);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v6);
}


void EventExpeditionListViewManager__OnMoveEnd(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4C215DA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C215DA = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
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
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C215D9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__);
    sub_1C2D490(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C215D9 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C2D6EC(0, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v8, v9);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v7, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  UnityEngine_Object_o *expeditionConfirmDialog; // x21
  struct ExpeditionConfirmDialogComponent_o **p_expeditionConfirmDialog; // x20
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct ExpeditionAssetManager_o *assetManager; // x8
  Il2CppObject *expeditionConfirmDialog_k__BackingField; // x21
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  struct ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  struct ExpeditionAssetManager_o *v13; // x8
  Il2CppObject *expeditionRewardDialog_k__BackingField; // x21
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  struct ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  struct ExpeditionAssetManager_o *v18; // x8
  Il2CppObject *expeditionPointRewardDialog_k__BackingField; // x21
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v22; // x8
  Il2CppObject *bitExpeditionStart_k__BackingField; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v27; // x8
  Il2CppObject *bitExpeditionFinish_k__BackingField; // x20
  UnityEngine_GameObject_o *v29; // x1
  const MethodInfo *v30; // x2

  if ( (byte_4C215D5 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C215D5 = 1;
  }
  expeditionConfirmDialog = (UnityEngine_Object_o *)this->fields.expeditionConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionConfirmDialog = &this->fields.expeditionConfirmDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_49;
    expeditionConfirmDialog_k__BackingField = (Il2CppObject *)assetManager->fields._expeditionConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       expeditionConfirmDialog_k__BackingField,
                                       (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    this->fields.expeditionConfirmDialog = (struct ExpeditionConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                          v5,
                                                                                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    sub_1C2D434(&this->fields.expeditionConfirmDialog);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v10);
  }
  v5 = (UnityEngine_GameObject_o *)*p_expeditionConfirmDialog;
  if ( !*p_expeditionConfirmDialog )
    goto LABEL_49;
  ExpeditionConfirmDialogComponent__Init((ExpeditionConfirmDialogComponent_o *)v5, this->fields.currentEventId, v7);
  expeditionRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionRewardDialog = &this->fields.expeditionRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v13 = this->fields.assetManager;
    if ( !v13 )
      goto LABEL_49;
    expeditionRewardDialog_k__BackingField = (Il2CppObject *)v13->fields._expeditionRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       expeditionRewardDialog_k__BackingField,
                                       (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    this->fields.expeditionRewardDialog = (struct ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                        v5,
                                                                                        (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    sub_1C2D434(&this->fields.expeditionRewardDialog);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v15);
  }
  v5 = (UnityEngine_GameObject_o *)*p_expeditionRewardDialog;
  if ( !*p_expeditionRewardDialog )
    goto LABEL_49;
  ExpeditionRewardDialogComponent__Init((ExpeditionRewardDialogComponent_o *)v5, v6);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionPointRewardDialog = &this->fields.expeditionPointRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v18 = this->fields.assetManager;
    if ( !v18 )
      goto LABEL_49;
    expeditionPointRewardDialog_k__BackingField = (Il2CppObject *)v18->fields._expeditionPointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       expeditionPointRewardDialog_k__BackingField,
                                       (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    this->fields.expeditionPointRewardDialog = (struct ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                                  v5,
                                                                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    sub_1C2D434(&this->fields.expeditionPointRewardDialog);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v20);
  }
  v5 = (UnityEngine_GameObject_o *)*p_expeditionPointRewardDialog;
  if ( !*p_expeditionPointRewardDialog )
    goto LABEL_49;
  ExpeditionPointRewardDialogComponent__Init((ExpeditionPointRewardDialogComponent_o *)v5, v6);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionStart, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v22 = this->fields.assetManager;
    if ( !v22 )
      goto LABEL_49;
    bitExpeditionStart_k__BackingField = (Il2CppObject *)v22->fields._bitExpeditionStart_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       bitExpeditionStart_k__BackingField,
                                       (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    this->fields.bitExpeditionStart = (struct BitExpeditionStartComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                v5,
                                                                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    sub_1C2D434(&this->fields.bitExpeditionStart);
    v5 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v5 )
      goto LABEL_49;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v25);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionFinish, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v27 = this->fields.assetManager;
    if ( v27 )
    {
      bitExpeditionFinish_k__BackingField = (Il2CppObject *)v27->fields._bitExpeditionFinish_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         bitExpeditionFinish_k__BackingField,
                                         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        this->fields.bitExpeditionFinish = (struct BitExpeditionFinishComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                      v5,
                                                                                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        sub_1C2D434(&this->fields.bitExpeditionFinish);
        v5 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v5 )
        {
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v29, v30);
          return;
        }
      }
    }
LABEL_49:
    sub_1C2D6EC(v5, v6);
  }
}


void EventExpeditionListViewManager__SetMaskPanel(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
  this->fields.maskPanel = mask;
  sub_1C2D434(&this->fields.maskPanel);
}


void EventExpeditionListViewManager__SetObjectItem(
        EventExpeditionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 naturalAligment; // x10

  if ( (byte_4C215D8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    sub_1C2D490(&EventExpeditionListViewObject_TypeInfo);
    byte_4C215D8 = 1;
  }
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0);
  if ( !obj
    || (naturalAligment = EventExpeditionListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_1C2D6EC(v7, v8);
  }
  EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)obj, v6, v9);
}


void EventExpeditionListViewManager__StartResponse(
        EventExpeditionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4C215E3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C215E3 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  }
}


void EventExpeditionListViewManager__UpdateButtonDisp(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v4; // x8

  if ( (byte_4C215E8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17501/*"btn_on"*/);
    sub_1C2D490(&StringLiteral_17500/*"btn_off"*/);
    byte_4C215E8 = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_1C2D6EC(0, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17501/*"btn_on"*/;
  else
    v4 = &StringLiteral_17500/*"btn_off"*/;
  UISprite__set_spriteName(expeditionNoticeBtnSp, (System_String_o *)*v4, 0);
}


void EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x8

  if ( (byte_4C215DB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C215DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0
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
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C215EB & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4C215EB = 1;
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
    sub_1C2D6EC(maskPanel, method);
  }
  v8 = touchPanel->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49155444(v8, v9, 0);
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
  System_Collections_Generic_List_int__o *v8; // x20

  if ( (byte_4C215ED & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_4C215ED = 1;
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
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v7;
  sub_1C2D434(&this->fields.selectEventExpeditionEntityList);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v8;
  sub_1C2D434(&this->fields.SelectPieceIdxList);
  touchPanel = (UnityEngine_Component_o *)this->fields.bitExpeditionStart;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0)) == 0 )
  {
LABEL_12:
    sub_1C2D6EC(touchPanel, method);
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

  if ( (byte_4C215EC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4C215EC = 1;
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
    sub_1C2D6EC(touchPanel, method);
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
    sub_1C2D6EC(0, method);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight(hakkenshiInfo, 0);
}


System_Collections_Generic_List_EventExpeditionListViewObject__o *EventExpeditionListViewManager__get_ObjectList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C215D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C215D4 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C2D434(v14 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v2; // x20
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct EventExpeditionListViewManager_o *_4__this; // x19
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v7; // x20
  EventExpeditionListViewManager___c_c *v8; // x8
  System_Action_object__o *_9__48_0; // x21
  Il2CppObject *v10; // x22
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x1
  HakkenshiListController_o *hakkenshiInfo; // x20
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  EventExpeditionEntity_o *v15; // x21
  int32_t Item; // w22
  System_Action_o *v17; // x23
  System_Action_o *v18; // x24
  const MethodInfo *v19; // x5

  v2 = this;
  if ( (byte_4C215FD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_EventExpeditionListViewObject__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__);
    sub_1C2D490(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_1C2D490(&EventExpeditionListViewManager___c_TypeInfo);
    byte_4C215FD = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)EventExpeditionListViewManager__get_ObjectList(
                                                                         _4__this,
                                                                         method);
    v7 = this;
    v8 = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v8 = EventExpeditionListViewManager___c_TypeInfo;
    }
    _9__48_0 = (System_Action_object__o *)v8->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = EventExpeditionListViewManager___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__48_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_EventExpeditionListViewObject__TypeInfo);
      System_Action_object____ctor(
        _9__48_0,
        v10,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        0);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_1C2D434(&static_fields->__9__48_0);
    }
    if ( !v7 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v7,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    _4__this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)_4__this, 0);
    EventExpeditionListViewManager__RequestListObject(_4__this, v12);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.SelectPieceIdxList;
    if ( !this )
      goto LABEL_25;
    hakkenshiInfo = _4__this->fields.hakkenshiInfo;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)System_Collections_Generic_List_int___get_Item(
                                                                         (System_Collections_Generic_List_int__o *)this,
                                                                         0,
                                                                         (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !hakkenshiInfo )
      goto LABEL_25;
    HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, (int32_t)this, 0, 0);
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
                                                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    if ( !_4__this->fields.SelectPieceIdxList
      || (v15 = (EventExpeditionEntity_o *)this,
          Item = System_Collections_Generic_List_int___get_Item(
                   _4__this->fields.SelectPieceIdxList,
                   0,
                   (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__),
          v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
          System_Action___ctor(
            v17,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
            0),
          v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
          System_Action___ctor(
            v18,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
            0),
          !bitExpeditionStart) )
    {
LABEL_25:
      sub_1C2D6EC(this, method);
    }
    BitExpeditionStartComponent__SetUp(bitExpeditionStart, v15, Item, v17, v18, v19);
  }
  else if ( !_1__state )
  {
    v2->fields.__2__current = 0;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_1C2D434(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C215EE & 1) == 0 )
  {
    sub_1C2D490(&EventExpeditionListViewManager___c_TypeInfo);
    byte_4C215EE = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventExpeditionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventExpeditionListViewManager___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v1;
  sub_1C2D434(EventExpeditionListViewManager___c_TypeInfo->static_fields);
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

  if ( (byte_4C215EF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__);
    sub_1C2D490(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
    byte_4C215EF = 1;
  }
  v4 = sub_1C2D6DC(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C215F0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__);
    sub_1C2D490(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
    byte_4C215F0 = 1;
  }
  v4 = sub_1C2D6DC(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C215F1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__);
    sub_1C2D490(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
    byte_4C215F1 = 1;
  }
  v4 = sub_1C2D6DC(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v5, v6);
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
    sub_1C2D6EC(this, x);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)x);
}


int32_t EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
  EventExpeditionListViewManager___c__DisplayClass32_0_o *v2; // x19
  struct EventExpeditionListViewManager_o *_4__this; // x8
  int32_t eventId; // w21
  UISprite_o *completeBtnSp; // x20
  struct EventExpeditionListViewManager_o *v6; // x8
  UILabel_o *completeBtnLb; // x20
  struct EventExpeditionListViewManager_o *v8; // x8
  const MethodInfo *v9; // x3
  struct EventExpeditionListViewManager_o *v10; // x19
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_4C215F2 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17467/*"btn_completecheck_bg"*/);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_1C2D490(&StringLiteral_5787/*"EXPEDITION_COMP_BTN_LABEL"*/);
    byte_4C215F2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  eventId = v2->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_40385372(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_17467/*"btn_completecheck_bg"*/,
                                                                     0);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_16;
  completeBtnLb = v6->fields.completeBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_5787/*"EXPEDITION_COMP_BTN_LABEL"*/,
                                                                     0);
  if ( !completeBtnLb )
    goto LABEL_16;
  UILabel__set_text(completeBtnLb, (System_String_o *)this, 0);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventExpeditionListViewManager__SetExpeditionObject((EventExpeditionListViewManager_o *)this, method),
        (v8 = v2->fields.__4__this) == 0)
    || (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v8->fields.hakkenshiInfo) == 0
    || (HakkenshiListController__CreateHakkenshiWindow(
          (HakkenshiListController_o *)this,
          v2->fields.eventId,
          v8->fields.assetManager,
          0),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this) == 0)
    || (EventExpeditionListViewManager__CreateList(
          (EventExpeditionListViewManager_o *)this,
          v2->fields.evExpeditionEntList,
          v2->fields.eventId,
          v9),
        (v10 = v2->fields.__4__this) == 0) )
  {
LABEL_16:
    sub_1C2D6EC(this, method);
  }
  v10->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)v10, 0);
  EventExpeditionListViewManager__RequestListObject(v10, v11);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4C215F3 & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12682/*"SellServant"*/);
    sub_1C2D490(&StringLiteral_12718/*"ServantCombine"*/);
    byte_4C215F3 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257388(v5, (System_String_o *)StringLiteral_12682/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C2D6EC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v5, (System_String_o *)StringLiteral_12718/*"ServantCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4C215F4 & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12722/*"ServantEquipList"*/);
    sub_1C2D490(&StringLiteral_12682/*"SellServant"*/);
    sub_1C2D490(&StringLiteral_12721/*"ServantEQCombine"*/);
    byte_4C215F4 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257388(v5, (System_String_o *)StringLiteral_12682/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C2D6EC(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v5, (System_String_o *)StringLiteral_12722/*"ServantEquipList"*/, 0);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v5, (System_String_o *)StringLiteral_12721/*"ServantEQCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v8, 1, (Il2CppObject *)v5, 0);
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

  if ( (byte_4C215F5 & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12682/*"SellServant"*/);
    byte_4C215F5 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_41257388(v4, (System_String_o *)StringLiteral_12682/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_1C2D6EC(v5, v6);
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
  const MethodInfo *v10; // x4

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionObj(
          _4__this,
          this->fields.obj,
          (const MethodInfo *)eventExpeditionEntity),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(_4__this, isDecide);
  }
  EventExpeditionListViewManager__OnClickDecide(_4__this, isDecide, eventExpeditionEntity, pieceIdx, v10);
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
  Il2CppObject *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v9; // x8
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  Il2CppObject *v11; // x22
  struct EventExpeditionListViewManager_resData_array *v12; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  Il2CppClass *klass; // x26
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x22
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x23
  int32_t currentEventId; // w20
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v19; // x24
  System_Action_o *closeCallback; // x25
  BattleDropItem_array *v21; // x3
  UserGameEntity_array *v22; // x4
  const MethodInfo *v23; // [xsp+8h] [xbp-68h]

  if ( (byte_4C215F6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_SetActive__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__);
    sub_1C2D490(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
    byte_4C215F6 = 1;
  }
  v3 = (Il2CppObject *)sub_1C2D6DC(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_14;
  v3[1].monitor = this;
  sub_1C2D434(&v3[1].monitor);
  ActionExtensions__Call(this->fields.animFinishCallback, 0);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !LODWORD(res->max_length) )
    goto LABEL_15;
  v9 = res->m_Items[0];
  if ( !v9
    || (resultExpeditionRewardInfos = v9->fields.resultExpeditionRewardInfos,
        v3[1].klass = (Il2CppClass *)v9->fields.resultEventRewardInfos,
        v11 = v3 + 1,
        v4 = sub_1C2D434(&v3[1]),
        (v12 = this->fields.res) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(v4, v5);
  }
  if ( !LODWORD(v12->max_length) )
LABEL_15:
    sub_1C2D6F4(v4, v5, v6, v7);
  if ( !v12->m_Items[0] )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  klass = v11->klass;
  if ( !v11->klass )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  v19 = (System_Action_bool__o *)sub_1C2D6DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v19, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
  closeCallback = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    v3,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v21,
    v22,
    currentEventId,
    LODWORD(klass->_1.namespaze) != 0,
    v19,
    closeCallback,
    v23);
}


void EventExpeditionListViewManager___c__DisplayClass49_0___FinishResponse_b__3(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventExpeditionListViewManager__FinishResponseCallBack(_4__this, method);
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
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  void *monitor; // x9
  ExpeditionPointRewardDialogComponent_o *_9__2; // x20
  _QWORD *v6; // x8
  __int64 v7; // x8
  EventExpeditionEntity_o *v8; // x21
  BattleDropItem_array *v9; // x22
  int32_t v10; // w23
  Il2CppObject *v11; // x25
  System_Action_bool__o *v12; // x24
  const MethodInfo *v13; // x6
  System_Action_o *v14; // x25

  v2 = (Il2CppObject *)this;
  if ( (byte_4C215F7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_SetActive__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__);
    byte_4C215F7 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_15;
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_15;
  this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)*((_QWORD *)monitor + 4);
  if ( !this )
    goto LABEL_15;
  if ( klass->_1.namespaze )
  {
    if ( this[11].klass )
    {
      _9__2 = (ExpeditionPointRewardDialogComponent_o *)this[11].fields.__9__2;
      this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this[11].klass,
                                                                         0,
                                                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
      v6 = v2[1].monitor;
      if ( v6 )
      {
        v7 = v6[4];
        if ( v7 )
        {
          v8 = (EventExpeditionEntity_o *)this;
          v9 = (BattleDropItem_array *)v2[1].klass;
          v10 = *(_DWORD *)(v7 + 416);
          v11 = *(Il2CppObject **)(v7 + 392);
          v12 = (System_Action_bool__o *)sub_1C2D6DC(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(v12, v11, Method_UnityEngine_GameObject_SetActive__, 0);
          v14 = (System_Action_o *)v2[2].klass;
          if ( !v14 )
          {
            v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v14,
              v2,
              Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
              0);
            v2[2].klass = (Il2CppClass *)v14;
            this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1C2D434(&v2[2]);
          }
          if ( _9__2 )
          {
            ExpeditionPointRewardDialogComponent__Open(_9__2, v8, v9, v10, v12, v14, v13);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C2D6EC(this, method);
  }
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, method);
}


void EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v2; // x19
  Il2CppObject *CS___8__locals1; // x20
  Il2CppClass *klass; // x8
  Il2CppMethodPointer methodPtr; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  System_Action_o *monitor; // x21

  v2 = this;
  if ( (byte_4C215F8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__);
    byte_4C215F8 = 1;
  }
  CS___8__locals1 = (Il2CppObject *)v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  klass = CS___8__locals1[2].klass;
  if ( !klass )
    goto LABEL_9;
  methodPtr = klass->vtable[6].methodPtr;
  resultEventRewardInfos = v2->fields.resultEventRewardInfos;
  monitor = (System_Action_o *)CS___8__locals1[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0);
    CS___8__locals1[2].monitor = monitor;
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1C2D434(&CS___8__locals1[2].monitor);
  }
  if ( !methodPtr )
LABEL_9:
    sub_1C2D6EC(this, method);
  (*((void (__fastcall **)(_QWORD, struct BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))methodPtr + 3))(
    *((_QWORD *)methodPtr + 8),
    resultEventRewardInfos,
    0,
    monitor,
    *((_QWORD *)methodPtr + 5));
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
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *v4; // x8
  Il2CppMethodPointer methodPtr; // x9
  __int64 v6; // x9
  int32_t v7; // w2
  int v8; // w10
  Il2CppMethodPointer v9; // x8
  System_Collections_Generic_List_EventDelegate__o *v10; // x20
  EventDelegate_Callback_o *v11; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C215F9 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
    byte_4C215F9 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)klass->vtable[1].methodPtr;
  if ( !this )
    goto LABEL_17;
  this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v4 = v2[1].klass;
  if ( !v4 )
    goto LABEL_17;
  methodPtr = v4->vtable[1].methodPtr;
  if ( !methodPtr )
    goto LABEL_17;
  v6 = *((_QWORD *)methodPtr + 4);
  if ( !v6 )
    goto LABEL_17;
  v7 = *(_DWORD *)(v6 + 24);
  v8 = *(_DWORD *)(v6 + 28) + 1;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 28) = v8;
  if ( v7 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v6 + 16), 0, v7, 0);
    v4 = v2[1].klass;
    if ( !v4 )
      goto LABEL_17;
  }
  v9 = v4->vtable[1].methodPtr;
  if ( !v9 )
LABEL_17:
    sub_1C2D6EC(this, method);
  v10 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)v9 + 4);
  v11 = (EventDelegate_Callback_o *)v2[3].klass;
  if ( !v11 )
  {
    v11 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v11,
      v2,
      (intptr_t)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
      0);
    v2[3].klass = (Il2CppClass *)v11;
    sub_1C2D434(&v2[3]);
  }
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49155444(v10, v11, 0);
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
  int32_t size; // w2
  int v11; // w9
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  struct EventExpeditionListViewManager_o *v13; // x8

  if ( (byte_4C215FA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C2D490(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
    sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__);
    byte_4C215FA = 1;
  }
  v3 = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  size = onClick->fields._size;
  v11 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_1C2D434(&this->fields.__9__4);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__4,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v13 = this->fields.__4__this;
  if ( !v13 || !Request_object )
LABEL_17:
    sub_1C2D6EC(Request_object, v6);
  EventExpeditionFinishRequest__beginRequest(
    (EventExpeditionFinishRequest_o *)Request_object,
    v13->fields.currentEventId,
    this->fields.idxList,
    0);
}


void EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__4(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *v5; // x20
  System_Action_o *klass; // x23
  EventExpeditionListViewManager_o *v7; // x21

  v5 = (Il2CppObject *)this;
  if ( (byte_4C215FB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1C2D490(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__);
    byte_4C215FB = 1;
  }
  klass = (System_Action_o *)v5[2].klass;
  v7 = (EventExpeditionListViewManager_o *)v5[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v5,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0);
    v5[2].klass = (Il2CppClass *)klass;
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1C2D434(&v5[2]);
  }
  if ( !v7 )
    sub_1C2D6EC(this, result);
  EventExpeditionListViewManager__FinishResponse(v7, result, klass, v3);
}


void EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__5(
        EventExpeditionListViewManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0
  struct EventExpeditionListViewManager_o *v4; // x8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct EventExpeditionListViewManager_o *v7; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  System_Collections_Generic_List_Enumerator_int__o v9; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4C215FC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4C215FC = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, method), (v4 = this->fields.__4__this) == 0)
    || (_4__this = (EventExpeditionListViewManager_o *)v4->fields.SelectPieceIdxList) == 0 )
  {
    sub_1C2D6EC(_4__this, method);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v9; ; HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields._current, 1, 0) )
  {
    v5 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &i,
           (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v5 )
      break;
    v7 = this->fields.__4__this;
    if ( !v7 )
      sub_1C2D6EC(v5, v6);
    hakkenshiInfo = v7->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_1C2D6EC(0, v6);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1C2D6EC(this, x);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}