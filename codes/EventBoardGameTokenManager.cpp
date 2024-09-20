void __fastcall EventBoardGameTokenManager___ctor(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  this->fields.arrangementPich = (struct UnityEngine_Vector2_o)0x4260000042400000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenManager__Awake(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3

  this->fields.isEventUILoad = 0;
  this->fields.eventUILoadCallbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUILoadCallbackFunc, 0, v2, v3);
  this->fields.eventUIAssetData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData, 0, v5, v6);
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUIDownloadAtlas, 0, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventBoardGameTokenManager__CreateMenu(
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
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EE35 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE35 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               (Il2CppObject *)prefab,
                                               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !parentObject )
    goto LABEL_13;
  v7 = parentObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  if ( !parentObject )
    goto LABEL_13;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)parentObject, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  if ( !parentObject
    || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)parentObject,
                                           0LL),
        (parentObject = this->fields.parentObject) == 0LL)
    || (v15 = v12,
        v16 = v13,
        v17 = v14,
        parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parentObject, 0LL),
        !transform) )
  {
LABEL_13:
    sub_1B8880C(parentObject, v6);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)parentObject, 0LL);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v20, 0LL);
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v21.fields.x = v15;
  v21.fields.y = v16;
  v21.fields.z = v17;
  UnityEngine_Transform__set_localScale(transform, v21, 0LL);
  return v7;
}


UIAtlas_o *__fastcall EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Object_array *ObjectList_object; // x0

  if ( (byte_4A5EE39 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObjectList_GameObject___);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    this = (EventBoardGameTokenManager_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4A5EE39 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2E62034 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && *(_QWORD *)&ObjectList_object->max_length )
  {
    this = (EventBoardGameTokenManager_o *)AssetData__GetObject_object__48635516(
                                             assetData,
                                             name,
                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1B8880C(this, assetData);
  }
  return 0LL;
}


void __fastcall EventBoardGameTokenManager__DestoryList(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tokenList; // x0
  struct System_Collections_Generic_List_EventBoardGameTokenItem__o **p_tokenList; // x20
  int32_t v5; // w21
  Il2CppObject *Item; // x22
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4A5EE36 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE36 = 1;
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
      {
        tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
        if ( !*p_tokenList
          || (tokenList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         tokenList,
                                                                         v5,
                                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__)) == 0LL )
        {
LABEL_13:
          sub_1B8880C(tokenList, v7);
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
    this->fields.tokenList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tokenList, 0, v8, v9);
    EventBoardGameTokenManager__closeTokenInfo(this, v10);
    EventBoardGameTokenManager__ReleaseEventUI(this, v11);
  }
}


void __fastcall EventBoardGameTokenManager__Init(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x3

  if ( (byte_4A5EE31 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__);
    sub_1B885B0(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
    byte_4A5EE31 = 1;
  }
  v5 = sub_1B887FC(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = eventId;
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__,
    0LL);
  EventBoardGameTokenManager__LoadEventUI(this, v10, 1, v11);
}


void __fastcall EventBoardGameTokenManager__LoadEventUI(
        EventBoardGameTokenManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x0
  long double v8; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x22
  System_Delegate_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Action_c *v13; // x1
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4A5EE37 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_EventBoardGameTokenManager_LoadEventUIEnd__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_6229/*"EventUI/Prefabs/80285"*/);
    byte_4A5EE37 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v10 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0LL);
  if ( v10 )
  {
    v13 = System_Action_TypeInfo;
    if ( (System_Action_c *)v10->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v10, (System_Action_c *)v10->klass != v13) )
    {
      v8 = sub_1B88ACC(v10);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg,
          v8);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUILoadCallbackFunc, (int32_t)v10, v11, v12);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_LoadEventUIEnd__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6229/*"EventUI/Prefabs/80285"*/, v14, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      EventBoardGameTokenManager__LoadEventUIEnd(this, 0LL, v15);
    }
  }
}


void __fastcall EventBoardGameTokenManager__LoadEventUIEnd(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  EventBoardGameTokenManager_o *v6; // x0
  const MethodInfo *v7; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  ServantStatusBattleListViewItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_4A5EE38 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5378/*"DownloadEventUIAtlas8028500"*/);
    byte_4A5EE38 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData,
      (int32_t)assetData,
      (int32_t)method,
      v3);
    UIAtlasFromAssetData = EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
                             v6,
                             assetData,
                             (System_String_o *)StringLiteral_5378/*"DownloadEventUIAtlas8028500"*/,
                             v7);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUIDownloadAtlas,
      (int32_t)UIAtlasFromAssetData,
      v9,
      v10);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.eventUILoadCallbackFunc;
  v12 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_1B88554(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3);
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
  int32_t v3; // w3
  AssetData_o *eventUIAssetData; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5EE3A & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6229/*"EventUI/Prefabs/80285"*/);
    byte_4A5EE3A = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6229/*"EventUI/Prefabs/80285"*/, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_37790656(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3);
  this->fields.eventUIAssetData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData, 0, v6, v7);
}


