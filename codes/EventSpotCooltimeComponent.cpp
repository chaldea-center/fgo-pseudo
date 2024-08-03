void __fastcall EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A00654 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo, v4);
    byte_4A00654 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeList, (int32_t)v5, v6, v7);
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

  if ( (byte_4A0064C & 1) == 0 )
  {
    sub_1B640C8(&Method_EventSpotCooltimeComponent_Response__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A0064C = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                NetworkManager_ResultCallbackFunc_TypeInfo,
                                                *(_QWORD *)&eventId,
                                                method);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_EventSpotCooltimeComponent_Response__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
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
  UserServantMaster_o *v11; // x20
  bool v12; // w19
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *v15; // x19
  int32_t v16; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v18; // x22
  Il2CppObject *v19; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A00653 & 1) == 0 )
  {
    sub_1B640C8(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B640C8(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__, v7);
    sub_1B640C8(&EventSpotCooltimeComponent___c_TypeInfo, v8);
    byte_4A00653 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v11 = (UserServantMaster_o *)Instance;
  v12 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v11, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v15 = (CommonUI_o *)Instance;
      v16 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventSpotCooltimeComponent___c_TypeInfo;
      if ( !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
        Instance = EventSpotCooltimeComponent___c_TypeInfo;
      }
      v18 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v18 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = EventSpotCooltimeComponent___c_TypeInfo;
        }
        v19 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v18 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                                ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                v13,
                                                                v14);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v18,
          v19,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0LL);
        static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        static_fields->__9__26_0 = v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)v18, v21, v22);
      }
      if ( v15 )
      {
        CommonUI__OpenSvtFrameShortDlg(v15, v16, svtKeep, 0, 1, v18, 2, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_19:
    sub_1B64324(Instance);
  }
  return v12;
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
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  Il2CppObject *Instance; // x20
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A0064F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v9);
    byte_4A0064F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimeInfoPrefab = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeInfoPrefab, 0, v11, v12);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      spotCooltimeList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v25 = v24;
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v14 )
        break;
      current = v25.fields._current;
      if ( !v25.fields._current )
        sub_1B64324(v14);
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v25.fields._current, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v19 = this->fields.spotCooltimeList;
    if ( !v19 )
      sub_1B64324(v18);
    size = v19->fields._size;
    v21 = v19->fields._version + 1;
    v19->fields._size = 0;
    v19->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      eventId = this->fields.eventId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseEventUI_37544568(eventId, 0LL);
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
  void *monitor; // x8
  int *v12; // x9
  _BOOL4 v13; // w8
  int32_t v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A00650 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_4A00650 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      spotCooltimeList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v7 = 0;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v10 )
        break;
      if ( !v16.fields._current )
        sub_1B64324(v10);
      monitor = v16.fields._current[13].monitor;
      if ( (__int64)monitor > 0 )
      {
        v12 = (int *)v16.fields._current[8].monitor;
        v9 = 0;
        if ( !LOBYTE(v16.fields._current[10].monitor) )
          v8 = 1;
        if ( v12 )
        {
          v9 = 0;
          if ( (__int64)monitor >= v12[14] )
            v7 = 1;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v13 = (v8 & 1 | (unsigned __int8)v7) == 0;
    if ( (v9 & 1) == 0 )
    {
      v14 = 1;
      goto LABEL_17;
    }
  }
  else
  {
    v13 = 1;
  }
  v14 = 0;
LABEL_17:
  if ( v13 )
    return v14;
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

  if ( (byte_4A00652 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_4A00652 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      spotCooltimeList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      v9 = v7;
      if ( !v7 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current )
        sub_1B64324(v7);
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
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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
  Il2CppObject *Object_object__48347676; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  ServantStatusBattleListViewItem_o *p_rewardDialog; // x20
  UnityEngine_Object_o *rewardDialog; // x22
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A0064A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v7);
    sub_1B640C8(&AtlasManager_TypeInfo, v8);
    sub_1B640C8(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v10);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_12838/*"SpotCooltimeRewardDialog"*/, v13);
    sub_1B640C8(&StringLiteral_8828/*"MapGimmickEffect_SpotCooltimeInfo"*/, v14);
    byte_4A0064A = 1;
  }
  this->fields.eventId = eventId;
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, *(_QWORD *)&eventId, assetData);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37544396(eventId, v15, 1, 0LL);
  if ( !assetData )
    goto LABEL_21;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              assetData,
                              (System_String_o *)StringLiteral_8828/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  this->fields.spotCooltimeInfoPrefab = (struct UnityEngine_GameObject_o *)Object_object__48347676;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeInfoPrefab,
    (int32_t)Object_object__48347676,
    v18,
    v19);
  p_rewardDialog = (ServantStatusBattleListViewItem_o *)&this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0LL, 0LL) )
  {
    v22 = AssetData__GetObject_object__48347676(
            assetData,
            (System_String_o *)StringLiteral_12838/*"SpotCooltimeRewardDialog"*/,
            (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__Instantiate_object_(
              v22,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v25 = (UnityEngine_GameObject_o *)v23;
      GameObjectExtensions__SetParent_33381176((UnityEngine_GameObject_o *)v23, dialogRoot, 0LL);
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v26);
        byte_49F7111 = 1;
      }
      GameObjectExtensions__SetPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !byte_49F7116 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v27);
        byte_49F7116 = 1;
      }
      GameObjectExtensions__SetLocalScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( v25 )
      {
        UnityEngine_GameObject__SetActive(v25, 0, 0LL);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v25,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        p_rewardDialog->klass = (ServantStatusBattleListViewItem_c *)Component_object;
        sub_1B6406C(p_rewardDialog, (int32_t)Component_object, v29, v30);
        return;
      }
