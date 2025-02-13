void __fastcall BattlePerformanceBg___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDF541 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceBg_TypeInfo);
    sub_1C21E38(&StringLiteral_19993/*"front"*/);
    byte_4BDF541 = 1;
  }
  BattlePerformanceBg_TypeInfo->static_fields->Frontfile = (struct System_String_o *)StringLiteral_19993/*"front"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattlePerformanceBg_TypeInfo->static_fields,
    StringLiteral_19993/*"front"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_Dictionary_object__object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BDF540 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    byte_4BDF540 = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.loadedChangeBgList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.initLoadedBgPath,
    (int64_t)Empty,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bgSpShadowList, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v25,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.historyBgState, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v32;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bgInfoList, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceBg__AddCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        System_Action_BattlePerformanceBg_ChangedBgArgs__o *callback,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_onLoadBgFinished; // x19
  System_Delegate_o *onLoadBgFinished; // t1
  System_Delegate_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Delegate_o *v14; // x20
  __int64 v15; // x0
  int64_t v16; // x1

  if ( (byte_4BDF53E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
    byte_4BDF53E = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (PartyOrganizationUtility_o *)&this->fields.onLoadBgFinished;
  v7 = System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0LL);
  if ( !v7 )
    goto LABEL_7;
  v14 = v7;
  v15 = sub_1C21F74(v7, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
  if ( !v15
    || (p_onLoadBgFinished->klass = (PartyOrganizationUtility_c *)v15,
        (v16 = sub_1C21F74(v14, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo)) == 0) )
  {
    sub_1C22354(v14);
LABEL_7:
    v16 = 0LL;
    p_onLoadBgFinished->klass = 0LL;
  }
  sub_1C21DDC(p_onLoadBgFinished, v16, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__AddChangeBgInfo(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  BattlePerformanceBg_BgInfo_o *v21; // x0
  Il2CppObject *v22; // x20
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4BDF531 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceBg_BgInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
    byte_4BDF531 = 1;
  }
  v21 = (BattlePerformanceBg_BgInfo_o *)sub_1C22084(BattlePerformanceBg_BgInfo_TypeInfo);
  v35.fields.x = v17;
  v35.fields.y = v16;
  v35.fields.z = v15;
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v22 = (Il2CppObject *)v21;
  BattlePerformanceBg_BgInfo___ctor(v21, No, tp, v35, v36, changeDirect, parentCamera, callback, 0LL);
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (items = bgInfoList->fields._items,
        v32 = Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__,
        ++bgInfoList->fields._version,
        !items) )
  {
    sub_1C22094(bgInfoList, v23);
  }
  size = bgInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgInfoList,
      v22,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    bgInfoList->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v22, v24, v25, v26, v27, v28, v29);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ChangeBg(
        BattlePerformanceBg_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *curBg,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x6

  if ( !curBg )
    sub_1C22094(this, 0LL);
  BattlePerformanceBg__changeBg(
    this,
    *((_DWORD *)&curBg->fields.isActive + 1),
    curBg->fields.id,
    pos,
    rot,
    changeDirect,
    parentCamera,
    callback,
    v8);
}


void __fastcall BattlePerformanceBg__ClearCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.onLoadBgFinished = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.onLoadBgFinished, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg__DebugPrint(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_1C22094(this, data);
}


bool __fastcall BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_4BDF532 & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_1C21E38(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__);
    byte_4BDF532 = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_1C22094(this, method);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *__fastcall BattlePerformanceBg__FetchBgInfo(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  System_Collections_Generic_List_object__o *v5; // x8
  BattlePerformanceBg_BgInfo_o *v6; // x19

  if ( (byte_4BDF533 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__);
    byte_4BDF533 = 1;
  }
  if ( !BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
    return 0LL;
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (bgInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bgInfoList,
                                                                    0,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__),
        (v5 = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList) == 0LL) )
  {
    sub_1C22094(bgInfoList, v3);
  }
  v6 = (BattlePerformanceBg_BgInfo_o *)bgInfoList;
  System_Collections_Generic_List_object___RemoveAt(
    v5,
    0,
    (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v6;
}


BattleBgComponent_o *__fastcall BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
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
  const MethodInfo *v14; // x2
  System_Object_array *BattleBgComponents; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_4BDF53B & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Find_BattleBgComponent___);
    sub_1C21E38(&System_Func_BattleBgComponent__bool__TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__);
    sub_1C21E38(&BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
    byte_4BDF53B = 1;
  }
  v5 = sub_1C22084(BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass70_0___ctor((BattlePerformanceBg___c__DisplayClass70_0_o *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = key;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)key, v8, v9, v10, v11, v12, v13);
  BattleBgComponents = (System_Object_array *)BattlePerformanceBg__getBattleBgComponents(this, 0, v14);
  v16 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleBgComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__,
    0LL);
  return (BattleBgComponent_o *)BasicHelper__Find_object_(
                                  BattleBgComponents,
                                  (System_Func_T__bool__o *)v16,
                                  (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_BattleBgComponent___);
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__GetBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BgResourceData_o *BgResource; // x0
  __int64 v6; // x1
  System_String_o *v7; // x1
  System_String_o *v8; // x0
  Il2CppObject *v9; // x20
  Il2CppObject *Object_object__49880776; // x20
  Il2CppObject *v12; // x19
  Il2CppObject *v13; // x19
  int32_t Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDF535 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17454/*"bg"*/);
    sub_1C21E38(&StringLiteral_17457/*"bg0"*/);
    byte_4BDF535 = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    sub_1C22094(0LL, v6);
  Type_k__BackingField = BgResource->fields._Type_k__BackingField;
  if ( Type_k__BackingField < 1 )
  {
    if ( !data )
      sub_1C22094(BgResource, v6);
    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                data,
                                (System_String_o *)StringLiteral_17454/*"bg"*/,
                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__49880776,
                                           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v13 = AssetData__GetObject_object__49880776(
              data,
              (System_String_o *)StringLiteral_17457/*"bg0"*/,
              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v13,
                                           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v7 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0LL);
    v8 = System_String__Concat_63115476((System_String_o *)StringLiteral_17454/*"bg"*/, v7, 0LL);
    if ( !data )
      sub_1C22094(v8, v8);
    v9 = AssetData__GetObject_object__49880776(
           data,
           v8,
           (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v9,
                                           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v12 = AssetData__GetObject_object__49880776(
              data,
              (System_String_o *)StringLiteral_17454/*"bg"*/,
              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v12,
                                           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__GetFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  void *BgResource; // x0
  __int64 v6; // x1
  int v7; // w22
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  Il2CppObject *Object_object__49880776; // x20
  BattlePerformanceBg_c *v11; // x0
  bool v12; // w8
  UnityEngine_GameObject_o *result; // x0
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDF536 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&BattlePerformanceBg_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF536 = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    goto LABEL_21;
  v7 = *((_DWORD *)BgResource + 5);
  BgResource = BattlePerformanceBg_TypeInfo;
  v14 = v7;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    BgResource = BattlePerformanceBg_TypeInfo;
  }
  v8 = (System_String_o *)**((_QWORD **)BgResource + 23);
  if ( v7 >= 1 )
  {
    v9 = System_Int32__ToString((int32_t)&v14, 0LL);
    BgResource = System_String__Concat_63115476(v8, v9, 0LL);
    v8 = (System_String_o *)BgResource;
  }
  if ( !data )
LABEL_21:
    sub_1C22094(BgResource, v6);
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              data,
                              v8,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
    goto LABEL_24;
  v11 = BattlePerformanceBg_TypeInfo;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v11 = BattlePerformanceBg_TypeInfo;
  }
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              data,
                              v11->static_fields->Frontfile,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL);
  result = 0LL;
  if ( v12 )
  {
LABEL_24:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__49880776,
                                         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


UnityEngine_Texture2D_o *__fastcall BattlePerformanceBg__GetShadowTexture(
        BattlePerformanceBg_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  AssetData_o *BgAssetData; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = shadowId;
  if ( (byte_4BDF539 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&StringLiteral_23673/*"shadow_"*/);
    byte_4BDF539 = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0LL;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63115476((System_String_o *)StringLiteral_23673/*"shadow_"*/, v5, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49880776(
                                      BgAssetData,
                                      v6,
                                      (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
}


void __fastcall BattlePerformanceBg__InitLoadBgInfo(
        BattlePerformanceBg_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  BgResourceData_o *v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDF52C & 1) == 0 )
  {
    sub_1C21E38(&BgResourceData_TypeInfo);
    byte_4BDF52C = 1;
  }
  this->fields.loadbgno = bgId;
  this->fields.loadbgType = bgType;
  v7 = (BgResourceData_o *)sub_1C22084(BgResourceData_TypeInfo);
  BgResourceData___ctor(v7, bgId, bgType, 0LL);
  this->fields.cachedBgResource = v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.cachedBgResource, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BattlePerformanceBg__LoadBgSpShadowEffect(
        BattlePerformanceBg_o *this,
        int32_t bgId,
        int32_t bgType,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t v24; // w20
  int32_t v25; // w21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x5

  if ( (byte_4BDF52D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__);
    sub_1C21E38(&BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
    byte_4BDF52D = 1;
  }
  v9 = sub_1C22084(BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass48_0___ctor((BattlePerformanceBg___c__DisplayClass48_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = bgId;
  *(_DWORD *)(v9 + 28) = bgType;
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)finishCallback, v18, v19, v20, v21, v22, v23);
  v24 = *(_DWORD *)(v9 + 24);
  v25 = *(_DWORD *)(v9 + 28);
  v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__,
    0LL);
  BattlePerformanceBg__LoadBgSpShadowEffectLocal(this, v24, v25, 1, v26, v27);
}


void __fastcall BattlePerformanceBg__LoadBgSpShadowEffectLocal(
        BattlePerformanceBg_o *this,
        int32_t battleBgId,
        int32_t battleBgType,
        bool isEnemySide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v11; // x19
  BattleBgMaster_o *Master_object; // x0
  Il2CppObject *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v21; // w21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v31; // x8
  System_String_o *v32; // x20
  AssetLoader_LoadEndDataHandler_o *v33; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDF52E & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__);
    sub_1C21E38(&BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
    byte_4BDF52E = 1;
  }
  effectPath = 0LL;
  v11 = sub_1C22084(BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass49_0___ctor((BattlePerformanceBg___c__DisplayClass49_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_23;
  *(_QWORD *)(v11 + 16) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BattleBgMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_23;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(
                              Master_object,
                              battleBgId,
                              battleBgType,
                              isEnemySide,
                              0,
                              0LL);
  if ( BgSpecialShadowEffectId <= 0 )
    goto LABEL_13;
  v21 = BgSpecialShadowEffectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v21, 0LL) )
    goto LABEL_13;
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object )
    goto LABEL_23;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)Master_object,
         (Il2CppObject *)effectPath,
         (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_13:
    ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0LL);
    return;
  }
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object
    || (v13 = (Il2CppObject *)effectPath,
        v28 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v29 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v28) )
  {
LABEL_23:
    sub_1C22094(Master_object, v13);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v28 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v13,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = v28 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v31 + 32) = v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v13, v22, v23, v24, v25, v26, v27);
  }
  v32 = effectPath;
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v11,
    Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v32, v33, 1, 0LL);
}


