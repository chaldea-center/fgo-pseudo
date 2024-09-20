void __fastcall EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EE6D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_4A5EE6D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SelectPieceIdxList, (int32_t)v6, v7, v8);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


bool __fastcall EventExpeditionListViewManager__CheckEventEnd(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5EE63 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5EE63 = 1;
  }
  entity = 0LL;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_14:
    sub_1B8880C(Master_object, v4);
  return (__int64)Master_object >= (__int64)entity[6].klass;
}


bool __fastcall EventExpeditionListViewManager__CheckServant(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  void *Instance; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x20
  Il2CppObject *MasterData_object; // x21
  CommonUI_o *v7; // x20
  int32_t v8; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v10; // x22
  Il2CppObject *v11; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  CommonUI_o *v15; // x0
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  CommonUI_o *v19; // x20
  int32_t v20; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v22; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t Count; // w20
  CommonUI_o *v27; // x21
  BalanceConfig_c *v28; // x8
  Il2CppObject *v29; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EE5F & 1) == 0 )
  {
    sub_1B885B0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__);
    sub_1B885B0(&EventExpeditionListViewManager___c_TypeInfo);
    byte_4A5EE5F = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v5 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v7 = (CommonUI_o *)Instance;
    v8 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v11 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v11,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
        0LL);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)v10, v13, v14);
    }
    if ( !v7 )
      goto LABEL_45;
    v15 = v7;
    v16 = v8;
    v17 = svtKeep;
    v18 = 0;
    goto LABEL_42;
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v5, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v19 = (CommonUI_o *)Instance;
    v20 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v22 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v22,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0LL);
      v23 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v23->__9__40_1 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->__9__40_1, (int32_t)v10, v24, v25);
    }
    if ( !v19 )
      goto LABEL_45;
    v18 = 1;
    v15 = v19;
    v16 = v20;
LABEL_41:
    v17 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v15, v16, v17, v18, 1, v10, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
      return 0;
    }
LABEL_45:
    sub_1B8880C(Instance, v4);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v27 = (CommonUI_o *)Instance;
    if ( !byte_4A567BB )
    {
      sub_1B885B0(&BalanceConfig_TypeInfo);
      byte_4A567BB = 1;
    }
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v28->static_fields->CommandCodeFrameMax;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v29 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v29,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0LL);
      v30 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v30->__9__40_4 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->__9__40_4, (int32_t)v10, v31, v32);
    }
    if ( !v27 )
      goto LABEL_45;
    v18 = 2;
    v15 = v27;
    v16 = Count;
    goto LABEL_41;
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall EventExpeditionListViewManager__CoWaitEffectPlay(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5EE67 & 1) == 0 )
  {
    sub_1B885B0(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
    byte_4A5EE67 = 1;
  }
  v3 = sub_1B887FC(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall EventExpeditionListViewManager__CreateList(
        EventExpeditionListViewManager_o *this,
        EventExpeditionEntity_array *evExpeditionEntList,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  unsigned int v10; // w27
  EventExpeditionEntity_o *v11; // x23
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v14; // x26
  EventExpeditionListViewItem_o *v15; // x22
  const MethodInfo *v16; // x6
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4A5EE5A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EventExpeditionListViewItem_TypeInfo);
    sub_1B885B0(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4A5EE5A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !evExpeditionEntList )
    goto LABEL_15;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1B88814(itemList, v8);
      v11 = evExpeditionEntList->m_Items[v10];
      if ( !v11 )
        break;
      idx = v11->fields.idx;
      assetManager = this->fields.assetManager;
      v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0LL);
      v15 = (EventExpeditionListViewItem_o *)sub_1B887FC(EventExpeditionListViewItem_TypeInfo);
      EventExpeditionListViewItem___ctor(v15, idx, v11, eventId, assetManager, v14, v16);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v15, v17, v18);
      }
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_1B8880C(itemList, v8);
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
  __int64 v7; // x20
  UnityEngine_Component_o *touchPanel; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *v14; // x21
  System_Object_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_4A5EE68 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__);
    sub_1B885B0(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5EE68 = 1;
  }
  v7 = sub_1B887FC(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = animFinishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)animFinishCallback, v10, v11);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v12, v13);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
    return;
  v14 = (Il2CppObject *)System_String__Concat_61718292(
                          (System_String_o *)StringLiteral_15812/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16069/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v15 = JsonManager__DeserializeArray_object_(
          v14,
          (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v7 + 24) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)v15, v16, v17);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_11:
    sub_1B8880C(touchPanel, v9);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v19, v20);
}


