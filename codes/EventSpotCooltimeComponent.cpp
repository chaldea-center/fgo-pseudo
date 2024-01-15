void __fastcall EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD1E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo, v6);
    byte_40FD1E7 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventSpotCooltimeComponent__Awake(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotCooltimeComponent__BeginEventReceiveCooltimeRewardRequest(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  EventReceiveCooltimeRewardRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FD1DF & 1) == 0 )
  {
    sub_B16FFC(&Method_EventSpotCooltimeComponent_Response__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_40FD1DF = 1;
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&eventId,
                                                 method,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_EventSpotCooltimeComponent_Response__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventReceiveCooltimeRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v10,
                                                                               (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x21
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v12; // x20
  bool v13; // w19
  WebViewManager_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  CommonUI_o *v19; // x19
  int32_t v20; // w20
  int32_t svtKeep; // w21
  EventSpotCooltimeComponent___c_c *v22; // x0
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__26_0; // x22
  Il2CppObject *v25; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  ServantAssetLoadManager_o *v33; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD1E6 & 1) == 0 )
  {
    sub_B16FFC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__, v7);
    sub_B16FFC(&EventSpotCooltimeComponent___c_TypeInfo, v8);
    byte_40FD1E6 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  v12 = MasterData_WarQuestSelectionMaster;
  v13 = 1;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v12, 1, 0LL) )
  {
    v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v19 = (CommonUI_o *)v14;
      v20 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      v22 = EventSpotCooltimeComponent___c_TypeInfo;
      if ( (BYTE3(EventSpotCooltimeComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
        v22 = EventSpotCooltimeComponent___c_TypeInfo;
      }
      static_fields = v22->static_fields;
      _9__26_0 = static_fields->__9__26_0;
      if ( !_9__26_0 )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        }
        v25 = (Il2CppObject *)static_fields->__9;
        _9__26_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                     ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                     v15,
                                                                     v16,
                                                                     v17,
                                                                     v18);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__26_0,
          v25,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0LL);
        v26 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        v26->__9__26_0 = _9__26_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v26->__9__26_0,
          (System_Int32_array **)_9__26_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      if ( v19 )
      {
        CommonUI__OpenSvtFrameShortDlg(v19, v20, svtKeep, 0, 1, _9__26_0, 2, 0LL);
        v33 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( v33 )
        {
          ServantAssetLoadManager__EndRetryTransition(v33, 0LL);
          return 0;
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
  return v13;
}


void __fastcall EventSpotCooltimeComponent__DestroyObjects(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *spotCooltimeInfoPrefab; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v20; // x0
  UnityEngine_Object_o *Instance; // x20
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FD1E2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v9);
    byte_40FD1E2 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimeInfoPrefab = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.spotCooltimeInfoPrefab, 0LL, v11, v12, v13, v14, v15, v16);
  }
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v24 = v23;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      current = v24.fields.current;
      if ( !v24.fields.current )
        sub_B170D4();
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v24.fields.current, 0LL);
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
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v20 = this->fields.spotCooltimeList;
    if ( !v20 )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
      AtlasManager__ReleaseEventUI_28584740(eventId, 0LL);
      this->fields.isEventUILoaded = 0;
    }
  }
}


int32_t __fastcall EventSpotCooltimeComponent__GetReceivableRewardState(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  char v7; // w22
  char v8; // w20
  char v9; // w21
  SpotCooltimeInfoComponent_o *current; // x19
  _BOOL4 v11; // w8
  _BOOL4 v12; // w9
  int v13; // w10
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF
  __int64 v16; // [xsp+28h] [xbp-28h]

  if ( (byte_40FD1E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_40FD1E3 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  HIDWORD(v16) = 0;
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      current = (SpotCooltimeInfoComponent_o *)v15.fields.current;
      if ( !v15.fields.current )
        sub_B170D4();
      if ( SpotCooltimeInfoComponent__IsReceivableRewardExists((SpotCooltimeInfoComponent_o *)v15.fields.current, 0LL) )
      {
        if ( !current->fields.isQpType )
          v8 = 1;
        if ( SpotCooltimeInfoComponent__IsMaxReward(current, 0LL) )
          v9 = 1;
        v7 = 1;
      }
    }
    v16 = 0x10000005FLL;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v11 = v9 != 0;
    v12 = v7 != 0;
    v13 = v8 & 1;
    if ( (_DWORD)v16 == 95 )
      v16 = 95LL;
  }
  else
  {
    v11 = 0;
    v13 = 0;
    v12 = 0;
  }
  if ( v11 | v13 )
    return 2;
  else
    return v12;
}


