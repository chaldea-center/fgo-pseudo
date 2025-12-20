void EventSpotCooltimeComponent___ctor(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4D270A8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
    sub_1C94098(&System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
    byte_4D270A8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SpotCooltimeInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *)v3;
  sub_1C9403C(&this->fields.spotCooltimeList, v3);
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
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4D270A0 & 1) == 0 )
  {
    sub_1C94098(&Method_EventSpotCooltimeComponent_Response__);
    sub_1C94098(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D270A0 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EventSpotCooltimeComponent_Response__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_1C942F0(0, v7);
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
  CommonUI_o *v8; // x19
  int32_t v9; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v11; // x22
  Il2CppObject *v12; // x23
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D270A7 & 1) == 0 )
  {
    sub_1C94098(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C94098(&Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__);
    sub_1C94098(&EventSpotCooltimeComponent___c_TypeInfo);
    byte_4D270A7 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( !EventSpotCooltimeComponent__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v6 = (UserServantMaster_o *)Instance;
  v7 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( UserServantMaster__CheckServantAdd(v6, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v11 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C942E4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v11,
          v12,
          Method_EventSpotCooltimeComponent___c__CheckServantSpaceShortage_b__26_0__,
          0);
        static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
        static_fields->__9__26_0 = v11;
        Instance = (void *)sub_1C9403C(&static_fields->__9__26_0, v11);
      }
      if ( v8 )
      {
        CommonUI__OpenSvtFrameShortDlg(v8, v9, svtKeep, 0, 1, v11, 2, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
          return 0;
        }
      }
    }
LABEL_19:
    sub_1C942F0(Instance, v5);
  }
  return v7;
}


void EventSpotCooltimeComponent__DestroyObjects(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *spotCooltimeInfoPrefab; // x21
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_SpotCooltimeInfoComponent__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  Il2CppObject *Instance; // x20
  int32_t eventId; // w20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D270A3 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4D270A3 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  spotCooltimeInfoPrefab = (UnityEngine_Object_o *)this->fields.spotCooltimeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spotCooltimeInfoPrefab, 0, 0) )
  {
    this->fields.spotCooltimeInfoPrefab = 0;
    sub_1C9403C(&this->fields.spotCooltimeInfoPrefab, 0);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      spotCooltimeList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v17 = v16;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v5 )
        break;
      current = v17.fields._current;
      if ( !v17.fields._current )
        sub_1C942F0(v5, v6);
      SpotCooltimeInfoComponent__OnDestroyObject((SpotCooltimeInfoComponent_o *)v17.fields._current, v6);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72110972(gameObject, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    v11 = this->fields.spotCooltimeList;
    if ( !v11 )
      sub_1C942F0(v9, v10);
    size = v11->fields._size;
    v13 = v11->fields._version + 1;
    v11->fields._size = 0;
    v11->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0);
  }
  if ( this->fields.isEventUILoaded )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      eventId = this->fields.eventId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseEventUI_41357488(eventId, 0);
      this->fields.isEventUILoaded = 0;
    }
  }
}