void __fastcall EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v11; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_4A5EE69 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_4A5EE69 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SelectPieceIdxList, (int32_t)v6, v7, v8);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (bitExpeditionFinish = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0LL)) == 0LL )
  {
    sub_1B8880C(bitExpeditionFinish, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0LL);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v11);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w8
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  UILabel_o *expeditionNoticeLb; // x21
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  ExpeditionAssetManager_o *assetManager; // x21
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  ExpeditionAssetManager_o *v28; // x21
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w19
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x3

  if ( (byte_4A5EE59 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ExpeditionAssetManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__);
    sub_1B885B0(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5777/*"EXPEDITION_PUSH_BTN_LABEL"*/);
    byte_4A5EE59 = 1;
  }
  v11 = sub_1B887FC(EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_DWORD *)(v11 + 16) = eventId;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 32) = evExpeditionEntList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)evExpeditionEntList, v16, v17);
  v18 = *(_DWORD *)(v11 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v18;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.expeditionCallback,
    (int32_t)expeditionCallback,
    v19,
    v20);
  this->fields.requestCallBack = requestCallBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallBack, (int32_t)requestCallBack, v21, v22);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0LL);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_5777/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0LL);
  if ( !expeditionNoticeLb )
    goto LABEL_13;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v24);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v25);
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
    p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
    v28 = (ExpeditionAssetManager_o *)sub_1B887FC(ExpeditionAssetManager_TypeInfo);
    ExpeditionAssetManager___ctor(v28, v29);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v28;
    sub_1B88554(p_assetManager, (int32_t)v28, v30, v31);
    assetManager = (ExpeditionAssetManager_o *)p_assetManager->klass;
  }
  v32 = *(_DWORD *)(v11 + 16);
  v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v11,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_13:
    sub_1B8880C(touchPanel, v13);
  ExpeditionAssetManager__GetAssets(assetManager, v32, v33, v34);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EE61 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    byte_4A5EE61 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v6.fields._current,
      v5);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  if ( (byte_4A5EE62 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager_o *)sub_1B885B0(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    byte_4A5EE62 = 1;
  }
  if ( !obj
    || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_1B8880C(this, obj);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)obj);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, v4, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  EventExpeditionListViewObject__Init(obj, v5, v6);
}


