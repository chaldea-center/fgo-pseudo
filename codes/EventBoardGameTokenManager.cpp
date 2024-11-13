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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUIAssetData, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas, 0LL, v15, v16, v17, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventBoardGameTokenManager__CreateMenu(
        EventBoardGameTokenManager_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *parentObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Transform_o *transform; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s8
  float v18; // s9
  float v19; // s10
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19FA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19FA5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               (Il2CppObject *)prefab,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !parentObject )
    goto LABEL_13;
  v9 = parentObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  if ( !parentObject )
    goto LABEL_13;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)parentObject, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  if ( !parentObject
    || (*(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)parentObject,
                                           0LL),
        (parentObject = this->fields.parentObject) == 0LL)
    || (v17 = v14,
        v18 = v15,
        v19 = v16,
        parentObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parentObject, 0LL),
        !transform) )
  {
LABEL_13:
    sub_1BCAA3C(parentObject, v8);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)parentObject, 0LL);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v24, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v20, v21);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v25.fields.x = v17;
  v25.fields.y = v18;
  v25.fields.z = v19;
  UnityEngine_Transform__set_localScale(transform, v25, 0LL);
  return v9;
}


UIAtlas_o *__fastcall EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Object_array *ObjectList_object; // x0

  if ( (byte_4B19FA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObjectList_GameObject___, assetData, name);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v6, v7);
    this = (EventBoardGameTokenManager_o *)sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8, v9);
    byte_4B19FA9 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2EF4FF8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && *(_QWORD *)&ObjectList_object->max_length )
  {
    this = (EventBoardGameTokenManager_o *)AssetData__GetObject_object__49237568(
                                             assetData,
                                             name,
                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1BCAA3C(this, assetData);
  }
  return 0LL;
}