int32_t EventSpotCooltimeComponent__GetReceivableRewardState(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  char v4; // w22
  char v5; // w23
  char v6; // w21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  __int64 v10; // x9
  _BOOL4 v11; // w8
  int32_t v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D270A4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_4D270A4 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      spotCooltimeList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    v4 = 0;
    v5 = 0;
    v6 = 1;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      if ( !v7 )
        break;
      if ( !v14.fields._current )
        sub_1C942F0(v7, v8);
      v9 = *(__int64 *)((char *)&v14.fields._current->klass + (unsigned __int64)&qword_D8);
      if ( v9 > 0 )
      {
        v10 = *(__int64 *)((char *)&v14.fields._current->klass + (unsigned __int64)off_88);
        v6 = 0;
        if ( !*((_BYTE *)&v14.fields._current->klass + (unsigned __int64)&qword_A8) )
          v5 = 1;
        if ( v10 )
        {
          v6 = 0;
          if ( v9 >= *(int *)((char *)&word_38 + v10) )
            v4 = 1;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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


bool EventSpotCooltimeComponent__HasServantTypeRewards(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  bool v6; // w19
  Il2CppObject *current; // x20
  int v8; // w20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D270A6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_4D270A6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      spotCooltimeList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
      v6 = v4;
      if ( !v4 )
        break;
      current = v10.fields._current;
      if ( !v10.fields._current )
        sub_1C942F0(v4, v5);
      if ( SpotCooltimeInfoComponent__IsServantTypeReward((SpotCooltimeInfoComponent_o *)v10.fields._current, v5)
        && *(__int64 *)((char *)&qword_D8 + (_QWORD)current) > 0 )
      {
        v8 = 5;
        goto LABEL_11;
      }
    }
    v8 = 2;
LABEL_11:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    LOBYTE(spotCooltimeList) = v6 && v8 == 5;
  }
  return (char)spotCooltimeList;
}


void EventSpotCooltimeComponent__Initialize(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Object_object__51893132; // x0
  struct SpotCooltimeRewardDialog_o **p_rewardDialog; // x20
  UnityEngine_Object_o *rewardDialog; // x22
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  UnityEngine_GameObject_o *dialogRoot; // x1
  UnityEngine_GameObject_o *v16; // x19
  Il2CppObject *Component_object; // x1

  if ( (byte_4D2709E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_EventSpotCooltimeComponent__Initialize_b__16_0__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_13054/*"SpotCooltimeRewardDialog"*/);
    sub_1C94098(&StringLiteral_8933/*"MapGimmickEffect_SpotCooltimeInfo"*/);
    byte_4D2709E = 1;
  }
  this->fields.eventId = eventId;
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventSpotCooltimeComponent__Initialize_b__16_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_41357316(eventId, v7, 1, 0);
  if ( !assetData )
    goto LABEL_21;
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              assetData,
                              (System_String_o *)StringLiteral_8933/*"MapGimmickEffect_SpotCooltimeInfo"*/,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  this->fields.spotCooltimeInfoPrefab = (struct UnityEngine_GameObject_o *)Object_object__51893132;
  sub_1C9403C(&this->fields.spotCooltimeInfoPrefab, Object_object__51893132);
  p_rewardDialog = &this->fields.rewardDialog;
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rewardDialog, 0, 0) )
  {
    v13 = AssetData__GetObject_object__51893132(
            assetData,
            (System_String_o *)StringLiteral_13054/*"SpotCooltimeRewardDialog"*/,
            (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__Instantiate_object_(
              v13,
              (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      dialogRoot = this->fields.dialogRoot;
      v16 = (UnityEngine_GameObject_o *)v14;
      GameObjectExtensions__SetParent_36804528((UnityEngine_GameObject_o *)v14, dialogRoot, 0);
      if ( !byte_4D25F19 )
      {
        sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F19 = 1;
      }
      GameObjectExtensions__SetPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      if ( !byte_4D25F1E )
      {
        sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F1E = 1;
      }
      GameObjectExtensions__SetLocalScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( v16 )
      {
        UnityEngine_GameObject__SetActive(v16, 0, 0);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v16,
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
        *p_rewardDialog = (struct SpotCooltimeRewardDialog_o *)Component_object;
        sub_1C9403C(p_rewardDialog, Component_object);
        return;
      }
LABEL_21:
      sub_1C942F0(v8, v9);
    }
  }
}


bool EventSpotCooltimeComponent__IsActiveEventSpotCooltime(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2709D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    byte_4D2709D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1C942F0(Master_object, v4);
  return EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0);
}


bool EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(
        EventSpotCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardDialog; // x20
  __int64 v4; // x1
  BaseDialog_o *v5; // x0

  if ( (byte_4D270A5 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D270A5 = 1;
  }
  rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0, 0) )
    return 0;
  v5 = (BaseDialog_o *)this->fields.rewardDialog;
  if ( !v5 )
    sub_1C942F0(0, v4);
  return BaseDialog__get_IsBusy(v5, 0);
}


void EventSpotCooltimeComponent__ReceiveCooltimeReward(
        EventSpotCooltimeComponent_o *this,
        int32_t eventId,
        System_Action_bool__o *reqeustFinishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onRewardRequestFinishedCallback = reqeustFinishCallback;
  sub_1C9403C(&this->fields.onRewardRequestFinishedCallback, reqeustFinishCallback);
  EventSpotCooltimeComponent__BeginEventReceiveCooltimeRewardRequest(this, eventId, v6);
}