void __fastcall EventExpeditionListViewManager__LocateDialogToExpeditionObj(
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
  v6 = this;
  if ( !byte_4A55CE6 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(this, obj);
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
  EventExpeditionListViewManager_o *v6; // x20

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
  v6 = this;
  if ( !byte_4A55CE6 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)dialog,
                                                      0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickCompleteButton(
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
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+0h] [xbp-80h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5EE60 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__);
    sub_1B885B0(&Method_EventExpeditionListViewManager_OnClickCompleteButton__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EE60 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                (UserEventExpeditionMaster_o *)Instance,
                                this->fields.currentEventId,
                                0LL);
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
    sub_1B8880C(Instance, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v5,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v26 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v26.fields._current;
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v8 )
      sub_1B8880C(0LL, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v8,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_1B8880C(MasterData_object, v11);
    if ( !MasterData_object )
      sub_1B8880C(0LL, v11);
    v12 = EventExpeditionMaster__TryGetEntity(
            (EventExpeditionMaster_o *)MasterData_object,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            0LL);
    if ( !v6 )
      sub_1B8880C(v12, v13);
    v16 = (Il2CppObject *)entity;
    items = v6->fields._items;
    v18 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
    ++v6->fields._version;
    if ( !items )
      sub_1B8880C(v12, v16);
    size = v6->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        v16,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      v6->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v16, v14, v15);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v6,
    v21);
LABEL_20:
  v22 = Method_EventExpeditionListViewManager_OnClickCompleteButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickCompleteButton__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1B885C8(Method_EventExpeditionListViewManager_OnClickCompleteButton__);
  v23 = (System_Reflection_MethodBase_o *)sub_1B88594(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickCompleteView(
        EventExpeditionListViewManager_o *this,
        System_Collections_Generic_List_EventExpeditionEntity__o *eventExpeditionEntities,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *MasterData_object; // x22
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t current; // w1
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x22
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Func_object__bool__o *v23; // x25
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  __int64 klass_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  EventExpeditionListViewManager___c_c *v30; // x0
  System_Func_object__int__o *_9__51_0; // x22
  Il2CppObject *v32; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v42; // x19
  System_Action_o *v43; // x22
  const MethodInfo *v44; // x4
  System_Collections_Generic_List_EventExpeditionEntity__o *v45; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+30h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A5EE6A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__);
    sub_1B885B0(&System_Func_ExpeditionInfo__bool__TypeInfo);
    sub_1B885B0(&System_Func_EventExpeditionEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__);
    sub_1B885B0(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__);
    sub_1B885B0(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    sub_1B885B0(&EventExpeditionListViewManager___c_TypeInfo);
    byte_4A5EE6A = 1;
  }
  entity = 0LL;
  memset(&v47, 0, sizeof(v47));
  v5 = sub_1B887FC(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_34;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList,
    (int32_t)eventExpeditionEntities,
    v10,
    v11);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  v45 = eventExpeditionEntities;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v13 = sub_1B887FC(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    if ( !v13 )
      sub_1B8880C(v14, v15);
    current = (int32_t)v47.fields._current;
    *(_QWORD *)(v13 + 16) = v47.fields._current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), current, v16, v17);
    if ( !entity )
      sub_1B8880C(v19, v20);
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    v23 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ExpeditionInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v23,
      (Il2CppObject *)v13,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      0LL);
    v24 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v23,
            (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v24 )
      sub_1B8880C(0LL, v25);
    if ( !SelectPieceIdxList )
      sub_1B8880C(v24, v25);
    klass_high = HIDWORD(v24[1].klass);
    items = SelectPieceIdxList->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++SelectPieceIdxList->fields._version;
    if ( !items )
      sub_1B8880C(v24, klass_high);
    size = SelectPieceIdxList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        SelectPieceIdxList,
        klass_high,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      SelectPieceIdxList->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v30 = EventExpeditionListViewManager___c_TypeInfo;
  if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
    v30 = EventExpeditionListViewManager___c_TypeInfo;
  }
  _9__51_0 = (System_Func_object__int__o *)v30->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = EventExpeditionListViewManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__51_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__51_0,
      v32,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      0LL);
    static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                                                               (System_Func_TSource__TResult__o *)_9__51_0,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v5 + 24) = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v37, v38, v39);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v40);
  Instance = (int64_t)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v42 = this->fields.SelectPieceIdxList,
        v43 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v43,
          (Il2CppObject *)v5,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_34:
    sub_1B8880C(Instance, v7);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v42, v43, 0LL, v44);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventExpeditionListViewManager__OnClickDecide(
        EventExpeditionListViewManager_o *this,
        bool isDecide,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 klass_low; // x10
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  NetworkManager_ResultCallbackFunc_o *v17; // x22

  if ( (byte_4A5EE65 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventExpeditionListViewManager_StartResponse__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5EE65 = 1;
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
    sub_1B8880C(maskPanel, isDecide);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.selectEventExpeditionEntityList;
  if ( !maskPanel )
    goto LABEL_23;
  v10 = *(_QWORD *)&maskPanel->fields.m_CachedPtr;
  v11 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !v10 )
    goto LABEL_23;
  klass_low = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v10 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskPanel,
      (Il2CppObject *)eventExpeditionEntity,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = v10 + 8 * klass_low;
    LODWORD(maskPanel[1].klass) = klass_low + 1;
    *(_QWORD *)(v13 + 32) = eventExpeditionEntity;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)(v13 + 32),
      (int32_t)eventExpeditionEntity,
      (int32_t)eventExpeditionEntity,
      pieceIdx);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.SelectPieceIdxList;
  if ( !maskPanel )
    goto LABEL_23;
  v14 = *(_QWORD *)&maskPanel->fields.m_CachedPtr;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !v14 )
    goto LABEL_23;
  v16 = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)maskPanel,
      pieceIdx,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(maskPanel[1].klass) = v16 + 1;
    *(_DWORD *)(v14 + 4 * v16 + 32) = pieceIdx;
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.expeditionConfirmDialog;
  if ( !maskPanel )
    goto LABEL_23;
  ExpeditionConfirmDialogComponent__Close((ExpeditionConfirmDialogComponent_o *)maskPanel, 0LL);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager_StartResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskPanel = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                            v17,
                                            (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
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
  __int64 v5; // x21
  void *maskPanel; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  EventExpeditionListViewObject_o **v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v14; // x20
  EventExpeditionEntity_o *v15; // x20
  bool v16; // w22
  _QWORD *v17; // x8
  System_Reflection_MethodBase_o *v18; // x0
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v20; // x22
  _QWORD *v21; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  EventExpeditionListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  const MethodInfo *v33; // x2

  if ( (byte_4A5EE64 & 1) == 0 )
  {
    sub_1B885B0(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1B885B0(&Method_EventExpeditionListViewManager_OnClickListView__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__);
    sub_1B885B0(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
    byte_4A5EE64 = 1;
  }
  v5 = sub_1B887FC(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = obj;
  v10 = (EventExpeditionListViewObject_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)obj, v11, v12);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  maskPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_31;
  maskPanel = DataManager__GetMasterData_object_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v10 )
    goto LABEL_31;
  currentEventId = this->fields.currentEventId;
  v14 = (EventExpeditionMaster_o *)maskPanel;
  maskPanel = EventExpeditionListViewObject__GetItem(*v10, v7);
  if ( !maskPanel )
    goto LABEL_31;
  if ( !v14 )
    goto LABEL_31;
  maskPanel = EventExpeditionMaster__GetEntity(v14, currentEventId, *((_DWORD *)maskPanel + 5), 0LL);
  if ( !*v10 )
    goto LABEL_31;
  v15 = (EventExpeditionEntity_o *)maskPanel;
  switch ( (*v10)->fields.dispMode )
  {
    case 0:
      goto LABEL_20;
    case 1:
    case 2:
      v16 = EventExpeditionListViewManager__CheckEventEnd(this, v7);
      v17 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B885C8(Method_EventExpeditionListViewManager_OnClickListView__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v17, v17[4]);
      if ( v16 )
        goto LABEL_19;
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v20 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_1B887FC(ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v20,
        (Il2CppObject *)v5,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( !expeditionConfirmDialog )
        goto LABEL_31;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v15, 1, v20, 1, 0, 0LL);
      return;
    case 3:
      v21 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1B885C8(Method_EventExpeditionListViewManager_OnClickListView__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v21, v21[4]);
LABEL_19:
      OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
      goto LABEL_20;
    case 4:
      v22 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1B885C8(Method_EventExpeditionListViewManager_OnClickListView__);
      v23 = (System_Reflection_MethodBase_o *)sub_1B88594(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
      if ( !EventExpeditionListViewManager__CheckServant(v24, v25) )
      {
LABEL_20:
        maskPanel = this->fields.maskPanel;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
          return;
        }
LABEL_31:
        sub_1B8880C(maskPanel, v7);
      }
      v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v26 )
        goto LABEL_31;
      items = v26->fields._items;
      v30 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
      ++v26->fields._version;
      if ( !items )
        goto LABEL_31;
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v15,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v15, v27, v28);
      }
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v26,
        v33);
      return;
    default:
      return;
  }
}


