void __fastcall EventExpeditionListViewManager___ctor(EventExpeditionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_int__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A02184 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v3);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B64870(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v5);
    byte_4A02184 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v6;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v9;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SelectPieceIdxList, (int32_t)v9, v10, v11);
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
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A0217A & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1B64870(&DataManager_TypeInfo, v3);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4);
    sub_1B64870(&NetworkManager_TypeInfo, v5);
    byte_4A0217A = 1;
  }
  entity = 0LL;
  if ( this->fields.currentEventId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          this->fields.currentEventId,
          (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_14:
    sub_1B64ACC(Master_object, v7);
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
  __int64 v13; // x1
  UserServantMaster_o *v14; // x20
  Il2CppObject *MasterData_object; // x21
  CommonUI_o *v16; // x20
  int32_t v17; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v19; // x22
  Il2CppObject *v20; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  CommonUI_o *v24; // x0
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  CommonUI_o *v28; // x20
  int32_t v29; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v31; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t Count; // w20
  CommonUI_o *v36; // x21
  BalanceConfig_c *v37; // x8
  Il2CppObject *v38; // x23
  struct EventExpeditionListViewManager___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A02176 & 1) == 0 )
  {
    sub_1B64870(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__, v7);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__, v8);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__, v9);
    sub_1B64870(&EventExpeditionListViewManager___c_TypeInfo, v10);
    byte_4A02176 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v14 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v14, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v16 = (CommonUI_o *)Instance;
    v17 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v19 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v20 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64ABC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v20,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_0__,
        0LL);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = v19;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)v19, v22, v23);
    }
    if ( !v16 )
      goto LABEL_45;
    v24 = v16;
    v25 = v17;
    v26 = svtKeep;
    v27 = 0;
    goto LABEL_42;
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v14, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v28 = (CommonUI_o *)Instance;
    v29 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
    if ( !v19 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v31 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64ABC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v31,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_1__,
        0LL);
      v32 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v32->__9__40_1 = v19;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v32->__9__40_1, (int32_t)v19, v33, v34);
    }
    if ( !v28 )
      goto LABEL_45;
    v27 = 1;
    v24 = v28;
    v25 = v29;
LABEL_41:
    v26 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v24, v25, v26, v27, 1, v19, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
      return 0;
    }
LABEL_45:
    sub_1B64ACC(Instance, v13);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v36 = (CommonUI_o *)Instance;
    if ( !byte_49F9C6B )
    {
      sub_1B64870(&BalanceConfig_TypeInfo, v13);
      byte_49F9C6B = 1;
    }
    v37 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    Instance = EventExpeditionListViewManager___c_TypeInfo;
    svtEquipKeep = v37->static_fields->CommandCodeFrameMax;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      Instance = EventExpeditionListViewManager___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v19 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventExpeditionListViewManager___c_TypeInfo;
      }
      v38 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64ABC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v38,
        Method_EventExpeditionListViewManager___c__CheckServant_b__40_4__,
        0LL);
      v39 = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      v39->__9__40_4 = v19;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v39->__9__40_4, (int32_t)v19, v40, v41);
    }
    if ( !v36 )
      goto LABEL_45;
    v27 = 2;
    v24 = v36;
    v25 = Count;
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

  if ( (byte_4A0217E & 1) == 0 )
  {
    sub_1B64870(&EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo, method);
    byte_4A0217E = 1;
  }
  v3 = sub_1B64ABC(EventExpeditionListViewManager__CoWaitEffectPlay_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v11; // x1
  signed int max_length; // w8
  unsigned int v13; // w27
  EventExpeditionEntity_o *v14; // x23
  int32_t idx; // w24
  ExpeditionAssetManager_o *assetManager; // x25
  System_Action_o *v17; // x26
  EventExpeditionListViewItem_o *v18; // x22
  const MethodInfo *v19; // x6
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4A02171 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, evExpeditionEntList);
    sub_1B64870(&EventExpeditionListViewItem_TypeInfo, v7);
    sub_1B64870(&Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    byte_4A02171 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !evExpeditionEntList )
    goto LABEL_15;
  max_length = evExpeditionEntList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1B64AD4(itemList, v11);
      v14 = evExpeditionEntList->m_Items[v13];
      if ( !v14 )
        break;
      idx = v14->fields.idx;
      assetManager = this->fields.assetManager;
      v17 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_EventExpeditionListViewManager_UpdateExpeditionNoticeNumber__,
        0LL);
      v18 = (EventExpeditionListViewItem_o *)sub_1B64ABC(EventExpeditionListViewItem_TypeInfo);
      EventExpeditionListViewItem___ctor(v18, idx, v14, eventId, assetManager, v17, v19);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v18;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
      }
      max_length = evExpeditionEntList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_1B64ACC(itemList, v11);
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
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x21
  System_Object_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x19
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_4A0217F & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, result);
    sub_1B64870(&Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___, v7);
    sub_1B64870(&JsonManager_TypeInfo, v8);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__, v9);
    sub_1B64870(&EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo, v10);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v11);
    sub_1B64870(&StringLiteral_15746/*"["*/, v12);
    sub_1B64870(&StringLiteral_16002/*"]"*/, v13);
    byte_4A0217F = 1;
  }
  v14 = sub_1B64ABC(EventExpeditionListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  *(_QWORD *)(v14 + 16) = animFinishCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)animFinishCallback, v17, v18);
  *(_QWORD *)(v14 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)this, v19, v20);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21971/*"ng"*/, 0LL) )
    return;
  v21 = (Il2CppObject *)System_String__Concat_61394836(
                          (System_String_o *)StringLiteral_15746/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16002/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v22 = JsonManager__DeserializeArray_object_(
          v21,
          (const MethodInfo_2EA119C *)Method_JsonManager_DeserializeArray_EventExpeditionListViewManager_resData___);
  *(_QWORD *)(v14 + 24) = v22;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)v22, v23, v24);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v26 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)v14,
          Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__0__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_11:
    sub_1B64ACC(touchPanel, v16);
  }
  BitExpeditionFinishComponent__EndSetUp(bitExpeditionFinish, v26, v27);
}