void __fastcall EventBoardGameTokenManager__DestoryList(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *tokenList; // x0
  struct System_Collections_Generic_List_EventBoardGameTokenItem__o **p_tokenList; // x20
  int32_t v8; // w21
  __int64 v9; // x1
  Il2CppObject *Item; // x22
  const MethodInfo *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4B19FA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19FA6 = 1;
  }
  p_tokenList = &this->fields.tokenList;
  tokenList = (System_Collections_Generic_List_object__o *)this->fields.tokenList;
  if ( tokenList )
  {
    v8 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               tokenList,
               v8,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
      {
        tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
        if ( !*p_tokenList
          || (tokenList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         tokenList,
                                                                         v8,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__)) == 0LL )
        {
LABEL_13:
          sub_1BCAA3C(tokenList, v11);
        }
        EventBoardGameTokenItem__DestroyItem((EventBoardGameTokenItem_o *)tokenList, v11);
      }
      if ( v8 == 51 )
        break;
      tokenList = (System_Collections_Generic_List_object__o *)*p_tokenList;
      ++v8;
      if ( !*p_tokenList )
        goto LABEL_13;
    }
    this->fields.tokenList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tokenList, 0LL, v12, v13, v14, v15, v16, v17);
    EventBoardGameTokenManager__closeTokenInfo(this, v18);
    EventBoardGameTokenManager__ReleaseEventUI(this, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__Init(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x3

  if ( (byte_4B19FA1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__, v6, v7);
    sub_1BCA7E0(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo, v8, v9);
    byte_4B19FA1 = 1;
  }
  v10 = sub_1BCAA2C(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = eventId;
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__,
    0LL);
  EventBoardGameTokenManager__LoadEventUI(this, v22, 1, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__LoadEventUI(
        EventBoardGameTokenManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
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
  AssetData_o *eventUIAssetData; // x0
  long double v16; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x22
  System_Delegate_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_c *v25; // x1
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x1
  const MethodInfo *v31; // x2

  if ( (byte_4B19FA7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, *(_QWORD *)&loadParallelMax);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventBoardGameTokenManager_LoadEventUIEnd__, v9, v10);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_6349/*"EventUI/Prefabs/80285"*/, v13, v14);
    byte_4B19FA7 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v18 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0LL);
  if ( v18 )
  {
    v25 = System_Action_TypeInfo;
    if ( (System_Action_c *)v18->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v18, (System_Action_c *)v18->klass != v25) )
    {
      v16 = sub_1BCACFC(v18);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg,
          v16);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0LL;
  }
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28);
    AssetLoader_LoadEndDataHandler___ctor(
      v29,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_LoadEventUIEnd__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6349/*"EventUI/Prefabs/80285"*/, v29, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      EventBoardGameTokenManager__LoadEventUIEnd(this, 0LL, v31);
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

  if ( (byte_4B19FA8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5453/*"DownloadEventUIAtlas8028500"*/, assetData, method);
    byte_4B19FA8 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1BCA784(
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
                             (System_String_o *)StringLiteral_5453/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1BCA784(
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
    sub_1BCA784(p_eventUILoadCallbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v9; // x1
  __int64 v10; // x2
  AssetData_o *eventUIAssetData; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B19FAA & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6349/*"EventUI/Prefabs/80285"*/, v9, v10);
    byte_4B19FAA = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6349/*"EventUI/Prefabs/80285"*/, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      AssetManager__releaseAsset_38505704(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUIAssetData, 0LL, v12, v13, v14, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__SetArrangement(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 Instance; // x0
  const MethodInfo *v25; // x1
  Il2CppObject *MasterData_object; // x26
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_object__o *v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  int v38; // w8
  int v39; // w11
  int32_t v40; // w23
  int v41; // w21
  int v42; // w22
  Il2CppObject *tokenPrefab; // x24
  _BOOL4 v44; // w29
  int v45; // w21
  int v46; // w19
  int v47; // w8
  float v48; // s10
  UnityEngine_GameObject_o *v49; // x24
  int64_t v50; // x25
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  Il2CppObject *v57; // x0
  bool IsHavingToken; // w26
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenEntity_o *v60; // x27
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Action_int__o *v64; // x28
  const MethodInfo *v65; // x5
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  UnityEngine_Transform_o *v76; // x25
  __int64 v77; // x2
  UnityEngine_Transform_o *v78; // x24
  Il2CppObject *v79; // [xsp+8h] [xbp-98h]
  int v81; // [xsp+14h] [xbp-8Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19FA2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, v6, v7);
    sub_1BCA7E0(&Method_EventBoardGameTokenManager_checkTokenInfo__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B19FA2 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1BCAA3C(Instance, v25);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tokenList, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v38 = 0;
  v39 = 11;
  v40 = 1;
  v41 = 1;
  v42 = 1;
  v79 = MasterData_object;
  do
  {
    tokenPrefab = (Il2CppObject *)this->fields.tokenPrefab;
    v44 = v38 == 0 || v38 % v39 != 0;
    v45 = v41 ^ v44;
    if ( v44 )
      v46 = v38;
    else
      v46 = 0;
    if ( (v45 & 1) != 0 )
      v47 = 11;
    else
      v47 = 10;
    if ( (v45 & 1) != 0 )
      v48 = 0.0;
    else
      v48 = 22.0;
    v81 = v47;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
    Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                          tokenPrefab,
                          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_37;
    v49 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_37;
    v50 = Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v25);
    entity = 0LL;
    if ( !MasterData_object )
      goto LABEL_37;
    if ( !EventBoardGameTokenMaster__TryGetEntity(
            (EventBoardGameTokenMaster_o *)MasterData_object,
            &entity,
            eventId,
            v40,
            0LL) )
      goto LABEL_23;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    v57 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v57 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)v57, v40, 0LL);
    else
LABEL_23:
      IsHavingToken = 0;
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *(_QWORD *)(v50 + 80) = eventUIDownloadAtlas;
    sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 80), (int64_t)eventUIDownloadAtlas, v51, v52, v53, v54, v55, v56);
    v60 = entity;
    v64 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v61, v62, v63);
    System_Action_int____ctor(v64, (Il2CppObject *)this, Method_EventBoardGameTokenManager_checkTokenInfo__, 0LL);
    EventBoardGameTokenItem__SetItem((EventBoardGameTokenItem_o *)v50, &item, v60, IsHavingToken, v64, v65);
    Instance = (__int64)this->fields.tokenList;
    if ( !Instance )
      goto LABEL_37;
    v72 = *(_QWORD *)(Instance + 16);
    v73 = Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v72 )
      goto LABEL_37;
    v74 = *(int *)(Instance + 24);
    MasterData_object = v79;
    if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v50,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = v72 + 8 * v74;
      *(_DWORD *)(Instance + 24) = v74 + 1;
      *(_QWORD *)(v75 + 32) = v50;
      sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 32), v50, v66, v67, v68, v69, v70, v71);
    }
    Instance = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
    if ( !this->fields.parentObject )
      goto LABEL_37;
    v76 = (UnityEngine_Transform_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform(this->fields.parentObject, 0LL);
    if ( !v76 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v76, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
    if ( !Instance )
      goto LABEL_37;
    v42 += !v44;
    v84.fields.y = (float)v42 * (float)-this->fields.arrangementPich.fields.y;
    v84.fields.x = v48 + (float)(this->fields.arrangementPich.fields.x * (float)v46);
    v84.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v84, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
    v78 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4B109C6 )
    {
      Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v25, v77);
      byte_4B109C6 = 1;
    }
    if ( !v78 )
      goto LABEL_37;
    v41 = v45 ^ 1;
    UnityEngine_Transform__set_localScale(v78, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v39 = v81;
    ++v40;
    v38 = v46 + 1;
  }
  while ( v40 != 53 );
}