void __fastcall EventBoardGameTokenManager__SetArrangement(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *MasterData_object; // x26
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int v10; // w8
  int v11; // w11
  int32_t v12; // w23
  int v13; // w21
  int v14; // w22
  Il2CppObject *tokenPrefab; // x24
  _BOOL4 v16; // w29
  int v17; // w21
  int v18; // w19
  int v19; // w8
  float v20; // s10
  UnityEngine_GameObject_o *v21; // x24
  DataManager_o *v22; // x25
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x0
  bool IsHavingToken; // w26
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenEntity_o *v28; // x27
  System_Action_int__o *v29; // x28
  const MethodInfo *v30; // x5
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v36; // x8
  UnityEngine_Transform_o *v37; // x25
  UnityEngine_Transform_o *v38; // x24
  Il2CppObject *v39; // [xsp+8h] [xbp-98h]
  int v41; // [xsp+14h] [xbp-8Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EE32 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1B885B0(&Method_EventBoardGameTokenManager_checkTokenInfo__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EE32 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1B8880C(Instance, v5);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tokenList, (int32_t)v7, v8, v9);
  v10 = 0;
  v11 = 11;
  v12 = 1;
  v13 = 1;
  v14 = 1;
  v39 = MasterData_object;
  do
  {
    tokenPrefab = (Il2CppObject *)this->fields.tokenPrefab;
    v16 = v10 == 0 || v10 % v11 != 0;
    v17 = v13 ^ v16;
    if ( v16 )
      v18 = v10;
    else
      v18 = 0;
    if ( (v17 & 1) != 0 )
      v19 = 11;
    else
      v19 = 10;
    if ( (v17 & 1) != 0 )
      v20 = 0.0;
    else
      v20 = 22.0;
    v41 = v19;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  tokenPrefab,
                                  (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_37;
    v21 = (UnityEngine_GameObject_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_37;
    v22 = Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v5);
    entity = 0LL;
    if ( !MasterData_object )
      goto LABEL_37;
    if ( !EventBoardGameTokenMaster__TryGetEntity(
            (EventBoardGameTokenMaster_o *)MasterData_object,
            &entity,
            eventId,
            v12,
            0LL) )
      goto LABEL_23;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    v25 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v25 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)v25, v12, 0LL);
    else
LABEL_23:
      IsHavingToken = 0;
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *(_QWORD *)&v22->fields.lastFrameTime = eventUIDownloadAtlas;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v22->fields.lastFrameTime,
      (int32_t)eventUIDownloadAtlas,
      v23,
      v24);
    v28 = entity;
    v29 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v29, (Il2CppObject *)this, Method_EventBoardGameTokenManager_checkTokenInfo__, 0LL);
    EventBoardGameTokenItem__SetItem((EventBoardGameTokenItem_o *)v22, &item, v28, IsHavingToken, v29, v30);
    Instance = (DataManager_o *)this->fields.tokenList;
    if ( !Instance )
      goto LABEL_37;
    v33 = *(_QWORD *)&Instance->fields.m_CachedPtr;
    v34 = Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v33 )
      goto LABEL_37;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    MasterData_object = v39;
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v22,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = v33 + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v36 + 32) = v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v22, v31, v32);
    }
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
    if ( !this->fields.parentObject )
      goto LABEL_37;
    v37 = (UnityEngine_Transform_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObject, 0LL);
    if ( !v37 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v37, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
    if ( !Instance )
      goto LABEL_37;
    v14 += !v16;
    v44.fields.y = (float)v14 * (float)-this->fields.arrangementPich.fields.y;
    v44.fields.x = v20 + (float)(this->fields.arrangementPich.fields.x * (float)v18);
    v44.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v44, 0LL);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
    v38 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4A55CE6 )
    {
      Instance = (DataManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v38 )
      goto LABEL_37;
    v13 = v17 ^ 1;
    UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v11 = v41;
    ++v12;
    v10 = v18 + 1;
  }
  while ( v12 != 53 );
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

  if ( (byte_4A5EE3B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE3B = 1;
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
      sub_1B8880C(IsNullOrEmpty, v8);
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


void __fastcall EventBoardGameTokenManager__checkTokenInfo(
        EventBoardGameTokenManager_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tokenInfoDialog; // x22
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  char *Menu; // x0
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenInfoDialog_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_4A5EE33 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE33 = 1;
  }
  tokenInfoDialog = (UnityEngine_Object_o *)this->fields.tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tokenInfoDialog, 0LL, 0LL) )
  {
    Menu = (char *)EventBoardGameTokenManager__CreateMenu(this, this->fields.tokenInfoDialogPrefab, v7);
    if ( !Menu
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Menu,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___),
          this->fields.tokenInfoDialog = (struct EventBoardGameTokenInfoDialog_o *)Component_object,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.tokenInfoDialog,
            (int32_t)Component_object,
            v10,
            v11),
          (Menu = (char *)this->fields.tokenInfoDialog) == 0LL) )
    {
LABEL_12:
      sub_1B8880C(Menu, v6);
    }
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *((_QWORD *)Menu + 16) = eventUIDownloadAtlas;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(Menu + 128), (int32_t)eventUIDownloadAtlas, v12, v13);
  }
  Menu = (char *)this->fields.tokenList;
  if ( !Menu )
    goto LABEL_12;
  v15 = this->fields.tokenInfoDialog;
  Menu = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Menu,
                   tokenId - 1,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
  if ( !v15 )
    goto LABEL_12;
  EventBoardGameTokenInfoDialog__OpenInfo(v15, (EventBoardGameTokenItem_o *)Menu, v16);
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
  int32_t v9; // w3

  if ( (byte_4A5EE34 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE34 = 1;
  }
  tokenInfoDialog = this->fields.tokenInfoDialog;
  p_tokenInfoDialog = (UnityEngine_Component_o **)&this->fields.tokenInfoDialog;
  v4 = (UnityEngine_Object_o *)tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_tokenInfoDialog )
      sub_1B8880C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenInfoDialog, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_tokenInfoDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_tokenInfoDialog, 0, v8, v9);
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

  if ( (byte_4A5EE3C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23977/*"token_bg"*/);
    byte_4A5EE3C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          _4__this->fields.bgImage,
          (System_String_o *)StringLiteral_23977/*"token_bg"*/,
          v2),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  if ( !_4__this->fields.tokenList )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, v5);
}