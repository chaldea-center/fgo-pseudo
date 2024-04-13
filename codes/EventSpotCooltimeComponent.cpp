void __fastcall EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC0BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo, v5, v6, v7);
    byte_42EC0BC = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventSpotCooltimeComponent__Awake(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventSpotCooltimeComponent__BeginEventReceiveCooltimeRewardRequest(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
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
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  EventReceiveCooltimeRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v17; // x1

  if ( (byte_42EC0B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventSpotCooltimeComponent_Response__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42EC0B4 = 1;
  }
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v15, (Il2CppObject *)this, Method_EventSpotCooltimeComponent_Response__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventReceiveCooltimeRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v15,
                                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v17);
  EventReceiveCooltimeRewardRequest__beginRequest(Request_WarBoardWallAttackRequest, eventId, 0LL);
}


void __fastcall EventSpotCooltimeComponent__CheckSerializeFieldSetting(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall EventSpotCooltimeComponent__CheckServantSpaceShortage(
        EventSpotCooltimeComponent_o *this,
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
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v25; // x1
  UserServantMaster_o *v26; // x20
  bool v27; // w19
  CommonUI_o *v28; // x19
  int32_t v29; // w20
  int32_t svtKeep; // w21
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__26_0; // x22
  Il2CppObject *v33; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC0BB & 1) == 0 )
  {
    sub_B5D5C4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__, v17, v18, v19);
    sub_B5D5C4(&EventSpotCooltimeComponent___c_TypeInfo, v20, v21, v22);
    byte_42EC0BB = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v26 = (UserServantMaster_o *)Instance;
  v27 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v26, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v28 = (CommonUI_o *)Instance;
      v29 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventSpotCooltimeComponent___c_TypeInfo;
      if ( (BYTE3(EventSpotCooltimeComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
        Instance = EventSpotCooltimeComponent___c_TypeInfo;
      }
      static_fields = (struct EventSpotCooltimeComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__26_0 = static_fields->__9__26_0;
      if ( !_9__26_0 )
      {
        if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        }
        v33 = (Il2CppObject *)static_fields->__9;
        _9__26_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__26_0,
          v33,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0LL);
        v34 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        v34->__9__26_0 = _9__26_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v34->__9__26_0,
          (System_Int32_array **)_9__26_0,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
      if ( v28 )
      {
        CommonUI__OpenSvtFrameShortDlg(v28, v29, svtKeep, 0, 1, _9__26_0, 2, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_21:
    sub_B5D69C(Instance, v25);
  }
  return v27;
}


void __fastcall EventSpotCooltimeComponent__DestroyObjects(
        EventSpotCooltimeComponent_o *this,
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
  UnityEngine_Object_o *spotCooltimeInfoPrefab; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v38; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v39; // x0
  UnityEngine_Object_o *Instance; // x20
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EC0B7 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v23, v24, v25);
    byte_42EC0B7 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimeInfoPrefab = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.spotCooltimeInfoPrefab, 0LL, v27, v28, v29, v30, v31, v32);
  }
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v42,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v43 = v42;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v43,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v34 )
        break;
      current = v43.fields.current;
      if ( !v43.fields.current )
        sub_B5D69C(v34, v35);
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v43.fields.current, 0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v43,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v39 = this->fields.spotCooltimeList;
    if ( !v39 )
      sub_B5D69C(0LL, v38);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v39,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      eventId = this->fields.eventId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__ReleaseEventUI_31190280(eventId, 0LL);
      this->fields.isEventUILoaded = 0;
    }
  }
}


