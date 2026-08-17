void EventBoardGameTokenManager___ctor(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  this->fields.arrangementPich = (struct UnityEngine_Vector2_o)0x4260000042400000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventBoardGameTokenManager__Awake(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  this->fields.isEventUILoad = 0;
  this->fields.eventUILoadCallbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUILoadCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUIAssetData, 0, v9, v10, v11, v12, v13, v14);
  this->fields.eventUIDownloadAtlas = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUIDownloadAtlas, 0, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_596A4E1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4E1 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab, method);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               (Il2CppObject *)prefab,
                                               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    sub_2213CDC(parentObject, v6);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)parentObject, 0);
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v18, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
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

  if ( (byte_596A4E5 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObjectList_GameObject___);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    this = (EventBoardGameTokenManager_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_596A4E5 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_37D2608 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && ObjectList_object->max_length )
  {
    this = (EventBoardGameTokenManager_o *)AssetData__GetObject_object__58532980(
                                             assetData,
                                             name,
                                             (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_2213CDC(this, assetData);
  }
  return 0;
}


void EventBoardGameTokenManager__DestoryList(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tokenList; // x0
  struct System_Collections_Generic_List_EventBoardGameTokenItem__o **p_tokenList; // x20
  int32_t v5; // w21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Item; // x22
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  if ( (byte_596A4E2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4E2 = 1;
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
        if ( !*p_tokenList
          || (tokenList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         tokenList,
                                                                         v5,
                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__)) == 0 )
        {
LABEL_13:
          sub_2213CDC(tokenList, v9);
        }
        EventBoardGameTokenItem__DestroyItem((EventBoardGameTokenItem_o *)tokenList, v9);
      }
      if ( v5 == 51 )
        break;
      tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
      ++v5;
      if ( !*p_tokenList )
        goto LABEL_13;
    }
    this->fields.tokenList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tokenList, 0, v10, v11, v12, v13, v14, v15);
    EventBoardGameTokenManager__closeTokenInfo(this, v16);
    EventBoardGameTokenManager__ReleaseEventUI(this, v17);
  }
}


void EventBoardGameTokenManager__Init(EventBoardGameTokenManager_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x0
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x3

  if ( (byte_596A4DD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__);
    sub_2213A60(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
    byte_596A4DD = 1;
  }
  v5 = sub_2213CCC(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
  EventBoardGameTokenManager___c__DisplayClass18_0___ctor((EventBoardGameTokenManager___c__DisplayClass18_0_o *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Action_TypeInfo;
  *(_DWORD *)(v5 + 24) = eventId;
  v15 = (System_Action_o *)sub_2213CCC(v14);
  System_Action___ctor(v15, (Il2CppObject *)v5, Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__, 0);
  EventBoardGameTokenManager__LoadEventUI(this, v15, 1, v16);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_c *v16; // x1
  AssetLoader_LoadEndDataHandler_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_596A4E3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_EventBoardGameTokenManager_LoadEventUIEnd__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&StringLiteral_6533/*"EventUI/Prefabs/80285"*/);
    byte_596A4E3 = 1;
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
    v16 = System_Action_TypeInfo;
    if ( (System_Action_c *)v9->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v9, (System_Action_c *)v9->klass != v16) )
    {
      sub_221405C(v9, v16, v10, v11);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUILoadCallbackFunc,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_LoadEventUIEnd__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18, v19);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6533/*"EventUI/Prefabs/80285"*/, v17, loadParallelMax, 0, 0) )
    {
      this->fields.isEventUILoad = 0;
      EventBoardGameTokenManager__LoadEventUIEnd(this, 0, v20);
    }
  }
}


void EventBoardGameTokenManager__LoadEventUIEnd(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventBoardGameTokenManager_o *v10; // x0
  const MethodInfo *v11; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  MissionNaviTransitionBoardItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_596A4E4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5536/*"DownloadEventUIAtlas8028500"*/);
    byte_596A4E4 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUIAssetData,
      (int32_t)assetData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasFromAssetData = EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
                             v10,
                             assetData,
                             (System_String_o *)StringLiteral_5536/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUIDownloadAtlas,
      (int32_t)UIAtlasFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.eventUILoadCallbackFunc;
  v20 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0;
    sub_2213A04(p_eventUILoadCallbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(v20->fields.method_code, v20->fields.method);
  }
}


