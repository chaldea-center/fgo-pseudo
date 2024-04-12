void __fastcall EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B34FE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
    byte_42B34FE = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  EventReceiveCooltimeRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1

  if ( (byte_42B34F6 & 1) == 0 )
  {
    sub_B52984(&Method_EventSpotCooltimeComponent_Response__);
    sub_B52984(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_42B34F6 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_EventSpotCooltimeComponent_Response__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventReceiveCooltimeRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v5,
                                                                               (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B52A5C(0LL, v7);
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
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v5; // x1
  UserServantMaster_o *v6; // x20
  bool v7; // w19
  CommonUI_o *v8; // x19
  int32_t v9; // w20
  int32_t svtKeep; // w21
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__26_0; // x22
  Il2CppObject *v13; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B34FD & 1) == 0 )
  {
    sub_B52984(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__);
    sub_B52984(&EventSpotCooltimeComponent___c_TypeInfo);
    byte_42B34FD = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v6 = (UserServantMaster_o *)Instance;
  v7 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v6, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v8 = (CommonUI_o *)Instance;
      v9 = servantEquipSum[1];
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
        v13 = (Il2CppObject *)static_fields->__9;
        _9__26_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B52A54(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__26_0,
          v13,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0LL);
        v14 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        v14->__9__26_0 = _9__26_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v14->__9__26_0,
          (System_Int32_array **)_9__26_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      if ( v8 )
      {
        CommonUI__OpenSvtFrameShortDlg(v8, v9, svtKeep, 0, 1, _9__26_0, 2, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_21:
    sub_B52A5C(Instance, v5);
  }
  return v7;
}


void __fastcall EventSpotCooltimeComponent__DestroyObjects(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *spotCooltimeInfoPrefab; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v15; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v16; // x0
  UnityEngine_Object_o *Instance; // x20
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B34F9 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_42B34F9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimeInfoPrefab = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.spotCooltimeInfoPrefab, 0LL, v4, v5, v6, v7, v8, v9);
  }
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v11 )
        break;
      current = v20.fields.current;
      if ( !v20.fields.current )
        sub_B52A5C(v11, v12);
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v20.fields.current, 0LL);
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
        UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v16 = this->fields.spotCooltimeList;
    if ( !v16 )
      sub_B52A5C(0LL, v15);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v16,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
      AtlasManager__ReleaseEventUI_28377088(eventId, 0LL);
      this->fields.isEventUILoaded = 0;
    }
  }
}


int32_t __fastcall EventSpotCooltimeComponent__GetReceivableRewardState(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  char v4; // w22
  char v5; // w20
  char v6; // w21
  SpotCooltimeInfoComponent_o *current; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  _BOOL4 v10; // w8
  _BOOL4 v11; // w9
  int v12; // w10
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-48h] BYREF
  __int64 v15; // [xsp+28h] [xbp-28h]

  if ( (byte_42B34FA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_42B34FA = 1;
  }
  memset(&v14, 0, sizeof(v14));
  HIDWORD(v15) = 0;
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v4 = 0;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v14,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v8 )
        break;
      current = (SpotCooltimeInfoComponent_o *)v14.fields.current;
      if ( !v14.fields.current )
        sub_B52A5C(v8, v9);
      if ( SpotCooltimeInfoComponent__IsReceivableRewardExists((SpotCooltimeInfoComponent_o *)v14.fields.current, 0LL) )
      {
        if ( !current->fields.isQpType )
          v5 = 1;
        if ( SpotCooltimeInfoComponent__IsMaxReward(current, 0LL) )
          v6 = 1;
        v4 = 1;
      }
    }
    v15 = 0x10000005FLL;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v10 = v6 != 0;
    v11 = v4 != 0;
    v12 = v5 & 1;
    if ( (_DWORD)v15 == 95 )
      v15 = 95LL;
  }
  else
  {
    v10 = 0;
    v12 = 0;
    v11 = 0;
  }
  if ( v10 | v12 )
    return 2;
  else
    return v11;
}