int32_t __fastcall EventSpotCooltimeComponent__GetReceivableRewardState(
        EventSpotCooltimeComponent_o *this,
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
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  char v15; // w22
  char v16; // w20
  char v17; // w21
  SpotCooltimeInfoComponent_o *current; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  _BOOL4 v21; // w8
  _BOOL4 v22; // w9
  int v23; // w10
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-48h] BYREF
  __int64 v26; // [xsp+28h] [xbp-28h]

  if ( (byte_42EC0B8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v11, v12, v13);
    byte_42EC0B8 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  HIDWORD(v26) = 0;
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v19 )
        break;
      current = (SpotCooltimeInfoComponent_o *)v25.fields.current;
      if ( !v25.fields.current )
        sub_B5D69C(v19, v20);
      if ( SpotCooltimeInfoComponent__IsReceivableRewardExists((SpotCooltimeInfoComponent_o *)v25.fields.current, 0LL) )
      {
        if ( !current->fields.isQpType )
          v16 = 1;
        if ( SpotCooltimeInfoComponent__IsMaxReward(current, 0LL) )
          v17 = 1;
        v15 = 1;
      }
    }
    v26 = 0x10000005FLL;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v21 = v17 != 0;
    v22 = v15 != 0;
    v23 = v16 & 1;
    if ( (_DWORD)v26 == 95 )
      v26 = 95LL;
  }
  else
  {
    v21 = 0;
    v23 = 0;
    v22 = 0;
  }
  if ( v21 | v23 )
    return 2;
  else
    return v22;
}


bool __fastcall EventSpotCooltimeComponent__HasServantTypeRewards(
        EventSpotCooltimeComponent_o *this,
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
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x19
  char v18; // w19
  int v19; // w20
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC0BA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v11, v12, v13);
    byte_42EC0BA = 1;
  }
  memset(&v21, 0, sizeof(v21));
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v15 )
        break;
      current = v21.fields.current;
      if ( !v21.fields.current )
        sub_B5D69C(v15, v16);
      if ( SpotCooltimeInfoComponent__IsServantTypeReward((SpotCooltimeInfoComponent_o *)v21.fields.current, 0LL)
        && SpotCooltimeInfoComponent__IsReceivableRewardExists((SpotCooltimeInfoComponent_o *)current, 0LL) )
      {
        v18 = 1;
        v19 = 5;
        goto LABEL_11;
      }
    }
    v18 = 0;
    v19 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    LOBYTE(spotCooltimeList) = (v19 == 5) & v18;
  }
  return (char)spotCooltimeList;
}


void __fastcall EventSpotCooltimeComponent__Initialize(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        AssetData_o *assetData,
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleServantConfConponent_o *p_rewardDialog; // x21
  UnityEngine_Object_o *rewardDialog; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v43; // x20
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v46; // x19
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC0B2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)assetData, method);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v7, v8, v9);
    sub_B5D5C4(&AtlasManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_13150/*"SpotCooltimeRewardDialog"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_9031/*"MapGimmickEffect_SpotCooltimeInfo"*/, v28, v29, v30);
    byte_42EC0B2 = 1;
  }
  this->fields.eventId = eventId;
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_31190100(eventId, v31, 1, 0LL);
  if ( !assetData )
    goto LABEL_21;
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        assetData,
                                                                        (System_String_o *)StringLiteral_9031/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                                                                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  this->fields.spotCooltimeInfoPrefab = Object_WarBoardWaitTimeSetting;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeInfoPrefab,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  p_rewardDialog = (BattleServantConfConponent_o *)&this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0LL, 0LL) )
  {
    v43 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      assetData,
                                                      (System_String_o *)StringLiteral_13150/*"SpotCooltimeRewardDialog"*/,
                                                      (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v44 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v43,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v46 = v44;
      GameObjectExtensions__SetParent_32436388(v44, dialogRoot, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetPosition(v46, zero, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v46, one, 0LL);
      if ( v46 )
      {
        UnityEngine_GameObject__SetActive(v46, 0, 0LL);
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v46,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        p_rewardDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
        sub_B5D560(p_rewardDialog, Component_srcLineSprite, v48, v49, v50, v51, v52, v53);
        return;
      }
LABEL_21:
      sub_B5D69C(v32, v33);
    }
  }
}