void __fastcall EventExpeditionListViewManager__FinishResponseCallBack(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_int__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  UnityEngine_Component_o *bitExpeditionFinish; // x0
  const MethodInfo *v14; // x1
  System_Action_o *expeditionCallback; // x0

  if ( (byte_4A02180 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v3);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B64870(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v5);
    byte_4A02180 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v6;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v9;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SelectPieceIdxList, (int32_t)v9, v10, v11);
  bitExpeditionFinish = (UnityEngine_Component_o *)this->fields.bitExpeditionFinish;
  if ( !bitExpeditionFinish
    || (bitExpeditionFinish = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bitExpeditionFinish, 0LL)) == 0LL )
  {
    sub_1B64ACC(bitExpeditionFinish, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitExpeditionFinish, 0, 0LL);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v14);
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w8
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  UILabel_o *expeditionNoticeLb; // x21
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  ExpeditionAssetManager_o *assetManager; // x21
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  ExpeditionAssetManager_o *v33; // x21
  const MethodInfo *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w19
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3

  if ( (byte_4A02170 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, evExpeditionEntList);
    sub_1B64870(&ExpeditionAssetManager_TypeInfo, v11);
    sub_1B64870(&LocalizationManager_TypeInfo, v12);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__, v13);
    sub_1B64870(&EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo, v14);
    sub_1B64870(&StringLiteral_5751/*"EXPEDITION_PUSH_BTN_LABEL"*/, v15);
    byte_4A02170 = 1;
  }
  v16 = sub_1B64ABC(EventExpeditionListViewManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_13;
  *(_DWORD *)(v16 + 16) = eventId;
  *(_QWORD *)(v16 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)this, v19, v20);
  *(_QWORD *)(v16 + 32) = evExpeditionEntList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)evExpeditionEntList, v21, v22);
  v23 = *(_DWORD *)(v16 + 16);
  this->fields.expeditionCallback = expeditionCallback;
  this->fields.currentEventId = v23;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.expeditionCallback,
    (int32_t)expeditionCallback,
    v24,
    v25);
  this->fields.requestCallBack = requestCallBack;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.requestCallBack, (int32_t)requestCallBack, v26, v27);
  this->fields.isButtonOn = EventRewardSaveData__GetExpeditionNotification(0LL);
  expeditionNoticeLb = this->fields.expeditionNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  touchPanel = LocalizationManager__Get((System_String_o *)StringLiteral_5751/*"EXPEDITION_PUSH_BTN_LABEL"*/, 0LL);
  if ( !expeditionNoticeLb )
    goto LABEL_13;
  UILabel__set_text(expeditionNoticeLb, touchPanel, 0LL);
  EventExpeditionListViewManager__UpdateButtonDisp(this, v29);
  EventExpeditionListViewManager__UpdateExpeditionNoticeNumber(this, v30);
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
    v33 = (ExpeditionAssetManager_o *)sub_1B64ABC(ExpeditionAssetManager_TypeInfo);
    ExpeditionAssetManager___ctor(v33, v34);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v33;
    sub_1B64814(p_assetManager, (int32_t)v33, v35, v36);
    assetManager = (ExpeditionAssetManager_o *)p_assetManager->klass;
  }
  v37 = *(_DWORD *)(v16 + 16);
  v38 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v16,
    Method_EventExpeditionListViewManager___c__DisplayClass32_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_13:
    sub_1B64ACC(touchPanel, v18);
  ExpeditionAssetManager__GetAssets(assetManager, v37, v38, v39);
}


void __fastcall EventExpeditionListViewManager__InitEventExpeditionList(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A02178 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v5);
    byte_4A02178 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    EventExpeditionListViewManager__InitEventExpeditionObj(
      this,
      (EventExpeditionListViewObject_o *)v9.fields._current,
      v8);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  if ( (byte_4A02179 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, obj);
    this = (EventExpeditionListViewManager_o *)sub_1B64870(&Method_EventExpeditionListViewManager_OnMoveEnd__, v5);
    byte_4A02179 = 1;
  }
  if ( !obj
    || (this = (EventExpeditionListViewManager_o *)EventExpeditionListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_1B64ACC(this, obj);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)obj);
  v6 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v6, v4, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  EventExpeditionListViewObject__Init(obj, v6, v7);
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
  if ( !byte_49F9206 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, obj);
    byte_49F9206 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventExpeditionListViewManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64ACC(this, obj);
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
  if ( !byte_49F9206 )
  {
    this = (EventExpeditionListViewManager_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, dialog);
    byte_49F9206 = 1;
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
    sub_1B64ACC(this, dialog);
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
  System_Collections_Generic_List_object__o *v17; // x20
  Il2CppObject *current; // x25
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  const MethodInfo *v32; // x2
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+0h] [xbp-80h] BYREF
  EventExpeditionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A02177 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventExpeditionMaster___, method);
    sub_1B64870(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__get_Current__, v6);
    sub_1B64870(&Method_EventExpeditionListViewManager_OnClickCompleteButton__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v11);
    sub_1B64870(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A02177 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
    sub_1B64ACC(Instance, v15);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v16,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ExpeditionInfo__GetEnumerator__);
  v37 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__MoveNext__) )
  {
    current = v37.fields._current;
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v19 )
      sub_1B64ACC(0LL, v20);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v19,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
    if ( !current )
      sub_1B64ACC(MasterData_object, v22);
    if ( !MasterData_object )
      sub_1B64ACC(0LL, v22);
    v23 = EventExpeditionMaster__TryGetEntity(
            (EventExpeditionMaster_o *)MasterData_object,
            &entity,
            this->fields.currentEventId,
            (int32_t)current[1].klass,
            0LL);
    if ( !v17 )
      sub_1B64ACC(v23, v24);
    v27 = (Il2CppObject *)entity;
    items = v17->fields._items;
    v29 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1B64ACC(v23, v27);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        v27,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v31[4] = (Il2CppClass *)v27;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v27, v25, v26);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ExpeditionInfo__Dispose__);
  EventExpeditionListViewManager__OnClickCompleteView(
    this,
    (System_Collections_Generic_List_EventExpeditionEntity__o *)v17,
    v32);