bool __fastcall EventBoardGameTokenManager__SetEventUI(
        EventBoardGameTokenManager_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v10; // w21

  v4 = spriteName;
  if ( (byte_4B19FAB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, spriteName);
    byte_4B19FAB = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(v4, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, v4, 0LL);
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
          v4 = 0LL;
          v10 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1BCAA3C(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  v4 = 0LL;
LABEL_9:
  v10 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, v4, 0LL);
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__checkTokenInfo(
        EventBoardGameTokenManager_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *tokenInfoDialog; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  char *Menu; // x0
  Il2CppObject *Component_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UIAtlas_o *eventUIDownloadAtlas; // x1
  EventBoardGameTokenInfoDialog_o *v27; // x20
  const MethodInfo *v28; // x2

  if ( (byte_4B19FA3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___,
      *(_QWORD *)&tokenId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B19FA3 = 1;
  }
  tokenInfoDialog = (UnityEngine_Object_o *)this->fields.tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&tokenId);
  if ( UnityEngine_Object__op_Equality(tokenInfoDialog, 0LL, 0LL) )
  {
    Menu = (char *)EventBoardGameTokenManager__CreateMenu(this, this->fields.tokenInfoDialogPrefab, v11);
    if ( !Menu
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Menu,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___),
          this->fields.tokenInfoDialog = (struct EventBoardGameTokenInfoDialog_o *)Component_object,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.tokenInfoDialog,
            (int64_t)Component_object,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19),
          (Menu = (char *)this->fields.tokenInfoDialog) == 0LL) )
    {
LABEL_12:
      sub_1BCAA3C(Menu, v10);
    }
    eventUIDownloadAtlas = this->fields.eventUIDownloadAtlas;
    *((_QWORD *)Menu + 16) = eventUIDownloadAtlas;
    sub_1BCA784((PartyOrganizationUtility_o *)(Menu + 128), (int64_t)eventUIDownloadAtlas, v20, v21, v22, v23, v24, v25);
  }
  Menu = (char *)this->fields.tokenList;
  if ( !Menu )
    goto LABEL_12;
  v27 = this->fields.tokenInfoDialog;
  Menu = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Menu,
                   tokenId - 1,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
  if ( !v27 )
    goto LABEL_12;
  EventBoardGameTokenInfoDialog__OpenInfo(v27, (EventBoardGameTokenItem_o *)Menu, v28);
}


void __fastcall EventBoardGameTokenManager__closeTokenInfo(
        EventBoardGameTokenManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_tokenInfoDialog; // x19
  UnityEngine_Object_o *v5; // x20
  struct EventBoardGameTokenInfoDialog_o *tokenInfoDialog; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B19FA4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19FA4 = 1;
  }
  tokenInfoDialog = this->fields.tokenInfoDialog;
  p_tokenInfoDialog = (UnityEngine_Component_o **)&this->fields.tokenInfoDialog;
  v5 = (UnityEngine_Object_o *)tokenInfoDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    if ( !*p_tokenInfoDialog )
      sub_1BCAA3C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenInfoDialog, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_tokenInfoDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_tokenInfoDialog, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  struct EventBoardGameTokenManager_o *_4__this; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B19FAC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24227/*"token_bg"*/, method, v2);
    byte_4B19FAC = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          _4__this->fields.bgImage,
          (System_String_o *)StringLiteral_24227/*"token_bg"*/,
          v3),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  if ( !_4__this->fields.tokenList )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, v6);
}