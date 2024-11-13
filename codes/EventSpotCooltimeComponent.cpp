void __fastcall EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20

  if ( (byte_4B1123D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo, v5, v6);
    byte_4B1123D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v7;
  sub_1BCA784(&this->fields.spotCooltimeList, v7);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_4B11235 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventSpotCooltimeComponent_Response__, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B11235 = 1;
  }
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&eventId,
                                                 method,
                                                 v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_EventSpotCooltimeComponent_Response__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Request_object = NetworkManager__getRequest_object_(
                     v12,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v15);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v18; // x1
  UserServantMaster_o *v19; // x20
  bool v20; // w19
  __int64 v21; // x2
  __int64 v22; // x3
  CommonUI_o *v23; // x19
  int32_t v24; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v26; // x22
  Il2CppObject *v27; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1123C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__, v12, v13);
    sub_1BCA7E0(&EventSpotCooltimeComponent___c_TypeInfo, v14, v15);
    byte_4B1123C = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v19 = (UserServantMaster_o *)Instance;
  v20 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v19, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v23 = (CommonUI_o *)Instance;
      v24 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventSpotCooltimeComponent___c_TypeInfo;
      if ( !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo, v18);
        Instance = EventSpotCooltimeComponent___c_TypeInfo;
      }
      v26 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v26 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v18);
          Instance = EventSpotCooltimeComponent___c_TypeInfo;
        }
        v27 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v26 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                v18,
                                                                v21,
                                                                v22);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v26,
          v27,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0LL);
        static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        static_fields->__9__26_0 = v26;
        Instance = (void *)sub_1BCA784(&static_fields->__9__26_0, v26);
      }
      if ( v23 )
      {
        CommonUI__OpenSvtFrameShortDlg(v23, v24, svtKeep, 0, 1, v26, 2, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(Instance, v18);
  }
  return v20;
}


void __fastcall EventSpotCooltimeComponent__DestroyObjects(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *spotCooltimeInfoPrefab; // x21
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *current; // x20
  __int64 v23; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v28; // x8
  int32_t size; // w2
  int v30; // w9
  __int64 v31; // x1
  Il2CppObject *Instance; // x20
  __int64 v33; // x1
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B11238 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v16, v17);
    byte_4B11238 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimeInfoPrefab = 0LL;
    sub_1BCA784(&this->fields.spotCooltimeInfoPrefab, 0LL);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v35,
      spotCooltimeList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v36 = v35;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v20 )
        break;
      current = v36.fields._current;
      if ( !v36.fields._current )
        sub_1BCAA3C(v20, v21);
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v36.fields._current, v21);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v28 = this->fields.spotCooltimeList;
    if ( !v28 )
      sub_1BCAA3C(v26, v27);
    size = v28->fields._size;
    v30 = v28->fields._version + 1;
    v28->fields._size = 0;
    v28->fields._version = v30;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v28->fields._items, 0, size, 0LL);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      eventId = this->fields.eventId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v33);
      AtlasManager__ReleaseEventUI_38574456(eventId, 0LL);
      this->fields.isEventUILoaded = 0;
    }
  }
}


int32_t __fastcall EventSpotCooltimeComponent__GetReceivableRewardState(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  char v11; // w22
  char v12; // w23
  char v13; // w21
  _BOOL8 v14; // x0
  __int64 v15; // x1
  void *monitor; // x8
  int *v17; // x9
  _BOOL4 v18; // w8
  int32_t v19; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B11239 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v8, v9);
    byte_4B11239 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      spotCooltimeList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v11 = 0;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v14 )
        break;
      if ( !v21.fields._current )
        sub_1BCAA3C(v14, v15);
      monitor = v21.fields._current[13].monitor;
      if ( (__int64)monitor > 0 )
      {
        v17 = (int *)v21.fields._current[8].monitor;
        v13 = 0;
        if ( !LOBYTE(v21.fields._current[10].monitor) )
          v12 = 1;
        if ( v17 )
        {
          v13 = 0;
          if ( (__int64)monitor >= v17[14] )
            v11 = 1;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v18 = (v12 & 1 | (unsigned __int8)v11) == 0;
    if ( (v13 & 1) == 0 )
    {
      v19 = 1;
      goto LABEL_17;
    }
  }
  else
  {
    v18 = 1;
  }
  v19 = 0;
LABEL_17:
  if ( v18 )
    return v19;
  else
    return 2;
}


bool __fastcall EventSpotCooltimeComponent__HasServantTypeRewards(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  bool v13; // w19
  Il2CppObject *current; // x20
  int v15; // w20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1123B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v8, v9);
    byte_4B1123B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      spotCooltimeList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      v13 = v11;
      if ( !v11 )
        break;
      current = v17.fields._current;
      if ( !v17.fields._current )
        sub_1BCAA3C(v11, v12);
      if ( SpotCooltimeInfoComponent__IsServantTypeReward((SpotCooltimeInfoComponent_o *)v17.fields._current, v12)
        && (__int64)current[13].monitor > 0 )
      {
        v15 = 5;
        goto LABEL_11;
      }
    }
    v15 = 2;