void __fastcall BattlePerformanceBg__OnEndBgLoad(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattlePerformanceBg_BgInfo_o *BgInfo; // x0
  const MethodInfo *v5; // x6

  this->fields.IsLoading = 0;
  if ( BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
  {
    BgInfo = BattlePerformanceBg__FetchBgInfo(this, v3);
    if ( BgInfo )
      BattlePerformanceBg__changeBg(
        this,
        BgInfo->fields.bgNo,
        BgInfo->fields.tp,
        BgInfo->fields.pos,
        BgInfo->fields.rot,
        BgInfo->fields.changeDirect,
        BgInfo->fields.parentCamera,
        BgInfo->fields.callback,
        v5);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBg(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UnityEngine_GameObject_o **p_bgobject; // x20
  UnityEngine_Object_o *bgobject; // x21
  UnityEngine_Object_o *frontobject; // x21
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v16; // x1
  BattleActionCamera_o *v17; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BDF526 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF526 = 1;
  }
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  p_bgobject = &this->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_9;
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_9:
    v7 = (UnityEngine_Object_o *)*p_bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    {
      v8 = (UnityEngine_Object_o *)*p_bgobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v8, 0LL);
      *p_bgobject = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bgobject, 0LL, v9, v10, v11, v12, v13, v14);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      v17 = this->fields.actionCamera;
      if ( !v17 )
        sub_1C22094(0LL, v16);
      BattleActionCamera__stopCameraAnimation(v17, 0LL);
    }
    p_frontobject = &this->fields.frontobject;
    v19 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    {
      v21 = (UnityEngine_Object_o *)*p_frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v21, 0LL);
      *p_frontobject = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.frontobject, 0LL, v22, v23, v24, v25, v26, v27);
    }
    BattlePerformanceBg__ReleaseBgAsset(this, this->fields.nowBgAssetPath, v20);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgAsset(
        BattlePerformanceBg_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDF529 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4BDF529 = 1;
  }
  if ( !System_String__IsNullOrEmpty(path, 0LL) )
  {
    loadedChangeBgList = this->fields.loadedChangeBgList;
    if ( loadedChangeBgList )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)loadedChangeBgList,
              (Il2CppObject *)path,
              (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_8:
        this->fields.BgAssetData = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.BgAssetData, 0LL, v7, v8, v9, v10, v11, v12);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(path, 0LL);
        return;
      }
      loadedChangeBgList = this->fields.loadedChangeBgList;
      if ( loadedChangeBgList )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadedChangeBgList,
          (Il2CppObject *)path,
          (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_8;
      }
    }
    sub_1C22094(loadedChangeBgList, v5);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF52A & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4BDF52A = 1;
  }
  memset(&v8, 0, sizeof(v8));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)bgSpShadowList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v5 = this->fields.bgSpShadowList;
  if ( !v5 )