bool __fastcall EventSpotCooltimeComponent__HasServantTypeRewards(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  char v7; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B34FC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_42B34FC = 1;
  }
  memset(&v10, 0, sizeof(v10));
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v10,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v4 )
        break;
      current = v10.fields.current;
      if ( !v10.fields.current )
        sub_B52A5C(v4, v5);
      if ( SpotCooltimeInfoComponent__IsServantTypeReward((SpotCooltimeInfoComponent_o *)v10.fields.current, 0LL)
        && SpotCooltimeInfoComponent__IsReceivableRewardExists((SpotCooltimeInfoComponent_o *)current, 0LL) )
      {
        v7 = 1;
        v8 = 5;
        goto LABEL_11;
      }
    }
    v7 = 0;
    v8 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    LOBYTE(spotCooltimeList) = (v8 == 5) & v7;
  }
  return (char)spotCooltimeList;
}


void __fastcall EventSpotCooltimeComponent__Initialize(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantConfConponent_o *p_rewardDialog; // x21
  UnityEngine_Object_o *rewardDialog; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v22; // x19
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B34F4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_13091/*"SpotCooltimeRewardDialog"*/);
    sub_B52984(&StringLiteral_8993/*"MapGimmickEffect_SpotCooltimeInfo"*/);
    byte_42B34F4 = 1;
  }
  this->fields.eventId = eventId;
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28376908(eventId, v7, 1, 0LL);
  if ( !assetData )
    goto LABEL_21;
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        assetData,
                                                                        (System_String_o *)StringLiteral_8993/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                                                                        (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  this->fields.spotCooltimeInfoPrefab = Object_WarBoardWaitTimeSetting;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeInfoPrefab,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  p_rewardDialog = (BattleServantConfConponent_o *)&this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0LL, 0LL) )
  {
    v19 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      assetData,
                                                      (System_String_o *)StringLiteral_13091/*"SpotCooltimeRewardDialog"*/,
                                                      (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v20 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v19,
                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v22 = v20;
      GameObjectExtensions__SetParent_32090952(v20, dialogRoot, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetPosition(v22, zero, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v22, one, 0LL);
      if ( v22 )
      {
        UnityEngine_GameObject__SetActive(v22, 0, 0LL);
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v22,
                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        p_rewardDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
        sub_B52920(p_rewardDialog, Component_srcLineSprite, v24, v25, v26, v27, v28, v29);
        return;
      }
LABEL_21:
      sub_B52A5C(v8, v9);
    }
  }
}


