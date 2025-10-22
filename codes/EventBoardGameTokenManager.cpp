void EventBoardGameTokenManager___ctor(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  this->fields.arrangementPich = (struct UnityEngine_Vector2_o)0x4260000042400000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventBoardGameTokenManager__Awake(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  this->fields.isEventUILoad = 0;
  this->fields.eventUILoadCallbackFunc = 0;
  sub_1C3E508(&this->fields.eventUILoadCallbackFunc, 0);
  this->fields.eventUIAssetData = 0;
  sub_1C3E508(&this->fields.eventUIAssetData, 0);
  this->fields.eventUIDownloadAtlas = 0;
  sub_1C3E508(&this->fields.eventUIDownloadAtlas, 0);
}


UnityEngine_GameObject_o *EventBoardGameTokenManager__CreateMenu(
        EventBoardGameTokenManager_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *transform; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v12; // s8
  float v13; // s9
  float v14; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C50F41 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50F41 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               (Il2CppObject *)prefab,
                                               (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !parentObject )
    goto LABEL_13;
  v7 = parentObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0);
  if ( !parentObject )
    goto LABEL_13;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)parentObject, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0);
  if ( !parentObject
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)parentObject, 0),
        (parentObject = this->fields.parentObject) == 0)
    || (v12 = localScale.fields.x,
        v13 = localScale.fields.y,
        v14 = localScale.fields.z,
        parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parentObject, 0),
        !transform) )
  {
LABEL_13:
    sub_1C3E7C0(parentObject, v6);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)parentObject, 0);
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v18, 0);
  if ( !byte_4C506A7 )
  {
    sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
    byte_4C506A7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v19.fields.x = v12;
  v19.fields.y = v13;
  v19.fields.z = v14;
  UnityEngine_Transform__set_localScale(transform, v19, 0);
  return v7;
}


UIAtlas_o *EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Object_array *ObjectList_object; // x0

  if ( (byte_4C50F45 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    this = (EventBoardGameTokenManager_o *)sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4C50F45 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_30DAF98 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && ObjectList_object->max_length )
  {
    this = (EventBoardGameTokenManager_o *)AssetData__GetObject_object__51228128(
                                             assetData,
                                             name,
                                             (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1C3E7C0(this, assetData);
  }
  return 0;
}


void EventBoardGameTokenManager__DestoryList(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tokenList; // x0
  struct System_Collections_Generic_List_EventBoardGameTokenItem__o **p_tokenList; // x20
  int32_t v5; // w21
  Il2CppObject *Item; // x22
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4C50F42 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50F42 = 1;
  }
  p_tokenList = &this->fields.tokenList;
  tokenList = (System_Collections_Generic_List_object__o *)this->fields.tokenList;
  if ( tokenList )
  {
    v5 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               tokenList,
               v5,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
        if ( !*p_tokenList
          || (tokenList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         tokenList,
                                                                         v5,
                                                                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__)) == 0 )
        {
LABEL_13:
          sub_1C3E7C0(tokenList, v7);
        }
        EventBoardGameTokenItem__DestroyItem((EventBoardGameTokenItem_o *)tokenList, v7);
      }
      if ( v5 == 51 )
        break;
      tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
      ++v5;
      if ( !*p_tokenList )
        goto LABEL_13;
    }
    this->fields.tokenList = 0;
    sub_1C3E508(&this->fields.tokenList, 0);
    EventBoardGameTokenManager__closeTokenInfo(this, v8);
    EventBoardGameTokenManager__ReleaseEventUI(this, v9);
  }
}


void EventBoardGameTokenManager__Init(EventBoardGameTokenManager_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3

  if ( (byte_4C50F3D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__);
    sub_1C3E564(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
    byte_4C50F3D = 1;
  }
  v5 = sub_1C3E7B0(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508(v5 + 16, this);
  *(_DWORD *)(v5 + 24) = eventId;
  v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)v5, Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__, 0);
  EventBoardGameTokenManager__LoadEventUI(this, v8, 1, v9);
}


void EventBoardGameTokenManager__LoadEventUI(
        EventBoardGameTokenManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x22
  System_Delegate_o *v9; // x0
  System_Action_c *v10; // x1
  AssetLoader_LoadEndDataHandler_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4C50F43 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_EventBoardGameTokenManager_LoadEventUIEnd__);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&StringLiteral_6269/*"EventUI/Prefabs/80285"*/);
    byte_4C50F43 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v9 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
         (System_Delegate_o *)callback,
         0);
  if ( v9 )
  {
    v10 = System_Action_TypeInfo;
    if ( (System_Action_c *)v9->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v9, (System_Action_c *)v9->klass != v10) )
    {
      sub_1C3EA80(v9);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0;
  }
  sub_1C3E508(&this->fields.eventUILoadCallbackFunc, v9);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_LoadEventUIEnd__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6269/*"EventUI/Prefabs/80285"*/, v11, loadParallelMax, 0) )
    {
      this->fields.isEventUILoad = 0;
      EventBoardGameTokenManager__LoadEventUIEnd(this, 0, v12);
    }
  }
}


