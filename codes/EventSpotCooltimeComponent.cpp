void EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5932BDF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
    byte_5932BDF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.spotCooltimeList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventSpotCooltimeComponent__Awake(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventSpotCooltimeComponent__BeginEventReceiveCooltimeRewardRequest(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_5932BD7 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventSpotCooltimeComponent_Response__);
    sub_21FFC50(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932BD7 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EventSpotCooltimeComponent_Response__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v9);
  EventReceiveCooltimeRewardRequest__beginRequest((EventReceiveCooltimeRewardRequest_o *)Request_object, eventId, 0);
}


void EventSpotCooltimeComponent__CheckSerializeFieldSetting(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool EventSpotCooltimeComponent__CheckServantSpaceShortage(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v5; // x1
  UserServantMaster_o *v6; // x20
  bool v7; // w19
  __int64 v8; // x2
  CommonUI_o *v9; // x19
  int32_t v10; // w20
  int32_t svtKeep; // w21
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__26_0; // x22
  Il2CppObject *v14; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5932BDE & 1) == 0 )
  {
    sub_21FFC50(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__);
    sub_21FFC50(&EventSpotCooltimeComponent___c_TypeInfo);
    byte_5932BDE = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v6 = (UserServantMaster_o *)Instance;
  v7 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( UserServantMaster__CheckServantAdd(v6, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v9 = (CommonUI_o *)Instance;
      v10 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventSpotCooltimeComponent___c_TypeInfo;
      if ( !*(&EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo, v5, v8);
        Instance = EventSpotCooltimeComponent___c_TypeInfo;
      }
      static_fields = (struct EventSpotCooltimeComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__26_0 = static_fields->__9__26_0;
      if ( !_9__26_0 )
      {
        if ( !*((_DWORD *)Instance + 57) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v5, v8);
          static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        }
        v14 = (Il2CppObject *)static_fields->__9;
        _9__26_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__26_0,
          v14,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0);
        v15 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        v15->__9__26_0 = _9__26_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v15->__9__26_0,
          (int32_t)_9__26_0,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
      if ( v9 )
      {
        CommonUI__OpenSvtFrameShortDlg(v9, v10, svtKeep, 0, 1, _9__26_0, 2, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
          return 0;
        }
      }
    }
LABEL_19:
    sub_21FFECC(Instance, v5);
  }
  return v7;
}


void EventSpotCooltimeComponent__DestroyObjects(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *spotCooltimeInfoPrefab; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v22; // x8
  int32_t size; // w2
  int v24; // w9
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Instance; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5932BDA & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_5932BDA = 1;
  }
  memset(&v32, 0, sizeof(v32));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0, 0) )
  {
    this->fields.spotCooltimeInfoPrefab = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.spotCooltimeInfoPrefab, 0, v5, v6, v7, v8, v9, v10);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      spotCooltimeList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v32 = v31;
    v31.fields._list = 0;
    *(_QWORD *)&v31.fields._index = &v32;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v12 )
        break;
      current = v32.fields._current;
      if ( !v32.fields._current )
        sub_21FFECC(v12, v13);
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v32.fields._current, v13);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
        UnityEngine_Object__Destroy_83246496(gameObject, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v22 = this->fields.spotCooltimeList;
    if ( !v22 )
      sub_21FFECC(v20, v21);
    size = v22->fields._size;
    v24 = v22->fields._version + 1;
    v22->fields._size = 0;
    v22->fields._version = v24;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      eventId = this->fields.eventId;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28, v29);
      AtlasManager__ReleaseEventUI_47538200(eventId, 0);
      this->fields.isEventUILoaded = 0;
    }
  }
}


