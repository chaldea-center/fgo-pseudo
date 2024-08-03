void __fastcall EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A00082 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v6);
    byte_4A00082 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v10, v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SelectPieceIdxList, (int32_t)v12, v13, v14);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


bool __fastcall EventExpeditionListViewManager__CheckEventEnd(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A00078 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    byte_4A00078 = 1;
  }
  entity = 0LL;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_14:
    sub_1B64324(Master_object);
  return (__int64)Master_object >= (__int64)entity[6].klass;
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
  UserGameEntity_o *SelfUserGame; // x19
  void *Instance; // x0
  UserServantMaster_o *v13; // x20
  Il2CppObject *MasterData_object; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *v17; // x20
  int32_t v18; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v20; // x22
  Il2CppObject *v21; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  CommonUI_o *v25; // x0
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  CommonUI_o *v31; // x20
  int32_t v32; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v34; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t Count; // w20
  __int64 v39; // x1
  __int64 v40; // x2
  CommonUI_o *v41; // x21
  BalanceConfig_c *v42; // x8
  Il2CppObject *v43; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A00074 & 1) == 0 )
  {
    sub_1B640C8(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__, v7);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__, v8);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__, v9);
    sub_1B640C8(&EventExpeditionListViewManager___c_TypeInfo, v10);
    byte_4A00074 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v13 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v13, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v17 = (CommonUI_o *)Instance;
    v18 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v20 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v20 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v21 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v20 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v15,
                                                              v16);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v20,
        v21,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
        0LL);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)v20, v23, v24);
    }
    if ( !v17 )
      goto LABEL_45;
    v25 = v17;
    v26 = v18;
    v27 = svtKeep;
    v28 = 0;
    goto LABEL_42;
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v13, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v31 = (CommonUI_o *)Instance;
    v32 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v20 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
    if ( !v20 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v20 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v29,
                                                              v30);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v20,
        v34,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0LL);
      v35 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v35->__9__40_1 = v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->__9__40_1, (int32_t)v20, v36, v37);
    }
    if ( !v31 )
      goto LABEL_45;
    v28 = 1;
    v25 = v31;
    v26 = v32;
LABEL_41:
    v27 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v25, v26, v27, v28, 1, v20, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
      return 0;
    }
LABEL_45:
    sub_1B64324(Instance);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v41 = (CommonUI_o *)Instance;
    if ( !byte_49F7B7B )
    {
      sub_1B640C8(&BalanceConfig_TypeInfo, v39);
      byte_49F7B7B = 1;
    }
    v42 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v42 = BalanceConfig_TypeInfo;
    }
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v42->static_fields->CommandCodeFrameMax;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v20 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v20 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v43 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v20 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v39,
                                                              v40);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v20,
        v43,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0LL);
      v44 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v44->__9__40_4 = v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v44->__9__40_4, (int32_t)v20, v45, v46);
    }
    if ( !v41 )
      goto LABEL_45;
    v28 = 2;
    v25 = v41;
    v26 = Count;
    goto LABEL_41;
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall EventExpeditionListViewManager__CoWaitEffectPlay(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A0007C & 1) == 0 )
  {
    sub_1B640C8(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method);
    byte_4A0007C = 1;
  }
  v4 = sub_1B64314(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  signed int max_length; // w8
  unsigned int v14; // w27
  EventExpeditionEntity_o *v15; // x23
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v18; // x26
  __int64 v19; // x1
  __int64 v20; // x2
  EventExpeditionListViewItem_o *v21; // x22
  const MethodInfo *v22; // x6
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_4A0006F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, evExpeditionEntList);
    sub_1B640C8(&EventExpeditionListViewItem_TypeInfo, v7);
    sub_1B640C8(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    byte_4A0006F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !evExpeditionEntList )
    goto LABEL_15;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1B6432C(itemList, v11);
      v15 = evExpeditionEntList->m_Items[v14];
      if ( !v15 )
        break;
      idx = v15->fields.idx;
      assetManager = this->fields.assetManager;
      v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0LL);
      v21 = (EventExpeditionListViewItem_o *)sub_1B64314(EventExpeditionListViewItem_TypeInfo, v19, v20);
      EventExpeditionListViewItem___ctor(v21, idx, v15, eventId, assetManager, v18, v22);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v21,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
      }
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_1B64324(itemList);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  UnityEngine_Component_o *touchPanel; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x21
  System_Object_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x21
  const MethodInfo *v28; // x2

  if ( (byte_4A0007D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, result);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___, v7);
    sub_1B640C8(&JsonManager_TypeInfo, v8);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__, v9);
    sub_1B640C8(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v11);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v12);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v13);
    byte_4A0007D = 1;
  }
  v14 = sub_1B64314(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, result, animFinishCallback);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  *(_QWORD *)(v14 + 16) = animFinishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)animFinishCallback, v16, v17);
  *(_QWORD *)(v14 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)this, v18, v19);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
    return;
  v20 = (Il2CppObject *)System_String__Concat_61386656(
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v21 = JsonManager__DeserializeArray_object_(
          v20,
          (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v14 + 24) = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)v21, v22, v23);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v14,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_11:
    sub_1B64324(touchPanel);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v27, v28);
}