LABEL_11:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    LOBYTE(spotCooltimeList) = v13 && v15 == 5;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  Il2CppObject *Object_object__49237568; // x0
  __int64 v28; // x1
  struct SpotCooltimeRewardDialog_o **p_rewardDialog; // x20
  UnityEngine_Object_o *rewardDialog; // x22
  __int64 v31; // x1
  Il2CppObject *v32; // x21
  __int64 v33; // x1
  Il2CppObject *v34; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  Il2CppObject *Component_object; // x1

  if ( (byte_4B11233 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, assetData);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v7, v8);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_13062/*"SpotCooltimeRewardDialog"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_8999/*"MapGimmickEffect_SpotCooltimeInfo"*/, v21, v22);
    byte_4B11233 = 1;
  }
  this->fields.eventId = eventId;
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&eventId, assetData, method);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24);
  AtlasManager__LoadEventUI_38574292(eventId, v23, 1, 0LL);
  if ( !assetData )
    goto LABEL_21;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              assetData,
                              (System_String_o *)StringLiteral_8999/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this->fields.spotCooltimeInfoPrefab = (struct UnityEngine_GameObject_o *)Object_object__49237568;
  sub_1BCA784(&this->fields.spotCooltimeInfoPrefab, Object_object__49237568);
  p_rewardDialog = &this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0LL, 0LL) )
  {
    v32 = AssetData__GetObject_object__49237568(
            assetData,
            (System_String_o *)StringLiteral_13062/*"SpotCooltimeRewardDialog"*/,
            (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      v34 = UnityEngine_Object__Instantiate_object_(
              v32,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v36 = (UnityEngine_GameObject_o *)v34;
      GameObjectExtensions__SetParent_34336872((UnityEngine_GameObject_o *)v34, dialogRoot, 0LL);
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v37, v38);
        byte_4B109C1 = 1;
      }
      GameObjectExtensions__SetPosition(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !byte_4B109C6 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v39, v40);
        byte_4B109C6 = 1;
      }
      GameObjectExtensions__SetLocalScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( v36 )
      {
        UnityEngine_GameObject__SetActive(v36, 0, 0LL);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v36,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        *p_rewardDialog = (struct SpotCooltimeRewardDialog_o *)Component_object;
        sub_1BCA784(p_rewardDialog, Component_object);
        return;
      }
LABEL_21:
      sub_1BCAA3C(v25, v26);
    }
  }
}


bool __fastcall EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11232 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    byte_4B11232 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1BCAA3C(Master_object, v9);
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *rewardDialog; // x20
  __int64 v5; // x1
  BaseDialog_o *v6; // x0

  if ( (byte_4B1123A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1123A = 1;
  }
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
    return 0;
  v6 = (BaseDialog_o *)this->fields.rewardDialog;
  if ( !v6 )
    sub_1BCAA3C(0LL, v5);
  return BaseDialog__get_IsBusy(v6, 0LL);
}


void __fastcall EventSpotCooltimeComponent__ReceiveCooltimeReward(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        System_Action_bool__o *reqeustFinishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onRewardRequestFinishedCallback = reqeustFinishCallback;
  sub_1BCA784(&this->fields.onRewardRequestFinishedCallback, reqeustFinishCallback);
  EventSpotCooltimeComponent__BeginEventReceiveCooltimeRewardRequest(this, eventId, v6);
}


void __fastcall EventSpotCooltimeComponent__Response(
        EventSpotCooltimeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  bool v27; // w20
  __int64 v28; // x1
  Il2CppObject *v29; // x21
  Il2CppObject ***v30; // x0
  const MethodInfo *v31; // x1
  Il2CppObject ***v32; // x21
  Il2CppObject **v33; // x8
  UnityEngine_Object_o *rewardDialog; // x22
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  Il2CppObject **v39; // x8
  SpotCooltimeRewardDialog_o *v40; // x21
  BattleDropItem_array *v41; // x22
  System_Action_o *v42; // x23
  Il2CppObject *v43; // x24
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B11236 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, result, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventSpotCooltimeComponent_Response__, v7, v8);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__, v15, v16);
    sub_1BCA7E0(&EventSpotCooltimeComponent___c_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_17045/*"ar192"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v25, v26);
    byte_4B11236 = 1;
  }
  v27 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL);
  if ( !v27 )
  {
    v29 = (Il2CppObject *)System_String__Concat_62412480(
                            (System_String_o *)StringLiteral_15978/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16236/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v28);
    v30 = (Il2CppObject ***)JsonManager__DeserializeArray_object_(
                              v29,
                              (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( !v30 )
      goto LABEL_25;
    v32 = v30;
    if ( *((_DWORD *)v30 + 6) )
    {
      v33 = v30[4];
      if ( !v33 || !v33[2] )
        goto LABEL_25;
      rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
      if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
        goto LABEL_25;
      v35 = Method_EventSpotCooltimeComponent_Response__;
      if ( (*((_BYTE *)Method_EventSpotCooltimeComponent_Response__ + 83) & 2) != 0 )
        v35 = (_QWORD *)sub_1BCA7F8(Method_EventSpotCooltimeComponent_Response__);
      v36 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v35, v35[4]);
      v30 = (Il2CppObject ***)OverwriteAssetSoundName__PlaySe(v36, (System_String_o *)StringLiteral_17045/*"ar192"*/, 0LL);
      if ( *((_DWORD *)v32 + 6) )
      {
        v39 = v32[4];
        if ( !v39 )
          goto LABEL_28;
        v40 = this->fields.rewardDialog;
        v41 = (BattleDropItem_array *)v39[2];
        v30 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        if ( !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo, v31);
          v30 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        }
        v42 = (System_Action_o *)v30[23][1];
        if ( !v42 )
        {
          if ( !*((_DWORD *)v30 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v30, v31);
            v30 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
          }
          v43 = *v30[23];
          v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v37, v38);
          System_Action___ctor(v42, v43, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0LL);
          static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = v42;
          v30 = (Il2CppObject ***)sub_1BCA784(&static_fields->__9__20_0, v42);
        }
        if ( !v40 )