int32_t EventSpotCooltimeComponent__GetReceivableRewardState(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  unsigned __int8 v4; // w20
  unsigned __int8 v5; // w21
  int v6; // w23
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x9
  __int64 v10; // x10
  bool v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5932BDB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_5932BDB = 1;
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  memset(&v13, 0, sizeof(v13));
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      spotCooltimeList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v4 = 0;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v7 )
        break;
      if ( !v13.fields._current )
        sub_21FFECC(v7, v8);
      v9 = *(__int64 *)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_D8);
      if ( v9 > 0 )
      {
        v10 = *(__int64 *)((char *)&v13.fields._current->klass + (unsigned __int64)off_88);
        if ( v10 )
          v11 = v9 >= *(int *)((char *)&word_38 + v10);
        else
          v11 = 0;
        v5 |= *((_BYTE *)&v13.fields._current->klass + (unsigned __int64)&qword_A8) == 0;
        v4 |= v11;
        v6 = 1;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    if ( ((v4 | v5) & 1) != 0 )
      LODWORD(spotCooltimeList) = 2;
    else
      LODWORD(spotCooltimeList) = v6;
  }
  return (int)spotCooltimeList;
}


bool EventSpotCooltimeComponent__HasServantTypeRewards(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  bool v6; // w19
  Il2CppObject *current; // x20
  __int64 v9; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v10; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5932BDD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_5932BDD = 1;
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  memset(&v11, 0, sizeof(v11));
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      spotCooltimeList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v9 = 0;
    v10 = &v11;
    do
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v11,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      v6 = v4;
      if ( !v4 )
        break;
      current = v11.fields._current;
      if ( !v11.fields._current )
        sub_21FFECC(v4, v5);
    }
    while ( !SpotCooltimeInfoComponent__IsServantTypeReward((SpotCooltimeInfoComponent_o *)v11.fields._current, v5)
         || *(__int64 *)((char *)&qword_D8 + (_QWORD)current) <= 0 );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
  }
  else
  {
    return 0;
  }
  return v6;
}


void EventSpotCooltimeComponent__Initialize(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_Action_c *v7; // x0
  System_Action_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__58323140; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  MissionNaviTransitionBoardItem_o *p_rewardDialog; // x20
  UnityEngine_Object_o *rewardDialog; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v31; // x19
  Il2CppObject *Component_object; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_5932BD5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_13521/*"SpotCooltimeRewardDialog"*/);
    sub_21FFC50(&StringLiteral_9268/*"MapGimmickEffect_SpotCooltimeInfo"*/);
    byte_5932BD5 = 1;
  }
  v7 = System_Action_TypeInfo;
  this->fields.eventId = eventId;
  v8 = (System_Action_o *)sub_21FFEBC(v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  AtlasManager__LoadEventUI_47538036(eventId, v8, 1, 0);
  if ( !assetData )
    goto LABEL_21;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              assetData,
                              (System_String_o *)StringLiteral_9268/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  this->fields.spotCooltimeInfoPrefab = (struct UnityEngine_GameObject_o *)Object_object__58323140;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.spotCooltimeInfoPrefab,
    (int32_t)Object_object__58323140,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  p_rewardDialog = (MissionNaviTransitionBoardItem_o *)&this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0, 0) )
  {
    v26 = AssetData__GetObject_object__58323140(
            assetData,
            (System_String_o *)StringLiteral_13521/*"SpotCooltimeRewardDialog"*/,
            (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
      v29 = UnityEngine_Object__Instantiate_object_(
              v26,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v31 = (UnityEngine_GameObject_o *)v29;
      GameObjectExtensions__SetParent_42881836((UnityEngine_GameObject_o *)v29, dialogRoot, 0);
      if ( !byte_5931940 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      GameObjectExtensions__SetPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      if ( !byte_5931945 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931945 = 1;
      }
      GameObjectExtensions__SetLocalScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( v31 )
      {
        UnityEngine_GameObject__SetActive(v31, 0, 0);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v31,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        p_rewardDialog->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
        sub_21FFBF4(p_rewardDialog, (int32_t)Component_object, v33, v34, v35, v36, v37, v38);
        return;
      }
LABEL_21:
      sub_21FFECC(v11, v12);
    }
  }
}


bool EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5932BD4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    byte_5932BD4 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_21FFECC(Master_object, v6);
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0);
}