void __fastcall EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v16; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_4A0007E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v6);
    byte_4A0007E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v10, v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SelectPieceIdxList, (int32_t)v12, v13, v14);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (bitExpeditionFinish = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0LL)) == 0LL )
  {
    sub_1B64324(bitExpeditionFinish);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0LL);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v16);
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w8
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  UILabel_o *expeditionNoticeLb; // x21
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  ExpeditionAssetManager_o *assetManager; // x21
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  ExpeditionAssetManager_o *v34; // x21
  const MethodInfo *v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w19
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x3

  if ( (byte_4A0006E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, evExpeditionEntList);
    sub_1B640C8(&ExpeditionAssetManager_TypeInfo, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__, v13);
    sub_1B640C8(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_5751/*"EXPEDITION_PUSH_BTN_LABEL"*/, v15);
    byte_4A0006E = 1;
  }
  v16 = sub_1B64314(
          EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo,
          evExpeditionEntList,
          *(_QWORD *)&eventId);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_13;
  *(_DWORD *)(v16 + 16) = eventId;
  *(_QWORD *)(v16 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)this, v18, v19);
  *(_QWORD *)(v16 + 32) = evExpeditionEntList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)evExpeditionEntList, v20, v21);
  v22 = *(_DWORD *)(v16 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v22;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.expeditionCallback,
    (int32_t)expeditionCallback,
    v23,
    v24);
  this->fields.requestCallBack = requestCallBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallBack, (int32_t)requestCallBack, v25, v26);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0LL);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_5751/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0LL);
  if ( !expeditionNoticeLb )
    goto LABEL_13;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v28);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v29);
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
    v34 = (ExpeditionAssetManager_o *)sub_1B64314(ExpeditionAssetManager_TypeInfo, v30, v31);
    ExpeditionAssetManager___ctor(v34, v35);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v34;
    sub_1B6406C(p_assetManager, (int32_t)v34, v36, v37);
    assetManager = (ExpeditionAssetManager_o *)p_assetManager->klass;
  }
  v38 = *(_DWORD *)(v16 + 16);
  v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v16,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_13:
    sub_1B64324(touchPanel);
  ExpeditionAssetManager__GetAssets(assetManager, v38, v39, v40);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A00076 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v5);
    byte_4A00076 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    ObjectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v8.fields._current,
      v7);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  if ( (byte_4A00077 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    this = (EventExpeditionListViewManager_o *)sub_1B640C8(&Method_EventExpeditionListViewManager_OnMoveEnd__, v5);
    byte_4A00077 = 1;
  }
  if ( !obj
    || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_1B64324(this);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, v6);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, v4, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  EventExpeditionListViewObject__Init(obj, v9, v10);
}


void __fastcall EventExpeditionListViewManager__LocateDialogToExpeditionObj(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x1
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
  if ( !byte_49F7116 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_49F7116 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(this);
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
  __int64 v6; // x1
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
  if ( !byte_49F7116 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_49F7116 = 1;
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
    sub_1B64324(this);
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
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  Il2CppObject *current; // x25
  Il2CppObject *v21; // x0
  Il2CppObject *MasterData_object; // x0
  _BOOL8 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  const MethodInfo *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+0h] [xbp-80h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A00075 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventExpeditionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__, v6);
    sub_1B640C8(&Method_EventExpeditionListViewManager_OnClickCompleteButton__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v11);
    sub_1B640C8(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A00075 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                (UserEventExpeditionMaster_o *)Instance,
                                this->fields.currentEventId,
                                0LL);
  if ( !Instance )
    goto LABEL_28;
  v16 = (System_Collections_Generic_List_object__o *)Instance;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
    || !EventExpeditionListViewManager__CheckServant((EventExpeditionListViewManager_o *)Instance, v15) )
  {
    goto LABEL_20;
  }
  Instance = (DataManager_o *)this->fields.maskPanel;
  if ( !Instance )
LABEL_28:
    sub_1B64324(Instance);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    v16,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v36 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v36.fields._current;
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v21 )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v21,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_1B64324(MasterData_object);
    if ( !MasterData_object )
      sub_1B64324(0LL);
    v23 = EventExpeditionMaster__TryGetEntity(
            (EventExpeditionMaster_o *)MasterData_object,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            0LL);
    if ( !v19 )
      sub_1B64324(v23);
    v26 = (Il2CppObject *)entity;
    items = v19->fields._items;
    v28 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
    ++v19->fields._version;
    if ( !items )
      sub_1B64324(v23);
    size = v19->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        v26,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v19->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v26;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v19,
    v31);
LABEL_20:
  v32 = Method_EventExpeditionListViewManager_OnClickCompleteButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickCompleteButton__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1B640E0(Method_EventExpeditionListViewManager_OnClickCompleteButton__);
  v33 = (System_Reflection_MethodBase_o *)sub_1B640AC(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
}