void EventBoardGameTokenManager__LoadEventUIEnd(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventBoardGameTokenManager_o *v5; // x0
  const MethodInfo *v6; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_4C50F44 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5345/*"DownloadEventUIAtlas8028500"*/);
    byte_4C50F44 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    v5 = (EventBoardGameTokenManager_o *)sub_1C3E508(&this->fields.eventUIAssetData, assetData);
    UIAtlasFromAssetData = EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
                             v5,
                             assetData,
                             (System_String_o *)StringLiteral_5345/*"DownloadEventUIAtlas8028500"*/,
                             v6);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1C3E508(&this->fields.eventUIDownloadAtlas, UIAtlasFromAssetData);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v9 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    *p_eventUILoadCallbackFunc = 0;
    sub_1C3E508(p_eventUILoadCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void EventBoardGameTokenManager__ReleaseEventUI(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x20

  if ( (byte_4C50F46 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&StringLiteral_6269/*"EventUI/Prefabs/80285"*/);
    byte_4C50F46 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6269/*"EventUI/Prefabs/80285"*/, 0);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40580972(eventUIAssetData, 0);
    }
  }
  this->fields.eventUIDownloadAtlas = 0;
  sub_1C3E508(&this->fields.eventUIDownloadAtlas, 0);
  this->fields.eventUIAssetData = 0;
  sub_1C3E508(&this->fields.eventUIAssetData, 0);
}


void EventBoardGameTokenManager__SetArrangement(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *MasterData_object; // x26
  System_Collections_Generic_List_object__o *v7; // x22
  int v8; // w8
  int v9; // w11
  int32_t v10; // w23
  int v11; // w21
  int v12; // w22
  Il2CppObject *tokenPrefab; // x24
  _BOOL4 v14; // w29
  int v15; // w21
  int v16; // w19
  int v17; // w8
  float v18; // s10
  UnityEngine_GameObject_o *v19; // x24
  EventBoardGameTokenItem_o *v20; // x25
  Il2CppObject *v21; // x0
  bool IsHavingToken; // w26
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenEntity_o *v24; // x27
  System_Action_int__o *v25; // x28
  const MethodInfo *v26; // x5
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  UnityEngine_Transform_o *v31; // x25
  UnityEngine_Transform_o *v32; // x24
  Il2CppObject *v33; // [xsp+8h] [xbp-98h]
  int v35; // [xsp+14h] [xbp-8Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C50F3E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1C3E564(&Method_EventBoardGameTokenManager_checkTokenInfo__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C50F3E = 1;
  }
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1C3E7C0(Instance, v5);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)v7;
  sub_1C3E508(&this->fields.tokenList, v7);
  v8 = 0;
  v9 = 11;
  v10 = 1;
  v11 = 1;
  v12 = 1;
  v33 = MasterData_object;
  do
  {
    tokenPrefab = (Il2CppObject *)this->fields.tokenPrefab;
    v14 = v8 == 0 || v8 % v9 != 0;
    v15 = v11 ^ v14;
    if ( v14 )
      v16 = v8;
    else
      v16 = 0;
    if ( (v15 & 1) != 0 )
      v17 = 11;
    else
      v17 = 10;
    if ( (v15 & 1) != 0 )
      v18 = 0.0;
    else
      v18 = 22.0;
    v35 = v17;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                          tokenPrefab,
                          (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_37;
    v19 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_37;
    v20 = (EventBoardGameTokenItem_o *)Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v5);
    entity = 0;
    if ( !MasterData_object )
      goto LABEL_37;
    if ( !EventBoardGameTokenMaster__TryGetEntity(
            (EventBoardGameTokenMaster_o *)MasterData_object,
            &entity,
            eventId,
            v10,
            0) )
      goto LABEL_23;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    v21 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v21 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)v21, v10, 0);
    else
