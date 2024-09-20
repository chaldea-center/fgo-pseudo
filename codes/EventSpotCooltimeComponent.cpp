void __fastcall EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5F440 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
    byte_4A5F440 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeList, (int32_t)v3, v4, v5);
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
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4A5F438 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventSpotCooltimeComponent_Response__);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F438 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EventSpotCooltimeComponent_Response__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v7);
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
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v5; // x1
  UserServantMaster_o *v6; // x20
  bool v7; // w19
  CommonUI_o *v8; // x19
  int32_t v9; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v11; // x22
  Il2CppObject *v12; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5F43F & 1) == 0 )
  {
    sub_1B885B0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__);
    sub_1B885B0(&EventSpotCooltimeComponent___c_TypeInfo);
    byte_4A5F43F = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v6 = (UserServantMaster_o *)Instance;
  v7 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v6, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v8 = (CommonUI_o *)Instance;
      v9 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventSpotCooltimeComponent___c_TypeInfo;
      if ( !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
        Instance = EventSpotCooltimeComponent___c_TypeInfo;
      }
      v11 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v11 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = EventSpotCooltimeComponent___c_TypeInfo;
        }
        v12 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v11 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v11,
          v12,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0LL);
        static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        static_fields->__9__26_0 = v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)v11, v14, v15);
      }
      if ( v8 )
      {
        CommonUI__OpenSvtFrameShortDlg(v8, v9, svtKeep, 0, 1, v11, 2, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_19:
    sub_1B8880C(Instance, v5);
  }
  return v7;
}


void __fastcall EventSpotCooltimeComponent__DestroyObjects(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *spotCooltimeInfoPrefab; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v13; // x8
  int32_t size; // w2
  int v15; // w9
  Il2CppObject *Instance; // x20
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5F43B & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4A5F43B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimeInfoPrefab = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeInfoPrefab, 0, v4, v5);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      spotCooltimeList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v19,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v7 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current )
        sub_1B8880C(v7, v8);
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v19.fields._current, v8);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v13 = this->fields.spotCooltimeList;
    if ( !v13 )
      sub_1B8880C(v11, v12);
    size = v13->fields._size;
    v15 = v13->fields._version + 1;
    v13->fields._size = 0;
    v13->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0LL);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      eventId = this->fields.eventId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseEventUI_37859248(eventId, 0LL);
      this->fields.isEventUILoaded = 0;
    }
  }
}


int32_t __fastcall EventSpotCooltimeComponent__GetReceivableRewardState(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  char v4; // w22
  char v5; // w23
  char v6; // w21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  void *monitor; // x8
  int *v10; // x9
  _BOOL4 v11; // w8
  int32_t v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5F43C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_4A5F43C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      spotCooltimeList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v4 = 0;
    v5 = 0;
    v6 = 1;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v7 )
        break;
      if ( !v14.fields._current )
        sub_1B8880C(v7, v8);
      monitor = v14.fields._current[13].monitor;
      if ( (__int64)monitor > 0 )
      {
        v10 = (int *)v14.fields._current[8].monitor;
        v6 = 0;
        if ( !LOBYTE(v14.fields._current[10].monitor) )
          v5 = 1;
        if ( v10 )
        {
          v6 = 0;
          if ( (__int64)monitor >= v10[14] )
            v4 = 1;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v11 = (v5 & 1 | (unsigned __int8)v4) == 0;
    if ( (v6 & 1) == 0 )
    {
      v12 = 1;
      goto LABEL_17;
    }
  }
  else
  {
    v11 = 1;
  }
  v12 = 0;
LABEL_17:
  if ( v11 )
    return v12;
  else
    return 2;
}


bool __fastcall EventSpotCooltimeComponent__HasServantTypeRewards(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  bool v6; // w19
  Il2CppObject *current; // x20
  int v8; // w20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5F43E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_4A5F43E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      spotCooltimeList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      v6 = v4;
      if ( !v4 )
        break;
      current = v10.fields._current;
      if ( !v10.fields._current )
        sub_1B8880C(v4, v5);
      if ( SpotCooltimeInfoComponent__IsServantTypeReward((SpotCooltimeInfoComponent_o *)v10.fields._current, v5)
        && (__int64)current[13].monitor > 0 )
      {
        v8 = 5;
        goto LABEL_11;
      }
    }
    v8 = 2;