void __fastcall EventExpeditionListViewManager__OnClickCompleteView(
        EventExpeditionListViewManager_o *this,
        System_Collections_Generic_List_EventExpeditionEntity__o *eventExpeditionEntities,
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
  __int64 v24; // x21
  int64_t Instance; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *MasterData_object; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x23
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t current; // w1
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x22
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Func_object__bool__o *v43; // x25
  Il2CppObject *v44; // x0
  int32_t klass_high; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  __int64 v49; // x1
  __int64 v50; // x2
  EventExpeditionListViewManager___c_c *v51; // x0
  System_Func_object__int__o *_9__51_0; // x22
  Il2CppObject *v53; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Int32_array *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  const MethodInfo *v61; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v63; // x19
  __int64 v64; // x1
  __int64 v65; // x2
  System_Action_o *v66; // x22
  const MethodInfo *v67; // x4
  System_Collections_Generic_List_EventExpeditionEntity__o *v68; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+30h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A0007F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, eventExpeditionEntities);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__, v11);
    sub_1B640C8(&System_Func_ExpeditionInfo__bool__TypeInfo, v12);
    sub_1B640C8(&System_Func_EventExpeditionEntity__int__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__, v18);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__, v19);
    sub_1B640C8(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, v20);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__, v21);
    sub_1B640C8(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v22);
    sub_1B640C8(&EventExpeditionListViewManager___c_TypeInfo, v23);
    byte_4A0007F = 1;
  }
  entity = 0LL;
  memset(&v70, 0, sizeof(v70));
  v24 = sub_1B64314(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, eventExpeditionEntities, method);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_34;
  *(_QWORD *)(v24 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)this, v26, v27);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList,
    (int32_t)eventExpeditionEntities,
    v28,
    v29);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
  v68 = eventExpeditionEntities;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v70 = v69;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v33 = sub_1B64314(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v31, v32);
    System_Object___ctor((Il2CppObject *)v33, 0LL);
    if ( !v33 )
      sub_1B64324(v34);
    current = (int32_t)v70.fields._current;
    *(_QWORD *)(v33 + 16) = v70.fields._current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 16), current, v35, v36);
    if ( !entity )
      sub_1B64324(v38);
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    v43 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ExpeditionInfo__bool__TypeInfo, v39, v40);
    System_Func_object__bool____ctor(
      v43,
      (Il2CppObject *)v33,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      0LL);
    v44 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v44 )
      sub_1B64324(0LL);
    if ( !SelectPieceIdxList )
      sub_1B64324(v44);
    klass_high = HIDWORD(v44[1].klass);
    items = SelectPieceIdxList->fields._items;
    v47 = Method_System_Collections_Generic_List_int__Add__;
    ++SelectPieceIdxList->fields._version;
    if ( !items )
      sub_1B64324(v44);
    size = SelectPieceIdxList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        SelectPieceIdxList,
        klass_high,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      SelectPieceIdxList->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v51 = EventExpeditionListViewManager___c_TypeInfo;
  if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
    v51 = EventExpeditionListViewManager___c_TypeInfo;
  }
  _9__51_0 = (System_Func_object__int__o *)v51->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = EventExpeditionListViewManager___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v51->static_fields->__9;
    _9__51_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventExpeditionEntity__int__TypeInfo, v49, v50);
    System_Func_object__int____ctor(
      _9__51_0,
      v53,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      0LL);
    static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v55, v56);
  }
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v68,
                                                               (System_Func_TSource__TResult__o *)_9__51_0,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v58 = System_Linq_Enumerable__ToArray_int_(
          v57,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v24 + 24) = v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)v58, v59, v60);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v61);
  Instance = (int64_t)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v63 = this->fields.SelectPieceIdxList,
        v66 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v64, v65),
        System_Action___ctor(
          v66,
          (Il2CppObject *)v24,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_34:
    sub_1B64324(Instance);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v63, v66, 0LL, v67);
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
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 klass_low; // x10
  __int64 v18; // x8
  const MethodInfo *v19; // x2
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x1
  __int64 v24; // x2
  NetworkManager_ResultCallbackFunc_o *v25; // x22

  if ( (byte_4A0007A & 1) == 0 )
  {
    sub_1B640C8(&Method_EventExpeditionListViewManager_StartResponse__, isDecide);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v10);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    byte_4A0007A = 1;
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
    sub_1B64324(maskPanel);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.selectEventExpeditionEntityList;
  if ( !maskPanel )
    goto LABEL_23;
  v15 = *(_QWORD *)&maskPanel->fields.m_CachedPtr;
  v16 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !v15 )
    goto LABEL_23;
  klass_low = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v15 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskPanel,
      (Il2CppObject *)eventExpeditionEntity,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = v15 + 8 * klass_low;
    LODWORD(maskPanel[1].klass) = klass_low + 1;
    *(_QWORD *)(v18 + 32) = eventExpeditionEntity;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)(v18 + 32),
      (int32_t)eventExpeditionEntity,
      (int32_t)eventExpeditionEntity,
      pieceIdx);
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.SelectPieceIdxList;
  if ( !maskPanel )
    goto LABEL_23;
  v20 = *(_QWORD *)&maskPanel->fields.m_CachedPtr;
  v21 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(maskPanel[1].klass);
  if ( !v20 )
    goto LABEL_23;
  v22 = SLODWORD(maskPanel[1].klass);
  if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)maskPanel,
      pieceIdx,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(maskPanel[1].klass) = v22 + 1;
    *(_DWORD *)(v20 + 4 * v22 + 32) = pieceIdx;
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.expeditionConfirmDialog;
  if ( !maskPanel )
    goto LABEL_23;
  ExpeditionConfirmDialogComponent__Close_45188668((ExpeditionConfirmDialogComponent_o *)maskPanel, 0LL, v19);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v23, v24);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager_StartResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskPanel = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                            v25,
                                            (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  void *maskPanel; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  EventExpeditionListViewObject_o **v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v22; // x20
  const MethodInfo *v23; // x1
  EventExpeditionEntity_o *v24; // x20
  bool v25; // w22
  _QWORD *v26; // x8
  System_Reflection_MethodBase_o *v27; // x0
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v31; // x22
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x6
  _QWORD *v34; // x0
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  EventExpeditionListViewManager_o *v37; // x0
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_object__o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  const MethodInfo *v48; // x2

  if ( (byte_4A00079 & 1) == 0 )
  {
    sub_1B640C8(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo, obj);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v5);
    sub_1B640C8(&Method_EventExpeditionListViewManager_OnClickListView__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v11);
    sub_1B640C8(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, v12);
    byte_4A00079 = 1;
  }
  v13 = sub_1B64314(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, obj, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_31;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 24) = obj;
  v17 = (EventExpeditionListViewObject_o **)(v13 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)obj, v18, v19);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  maskPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_31;
  maskPanel = DataManager__GetMasterData_object_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v17 )
    goto LABEL_31;
  currentEventId = this->fields.currentEventId;
  v22 = (EventExpeditionMaster_o *)maskPanel;
  maskPanel = EventExpeditionListViewObject__GetItem(*v17, v20);
  if ( !maskPanel )
    goto LABEL_31;
  if ( !v22 )
    goto LABEL_31;
  maskPanel = EventExpeditionMaster__GetEntity(v22, currentEventId, *((_DWORD *)maskPanel + 5), 0LL);
  if ( !*v17 )
    goto LABEL_31;
  v24 = (EventExpeditionEntity_o *)maskPanel;
  switch ( (*v17)->fields.dispMode )
  {
    case 0:
      goto LABEL_20;
    case 1:
    case 2:
      v25 = EventExpeditionListViewManager__CheckEventEnd(this, v23);
      v26 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1B640E0(Method_EventExpeditionListViewManager_OnClickListView__);
      v27 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
      if ( v25 )
        goto LABEL_19;
      OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v31 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_1B64314(
                                                                  ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo,
                                                                  v29,
                                                                  v30);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v31,
        (Il2CppObject *)v13,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        v32);
      if ( !expeditionConfirmDialog )
        goto LABEL_31;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v24, 1, v31, 1, 0, v33);
      return;
    case 3:
      v34 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1B640E0(Method_EventExpeditionListViewManager_OnClickListView__);
      v27 = (System_Reflection_MethodBase_o *)sub_1B640AC(v34, v34[4]);
