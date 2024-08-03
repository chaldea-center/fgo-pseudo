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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUILoadCallbackFunc, 0, v2, v3);
  this->fields.eventUIAssetData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData, 0, v5, v6);
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUIDownloadAtlas, 0, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventBoardGameTokenManager__CreateMenu(
        EventBoardGameTokenManager_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *parentObject; // x0
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
  __int64 v18; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0004A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0004A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               (Il2CppObject *)prefab,
                                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    sub_1B64324(parentObject);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)parentObject, 0LL);
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v21, 0LL);
  if ( !byte_49F7117 )
  {
    sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_49F7117 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v22.fields.x = v15;
  v22.fields.y = v16;
  v22.fields.z = v17;
  UnityEngine_Transform__set_localScale(transform, v22, 0LL);
  return v7;
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

  if ( (byte_4A0004E & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v6);
    this = (EventBoardGameTokenManager_o *)sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    byte_4A0004E = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2E1BBD4 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && *(_QWORD *)&ObjectList_object->max_length )
  {
    this = (EventBoardGameTokenManager_o *)AssetData__GetObject_object__48347676(
                                             assetData,
                                             name,
                                             (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1B64324(this);
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
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4A0004B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0004B = 1;
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
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
      {
        tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
        if ( !*p_tokenList
          || (tokenList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         tokenList,
                                                                         v6,
                                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__)) == 0LL )
        {
LABEL_13:
          sub_1B64324(tokenList);
        }
        EventBoardGameTokenItem__DestroyItem((EventBoardGameTokenItem_o *)tokenList, v10);
      }
      if ( v6 == 51 )
        break;
      tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
      ++v6;
      if ( !*p_tokenList )
        goto LABEL_13;
    }
    this->fields.tokenList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tokenList, 0, v8, v9);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x3

  if ( (byte_4A00046 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__, v5);
    sub_1B640C8(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo, v6);
    byte_4A00046 = 1;
  }
  v7 = sub_1B64314(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo, *(_QWORD *)&eventId, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 24) = eventId;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v7,
    Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__,
    0LL);
  EventBoardGameTokenManager__LoadEventUI(this, v13, 1, v14);
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
  int32_t v16; // w3
  System_Action_c *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  AssetLoader_LoadEndDataHandler_o *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_4A0004C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&Method_EventBoardGameTokenManager_LoadEventUIEnd__, v8);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_6202/*"EventUI/Prefabs/80285"*/, v10);
    byte_4A0004C = 1;
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
      v12 = sub_1B645E4(v14);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUILoadCallbackFunc, (int32_t)v14, v15, v16);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
    AssetLoader_LoadEndDataHandler___ctor(
      v20,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_LoadEventUIEnd__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6202/*"EventUI/Prefabs/80285"*/, v20, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      EventBoardGameTokenManager__LoadEventUIEnd(this, 0LL, v21);
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

  if ( (byte_4A0004D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5353/*"DownloadEventUIAtlas8028500"*/, assetData);
    byte_4A0004D = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData,
      (int32_t)assetData,
      (int32_t)method,
      v3);
    UIAtlasFromAssetData = EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
                             v6,
                             assetData,
                             (System_String_o *)StringLiteral_5353/*"DownloadEventUIAtlas8028500"*/,
                             v7);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1B6406C(
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
    sub_1B6406C(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3);
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
  __int64 v5; // x1
  AssetData_o *eventUIAssetData; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A0004F & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6202/*"EventUI/Prefabs/80285"*/, v5);
    byte_4A0004F = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6202/*"EventUI/Prefabs/80285"*/, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_37477464(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3);
  this->fields.eventUIAssetData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData, 0, v7, v8);
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
  Il2CppObject *MasterData_object; // x26
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int v21; // w8
  int v22; // w11
  int32_t v23; // w23
  int v24; // w21
  int v25; // w22
  Il2CppObject *tokenPrefab; // x24
  _BOOL4 v27; // w29
  int v28; // w21
  int v29; // w19
  int v30; // w8
  float v31; // s10
  UnityEngine_GameObject_o *v32; // x24
  const MethodInfo *v33; // x1
  __int64 v34; // x25
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x0
  bool IsHavingToken; // w26
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenEntity_o *v40; // x27
  __int64 v41; // x1
  __int64 v42; // x2
  System_Action_int__o *v43; // x28
  const MethodInfo *v44; // x5
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  UnityEngine_Transform_o *v51; // x25
  __int64 v52; // x1
  UnityEngine_Transform_o *v53; // x24
  Il2CppObject *v54; // [xsp+8h] [xbp-98h]
  int v56; // [xsp+14h] [xbp-8Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A00047 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, v5);
    sub_1B640C8(&Method_EventBoardGameTokenManager_checkTokenInfo__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo, v10);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A00047 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1B64324(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tokenList, (int32_t)v18, v19, v20);
  v21 = 0;
  v22 = 11;
  v23 = 1;
  v24 = 1;
  v25 = 1;
  v54 = MasterData_object;
  do
  {
    tokenPrefab = (Il2CppObject *)this->fields.tokenPrefab;
    v27 = v21 == 0 || v21 % v22 != 0;
    v28 = v24 ^ v27;
    if ( v27 )
      v29 = v21;
    else
      v29 = 0;
    if ( (v28 & 1) != 0 )
      v30 = 11;
    else
      v30 = 10;
    if ( (v28 & 1) != 0 )
      v31 = 0.0;
    else
      v31 = 22.0;
    v56 = v30;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                          tokenPrefab,
                          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_37;
    v32 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_37;
    v34 = Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v33);
    entity = 0LL;
    if ( !MasterData_object )
      goto LABEL_37;
    if ( !EventBoardGameTokenMaster__TryGetEntity(
            (EventBoardGameTokenMaster_o *)MasterData_object,
            &entity,
            eventId,
            v23,
            0LL) )
      goto LABEL_23;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    v37 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v37 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)v37, v23, 0LL);
    else