LABEL_11:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    LOBYTE(spotCooltimeList) = v6 && v8 == 5;
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
  Il2CppObject *Object_object__48635516; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *p_rewardDialog; // x20
  UnityEngine_Object_o *rewardDialog; // x22
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v18; // x19
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A5F436 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_12902/*"SpotCooltimeRewardDialog"*/);
    sub_1B885B0(&StringLiteral_8870/*"MapGimmickEffect_SpotCooltimeInfo"*/);
    byte_4A5F436 = 1;
  }
  this->fields.eventId = eventId;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37859084(eventId, v7, 1, 0LL);
  if ( !assetData )
    goto LABEL_21;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              assetData,
                              (System_String_o *)StringLiteral_8870/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this->fields.spotCooltimeInfoPrefab = (struct UnityEngine_GameObject_o *)Object_object__48635516;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeInfoPrefab,
    (int32_t)Object_object__48635516,
    v11,
    v12);
  p_rewardDialog = (ServantStatusBattleListViewItem_o *)&this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0LL, 0LL) )
  {
    v15 = AssetData__GetObject_object__48635516(
            assetData,
            (System_String_o *)StringLiteral_12902/*"SpotCooltimeRewardDialog"*/,
            (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__Instantiate_object_(
              v15,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v18 = (UnityEngine_GameObject_o *)v16;
      GameObjectExtensions__SetParent_33729948((UnityEngine_GameObject_o *)v16, dialogRoot, 0LL);
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      GameObjectExtensions__SetPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !byte_4A55CE6 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      GameObjectExtensions__SetLocalScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( v18 )
      {
        UnityEngine_GameObject__SetActive(v18, 0, 0LL);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v18,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        p_rewardDialog->klass = (ServantStatusBattleListViewItem_c *)Component_object;
        sub_1B88554(p_rewardDialog, (int32_t)Component_object, v20, v21);
        return;
      }
LABEL_21:
      sub_1B8880C(v8, v9);
    }
  }
}


bool __fastcall EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5F435 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    byte_4A5F435 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1B8880C(Master_object, v4);
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardDialog; // x20
  __int64 v4; // x1
  BaseDialog_o *v5; // x0

  if ( (byte_4A5F43D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F43D = 1;
  }
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
    return 0;
  v5 = (BaseDialog_o *)this->fields.rewardDialog;
  if ( !v5 )
    sub_1B8880C(0LL, v4);
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
  sub_1B88554(
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
  bool v5; // w20
  Il2CppObject *v6; // x21
  Il2CppObject ***v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject ***v9; // x21
  Il2CppObject **v10; // x8
  UnityEngine_Object_o *rewardDialog; // x22
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x3
  Il2CppObject **v15; // x8
  SpotCooltimeRewardDialog_o *v16; // x21
  BattleDropItem_array *v17; // x22
  System_Action_o *v18; // x23
  Il2CppObject *v19; // x24
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5F439 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventSpotCooltimeComponent_Response__);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__);
    sub_1B885B0(&EventSpotCooltimeComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_16874/*"ar192"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5F439 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL);
  if ( !v5 )
  {
    v6 = (Il2CppObject *)System_String__Concat_61718292(
                           (System_String_o *)StringLiteral_15812/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16069/*"]"*/,
                           0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = (Il2CppObject ***)JsonManager__DeserializeArray_object_(
                             v6,
                             (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( !v7 )
      goto LABEL_25;
    v9 = v7;
    if ( *((_DWORD *)v7 + 6) )
    {
      v10 = v7[4];
      if ( !v10 || !v10[2] )
        goto LABEL_25;
      rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
        goto LABEL_25;
      v12 = Method_EventSpotCooltimeComponent_Response__;
      if ( (*((_BYTE *)Method_EventSpotCooltimeComponent_Response__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B885C8(Method_EventSpotCooltimeComponent_Response__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B88594(v12, v12[4]);
      v7 = (Il2CppObject ***)OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_16874/*"ar192"*/, 0LL);
      if ( *((_DWORD *)v9 + 6) )
      {
        v15 = v9[4];
        if ( !v15 )
          goto LABEL_28;
        v16 = this->fields.rewardDialog;
        v17 = (BattleDropItem_array *)v15[2];
        v7 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        if ( !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
          v7 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        }
        v18 = (System_Action_o *)v7[23][1];
        if ( !v18 )
        {
          if ( !*((_DWORD *)v7 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
          }
          v19 = *v7[23];
          v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v18, v19, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0LL);
          static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = v18;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)v18, v21, v22);
        }
        if ( !v16 )
LABEL_28:
          sub_1B8880C(v7, v8);
        SpotCooltimeRewardDialog__Open(v16, v17, v18, v14);
LABEL_25:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v8);
        goto LABEL_26;
      }
    }
    sub_1B88814(v7, v8);
  }
LABEL_26:
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback,
    !v5,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall EventSpotCooltimeComponent__SetSpot(
        EventSpotCooltimeComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  Il2CppObject *spotCooltimeInfoPrefab; // x22
  Il2CppObject *v8; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 klass_low; // x10
  __int64 v19; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5F437 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F437 = 1;
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
      v8 = UnityEngine_Object__Instantiate_object_(
             spotCooltimeInfoPrefab,
             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_33729948((UnityEngine_GameObject_o *)v8, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_21;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      localPosition.fields.x = localPosition.fields.x + this->fields.spotInfoOffset.fields.x;
      localPosition.fields.y = localPosition.fields.y + this->fields.spotInfoOffset.fields.y;
      localPosition.fields.z = localPosition.fields.z + this->fields.spotInfoOffset.fields.z;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v8, localPosition, 0LL);
      if ( !v8 )
        goto LABEL_21;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v8, 0LL);
      if ( !byte_4A55CE6 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v8,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
      if ( !transform
        || (v13 = (Il2CppObject *)transform,
            SpotCooltimeInfoComponent__Setup(
              (SpotCooltimeInfoComponent_o *)transform,
              userCooltimeRewardEntity,
              targetSpot,
              v12),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL)
        || (v16 = *(_QWORD *)&transform->fields.m_CachedPtr,
            v17 = Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !v16) )
      {
LABEL_21:
        sub_1B8880C(transform, v10);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v16 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v13,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = v16 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v19 + 32) = v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v13, v14, v15);
      }
    }
  }
}


void __fastcall EventSpotCooltimeComponent__UpdateSpotInfo(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5F43A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_4A5F43A = 1;
  }
  memset(&v5, 0, sizeof(v5));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      spotCooltimeList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1B8880C(0LL, v4);
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5F441 & 1) == 0 )
  {
    sub_1B885B0(&EventSpotCooltimeComponent___c_TypeInfo);
    byte_4A5F441 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventSpotCooltimeComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventSpotCooltimeComponent___c_TypeInfo->static_fields->__9 = (struct EventSpotCooltimeComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventSpotCooltimeComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A5F442 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__);
    sub_1B885B0(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
    byte_4A5F442 = 1;
  }
  v4 = sub_1B887FC(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4A5F443 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12623/*"ServantCombine"*/);
    byte_4A5F443 = 1;
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