LABEL_19:
      OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0LL);
      goto LABEL_20;
    case 4:
      v35 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v35 = (_QWORD *)sub_1B640E0(Method_EventExpeditionListViewManager_OnClickListView__);
      v36 = (System_Reflection_MethodBase_o *)sub_1B640AC(v35, v35[4]);
      OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0LL);
      if ( !EventExpeditionListViewManager__CheckServant(v37, v38) )
      {
LABEL_20:
        maskPanel = this->fields.maskPanel;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
          return;
        }
LABEL_31:
        sub_1B64324(maskPanel);
      }
      v41 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                           v39,
                                                           v40);
      System_Collections_Generic_List_object____ctor(
        v41,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v41 )
        goto LABEL_31;
      items = v41->fields._items;
      v45 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
      ++v41->fields._version;
      if ( !items )
        goto LABEL_31;
      size = v41->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v41,
          (Il2CppObject *)v24,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v41->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v24, v42, v43);
      }
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v41,
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
  _BOOL4 isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A00081 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventExpeditionListViewManager_OnClickNoticeButton__, method);
    byte_4A00081 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v4 = Method_EventExpeditionListViewManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_EventExpeditionListViewManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
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
  struct UIScrollView_o *v7; // x0

  if ( (byte_4A00072 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00072 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_1B64324(0LL);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *current; // x20
  System_Action_o *v15; // x21
  __int64 v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A00071 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v5);
    sub_1B640C8(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__, v8);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v9);
    byte_4A00071 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v18.fields._current;
      v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v16);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v15, v17);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  const MethodInfo *v12; // x2
  struct ExpeditionAssetManager_o *assetManager; // x8
  Il2CppObject *expeditionConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  struct ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  const MethodInfo *v21; // x1
  struct ExpeditionAssetManager_o *v22; // x8
  Il2CppObject *expeditionRewardDialog_k__BackingField; // x21
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  struct ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  const MethodInfo *v30; // x1
  struct ExpeditionAssetManager_o *v31; // x8
  Il2CppObject *expeditionPointRewardDialog_k__BackingField; // x21
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v38; // x8
  Il2CppObject *bitExpeditionStart_k__BackingField; // x20
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v46; // x8
  Il2CppObject *bitExpeditionFinish_k__BackingField; // x20
  Il2CppObject *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  UnityEngine_GameObject_o *v51; // x1
  const MethodInfo *v52; // x2

  if ( (byte_4A0006D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A0006D = 1;
  }
  expeditionConfirmDialog = (UnityEngine_Object_o *)this->fields.expeditionConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionConfirmDialog = &this->fields.expeditionConfirmDialog;
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_49;
    expeditionConfirmDialog_k__BackingField = (Il2CppObject *)assetManager->fields._expeditionConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        expeditionConfirmDialog_k__BackingField,
                                        (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_49;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v11,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = (struct ExpeditionConfirmDialogComponent_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.expeditionConfirmDialog,
      (int32_t)Component_object,
      v16,
      v17);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v18);
  }
  v11 = (UnityEngine_GameObject_o *)*p_expeditionConfirmDialog;
  if ( !*p_expeditionConfirmDialog )
    goto LABEL_49;
  ExpeditionConfirmDialogComponent__Init((ExpeditionConfirmDialogComponent_o *)v11, this->fields.currentEventId, v12);
  expeditionRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionRewardDialog = &this->fields.expeditionRewardDialog;
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v22 = this->fields.assetManager;
    if ( !v22 )
      goto LABEL_49;
    expeditionRewardDialog_k__BackingField = (Il2CppObject *)v22->fields._expeditionRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        expeditionRewardDialog_k__BackingField,
                                        (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_49;
    v24 = UnityEngine_GameObject__GetComponent_object_(
            v11,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = (struct ExpeditionRewardDialogComponent_o *)v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.expeditionRewardDialog, (int32_t)v24, v25, v26);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v27);
  }
  v11 = (UnityEngine_GameObject_o *)*p_expeditionRewardDialog;
  if ( !*p_expeditionRewardDialog )
    goto LABEL_49;
  ExpeditionRewardDialogComponent__Init((ExpeditionRewardDialogComponent_o *)v11, v21);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionPointRewardDialog = &this->fields.expeditionPointRewardDialog;
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v31 = this->fields.assetManager;
    if ( !v31 )
      goto LABEL_49;
    expeditionPointRewardDialog_k__BackingField = (Il2CppObject *)v31->fields._expeditionPointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        expeditionPointRewardDialog_k__BackingField,
                                        (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_49;
    v33 = UnityEngine_GameObject__GetComponent_object_(
            v11,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = (struct ExpeditionPointRewardDialogComponent_o *)v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.expeditionPointRewardDialog, (int32_t)v33, v34, v35);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v36);
  }
  v11 = (UnityEngine_GameObject_o *)*p_expeditionPointRewardDialog;
  if ( !*p_expeditionPointRewardDialog )
    goto LABEL_49;
  ExpeditionPointRewardDialogComponent__Init((ExpeditionPointRewardDialogComponent_o *)v11, v30);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionStart, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v38 = this->fields.assetManager;
    if ( !v38 )
      goto LABEL_49;
    bitExpeditionStart_k__BackingField = (Il2CppObject *)v38->fields._bitExpeditionStart_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        bitExpeditionStart_k__BackingField,
                                        (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_49;
    v40 = UnityEngine_GameObject__GetComponent_object_(
            v11,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = (struct BitExpeditionStartComponent_o *)v40;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bitExpeditionStart, (int32_t)v40, v41, v42);
    v11 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v11 )
      goto LABEL_49;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v44);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionFinish, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v46 = this->fields.assetManager;
    if ( v46 )
    {
      bitExpeditionFinish_k__BackingField = (Il2CppObject *)v46->fields._bitExpeditionFinish_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                          bitExpeditionFinish_k__BackingField,
                                          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v11 )
      {
        v48 = UnityEngine_GameObject__GetComponent_object_(
                v11,
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = (struct BitExpeditionFinishComponent_o *)v48;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bitExpeditionFinish, (int32_t)v48, v49, v50);
        v11 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v11 )
        {
          v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v51, v52);
          return;
        }
      }
    }
