void __fastcall EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418A9F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo, v3);
    byte_418A9F8 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  EventReceiveCooltimeRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v10; // x1

  if ( (byte_418A9F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventSpotCooltimeComponent_Response__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_418A9F0 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_EventSpotCooltimeComponent_Response__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventReceiveCooltimeRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v8,
                                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v10);
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
  void *Instance; // x0
  __int64 v11; // x1
  UserServantMaster_o *v12; // x20
  bool v13; // w19
  CommonUI_o *v14; // x19
  int32_t v15; // w20
  int32_t svtKeep; // w21
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__26_0; // x22
  Il2CppObject *v19; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A9F7 & 1) == 0 )
  {
    sub_B2C35C(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__, v7);
    sub_B2C35C(&EventSpotCooltimeComponent___c_TypeInfo, v8);
    byte_418A9F7 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v12 = (UserServantMaster_o *)Instance;
  v13 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v12, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v14 = (CommonUI_o *)Instance;
      v15 = servantEquipSum[1];
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
        v19 = (Il2CppObject *)static_fields->__9;
        _9__26_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__26_0,
          v19,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0LL);
        v20 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        v20->__9__26_0 = _9__26_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v20->__9__26_0,
          (System_Int32_array **)_9__26_0,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      if ( v14 )
      {
        CommonUI__OpenSvtFrameShortDlg(v14, v15, svtKeep, 0, 1, _9__26_0, 2, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_21:
    sub_B2C434(Instance, v11);
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
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v22; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v23; // x0
  UnityEngine_Object_o *Instance; // x20
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418A9F3 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v9);
    byte_418A9F3 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimeInfoPrefab = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.spotCooltimeInfoPrefab, 0LL, v11, v12, v13, v14, v15, v16);
  }
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v27 = v26;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v18 )
        break;
      current = v27.fields.current;
      if ( !v27.fields.current )
        sub_B2C434(v18, v19);
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v27.fields.current, 0LL);
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
        UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v23 = this->fields.spotCooltimeList;
    if ( !v23 )
      sub_B2C434(0LL, v22);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v23,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
      AtlasManager__ReleaseEventUI_28451204(eventId, 0LL);
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
  _BOOL8 v11; // x0
  __int64 v12; // x1
  _BOOL4 v13; // w8
  _BOOL4 v14; // w9
  int v15; // w10
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-48h] BYREF
  __int64 v18; // [xsp+28h] [xbp-28h]

  if ( (byte_418A9F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_418A9F4 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  HIDWORD(v18) = 0;
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v11 )
        break;
      current = (SpotCooltimeInfoComponent_o *)v17.fields.current;
      if ( !v17.fields.current )
        sub_B2C434(v11, v12);
      if ( SpotCooltimeInfoComponent__IsReceivableRewardExists((SpotCooltimeInfoComponent_o *)v17.fields.current, 0LL) )
      {
        if ( !current->fields.isQpType )
          v8 = 1;
        if ( SpotCooltimeInfoComponent__IsMaxReward(current, 0LL) )
          v9 = 1;
        v7 = 1;
      }
    }
    v18 = 0x10000005FLL;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v13 = v9 != 0;
    v14 = v7 != 0;
    v15 = v8 & 1;
    if ( (_DWORD)v18 == 95 )
      v18 = 95LL;
  }
  else
  {
    v13 = 0;
    v15 = 0;
    v14 = 0;
  }
  if ( v13 | v15 )
    return 2;
  else
    return v14;
}


bool __fastcall EventSpotCooltimeComponent__HasServantTypeRewards(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *spotCooltimeList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x19
  char v10; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A9F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_418A9F6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v13,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v7 )
        break;
      current = v13.fields.current;
      if ( !v13.fields.current )
        sub_B2C434(v7, v8);
      if ( SpotCooltimeInfoComponent__IsServantTypeReward((SpotCooltimeInfoComponent_o *)v13.fields.current, 0LL)
        && SpotCooltimeInfoComponent__IsReceivableRewardExists((SpotCooltimeInfoComponent_o *)current, 0LL) )
      {
        v10 = 1;
        v11 = 5;
        goto LABEL_11;
      }
    }
    v10 = 0;
    v11 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    LOBYTE(spotCooltimeList) = (v11 == 5) & v10;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleServantConfConponent_o *p_rewardDialog; // x21
  UnityEngine_Object_o *rewardDialog; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v27; // x20
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v30; // x19
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A9EE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v7);
    sub_B2C35C(&AtlasManager_TypeInfo, v8);
    sub_B2C35C(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v10);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_12994/*"SpotCooltimeRewardDialog"*/, v13);
    sub_B2C35C(&StringLiteral_8938/*"MapGimmickEffect_SpotCooltimeInfo"*/, v14);
    byte_418A9EE = 1;
  }
  this->fields.eventId = eventId;
  v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28451024(eventId, v15, 1, 0LL);
  if ( !assetData )
    goto LABEL_21;
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        assetData,
                                                                        (System_String_o *)StringLiteral_8938/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  this->fields.spotCooltimeInfoPrefab = Object_WarBoardWaitTimeSetting;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeInfoPrefab,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  p_rewardDialog = (BattleServantConfConponent_o *)&this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0LL, 0LL) )
  {
    v27 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      assetData,
                                                      (System_String_o *)StringLiteral_12994/*"SpotCooltimeRewardDialog"*/,
                                                      (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v28 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v27,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v30 = v28;
      GameObjectExtensions__SetParent_31331816(v28, dialogRoot, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetPosition(v30, zero, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v30, one, 0LL);
      if ( v30 )
      {
        UnityEngine_GameObject__SetActive(v30, 0, 0LL);
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v30,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        p_rewardDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
        sub_B2C2F8(p_rewardDialog, Component_srcLineSprite, v32, v33, v34, v35, v36, v37);
        return;
      }
LABEL_21:
      sub_B2C434(v16, v17);
    }
  }
}