void EventBoardGameTokenManager__ReleaseEventUI(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetManager_c *v9; // x0
  int v10; // w8
  AssetData_o *eventUIAssetData; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596A4E6 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_6533/*"EventUI/Prefabs/80285"*/);
    byte_596A4E6 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    v9 = AssetManager_TypeInfo;
    v10 = *(&AssetManager_TypeInfo->_2.cctor_finished + 1);
    this->fields.isEventUILoad = 0;
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(v9, method, v2);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6533/*"EventUI/Prefabs/80285"*/, 0);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
      AssetManager__releaseAsset_47496972(eventUIAssetData, 0);
    }
  }
  this->fields.eventUIDownloadAtlas = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUIAssetData, 0, v12, v13, v14, v15, v16, v17);
}


void EventBoardGameTokenManager__SetArrangement(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *MasterData_object; // x26
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  int v16; // w8
  int v17; // w19
  int32_t v18; // w23
  int v19; // w11
  int v20; // w22
  int v21; // w29
  int v22; // w11
  int v23; // w21
  float v24; // s10
  Il2CppObject *tokenPrefab; // x24
  UnityEngine_GameObject_o *v26; // x24
  DataManager_o *v27; // x25
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x0
  bool IsHavingToken; // w26
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenEntity_o *v37; // x27
  System_Action_int__o *v38; // x28
  const MethodInfo *v39; // x5
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v47; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v49; // x8
  UnityEngine_Transform_o *v50; // x25
  UnityEngine_Transform_o *v51; // x24
  Il2CppObject *v52; // [xsp+8h] [xbp-98h]
  int v54; // [xsp+14h] [xbp-8Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A4DE & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_2213A60(&Method_EventBoardGameTokenManager_checkTokenInfo__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A4DE = 1;
  }
  item = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_2213CDC(Instance, v5);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tokenList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v16 = 0;
  v17 = 11;
  v18 = 1;
  v19 = 1;
  v20 = 1;
  v52 = MasterData_object;
  do
  {
    v21 = v16 != 0 && v16 % v17 == 0;
    v22 = v19 ^ v21;
    if ( v16 != 0 && v16 % v17 == 0 )
      v23 = 0;
    else
      v23 = v16;
    v54 = v22;
    if ( (v22 & 1) != 0 )
      v24 = 22.0;
    else
      v24 = 0.0;
    tokenPrefab = (Il2CppObject *)this->fields.tokenPrefab;
    if ( (v22 & 1) != 0 )
      v17 = 10;
    else
      v17 = 11;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  tokenPrefab,
                                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_37;
    v26 = (UnityEngine_GameObject_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_37;
    v27 = Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v5);
    entity = 0;
    if ( !MasterData_object )
      goto LABEL_37;
    if ( !EventBoardGameTokenMaster__TryGetEntity(
            (EventBoardGameTokenMaster_o *)MasterData_object,
            &entity,
            eventId,
            v18,
            0) )
      goto LABEL_23;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    v34 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v34 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)v34, v18, 0);
    else