bool EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *rewardDialog; // x20
  __int64 v5; // x1
  BaseDialog_o *v6; // x0

  if ( (byte_5932BDC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932BDC = 1;
  }
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0, 0) )
    return 0;
  v6 = (BaseDialog_o *)this->fields.rewardDialog;
  if ( !v6 )
    sub_21FFECC(0, v5);
  return BaseDialog__get_IsBusy(v6, 0);
}


void EventSpotCooltimeComponent__ReceiveCooltimeReward(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        System_Action_bool__o *reqeustFinishCallback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.onRewardRequestFinishedCallback = reqeustFinishCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onRewardRequestFinishedCallback,
    (int32_t)reqeustFinishCallback,
    (System_String_o *)reqeustFinishCallback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EventSpotCooltimeComponent__BeginEventReceiveCooltimeRewardRequest(this, eventId, v10);
}


void EventSpotCooltimeComponent__Response(
        EventSpotCooltimeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  bool v5; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x21
  struct EventSpotCooltimeComponent___c_StaticFields **v9; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  struct EventSpotCooltimeComponent___c_StaticFields **v12; // x21
  struct EventSpotCooltimeComponent___c_StaticFields *v13; // x8
  UnityEngine_Object_o *rewardDialog; // x22
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  struct EventSpotCooltimeComponent___c_StaticFields *v20; // x8
  SpotCooltimeRewardDialog_o *v21; // x21
  BattleDropItem_array *_9__26_0; // x22
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__20_0; // x23
  Il2CppObject *v25; // x24
  struct EventSpotCooltimeComponent___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5932BD8 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventSpotCooltimeComponent_Response__);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__);
    sub_21FFC50(&EventSpotCooltimeComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_17528/*"ar192"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5932BD8 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0);
  if ( !v5 )
  {
    v8 = (Il2CppObject *)System_String__Concat_75481624(
                           (System_String_o *)StringLiteral_16395/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16659/*"]"*/,
                           0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6, v7);
    v9 = (struct EventSpotCooltimeComponent___c_StaticFields **)JsonManager__DeserializeArray_object_(
                                                                  v8,
                                                                  (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( !v9 )
      goto LABEL_25;
    v12 = v9;
    if ( *((_DWORD *)v9 + 6) )
    {
      v13 = v9[4];
      if ( !v13 || !v13->__9__26_0 )
        goto LABEL_25;
      rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0, 0) )
        goto LABEL_25;
      v15 = Method_EventSpotCooltimeComponent_Response__;
      if ( (*((_BYTE *)Method_EventSpotCooltimeComponent_Response__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_21FFC68(Method_EventSpotCooltimeComponent_Response__);
      v16 = (System_Reflection_MethodBase_o *)sub_21FFC34(v15, v15[4]);
      v9 = (struct EventSpotCooltimeComponent___c_StaticFields **)OverwriteAssetSoundName__PlaySe(
                                                                    v16,
                                                                    (System_String_o *)StringLiteral_17528/*"ar192"*/,
                                                                    0,
                                                                    0);
      if ( *((_DWORD *)v12 + 6) )
      {
        v20 = v12[4];
        if ( !v20 )
          goto LABEL_28;
        v21 = this->fields.rewardDialog;
        _9__26_0 = (BattleDropItem_array *)v20->__9__26_0;
        v9 = (struct EventSpotCooltimeComponent___c_StaticFields **)EventSpotCooltimeComponent___c_TypeInfo;
        if ( !*(&EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo, v17, v18);
          v9 = (struct EventSpotCooltimeComponent___c_StaticFields **)EventSpotCooltimeComponent___c_TypeInfo;
        }
        static_fields = v9[23];
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( !*((_DWORD *)v9 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v9, v17, v18);
            static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          }
          v25 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(_9__20_0, v25, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0);
          v26 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          v26->__9__20_0 = _9__20_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v26->__9__20_0,
            (int32_t)_9__20_0,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
        }
        if ( !v21 )
LABEL_28:
          sub_21FFECC(v9, v17);
        SpotCooltimeRewardDialog__Open(v21, _9__26_0, _9__20_0, v19);
LABEL_25:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v10);
        goto LABEL_26;
      }
    }
    sub_21FFED4(v9);
  }