void __fastcall EventExpeditionListViewManager__OnClickNoticeButton(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A5EE6C & 1) == 0 )
  {
    sub_1B885B0(&Method_EventExpeditionListViewManager_OnClickNoticeButton__);
    byte_4A5EE6C = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v4 = Method_EventExpeditionListViewManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_EventExpeditionListViewManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0LL);
  EventRewardSaveData__SetExpeditionNotification(this->fields.isButtonOn, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v6);
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

  if ( (byte_4A5EE5D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE5D = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B8880C(0LL, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5EE5C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__);
    sub_1B885B0(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EE5C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v8, v9);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v7, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  Il2CppObject *expeditionConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  struct ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  struct ExpeditionAssetManager_o *v15; // x8
  Il2CppObject *expeditionRewardDialog_k__BackingField; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  struct ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  struct ExpeditionAssetManager_o *v23; // x8
  Il2CppObject *expeditionPointRewardDialog_k__BackingField; // x21
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v30; // x8
  Il2CppObject *bitExpeditionStart_k__BackingField; // x20
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v38; // x8
  Il2CppObject *bitExpeditionFinish_k__BackingField; // x20
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_GameObject_o *v43; // x1
  const MethodInfo *v44; // x2

  if ( (byte_4A5EE58 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE58 = 1;
  }
  expeditionConfirmDialog = (UnityEngine_Object_o *)this->fields.expeditionConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionConfirmDialog = &this->fields.expeditionConfirmDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionConfirmDialog, 0LL, 0LL);
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
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = (struct ExpeditionConfirmDialogComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.expeditionConfirmDialog,
      (int32_t)Component_object,
      v10,
      v11);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v12);
  }
  v5 = (UnityEngine_GameObject_o *)*p_expeditionConfirmDialog;
  if ( !*p_expeditionConfirmDialog )
    goto LABEL_49;
  ExpeditionConfirmDialogComponent__Init((ExpeditionConfirmDialogComponent_o *)v5, this->fields.currentEventId, 0LL);
  expeditionRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionRewardDialog = &this->fields.expeditionRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v15 = this->fields.assetManager;
    if ( !v15 )
      goto LABEL_49;
    expeditionRewardDialog_k__BackingField = (Il2CppObject *)v15->fields._expeditionRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       expeditionRewardDialog_k__BackingField,
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    v17 = UnityEngine_GameObject__GetComponent_object_(
            v5,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = (struct ExpeditionRewardDialogComponent_o *)v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.expeditionRewardDialog, (int32_t)v17, v18, v19);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v20);
  }
  v5 = (UnityEngine_GameObject_o *)*p_expeditionRewardDialog;
  if ( !*p_expeditionRewardDialog )
    goto LABEL_49;
  ExpeditionRewardDialogComponent__Init((ExpeditionRewardDialogComponent_o *)v5, 0LL);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionPointRewardDialog = &this->fields.expeditionPointRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v23 = this->fields.assetManager;
    if ( !v23 )
      goto LABEL_49;
    expeditionPointRewardDialog_k__BackingField = (Il2CppObject *)v23->fields._expeditionPointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       expeditionPointRewardDialog_k__BackingField,
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    v25 = UnityEngine_GameObject__GetComponent_object_(
            v5,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = (struct ExpeditionPointRewardDialogComponent_o *)v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.expeditionPointRewardDialog, (int32_t)v25, v26, v27);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v28);
  }
  v5 = (UnityEngine_GameObject_o *)*p_expeditionPointRewardDialog;
  if ( !*p_expeditionPointRewardDialog )
    goto LABEL_49;
  ExpeditionPointRewardDialogComponent__Init((ExpeditionPointRewardDialogComponent_o *)v5, 0LL);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionStart, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v30 = this->fields.assetManager;
    if ( !v30 )
      goto LABEL_49;
    bitExpeditionStart_k__BackingField = (Il2CppObject *)v30->fields._bitExpeditionStart_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       bitExpeditionStart_k__BackingField,
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_49;
    v32 = UnityEngine_GameObject__GetComponent_object_(
            v5,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = (struct BitExpeditionStartComponent_o *)v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bitExpeditionStart, (int32_t)v32, v33, v34);
    v5 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v5 )
      goto LABEL_49;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v36);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionFinish, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v38 = this->fields.assetManager;
    if ( v38 )
    {
      bitExpeditionFinish_k__BackingField = (Il2CppObject *)v38->fields._bitExpeditionFinish_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         bitExpeditionFinish_k__BackingField,
                                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v40 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = (struct BitExpeditionFinishComponent_o *)v40;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bitExpeditionFinish, (int32_t)v40, v41, v42);
        v5 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v5 )
        {
          v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v43, v44);
          return;
        }
      }
    }