LABEL_23:
      IsHavingToken = 0;
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *(_QWORD *)&v27->fields.lastFrameTime = eventUIDownloadAtlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v27->fields.lastFrameTime,
      (int32_t)eventUIDownloadAtlas,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v37 = entity;
    v38 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v38, (Il2CppObject *)this, Method_EventBoardGameTokenManager_checkTokenInfo__, 0);
    EventBoardGameTokenItem__SetItem((EventBoardGameTokenItem_o *)v27, &item, v37, IsHavingToken, v38, v39);
    Instance = (DataManager_o *)this->fields.tokenList;
    if ( !Instance )
      goto LABEL_37;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    v47 = Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_37;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    MasterData_object = v52;
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v27,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v49 + 32) = v27;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 32), (int32_t)v27, v40, v41, v42, v43, v44, v45);
    }
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v26, 0);
    if ( !this->fields.parentObject )
      goto LABEL_37;
    v50 = (UnityEngine_Transform_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObject, 0);
    if ( !v50 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v50, (UnityEngine_Transform_o *)Instance, 0);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v26, 0);
    if ( !Instance )
      goto LABEL_37;
    v20 += v21;
    v57.fields.y = -(float)(this->fields.arrangementPich.fields.y * (float)v20);
    v57.fields.z = 0.0;
    v57.fields.x = v24 + (float)(this->fields.arrangementPich.fields.x * (float)v23);
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v57, 0);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v26, 0);
    v51 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_5969AE5 )
    {
      Instance = (DataManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v51 )
      goto LABEL_37;
    UnityEngine_Transform__set_localScale(v51, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    ++v18;
    v19 = v54;
    v16 = v23 + 1;
  }
  while ( v18 != 53 );
}


bool EventBoardGameTokenManager__SetEventUI(
        EventBoardGameTokenManager_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v11; // w21

  if ( (byte_596A4E7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4E7 = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
          v11 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_2213CDC(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0;
LABEL_9:
  v11 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
void EventBoardGameTokenManager__checkTokenInfo(
        EventBoardGameTokenManager_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  struct EventBoardGameTokenInfoDialog_o **p_tokenInfoDialog; // x21
  UnityEngine_Object_o *tokenInfoDialog; // x22
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  char *Menu; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenInfoDialog_o *v24; // x20
  const MethodInfo *v25; // x2

  if ( (byte_596A4DF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4DF = 1;
  }
  p_tokenInfoDialog = &this->fields.tokenInfoDialog;
  tokenInfoDialog = (UnityEngine_Object_o *)this->fields.tokenInfoDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&tokenId, method);
  if ( UnityEngine_Object__op_Equality(tokenInfoDialog, 0, 0) )
  {
    Menu = (char *)EventBoardGameTokenManager__CreateMenu(this, this->fields.tokenInfoDialogPrefab, v8);
    if ( !Menu
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Menu,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___),
          *p_tokenInfoDialog = (struct EventBoardGameTokenInfoDialog_o *)Component_object,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.tokenInfoDialog,
            (int32_t)Component_object,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          (Menu = (char *)*p_tokenInfoDialog) == 0) )
    {
LABEL_12:
      sub_2213CDC(Menu, v7);
    }
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *((_QWORD *)Menu + 17) = eventUIDownloadAtlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(Menu + 136),
      (int32_t)eventUIDownloadAtlas,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  Menu = (char *)this->fields.tokenList;
  if ( !Menu )
    goto LABEL_12;
  v24 = this->fields.tokenInfoDialog;
  Menu = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Menu,
                   tokenId - 1,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
  if ( !v24 )
    goto LABEL_12;
  EventBoardGameTokenInfoDialog__OpenInfo(v24, (EventBoardGameTokenItem_o *)Menu, v25);
}


void EventBoardGameTokenManager__closeTokenInfo(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_tokenInfoDialog; // x19
  UnityEngine_Object_o *v5; // x20
  struct EventBoardGameTokenInfoDialog_o *tokenInfoDialog; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A4E0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4E0 = 1;
  }
  tokenInfoDialog = this->fields.tokenInfoDialog;
  p_tokenInfoDialog = (UnityEngine_Component_o **)&this->fields.tokenInfoDialog;
  v5 = (UnityEngine_Object_o *)tokenInfoDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    if ( !*p_tokenInfoDialog )
      sub_2213CDC(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenInfoDialog, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_tokenInfoDialog = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_tokenInfoDialog, 0, v11, v12, v13, v14, v15, v16);
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
  struct EventBoardGameTokenManager_o *_4__this; // x0

  if ( (byte_596A4E8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25412/*"token_bg"*/);
    byte_596A4E8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          _4__this->fields.bgImage,
          (System_String_o *)StringLiteral_25412/*"token_bg"*/,
          0),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  if ( !_4__this->fields.tokenList )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, 0);
}