bool __fastcall EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC0B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8, v9, v10);
    byte_42EC0B1 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *rewardDialog; // x20
  __int64 v6; // x1
  BaseDialog_o *v7; // x0

  if ( (byte_42EC0B9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC0B9 = 1;
  }
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
    return 0;
  v7 = (BaseDialog_o *)this->fields.rewardDialog;
  if ( !v7 )
    sub_B5D69C(0LL, v6);
  return BaseDialog__get_IsBusy(v7, 0LL);
}


void __fastcall EventSpotCooltimeComponent__ReceiveCooltimeReward(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        System_Action_bool__o *reqeustFinishCallback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onRewardRequestFinishedCallback = reqeustFinishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onRewardRequestFinishedCallback,
    (System_Int32_array **)reqeustFinishCallback,
    (System_String_array **)reqeustFinishCallback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventSpotCooltimeComponent__BeginEventReceiveCooltimeRewardRequest(this, eventId, v10);
}


void __fastcall EventSpotCooltimeComponent__Response(
        EventSpotCooltimeComponent_o *this,
        System_String_o *result,
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Action_T__o *onRewardRequestFinishedCallback; // x0
  bool v40; // w1
  Il2CppObject *v41; // x20
  struct EventSpotCooltimeComponent___c_StaticFields **v42; // x0
  const MethodInfo *v43; // x1
  struct EventSpotCooltimeComponent___c_StaticFields **v44; // x20
  struct EventSpotCooltimeComponent___c_StaticFields *v45; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  __int64 v47; // x1
  struct EventSpotCooltimeComponent___c_StaticFields *v48; // x8
  SpotCooltimeRewardDialog_o *v49; // x20
  BattleDropItem_array *_9__26_0; // x21
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__20_0; // x22
  Il2CppObject *v53; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x0

  if ( (byte_42EC0B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v9, v10, v11);
    sub_B5D5C4(&JsonManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SoundManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__, v21, v22, v23);
    sub_B5D5C4(&EventSpotCooltimeComponent___c_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_16635/*"ar192"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v36, v37, v38);
    byte_42EC0B5 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    v41 = (Il2CppObject *)System_String__Concat_44580072(
                            (System_String_o *)StringLiteral_15824/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16061/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v42 = (struct EventSpotCooltimeComponent___c_StaticFields **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                   v41,
                                                                   (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( !v42 )
      goto LABEL_31;
    v44 = v42;
    if ( *((_DWORD *)v42 + 6) )
    {
      v45 = v42[4];
      if ( !v45 || !v45->__9__26_0 )
        goto LABEL_31;
      rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
        goto LABEL_31;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v42 = (struct EventSpotCooltimeComponent___c_StaticFields **)SoundManager__playSe(
                                                                     (System_String_o *)StringLiteral_16635/*"ar192"*/,
                                                                     0LL);
      if ( *((_DWORD *)v44 + 6) )
      {
        v48 = v44[4];
        if ( !v48 )
          goto LABEL_34;
        v49 = this->fields.rewardDialog;
        _9__26_0 = (BattleDropItem_array *)v48->__9__26_0;
        v42 = (struct EventSpotCooltimeComponent___c_StaticFields **)EventSpotCooltimeComponent___c_TypeInfo;
        if ( (BYTE3(EventSpotCooltimeComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
          v42 = (struct EventSpotCooltimeComponent___c_StaticFields **)EventSpotCooltimeComponent___c_TypeInfo;
        }
        static_fields = v42[23];
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( (*((_BYTE *)v42 + 307) & 4) != 0 && !*((_DWORD *)v42 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v42);
            static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          }
          v53 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(_9__20_0, v53, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0LL);
          v54 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          v54->__9__20_0 = _9__20_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v54->__9__20_0,
            (System_Int32_array **)_9__20_0,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60);
        }
        if ( !v49 )
LABEL_34:
          sub_B5D69C(v42, v47);
        SpotCooltimeRewardDialog__Open(v49, _9__26_0, _9__20_0, 0LL);
LABEL_31:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v43);
        onRewardRequestFinishedCallback = (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback;
        v40 = 1;
        goto LABEL_32;
      }
    }
    v61 = sub_B5D6C8(v42);
    sub_B5D668(v61, 0LL);
  }
  onRewardRequestFinishedCallback = (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback;
  v40 = 0;
LABEL_32:
  ActionExtensions__Call_bool_(
    onRewardRequestFinishedCallback,
    v40,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
}


void __fastcall EventSpotCooltimeComponent__SetSpot(
        EventSpotCooltimeComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
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
  struct UnityEngine_GameObject_o *spotCooltimeInfoPrefab; // x22
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x22
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC0B3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___,
      (_DWORD)userCooltimeRewardEntity,
      (_DWORD)targetSpot,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42EC0B3 = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0LL, 0LL) )
    {
      spotCooltimeInfoPrefab = this->fields.spotCooltimeInfoPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)spotCooltimeInfoPrefab,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_32436388(v17, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_18;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_18;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      localPosition.fields.x = localPosition.fields.x + this->fields.spotInfoOffset.fields.x;
      localPosition.fields.y = localPosition.fields.y + this->fields.spotInfoOffset.fields.y;
      localPosition.fields.z = localPosition.fields.z + this->fields.spotInfoOffset.fields.z;
      GameObjectExtensions__SetLocalPosition(v17, localPosition, 0LL);
      if ( !v17
        || (gameObject = UnityEngine_GameObject__get_gameObject(v17, 0LL),
            one = UnityEngine_Vector3__get_one(0LL),
            GameObjectExtensions__SetLocalScale(gameObject, one, 0LL),
            (transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v17,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___)) == 0LL)
        || (v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            SpotCooltimeInfoComponent__Setup(
              (SpotCooltimeInfoComponent_o *)transform,
              userCooltimeRewardEntity,
              targetSpot,
              0LL),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL) )
      {
LABEL_18:
        sub_B5D69C(transform, v19);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        v21,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__);
    }
  }
}


