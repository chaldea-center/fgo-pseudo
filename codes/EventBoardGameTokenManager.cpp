void __fastcall EventBoardGameTokenManager___ctor(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  this->fields.arrangementPich = (struct UnityEngine_Vector2_o)0x4260000042400000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenManager__Awake(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.isEventUILoad = 0;
  this->fields.eventUILoadCallbackFunc = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc, 0, v2, v3);
  this->fields.eventUIAssetData = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, 0, v5, v6);
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, 0, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventBoardGameTokenManager__CreateMenu(
        EventBoardGameTokenManager_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *parentObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s10
  __int64 v19; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B48C23 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B48C23 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               (Il2CppObject *)prefab,
                                               (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !parentObject )
    goto LABEL_13;
  v8 = parentObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !parentObject )
    goto LABEL_13;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)parentObject, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !parentObject
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)parentObject,
                                           0LL),
        (parentObject = this->fields.parentObject) == 0LL)
    || (v16 = v13,
        v17 = v14,
        v18 = v15,
        parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parentObject, 0LL),
        !transform) )
  {
LABEL_13:
    sub_1BDBAD4(parentObject, v7);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)parentObject, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v22, 0LL);
  if ( !byte_4B3E917 )
  {
    sub_1BDB878(&UnityEngine_Quaternion_TypeInfo, v19);
    byte_4B3E917 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v23.fields.x = v16;
  v23.fields.y = v17;
  v23.fields.z = v18;
  UnityEngine_Transform__set_localScale(transform, v23, 0LL);
  return v8;
}


UIAtlas_o *__fastcall EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_Object_array *ObjectList_object; // x0

  if ( (byte_4B48C27 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, v6);
    this = (EventBoardGameTokenManager_o *)sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    byte_4B48C27 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_3015068 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && *(_QWORD *)&ObjectList_object->max_length )
  {
    this = (EventBoardGameTokenManager_o *)AssetData__GetObject_object__50417328(
                                             assetData,
                                             name,
                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1BDBAD4(this, assetData);
  }
  return 0LL;
}


void __fastcall EventBoardGameTokenManager__DestoryList(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *tokenList; // x0
  struct System_Collections_Generic_List_EventBoardGameTokenItem__o **p_tokenList; // x20
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4B48C24 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B48C24 = 1;
  }
  p_tokenList = &this->fields.tokenList;
  tokenList = (System_Collections_Generic_List_object__o *)this->fields.tokenList;
  if ( tokenList )
  {
    v6 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               tokenList,
               v6,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
      {
        tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
        if ( !*p_tokenList
          || (tokenList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         tokenList,
                                                                         v6,
                                                                         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__)) == 0LL )
        {
LABEL_13:
          sub_1BDBAD4(tokenList, v8);
        }
        EventBoardGameTokenItem__DestroyItem((EventBoardGameTokenItem_o *)tokenList, v8);
      }
      if ( v6 == 51 )
        break;
      tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
      ++v6;
      if ( !*p_tokenList )
        goto LABEL_13;
    }
    this->fields.tokenList = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.tokenList, 0, v9, v10);
    EventBoardGameTokenManager__closeTokenInfo(this, v11);
    EventBoardGameTokenManager__ReleaseEventUI(this, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__Init(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x3

  if ( (byte_4B48C1F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__, v5);
    sub_1BDB878(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo, v6);
    byte_4B48C1F = 1;
  }
  v7 = sub_1BDBAC4(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BDBAD4(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = eventId;
  v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__,
    0LL);
  EventBoardGameTokenManager__LoadEventUI(this, v12, 1, v13);
}


void __fastcall EventBoardGameTokenManager__LoadEventUI(
        EventBoardGameTokenManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *eventUIAssetData; // x0
  long double v12; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x22
  System_Delegate_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_c *v17; // x1
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4B48C25 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&AssetManager_TypeInfo, v7);
    sub_1BDB878(&Method_EventBoardGameTokenManager_LoadEventUIEnd__, v8);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_6277/*"EventUI/Prefabs/80285"*/, v10);
    byte_4B48C25 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v14 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0LL);
  if ( v14 )
  {
    v17 = System_Action_TypeInfo;
    if ( (System_Action_c *)v14->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v14, (System_Action_c *)v14->klass != v17) )
    {
      v12 = sub_1BDBD94(v14);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg,
          v12);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0LL;
  }
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc, (int32_t)v14, v15, v16);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_LoadEventUIEnd__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6277/*"EventUI/Prefabs/80285"*/, v18, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      EventBoardGameTokenManager__LoadEventUIEnd(this, 0LL, v19);
    }
  }
}