LABEL_28:
          sub_1BCAA3C(v30, v31);
        SpotCooltimeRewardDialog__Open(v40, v41, v42, v38);
LABEL_25:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v31);
        goto LABEL_26;
      }
    }
    sub_1BCAA44(v30, v31);
  }
LABEL_26:
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback,
    !v27,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall EventSpotCooltimeComponent__SetSpot(
        EventSpotCooltimeComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  Il2CppObject *spotCooltimeInfoPrefab; // x22
  Il2CppObject *v15; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x22
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  __int64 v26; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11234 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___,
      userCooltimeRewardEntity,
      targetSpot);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B11234 = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCooltimeRewardEntity);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0LL, 0LL) )
    {
      spotCooltimeInfoPrefab = (Il2CppObject *)this->fields.spotCooltimeInfoPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v15 = UnityEngine_Object__Instantiate_object_(
              spotCooltimeInfoPrefab,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_34336872((UnityEngine_GameObject_o *)v15, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_21;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      localPosition.fields.x = localPosition.fields.x + this->fields.spotInfoOffset.fields.x;
      localPosition.fields.y = localPosition.fields.y + this->fields.spotInfoOffset.fields.y;
      localPosition.fields.z = localPosition.fields.z + this->fields.spotInfoOffset.fields.z;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v15, localPosition, 0LL);
      if ( !v15 )
        goto LABEL_21;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v15, 0LL);
      if ( !byte_4B109C6 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v18, v19);
        byte_4B109C6 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v15,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
      if ( !transform
        || (v22 = (Il2CppObject *)transform,
            SpotCooltimeInfoComponent__Setup(
              (SpotCooltimeInfoComponent_o *)transform,
              userCooltimeRewardEntity,
              targetSpot,
              v21),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL)
        || (v23 = *(_QWORD *)&transform->fields.m_CachedPtr,
            v24 = Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !v23) )
      {
LABEL_21:
        sub_1BCAA3C(transform, v17);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v23 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v22,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v26 + 32) = v22;
        sub_1BCA784(v26 + 32, v22);
      }
    }
  }
}


void __fastcall EventSpotCooltimeComponent__UpdateSpotInfo(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11237 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__, v8, v9);
    byte_4B11237 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      spotCooltimeList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_1BCAA3C(0LL, v11);
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v12.fields._current, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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
  Il2CppObject *v4; // x19

  if ( (byte_4B1123E & 1) == 0 )
  {
    sub_1BCA7E0(&EventSpotCooltimeComponent___c_TypeInfo, v1, v2);
    byte_4B1123E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventSpotCooltimeComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventSpotCooltimeComponent___c_TypeInfo->static_fields->__9 = (struct EventSpotCooltimeComponent___c_o *)v4;
  sub_1BCA784(EventSpotCooltimeComponent___c_TypeInfo->static_fields, v4);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B1123F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__, v7, v8);
    sub_1BCA7E0(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo, v9, v10);
    byte_4B1123F = 1;
  }
  v11 = sub_1BCAA2C(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SceneJumpInfo_o *v15; // x20
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x3

  if ( (byte_4B11240 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v8, v9);
    byte_4B11240 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v19, v20, v21);
      SceneJumpInfo___ctor_39380884(v15, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v18 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1BCAA3C(v16, v17);
    case 1:
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v16 )
      {
        v18 = 71;
        v22 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v12, v13, v14);
      SceneJumpInfo___ctor_39380796(v15, (System_String_o *)StringLiteral_12781/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v18 = 32;
LABEL_10:
        v16 = Instance;
        v22 = (Il2CppObject *)v15;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v16, v18, 1, v22, 0LL);
        return;
      }
      goto LABEL_15;
  }
}