LABEL_21:
      sub_1B64324(v16);
    }
  }
}


bool __fastcall EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A00649 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    byte_4A00649 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1B64324(Master_object);
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardDialog; // x20
  BaseDialog_o *v4; // x0

  if ( (byte_4A00651 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00651 = 1;
  }
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
    return 0;
  v4 = (BaseDialog_o *)this->fields.rewardDialog;
  if ( !v4 )
    sub_1B64324(0LL);
  return BaseDialog__get_IsBusy(v4, 0LL);
}


void __fastcall EventSpotCooltimeComponent__ReceiveCooltimeReward(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        System_Action_bool__o *reqeustFinishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onRewardRequestFinishedCallback = reqeustFinishCallback;
  sub_1B6406C(
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
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  Il2CppObject **v27; // x8
  SpotCooltimeRewardDialog_o *v28; // x21
  BattleDropItem_array *v29; // x22
  System_Action_o *v30; // x23
  Il2CppObject *v31; // x24
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_4A0064D & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, result);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_EventSpotCooltimeComponent_Response__, v6);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v7);
    sub_1B640C8(&JsonManager_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__, v10);
    sub_1B640C8(&EventSpotCooltimeComponent___c_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_16805/*"ar192"*/, v12);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v13);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v14);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v15);
    byte_4A0064D = 1;
  }
  v16 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL);
  if ( !v16 )
  {
    v17 = (Il2CppObject *)System_String__Concat_61386656(
                            (System_String_o *)StringLiteral_15744/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16000/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v18 = (Il2CppObject ***)JsonManager__DeserializeArray_object_(
                              v17,
                              (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
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
        v23 = (_QWORD *)sub_1B640E0(Method_EventSpotCooltimeComponent_Response__);
      v24 = (System_Reflection_MethodBase_o *)sub_1B640AC(v23, v23[4]);
      v18 = (Il2CppObject ***)OverwriteAssetSoundName__PlaySe(v24, (System_String_o *)StringLiteral_16805/*"ar192"*/, 0LL);
      if ( *((_DWORD *)v20 + 6) )
      {
        v27 = v20[4];
        if ( !v27 )
          goto LABEL_28;
        v28 = this->fields.rewardDialog;
        v29 = (BattleDropItem_array *)v27[2];
        v18 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        if ( !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
          v18 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        }
        v30 = (System_Action_o *)v18[23][1];
        if ( !v30 )
        {
          if ( !*((_DWORD *)v18 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
          }
          v31 = *v18[23];
          v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v25);
          System_Action___ctor(v30, v31, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0LL);
          static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = v30;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)v30, v33, v34);
        }
        if ( !v28 )
LABEL_28:
          sub_1B64324(v18);
        SpotCooltimeRewardDialog__Open(v28, v29, v30, v26);
LABEL_25:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v19);
        goto LABEL_26;
      }
    }
    sub_1B6432C(v18, v19);
  }
LABEL_26:
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback,
    !v16,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
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
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 klass_low; // x10
  __int64 v22; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0064B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___, userCooltimeRewardEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A0064B = 1;
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
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_33381176((UnityEngine_GameObject_o *)v11, this->fields.spotCooltimeRoot, 0LL);
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
      if ( !byte_49F7116 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
        byte_49F7116 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v11,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
      if ( !transform
        || (v16 = (Il2CppObject *)transform,
            SpotCooltimeInfoComponent__Setup(
              (SpotCooltimeInfoComponent_o *)transform,
              userCooltimeRewardEntity,
              targetSpot,
              v15),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL)
        || (v19 = *(_QWORD *)&transform->fields.m_CachedPtr,
            v20 = Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !v19) )
      {
LABEL_21:
        sub_1B64324(transform);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v19 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v16,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v22 + 32) = v16;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v16, v17, v18);
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

  if ( (byte_4A0064E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v5);
    byte_4A0064E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      spotCooltimeList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1B64324(0LL);
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v8.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A00655 & 1) == 0 )
  {
    sub_1B640C8(&EventSpotCooltimeComponent___c_TypeInfo, v1);
    byte_4A00655 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventSpotCooltimeComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventSpotCooltimeComponent___c_TypeInfo->static_fields->__9 = (struct EventSpotCooltimeComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventSpotCooltimeComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4A00656 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__, v5);
    sub_1B640C8(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo, v6);
    byte_4A00656 = 1;
  }
  v7 = sub_1B64314(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  SceneJumpInfo_o *v10; // x20
  Il2CppObject *v11; // x0
  int32_t v12; // w1
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x3

  if ( (byte_4A00657 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v4);
    sub_1B640C8(&StringLiteral_12562/*"ServantCombine"*/, v5);
    byte_4A00657 = 1;
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