LABEL_49:
    sub_1B64324(v11);
  }
}


void __fastcall EventExpeditionListViewManager__SetMaskPanel(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.maskPanel = mask;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)mask, (int32_t)method, v3);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A00070 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6);
    sub_1B640C8(&EventExpeditionListViewObject_TypeInfo, v7);
    byte_4A00070 = 1;
  }
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, obj, item);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventExpeditionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_1B64324(v9);
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

  if ( (byte_4A0007B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, result);
    byte_4A0007B = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager__UpdateButtonDisp(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v5; // x8

  if ( (byte_4A00080 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, method);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v3);
    byte_4A00080 = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_1B64324(0LL);
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_17456/*"btn_on"*/;
  else
    v5 = &StringLiteral_17455/*"btn_off"*/;
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

  if ( (byte_4A00073 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A00073 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      0LL)) == 0LL
    || (v6 = Instance, (Instance = (DataManager_o *)this->fields.expeditionNoticeNumber) == 0LL)
    || (NoticeNumberComponent__SetNumber(
          (NoticeNumberComponent_o *)Instance,
          (int32_t)v6->fields.m_CancellationTokenSource,
          0LL),
        (Instance = (DataManager_o *)this->fields.completeBtn) == 0LL) )
  {
    sub_1B64324(Instance);
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
  __int64 v7; // x1
  struct UITouchPress_o *touchPanel; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  __int64 size; // x2
  int v11; // w10
  System_Collections_Generic_List_EventDelegate__o *v12; // x20
  EventDelegate_Callback_o *v13; // x21

  if ( (byte_4A00083 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&EventDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v5);
    byte_4A00083 = 1;
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
        v11 = onClick->fields._version + 1,
        onClick->fields._size = 0,
        onClick->fields._version = v11,
        (int)size >= 1)
    && (System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL),
        (touchPanel = this->fields.touchPanel) == 0LL) )
  {
LABEL_13:
    sub_1B64324(maskPanel);
  }
  v12 = touchPanel->fields.onClick;
  v13 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v7, size);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46493216(v12, v13, 0LL);
}


