void __fastcall EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A321E7 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__, method);
    sub_1B761C0(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo, v3);
    byte_4A321E7 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v4;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeList, (int32_t)v4, v5, v6);
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
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_4A321DF & 1) == 0 )
  {
    sub_1B761C0(&Method_EventSpotCooltimeComponent_Response__, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v5);
    sub_1B761C0(&NetworkManager_TypeInfo, v6);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A321DF = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_EventSpotCooltimeComponent_Response__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_1B7641C(0LL, v10);
  EventReceiveCooltimeRewardRequest__beginRequest((EventReceiveCooltimeRewardRequest_o *)Request_object, eventId, 0LL);
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
  ServantFrameShortDlgComponent_CallbackFunc_o *v17; // x22
  Il2CppObject *v18; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A321E6 & 1) == 0 )
  {
    sub_1B761C0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B761C0(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__, v7);
    sub_1B761C0(&EventSpotCooltimeComponent___c_TypeInfo, v8);
    byte_4A321E6 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v12 = (UserServantMaster_o *)Instance;
  v13 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v12, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v14 = (CommonUI_o *)Instance;
      v15 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventSpotCooltimeComponent___c_TypeInfo;
      if ( !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
        Instance = EventSpotCooltimeComponent___c_TypeInfo;
      }
      v17 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v17 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = EventSpotCooltimeComponent___c_TypeInfo;
        }
        v18 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v17 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B7640C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v17,
          v18,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0LL);
        static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        static_fields->__9__26_0 = v17;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)v17, v20, v21);
      }
      if ( v14 )
      {
        CommonUI__OpenSvtFrameShortDlg(v14, v15, svtKeep, 0, 1, v17, 2, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_19:
    sub_1B7641C(Instance, v11);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v20; // x8
  int32_t size; // w2
  int v22; // w9
  Il2CppObject *Instance; // x20
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A321E2 & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v9);
    byte_4A321E2 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimeInfoPrefab = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeInfoPrefab, 0, v11, v12);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      spotCooltimeList,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v14 )
        break;
      current = v26.fields._current;
      if ( !v26.fields._current )
        sub_1B7641C(v14, v15);
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v26.fields._current, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69287408(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v20 = this->fields.spotCooltimeList;
    if ( !v20 )
      sub_1B7641C(v18, v19);
    size = v20->fields._size;
    v22 = v20->fields._version + 1;
    v20->fields._size = 0;
    v20->fields._version = v22;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v20->fields._items, 0, size, 0LL);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      eventId = this->fields.eventId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseEventUI_37679364(eventId, 0LL);
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
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  char v7; // w22
  char v8; // w23
  char v9; // w21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  void *monitor; // x8
  int *v13; // x9
  _BOOL4 v14; // w8
  int32_t v15; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A321E3 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_4A321E3 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      spotCooltimeList,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v7 = 0;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v10 )
        break;
      if ( !v17.fields._current )
        sub_1B7641C(v10, v11);
      monitor = v17.fields._current[13].monitor;
      if ( (__int64)monitor > 0 )
      {
        v13 = (int *)v17.fields._current[8].monitor;
        v9 = 0;
        if ( !LOBYTE(v17.fields._current[10].monitor) )
          v8 = 1;
        if ( v13 )
        {
          v9 = 0;
          if ( (__int64)monitor >= v13[14] )
            v7 = 1;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v14 = (v8 & 1 | (unsigned __int8)v7) == 0;
    if ( (v9 & 1) == 0 )
    {
      v15 = 1;
      goto LABEL_17;
    }
  }
  else
  {
    v14 = 1;
  }
  v15 = 0;
LABEL_17:
  if ( v14 )
    return v15;
  else
    return 2;
}


bool __fastcall EventSpotCooltimeComponent__HasServantTypeRewards(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  bool v9; // w19
  Il2CppObject *current; // x20
  int v11; // w20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A321E5 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_4A321E5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      spotCooltimeList,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      v9 = v7;
      if ( !v7 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current )
        sub_1B7641C(v7, v8);
      if ( SpotCooltimeInfoComponent__IsServantTypeReward((SpotCooltimeInfoComponent_o *)v13.fields._current, v8)
        && (__int64)current[13].monitor > 0 )
      {
        v11 = 5;
        goto LABEL_11;
      }
    }
    v11 = 2;