void __fastcall EventBoardGameTokenManager__LoadEventUIEnd(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventBoardGameTokenManager_o *v6; // x0
  const MethodInfo *v7; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CGThumbnailListItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_4B48C26 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_5380/*"DownloadEventUIAtlas8028500"*/, assetData);
    byte_4B48C26 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, (int32_t)assetData, (int32_t)method, v3);
    UIAtlasFromAssetData = EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
                             v6,
                             assetData,
                             (System_String_o *)StringLiteral_5380/*"DownloadEventUIAtlas8028500"*/,
                             v7);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, (int32_t)UIAtlasFromAssetData, v9, v10);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc;
  v12 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_1BDB81C(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall EventBoardGameTokenManager__ReleaseEventUI(
        EventBoardGameTokenManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  AssetData_o *eventUIAssetData; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B48C28 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_6277/*"EventUI/Prefabs/80285"*/, v5);
    byte_4B48C28 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6277/*"EventUI/Prefabs/80285"*/, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_39554172(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3);
  this->fields.eventUIAssetData = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, 0, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__SetArrangement(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 Instance; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *MasterData_object; // x26
  System_Collections_Generic_List_object__o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int v20; // w8
  int v21; // w11
  int32_t v22; // w23
  int v23; // w21
  int v24; // w22
  Il2CppObject *tokenPrefab; // x24
  _BOOL4 v26; // w29
  int v27; // w21
  int v28; // w19
  int v29; // w8
  float v30; // s10
  UnityEngine_GameObject_o *v31; // x24
  __int64 v32; // x25
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x0
  bool IsHavingToken; // w26
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenEntity_o *v38; // x27
  System_Action_int__o *v39; // x28
  const MethodInfo *v40; // x5
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  UnityEngine_Transform_o *v47; // x25
  UnityEngine_Transform_o *v48; // x24
  Il2CppObject *v49; // [xsp+8h] [xbp-98h]
  int v51; // [xsp+14h] [xbp-8Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B48C20 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, v5);
    sub_1BDB878(&Method_EventBoardGameTokenManager_checkTokenInfo__, v6);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo, v10);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B48C20 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1BDBAD4(Instance, v15);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.tokenList, (int32_t)v17, v18, v19);
  v20 = 0;
  v21 = 11;
  v22 = 1;
  v23 = 1;
  v24 = 1;
  v49 = MasterData_object;
  do
  {
    tokenPrefab = (Il2CppObject *)this->fields.tokenPrefab;
    v26 = v20 == 0 || v20 % v21 != 0;
    v27 = v23 ^ v26;
    if ( v26 )
      v28 = v20;
    else
      v28 = 0;
    if ( (v27 & 1) != 0 )
      v29 = 11;
    else
      v29 = 10;
    if ( (v27 & 1) != 0 )
      v30 = 0.0;
    else
      v30 = 22.0;
    v51 = v29;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                          tokenPrefab,
                          (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_37;
    v31 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_37;
    v32 = Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v15);
    entity = 0LL;
    if ( !MasterData_object )
      goto LABEL_37;
    if ( !EventBoardGameTokenMaster__TryGetEntity(
            (EventBoardGameTokenMaster_o *)MasterData_object,
            &entity,
            eventId,
            v22,
            0LL) )
      goto LABEL_23;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    v35 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v35 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)v35, v22, 0LL);
    else
LABEL_23:
      IsHavingToken = 0;
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *(_QWORD *)(v32 + 80) = eventUIDownloadAtlas;
    sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 80), (int32_t)eventUIDownloadAtlas, v33, v34);
    v38 = entity;
    v39 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
    System_Action_int____ctor(v39, (Il2CppObject *)this, Method_EventBoardGameTokenManager_checkTokenInfo__, 0LL);
    EventBoardGameTokenItem__SetItem((EventBoardGameTokenItem_o *)v32, &item, v38, IsHavingToken, v39, v40);
    Instance = (__int64)this->fields.tokenList;
    if ( !Instance )
      goto LABEL_37;
    v43 = *(_QWORD *)(Instance + 16);
    v44 = Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v43 )
      goto LABEL_37;
    v45 = *(int *)(Instance + 24);
    MasterData_object = v49;
    if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v32,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = v43 + 8 * v45;
      *(_DWORD *)(Instance + 24) = v45 + 1;
      *(_QWORD *)(v46 + 32) = v32;
      sub_1BDB81C((CGThumbnailListItem_o *)(v46 + 32), v32, v41, v42);
    }
    Instance = (__int64)UnityEngine_GameObject__get_transform(v31, 0LL);
    if ( !this->fields.parentObject )
      goto LABEL_37;
    v47 = (UnityEngine_Transform_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform(this->fields.parentObject, 0LL);
    if ( !v47 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v47, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v31, 0LL);
    if ( !Instance )
      goto LABEL_37;
    v24 += !v26;
    v54.fields.y = (float)v24 * (float)-this->fields.arrangementPich.fields.y;
    v54.fields.x = v30 + (float)(this->fields.arrangementPich.fields.x * (float)v28);
    v54.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v54, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v31, 0LL);
    v48 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4B3E916 )
    {
      Instance = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v15);
      byte_4B3E916 = 1;
    }
    if ( !v48 )
      goto LABEL_37;
    v23 = v27 ^ 1;
    UnityEngine_Transform__set_localScale(v48, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v21 = v51;
    ++v22;
    v20 = v28 + 1;
  }
  while ( v22 != 53 );
}