void __fastcall EventExpeditionListViewManager___CoWaitEffectPlay_b__48_2(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *touchPanel; // x0
  void *monitor; // x8
  int32_t v9; // w2
  int v10; // w9
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A00085 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v6);
    byte_4A00085 = 1;
  }
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_12;
  monitor = touchPanel[1].monitor;
  if ( !monitor )
    goto LABEL_12;
  v9 = *((_DWORD *)monitor + 6);
  v10 = *((_DWORD *)monitor + 7) + 1;
  *((_DWORD *)monitor + 6) = 0;
  *((_DWORD *)monitor + 7) = v10;
  if ( v9 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)monitor + 2), 0, v9, 0LL);
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
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventExpeditionEntity__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v13;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList,
    (int32_t)v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v16, v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SelectPieceIdxList, (int32_t)v18, v19, v20);
  touchPanel = (UnityEngine_Component_o *)this->fields.bitExpeditionStart;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1B64324(touchPanel);
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

  if ( (byte_4A00084 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    byte_4A00084 = 1;
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
    sub_1B64324(touchPanel);
  }
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)touchPanel, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager__get_HakkenshiBaseWindowHeight(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.hakkenshiInfo )
    sub_1B64324(this);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight((HakkenshiListController_o *)this, method);
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
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A0006C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_4A0006C = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v2; // w2
  int32_t v3; // w3
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  struct EventExpeditionListViewManager_o *_4__this; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v19; // x20
  EventExpeditionListViewManager___c_c *v20; // x8
  System_Action_object__o *_9__48_0; // x21
  Il2CppObject *v22; // x22
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x1
  HakkenshiListController_o *hakkenshiInfo; // x20
  const MethodInfo *v28; // x3
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  EventExpeditionEntity_o *v30; // x21
  int32_t Item; // w22
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x24
  const MethodInfo *v38; // x5

  v4 = this;
  if ( (byte_4A00095 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventExpeditionListViewObject__TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__, v6);
    sub_1B640C8(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__, v11);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_1B640C8(
                                                                         &EventExpeditionListViewManager___c_TypeInfo,
                                                                         v12);
    byte_4A00095 = 1;
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
    v19 = this;
    v20 = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v20 = EventExpeditionListViewManager___c_TypeInfo;
    }
    _9__48_0 = (System_Action_object__o *)v20->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = EventExpeditionListViewManager___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__48_0 = (System_Action_object__o *)sub_1B64314(System_Action_EventExpeditionListViewObject__TypeInfo, v17, v18);
      System_Action_object____ctor(
        _9__48_0,
        v22,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        0LL);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v24, v25);
    }
    if ( !v19 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v19,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    _4__this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)_4__this, 0LL);
    EventExpeditionListViewManager__RequestListObject(_4__this, v26);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.SelectPieceIdxList;
    if ( !this )
      goto LABEL_25;
    hakkenshiInfo = _4__this->fields.hakkenshiInfo;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)System_Collections_Generic_List_int___get_Item(
                                                                         (System_Collections_Generic_List_int__o *)this,
                                                                         0,
                                                                         (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !hakkenshiInfo )
      goto LABEL_25;
    HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, (int32_t)this, 0, v28);
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
                                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    if ( !_4__this->fields.SelectPieceIdxList
      || (v30 = (EventExpeditionEntity_o *)this,
          Item = System_Collections_Generic_List_int___get_Item(
                   _4__this->fields.SelectPieceIdxList,
                   0,
                   (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__),
          v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33),
          System_Action___ctor(
            v34,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
            0LL),
          v37 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v35, v36),
          System_Action___ctor(
            v37,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
            0LL),
          !bitExpeditionStart) )
    {
LABEL_25:
      sub_1B64324(this);
    }
    BitExpeditionStartComponent__SetUp(bitExpeditionStart, v30, Item, v34, v37, v38);
  }
  else if ( !_1__state )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isMine = -1;
    sub_1B6406C(p__2__current, 0, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A00086 & 1) == 0 )
  {
    sub_1B640C8(&EventExpeditionListViewManager___c_TypeInfo, v1);
    byte_4A00086 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventExpeditionListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventExpeditionListViewManager___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventExpeditionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4A00087 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__, v5);
    sub_1B640C8(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, v6);
    byte_4A00087 = 1;
  }
  v7 = sub_1B64314(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
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
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4A00088 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__, v5);
    sub_1B640C8(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, v6);
    byte_4A00088 = 1;
  }
  v7 = sub_1B64314(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
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
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4A00089 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__, v5);
    sub_1B640C8(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, v6);
    byte_4A00089 = 1;
  }
  v7 = sub_1B64314(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !x
    || (this = (EventExpeditionListViewManager___c_o *)EventExpeditionListViewObject__GetItem(x, (const MethodInfo *)x)) == 0LL )
  {
    sub_1B64324(this);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, v3);
}