LABEL_20:
  v33 = Method_EventExpeditionListViewManager_OnClickCompleteButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickCompleteButton__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1B64888(Method_EventExpeditionListViewManager_OnClickCompleteButton__);
  v34 = (System_Reflection_MethodBase_o *)sub_1B64854(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
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
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *MasterData_object; // x22
  __int64 v32; // x23
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t current; // w1
  __int64 v38; // x0
  __int64 v39; // x1
  struct System_Collections_Generic_List_int__o *SelectPieceIdxList; // x22
  System_Collections_Generic_IEnumerable_TSource__o *expeditionInfos; // x24
  System_Func_object__bool__o *v42; // x25
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  __int64 klass_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  EventExpeditionListViewManager___c_c *v49; // x0
  System_Func_object__int__o *_9__51_0; // x22
  Il2CppObject *v51; // x23
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Int32_array *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  const MethodInfo *v59; // x1
  BitExpeditionFinishComponent_o *bitExpeditionFinish; // x20
  System_Collections_Generic_List_int__o *v61; // x19
  System_Action_o *v62; // x22
  const MethodInfo *v63; // x4
  System_Collections_Generic_List_EventExpeditionEntity__o *v64; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+30h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A02181 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, eventExpeditionEntities);
    sub_1B64870(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__get_Current__, v11);
    sub_1B64870(&System_Func_ExpeditionInfo__bool__TypeInfo, v12);
    sub_1B64870(&System_Func_EventExpeditionEntity__int__TypeInfo, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__, v15);
    sub_1B64870(&NetworkManager_TypeInfo, v16);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__, v18);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__, v19);
    sub_1B64870(&EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo, v20);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__, v21);
    sub_1B64870(&EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo, v22);
    sub_1B64870(&EventExpeditionListViewManager___c_TypeInfo, v23);
    byte_4A02181 = 1;
  }
  entity = 0LL;
  memset(&v66, 0, sizeof(v66));
  v24 = sub_1B64ABC(EventExpeditionListViewManager___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_34;
  *(_QWORD *)(v24 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)this, v27, v28);
  this->fields.selectEventExpeditionEntityList = eventExpeditionEntities;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList,
    (int32_t)eventExpeditionEntities,
    v29,
    v30);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
  v64 = eventExpeditionEntities;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_EventExpeditionEntity__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__MoveNext__) )
  {
    v32 = sub_1B64ABC(EventExpeditionListViewManager___c__DisplayClass51_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0LL);
    if ( !v32 )
      sub_1B64ACC(v33, v34);
    current = (int32_t)v66.fields._current;
    *(_QWORD *)(v32 + 16) = v66.fields._current;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v32 + 16), current, v35, v36);
    if ( !entity )
      sub_1B64ACC(v38, v39);
    SelectPieceIdxList = this->fields.SelectPieceIdxList;
    expeditionInfos = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.expeditionInfos;
    v42 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_ExpeditionInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v42,
      (Il2CppObject *)v32,
      Method_EventExpeditionListViewManager___c__DisplayClass51_1__OnClickCompleteView_b__2__,
      0LL);
    v43 = System_Linq_Enumerable__FirstOrDefault_object__48626624(
            expeditionInfos,
            (System_Func_TSource__bool__o *)v42,
            (const MethodInfo_2E5FBC0 *)Method_System_Linq_Enumerable_FirstOrDefault_ExpeditionInfo___);
    if ( !v43 )
      sub_1B64ACC(0LL, v44);
    if ( !SelectPieceIdxList )
      sub_1B64ACC(v43, v44);
    klass_high = HIDWORD(v43[1].klass);
    items = SelectPieceIdxList->fields._items;
    v47 = Method_System_Collections_Generic_List_int__Add__;
    ++SelectPieceIdxList->fields._version;
    if ( !items )
      sub_1B64ACC(v43, klass_high);
    size = SelectPieceIdxList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        SelectPieceIdxList,
        klass_high,
        *(const MethodInfo_34921B8 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      SelectPieceIdxList->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionEntity__Dispose__);
  v49 = EventExpeditionListViewManager___c_TypeInfo;
  if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
    v49 = EventExpeditionListViewManager___c_TypeInfo;
  }
  _9__51_0 = (System_Func_object__int__o *)v49->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = EventExpeditionListViewManager___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__51_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__51_0,
      v51,
      Method_EventExpeditionListViewManager___c__OnClickCompleteView_b__51_0__,
      0LL);
    static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__51_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v64,
                                                               (System_Func_TSource__TResult__o *)_9__51_0,
                                                               (const MethodInfo_2E6ADAC *)Method_System_Linq_Enumerable_Select_EventExpeditionEntity__int___);
  v56 = System_Linq_Enumerable__ToArray_int_(
          v55,
          (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v24 + 24) = v56;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)v56, v57, v58);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventExpeditionListViewManager__RequestListObject(this, v59);
  Instance = (int64_t)this->fields.bitExpeditionFinish;
  if ( !Instance
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        bitExpeditionFinish = this->fields.bitExpeditionFinish,
        v61 = this->fields.SelectPieceIdxList,
        v62 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
        System_Action___ctor(
          v62,
          (Il2CppObject *)v24,
          Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__1__,
          0LL),
        !bitExpeditionFinish) )
  {
LABEL_34:
    sub_1B64ACC(Instance, v26);
  }
  BitExpeditionFinishComponent__SetUp(bitExpeditionFinish, v61, v62, 0LL, v63);
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
  NetworkManager_ResultCallbackFunc_o *v23; // x22

  if ( (byte_4A0217C & 1) == 0 )
  {
    sub_1B64870(&Method_EventExpeditionListViewManager_StartResponse__, isDecide);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v10);
    sub_1B64870(&Method_NetworkManager_getRequest_EventExpeditionStartRequest___, v11);
    sub_1B64870(&NetworkManager_TypeInfo, v12);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    byte_4A0217C = 1;
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
    sub_1B64ACC(maskPanel, isDecide);
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
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = v15 + 8 * klass_low;
    LODWORD(maskPanel[1].klass) = klass_low + 1;
    *(_QWORD *)(v18 + 32) = eventExpeditionEntity;
    sub_1B64814(
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
      *(const MethodInfo_34921B8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(maskPanel[1].klass) = v22 + 1;
    *(_DWORD *)(v20 + 4 * v22 + 32) = pieceIdx;
  }
  maskPanel = (UnityEngine_GameObject_o *)this->fields.expeditionConfirmDialog;
  if ( !maskPanel )
    goto LABEL_23;
  ExpeditionConfirmDialogComponent__Close_45197592((ExpeditionConfirmDialogComponent_o *)maskPanel, 0LL, v19);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager_StartResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskPanel = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                            v23,
                                            (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_EventExpeditionStartRequest___);
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
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  EventExpeditionListViewObject_o **v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t currentEventId; // w23
  EventExpeditionMaster_o *v22; // x20
  EventExpeditionEntity_o *v23; // x20
  bool v24; // w22
  _QWORD *v25; // x8
  System_Reflection_MethodBase_o *v26; // x0
  ExpeditionConfirmDialogComponent_o *expeditionConfirmDialog; // x19
  ExpeditionConfirmDialogComponent_ClickDelegate_o *v28; // x22
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x6
  _QWORD *v31; // x0
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  EventExpeditionListViewManager_o *v34; // x0
  const MethodInfo *v35; // x1
  System_Collections_Generic_List_object__o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  const MethodInfo *v43; // x2

  if ( (byte_4A0217B & 1) == 0 )
  {
    sub_1B64870(&ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo, obj);
    sub_1B64870(&Method_DataManager_GetMasterData_EventExpeditionMaster___, v5);
    sub_1B64870(&Method_EventExpeditionListViewManager_OnClickListView__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v11);
    sub_1B64870(&EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo, v12);
    byte_4A0217B = 1;
  }
  v13 = sub_1B64ABC(EventExpeditionListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_31;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = obj;
  v18 = (EventExpeditionListViewObject_o **)(v13 + 24);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)obj, v19, v20);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  maskPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskPanel )
    goto LABEL_31;
  maskPanel = DataManager__GetMasterData_object_(
                (DataManager_o *)maskPanel,
                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
  if ( !*v18 )
    goto LABEL_31;
  currentEventId = this->fields.currentEventId;
  v22 = (EventExpeditionMaster_o *)maskPanel;
  maskPanel = EventExpeditionListViewObject__GetItem(*v18, v15);
  if ( !maskPanel )
    goto LABEL_31;
  if ( !v22 )
    goto LABEL_31;
  maskPanel = EventExpeditionMaster__GetEntity(v22, currentEventId, *((_DWORD *)maskPanel + 5), 0LL);
  if ( !*v18 )
    goto LABEL_31;
  v23 = (EventExpeditionEntity_o *)maskPanel;
  switch ( (*v18)->fields.dispMode )
  {
    case 0:
      goto LABEL_20;
    case 1:
    case 2:
      v24 = EventExpeditionListViewManager__CheckEventEnd(this, v15);
      v25 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v25 = (_QWORD *)sub_1B64888(Method_EventExpeditionListViewManager_OnClickListView__);
      v26 = (System_Reflection_MethodBase_o *)sub_1B64854(v25, v25[4]);
      if ( v24 )
        goto LABEL_19;
      OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
      expeditionConfirmDialog = this->fields.expeditionConfirmDialog;
      v28 = (ExpeditionConfirmDialogComponent_ClickDelegate_o *)sub_1B64ABC(ExpeditionConfirmDialogComponent_ClickDelegate_TypeInfo);
      ExpeditionConfirmDialogComponent_ClickDelegate___ctor(
        v28,
        (Il2CppObject *)v13,
        Method_EventExpeditionListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        v29);
      if ( !expeditionConfirmDialog )
        goto LABEL_31;
      ExpeditionConfirmDialogComponent__Open(expeditionConfirmDialog, v23, 1, v28, 1, 0, v30);
      return;
    case 3:
      v31 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1B64888(Method_EventExpeditionListViewManager_OnClickListView__);
      v26 = (System_Reflection_MethodBase_o *)sub_1B64854(v31, v31[4]);
LABEL_19:
      OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0LL);
      goto LABEL_20;
    case 4:
      v32 = Method_EventExpeditionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1B64888(Method_EventExpeditionListViewManager_OnClickListView__);
      v33 = (System_Reflection_MethodBase_o *)sub_1B64854(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
      if ( !EventExpeditionListViewManager__CheckServant(v34, v35) )
      {
LABEL_20:
        maskPanel = this->fields.maskPanel;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
          return;
        }
LABEL_31:
        sub_1B64ACC(maskPanel, v15);
      }
      v36 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v36,
        (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
      if ( !v36 )
        goto LABEL_31;
      items = v36->fields._items;
      v40 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
      ++v36->fields._version;
      if ( !items )
        goto LABEL_31;
      size = v36->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v23,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v23;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v23, v37, v38);
      }
      EventExpeditionListViewManager__OnClickCompleteView(
        this,
        (System_Collections_Generic_List_EventExpeditionEntity__o *)v36,
        v43);
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

  if ( (byte_4A02183 & 1) == 0 )
  {
    sub_1B64870(&Method_EventExpeditionListViewManager_OnClickNoticeButton__, method);
    byte_4A02183 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v4 = Method_EventExpeditionListViewManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B64888(Method_EventExpeditionListViewManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B64854(v4, v4[4]);
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

  if ( (byte_4A02174 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_4A02174 = 1;
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
          sub_1B64ACC(0LL, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v11; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A02173 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__get_Current__, v5);
    sub_1B64870(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__get_Count__, v8);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v9);
    byte_4A02173 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_object__o *)EventExpeditionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v11);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      ObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__MoveNext__) )
    {
      current = v18.fields._current;
      v14 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64ACC(v15, v16);
      EventExpeditionListViewObject__Init((EventExpeditionListViewObject_o *)current, v14, v17);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionListViewObject__Dispose__);
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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct ExpeditionAssetManager_o *assetManager; // x8
  Il2CppObject *expeditionConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *expeditionRewardDialog; // x21
  struct ExpeditionRewardDialogComponent_o **p_expeditionRewardDialog; // x20
  struct ExpeditionAssetManager_o *v22; // x8
  Il2CppObject *expeditionRewardDialog_k__BackingField; // x21
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *expeditionPointRewardDialog; // x21
  struct ExpeditionPointRewardDialogComponent_o **p_expeditionPointRewardDialog; // x20
  struct ExpeditionAssetManager_o *v30; // x8
  Il2CppObject *expeditionPointRewardDialog_k__BackingField; // x21
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x2
  UnityEngine_Object_o *bitExpeditionStart; // x20
  struct ExpeditionAssetManager_o *v37; // x8
  Il2CppObject *bitExpeditionStart_k__BackingField; // x20
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *bitExpeditionFinish; // x20
  struct ExpeditionAssetManager_o *v45; // x8
  Il2CppObject *bitExpeditionFinish_k__BackingField; // x20
  Il2CppObject *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  UnityEngine_GameObject_o *v50; // x1
  const MethodInfo *v51; // x2

  if ( (byte_4A0216F & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___, method);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___, v3);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___, v5);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___, v6);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    byte_4A0216F = 1;
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
                                        (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_49;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v11,
                         (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionConfirmDialogComponent___);
    this->fields.expeditionConfirmDialog = (struct ExpeditionConfirmDialogComponent_o *)Component_object;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.expeditionConfirmDialog,
      (int32_t)Component_object,
      v17,
      v18);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionConfirmDialog,
      v19);
  }
  v11 = (UnityEngine_GameObject_o *)*p_expeditionConfirmDialog;
  if ( !*p_expeditionConfirmDialog )
    goto LABEL_49;
  ExpeditionConfirmDialogComponent__Init((ExpeditionConfirmDialogComponent_o *)v11, this->fields.currentEventId, v13);
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
                                        (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_49;
    v24 = UnityEngine_GameObject__GetComponent_object_(
            v11,
            (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionRewardDialogComponent___);
    this->fields.expeditionRewardDialog = (struct ExpeditionRewardDialogComponent_o *)v24;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.expeditionRewardDialog, (int32_t)v24, v25, v26);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionRewardDialog,
      v27);
  }
  v11 = (UnityEngine_GameObject_o *)*p_expeditionRewardDialog;
  if ( !*p_expeditionRewardDialog )
    goto LABEL_49;
  ExpeditionRewardDialogComponent__Init((ExpeditionRewardDialogComponent_o *)v11, v12);
  expeditionPointRewardDialog = (UnityEngine_Object_o *)this->fields.expeditionPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_expeditionPointRewardDialog = &this->fields.expeditionPointRewardDialog;
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(expeditionPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v30 = this->fields.assetManager;
    if ( !v30 )
      goto LABEL_49;
    expeditionPointRewardDialog_k__BackingField = (Il2CppObject *)v30->fields._expeditionPointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        expeditionPointRewardDialog_k__BackingField,
                                        (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_49;
    v32 = UnityEngine_GameObject__GetComponent_object_(
            v11,
            (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ExpeditionPointRewardDialogComponent___);
    this->fields.expeditionPointRewardDialog = (struct ExpeditionPointRewardDialogComponent_o *)v32;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.expeditionPointRewardDialog, (int32_t)v32, v33, v34);
    EventExpeditionListViewManager__LocateDialogToExpeditionPanel(
      this,
      (BaseDialog_o *)this->fields.expeditionPointRewardDialog,
      v35);
  }
  v11 = (UnityEngine_GameObject_o *)*p_expeditionPointRewardDialog;
  if ( !*p_expeditionPointRewardDialog )
    goto LABEL_49;
  ExpeditionPointRewardDialogComponent__Init((ExpeditionPointRewardDialogComponent_o *)v11, v12);
  bitExpeditionStart = (UnityEngine_Object_o *)this->fields.bitExpeditionStart;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionStart, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v37 = this->fields.assetManager;
    if ( !v37 )
      goto LABEL_49;
    bitExpeditionStart_k__BackingField = (Il2CppObject *)v37->fields._bitExpeditionStart_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        bitExpeditionStart_k__BackingField,
                                        (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_49;
    v39 = UnityEngine_GameObject__GetComponent_object_(
            v11,
            (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionStartComponent___);
    this->fields.bitExpeditionStart = (struct BitExpeditionStartComponent_o *)v39;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.bitExpeditionStart, (int32_t)v39, v40, v41);
    v11 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionStart;
    if ( !v11 )
      goto LABEL_49;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
    EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, gameObject, v43);
  }
  bitExpeditionFinish = (UnityEngine_Object_o *)this->fields.bitExpeditionFinish;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bitExpeditionFinish, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v45 = this->fields.assetManager;
    if ( v45 )
    {
      bitExpeditionFinish_k__BackingField = (Il2CppObject *)v45->fields._bitExpeditionFinish_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                          bitExpeditionFinish_k__BackingField,
                                          (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v11 )
      {
        v47 = UnityEngine_GameObject__GetComponent_object_(
                v11,
                (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BitExpeditionFinishComponent___);
        this->fields.bitExpeditionFinish = (struct BitExpeditionFinishComponent_o *)v47;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.bitExpeditionFinish, (int32_t)v47, v48, v49);
        v11 = (UnityEngine_GameObject_o *)this->fields.bitExpeditionFinish;
        if ( v11 )
        {
          v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
          EventExpeditionListViewManager__LocateDialogToExpeditionObj(this, v50, v51);
          return;
        }
      }
    }