LABEL_23:
      IsHavingToken = 0;
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *(_QWORD *)(v34 + 80) = eventUIDownloadAtlas;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 80), (int32_t)eventUIDownloadAtlas, v35, v36);
    v40 = entity;
    v43 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v41, v42);
    System_Action_int____ctor(v43, (Il2CppObject *)this, Method_EventBoardGameTokenManager_checkTokenInfo__, 0LL);
    EventBoardGameTokenItem__SetItem((EventBoardGameTokenItem_o *)v34, &item, v40, IsHavingToken, v43, v44);
    Instance = (__int64)this->fields.tokenList;
    if ( !Instance )
      goto LABEL_37;
    v47 = *(_QWORD *)(Instance + 16);
    v48 = Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v47 )
      goto LABEL_37;
    v49 = *(int *)(Instance + 24);
    MasterData_object = v54;
    if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v34,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = v47 + 8 * v49;
      *(_DWORD *)(Instance + 24) = v49 + 1;
      *(_QWORD *)(v50 + 32) = v34;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 32), v34, v45, v46);
    }
    Instance = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !this->fields.parentObject )
      goto LABEL_37;
    v51 = (UnityEngine_Transform_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform(this->fields.parentObject, 0LL);
    if ( !v51 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v51, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !Instance )
      goto LABEL_37;
    v25 += !v27;
    v59.fields.y = (float)v25 * (float)-this->fields.arrangementPich.fields.y;
    v59.fields.x = v31 + (float)(this->fields.arrangementPich.fields.x * (float)v29);
    v59.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v59, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
    v53 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_49F7116 )
    {
      Instance = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v52);
      byte_49F7116 = 1;
    }
    if ( !v53 )
      goto LABEL_37;
    v24 = v28 ^ 1;
    UnityEngine_Transform__set_localScale(v53, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v22 = v56;
    ++v23;
    v21 = v29 + 1;
  }
  while ( v23 != 53 );
}


bool __fastcall EventBoardGameTokenManager__SetEventUI(
        EventBoardGameTokenManager_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v9; // w21

  if ( (byte_4A00050 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, sprite);
    byte_4A00050 = 1;
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
          v9 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1B64324(IsNullOrEmpty);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0LL;
LABEL_9:
  v9 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  return v9;
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
  const MethodInfo *v8; // x2
  char *Menu; // x0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenInfoDialog_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4A00048 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___, *(_QWORD *)&tokenId);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A00048 = 1;
  }
  tokenInfoDialog = (UnityEngine_Object_o *)this->fields.tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tokenInfoDialog, 0LL, 0LL) )
  {
    Menu = (char *)EventBoardGameTokenManager__CreateMenu(this, this->fields.tokenInfoDialogPrefab, v8);
    if ( !Menu
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Menu,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___),
          this->fields.tokenInfoDialog = (struct EventBoardGameTokenInfoDialog_o *)Component_object,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.tokenInfoDialog,
            (int32_t)Component_object,
            v11,
            v12),
          (Menu = (char *)this->fields.tokenInfoDialog) == 0LL) )
    {
LABEL_12:
      sub_1B64324(Menu);
    }
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *((_QWORD *)Menu + 16) = eventUIDownloadAtlas;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(Menu + 128), (int32_t)eventUIDownloadAtlas, v13, v14);
  }
  Menu = (char *)this->fields.tokenList;
  if ( !Menu )
    goto LABEL_12;
  v16 = this->fields.tokenInfoDialog;
  Menu = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Menu,
                   tokenId - 1,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
  if ( !v16 )
    goto LABEL_12;
  EventBoardGameTokenInfoDialog__OpenInfo(v16, (EventBoardGameTokenItem_o *)Menu, v17);
}


void __fastcall EventBoardGameTokenManager__closeTokenInfo(
        EventBoardGameTokenManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o **p_tokenInfoDialog; // x19
  UnityEngine_Object_o *v4; // x20
  struct EventBoardGameTokenInfoDialog_o *tokenInfoDialog; // t1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A00049 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00049 = 1;
  }
  tokenInfoDialog = this->fields.tokenInfoDialog;
  p_tokenInfoDialog = (UnityEngine_Component_o **)&this->fields.tokenInfoDialog;
  v4 = (UnityEngine_Object_o *)tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_tokenInfoDialog )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenInfoDialog, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_tokenInfoDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_tokenInfoDialog, 0, v7, v8);
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

  if ( (byte_4A00051 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23878/*"token_bg"*/, method);
    byte_4A00051 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          _4__this->fields.bgImage,
          (System_String_o *)StringLiteral_23878/*"token_bg"*/,
          v2),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(_4__this);
  }
  if ( !_4__this->fields.tokenList )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, v5);
}