int32_t __fastcall EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
  int32_t eventId; // w21
  UISprite_o *completeBtnSp; // x20
  struct EventExpeditionListViewManager_o *v9; // x8
  UILabel_o *completeBtnLb; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x3
  struct EventExpeditionListViewManager_o *v13; // x8
  const MethodInfo *v14; // x3
  struct EventExpeditionListViewManager_o *v15; // x19
  const MethodInfo *v16; // x1

  v2 = this;
  if ( (byte_4A0008A & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_17434/*"btn_completecheck_bg"*/, v4);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_1B640C8(&StringLiteral_5736/*"EXPEDITION_COMP_BTN_LABEL"*/, v5);
    byte_4A0008A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  eventId = v2->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_37544692(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_17434/*"btn_completecheck_bg"*/,
                                                                     0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_16;
  completeBtnLb = v9->fields.completeBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_5736/*"EXPEDITION_COMP_BTN_LABEL"*/,
                                                                     0LL);
  if ( !completeBtnLb )
    goto LABEL_16;
  UILabel__set_text(completeBtnLb, (System_String_o *)this, 0LL);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventExpeditionListViewManager__SetExpeditionObject((EventExpeditionListViewManager_o *)this, v11),
        (v13 = v2->fields.__4__this) == 0LL)
    || (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v13->fields.hakkenshiInfo) == 0LL
    || (HakkenshiListController__CreateHakkenshiWindow(
          (HakkenshiListController_o *)this,
          v2->fields.eventId,
          v13->fields.assetManager,
          v12),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this) == 0LL)
    || (EventExpeditionListViewManager__CreateList(
          (EventExpeditionListViewManager_o *)this,
          v2->fields.evExpeditionEntList,
          v2->fields.eventId,
          v14),
        (v15 = v2->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_1B64324(this);
  }
  v15->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)v15, 0LL);
  EventExpeditionListViewManager__RequestListObject(v15, v16);
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
  Il2CppObject *Instance; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  SceneJumpInfo_o *v10; // x20
  Il2CppObject *v11; // x0
  int32_t v12; // w1
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x3

  if ( (byte_4A0008B & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v4);
    sub_1B640C8(&StringLiteral_12562/*"ServantCombine"*/, v5);
    byte_4A0008B = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v13, v14);
      SceneJumpInfo___ctor_38274744(v10, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B64324(v11);
    case 1:
      v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v11 )
      {
        v12 = 71;
        v15 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v8, v9);
      SceneJumpInfo___ctor_38274656(v10, (System_String_o *)StringLiteral_12562/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_10:
        v11 = Instance;
        v15 = (Il2CppObject *)v10;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v11, v12, 1, v15, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  SceneJumpInfo_o *v11; // x20
  __int64 v12; // x0
  int32_t v13; // w1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2

  if ( (byte_4A0008C & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12566/*"ServantEquipList"*/, v4);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v5);
    sub_1B640C8(&StringLiteral_12565/*"ServantEQCombine"*/, v6);
    byte_4A0008C = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_38274744(v11, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B64324(v12);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v16, v17);
      SceneJumpInfo___ctor_38274656(v11, (System_String_o *)StringLiteral_12566/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v13 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v9, v10);
      SceneJumpInfo___ctor_38274656(v11, (System_String_o *)StringLiteral_12565/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v13, 1, (Il2CppObject *)v11, 0LL);
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
  Il2CppObject *Instance; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  SceneJumpInfo_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_4A0008D & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v4);
    byte_4A0008D = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v8 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v6, v7);
    SceneJumpInfo___ctor_38274744(v8, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B64324(v9);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v8, 0LL);
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
  const MethodInfo *v10; // x4

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionObj(
          _4__this,
          this->fields.obj,
          (const MethodInfo *)eventExpeditionEntity),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(_4__this);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v16; // x8
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  __int64 *v19; // x22
  __int64 v20; // x2
  struct EventExpeditionListViewManager_resData_array *v21; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  __int64 v23; // x26
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x22
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x23
  int32_t currentEventId; // w20
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v28; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *closeCallback; // x25
  BattleDropItem_array *v32; // x3
  UserGameEntity_array *v33; // x4
  const MethodInfo *v34; // [xsp+8h] [xbp-68h]

  if ( (byte_4A0008E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_SetActive__, v5);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__, v6);
    sub_1B640C8(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, v7);
    byte_4A0008E = 1;
  }
  v8 = sub_1B64314(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11);
  ActionExtensions__Call(this->fields.animFinishCallback, 0LL);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !res->max_length )
    goto LABEL_15;
  v16 = res->m_Items[0];
  if ( !v16
    || (resultExpeditionRewardInfos = v16->fields.resultExpeditionRewardInfos,
        resultEventRewardInfos = v16->fields.resultEventRewardInfos,
        *(_QWORD *)(v8 + 16) = resultEventRewardInfos,
        v19 = (__int64 *)(v8 + 16),
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)resultEventRewardInfos, v13, v14),
        (v21 = this->fields.res) == 0LL) )
  {
LABEL_14:
    sub_1B64324(v9);
  }
  if ( !v21->max_length )