bool __fastcall EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B34F3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    byte_42B34F3 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          eventId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
LABEL_12:
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardDialog; // x20
  __int64 v4; // x1
  BaseDialog_o *v5; // x0

  if ( (byte_42B34FB & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B34FB = 1;
  }
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
    return 0;
  v5 = (BaseDialog_o *)this->fields.rewardDialog;
  if ( !v5 )
    sub_B52A5C(0LL, v4);
  return BaseDialog__get_IsBusy(v5, 0LL);
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
  sub_B52920(
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
  System_Action_T__o *onRewardRequestFinishedCallback; // x0
  bool v6; // w1
  Il2CppObject *v7; // x20
  struct EventSpotCooltimeComponent___c_StaticFields **v8; // x0
  const MethodInfo *v9; // x1
  struct EventSpotCooltimeComponent___c_StaticFields **v10; // x20
  struct EventSpotCooltimeComponent___c_StaticFields *v11; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  __int64 v13; // x1
  struct EventSpotCooltimeComponent___c_StaticFields *v14; // x8
  SpotCooltimeRewardDialog_o *v15; // x20
  BattleDropItem_array *_9__26_0; // x21
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__20_0; // x22
  Il2CppObject *v19; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x0

  if ( (byte_42B34F7 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__);
    sub_B52984(&EventSpotCooltimeComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_16549/*"ar192"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42B34F7 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    v7 = (Il2CppObject *)System_String__Concat_44570600(
                           (System_String_o *)StringLiteral_15739/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_15976/*"]"*/,
                           0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = (struct EventSpotCooltimeComponent___c_StaticFields **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                  v7,
                                                                  (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( !v8 )
      goto LABEL_31;
    v10 = v8;
    if ( *((_DWORD *)v8 + 6) )
    {
      v11 = v8[4];
      if ( !v11 || !v11->__9__26_0 )
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
      v8 = (struct EventSpotCooltimeComponent___c_StaticFields **)SoundManager__playSe(
                                                                    (System_String_o *)StringLiteral_16549/*"ar192"*/,
                                                                    0LL);
      if ( *((_DWORD *)v10 + 6) )
      {
        v14 = v10[4];
        if ( !v14 )
          goto LABEL_34;
        v15 = this->fields.rewardDialog;
        _9__26_0 = (BattleDropItem_array *)v14->__9__26_0;
        v8 = (struct EventSpotCooltimeComponent___c_StaticFields **)EventSpotCooltimeComponent___c_TypeInfo;
        if ( (BYTE3(EventSpotCooltimeComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
          v8 = (struct EventSpotCooltimeComponent___c_StaticFields **)EventSpotCooltimeComponent___c_TypeInfo;
        }
        static_fields = v8[23];
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( (*((_BYTE *)v8 + 307) & 4) != 0 && !*((_DWORD *)v8 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v8);
            static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          }
          v19 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(_9__20_0, v19, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0LL);
          v20 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          v20->__9__20_0 = _9__20_0;
          sub_B52920(
            (BattleServantConfConponent_o *)&v20->__9__20_0,
            (System_Int32_array **)_9__20_0,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
        }
        if ( !v15 )
LABEL_34:
          sub_B52A5C(v8, v13);
        SpotCooltimeRewardDialog__Open(v15, _9__26_0, _9__20_0, 0LL);
LABEL_31:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v9);
        onRewardRequestFinishedCallback = (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback;
        v6 = 1;
        goto LABEL_32;
      }
    }
    v27 = sub_B52A88(v8);
    sub_B52A28(v27, 0LL);
  }
  onRewardRequestFinishedCallback = (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback;
  v6 = 0;
LABEL_32:
  ActionExtensions__Call_bool_(
    onRewardRequestFinishedCallback,
    v6,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall EventSpotCooltimeComponent__SetSpot(
        EventSpotCooltimeComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *spotCooltimeInfoPrefab; // x22
  UnityEngine_GameObject_o *v8; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x22
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B34F5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B34F5 = 1;
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
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)spotCooltimeInfoPrefab,
                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_32090952(v8, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_18;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_18;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      localPosition.fields.x = localPosition.fields.x + this->fields.spotInfoOffset.fields.x;
      localPosition.fields.y = localPosition.fields.y + this->fields.spotInfoOffset.fields.y;
      localPosition.fields.z = localPosition.fields.z + this->fields.spotInfoOffset.fields.z;
      GameObjectExtensions__SetLocalPosition(v8, localPosition, 0LL);
      if ( !v8
        || (gameObject = UnityEngine_GameObject__get_gameObject(v8, 0LL),
            one = UnityEngine_Vector3__get_one(0LL),
            GameObjectExtensions__SetLocalScale(gameObject, one, 0LL),
            (transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v8,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___)) == 0LL)
        || (v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            SpotCooltimeInfoComponent__Setup(
              (SpotCooltimeInfoComponent_o *)transform,
              userCooltimeRewardEntity,
              targetSpot,
              0LL),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL) )
      {
LABEL_18:
        sub_B52A5C(transform, v10);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        v12,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__);
    }
  }
}


void __fastcall EventSpotCooltimeComponent__UpdateSpotInfo(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B34F8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_42B34F8 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v5,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v5,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v5.fields.current )
        sub_B52A5C(0LL, v4);
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v5.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v5,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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
  Il2CppObject *v1; // x19
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42ACDD9 & 1) == 0 )
  {
    sub_B52984(&EventSpotCooltimeComponent___c_TypeInfo);
    byte_42ACDD9 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventSpotCooltimeComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventSpotCooltimeComponent___c_o *)v1;
  sub_B52920(static_fields);
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
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_42ACDDA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__);
    sub_B52984(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
    byte_42ACDDA = 1;
  }
  v4 = sub_B52A54(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_B52A5C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
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
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  AvalonSceneManager_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_42ACDDB & 1) == 0 )
  {
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&StringLiteral_12759/*"SellServant"*/);
    sub_B52984(&StringLiteral_12799/*"ServantCombine"*/);
    byte_42ACDDB = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466224(v5, (System_String_o *)StringLiteral_12759/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B52A5C(v6, v7);
    case 1:
      v6 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v6, v8, 1, v9, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466128(v5, (System_String_o *)StringLiteral_12799/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        v6 = (AvalonSceneManager_o *)Instance;
        v9 = (Il2CppObject *)v5;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}