bool __fastcall EventBoardGameTokenManager__SetEventUI(
        EventBoardGameTokenManager_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v10; // w21

  if ( (byte_4B48C29 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, sprite);
    byte_4B48C29 = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, spriteName, 0LL);
        if ( IsNullOrEmpty )
        {
          if ( sprite )
          {
            UISprite__set_atlas(sprite, this->fields.eventUIDownloadAtlas, 0LL);
            goto LABEL_9;
          }
        }
        else if ( sprite )
        {
          spriteName = 0LL;
          v10 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1BDBAD4(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0LL;
LABEL_9:
  v10 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__checkTokenInfo(
        EventBoardGameTokenManager_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *tokenInfoDialog; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  void *Menu; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenInfoDialog_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4B48C21 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___, *(_QWORD *)&tokenId);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    byte_4B48C21 = 1;
  }
  tokenInfoDialog = (UnityEngine_Object_o *)this->fields.tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tokenInfoDialog, 0LL, 0LL) )
  {
    Menu = EventBoardGameTokenManager__CreateMenu(this, this->fields.tokenInfoDialogPrefab, v9);
    if ( !Menu
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Menu,
                               (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___),
          this->fields.tokenInfoDialog = (struct EventBoardGameTokenInfoDialog_o *)Component_object,
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.tokenInfoDialog, (int32_t)Component_object, v12, v13),
          (Menu = this->fields.tokenInfoDialog) == 0LL) )
    {
LABEL_12:
      sub_1BDBAD4(Menu, v8);
    }
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *((_QWORD *)Menu + 17) = eventUIDownloadAtlas;
    sub_1BDB81C((CGThumbnailListItem_o *)Menu + 1, (int32_t)eventUIDownloadAtlas, v14, v15);
  }
  Menu = this->fields.tokenList;
  if ( !Menu )
    goto LABEL_12;
  v17 = this->fields.tokenInfoDialog;
  Menu = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)Menu,
           tokenId - 1,
           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
  if ( !v17 )
    goto LABEL_12;
  EventBoardGameTokenInfoDialog__OpenInfo(v17, (EventBoardGameTokenItem_o *)Menu, v18);
}


void __fastcall EventBoardGameTokenManager__closeTokenInfo(
        EventBoardGameTokenManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o **p_tokenInfoDialog; // x19
  UnityEngine_Object_o *v4; // x20
  struct EventBoardGameTokenInfoDialog_o *tokenInfoDialog; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B48C22 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48C22 = 1;
  }
  tokenInfoDialog = this->fields.tokenInfoDialog;
  p_tokenInfoDialog = (UnityEngine_Component_o **)&this->fields.tokenInfoDialog;
  v4 = (UnityEngine_Object_o *)tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_tokenInfoDialog )
      sub_1BDBAD4(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenInfoDialog, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
    *p_tokenInfoDialog = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)p_tokenInfoDialog, 0, v8, v9);
  }
}


void __fastcall EventBoardGameTokenManager___c__DisplayClass18_0___ctor(
        EventBoardGameTokenManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBoardGameTokenManager___c__DisplayClass18_0___Init_b__0(
        EventBoardGameTokenManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct EventBoardGameTokenManager_o *_4__this; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B48C2A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24166/*"token_bg"*/, method);
    byte_4B48C2A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          _4__this->fields.bgImage,
          (System_String_o *)StringLiteral_24166/*"token_bg"*/,
          v2),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(_4__this, method);
  }
  if ( !_4__this->fields.tokenList )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, v5);
}