LABEL_13:
    sub_1C22094(bgSpShadowList, method);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0LL);
}


void __fastcall BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF528 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4BDF528 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)loadedChangeBgList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_39034872(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.loadedChangeBgList;
  if ( !v6 )
LABEL_16:
    sub_1C22094(loadedChangeBgList, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
}


void __fastcall BattlePerformanceBg__ResetBgAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  BattleBgComponent_array *v7; // x19
  unsigned __int64 v8; // x21
  UnityEngine_Object_o *v9; // x20

  if ( (byte_4BDF53F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF53F = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_15:
    sub_1C22094(BattleBgComponents, v5);
  v6 = *(_QWORD *)&BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1C2209C(BattleBgComponents, v5);
      v9 = (UnityEngine_Object_o *)v7->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      BattleBgComponents = (BattleBgComponent_array *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)BattleBgComponents & 1) == 0 )
      {
        if ( !v9 )
          goto LABEL_15;
        BattleBgComponent__ResetAnimation((BattleBgComponent_o *)v9, 0LL);
      }
      LODWORD(v6) = v7->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v6 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__UpdateColor(
        BattlePerformanceBg_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  UnityEngine_RenderSettings__set_ambientLight(color, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__changeBg(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  PartyListViewItem_o *v9; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  struct System_Action_o **p_EndCallback; // x25
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  char v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Object_array *v35; // x20
  __int64 v36; // x0
  int64_t v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int64_t v41; // x2
  char v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x21
  int64_t v48; // x2
  char v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  int64_t v57; // x2
  char v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x21
  int64_t v64; // x2
  char v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int64_t v73; // x2
  char v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x21
  int64_t v80; // x2
  char v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  char v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  char v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x2
  char v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Collections_Hashtable_o *v104; // x0
  __int64 v105; // x0
  __int128 v106; // [xsp+0h] [xbp-A0h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-90h] BYREF
  int v108; // [xsp+5Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  if ( (byte_4BDF534 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Color_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_19326/*"endChangeColor"*/);
    sub_1C21E38(&StringLiteral_15446/*"UpdateColor"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF534 = 1;
  }
  if ( this->fields.IsLoading )
  {
    v109.fields.x = v18;
    v109.fields.y = v17;
    v109.fields.z = v16;
    v110.fields.x = x;
    v110.fields.y = y;
    v110.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v109, v110, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.EndCallback,
    (int64_t)callback,
    *(int64_t *)&tp,
    changeDirect,
    (System_String_o *)parentCamera,
    (BattleSetupInfo_o *)callback,
    (FollowerInfo_o *)method,
    v9);
  if ( this->fields.fade && !changeDirect )
  {
    if ( *p_EndCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*p_EndCallback)->fields.m_target)(
        (*p_EndCallback)->fields.original_method_info,
        *(_QWORD *)&(*p_EndCallback)->fields.extra_arg);
    BattlePerformanceBg__OnEndBgLoad(this, v23);
    return;
  }
  BattlePerformanceBg__InitLoadBgInfo(this, No, tp, v24);
  this->fields.changeDirect = changeDirect;
  this->fields.parentCamera = parentCamera;
  this->fields.pos.fields.x = v18;
  this->fields.pos.fields.y = v17;
  this->fields.pos.fields.z = v16;
  this->fields.rot.fields.x = x;
  this->fields.rot.fields.y = y;
  this->fields.rot.fields.z = z;
  this->fields.fade = 1;
  if ( changeDirect )
  {
    BattlePerformanceBg__endChangeColor(this, v25);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27 = sub_1C21EE0(object___TypeInfo, 10LL);
  if ( !v27 )
    sub_1C22094(0LL, v28);
  v35 = (System_Object_array *)v27;
  v36 = StringLiteral_19990/*"from"*/;
  if ( StringLiteral_19990/*"from"*/ )
  {
    v36 = sub_1C21F74(StringLiteral_19990/*"from"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v37 = StringLiteral_19990/*"from"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( !v35->max_length )
    goto LABEL_60;
  v35->m_Items[0] = (Il2CppObject *)v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)v35->m_Items, v37, v29, v30, v31, v32, v33, v34);
  tmpcolor = this->fields.tmpcolor;
  v36 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v38, v39, v40);
  v47 = v36;
  if ( v36 )
  {
    v36 = sub_1C21F74(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_60;
  v35->m_Items[1] = (Il2CppObject *)v47;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[1], v47, v41, v42, v43, v44, v45, v46);
  v36 = StringLiteral_24401/*"to"*/;
  if ( StringLiteral_24401/*"to"*/ )
  {
    v36 = sub_1C21F74(StringLiteral_24401/*"to"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v37 = StringLiteral_24401/*"to"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_60;
  v35->m_Items[2] = (Il2CppObject *)v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[2], v37, v48, v49, v50, v51, v52, v53);
  v106 = xmmword_BFF330;
  v36 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v106, v54, v55, v56);
  v63 = v36;
  if ( v36 )
  {
    v36 = sub_1C21F74(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_60;
  v35->m_Items[3] = (Il2CppObject *)v63;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[3], v63, v57, v58, v59, v60, v61, v62);
  v36 = StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v36 = sub_1C21F74(StringLiteral_24360/*"time"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v37 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 4 )
    goto LABEL_60;
  v35->m_Items[4] = (Il2CppObject *)v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[4], v37, v64, v65, v66, v67, v68, v69);
  v108 = 1056964608;
  v36 = j_il2cpp_value_box_0(float_TypeInfo, &v108, v70, v71, v72);
  v79 = v36;
  if ( v36 )
  {
    v36 = sub_1C21F74(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
    {
LABEL_61:
      v105 = sub_1C220B8(v36);
      sub_1C21F60(v105, 0LL);
    }
  }
  if ( v35->max_length <= 5 )
    goto LABEL_60;
  v35->m_Items[5] = (Il2CppObject *)v79;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[5], v79, v73, v74, v75, v76, v77, v78);
  v36 = StringLiteral_22688/*"onupdate"*/;
  if ( StringLiteral_22688/*"onupdate"*/ )
  {
    v36 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v37 = StringLiteral_22688/*"onupdate"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 6 )
    goto LABEL_60;
  v35->m_Items[6] = (Il2CppObject *)v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[6], v37, v80, v81, v82, v83, v84, v85);
  v36 = StringLiteral_15446/*"UpdateColor"*/;
  if ( StringLiteral_15446/*"UpdateColor"*/ )
  {
    v36 = sub_1C21F74(StringLiteral_15446/*"UpdateColor"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v37 = StringLiteral_15446/*"UpdateColor"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 7 )
    goto LABEL_60;
  v35->m_Items[7] = (Il2CppObject *)v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[7], v37, v86, v87, v88, v89, v90, v91);
  v36 = StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v36 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v37 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 8 )
    goto LABEL_60;
  v35->m_Items[8] = (Il2CppObject *)v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[8], v37, v92, v93, v94, v95, v96, v97);
  v36 = StringLiteral_19326/*"endChangeColor"*/;
  if ( StringLiteral_19326/*"endChangeColor"*/ )
  {
    v36 = sub_1C21F74(StringLiteral_19326/*"endChangeColor"*/, v35->obj.klass->_1.element_class);
    if ( v36 )
    {
      v37 = StringLiteral_19326/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_61;
  }
  v37 = 0LL;
LABEL_56:
  if ( v35->max_length <= 9 )
LABEL_60:
    sub_1C2209C(v36, v37);
  v35->m_Items[9] = (Il2CppObject *)v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[9], v37, v98, v99, v100, v101, v102, v103);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v104 = iTween__Hash(v35, 0LL);
  iTween__ValueTo(gameObject, v104, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 BgObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct BattlePerformanceBg_BgState_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v22; // x21
  UnityEngine_Transform_o *v23; // x22
  UnityEngine_Transform_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v33; // x2
  UnityEngine_Transform_o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v45; // w23
  BattlePerformanceBg_ChangedBgArgs_o *v46; // x24
  const MethodInfo *v47; // x1
  struct System_Action_o *EndCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Object_array *v56; // x21
  __int64 v57; // x0
  int64_t v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x19
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x19
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_Collections_Hashtable_o *v125; // x0
  __int64 v126; // x0
  int v127; // [xsp+Ch] [xbp-64h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-60h] BYREF
  __int128 v129; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDF537 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_1C21E38(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    sub_1C21E38(&UnityEngine_Color_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_19326/*"endChangeColor"*/);
    sub_1C21E38(&StringLiteral_15446/*"UpdateColor"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF537 = 1;
  }
  this->fields.BgAssetData = data;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.BgAssetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    goto LABEL_82;
  v13 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v12);
  this->fields.nowBgState = v13;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.nowBgState, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  BgObject = (__int64)BattlePerformanceBg__GetBgObject(this, data, v20);
  if ( !BgObject )
    goto LABEL_82;
  parentCamera = this->fields.parentCamera;
  v22 = (UnityEngine_GameObject_o *)BgObject;
  BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)BgObject, 0LL);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
    v23 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4BD6BB1 )
    {
      BgObject = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    if ( !v23 )
      goto LABEL_82;
    UnityEngine_Transform__set_eulerAngles(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
  if ( !BgObject )
    goto LABEL_82;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
  v24 = (UnityEngine_Transform_o *)BgObject;
  if ( !byte_4BD6BB6 )
  {
    BgObject = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v24 )
    goto LABEL_82;
  UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this->fields.bgobject = v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bgobject, (int64_t)v22, v25, v26, v27, v28, v29, v30);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(this, data, v31);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  BgObject = UnityEngine_Object__op_Inequality(FrontObject, 0LL, 0LL);
  if ( (BgObject & 1) != 0 )
  {
    if ( !FrontObject )
      goto LABEL_82;
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0LL);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0LL);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0LL);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0LL);
    v34 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4BD6BB6 )
    {
      BgObject = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    if ( !v34 )
      goto LABEL_82;
    UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.frontobject,
      (int64_t)FrontObject,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (__int64)BattlePerformanceBg__getBattleBgComponents(this, 0, v33);
  if ( !nowBgState )
    goto LABEL_82;
  BattlePerformanceBg_BgState__loadSaveData(
    nowBgState,
    (BattleBgComponent_array *)BgObject,
    this->fields.actionCamera,
    0LL);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v45 = this->fields.parentCamera;
  v46 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_1C22084(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  BattlePerformanceBg_ChangedBgArgs___ctor(v46, loadbgno, loadbgType, v45, 0LL);
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v46,
    (const MethodInfo_2F02610 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    v130.fields.r = 1.0;
    v130.fields.g = 1.0;
    v130.fields.b = 1.0;
    v130.fields.a = 1.0;
    this->fields.fade = 0;
    UnityEngine_RenderSettings__set_ambientLight(v130, 0LL);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
        EndCallback->fields.original_method_info,
        *(_QWORD *)&EndCallback->fields.extra_arg);
    BattlePerformanceBg__OnEndBgLoad(this, v47);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BgObject = sub_1C21EE0(object___TypeInfo, 10LL);
  if ( !BgObject )
LABEL_82:
    sub_1C22094(BgObject, v11);
  v56 = (System_Object_array *)BgObject;
  v57 = StringLiteral_19990/*"from"*/;
  if ( StringLiteral_19990/*"from"*/ )
  {
    v57 = sub_1C21F74(StringLiteral_19990/*"from"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v58 = StringLiteral_19990/*"from"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( !v56->max_length )
    goto LABEL_83;
  v56->m_Items[0] = (Il2CppObject *)v58;
  sub_1C21DDC((PartyOrganizationUtility_o *)v56->m_Items, v58, v50, v51, v52, v53, v54, v55);
  v129 = xmmword_BFF330;
  v57 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v129, v59, v60, v61);
  v68 = v57;
  if ( v57 )
  {
    v57 = sub_1C21F74(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
  }
  if ( v56->max_length <= 1 )
    goto LABEL_83;
  v56->m_Items[1] = (Il2CppObject *)v68;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->m_Items[1], v68, v62, v63, v64, v65, v66, v67);
  v57 = StringLiteral_24401/*"to"*/;
  if ( StringLiteral_24401/*"to"*/ )
  {
    v57 = sub_1C21F74(StringLiteral_24401/*"to"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v58 = StringLiteral_24401/*"to"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v56->max_length <= 2 )
    goto LABEL_83;
  v56->m_Items[2] = (Il2CppObject *)v58;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->m_Items[2], v58, v69, v70, v71, v72, v73, v74);
  tmpcolor = this->fields.tmpcolor;
  v57 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v75, v76, v77);
  v84 = v57;
  if ( v57 )
  {
    v57 = sub_1C21F74(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
  }
  if ( v56->max_length <= 3 )
    goto LABEL_83;
  v56->m_Items[3] = (Il2CppObject *)v84;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->m_Items[3], v84, v78, v79, v80, v81, v82, v83);
  v57 = StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v57 = sub_1C21F74(StringLiteral_24360/*"time"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v58 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v56->max_length <= 4 )
    goto LABEL_83;
  v56->m_Items[4] = (Il2CppObject *)v58;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->m_Items[4], v58, v85, v86, v87, v88, v89, v90);
  v127 = 1056964608;
  v57 = j_il2cpp_value_box_0(float_TypeInfo, &v127, v91, v92, v93);
  v100 = v57;
  if ( v57 )
  {
    v57 = sub_1C21F74(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
    {
LABEL_84:
      v126 = sub_1C220B8(v57);
      sub_1C21F60(v126, 0LL);
    }
  }
  if ( v56->max_length <= 5 )
    goto LABEL_83;
  v56->m_Items[5] = (Il2CppObject *)v100;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->m_Items[5], v100, v94, v95, v96, v97, v98, v99);
  v57 = StringLiteral_22688/*"onupdate"*/;
  if ( StringLiteral_22688/*"onupdate"*/ )
  {
    v57 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v58 = StringLiteral_22688/*"onupdate"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v56->max_length <= 6 )
    goto LABEL_83;
  v56->m_Items[6] = (Il2CppObject *)v58;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->m_Items[6], v58, v101, v102, v103, v104, v105, v106);
  v57 = StringLiteral_15446/*"UpdateColor"*/;
  if ( StringLiteral_15446/*"UpdateColor"*/ )
  {
    v57 = sub_1C21F74(StringLiteral_15446/*"UpdateColor"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v58 = StringLiteral_15446/*"UpdateColor"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v56->max_length <= 7 )
    goto LABEL_83;
  v56->m_Items[7] = (Il2CppObject *)v58;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->m_Items[7], v58, v107, v108, v109, v110, v111, v112);
  v57 = StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v57 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v58 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v56->max_length <= 8 )
    goto LABEL_83;
  v56->m_Items[8] = (Il2CppObject *)v58;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->m_Items[8], v58, v113, v114, v115, v116, v117, v118);
  v57 = StringLiteral_19326/*"endChangeColor"*/;
  if ( StringLiteral_19326/*"endChangeColor"*/ )
  {
    v57 = sub_1C21F74(StringLiteral_19326/*"endChangeColor"*/, v56->obj.klass->_1.element_class);
    if ( v57 )
    {
      v58 = StringLiteral_19326/*"endChangeColor"*/;
      goto LABEL_78;
    }
    goto LABEL_84;
  }
  v58 = 0LL;
LABEL_78:
  if ( v56->max_length <= 9 )
LABEL_83:
    sub_1C2209C(v57, v58);
  v56->m_Items[9] = (Il2CppObject *)v58;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->m_Items[9], v58, v119, v120, v121, v122, v123, v124);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v125 = iTween__Hash(v56, 0LL);
  iTween__ValueTo(gameObject, v125, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int32_t fade; // w8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  BgResourceData_o *BgResource; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21
  struct System_Action_o *EndCallback; // x8
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BgResourceData_Fields fields; // x8
  _QWORD *v18; // x9
  __int64 klass_low; // x10
  __int64 v20; // x8
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDF538 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceBg_endChangeBg__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4BDF538 = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    v22.fields.r = 0.0;
    v22.fields.g = 0.0;
    v22.fields.b = 0.0;
    v22.fields.a = 1.0;
    UnityEngine_RenderSettings__set_ambientLight(v22, 0LL);
    BattlePerformanceBg__ReleaseBg(this, v4);
    BgResource = BattlePerformanceBg__get_BgResource(this, v5);
    if ( BgResource )
    {
      BgResource = (BgResourceData_o *)BgResourceData__get_AssetPath(BgResource, 0LL);
      if ( this->fields.loadedChangeBgList )
      {
        v8 = (System_String_o *)BgResource;
        if ( System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)this->fields.loadedChangeBgList,
               (Il2CppObject *)BgResource,
               (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getAsset_39033884(v8, v9, 0LL) )
            return;
LABEL_21:
          v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v21,
            (Il2CppObject *)this,
            Method_BattlePerformanceBg_endChangeBg__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v8, v21, 1, 0LL);
          return;
        }
        if ( !System_String__op_Inequality(v8, this->fields.initLoadedBgPath, 0LL) )
          goto LABEL_21;
        BgResource = (BgResourceData_o *)this->fields.loadedChangeBgList;
        if ( BgResource )
        {
          fields = BgResource->fields;
          v18 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(BgResource[1].klass);
          if ( fields )
          {
            klass_low = SLODWORD(BgResource[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)BgResource,
                (Il2CppObject *)v8,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = *(_QWORD *)&fields + 8 * klass_low;
              LODWORD(BgResource[1].klass) = klass_low + 1;
              *(_QWORD *)(v20 + 32) = v8;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v8, v11, v12, v13, v14, v15, v16);
            }
            goto LABEL_21;
          }
        }
      }
    }
    sub_1C22094(BgResource, v7);
  }
  EndCallback = this->fields.EndCallback;
  this->fields.fade = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
  BattlePerformanceBg__OnEndBgLoad(this, method);
}


void __fastcall BattlePerformanceBg__endloadBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x4

  if ( (byte_4BDF52F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__);
    sub_1C21E38(&BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
    byte_4BDF52F = 1;
  }
  v5 = sub_1C22084(BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass50_0___ctor((BattlePerformanceBg___c__DisplayClass50_0_o *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = data;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)data, v14, v15, v16, v17, v18, v19);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v5, Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__, 0LL);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v22, v23);
}


void __fastcall BattlePerformanceBg__endloadBgAll(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *v4; // x19
  BattlePerformanceBg_BgState_o *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_Object_o *v21; // x22
  UnityEngine_Object_o *v22; // x22
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Object_o *v24; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  _BOOL4 parentCamera; // w23
  BattlePerformanceBg_o *v29; // x22
  BattlePerformanceBg_o *v30; // x23
  BattlePerformanceBg_o *v31; // x23
  struct System_String_o *name; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *v46; // x20
  const MethodInfo *v47; // x2
  BattlePerformanceBg_o *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v59; // w19
  BattlePerformanceBg_ChangedBgArgs_o *v60; // x23

  v4 = this;
  if ( (byte_4BDF530 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_1C21E38(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    this = (BattlePerformanceBg_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF530 = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_55;
  v5 = BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.nowBgState, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  p_bgobject = (UnityEngine_Object_o **)&v4->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)v4->fields.bgobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_10;
  frontobject = (UnityEngine_Object_o *)v4->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_10:
    v21 = *p_bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      v22 = *p_bgobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v22, 0LL);
    }
    v23 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      v24 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v24, 0LL);
    }
    actionCamera = (UnityEngine_Object_o *)v4->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      this = (BattlePerformanceBg_o *)v4->fields.actionCamera;
      if ( !this )
        goto LABEL_55;
      BattleActionCamera__stopCameraAnimation((BattleActionCamera_o *)this, 0LL);
    }
    BattlePerformanceBg__ReleaseBgAsset(v4, v4->fields.nowBgAssetPath, v26);
  }
  v4->fields.BgAssetData = data;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.BgAssetData, (int64_t)data, v15, v16, v17, v18, v19, v20);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__GetBgObject(v4, data, v27);
  if ( !this )
    goto LABEL_55;
  parentCamera = v4->fields.parentCamera;
  v29 = this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
    v30 = this;
    if ( !byte_4BD6BB1 )
    {
      this = (BattlePerformanceBg_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    if ( !v30 )
      goto LABEL_55;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v30,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  if ( !this )
    goto LABEL_55;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  v31 = this;
  if ( !byte_4BD6BB6 )
  {
    this = (BattlePerformanceBg_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v31 )
    goto LABEL_55;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v31,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  name = data->fields.name;
  v4->fields.nowBgAssetPath = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.nowBgAssetPath, (int64_t)name, v33, v34, v35, v36, v37, v38);
  v4->fields.bgobject = (struct UnityEngine_GameObject_o *)v29;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.bgobject, (int64_t)v29, v39, v40, v41, v42, v43, v44);
  v46 = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(v4, data, v45);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v46 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
            this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
            v48 = this;
            if ( !byte_4BD6BB6 )
            {
              this = (BattlePerformanceBg_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
              byte_4BD6BB6 = 1;
            }
            if ( v48 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v48,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0LL);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v46;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v4->fields.frontobject,
                (int64_t)v46,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54);
              goto LABEL_53;
            }
          }
        }
      }
    }
LABEL_55:
    sub_1C22094(this, data);
  }
LABEL_53:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v47);
  if ( !nowBgState )
    goto LABEL_55;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, 0LL);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  loadbgno = v4->fields.loadbgno;
  loadbgType = v4->fields.loadbgType;
  v59 = v4->fields.parentCamera;
  v60 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_1C22084(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  BattlePerformanceBg_ChangedBgArgs___ctor(v60, loadbgno, loadbgType, v59, 0LL);
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v60,
    (const MethodInfo_2F02610 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


BattleBgComponent_array *__fastcall BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  UnityEngine_Object_o *bgobject; // x22
  __int64 v7; // x1
  UnityEngine_GameObject_o *ComponentsInChildren_object; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_4BDF527 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleBgComponent__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF527 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleBgComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
  {
    ComponentsInChildren_object = this->fields.bgobject;
    if ( !ComponentsInChildren_object )
      goto LABEL_17;
    ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                ComponentsInChildren_object,
                                                                includeInactive,
                                                                (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v5 )
      goto LABEL_17;
    System_Collections_Generic_List_object___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
  {
    if ( v5 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_17:
    sub_1C22094(ComponentsInChildren_object, v7);
  }
  ComponentsInChildren_object = this->fields.frontobject;
  if ( !ComponentsInChildren_object )
    goto LABEL_17;
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                              ComponentsInChildren_object,
                                                              includeInactive,
                                                              (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v5 )
    goto LABEL_17;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
}


System_String_array *__fastcall BattlePerformanceBg__getChangeBgList(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  return this->fields.debuglist;
}


BattlePerformanceBg_SaveData_o *__fastcall BattlePerformanceBg__getSaveData(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x20
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v6; // x1
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattlePerformanceBg_BgState_o *v14; // x8
  int64_t bgName; // x1
  struct BattlePerformanceBg_BgState_o *v16; // x8
  unsigned int Count; // w0
  int64_t v18; // x0
  _DWORD **v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct BattlePerformanceBg_BgState_o *v26; // x8
  unsigned int v27; // w25
  Il2CppObject *value; // x23
  Il2CppObject *key; // x24
  int64_t v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x0
  __int64 v46; // x1
  _DWORD *v47; // x23
  __int64 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  _DWORD *v56; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  __int64 v58; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BDF524 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_1C21E38(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__);
    sub_1C21E38(&BattlePerformanceBg_SaveData_TypeInfo);
    byte_4BDF524 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  v4 = sub_1C22084(BattlePerformanceBg_SaveData_TypeInfo);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v4, 0LL);
  nowBgState = this->fields.nowBgState;
  if ( nowBgState )
  {
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)nowBgState->fields.compDictionary;
    if ( !compDictionary )
      goto LABEL_26;
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                                  compDictionary,
                                                                                  (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    if ( (int)compDictionary >= 1 )
    {
      v14 = this->fields.nowBgState;
      if ( !v14 )
        goto LABEL_26;
      if ( !v4 )
        goto LABEL_26;
      bgName = (int64_t)v14->fields.bgName;
      *(_QWORD *)(v4 + 16) = bgName;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), bgName, v8, v9, v10, v11, v12, v13);
      v16 = this->fields.nowBgState;
      if ( !v16 )
        goto LABEL_26;
      compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.compDictionary;
      if ( !compDictionary
        || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                      compDictionary,
                      (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__),
            v18 = sub_1C21EE0(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count),
            *(_QWORD *)(v4 + 24) = v18,
            v19 = (_DWORD **)(v4 + 24),
            sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 24), v18, v20, v21, v22, v23, v24, v25),
            (v26 = this->fields.nowBgState) == 0LL)
        || (compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v26->fields.compDictionary) == 0LL )
      {
LABEL_26:
        sub_1C22094(compDictionary, v6);
      }
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v59,
        compDictionary,
        (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
      v60 = v59;
      v27 = 0;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v60,
                (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
      {
        key = v60.fields._current.fields.key;
        value = v60.fields._current.fields.value;
        v30 = sub_1C22084(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
        BattlePerformanceBg_SaveData_CompSaveData___ctor((BattlePerformanceBg_SaveData_CompSaveData_o *)v30, 0LL);
        if ( !v30 )
          sub_1C22094(v31, v32);
        *(_QWORD *)(v30 + 16) = key;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)key, v33, v34, v35, v36, v37, v38);
        *(_QWORD *)(v30 + 24) = value;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 24), (int64_t)value, v39, v40, v41, v42, v43, v44);
        v47 = *v19;
        if ( !*v19 )
          sub_1C22094(v45, v46);
        v48 = sub_1C21F74(v30, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
        if ( !v48 )
        {
          v58 = sub_1C220B8(0LL);
          sub_1C21F60(v58, 0LL);
        }
        if ( v27 >= v47[6] )
          sub_1C2209C(v48, v49);
        v56 = &v47[2 * v27];
        *((_QWORD *)v56 + 4) = v30;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v56 + 8), v30, v50, v51, v52, v53, v54, v55);
        ++v27;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v60,
        (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    }
  }
  if ( !v4 )
    goto LABEL_26;
  result = (BattlePerformanceBg_SaveData_o *)v4;
  *(_QWORD *)(v4 + 32) = *(_QWORD *)&this->fields.loadbgno;
  return result;
}


BgResourceData_o *__fastcall BattlePerformanceBg__get_BgResource(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BgResourceData_o *cachedBgResource; // x21
  int32_t loadbgno; // w22
  int32_t loadbgType; // w23
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF523 & 1) == 0 )
  {
    sub_1C21E38(&BgResourceData_TypeInfo);
    byte_4BDF523 = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    loadbgno = this->fields.loadbgno;
    loadbgType = this->fields.loadbgType;
    cachedBgResource = (BgResourceData_o *)sub_1C22084(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, loadbgno, loadbgType, 0LL);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.cachedBgResource,
      (int64_t)cachedBgResource,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return cachedBgResource;
}


bool __fastcall BattlePerformanceBg__get_IsBusy(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.IsLoading;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgNo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgType(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgType;
}


bool __fastcall BattlePerformanceBg__isReload(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno != -1 && this->fields.loadbgType != -1;
}


void __fastcall BattlePerformanceBg__loadBg(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  BgResourceData_o *BgResource; // x0
  __int64 v9; // x1
  struct System_String_o *AssetPath; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4BDF52B & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceBg_endloadBg__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4BDF52B = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_8;
  BattlePerformanceBg__InitLoadBgInfo(this, no, tp, method);
  BgResource = BattlePerformanceBg__get_BgResource(this, v7);
  if ( !BgResource )
    sub_1C22094(0LL, v9);
  AssetPath = BgResourceData__get_AssetPath(BgResource, 0LL);
  this->fields.initLoadedBgPath = AssetPath;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.initLoadedBgPath,
    (int64_t)AssetPath,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPath, v17, 1, 0LL) )
LABEL_8:
    this->fields.IsLoading = 0;
}


void __fastcall BattlePerformanceBg__playAnimation(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v9; // x1
  int max_length; // w8
  BattleBgComponent_array *v11; // x21
  unsigned int v12; // w23
  Il2CppClass **v13; // x8
  BattleBgComponent_o *v14; // x22

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, (const MethodInfo *)animName);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v11 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C2209C(BattleBgComponents, v9);
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleBgComponent_o *)v13[4];
      if ( !v14 )
        break;
      BattleBgComponents = (BattleBgComponent_array *)BattleBgComponent__checkKey(
                                                        (BattleBgComponent_o *)v13[4],
                                                        key,
                                                        0LL);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
        BattleBgComponent__playAnimation(v14, animName, timeline, 0LL);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_11:
    sub_1C22094(BattleBgComponents, v9);
  }
}