LABEL_49:
    sub_1B64ACC(v11, v12);
  }
}


void __fastcall EventExpeditionListViewManager__SetMaskPanel(
        EventExpeditionListViewManager_o *this,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.maskPanel = mask;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)mask, (int32_t)method, v3);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A02172 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, obj);
    sub_1B64870(&Method_EventExpeditionListViewManager_OnMoveEnd__, v6);
    sub_1B64870(&EventExpeditionListViewObject_TypeInfo, v7);
    byte_4A02172 = 1;
  }
  v8 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventExpeditionListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventExpeditionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventExpeditionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventExpeditionListViewObject_TypeInfo )
  {
    sub_1B64ACC(v9, v10);
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

  if ( (byte_4A0217D & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_21971/*"ng"*/, result);
    byte_4A0217D = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21971/*"ng"*/, 0LL) )
  {
    v6 = EventExpeditionListViewManager__CoWaitEffectPlay(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_69121188((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall EventExpeditionListViewManager__UpdateButtonDisp(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *expeditionNoticeBtnSp; // x0
  __int64 *v5; // x8

  if ( (byte_4A02182 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17458/*"btn_on"*/, method);
    sub_1B64870(&StringLiteral_17457/*"btn_off"*/, v3);
    byte_4A02182 = 1;
  }
  expeditionNoticeBtnSp = this->fields.expeditionNoticeBtnSp;
  if ( !expeditionNoticeBtnSp )
    sub_1B64ACC(0LL, method);
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_17458/*"btn_on"*/;
  else
    v5 = &StringLiteral_17457/*"btn_off"*/;
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

  if ( (byte_4A02175 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ExpeditionInfo__get_Count__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A02175 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      0LL)) == 0LL
    || (v7 = Instance, (Instance = (DataManager_o *)this->fields.expeditionNoticeNumber) == 0LL)
    || (NoticeNumberComponent__SetNumber(
          (NoticeNumberComponent_o *)Instance,
          (int32_t)v7->fields.m_CancellationTokenSource,
          0LL),
        (Instance = (DataManager_o *)this->fields.completeBtn) == 0LL) )
  {
    sub_1B64ACC(Instance, v6);
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
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  int32_t size; // w2
  int v10; // w10
  System_Collections_Generic_List_EventDelegate__o *v11; // x20
  EventDelegate_Callback_o *v12; // x21

  if ( (byte_4A02185 & 1) == 0 )
  {
    sub_1B64870(&EventDelegate_Callback_TypeInfo, method);
    sub_1B64870(&EventDelegate_TypeInfo, v3);
    sub_1B64870(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v5);
    byte_4A02185 = 1;
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
        v10 = onClick->fields._version + 1,
        onClick->fields._size = 0,
        onClick->fields._version = v10,
        size >= 1)
    && (System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL),
        (touchPanel = this->fields.touchPanel) == 0LL) )
  {
LABEL_13:
    sub_1B64ACC(maskPanel, method);
  }
  v11 = touchPanel->fields.onClick;
  v12 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v12,
    (Il2CppObject *)this,
    Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_3__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46502140(v11, v12, 0LL);
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
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_int__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A02187 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v4);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B64870(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v6);
    byte_4A02187 = 1;
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
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  this->fields.selectEventExpeditionEntityList = (struct System_Collections_Generic_List_EventExpeditionEntity__o *)v11;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectEventExpeditionEntityList,
    (int32_t)v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.SelectPieceIdxList = v14;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SelectPieceIdxList, (int32_t)v14, v15, v16);
  touchPanel = (UnityEngine_Component_o *)this->fields.bitExpeditionStart;
  if ( !touchPanel
    || (touchPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchPanel, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1B64ACC(touchPanel, method);
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

  if ( (byte_4A02186 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    byte_4A02186 = 1;
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
    sub_1B64ACC(touchPanel, method);
  }
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)touchPanel, 0LL);
}


int32_t __fastcall EventExpeditionListViewManager__get_HakkenshiBaseWindowHeight(
        EventExpeditionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.hakkenshiInfo )
    sub_1B64ACC(this, method);
  return HakkenshiListController__get_HakkenshiBaseWindowHeight((HakkenshiListController_o *)this, method);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A0216E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_4A0216E = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventExpeditionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventExpeditionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64ACC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_EventExpeditionListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B64ACC(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_EventExpeditionListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B64ACC(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *v17; // x20
  EventExpeditionListViewManager___c_c *v18; // x8
  System_Action_object__o *_9__48_0; // x21
  Il2CppObject *v20; // x22
  struct EventExpeditionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  HakkenshiListController_o *hakkenshiInfo; // x20
  const MethodInfo *v26; // x3
  BitExpeditionStartComponent_o *bitExpeditionStart; // x20
  EventExpeditionEntity_o *v28; // x21
  int32_t Item; // w22
  System_Action_o *v30; // x23
  System_Action_o *v31; // x24
  const MethodInfo *v32; // x5

  v4 = this;
  if ( (byte_4A02197 & 1) == 0 )
  {
    sub_1B64870(&System_Action_EventExpeditionListViewObject__TypeInfo, method);
    sub_1B64870(&System_Action_TypeInfo, v5);
    sub_1B64870(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__, v6);
    sub_1B64870(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__, v11);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)sub_1B64870(
                                                                         &EventExpeditionListViewManager___c_TypeInfo,
                                                                         v12);
    byte_4A02197 = 1;
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
    v17 = this;
    v18 = EventExpeditionListViewManager___c_TypeInfo;
    if ( !EventExpeditionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventExpeditionListViewManager___c_TypeInfo);
      v18 = EventExpeditionListViewManager___c_TypeInfo;
    }
    _9__48_0 = (System_Action_object__o *)v18->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = EventExpeditionListViewManager___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__48_0 = (System_Action_object__o *)sub_1B64ABC(System_Action_EventExpeditionListViewObject__TypeInfo);
      System_Action_object____ctor(
        _9__48_0,
        v20,
        Method_EventExpeditionListViewManager___c__CoWaitEffectPlay_b__48_0__,
        0LL);
      static_fields = EventExpeditionListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Action_EventExpeditionListViewObject__o *)_9__48_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v22, v23);
    }
    if ( !v17 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v17,
      (System_Action_T__o *)_9__48_0,
      (const MethodInfo_34B0490 *)Method_System_Collections_Generic_List_EventExpeditionListViewObject__ForEach__);
    _4__this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)_4__this, 0LL);
    EventExpeditionListViewManager__RequestListObject(_4__this, v24);
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)_4__this->fields.SelectPieceIdxList;
    if ( !this )
      goto LABEL_25;
    hakkenshiInfo = _4__this->fields.hakkenshiInfo;
    this = (EventExpeditionListViewManager__CoWaitEffectPlay_d__48_o *)System_Collections_Generic_List_int___get_Item(
                                                                         (System_Collections_Generic_List_int__o *)this,
                                                                         0,
                                                                         (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !hakkenshiInfo )
      goto LABEL_25;
    HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, (int32_t)this, 0, v26);
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
                                                                         (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
    if ( !_4__this->fields.SelectPieceIdxList
      || (v28 = (EventExpeditionEntity_o *)this,
          Item = System_Collections_Generic_List_int___get_Item(
                   _4__this->fields.SelectPieceIdxList,
                   0,
                   (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__),
          v30 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
          System_Action___ctor(
            v30,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_1__,
            0LL),
          v31 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
          System_Action___ctor(
            v31,
            (Il2CppObject *)_4__this,
            Method_EventExpeditionListViewManager__CoWaitEffectPlay_b__48_2__,
            0LL),
          !bitExpeditionStart) )
    {
LABEL_25:
      sub_1B64ACC(this, method);
    }
    BitExpeditionStartComponent__SetUp(bitExpeditionStart, v28, Item, v30, v31, v32);
  }
  else if ( !_1__state )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isMine = -1;
    sub_1B64814(p__2__current, 0, v2, v3);
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

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_EventExpeditionListViewManager__CoWaitEffectPlay_d__48_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A02188 & 1) == 0 )
  {
    sub_1B64870(&EventExpeditionListViewManager___c_TypeInfo, v1);
    byte_4A02188 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(EventExpeditionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventExpeditionListViewManager___c_TypeInfo->static_fields->__9 = (struct EventExpeditionListViewManager___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)EventExpeditionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4A02189 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__, v5);
    sub_1B64870(&EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo, v6);
    byte_4A02189 = 1;
  }
  v7 = sub_1B64ABC(EventExpeditionListViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_1B64ACC(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4A0218A & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__, v5);
    sub_1B64870(&EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo, v6);
    byte_4A0218A = 1;
  }
  v7 = sub_1B64ABC(EventExpeditionListViewManager___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_1B64ACC(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4A0218B & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__, v5);
    sub_1B64870(&EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo, v6);
    byte_4A0218B = 1;
  }
  v7 = sub_1B64ABC(EventExpeditionListViewManager___c__DisplayClass40_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventExpeditionListViewManager___c__DisplayClass40_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B64ACC(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


void __fastcall EventExpeditionListViewManager___c___CoWaitEffectPlay_b__48_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (EventExpeditionListViewManager___c_o *)EventExpeditionListViewObject__GetItem(x, (const MethodInfo *)x)) == 0LL )
  {
    sub_1B64ACC(this, x);
  }
  EventExpeditionListViewItem__CheckExpeditionCondition((EventExpeditionListViewItem_o *)this, (const MethodInfo *)x);
}