void EventSpotCooltimeComponent__Response(
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
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  Il2CppObject **v16; // x8
  SpotCooltimeRewardDialog_o *v17; // x21
  BattleDropItem_array *v18; // x22
  System_Action_o *v19; // x23
  Il2CppObject *v20; // x24
  struct EventSpotCooltimeComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4D270A1 & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_bool___);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventSpotCooltimeComponent_Response__);
    sub_1C94098(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_EventSpotCooltimeComponent___c__Response_b__20_0__);
    sub_1C94098(&EventSpotCooltimeComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_16932/*"ar192"*/);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    sub_1C94098(&StringLiteral_15861/*"["*/);
    sub_1C94098(&StringLiteral_16112/*"]"*/);
    byte_4D270A1 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22424/*"ng"*/, 0);
  if ( !v5 )
  {
    v6 = (Il2CppObject *)System_String__Concat_64456008(
                           (System_String_o *)StringLiteral_15861/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16112/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = (Il2CppObject ***)JsonManager__DeserializeArray_object_(
                             v6,
                             (const MethodInfo_320C67C *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
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
      if ( !UnityEngine_Object__op_Inequality(rewardDialog, 0, 0) )
        goto LABEL_25;
      v12 = Method_EventSpotCooltimeComponent_Response__;
      if ( (*((_BYTE *)Method_EventSpotCooltimeComponent_Response__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C940B0(Method_EventSpotCooltimeComponent_Response__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C9407C(v12, v12[4]);
      v7 = (Il2CppObject ***)OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_16932/*"ar192"*/, 0, 0);
      if ( *((_DWORD *)v9 + 6) )
      {
        v16 = v9[4];
        if ( !v16 )
          goto LABEL_28;
        v17 = this->fields.rewardDialog;
        v18 = (BattleDropItem_array *)v16[2];
        v7 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        if ( !EventSpotCooltimeComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSpotCooltimeComponent___c_TypeInfo);
          v7 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
        }
        v19 = (System_Action_o *)v7[23][1];
        if ( !v19 )
        {
          if ( !*((_DWORD *)v7 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = (Il2CppObject ***)EventSpotCooltimeComponent___c_TypeInfo;
          }
          v20 = *v7[23];
          v19 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(v19, v20, Method_EventSpotCooltimeComponent___c__Response_b__20_0__, 0);
          static_fields = EventSpotCooltimeComponent___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = v19;
          v7 = (Il2CppObject ***)sub_1C9403C(&static_fields->__9__20_0, v19);
        }
        if ( !v17 )
LABEL_28:
          sub_1C942F0(v7, v14);
        SpotCooltimeRewardDialog__Open(v17, v18, v19, v15);
LABEL_25:
        EventSpotCooltimeComponent__UpdateSpotInfo(this, v8);
        goto LABEL_26;
      }
    }
    sub_1C942F8(v7);
  }
LABEL_26:
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.onRewardRequestFinishedCallback,
    !v5,
    (const MethodInfo_30E5830 *)Method_ActionExtensions_Call_bool___);
}


void EventSpotCooltimeComponent__SetSpot(
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
  intptr_t m_CachedPtr; // x8
  _QWORD *v15; // x9
  __int64 klass_low; // x10
  intptr_t v17; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2709F & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2709F = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0, 0) )
    {
      spotCooltimeInfoPrefab = (Il2CppObject *)this->fields.spotCooltimeInfoPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__Instantiate_object_(
             spotCooltimeInfoPrefab,
             (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_36804528((UnityEngine_GameObject_o *)v8, this->fields.spotCooltimeRoot, 0);
      if ( !targetSpot )
        goto LABEL_21;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0);
      if ( !transform )
        goto LABEL_21;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
      localPosition.fields.x = localPosition.fields.x + this->fields.spotInfoOffset.fields.x;
      localPosition.fields.y = localPosition.fields.y + this->fields.spotInfoOffset.fields.y;
      localPosition.fields.z = localPosition.fields.z + this->fields.spotInfoOffset.fields.z;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v8, localPosition, 0);
      if ( !v8 )
        goto LABEL_21;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v8, 0);
      if ( !byte_4D25F1E )
      {
        sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F1E = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v8,
                                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeInfoComponent___);
      if ( !transform
        || (v13 = (Il2CppObject *)transform,
            SpotCooltimeInfoComponent__Setup(
              (SpotCooltimeInfoComponent_o *)transform,
              userCooltimeRewardEntity,
              targetSpot,
              v12),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0)
        || (m_CachedPtr = transform->fields.m_CachedPtr,
            v15 = Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !m_CachedPtr) )
      {
LABEL_21:
        sub_1C942F0(transform, v10);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v13,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = m_CachedPtr + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v17 + 32) = v13;
        sub_1C9403C(v17 + 32, v13);
      }
    }
  }
}


void EventSpotCooltimeComponent__UpdateSpotInfo(EventSpotCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D270A2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    byte_4D270A2 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      spotCooltimeList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SpotCooltimeInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C942F0(0, v4);
      SpotCooltimeInfoComponent__UpdateUserData((SpotCooltimeInfoComponent_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeInfoComponent__Dispose__);
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

  if ( (byte_4D270A9 & 1) == 0 )
  {
    sub_1C94098(&EventSpotCooltimeComponent___c_TypeInfo);
    byte_4D270A9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventSpotCooltimeComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventSpotCooltimeComponent___c_TypeInfo->static_fields->__9 = (struct EventSpotCooltimeComponent___c_o *)v1;
  sub_1C9403C(EventSpotCooltimeComponent___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4D270AA & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__);
    sub_1C94098(&EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
    byte_4D270AA = 1;
  }
  v4 = sub_1C942E4(EventSpotCooltimeComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventSpotCooltimeComponent___c__DisplayClass26_0__CheckServantSpaceShortage_b__1__,
          0),
        !Instance) )
  {
    sub_1C942F0(v5, v6);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4D270AB & 1) == 0 )
  {
    sub_1C94098(&SceneJumpInfo_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C94098(&StringLiteral_12741/*"SellServant"*/);
    sub_1C94098(&StringLiteral_12777/*"ServantCombine"*/);
    byte_4D270AB = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C942E4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42243256(v5, (System_String_o *)StringLiteral_12741/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C942F0(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C942E4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42243168(v5, (System_String_o *)StringLiteral_12777/*"ServantCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
  }
}