void __fastcall EventSpotCooltimeComponent__UpdateSpotInfo(
        EventSpotCooltimeComponent_o *this,
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
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC0B6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v11, v12, v13);
    byte_42EC0B6 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v16.fields.current )
        sub_B5D69C(0LL, v15);
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v16.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
  }
}


void __fastcall EventSpotCooltimeComponent___Initialize_b__16_0(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUILoaded = 1;
}


void __fastcall EventSpotCooltimeComponent_RewardResponseData___ctor(
        EventSpotCooltimeComponent_RewardResponseData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotCooltimeComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E568F & 1) == 0 )
  {
    sub_B5D5C4(&EventSpotCooltimeComponent___c_TypeInfo, v1, v2, v3);
    byte_42E568F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventSpotCooltimeComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventSpotCooltimeComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventSpotCooltimeComponent___c___ctor(EventSpotCooltimeComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotCooltimeComponent___c___CheckServantSpaceShortage_b__26_0(
        EventSpotCooltimeComponent___c_o *this,
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

  if ( (byte_42E5690 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__, v8, v9, v10);
    sub_B5D5C4(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo, v11, v12, v13);
    byte_42E5690 = 1;
  }
  v14 = sub_B5D694(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
}


void __fastcall EventSpotCooltimeComponent___c___Response_b__20_0(
        EventSpotCooltimeComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventSpotCooltimeComponent___c__DisplayClass26_0___ctor(
        EventSpotCooltimeComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotCooltimeComponent___c__DisplayClass26_0___CheckServantSpaceShortage_b__1(
        EventSpotCooltimeComponent___c__DisplayClass26_0_o *this,
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

  if ( (byte_42E5691 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12858/*"ServantCombine"*/, v11, v12, v13);
    byte_42E5691 = 1;
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