bool __fastcall EventSpotCooltimeComponent__HasServantTypeRewards(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  Il2CppObject *current; // x19
  char v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD1E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_40FD1E5 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      current = v11.fields.current;
      if ( !v11.fields.current )
        sub_B170D4();
      if ( SpotCooltimeInfoComponent__IsServantTypeReward((SpotCooltimeInfoComponent_o *)v11.fields.current, 0LL)
        && SpotCooltimeInfoComponent__IsReceivableRewardExists((SpotCooltimeInfoComponent_o *)current, 0LL) )
      {
        v8 = 1;
        v9 = 5;
        goto LABEL_11;
      }
    }
    v8 = 0;
    v9 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    LOBYTE(spotCooltimeList) = (v9 == 5) & v8;
  }
  return (char)spotCooltimeList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotCooltimeComponent__Initialize(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        AssetData_o *assetData,
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
  __int64 v15; // x1
  System_Action_o *v16; // x22
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleServantConfConponent_o *p_rewardDialog; // x21
  UnityEngine_Object_o *rewardDialog; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v29; // x19
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD1DD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v8);
    sub_B16FFC(&AtlasManager_TypeInfo, v9);
    sub_B16FFC(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_12938/*"SpotCooltimeRewardDialog"*/, v14);
    sub_B16FFC(&StringLiteral_8909/*"MapGimmickEffect_SpotCooltimeInfo"*/, v15);
    byte_40FD1DD = 1;
  }
  this->fields.eventId = eventId;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, *(_QWORD *)&eventId, assetData, method, v4);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28584560(eventId, v16, 1, 0LL);
  if ( !assetData )
    goto LABEL_21;
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        assetData,
                                                                        (System_String_o *)StringLiteral_8909/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                                                                        (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  this->fields.spotCooltimeInfoPrefab = Object_WarBoardWaitTimeSetting;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeInfoPrefab,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  p_rewardDialog = (BattleServantConfConponent_o *)&this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0LL, 0LL) )
  {
    v26 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      assetData,
                                                      (System_String_o *)StringLiteral_12938/*"SpotCooltimeRewardDialog"*/,
                                                      (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v26,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v29 = v27;
      GameObjectExtensions__SetParent_27425860(v27, dialogRoot, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetPosition(v29, zero, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v29, one, 0LL);
      if ( v29 )
      {
        UnityEngine_GameObject__SetActive(v29, 0, 0LL);
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v29,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        p_rewardDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
        sub_B16F98(p_rewardDialog, Component_srcLineSprite, v31, v32, v33, v34, v35, v36);
        return;
      }
LABEL_21:
      sub_B170D4();
    }
  }
}