LABEL_23:
      IsHavingToken = 0;
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    v20->fields.eventAtlas = eventUIDownloadAtlas;
    sub_1C3E508(&v20->fields.eventAtlas, eventUIDownloadAtlas);
    v24 = entity;
    v25 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo);
    System_Action_int____ctor(v25, (Il2CppObject *)this, Method_EventBoardGameTokenManager_checkTokenInfo__, 0);
    EventBoardGameTokenItem__SetItem(v20, &item, v24, IsHavingToken, v25, v26);
    Instance = (__int64)this->fields.tokenList;
    if ( !Instance )
      goto LABEL_37;
    v27 = *(_QWORD *)(Instance + 16);
    v28 = Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v27 )
      goto LABEL_37;
    v29 = *(int *)(Instance + 24);
    MasterData_object = v33;
    if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v20,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = v27 + 8 * v29;
      *(_DWORD *)(Instance + 24) = v29 + 1;
      *(_QWORD *)(v30 + 32) = v20;
      sub_1C3E508(v30 + 32, v20);
    }
    Instance = (__int64)UnityEngine_GameObject__get_transform(v19, 0);
    if ( !this->fields.parentObject )
      goto LABEL_37;
    v31 = (UnityEngine_Transform_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform(this->fields.parentObject, 0);
    if ( !v31 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v31, (UnityEngine_Transform_o *)Instance, 0);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v19, 0);
    if ( !Instance )
      goto LABEL_37;
    v12 += !v14;
    v38.fields.y = (float)v12 * (float)-this->fields.arrangementPich.fields.y;
    v38.fields.x = v18 + (float)(this->fields.arrangementPich.fields.x * (float)v16);
    v38.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v38, 0);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v19, 0);
    v32 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4C506A6 )
    {
      Instance = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A6 = 1;
    }
    if ( !v32 )
      goto LABEL_37;
    v11 = v15 ^ 1;
    UnityEngine_Transform__set_localScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v9 = v35;
    ++v10;
    v8 = v16 + 1;
  }
  while ( v10 != 53 );
}


bool EventBoardGameTokenManager__SetEventUI(
        EventBoardGameTokenManager_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v10; // w21

  if ( (byte_4C50F47 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50F47 = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, spriteName, 0);
        if ( IsNullOrEmpty )
        {
          if ( sprite )
          {
            UISprite__set_atlas(sprite, this->fields.eventUIDownloadAtlas, 0);
            goto LABEL_9;
          }
        }
        else if ( sprite )
        {
          spriteName = 0;
          v10 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1C3E7C0(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0;
LABEL_9:
  v10 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0);
  return v10;
}


void EventBoardGameTokenManager__checkTokenInfo(
        EventBoardGameTokenManager_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tokenInfoDialog; // x22
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *Menu; // x0
  Il2CppObject *Component_object; // x0
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenInfoDialog_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4C50F3F & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50F3F = 1;
  }
  tokenInfoDialog = (UnityEngine_Object_o *)this->fields.tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tokenInfoDialog, 0, 0) )
  {
    Menu = EventBoardGameTokenManager__CreateMenu(this, this->fields.tokenInfoDialogPrefab, v7);
    if ( !Menu
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               Menu,
                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___),
          this->fields.tokenInfoDialog = (struct EventBoardGameTokenInfoDialog_o *)Component_object,
          sub_1C3E508(&this->fields.tokenInfoDialog, Component_object),
          (Menu = (UnityEngine_GameObject_o *)this->fields.tokenInfoDialog) == 0) )
    {
LABEL_12:
      sub_1C3E7C0(Menu, v6);
    }
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    Menu[5].fields.m_CachedPtr = (intptr_t)eventUIDownloadAtlas;
    sub_1C3E508(&Menu[5].fields, eventUIDownloadAtlas);
  }
  Menu = (UnityEngine_GameObject_o *)this->fields.tokenList;
  if ( !Menu )
    goto LABEL_12;
  v11 = this->fields.tokenInfoDialog;
  Menu = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)Menu,
                                       tokenId - 1,
                                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
  if ( !v11 )
    goto LABEL_12;
  EventBoardGameTokenInfoDialog__OpenInfo(v11, (EventBoardGameTokenItem_o *)Menu, v12);
}


void EventBoardGameTokenManager__closeTokenInfo(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_tokenInfoDialog; // x19
  UnityEngine_Object_o *v4; // x20
  struct EventBoardGameTokenInfoDialog_o *tokenInfoDialog; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C50F40 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50F40 = 1;
  }
  tokenInfoDialog = this->fields.tokenInfoDialog;
  p_tokenInfoDialog = (UnityEngine_Component_o **)&this->fields.tokenInfoDialog;
  v4 = (UnityEngine_Object_o *)tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_tokenInfoDialog )
      sub_1C3E7C0(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenInfoDialog, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(gameObject, 0);
    *p_tokenInfoDialog = 0;
    sub_1C3E508(p_tokenInfoDialog, 0);
  }
}


void EventBoardGameTokenManager___c__DisplayClass18_0___ctor(
        EventBoardGameTokenManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBoardGameTokenManager___c__DisplayClass18_0___Init_b__0(
        EventBoardGameTokenManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct EventBoardGameTokenManager_o *_4__this; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C50F48 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_24135/*"token_bg"*/);
    byte_4C50F48 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          _4__this->fields.bgImage,
          (System_String_o *)StringLiteral_24135/*"token_bg"*/,
          v2),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C3E7C0(_4__this, method);
  }
  if ( !_4__this->fields.tokenList )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, v5);
}