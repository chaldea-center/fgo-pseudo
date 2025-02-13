void __fastcall EventBoardGameTokenManager___ctor(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  this->fields.arrangementPich = (struct UnityEngine_Vector2_o)0x4260000042400000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenManager__Awake(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  this->fields.isEventUILoad = 0;
  this->fields.eventUILoadCallbackFunc = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventUIAssetData, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas, 0LL, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4BE03F1 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE03F1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               (Il2CppObject *)prefab,
                                               (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    sub_1C22094(parentObject, v6);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)parentObject, 0LL);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v20, 0LL);
  if ( !byte_4BD6BB7 )
  {
    sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
    byte_4BD6BB7 = 1;
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

  if ( (byte_4BE03F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    this = (EventBoardGameTokenManager_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4BE03F5 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2F92080 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && *(_QWORD *)&ObjectList_object->max_length )
  {
    this = (EventBoardGameTokenManager_o *)AssetData__GetObject_object__49880776(
                                             assetData,
                                             name,
                                             (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1C22094(this, assetData);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4BE03F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE03F2 = 1;
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
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
      {
        tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
        if ( !*p_tokenList
          || (tokenList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         tokenList,
                                                                         v5,
                                                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__)) == 0LL )
        {
LABEL_13:
          sub_1C22094(tokenList, v7);
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
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tokenList, 0LL, v8, v9, v10, v11, v12, v13);
    EventBoardGameTokenManager__closeTokenInfo(this, v14);
    EventBoardGameTokenManager__ReleaseEventUI(this, v15);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x3

  if ( (byte_4BE03ED & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__);
    sub_1C21E38(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
    byte_4BE03ED = 1;
  }
  v5 = sub_1C22084(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = eventId;
  v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__,
    0LL);
  EventBoardGameTokenManager__LoadEventUI(this, v14, 1, v15);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Action_c *v17; // x1
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4BE03F3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_EventBoardGameTokenManager_LoadEventUIEnd__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&StringLiteral_6397/*"EventUI/Prefabs/80285"*/);
    byte_4BE03F3 = 1;
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
    v17 = System_Action_TypeInfo;
    if ( (System_Action_c *)v10->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v10, (System_Action_c *)v10->klass != v17) )
    {
      v8 = sub_1C22354(v10);
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_LoadEventUIEnd__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6397/*"EventUI/Prefabs/80285"*/, v18, loadParallelMax, 0LL) )
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventBoardGameTokenManager_o *v10; // x0
  const MethodInfo *v11; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_4BE03F4 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5491/*"DownloadEventUIAtlas8028500"*/);
    byte_4BE03F4 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.eventUIAssetData,
      (int64_t)assetData,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasFromAssetData = EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
                             v10,
                             assetData,
                             (System_String_o *)StringLiteral_5491/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas,
      (int64_t)UIAtlasFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc;
  v20 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_1C21DDC(p_eventUILoadCallbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
      v20->fields.original_method_info,
      *(_QWORD *)&v20->fields.extra_arg);
  }
}


void __fastcall EventBoardGameTokenManager__ReleaseEventUI(
        EventBoardGameTokenManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetData_o *eventUIAssetData; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BE03F6 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&StringLiteral_6397/*"EventUI/Prefabs/80285"*/);
    byte_4BE03F6 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6397/*"EventUI/Prefabs/80285"*/, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_39034872(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventUIAssetData, 0LL, v10, v11, v12, v13, v14, v15);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int v14; // w8
  int v15; // w11
  int32_t v16; // w23
  int v17; // w21
  int v18; // w22
  Il2CppObject *tokenPrefab; // x24
  _BOOL4 v20; // w29
  int v21; // w21
  int v22; // w19
  int v23; // w8
  float v24; // s10
  UnityEngine_GameObject_o *v25; // x24
  int64_t v26; // x25
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *v33; // x0
  bool IsHavingToken; // w26
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenEntity_o *v36; // x27
  System_Action_int__o *v37; // x28
  const MethodInfo *v38; // x5
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v48; // x8
  UnityEngine_Transform_o *v49; // x25
  UnityEngine_Transform_o *v50; // x24
  Il2CppObject *v51; // [xsp+8h] [xbp-98h]
  int v53; // [xsp+14h] [xbp-8Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE03EE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1C21E38(&Method_EventBoardGameTokenManager_checkTokenInfo__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE03EE = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1C22094(Instance, v5);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tokenList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = 0;
  v15 = 11;
  v16 = 1;
  v17 = 1;
  v18 = 1;
  v51 = MasterData_object;
  do
  {
    tokenPrefab = (Il2CppObject *)this->fields.tokenPrefab;
    v20 = v14 == 0 || v14 % v15 != 0;
    v21 = v17 ^ v20;
    if ( v20 )
      v22 = v14;
    else
      v22 = 0;
    if ( (v21 & 1) != 0 )
      v23 = 11;
    else
      v23 = 10;
    if ( (v21 & 1) != 0 )
      v24 = 0.0;
    else
      v24 = 22.0;
    v53 = v23;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  tokenPrefab,
                                  (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_37;
    v25 = (UnityEngine_GameObject_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_37;
    v26 = (int64_t)Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v5);
    entity = 0LL;
    if ( !MasterData_object )
      goto LABEL_37;
    if ( !EventBoardGameTokenMaster__TryGetEntity(
            (EventBoardGameTokenMaster_o *)MasterData_object,
            &entity,
            eventId,
            v16,
            0LL) )
      goto LABEL_23;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    v33 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v33 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)v33, v16, 0LL);
    else
LABEL_23:
      IsHavingToken = 0;
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *(_QWORD *)(v26 + 80) = eventUIDownloadAtlas;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 80), (int64_t)eventUIDownloadAtlas, v27, v28, v29, v30, v31, v32);
    v36 = entity;
    v37 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(v37, (Il2CppObject *)this, Method_EventBoardGameTokenManager_checkTokenInfo__, 0LL);
    EventBoardGameTokenItem__SetItem((EventBoardGameTokenItem_o *)v26, &item, v36, IsHavingToken, v37, v38);
    Instance = (DataManager_o *)this->fields.tokenList;
    if ( !Instance )
      goto LABEL_37;
    v45 = *(_QWORD *)&Instance->fields.m_CachedPtr;
    v46 = Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v45 )
      goto LABEL_37;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    MasterData_object = v51;
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v45 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v26,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = v45 + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v48 + 32) = v26;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 32), v26, v39, v40, v41, v42, v43, v44);
    }
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
    if ( !this->fields.parentObject )
      goto LABEL_37;
    v49 = (UnityEngine_Transform_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObject, 0LL);
    if ( !v49 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v49, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
    if ( !Instance )
      goto LABEL_37;
    v18 += !v20;
    v56.fields.y = (float)v18 * (float)-this->fields.arrangementPich.fields.y;
    v56.fields.x = v24 + (float)(this->fields.arrangementPich.fields.x * (float)v22);
    v56.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v56, 0LL);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
    v50 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4BD6BB6 )
    {
      Instance = (DataManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    if ( !v50 )
      goto LABEL_37;
    v17 = v21 ^ 1;
    UnityEngine_Transform__set_localScale(v50, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v15 = v53;
    ++v16;
    v14 = v22 + 1;
  }
  while ( v16 != 53 );
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

  if ( (byte_4BE03F7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE03F7 = 1;
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
      sub_1C22094(IsNullOrEmpty, v8);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenInfoDialog_o *v23; // x20
  const MethodInfo *v24; // x2

  if ( (byte_4BE03EF & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE03EF = 1;
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
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___),
          this->fields.tokenInfoDialog = (struct EventBoardGameTokenInfoDialog_o *)Component_object,
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.tokenInfoDialog,
            (int64_t)Component_object,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15),
          (Menu = (char *)this->fields.tokenInfoDialog) == 0LL) )
    {
LABEL_12:
      sub_1C22094(Menu, v6);
    }
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *((_QWORD *)Menu + 16) = eventUIDownloadAtlas;
    sub_1C21DDC((PartyOrganizationUtility_o *)(Menu + 128), (int64_t)eventUIDownloadAtlas, v16, v17, v18, v19, v20, v21);
  }
  Menu = (char *)this->fields.tokenList;
  if ( !Menu )
    goto LABEL_12;
  v23 = this->fields.tokenInfoDialog;
  Menu = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Menu,
                   tokenId - 1,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
  if ( !v23 )
    goto LABEL_12;
  EventBoardGameTokenInfoDialog__OpenInfo(v23, (EventBoardGameTokenItem_o *)Menu, v24);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BE03F0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE03F0 = 1;
  }
  tokenInfoDialog = this->fields.tokenInfoDialog;
  p_tokenInfoDialog = (UnityEngine_Component_o **)&this->fields.tokenInfoDialog;
  v4 = (UnityEngine_Object_o *)tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_tokenInfoDialog )
      sub_1C22094(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenInfoDialog, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    *p_tokenInfoDialog = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_tokenInfoDialog, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4BE03F8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24409/*"token_bg"*/);
    byte_4BE03F8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          _4__this->fields.bgImage,
          (System_String_o *)StringLiteral_24409/*"token_bg"*/,
          v2),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1C22094(_4__this, method);
  }
  if ( !_4__this->fields.tokenList )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, v5);
}