bool __fastcall EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A9ED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    byte_418A9ED = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
LABEL_12:
    sub_B2C434(Master_WarQuestSelectionMaster, v6);
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardDialog; // x20
  __int64 v4; // x1
  BaseDialog_o *v5; // x0

  if ( (byte_418A9F5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A9F5 = 1;
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
    sub_B2C434(0LL, v4);
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
  sub_B2C2F8(
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
  struct EventSpotCooltimeComponent___c_StaticFields **v19; // x0
  const MethodInfo *v20; // x1
  struct EventSpotCooltimeComponent___c_StaticFields **v21; // x20
  struct EventSpotCooltimeComponent___c_StaticFields *v22; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  __int64 v24; // x1
  struct EventSpotCooltimeComponent___c_StaticFields *v25; // x8
  SpotCooltimeRewardDialog_o *v26; // x20
  BattleDropItem_array *_9__26_0; // x21
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__20_0; // x22
  Il2CppObject *v30; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0

  if ( (byte_418A9F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, result);
    sub_B2C35C(&System_Action_TypeInfo, v5);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v6);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    sub_B2C35C(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__, v10);
    sub_B2C35C(&EventSpotCooltimeComponent___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_16437/*"ar192"*/, v12);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v13);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v14);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v15);
    byte_418A9F1 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    v18 = (Il2CppObject *)System_String__Concat_44307816(
                            (System_String_o *)StringLiteral_15634/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15870/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v19 = (struct EventSpotCooltimeComponent___c_StaticFields **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                   v18,
                                                                   (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( !v19 )
      goto LABEL_31;
    v21 = v19;
    if ( *((_DWORD *)v19 + 6) )
    {
      v22 = v19[4];
      if ( !v22 || !v22->__9__26_0 )
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
      v19 = (struct EventSpotCooltimeComponent___c_StaticFields **)SoundManager__playSe(
                                                                     (System_String_o *)StringLiteral_16437/*"ar192"*/,
                                                                     0LL);
      if ( *((_DWORD *)v21 + 6) )
      {
        v25 = v21[4];
        if ( !v25 )
          goto LABEL_34;
        v26 = this->fields.rewardDialog;
        _9__26_0 = (BattleDropItem_array *)v25->__9__26_0;
        v19 = (struct EventSpotCooltimeComponent___c_StaticFields **)EventSpotCooltimeComponent___c_TypeInfo;
        if ( (BYTE3(EventSpotCooltimeComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
          v19 = (struct EventSpotCooltimeComponent___c_StaticFields **)EventSpotCooltimeComponent___c_TypeInfo;
        }
        static_fields = v19[23];
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( (*((_BYTE *)v19 + 307) & 4) != 0 && !*((_DWORD *)v19 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v19);
            static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          }
          v30 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(_9__20_0, v30, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0LL);
          v31 = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          v31->__9__20_0 = _9__20_0;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v31->__9__20_0,
            (System_Int32_array **)_9__20_0,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
        }
        if ( !v26 )
LABEL_34:
          sub_B2C434(v19, v24);
        SpotCooltimeRewardDialog__Open(v26, _9__26_0, _9__20_0, 0LL);
LABEL_31:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v20);
        onRewardRequestFinishedCallback = (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback;
        v17 = 1;
        goto LABEL_32;
      }
    }
    v38 = sub_B2C460(v19);
    sub_B2C400(v38, 0LL);
  }
  onRewardRequestFinishedCallback = (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback;
  v17 = 0;
LABEL_32:
  ActionExtensions__Call_bool_(
    onRewardRequestFinishedCallback,
    v17,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
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
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x22
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A9EF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___, userCooltimeRewardEntity);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418A9EF = 1;
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
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_31331816(v11, this->fields.spotCooltimeRoot, 0LL);
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
            (transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v11,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___)) == 0LL)
        || (v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            SpotCooltimeInfoComponent__Setup(
              (SpotCooltimeInfoComponent_o *)transform,
              userCooltimeRewardEntity,
              targetSpot,
              0LL),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL) )
      {
LABEL_18:
        sub_B2C434(transform, v13);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        v15,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__);
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
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A9F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_418A9F2 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v8.fields.current )
        sub_B2C434(0LL, v7);
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v8.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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
  Il2CppObject *v2; // x19
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184197 & 1) == 0 )
  {
    sub_B2C35C(&EventSpotCooltimeComponent___c_TypeInfo, v1);
    byte_4184197 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventSpotCooltimeComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventSpotCooltimeComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4184198 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__, v5);
    sub_B2C35C(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo, v6);
    byte_4184198 = 1;
  }
  v7 = sub_B2C42C(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
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
  SceneJumpInfo_o *v8; // x20
  AvalonSceneManager_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4184199 & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v4);
    sub_B2C35C(&StringLiteral_12707/*"ServantCombine"*/, v5);
    byte_4184199 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292968(v8, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B2C434(v9, v10);
    case 1:
      v9 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v9, v11, 1, v12, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v8, (System_String_o *)StringLiteral_12707/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_12:
        v9 = (AvalonSceneManager_o *)Instance;
        v12 = (Il2CppObject *)v8;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}