LABEL_15:
    sub_1B6432C(v9, v12);
  if ( !v21->m_Items[0] )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v23 = *v19;
  if ( !*v19 )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  v28 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v12, v20);
  System_Action_bool____ctor(v28, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  closeCallback = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v8,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0LL);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v32,
    v33,
    currentEventId,
    *(_DWORD *)(v23 + 24) != 0,
    v28,
    closeCallback,
    v34);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_0___FinishResponse_b__3(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x9
  ExpeditionPointRewardDialogComponent_o *_9__2; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *v12; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  EventExpeditionEntity_o *v14; // x21
  BattleDropItem_array *v15; // x22
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x6
  System_Action_o *v22; // x25
  int32_t v23; // w2
  int32_t v24; // w3

  v2 = this;
  if ( (byte_4A0008F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_SetActive__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v5);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1B640C8(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
                                                                       v6);
    byte_4A0008F = 1;
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
                                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
      v12 = v2->fields.CS___8__locals1;
      if ( v12 )
      {
        _4__this = v12->fields.__4__this;
        if ( _4__this )
        {
          v14 = (EventExpeditionEntity_o *)this;
          v15 = v2->fields.resultEventRewardInfos;
          currentEventId = _4__this->fields.currentEventId;
          maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
          v18 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v10, v11);
          System_Action_bool____ctor(v18, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
          v22 = v2->fields.__9__2;
          if ( !v22 )
          {
            v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
            System_Action___ctor(
              v22,
              (Il2CppObject *)v2,
              Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
              0LL);
            v2->fields.__9__2 = v22;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)v22, v23, v24);
          }
          if ( _9__2 )
          {
            ExpeditionPointRewardDialogComponent__Open(_9__2, v14, v15, currentEventId, v18, v22, v21);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B64324(this);
  }
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, method);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v3; // x19
  __int64 v4; // x1
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x20
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  System_Action_o *_9__3; // x21
  int32_t v10; // w2
  int32_t v11; // w3

  v3 = this;
  if ( (byte_4A00090 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1B640C8(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
                                                                       v4);
    byte_4A00090 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  requestCallBack = _4__this->fields.requestCallBack;
  resultEventRewardInfos = v3->fields.resultEventRewardInfos;
  _9__3 = CS___8__locals1->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0LL);
    CS___8__locals1->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&CS___8__locals1->fields.__9__3, (int32_t)_9__3, v10, v11);
  }
  if ( !requestCallBack )
LABEL_9:
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  __int64 v7; // x1
  struct EventExpeditionListViewManager_o *v8; // x8
  struct UITouchPress_o *touchPanel; // x9
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  __int64 size; // x2
  int v12; // w10
  struct UITouchPress_o *v13; // x8
  System_Collections_Generic_List_EventDelegate__o *v14; // x20
  EventDelegate_Callback_o *_9__3; // x21
  int32_t v16; // w2
  int32_t v17; // w3

  v2 = this;
  if ( (byte_4A00091 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&EventDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v4);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1B640C8(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
                                                                       v5);
    byte_4A00091 = 1;
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
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_17;
  touchPanel = v8->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_17;
  onClick = touchPanel->fields.onClick;
  if ( !onClick )
    goto LABEL_17;
  size = (unsigned int)onClick->fields._size;
  v12 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v12;
  if ( (int)size >= 1 )
  {
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
    v8 = v2->fields.__4__this;
    if ( !v8 )
      goto LABEL_17;
  }
  v13 = v8->fields.touchPanel;
  if ( !v13 )
LABEL_17:
    sub_1B64324(this);
  v14 = v13->fields.onClick;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v7, size);
    EventDelegate_Callback___ctor(
      _9__3,
      (Il2CppObject *)v2,
      (intptr_t)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v16, v17);
  }
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46493216(v14, _9__3, 0LL);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct UITouchPress_o *touchPanel; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x8
  __int64 size; // x2
  int v16; // w9
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  struct EventExpeditionListViewManager_o *v20; // x8

  if ( (byte_4A00092 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__, v6);
    sub_1B640C8(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__, v7);
    byte_4A00092 = 1;
  }
  v8 = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
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
  v16 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v16;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v11, size);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v18, v19);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__4,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v20 = this->fields.__4__this;
  if ( !v20 || !Request_object )
LABEL_17:
    sub_1B64324(Request_object);
  EventExpeditionFinishRequest__beginRequest(
    (EventExpeditionFinishRequest_o *)Request_object,
    v20->fields.currentEventId,
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
  System_Action_o *_9__5; // x23
  EventExpeditionListViewManager_o *_4__this; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  v5 = this;
  if ( (byte_4A00093 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, result);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1B640C8(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
                                                                       v6);
    byte_4A00093 = 1;
  }
  _9__5 = v5->fields.__9__5;
  _4__this = v5->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, result, method);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v5,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0LL);
    v5->fields.__9__5 = _9__5;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.__9__5, (int32_t)_9__5, v9, v10);
  }
  if ( !_4__this )
    sub_1B64324(this);
  EventExpeditionListViewManager__FinishResponse(_4__this, result, _9__5, v3);
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
  const MethodInfo *v9; // x3
  struct EventExpeditionListViewManager_o *v10; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4A00094 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    byte_4A00094 = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, method), (v7 = this->fields.__4__this) == 0LL)
    || (_4__this = (EventExpeditionListViewManager_o *)v7->fields.SelectPieceIdxList) == 0LL )
  {
    sub_1B64324(_4__this);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v12; ; HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields._current, 1, v9) )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &i,
           (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    v10 = this->fields.__4__this;
    if ( !v10 )
      sub_1B64324(v8);
    hakkenshiInfo = v10->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1B64324(this);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void __fastcall EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}