bool __fastcall EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FD1DC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    byte_40FD1DC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
LABEL_12:
    sub_B170D4();
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardDialog; // x20
  BaseDialog_o *v4; // x0

  if ( (byte_40FD1E4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD1E4 = 1;
  }
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
    return 0;
  v4 = (BaseDialog_o *)this->fields.rewardDialog;
  if ( !v4 )
    sub_B170D4();
  return BaseDialog__get_IsBusy(v4, 0LL);
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
  sub_B16F98(
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
  System_Action_T__o *onRewardRequestFinishedCallback; // x0
  bool v17; // w1
  Il2CppObject *v18; // x20
  _QWORD *v19; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  _QWORD *v22; // x20
  __int64 v23; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x8
  SpotCooltimeRewardDialog_o *v28; // x20
  BattleDropItem_array *v29; // x21
  EventSpotCooltimeComponent___c_c *v30; // x0
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__20_0; // x22
  Il2CppObject *v33; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FD1E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, result);
    sub_B16FFC(&System_Action_TypeInfo, v5);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v6);
    sub_B16FFC(&JsonManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__, v10);
    sub_B16FFC(&EventSpotCooltimeComponent___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_16373/*"ar192"*/, v12);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v13);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v14);
    sub_B16FFC(&StringLiteral_15807/*"]"*/, v15);
    byte_40FD1E0 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
  {
    v18 = (Il2CppObject *)System_String__Concat_43746016(
                            (System_String_o *)StringLiteral_15571/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15807/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v19 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            v18,
            (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( !v19 )
      goto LABEL_31;
    v22 = v19;
    if ( *((_DWORD *)v19 + 6) )
    {
      v23 = v19[4];
      if ( !v23 || !*(_QWORD *)(v23 + 16) )
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
      v19 = SoundManager__playSe((System_String_o *)StringLiteral_16373/*"ar192"*/, 0LL);
      if ( *((_DWORD *)v22 + 6) )
      {
        v27 = v22[4];
        if ( !v27 )
          goto LABEL_34;
        v28 = this->fields.rewardDialog;
        v29 = *(BattleDropItem_array **)(v27 + 16);
        v30 = EventSpotCooltimeComponent___c_TypeInfo;
        if ( (BYTE3(EventSpotCooltimeComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
          v30 = EventSpotCooltimeComponent___c_TypeInfo;
        }
        static_fields = v30->static_fields;
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v30);
            static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          }
          v33 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v25, v26);
          System_Action___ctor(_9__20_0, v33, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0LL);
          v34 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          v34->__9__20_0 = _9__20_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v34->__9__20_0,
            (System_Int32_array **)_9__20_0,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
        }
        if ( !v28 )
LABEL_34:
          sub_B170D4();
        SpotCooltimeRewardDialog__Open(v28, v29, _9__20_0, 0LL);
LABEL_31:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v20);
        onRewardRequestFinishedCallback = (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback;
        v17 = 1;
        goto LABEL_32;
      }
    }
    sub_B17100(v19, v20, v21);
    sub_B170A0();
  }
  onRewardRequestFinishedCallback = (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback;
  v17 = 0;
LABEL_32:
  ActionExtensions__Call_bool_(
    onRewardRequestFinishedCallback,
    v17,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall EventSpotCooltimeComponent__SetSpot(
        EventSpotCooltimeComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UnityEngine_GameObject_o *spotCooltimeInfoPrefab; // x22
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  SpotCooltimeInfoComponent_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x22
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD1DE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___, userCooltimeRewardEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FD1DE = 1;
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
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)spotCooltimeInfoPrefab,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_27425860(v11, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_18;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_18;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      localPosition.fields.x = localPosition.fields.x + this->fields.spotInfoOffset.fields.x;
      localPosition.fields.y = localPosition.fields.y + this->fields.spotInfoOffset.fields.y;
      localPosition.fields.z = localPosition.fields.z + this->fields.spotInfoOffset.fields.z;
      GameObjectExtensions__SetLocalPosition(v11, localPosition, 0LL);
      if ( !v11
        || (gameObject = UnityEngine_GameObject__get_gameObject(v11, 0LL),
            one = UnityEngine_Vector3__get_one(0LL),
            GameObjectExtensions__SetLocalScale(gameObject, one, 0LL),
            (Component_srcLineSprite = (SpotCooltimeInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v11,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___)) == 0LL)
        || (v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
            SpotCooltimeInfoComponent__Setup(Component_srcLineSprite, userCooltimeRewardEntity, targetSpot, 0LL),
            (spotCooltimeList = this->fields.spotCooltimeList) == 0LL) )
      {
LABEL_18:
        sub_B170D4();
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotCooltimeList,
        v15,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__);
    }
  }
}


void __fastcall EventSpotCooltimeComponent__UpdateSpotInfo(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD1E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_40FD1E1 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v7.fields.current )
        sub_B170D4();
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v7.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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

  if ( (byte_40F7066 & 1) == 0 )
  {
    sub_B16FFC(&EventSpotCooltimeComponent___c_TypeInfo, v1);
    byte_40F7066 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventSpotCooltimeComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventSpotCooltimeComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventSpotCooltimeComponent___c___ctor(EventSpotCooltimeComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotCooltimeComponent___c___CheckServantSpaceShortage_b__26_0(
        EventSpotCooltimeComponent___c_o *this,
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

  if ( (byte_40F7067 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__, v7);
    sub_B16FFC(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo, v8);
    byte_40F7067 = 1;
  }
  v9 = sub_B170CC(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
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

  if ( (byte_40F7068 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12612/*"SellServant"*/, v4);
    sub_B16FFC(&StringLiteral_12651/*"ServantCombine"*/, v5);
    byte_40F7068 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v12 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v16, v17, v18, v19);
      SceneJumpInfo___ctor_29748028(v12, (System_String_o *)StringLiteral_12612/*"SellServant"*/, 0, 0LL);
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
      SceneJumpInfo___ctor_29747932(v12, (System_String_o *)StringLiteral_12651/*"ServantCombine"*/, 0LL);
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