LABEL_49:
    sub_1B8880C(v5, v6);
  }
}


void __fastcall EventExpeditionListViewManager__SetMaskPanel(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.maskPanel = mask;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)mask, (int32_t)method, v3);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5EE5B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventExpeditionListViewManager_OnMoveEnd__);
    sub_1B885B0(&EventExpeditionListViewObject_TypeInfo);
    byte_4A5EE5B = 1;
  }
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventExpeditionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_1B8880C(v7, v8);
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

  if ( (byte_4A5EE66 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5EE66 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager__UpdateButtonDisp(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v4; // x8

  if ( (byte_4A5EE6B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A5EE6B = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_1B8880C(0LL, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17526/*"btn_on"*/;
  else
    v4 = &StringLiteral_17525/*"btn_off"*/;
  UISprite__set_spriteName(expeditionNoticeBtnSp, (System_String_o *)*v4, 0LL);
}


void __fastcall EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x8

  if ( (byte_4A5EE5E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EE5E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      0LL)) == 0LL
    || (v5 = Instance, (Instance = (DataManager_o *)this->fields.expeditionNoticeNumber) == 0LL)
    || (NoticeNumberComponent__SetNumber(
          (NoticeNumberComponent_o *)Instance,
          (int32_t)v5->fields.m_CancellationTokenSource,
          0LL),
        (Instance = (DataManager_o *)this->fields.completeBtn) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  ((void (*)(void))Instance->klass[1]._1.namespaze)();
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_1(
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

  if ( (byte_4A5EE6E & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4A5EE6E = 1;
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
    || (size = onClick->fields._size,
        v7 = onClick->fields._version + 1,
        onClick->fields._size = 0,
        onClick->fields._version = v7,
        size >= 1)
    && (System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL),
        (touchPanel = this->fields.touchPanel) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(maskPanel, method);
  }
  v8 = touchPanel->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46771408(v8, v9, 0LL);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_2(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *touchPanel; // x0
  void *monitor; // x8
  int32_t v5; // w2
  int v6; // w9
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_int__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5EE70 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_4A5EE70 = 1;
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
    System_Array__Clear(*((System_Array_o **)monitor + 2), 0, v5, 0LL);
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
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SelectPieceIdxList, (int32_t)v10, v11, v12);
  touchPanel = (UnityEngine_Component_o *)this->fields.bitExpeditionStart;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(touchPanel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_3(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *touchPanel; // x0
  void *monitor; // x8
  int32_t v5; // w2
  int v6; // w9
  struct BitExpeditionStartComponent_o *bitExpeditionStart; // x8

  if ( (byte_4A5EE6F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4A5EE6F = 1;
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
    System_Array__Clear(*((System_Array_o **)monitor + 2), 0, v5, 0LL);
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
    sub_1B8880C(touchPanel, method);
  }
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)touchPanel, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager__get_HakkenshiBaseWindowHeight(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  HakkenshiListController_o *hakkenshiInfo; // x0

  hakkenshiInfo = this->fields.hakkenshiInfo;
  if ( !hakkenshiInfo )
    sub_1B8880C(0LL, method);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight(hakkenshiInfo, 0LL);
}


System_Collections_Generic_List_EventExpeditionListViewObject__o *__fastcall EventExpeditionListViewManager__get_ObjectList(
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5EE57 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE57 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v2; // w2
  int32_t v3; // w3
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v4; // x20
  int32_t _1__state; // w8
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  struct EventExpeditionListViewManager_o *_4__this; // x19
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v9; // x20
  EventExpeditionListViewManager___c_c *v10; // x8
  System_Action_object__o *_9__48_0; // x21
  Il2CppObject *v12; // x22
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  HakkenshiListController_o *hakkenshiInfo; // x20
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  EventExpeditionEntity_o *v19; // x21
  int32_t Item; // w22
  System_Action_o *v21; // x23
  System_Action_o *v22; // x24
  const MethodInfo *v23; // x5

  v4 = this;
  if ( (byte_4A5EE80 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventExpeditionListViewObject__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__);
    sub_1B885B0(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_1B885B0(&EventExpeditionListViewManager___c_TypeInfo);
    byte_4A5EE80 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)EventExpeditionListViewManager__get_ObjectList(
                                                                         _4__this,
                                                                         method);
    v9 = this;
    v10 = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v10 = EventExpeditionListViewManager___c_TypeInfo;
    }
    _9__48_0 = (System_Action_object__o *)v10->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventExpeditionListViewManager___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__48_0 = (System_Action_object__o *)sub_1B887FC(System_Action_EventExpeditionListViewObject__TypeInfo);
      System_Action_object____ctor(
        _9__48_0,
        v12,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        0LL);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v14, v15);
    }
    if ( !v9 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v9,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    _4__this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)_4__this, 0LL);
    EventExpeditionListViewManager__RequestListObject(_4__this, v16);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.SelectPieceIdxList;
    if ( !this )
      goto LABEL_25;
    hakkenshiInfo = _4__this->fields.hakkenshiInfo;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)System_Collections_Generic_List_int___get_Item(
                                                                         (System_Collections_Generic_List_int__o *)this,
                                                                         0,
                                                                         (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !hakkenshiInfo )
      goto LABEL_25;
    HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, (int32_t)this, 0, 0LL);
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
                                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    if ( !_4__this->fields.SelectPieceIdxList
      || (v19 = (EventExpeditionEntity_o *)this,
          Item = System_Collections_Generic_List_int___get_Item(
                   _4__this->fields.SelectPieceIdxList,
                   0,
                   (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__),
          v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(
            v21,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
            0LL),
          v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(
            v22,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
            0LL),
          !bitExpeditionStart) )
    {
LABEL_25:
      sub_1B8880C(this, method);
    }
    BitExpeditionStartComponent__SetUp(bitExpeditionStart, v19, Item, v21, v22, v23);
  }
  else if ( !_1__state )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isMine = -1;
    sub_1B88554(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EE71 & 1) == 0 )
  {
    sub_1B885B0(&EventExpeditionListViewManager___c_TypeInfo);
    byte_4A5EE71 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventExpeditionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventExpeditionListViewManager___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventExpeditionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A5EE72 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__);
    sub_1B885B0(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
    byte_4A5EE72 = 1;
  }
  v4 = sub_1B887FC(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_1(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A5EE73 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__);
    sub_1B885B0(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
    byte_4A5EE73 = 1;
  }
  v4 = sub_1B887FC(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CheckServant_b__40_4(
        EventExpeditionListViewManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A5EE74 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__);
    sub_1B885B0(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
    byte_4A5EE74 = 1;
  }
  v4 = sub_1B887FC(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (EventExpeditionListViewManager___c_o *)EventExpeditionListViewObject__GetItem(x, (const MethodInfo *)x)) == 0LL )
  {
    sub_1B8880C(this, x);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)x);
}


int32_t __fastcall EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
  int32_t eventId; // w21
  UISprite_o *completeBtnSp; // x20
  struct EventExpeditionListViewManager_o *v6; // x8
  UILabel_o *completeBtnLb; // x20
  struct EventExpeditionListViewManager_o *v8; // x8
  const MethodInfo *v9; // x3
  struct EventExpeditionListViewManager_o *v10; // x19
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_4A5EE75 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17504/*"btn_completecheck_bg"*/);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_1B885B0(&StringLiteral_5762/*"EXPEDITION_COMP_BTN_LABEL"*/);
    byte_4A5EE75 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  eventId = v2->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_37859364(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_17504/*"btn_completecheck_bg"*/,
                                                                     0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_16;
  completeBtnLb = v6->fields.completeBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_5762/*"EXPEDITION_COMP_BTN_LABEL"*/,
                                                                     0LL);
  if ( !completeBtnLb )
    goto LABEL_16;
  UILabel__set_text(completeBtnLb, (System_String_o *)this, 0LL);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventExpeditionListViewManager__SetExpeditionObject((EventExpeditionListViewManager_o *)this, method),
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
          v9),
        (v10 = v2->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(this, method);
  }
  v10->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)v10, 0LL);
  EventExpeditionListViewManager__RequestListObject(v10, v11);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4A5EE76 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12623/*"ServantCombine"*/);
    byte_4A5EE76 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664432(v5, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B8880C(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12623/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0LL);
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
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4A5EE77 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12627/*"ServantEquipList"*/);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12626/*"ServantEQCombine"*/);
    byte_4A5EE77 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664432(v5, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B8880C(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12627/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12626/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v8, 1, (Il2CppObject *)v5, 0LL);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5EE78 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    byte_4A5EE78 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_38664432(v4, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B8880C(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0LL);
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
    sub_1B8880C(_4__this, isDecide);
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
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v11; // x8
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  BattleDropItem_array **v14; // x22
  struct EventExpeditionListViewManager_resData_array *v15; // x8
  EventExpeditionListViewManager_resData_o *v16; // x9
  struct EventExpeditionListViewManager_o *_4__this; // x8
  BattleDropItem_array *v18; // x20
  UserGameEntity_array *oldUserGame; // x22
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x24
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x25
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x27
  System_Action_bool__o *v24; // x26
  System_Action_o *closeCallback; // x27

  if ( (byte_4A5EE79 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_SetActive__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__);
    sub_1B885B0(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
    byte_4A5EE79 = 1;
  }
  v3 = sub_1B887FC(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  ActionExtensions__Call(this->fields.animFinishCallback, 0LL);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !res->max_length )
    goto LABEL_15;
  v11 = res->m_Items[0];
  if ( !v11
    || (resultExpeditionRewardInfos = v11->fields.resultExpeditionRewardInfos,
        resultEventRewardInfos = v11->fields.resultEventRewardInfos,
        *(_QWORD *)(v3 + 16) = resultEventRewardInfos,
        v14 = (BattleDropItem_array **)(v3 + 16),
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)resultEventRewardInfos, v8, v9),
        (v15 = this->fields.res) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(v4, v5);
  }
  if ( !v15->max_length )
LABEL_15:
    sub_1B88814(v4, v5);
  v16 = v15->m_Items[0];
  if ( !v16 )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v18 = *v14;
  if ( !*v14 )
    goto LABEL_14;
  oldUserGame = v16->fields.oldUserGame;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  v24 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v24, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  closeCallback = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v3,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0LL);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v18,
    oldUserGame,
    currentEventId,
    v18->max_length != 0,
    v24,
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
    sub_1B8880C(0LL, method);
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
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x9
  ExpeditionPointRewardDialogComponent_o *_9__2; // x20
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *v6; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  EventExpeditionEntity_o *v8; // x21
  BattleDropItem_array *v9; // x22
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v12; // x24
  System_Action_o *v13; // x25
  int32_t v14; // w2
  int32_t v15; // w3

  v2 = this;
  if ( (byte_4A5EE7A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_SetActive__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__);
    byte_4A5EE7A = 1;
  }
  resultEventRewardInfos = v2->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_15;
  CS___8__locals1 = v2->fields.CS___8__locals1;
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
                                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
      v6 = v2->fields.CS___8__locals1;
      if ( v6 )
      {
        _4__this = v6->fields.__4__this;
        if ( _4__this )
        {
          v8 = (EventExpeditionEntity_o *)this;
          v9 = v2->fields.resultEventRewardInfos;
          currentEventId = _4__this->fields.currentEventId;
          maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
          v12 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(v12, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
          v13 = v2->fields.__9__2;
          if ( !v13 )
          {
            v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v13,
              (Il2CppObject *)v2,
              Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
              0LL);
            v2->fields.__9__2 = v13;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)v13, v14, v15);
          }
          if ( _9__2 )
          {
            ExpeditionPointRewardDialogComponent__Open(_9__2, v8, v9, currentEventId, v12, v13, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B8880C(this, method);
  }
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, method);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x20
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  System_Action_o *_9__3; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  v2 = this;
  if ( (byte_4A5EE7B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__);
    byte_4A5EE7B = 1;
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
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0LL);
    CS___8__locals1->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&CS___8__locals1->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !requestCallBack )