int32_t __fastcall EventExpeditionListViewManager___c___OnClickCompleteView_b__51_0(
        EventExpeditionListViewManager___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
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
  const MethodInfo *v11; // x3
  struct EventExpeditionListViewManager_o *v12; // x8
  const MethodInfo *v13; // x3
  struct EventExpeditionListViewManager_o *v14; // x19
  const MethodInfo *v15; // x1

  v2 = this;
  if ( (byte_4A0218C & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, method);
    sub_1B64870(&LocalizationManager_TypeInfo, v3);
    sub_1B64870(&StringLiteral_17436/*"btn_completecheck_bg"*/, v4);
    this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)sub_1B64870(&StringLiteral_5736/*"EXPEDITION_COMP_BTN_LABEL"*/, v5);
    byte_4A0218C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  eventId = v2->fields.eventId;
  completeBtnSp = _4__this->fields.completeBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)AtlasManager__SetEventUI_37549072(
                                                                     eventId,
                                                                     completeBtnSp,
                                                                     (System_String_o *)StringLiteral_17436/*"btn_completecheck_bg"*/,
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
    || (EventExpeditionListViewManager__SetExpeditionObject((EventExpeditionListViewManager_o *)this, method),
        (v12 = v2->fields.__4__this) == 0LL)
    || (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v12->fields.hakkenshiInfo) == 0LL
    || (HakkenshiListController__CreateHakkenshiWindow(
          (HakkenshiListController_o *)this,
          v2->fields.eventId,
          v12->fields.assetManager,
          v11),
        (this = (EventExpeditionListViewManager___c__DisplayClass32_0_o *)v2->fields.__4__this) == 0LL)
    || (EventExpeditionListViewManager__CreateList(
          (EventExpeditionListViewManager_o *)this,
          v2->fields.evExpeditionEntList,
          v2->fields.eventId,
          v13),
        (v14 = v2->fields.__4__this) == 0LL) )
  {
LABEL_16:
    sub_1B64ACC(this, method);
  }
  v14->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)v14, 0LL);
  EventExpeditionListViewManager__RequestListObject(v14, v15);
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
  SceneJumpInfo_o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4A0218D & 1) == 0 )
  {
    sub_1B64870(&SceneJumpInfo_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B64870(&StringLiteral_12528/*"SellServant"*/, v4);
    sub_1B64870(&StringLiteral_12565/*"ServantCombine"*/, v5);
    byte_4A0218D = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279108(v8, (System_String_o *)StringLiteral_12528/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B64ACC(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279020(v8, (System_String_o *)StringLiteral_12565/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_10:
        v9 = Instance;
        v12 = (Il2CppObject *)v8;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, v11, 1, v12, 0LL);
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
  SceneJumpInfo_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4A0218E & 1) == 0 )
  {
    sub_1B64870(&SceneJumpInfo_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B64870(&StringLiteral_12569/*"ServantEquipList"*/, v4);
    sub_1B64870(&StringLiteral_12528/*"SellServant"*/, v5);
    sub_1B64870(&StringLiteral_12568/*"ServantEQCombine"*/, v6);
    byte_4A0218E = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279108(v9, (System_String_o *)StringLiteral_12528/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B64ACC(v10, v11);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279020(v9, (System_String_o *)StringLiteral_12569/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279020(v9, (System_String_o *)StringLiteral_12568/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v12, 1, (Il2CppObject *)v9, 0LL);
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
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A0218F & 1) == 0 )
  {
    sub_1B64870(&SceneJumpInfo_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B64870(&StringLiteral_12528/*"SellServant"*/, v4);
    byte_4A0218F = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_38279108(v6, (System_String_o *)StringLiteral_12528/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B64ACC(v7, v8);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v6, 0LL);
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
    sub_1B64ACC(_4__this, isDecide);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct EventExpeditionListViewManager_resData_array *res; // x8
  EventExpeditionListViewManager_resData_o *v15; // x8
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  BattleDropItem_array *resultExpeditionRewardInfos; // x21
  __int64 *v18; // x22
  struct EventExpeditionListViewManager_resData_array *v19; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  __int64 v21; // x26
  ExpeditionRewardDialogComponent_o *expeditionRewardDialog; // x22
  System_Collections_Generic_List_EventExpeditionEntity__o *selectEventExpeditionEntityList; // x23
  int32_t currentEventId; // w20
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v26; // x24
  System_Action_o *closeCallback; // x25
  BattleDropItem_array *v28; // x3
  UserGameEntity_array *v29; // x4
  const MethodInfo *v30; // [xsp+8h] [xbp-68h]

  if ( (byte_4A02190 & 1) == 0 )
  {
    sub_1B64870(&System_Action_bool__TypeInfo, method);
    sub_1B64870(&System_Action_TypeInfo, v3);
    sub_1B64870(&Method_UnityEngine_GameObject_SetActive__, v4);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__, v5);
    sub_1B64870(&EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo, v6);
    byte_4A02190 = 1;
  }
  v7 = sub_1B64ABC(EventExpeditionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  ActionExtensions__Call(this->fields.animFinishCallback, 0LL);
  res = this->fields.res;
  if ( !res )
    goto LABEL_14;
  if ( !res->max_length )
    goto LABEL_15;
  v15 = res->m_Items[0];
  if ( !v15
    || (resultExpeditionRewardInfos = v15->fields.resultExpeditionRewardInfos,
        resultEventRewardInfos = v15->fields.resultEventRewardInfos,
        *(_QWORD *)(v7 + 16) = resultEventRewardInfos,
        v18 = (__int64 *)(v7 + 16),
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)resultEventRewardInfos, v12, v13),
        (v19 = this->fields.res) == 0LL) )
  {
LABEL_14:
    sub_1B64ACC(v8, v9);
  }
  if ( !v19->max_length )
LABEL_15:
    sub_1B64AD4(v8, v9);
  if ( !v19->m_Items[0] )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v21 = *v18;
  if ( !*v18 )
    goto LABEL_14;
  expeditionRewardDialog = _4__this->fields.expeditionRewardDialog;
  selectEventExpeditionEntityList = _4__this->fields.selectEventExpeditionEntityList;
  currentEventId = _4__this->fields.currentEventId;
  maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
  v26 = (System_Action_bool__o *)sub_1B64ABC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v26, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  closeCallback = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v7,
    Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__1__,
    0LL);
  if ( !expeditionRewardDialog )
    goto LABEL_14;
  ExpeditionRewardDialogComponent__Open(
    expeditionRewardDialog,
    selectEventExpeditionEntityList,
    resultExpeditionRewardInfos,
    v28,
    v29,
    currentEventId,
    *(_DWORD *)(v21 + 24) != 0,
    v26,
    closeCallback,
    v30);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_0___FinishResponse_b__3(
        EventExpeditionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
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
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *v10; // x8
  struct EventExpeditionListViewManager_o *_4__this; // x8
  EventExpeditionEntity_o *v12; // x21
  BattleDropItem_array *v13; // x22
  int32_t currentEventId; // w23
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v16; // x24
  const MethodInfo *v17; // x6
  System_Action_o *v18; // x25
  int32_t v19; // w2
  int32_t v20; // w3

  v2 = this;
  if ( (byte_4A02191 & 1) == 0 )
  {
    sub_1B64870(&System_Action_bool__TypeInfo, method);
    sub_1B64870(&System_Action_TypeInfo, v3);
    sub_1B64870(&Method_UnityEngine_GameObject_SetActive__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v5);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1B64870(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
                                                                       v6);
    byte_4A02191 = 1;
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
                                                                         (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
      v10 = v2->fields.CS___8__locals1;
      if ( v10 )
      {
        _4__this = v10->fields.__4__this;
        if ( _4__this )
        {
          v12 = (EventExpeditionEntity_o *)this;
          v13 = v2->fields.resultEventRewardInfos;
          currentEventId = _4__this->fields.currentEventId;
          maskPanel = (Il2CppObject *)_4__this->fields.maskPanel;
          v16 = (System_Action_bool__o *)sub_1B64ABC(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(v16, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
          v18 = v2->fields.__9__2;
          if ( !v18 )
          {
            v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            System_Action___ctor(
              v18,
              (Il2CppObject *)v2,
              Method_EventExpeditionListViewManager___c__DisplayClass49_1__FinishResponse_b__2__,
              0LL);
            v2->fields.__9__2 = v18;
            sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)v18, v19, v20);
          }
          if ( _9__2 )
          {
            ExpeditionPointRewardDialogComponent__Open(_9__2, v12, v13, currentEventId, v16, v18, v17);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B64ACC(this, method);
  }
  EventExpeditionListViewManager__FinishResponseCallBack((EventExpeditionListViewManager_o *)this, method);
}


void __fastcall EventExpeditionListViewManager___c__DisplayClass49_1___FinishResponse_b__2(
        EventExpeditionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  EventExpeditionListViewManager___c__DisplayClass49_1_o *v2; // x19
  __int64 v3; // x1
  struct EventExpeditionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x20
  struct EventExpeditionListViewManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  System_Action_o *_9__3; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  v2 = this;
  if ( (byte_4A02192 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    this = (EventExpeditionListViewManager___c__DisplayClass49_1_o *)sub_1B64870(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
                                                                       v3);
    byte_4A02192 = 1;
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
    _9__3 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)CS___8__locals1,
      Method_EventExpeditionListViewManager___c__DisplayClass49_0__FinishResponse_b__3__,
      0LL);
    CS___8__locals1->fields.__9__3 = _9__3;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&CS___8__locals1->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !requestCallBack )
LABEL_9:
    sub_1B64ACC(this, method);
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
  struct EventExpeditionListViewManager_o *v7; // x8
  struct UITouchPress_o *touchPanel; // x9
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  int32_t size; // w2
  int v11; // w10
  struct UITouchPress_o *v12; // x8
  System_Collections_Generic_List_EventDelegate__o *v13; // x20
  EventDelegate_Callback_o *_9__3; // x21
  int32_t v15; // w2
  int32_t v16; // w3

  v2 = this;
  if ( (byte_4A02193 & 1) == 0 )
  {
    sub_1B64870(&EventDelegate_Callback_TypeInfo, method);
    sub_1B64870(&EventDelegate_TypeInfo, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v4);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1B64870(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
                                                                       v5);
    byte_4A02193 = 1;
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
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_17;
  touchPanel = v7->fields.touchPanel;
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
  {
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
    v7 = v2->fields.__4__this;
    if ( !v7 )
      goto LABEL_17;
  }
  v12 = v7->fields.touchPanel;
  if ( !v12 )
LABEL_17:
    sub_1B64ACC(this, method);
  v13 = v12->fields.onClick;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__3,
      (Il2CppObject *)v2,
      (intptr_t)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v15, v16);
  }
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46502140(v13, _9__3, 0LL);
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
  int32_t size; // w2
  int v16; // w9
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  struct EventExpeditionListViewManager_o *v20; // x8

  if ( (byte_4A02194 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Clear__, method);
    sub_1B64870(&Method_NetworkManager_getRequest_EventExpeditionFinishRequest___, v3);
    sub_1B64870(&NetworkManager_TypeInfo, v4);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__, v6);
    sub_1B64870(&Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__, v7);
    byte_4A02194 = 1;
  }
  v8 = Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__;
  if ( (*((_BYTE *)Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B64888(Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__3__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B64854(v8, v8[4]);
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
  size = onClick->fields._size;
  v16 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v18, v19);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__4,
                     (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_EventExpeditionFinishRequest___);
  v20 = this->fields.__4__this;
  if ( !v20 || !Request_object )
LABEL_17:
    sub_1B64ACC(Request_object, v11);
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
  if ( (byte_4A02195 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, result);
    this = (EventExpeditionListViewManager___c__DisplayClass51_0_o *)sub_1B64870(
                                                                       &Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
                                                                       v6);
    byte_4A02195 = 1;
  }
  _9__5 = v5->fields.__9__5;
  _4__this = v5->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v5,
      Method_EventExpeditionListViewManager___c__DisplayClass51_0__OnClickCompleteView_b__5__,
      0LL);
    v5->fields.__9__5 = _9__5;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v5->fields.__9__5, (int32_t)_9__5, v9, v10);
  }
  if ( !_4__this )
    sub_1B64ACC(this, result);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  struct EventExpeditionListViewManager_o *v11; // x8
  HakkenshiListController_o *hakkenshiInfo; // x0
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4A02196 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    byte_4A02196 = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventExpeditionListViewManager__InitEventExpeditionList(_4__this, method), (v7 = this->fields.__4__this) == 0LL)
    || (_4__this = (EventExpeditionListViewManager_o *)v7->fields.SelectPieceIdxList) == 0LL )
  {
    sub_1B64ACC(_4__this, method);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_int__o *)_4__this,
    (const MethodInfo_3492D2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v13; ; HakkenshiListController__DisplayHakkenshiObj(hakkenshiInfo, i.fields._current, 1, v10) )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &i,
           (const MethodInfo_32282C0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    v11 = this->fields.__4__this;
    if ( !v11 )
      sub_1B64ACC(v8, v9);
    hakkenshiInfo = v11->fields.hakkenshiInfo;
    if ( !hakkenshiInfo )
      sub_1B64ACC(0LL, v9);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_32282BC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1B64ACC(this, x);
  return x->fields.expeditionIdx == entity->fields.idx;
}


void __fastcall EventExpeditionListViewManager_resData___ctor(
        EventExpeditionListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}