void __fastcall BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDF53D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22967/*"playerfield"*/);
    sub_1C21E38(&StringLiteral_3287/*"BattleIn"*/);
    byte_4BDF53D = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22967/*"playerfield"*/,
    (System_String_o *)StringLiteral_3287/*"BattleIn"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDF53C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3289/*"BattleOut"*/);
    sub_1C21E38(&StringLiteral_22967/*"playerfield"*/);
    byte_4BDF53C = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22967/*"playerfield"*/,
    (System_String_o *)StringLiteral_3289/*"BattleOut"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playLoadEndAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v4; // x1
  int max_length; // w8
  BattleBgComponent_array *v6; // x19
  unsigned int v7; // w20

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v6 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2209C(BattleBgComponents, v4);
      BattleBgComponents = (BattleBgComponent_array *)v6->m_Items[v7];
      if ( !BattleBgComponents )
        break;
      if ( LOBYTE(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__playLoadEndAnimation((BattleBgComponent_o *)BattleBgComponents, 0LL);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1C22094(BattleBgComponents, v4);
  }
}


void __fastcall BattlePerformanceBg__reloadBg(
        BattlePerformanceBg_o *this,
        int32_t *outNo,
        int32_t *outType,
        const MethodInfo *method)
{
  *outNo = this->fields.loadbgno;
  *outType = this->fields.loadbgType;
  BattlePerformanceBg__loadBg(this, this->fields.loadbgno, this->fields.loadbgType, method);
}


BattlePerformanceBg_BgState_o *__fastcall BattlePerformanceBg__saveHistoryBgState(
        BattlePerformanceBg_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgobject; // x21
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  struct BattlePerformanceBg_BgState_o *v10; // x8
  struct BattlePerformanceBg_BgState_o *v11; // x8
  struct BattlePerformanceBg_BgState_o *v12; // x2
  __int64 v14; // x21

  if ( (byte_4BDF53A & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceBg_BgState_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF53A = 1;
  }
  if ( this->fields.nowBgState )
  {
    bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
      goto LABEL_10;
    frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
    {
LABEL_10:
      nowBgState = this->fields.nowBgState;
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v6);
      if ( !nowBgState )
        goto LABEL_30;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, 0LL);
      v10 = this->fields.nowBgState;
      if ( !v10 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                        (Il2CppObject *)v10->fields.bgName,
                                                        (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v11 = this->fields.nowBgState;
        if ( !v11 )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___Remove(
                                                          (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                          (Il2CppObject *)v11->fields.bgName,
                                                          (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v12 = this->fields.nowBgState;
      if ( !v12 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
        (Il2CppObject *)v12->fields.bgName,
        (Il2CppObject *)v12,
        (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    }
  }
  if ( !inName )
    return 0LL;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_30;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
         (Il2CppObject *)inName,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
    if ( BattleBgComponents )
      return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                (Il2CppObject *)inName,
                                                (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
LABEL_30:
    sub_1C22094(BattleBgComponents, inName);
  }
  v14 = sub_1C22084(BattlePerformanceBg_BgState_TypeInfo);
  BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v14, inName, 0LL);
  if ( !v14 )
    goto LABEL_30;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
    *(Il2CppObject **)(v14 + 16),
    (Il2CppObject *)v14,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
  return (BattlePerformanceBg_BgState_o *)v14;
}


void __fastcall BattlePerformanceBg__setCutNodeNoble(BattlePerformanceBg_o *this, bool flg, const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x1
  int max_length; // w8
  BattleBgComponent_array *v7; // x19
  unsigned int v8; // w21
  bool v9; // w20

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 1, method);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = flg;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C2209C(BattleBgComponents, v5);
      BattleBgComponents = (BattleBgComponent_array *)v7->m_Items[v8];
      if ( !BattleBgComponents )
        break;
      if ( BYTE1(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__setCutNodeNoble((BattleBgComponent_o *)BattleBgComponents, v9, 0LL);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_1C22094(BattleBgComponents, v5);
  }
}


void __fastcall BattlePerformanceBg__setSaveData(
        BattlePerformanceBg_o *this,
        BattlePerformanceBg_SaveData_o *saveData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *compSaveDataList; // x8
  struct BattlePerformanceBg_BgState_o *v8; // x0
  struct BattlePerformanceBg_BgState_o **p_nowBgState; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v19; // x21
  int max_length; // w8
  unsigned int v21; // w22
  BattlePerformanceBg_SaveData_CompSaveData_o *v22; // x25
  BattlePerformanceBg_BgState_o *nowBgState; // x20

  if ( (byte_4BDF525 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    byte_4BDF525 = 1;
  }
  if ( saveData )
  {
    BattlePerformanceBg__InitLoadBgInfo(this, saveData->fields.bgNo, saveData->fields.bgTp, v3);
    compSaveDataList = saveData->fields.compSaveDataList;
    if ( compSaveDataList )
    {
      if ( *(_QWORD *)&compSaveDataList->max_length )
      {
        v8 = BattlePerformanceBg__saveHistoryBgState(this, saveData->fields.bgName, v6);
        this->fields.nowBgState = v8;
        p_nowBgState = &this->fields.nowBgState;
        sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.nowBgState, (int64_t)v8, v10, v11, v12, v13, v14, v15);
        v19 = saveData->fields.compSaveDataList;
        if ( !v19 )
          goto LABEL_21;
        max_length = v19->max_length;
        if ( max_length >= 1 )
        {
          v21 = 0;
          while ( 1 )
          {
            if ( v21 >= max_length )
              sub_1C2209C(compDictionary, v17);
            if ( !*p_nowBgState )
              break;
            v22 = v19->m_Items[v21];
            if ( !v22 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
            if ( !compDictionary )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                          compDictionary,
                                                                                          (Il2CppObject *)v22->fields.bgCompName,
                                                                                          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
            if ( ((unsigned __int8)compDictionary & 1) == 0 )
            {
              if ( !*p_nowBgState )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_object__object___Add(
                compDictionary,
                (Il2CppObject *)v22->fields.bgCompName,
                (Il2CppObject *)v22->fields.bgCompData,
                (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
            }
            max_length = v19->max_length;
            if ( (int)++v21 >= max_length )
              goto LABEL_18;
          }
LABEL_21:
          sub_1C22094(compDictionary, v17);
        }
LABEL_18:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattlePerformanceBg__getBattleBgComponents(
                                                                                      this,
                                                                                      0,
                                                                                      v18);
        if ( !nowBgState )
          goto LABEL_21;
        BattlePerformanceBg_BgState__loadSaveData(
          nowBgState,
          (BattleBgComponent_array *)compDictionary,
          this->fields.actionCamera,
          0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg_BgInfo___ctor(
        BattlePerformanceBg_BgInfo_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v14; // s11
  float v15; // s12
  float v16; // s13
  BattlePerformanceBg_BgInfo_o *v18; // x22
  bool v19; // w23
  bool v20; // w24
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v14 = pos.fields.z;
  v15 = pos.fields.y;
  v16 = pos.fields.x;
  v18 = this;
  v19 = changeDirect;
  v20 = parentCamera;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v18->fields.callback = callback;
  v18 = (BattlePerformanceBg_BgInfo_o *)((char *)v18 + 56);
  LODWORD(v18[-1].fields.pos.fields.x) = No;
  LODWORD(v18[-1].fields.pos.fields.y) = tp;
  v18[-1].fields.pos.fields.z = v16;
  v18[-1].fields.rot.fields.x = v15;
  v18[-1].fields.rot.fields.y = v14;
  v18[-1].fields.rot.fields.z = x;
  *(float *)&v18[-1].fields.changeDirect = y;
  *(float *)(&v18[-1].fields.parentCamera + 3) = z;
  LOBYTE(v18[-1].fields.callback) = v19;
  BYTE1(v18[-1].fields.callback) = v20;
  sub_1C21DDC((PartyOrganizationUtility_o *)v18, (int64_t)callback, v21, v22, v23, v24, v25, v26);
}


void __fastcall BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDF542 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
    byte_4BDF542 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = inName;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)inName, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  this->fields.compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.compDictionary, (int64_t)v11, v12, v13, v14, v15, v16, v17);
}


void __fastcall BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattlePerformanceBg_BgState_o *v10; // x21
  signed int max_length; // w8
  unsigned int v12; // w24
  BattleBgComponent_o *v13; // x22
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_object__object__o *v15; // x23
  Il2CppObject *Item; // x0

  v10 = this;
  if ( (byte_4BDF544 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    this = (BattlePerformanceBg_BgState_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
    byte_4BDF544 = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C2209C(this, list);
      v13 = list->m_Items[v12];
      if ( !v13 )
        break;
      v13->fields.actionCamera = actionCamera;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v13->fields.actionCamera,
        (int64_t)actionCamera,
        (int64_t)actionCamera,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      if ( v13->fields.isRecAnimation )
      {
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v13, 0LL);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  compDictionary,
                                                  (Il2CppObject *)this,
                                                  (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v15 = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v13, 0LL);
          if ( !v15 )
            break;
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v15,
                   (Il2CppObject *)this,
                   (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v13, (BattleBgComponent_SaveData_o *)Item, 0LL);
        }
      }
      max_length = list->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_15:
    sub_1C22094(this, list);
  }
}


void __fastcall BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  signed int max_length; // w8
  unsigned int v7; // w24
  BattleBgComponent_o *v8; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v9; // x21
  Il2CppObject *name; // x23

  if ( (byte_4BDF543 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
    byte_4BDF543 = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_object__object___Clear(
    compDictionary,
    (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2209C(compDictionary, list);
      v8 = list->m_Items[v7];
      if ( !v8 )
        break;
      if ( v8->fields.isRecAnimation )
      {
        v9 = this->fields.compDictionary;
        name = (Il2CppObject *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v8, 0LL);
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponent__getSaveData(
                                                                                      v8,
                                                                                      0LL);
        if ( !v9 )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)v9,
          name,
          (Il2CppObject *)compDictionary,
          (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_14:
    sub_1C22094(compDictionary, list);
  }
}


void __fastcall BattlePerformanceBg_ChangedBgArgs___ctor(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t bgNo,
        int32_t bgType,
        bool useParentCamera,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgNo_k__BackingField = bgNo;
  this->fields._BgType_k__BackingField = bgType;
  this->fields._UseParentCamera_k__BackingField = useParentCamera;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgNo_k__BackingField;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgType_k__BackingField;
}


bool __fastcall BattlePerformanceBg_ChangedBgArgs__get_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._UseParentCamera_k__BackingField;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgNo_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgType_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._UseParentCamera_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_SaveData___ctor(BattlePerformanceBg_SaveData_o *this, const MethodInfo *method)
{
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDF545 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    byte_4BDF545 = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)Empty, v5, v6, v7, v8, v9, v10);
  v11 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_1C21EE0(
                                                                    BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                    0LL);
  this->fields.compSaveDataList = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.compSaveDataList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
}


void __fastcall BattlePerformanceBg_SaveData_CompSaveData___ctor(
        BattlePerformanceBg_SaveData_CompSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass48_0___ctor(
        BattlePerformanceBg___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass48_0___LoadBgSpShadowEffect_b__0(
        BattlePerformanceBg___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  BattlePerformanceBg__LoadBgSpShadowEffectLocal(
    _4__this,
    this->fields.bgId,
    this->fields.bgType,
    0,
    this->fields.finishCallback,
    0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass49_0___ctor(
        BattlePerformanceBg___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass49_0___LoadBgSpShadowEffectLocal_b__0(
        BattlePerformanceBg___c__DisplayClass49_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass50_0___ctor(
        BattlePerformanceBg___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass50_0___endloadBg_b__0(
        BattlePerformanceBg___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  BattlePerformanceBg__endloadBgAll(_4__this, this->fields.data, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass70_0___ctor(
        BattlePerformanceBg___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceBg___c__DisplayClass70_0___FindComponentByKey_b__0(
        BattlePerformanceBg___c__DisplayClass70_0_o *this,
        BattleBgComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return BattleBgComponent__checkKey(x, this->fields.key, 0LL);
}