LABEL_9:
    sub_1B8880C(this, method);
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
  EventExpeditionListViewManager___c__DisplayClass51_0_o *v2; // x19
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct EventExpeditionListViewManager_o *v4; // x8
  struct UITouchPress_o *touchPanel; // x9
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  int32_t size; // w2
  int v8; // w10
  struct UITouchPress_o *v9; // x8
  System_Collections_Generic_List_EventDelegate__o *v10; // x20
  EventDelegate_Callback_o *_9__3; // x21
  int32_t v12; // w2
  int32_t v13; // w3

  v2 = this;
  if ( (byte_4A5EE7C & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
    byte_4A5EE7C = 1;
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
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_17;
  touchPanel = v4->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_17;
  onClick = touchPanel->fields.onClick;
  if ( !onClick )
    goto LABEL_17;
  size = onClick->fields._size;
  v8 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v8;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_17;
  }
  v9 = v4->fields.touchPanel;
  if ( !v9 )
LABEL_17:
    sub_1B8880C(this, method);
  v10 = v9->fields.onClick;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__3,
      (Il2CppObject *)v2,
      (intptr_t)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v12, v13);
  }
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46771408(v10, _9__3, 0LL);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass51_0___OnClickCompleteView_b__3(
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct EventExpeditionListViewManager_o *v15; // x8

  if ( (byte_4A5EE7D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
    sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__);
    byte_4A5EE7D = 1;
  }
  v3 = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__4,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v15 = this->fields.__4__this;
  if ( !v15 || !Request_object )
LABEL_17:
    sub_1B8880C(Request_object, v6);
  EventExpeditionFinishRequest__beginRequest(
    (EventExpeditionFinishRequest_o *)Request_object,
    v15->fields.currentEventId,
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
  System_Action_o *_9__5; // x23
  EventExpeditionListViewManager_o *_4__this; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  v5 = this;
  if ( (byte_4A5EE7E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1B885B0(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__);
    byte_4A5EE7E = 1;
  }
  _9__5 = v5->fields.__9__5;
  _4__this = v5->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v5,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0LL);
    v5->fields.__9__5 = _9__5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.__9__5, (int32_t)_9__5, v8, v9);
  }
  if ( !_4__this )
    sub_1B8880C(this, result);
  EventExpeditionListViewManager__FinishResponse(_4__this, result, _9__5, v3);
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
  System_Collections_Generic_List_Enumerator_int__o v9; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4A5EE7F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4A5EE7F = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, method), (v4 = this->fields.__4__this) == 0LL)
    || (_4__this = (EventExpeditionListViewManager_o *)v4->fields.SelectPieceIdxList) == 0LL )
  {
    sub_1B8880C(_4__this, method);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v9; ; HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields._current, 1, 0LL) )
  {
    v5 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &i,
           (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v5 )
      break;
    v7 = this->fields.__4__this;
    if ( !v7 )
      sub_1B8880C(v5, v6);
    hakkenshiInfo = v7->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_1B8880C(0LL, v6);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1B8880C(this, x);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void __fastcall EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}