LABEL_26:
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback,
    !v5,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
}


void EventSpotCooltimeComponent__SetSpot(
        EventSpotCooltimeComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *spotCooltimeInfoPrefab; // x22
  Il2CppObject *v10; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *spotCooltimeList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5932BD6 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932BD6 = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCooltimeRewardEntity, targetSpot);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0, 0) )
    {
      spotCooltimeInfoPrefab = (Il2CppObject *)this->fields.spotCooltimeInfoPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      v10 = UnityEngine_Object__Instantiate_object_(
              spotCooltimeInfoPrefab,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_42881836((UnityEngine_GameObject_o *)v10, this->fields.spotCooltimeRoot, 0);
      if ( !targetSpot )
        goto LABEL_21;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
      localPosition.fields.x = localPosition.fields.x + this->fields.spotInfoOffset.fields.x;
      localPosition.fields.y = localPosition.fields.y + this->fields.spotInfoOffset.fields.y;
      localPosition.fields.z = localPosition.fields.z + this->fields.spotInfoOffset.fields.z;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v10, localPosition, 0);
      if ( !v10 )
        goto LABEL_21;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v10, 0);
      if ( !byte_5931945 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931945 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v10,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
      if ( !transform
        || (v15 = (Il2CppObject *)transform,
            SpotCooltimeInfoComponent__Setup(
              (SpotCooltimeInfoComponent_o *)transform,
              userCooltimeRewardEntity,
              targetSpot,
              v14),
            (spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList) == 0)
        || (items = spotCooltimeList->fields._items,
            v24 = Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__,
            ++spotCooltimeList->fields._version,
            !items) )
      {
LABEL_21:
        sub_21FFECC(transform, v12);
      }
      size = spotCooltimeList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          spotCooltimeList,
          v15,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        spotCooltimeList->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v15;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
      }
    }
  }
}


void EventSpotCooltimeComponent__UpdateSpotInfo(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932BD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_5932BD9 = 1;
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  memset(&v5, 0, sizeof(v5));
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      spotCooltimeList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_21FFECC(0, v4);
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
  }
}


void EventSpotCooltimeComponent___Initialize_b__16_0(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  this->fields.isEventUILoaded = 1;
}


void EventSpotCooltimeComponent_RewardResponseData___ctor(
        EventSpotCooltimeComponent_RewardResponseData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSpotCooltimeComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932BE0 & 1) == 0 )
  {
    sub_21FFC50(&EventSpotCooltimeComponent___c_TypeInfo);
    byte_5932BE0 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventSpotCooltimeComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventSpotCooltimeComponent___c_TypeInfo->static_fields->__9 = (struct EventSpotCooltimeComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventSpotCooltimeComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventSpotCooltimeComponent___c___ctor(EventSpotCooltimeComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSpotCooltimeComponent___c___CheckServantSpaceShortage_b__26_0(
        EventSpotCooltimeComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_5932BE1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__);
    sub_21FFC50(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
    byte_5932BE1 = 1;
  }
  v4 = sub_21FFEBC(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void EventSpotCooltimeComponent___c___Response_b__20_0(
        EventSpotCooltimeComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void EventSpotCooltimeComponent___c__DisplayClass26_0___ctor(
        EventSpotCooltimeComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSpotCooltimeComponent___c__DisplayClass26_0___CheckServantSpaceShortage_b__1(
        EventSpotCooltimeComponent___c__DisplayClass26_0_o *this,
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

  if ( (byte_5932BE2 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    sub_21FFC50(&StringLiteral_13235/*"ServantCombine"*/);
    byte_5932BE2 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427172(v5, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v6 = Instance;
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_21FFECC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13235/*"ServantCombine"*/, 0);
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