LABEL_11:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    LOBYTE(spotCooltimeList) = v9 && v11 == 5;
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
  Il2CppObject *Object_object__48515452; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  ServantStatusBattleListViewItem_o *p_rewardDialog; // x20
  UnityEngine_Object_o *rewardDialog; // x22
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x1
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A321DD & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_AssetData_GetObject_GameObject____75903216, v7);
    sub_1B761C0(&AtlasManager_TypeInfo, v8);
    sub_1B761C0(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__, v9);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v10);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v12);
    sub_1B761C0(&StringLiteral_12896/*"SpotCooltimeRewardDialog"*/, v13);
    sub_1B761C0(&StringLiteral_8867/*"MapGimmickEffect_SpotCooltimeInfo"*/, v14);
    byte_4A321DD = 1;
  }
  this->fields.eventId = eventId;
  v15 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37679192(eventId, v15, 1, 0LL);
  if ( !assetData )
    goto LABEL_21;
  Object_object__48515452 = AssetData__GetObject_object__48515452(
                              assetData,
                              (System_String_o *)StringLiteral_8867/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                              (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  this->fields.spotCooltimeInfoPrefab = (struct UnityEngine_GameObject_o *)Object_object__48515452;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeInfoPrefab,
    (int32_t)Object_object__48515452,
    v19,
    v20);
  p_rewardDialog = (ServantStatusBattleListViewItem_o *)&this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0LL, 0LL) )
  {
    v23 = AssetData__GetObject_object__48515452(
            assetData,
            (System_String_o *)StringLiteral_12896/*"SpotCooltimeRewardDialog"*/,
            (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__Instantiate_object_(
              v23,
              (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v26 = (UnityEngine_GameObject_o *)v24;
      GameObjectExtensions__SetParent_33557876((UnityEngine_GameObject_o *)v24, dialogRoot, 0LL);
      if ( !byte_4A28BB1 )
      {
        sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v27);
        byte_4A28BB1 = 1;
      }
      GameObjectExtensions__SetPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !byte_4A28BB6 )
      {
        sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v28);
        byte_4A28BB6 = 1;
      }
      GameObjectExtensions__SetLocalScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( v26 )
      {
        UnityEngine_GameObject__SetActive(v26, 0, 0LL);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v26,
                             (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        p_rewardDialog->klass = (ServantStatusBattleListViewItem_c *)Component_object;
        sub_1B76164(p_rewardDialog, (int32_t)Component_object, v30, v31);
        return;
      }
LABEL_21:
      sub_1B7641C(v16, v17);
    }
  }
}


bool __fastcall EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A321DC & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_1B761C0(&DataManager_TypeInfo, v3);
    sub_1B761C0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    byte_4A321DC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_30FF7D4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1B7641C(Master_object, v6);
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardDialog; // x20
  __int64 v4; // x1
  BaseDialog_o *v5; // x0

  if ( (byte_4A321E4 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A321E4 = 1;
  }
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
    return 0;
  v5 = (BaseDialog_o *)this->fields.rewardDialog;
  if ( !v5 )
    sub_1B7641C(0LL, v4);
  return BaseDialog__get_IsBusy(v5, 0LL);
}


void __fastcall EventSpotCooltimeComponent__ReceiveCooltimeReward(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        System_Action_bool__o *reqeustFinishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onRewardRequestFinishedCallback = reqeustFinishCallback;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.onRewardRequestFinishedCallback,
    (int32_t)reqeustFinishCallback,
    (int32_t)reqeustFinishCallback,
    (int32_t)method);
  EventSpotCooltimeComponent__BeginEventReceiveCooltimeRewardRequest(this, eventId, v6);
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
  bool v16; // w20
  Il2CppObject *v17; // x21
  Il2CppObject ***v18; // x0
  const MethodInfo *v19; // x1
  Il2CppObject ***v20; // x21
  Il2CppObject **v21; // x8
  UnityEngine_Object_o *rewardDialog; // x22
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  const MethodInfo *v25; // x3
  Il2CppObject **v26; // x8
  SpotCooltimeRewardDialog_o *v27; // x21
  BattleDropItem_array *v28; // x22
  System_Action_o *v29; // x23
  Il2CppObject *v30; // x24
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_4A321E0 & 1) == 0 )
  {
    sub_1B761C0(&Method_ActionExtensions_Call_bool___, result);
    sub_1B761C0(&System_Action_TypeInfo, v5);
    sub_1B761C0(&Method_EventSpotCooltimeComponent_Response__, v6);
    sub_1B761C0(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v7);
    sub_1B761C0(&JsonManager_TypeInfo, v8);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    sub_1B761C0(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__, v10);
    sub_1B761C0(&EventSpotCooltimeComponent___c_TypeInfo, v11);
    sub_1B761C0(&StringLiteral_16868/*"ar192"*/, v12);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v13);
    sub_1B761C0(&StringLiteral_15806/*"["*/, v14);
    sub_1B761C0(&StringLiteral_16063/*"]"*/, v15);
    byte_4A321E0 = 1;
  }
  v16 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22046/*"ng"*/, 0LL);
  if ( !v16 )
  {
    v17 = (Il2CppObject *)System_String__Concat_61546320(
                            (System_String_o *)StringLiteral_15806/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16063/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v18 = (Il2CppObject ***)JsonManager__DeserializeArray_object_(
                              v17,
                              (const MethodInfo_2EC89B0 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( !v18 )
      goto LABEL_25;
    v20 = v18;
    if ( *((_DWORD *)v18 + 6) )
    {
      v21 = v18[4];
      if ( !v21 || !v21[2] )
        goto LABEL_25;
      rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
        goto LABEL_25;
      v23 = Method_EventSpotCooltimeComponent_Response__;
      if ( (*((_BYTE *)Method_EventSpotCooltimeComponent_Response__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1B761D8(Method_EventSpotCooltimeComponent_Response__);
      v24 = (System_Reflection_MethodBase_o *)sub_1B761A4(v23, v23[4]);
      v18 = (Il2CppObject ***)OverwriteAssetSoundName__PlaySe(v24, (System_String_o *)StringLiteral_16868/*"ar192"*/, 0LL);
      if ( *((_DWORD *)v20 + 6) )
      {
        v26 = v20[4];
        if ( !v26 )
          goto LABEL_28;
        v27 = this->fields.rewardDialog;
        v28 = (BattleDropItem_array *)v26[2];
        v18 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        if ( !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
          v18 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        }
        v29 = (System_Action_o *)v18[23][1];
        if ( !v29 )
        {
          if ( !*((_DWORD *)v18 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
          }
          v30 = *v18[23];
          v29 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(v29, v30, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0LL);
          static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = v29;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)v29, v32, v33);
        }
        if ( !v27 )
LABEL_28:
          sub_1B7641C(v18, v19);
        SpotCooltimeRewardDialog__Open(v27, v28, v29, v25);
LABEL_25:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v19);
        goto LABEL_26;
      }
    }
    sub_1B76424(v18, v19);
  }
LABEL_26:
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback,
    !v16,
    (const MethodInfo_2DB9D08 *)Method_ActionExtensions_Call_bool___);
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
  Il2CppObject *spotCooltimeInfoPrefab; // x22
  Il2CppObject *v11; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 klass_low; // x10
  __int64 v23; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A321DE & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___, userCooltimeRewardEntity);
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__, v7);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    byte_4A321DE = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0LL, 0LL) )
    {
      spotCooltimeInfoPrefab = (Il2CppObject *)this->fields.spotCooltimeInfoPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__Instantiate_object_(
              spotCooltimeInfoPrefab,
              (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_33557876((UnityEngine_GameObject_o *)v11, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_21;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      localPosition.fields.x = localPosition.fields.x + this->fields.spotInfoOffset.fields.x;
      localPosition.fields.y = localPosition.fields.y + this->fields.spotInfoOffset.fields.y;
      localPosition.fields.z = localPosition.fields.z + this->fields.spotInfoOffset.fields.z;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v11, localPosition, 0LL);
      if ( !v11 )
        goto LABEL_21;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v11, 0LL);
      if ( !byte_4A28BB6 )
      {
        sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v14);
        byte_4A28BB6 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v11,
                                               (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
      if ( !transform
        || (v17 = (Il2CppObject *)transform,
            SpotCooltimeInfoComponent__Setup(
              (SpotCooltimeInfoComponent_o *)transform,
              userCooltimeRewardEntity,
              targetSpot,
              v16),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL)
        || (v20 = *(_QWORD *)&transform->fields.m_CachedPtr,
            v21 = Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !v20) )
      {
LABEL_21:
        sub_1B7641C(transform, v13);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v20 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v17,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = v20 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v23 + 32) = v17;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v17, v18, v19);
      }
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
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A321E1 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_4A321E1 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      spotCooltimeList,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1B7641C(0LL, v7);
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v8.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A321E8 & 1) == 0 )
  {
    sub_1B761C0(&EventSpotCooltimeComponent___c_TypeInfo, v1);
    byte_4A321E8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(EventSpotCooltimeComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventSpotCooltimeComponent___c_TypeInfo->static_fields->__9 = (struct EventSpotCooltimeComponent___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EventSpotCooltimeComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4A321E9 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__, v5);
    sub_1B761C0(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo, v6);
    byte_4A321E9 = 1;
  }
  v7 = sub_1B7640C(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B7641C(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4A321EA & 1) == 0 )
  {
    sub_1B761C0(&SceneJumpInfo_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B761C0(&StringLiteral_12580/*"SellServant"*/, v4);
    sub_1B761C0(&StringLiteral_12617/*"ServantCombine"*/, v5);
    byte_4A321EA = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B7640C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38409780(v8, (System_String_o *)StringLiteral_12580/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B7641C(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B7640C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38409692(v8, (System_String_o *)StringLiteral_12617/*"ServantCombine"*/, 0LL);
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