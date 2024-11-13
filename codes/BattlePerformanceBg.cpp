void __fastcall BattlePerformanceBg___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B19104 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceBg_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19861/*"front"*/, v8, v9);
    byte_4B19104 = 1;
  }
  BattlePerformanceBg_TypeInfo->static_fields->Frontfile = (struct System_String_o *)StringLiteral_19861/*"front"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattlePerformanceBg_TypeInfo->static_fields,
    StringLiteral_19861/*"front"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_Dictionary_object__object__o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_List_object__o *v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7

  if ( (byte_4B19103 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v13, v14);
    sub_1BCA7E0(&string_TypeInfo, v15, v16);
    byte_4B19103 = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadedChangeBgList,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.initLoadedBgPath,
    (int64_t)Empty,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgSpShadowList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v45 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo,
                                                                     v42,
                                                                     v43,
                                                                     v44);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v45,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.historyBgState, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo,
                                                       v52,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgInfoList, (int64_t)v55, v56, v57, v58, v59, v60, v61);
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

  if ( (byte_4B19101 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo, callback, method);
    byte_4B19101 = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (PartyOrganizationUtility_o *)&this->fields.onLoadBgFinished;
  v7 = System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0LL);
  if ( !v7 )
    goto LABEL_7;
  v14 = v7;
  v15 = sub_1BCA91C(v7, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
  if ( !v15
    || (p_onLoadBgFinished->klass = (PartyOrganizationUtility_c *)v15,
        (v16 = sub_1BCA91C(v14, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo)) == 0) )
  {
    sub_1BCACFC(v14);
LABEL_7:
    v16 = 0LL;
    p_onLoadBgFinished->klass = 0LL;
  }
  sub_1BCA784(p_onLoadBgFinished, v16, v8, v9, v10, v11, v12, v13);
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
  __int64 v21; // x1
  __int64 v22; // x2
  BattlePerformanceBg_BgInfo_o *v23; // x0
  Il2CppObject *v24; // x20
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4B190F4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceBg_BgInfo_TypeInfo, *(_QWORD *)&No, *(_QWORD *)&tp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__, v21, v22);
    byte_4B190F4 = 1;
  }
  v23 = (BattlePerformanceBg_BgInfo_o *)sub_1BCAA2C(
                                          BattlePerformanceBg_BgInfo_TypeInfo,
                                          *(_QWORD *)&No,
                                          *(_QWORD *)&tp,
                                          changeDirect);
  v37.fields.x = v17;
  v37.fields.y = v16;
  v37.fields.z = v15;
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v24 = (Il2CppObject *)v23;
  BattlePerformanceBg_BgInfo___ctor(v23, No, tp, v37, v38, changeDirect, parentCamera, callback, 0LL);
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (items = bgInfoList->fields._items,
        v34 = Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__,
        ++bgInfoList->fields._version,
        !items) )
  {
    sub_1BCAA3C(bgInfoList, v25);
  }
  size = bgInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgInfoList,
      v24,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    bgInfoList->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v24, v26, v27, v28, v29, v30, v31);
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
    sub_1BCAA3C(this, 0LL);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onLoadBgFinished, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg__DebugPrint(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_1BCAA3C(this, data);
}


bool __fastcall BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceBg_o *v3; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v3 = this;
  if ( (byte_4B190F5 & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__,
                                      method,
                                      v2);
    byte_4B190F5 = 1;
  }
  bgInfoList = v3->fields.bgInfoList;
  if ( !bgInfoList )
    sub_1BCAA3C(this, method);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *__fastcall BattlePerformanceBg__FetchBgInfo(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  System_Collections_Generic_List_object__o *v8; // x8
  BattlePerformanceBg_BgInfo_o *v9; // x19

  if ( (byte_4B190F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__, v4, v5);
    byte_4B190F6 = 1;
  }
  if ( !BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
    return 0LL;
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (bgInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bgInfoList,
                                                                    0,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__),
        (v8 = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList) == 0LL) )
  {
    sub_1BCAA3C(bgInfoList, v6);
  }
  v9 = (BattlePerformanceBg_BgInfo_o *)bgInfoList;
  System_Collections_Generic_List_object___RemoveAt(
    v8,
    0,
    (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v9;
}


BattleBgComponent_o *__fastcall BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2
  System_Object_array *BattleBgComponents; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_object__bool__o *v26; // x20

  if ( (byte_4B190FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_BattleBgComponent___, key, method);
    sub_1BCA7E0(&System_Func_BattleBgComponent__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattlePerformanceBg___c__DisplayClass69_0__FindComponentByKey_b__0__, v8, v9);
    sub_1BCA7E0(&BattlePerformanceBg___c__DisplayClass69_0_TypeInfo, v10, v11);
    byte_4B190FE = 1;
  }
  v12 = sub_1BCAA2C(BattlePerformanceBg___c__DisplayClass69_0_TypeInfo, key, method, v3);
  BattlePerformanceBg___c__DisplayClass69_0___ctor((BattlePerformanceBg___c__DisplayClass69_0_o *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = key;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)key, v15, v16, v17, v18, v19, v20);
  BattleBgComponents = (System_Object_array *)BattlePerformanceBg__getBattleBgComponents(this, 0, v21);
  v26 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleBgComponent__bool__TypeInfo, v23, v24, v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_BattlePerformanceBg___c__DisplayClass69_0__FindComponentByKey_b__0__,
    0LL);
  return (BattleBgComponent_o *)BasicHelper__Find_object_(
                                  BattleBgComponents,
                                  (System_Func_T__bool__o *)v26,
                                  (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_BattleBgComponent___);
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__GetBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
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
  BgResourceData_o *BgResource; // x0
  __int64 v14; // x1
  System_String_o *v15; // x1
  System_String_o *v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x20
  __int64 v19; // x1
  __int64 v21; // x1
  Il2CppObject *Object_object__49237568; // x20
  __int64 v23; // x1
  __int64 v24; // x1
  Il2CppObject *v25; // x19
  __int64 v26; // x1
  Il2CppObject *v27; // x19
  int32_t Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B190F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_17337/*"bg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17340/*"bg0"*/, v11, v12);
    byte_4B190F8 = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    sub_1BCAA3C(0LL, v14);
  Type_k__BackingField = BgResource->fields._Type_k__BackingField;
  if ( Type_k__BackingField < 1 )
  {
    if ( !data )
      sub_1BCAA3C(BgResource, v14);
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                data,
                                (System_String_o *)StringLiteral_17337/*"bg"*/,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__49237568,
                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v27 = AssetData__GetObject_object__49237568(
              data,
              (System_String_o *)StringLiteral_17340/*"bg0"*/,
              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v27,
                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v15 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0LL);
    v16 = System_String__Concat_62401220((System_String_o *)StringLiteral_17337/*"bg"*/, v15, 0LL);
    if ( !data )
      sub_1BCAA3C(v16, v16);
    v18 = AssetData__GetObject_object__49237568(
            data,
            v16,
            (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v18,
                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v25 = AssetData__GetObject_object__49237568(
              data,
              (System_String_o *)StringLiteral_17337/*"bg"*/,
              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v25,
                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__GetFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *BgResource; // x0
  __int64 v12; // x1
  int v13; // w22
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  Il2CppObject *Object_object__49237568; // x20
  __int64 v18; // x1
  BattlePerformanceBg_c *v19; // x0
  __int64 v20; // x1
  bool v21; // w8
  UnityEngine_GameObject_o *result; // x0
  int v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B190F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&BattlePerformanceBg_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B190F9 = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    goto LABEL_21;
  v13 = *((_DWORD *)BgResource + 5);
  BgResource = BattlePerformanceBg_TypeInfo;
  v23 = v13;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo, v12);
    BgResource = BattlePerformanceBg_TypeInfo;
  }
  v14 = (System_String_o *)**((_QWORD **)BgResource + 23);
  if ( v13 >= 1 )
  {
    v15 = System_Int32__ToString((int32_t)&v23, 0LL);
    BgResource = System_String__Concat_62401220(v14, v15, 0LL);
    v14 = (System_String_o *)BgResource;
  }
  if ( !data )
LABEL_21:
    sub_1BCAA3C(BgResource, v12);
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              v14,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    goto LABEL_24;
  v19 = BattlePerformanceBg_TypeInfo;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo, v18);
    v19 = BattlePerformanceBg_TypeInfo;
  }
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              v19->static_fields->Frontfile,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL);
  result = 0LL;
  if ( v21 )
  {
LABEL_24:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__49237568,
                                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall BattlePerformanceBg__GetShadowTexture(
        BattlePerformanceBg_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  AssetData_o *BgAssetData; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = shadowId;
  if ( (byte_4B190FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, *(_QWORD *)&shadowId, method);
    sub_1BCA7E0(&StringLiteral_23494/*"shadow_"*/, v4, v5);
    byte_4B190FC = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0LL;
  v7 = System_Int32__ToString((int32_t)&v10, 0LL);
  v8 = System_String__Concat_62401220((System_String_o *)StringLiteral_23494/*"shadow_"*/, v7, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49237568(
                                      BgAssetData,
                                      v8,
                                      (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B190F0 & 1) == 0 )
  {
    sub_1BCA7E0(&BgResourceData_TypeInfo, *(_QWORD *)&bgId, *(_QWORD *)&bgType);
    byte_4B190F0 = 1;
  }
  this->fields.loadbgno = bgId;
  this->fields.loadbgType = bgType;
  v7 = (BgResourceData_o *)sub_1BCAA2C(BgResourceData_TypeInfo, *(_QWORD *)&bgId, *(_QWORD *)&bgType, method);
  BgResourceData___ctor(v7, bgId, bgType, 0LL);
  this->fields.cachedBgResource = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cachedBgResource, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__LoadBgSpShadowEffect(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
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
  __int64 v25; // x19
  BattleBgMaster_o *Master_object; // x0
  Il2CppObject *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  int32_t BgSpecialShadowEffectId; // w0
  __int64 v36; // x1
  int32_t v37; // w21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v47; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_String_o *v51; // x20
  AssetLoader_LoadEndDataHandler_o *v52; // x21
  __int64 v53; // x1
  System_String_o *effectPath; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B190F1 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&no, *(_QWORD *)&tp);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleBgMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v17, v18);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__, v21, v22);
    sub_1BCA7E0(&BattlePerformanceBg___c__DisplayClass48_0_TypeInfo, v23, v24);
    byte_4B190F1 = 1;
  }
  effectPath = 0LL;
  v25 = sub_1BCAA2C(BattlePerformanceBg___c__DisplayClass48_0_TypeInfo, *(_QWORD *)&no, *(_QWORD *)&tp, finishCallback);
  BattlePerformanceBg___c__DisplayClass48_0___ctor((BattlePerformanceBg___c__DisplayClass48_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_22;
  *(_QWORD *)(v25 + 16) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)finishCallback, v28, v29, v30, v31, v32, v33);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
  Master_object = (BattleBgMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_22;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(Master_object, no, tp, 0, 0LL);
  if ( BgSpecialShadowEffectId <= 0 )
    goto LABEL_13;
  v37 = BgSpecialShadowEffectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v36);
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v37, 0LL) )
    goto LABEL_13;
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object )
    goto LABEL_22;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)Master_object,
         (Il2CppObject *)effectPath,
         (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_13:
    ActionExtensions__Call(*(System_Action_o **)(v25 + 16), 0LL);
    return;
  }
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object
    || (v27 = (Il2CppObject *)effectPath,
        v44 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v45 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v44) )
  {
LABEL_22:
    sub_1BCAA3C(Master_object, v27);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v44 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v27,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = v44 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v47 + 32) = v27;
    sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 32), (int64_t)v27, v38, v39, v40, v41, v42, v43);
  }
  v51 = effectPath;
  v52 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v48, v49, v50);
  AssetLoader_LoadEndDataHandler___ctor(
    v52,
    (Il2CppObject *)v25,
    Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v53);
  AssetManager__loadAssetStorage(v51, v52, 1, 0LL);
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
  __int64 v4; // x1
  struct UnityEngine_GameObject_o **p_bgobject; // x20
  UnityEngine_Object_o *bgobject; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *frontobject; // x21
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v19; // x1
  BattleActionCamera_o *v20; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v22; // x21
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B190EA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B190EA = 1;
  }
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  p_bgobject = &this->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_9;
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_9:
    v9 = (UnityEngine_Object_o *)*p_bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      v11 = (UnityEngine_Object_o *)*p_bgobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__Destroy_70154244(v11, 0LL);
      *p_bgobject = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgobject, 0LL, v12, v13, v14, v15, v16, v17);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      v20 = this->fields.actionCamera;
      if ( !v20 )
        sub_1BCAA3C(0LL, v19);
      BattleActionCamera__stopCameraAnimation(v20, 0LL);
    }
    p_frontobject = &this->fields.frontobject;
    v22 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    {
      v25 = (UnityEngine_Object_o *)*p_frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__Destroy_70154244(v25, 0LL);
      *p_frontobject = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.frontobject, 0LL, v26, v27, v28, v29, v30, v31);
    }
    BattlePerformanceBg__ReleaseBgAsset(this, this->fields.nowBgAssetPath, v24);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgAsset(
        BattlePerformanceBg_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1

  if ( (byte_4B190ED & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, path, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v7, v8);
    byte_4B190ED = 1;
  }
  if ( !System_String__IsNullOrEmpty(path, 0LL) )
  {
    loadedChangeBgList = this->fields.loadedChangeBgList;
    if ( loadedChangeBgList )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)loadedChangeBgList,
              (Il2CppObject *)path,
              (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_8:
        this->fields.BgAssetData = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.BgAssetData, 0LL, v11, v12, v13, v14, v15, v16);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
        AssetManager__releaseAssetStorage(path, 0LL);
        return;
      }
      loadedChangeBgList = this->fields.loadedChangeBgList;
      if ( loadedChangeBgList )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadedChangeBgList,
          (Il2CppObject *)path,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_8;
      }
    }
    sub_1BCAA3C(loadedChangeBgList, v9);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v17; // x8
  int32_t size; // w2
  int v19; // w9
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B190EE & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12, v13);
    byte_4B190EE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)bgSpShadowList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v17 = this->fields.bgSpShadowList;
  if ( !v17 )
LABEL_13:
    sub_1BCAA3C(bgSpShadowList, method);
  size = v17->fields._size;
  v19 = v17->fields._version + 1;
  v17->fields._size = 0;
  v17->fields._version = v19;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v17->fields._items, 0, size, 0LL);
}


void __fastcall BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  __int64 v17; // x1
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B190EC & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12, v13);
    byte_4B190EC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)loadedChangeBgList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
      AssetManager__releaseAsset_38505704(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v19 = this->fields.loadedChangeBgList;
  if ( !v19 )
LABEL_16:
    sub_1BCAA3C(loadedChangeBgList, method);
  size = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
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

  if ( (byte_4B19102 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19102 = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_15:
    sub_1BCAA3C(BattleBgComponents, v5);
  v6 = *(_QWORD *)&BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1BCAA44(BattleBgComponents, v5);
      v9 = (UnityEngine_Object_o *)v7->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  struct System_Action_o **p_EndCallback; // x25
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  char v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Object_array *v55; // x20
  __int64 v56; // x0
  int64_t v57; // x1
  int64_t v58; // x2
  char v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x21
  int64_t v65; // x2
  char v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  char v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x21
  int64_t v78; // x2
  char v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  char v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x21
  int64_t v91; // x2
  char v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x2
  char v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x2
  char v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x2
  char v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  __int64 v115; // x1
  System_Collections_Hashtable_o *v116; // x0
  __int64 v117; // x0
  __int128 v118; // [xsp+0h] [xbp-A0h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-90h] BYREF
  int v120; // [xsp+5Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  if ( (byte_4B190F7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Color_TypeInfo, *(_QWORD *)&No, *(_QWORD *)&tp);
    sub_1BCA7E0(&object___TypeInfo, v22, v23);
    sub_1BCA7E0(&float_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_19195/*"endChangeColor"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_15347/*"UpdateColor"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v38, v39);
    sub_1BCA7E0(&iTween_TypeInfo, v40, v41);
    byte_4B190F7 = 1;
  }
  if ( this->fields.IsLoading )
  {
    v121.fields.x = v18;
    v121.fields.y = v17;
    v121.fields.z = v16;
    v122.fields.x = x;
    v122.fields.y = y;
    v122.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v121, v122, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_1BCA784(
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
    BattlePerformanceBg__OnEndBgLoad(this, v43);
    return;
  }
  BattlePerformanceBg__InitLoadBgInfo(this, No, tp, v44);
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
    BattlePerformanceBg__endChangeColor(this, v45);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v47 = sub_1BCA888(object___TypeInfo, 10LL);
  if ( !v47 )
    sub_1BCAA3C(0LL, v48);
  v55 = (System_Object_array *)v47;
  v56 = StringLiteral_19858/*"from"*/;
  if ( StringLiteral_19858/*"from"*/ )
  {
    v56 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v55->obj.klass->_1.element_class);
    if ( !v56 )
      goto LABEL_61;
    v57 = StringLiteral_19858/*"from"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( !v55->max_length )
    goto LABEL_60;
  v55->m_Items[0] = (Il2CppObject *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)v55->m_Items, v57, v49, v50, v51, v52, v53, v54);
  tmpcolor = this->fields.tmpcolor;
  v56 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v64 = v56;
  if ( v56 )
  {
    v56 = sub_1BCA91C(v56, v55->obj.klass->_1.element_class);
    if ( !v56 )
      goto LABEL_61;
  }
  if ( v55->max_length <= 1 )
    goto LABEL_60;
  v55->m_Items[1] = (Il2CppObject *)v64;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[1], v64, v58, v59, v60, v61, v62, v63);
  v56 = StringLiteral_24219/*"to"*/;
  if ( StringLiteral_24219/*"to"*/ )
  {
    v56 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v55->obj.klass->_1.element_class);
    if ( !v56 )
      goto LABEL_61;
    v57 = StringLiteral_24219/*"to"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v55->max_length <= 2 )
    goto LABEL_60;
  v55->m_Items[2] = (Il2CppObject *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[2], v57, v65, v66, v67, v68, v69, v70);
  v118 = xmmword_BD3A10;
  v56 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v118);
  v77 = v56;
  if ( v56 )
  {
    v56 = sub_1BCA91C(v56, v55->obj.klass->_1.element_class);
    if ( !v56 )
      goto LABEL_61;
  }
  if ( v55->max_length <= 3 )
    goto LABEL_60;
  v55->m_Items[3] = (Il2CppObject *)v77;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[3], v77, v71, v72, v73, v74, v75, v76);
  v56 = StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v56 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v55->obj.klass->_1.element_class);
    if ( !v56 )
      goto LABEL_61;
    v57 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v55->max_length <= 4 )
    goto LABEL_60;
  v55->m_Items[4] = (Il2CppObject *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[4], v57, v78, v79, v80, v81, v82, v83);
  v120 = 1056964608;
  v56 = j_il2cpp_value_box_0(float_TypeInfo, &v120);
  v90 = v56;
  if ( v56 )
  {
    v56 = sub_1BCA91C(v56, v55->obj.klass->_1.element_class);
    if ( !v56 )
    {
LABEL_61:
      v117 = sub_1BCAA60(v56);
      sub_1BCA908(v117, 0LL);
    }
  }
  if ( v55->max_length <= 5 )
    goto LABEL_60;
  v55->m_Items[5] = (Il2CppObject *)v90;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[5], v90, v84, v85, v86, v87, v88, v89);
  v56 = StringLiteral_22521/*"onupdate"*/;
  if ( StringLiteral_22521/*"onupdate"*/ )
  {
    v56 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v55->obj.klass->_1.element_class);
    if ( !v56 )
      goto LABEL_61;
    v57 = StringLiteral_22521/*"onupdate"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v55->max_length <= 6 )
    goto LABEL_60;
  v55->m_Items[6] = (Il2CppObject *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[6], v57, v91, v92, v93, v94, v95, v96);
  v56 = StringLiteral_15347/*"UpdateColor"*/;
  if ( StringLiteral_15347/*"UpdateColor"*/ )
  {
    v56 = sub_1BCA91C(StringLiteral_15347/*"UpdateColor"*/, v55->obj.klass->_1.element_class);
    if ( !v56 )
      goto LABEL_61;
    v57 = StringLiteral_15347/*"UpdateColor"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v55->max_length <= 7 )
    goto LABEL_60;
  v55->m_Items[7] = (Il2CppObject *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[7], v57, v97, v98, v99, v100, v101, v102);
  v56 = StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v56 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v55->obj.klass->_1.element_class);
    if ( !v56 )
      goto LABEL_61;
    v57 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v55->max_length <= 8 )
    goto LABEL_60;
  v55->m_Items[8] = (Il2CppObject *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[8], v57, v103, v104, v105, v106, v107, v108);
  v56 = StringLiteral_19195/*"endChangeColor"*/;
  if ( StringLiteral_19195/*"endChangeColor"*/ )
  {
    v56 = sub_1BCA91C(StringLiteral_19195/*"endChangeColor"*/, v55->obj.klass->_1.element_class);
    if ( v56 )
    {
      v57 = StringLiteral_19195/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_61;
  }
  v57 = 0LL;
LABEL_56:
  if ( v55->max_length <= 9 )
LABEL_60:
    sub_1BCAA44(v56, v57);
  v55->m_Items[9] = (Il2CppObject *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[9], v57, v109, v110, v111, v112, v113, v114);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v115);
  v116 = iTween__Hash(v55, 0LL);
  iTween__ValueTo(gameObject, v116, 0LL);
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 BgObject; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  struct BattlePerformanceBg_BgState_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x2
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v48; // x21
  __int64 v49; // x2
  UnityEngine_Transform_o *v50; // x22
  __int64 v51; // x2
  UnityEngine_Transform_o *v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  const MethodInfo *v59; // x2
  __int64 v60; // x1
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v62; // x2
  __int64 v63; // x2
  UnityEngine_Transform_o *v64; // x21
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v75; // w23
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  BattlePerformanceBg_ChangedBgArgs_o *v79; // x24
  const MethodInfo *v80; // x1
  struct System_Action_o *EndCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  System_Object_array *v89; // x21
  __int64 v90; // x0
  int64_t v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x22
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x19
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x19
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  __int64 v149; // x1
  System_Collections_Hashtable_o *v150; // x0
  __int64 v151; // x0
  int v152; // [xsp+Ch] [xbp-64h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-60h] BYREF
  __int128 v154; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B190FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data, method);
    sub_1BCA7E0(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Color_TypeInfo, v12, v13);
    sub_1BCA7E0(&object___TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&float_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19195/*"endChangeColor"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_15347/*"UpdateColor"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v32, v33);
    sub_1BCA7E0(&iTween_TypeInfo, v34, v35);
    byte_4B190FA = 1;
  }
  this->fields.BgAssetData = data;
  sub_1BCA784(
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
  v39 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v38);
  this->fields.nowBgState = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nowBgState, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  BgObject = (__int64)BattlePerformanceBg__GetBgObject(this, data, v46);
  if ( !BgObject )
    goto LABEL_82;
  parentCamera = this->fields.parentCamera;
  v48 = (UnityEngine_GameObject_o *)BgObject;
  BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)BgObject, 0LL);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v48, 0LL);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v48, 0LL);
    v50 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4B109C1 )
    {
      BgObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v37, v49);
      byte_4B109C1 = 1;
    }
    if ( !v50 )
      goto LABEL_82;
    UnityEngine_Transform__set_eulerAngles(v50, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v48, 0LL);
  if ( !BgObject )
    goto LABEL_82;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v48, 0LL);
  v52 = (UnityEngine_Transform_o *)BgObject;
  if ( !byte_4B109C6 )
  {
    BgObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v37, v51);
    byte_4B109C6 = 1;
  }
  if ( !v52 )
    goto LABEL_82;
  UnityEngine_Transform__set_localScale(v52, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this->fields.bgobject = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgobject, (int64_t)v48, v53, v54, v55, v56, v57, v58);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(this, data, v59);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
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
    v64 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4B109C6 )
    {
      BgObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v37, v63);
      byte_4B109C6 = 1;
    }
    if ( !v64 )
      goto LABEL_82;
    UnityEngine_Transform__set_localScale(v64, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.frontobject,
      (int64_t)FrontObject,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (__int64)BattlePerformanceBg__getBattleBgComponents(this, 0, v62);
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
  v75 = this->fields.parentCamera;
  v79 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_1BCAA2C(BattlePerformanceBg_ChangedBgArgs_TypeInfo, v76, v77, v78);
  BattlePerformanceBg_ChangedBgArgs___ctor(v79, loadbgno, loadbgType, v75, 0LL);
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v79,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    v155.fields.r = 1.0;
    v155.fields.g = 1.0;
    v155.fields.b = 1.0;
    v155.fields.a = 1.0;
    this->fields.fade = 0;
    UnityEngine_RenderSettings__set_ambientLight(v155, 0LL);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
        EndCallback->fields.original_method_info,
        *(_QWORD *)&EndCallback->fields.extra_arg);
    BattlePerformanceBg__OnEndBgLoad(this, v80);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BgObject = sub_1BCA888(object___TypeInfo, 10LL);
  if ( !BgObject )
LABEL_82:
    sub_1BCAA3C(BgObject, v37);
  v89 = (System_Object_array *)BgObject;
  v90 = StringLiteral_19858/*"from"*/;
  if ( StringLiteral_19858/*"from"*/ )
  {
    v90 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v89->obj.klass->_1.element_class);
    if ( !v90 )
      goto LABEL_84;
    v91 = StringLiteral_19858/*"from"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( !v89->max_length )
    goto LABEL_83;
  v89->m_Items[0] = (Il2CppObject *)v91;
  sub_1BCA784((PartyOrganizationUtility_o *)v89->m_Items, v91, v83, v84, v85, v86, v87, v88);
  v154 = xmmword_BD3A10;
  v90 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v154);
  v98 = v90;
  if ( v90 )
  {
    v90 = sub_1BCA91C(v90, v89->obj.klass->_1.element_class);
    if ( !v90 )
      goto LABEL_84;
  }
  if ( v89->max_length <= 1 )
    goto LABEL_83;
  v89->m_Items[1] = (Il2CppObject *)v98;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->m_Items[1], v98, v92, v93, v94, v95, v96, v97);
  v90 = StringLiteral_24219/*"to"*/;
  if ( StringLiteral_24219/*"to"*/ )
  {
    v90 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v89->obj.klass->_1.element_class);
    if ( !v90 )
      goto LABEL_84;
    v91 = StringLiteral_24219/*"to"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v89->max_length <= 2 )
    goto LABEL_83;
  v89->m_Items[2] = (Il2CppObject *)v91;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->m_Items[2], v91, v99, v100, v101, v102, v103, v104);
  tmpcolor = this->fields.tmpcolor;
  v90 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v111 = v90;
  if ( v90 )
  {
    v90 = sub_1BCA91C(v90, v89->obj.klass->_1.element_class);
    if ( !v90 )
      goto LABEL_84;
  }
  if ( v89->max_length <= 3 )
    goto LABEL_83;
  v89->m_Items[3] = (Il2CppObject *)v111;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->m_Items[3], v111, v105, v106, v107, v108, v109, v110);
  v90 = StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v90 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v89->obj.klass->_1.element_class);
    if ( !v90 )
      goto LABEL_84;
    v91 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v89->max_length <= 4 )
    goto LABEL_83;
  v89->m_Items[4] = (Il2CppObject *)v91;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->m_Items[4], v91, v112, v113, v114, v115, v116, v117);
  v152 = 1056964608;
  v90 = j_il2cpp_value_box_0(float_TypeInfo, &v152);
  v124 = v90;
  if ( v90 )
  {
    v90 = sub_1BCA91C(v90, v89->obj.klass->_1.element_class);
    if ( !v90 )
    {
LABEL_84:
      v151 = sub_1BCAA60(v90);
      sub_1BCA908(v151, 0LL);
    }
  }
  if ( v89->max_length <= 5 )
    goto LABEL_83;
  v89->m_Items[5] = (Il2CppObject *)v124;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->m_Items[5], v124, v118, v119, v120, v121, v122, v123);
  v90 = StringLiteral_22521/*"onupdate"*/;
  if ( StringLiteral_22521/*"onupdate"*/ )
  {
    v90 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v89->obj.klass->_1.element_class);
    if ( !v90 )
      goto LABEL_84;
    v91 = StringLiteral_22521/*"onupdate"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v89->max_length <= 6 )
    goto LABEL_83;
  v89->m_Items[6] = (Il2CppObject *)v91;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->m_Items[6], v91, v125, v126, v127, v128, v129, v130);
  v90 = StringLiteral_15347/*"UpdateColor"*/;
  if ( StringLiteral_15347/*"UpdateColor"*/ )
  {
    v90 = sub_1BCA91C(StringLiteral_15347/*"UpdateColor"*/, v89->obj.klass->_1.element_class);
    if ( !v90 )
      goto LABEL_84;
    v91 = StringLiteral_15347/*"UpdateColor"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v89->max_length <= 7 )
    goto LABEL_83;
  v89->m_Items[7] = (Il2CppObject *)v91;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->m_Items[7], v91, v131, v132, v133, v134, v135, v136);
  v90 = StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v90 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v89->obj.klass->_1.element_class);
    if ( !v90 )
      goto LABEL_84;
    v91 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v89->max_length <= 8 )
    goto LABEL_83;
  v89->m_Items[8] = (Il2CppObject *)v91;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->m_Items[8], v91, v137, v138, v139, v140, v141, v142);
  v90 = StringLiteral_19195/*"endChangeColor"*/;
  if ( StringLiteral_19195/*"endChangeColor"*/ )
  {
    v90 = sub_1BCA91C(StringLiteral_19195/*"endChangeColor"*/, v89->obj.klass->_1.element_class);
    if ( v90 )
    {
      v91 = StringLiteral_19195/*"endChangeColor"*/;
      goto LABEL_78;
    }
    goto LABEL_84;
  }
  v91 = 0LL;
LABEL_78:
  if ( v89->max_length <= 9 )
LABEL_83:
    sub_1BCAA44(v90, v91);
  v89->m_Items[9] = (Il2CppObject *)v91;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->m_Items[9], v91, v143, v144, v145, v146, v147, v148);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v149);
  v150 = iTween__Hash(v89, 0LL);
  iTween__ValueTo(gameObject, v150, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
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
  int32_t fade; // w8
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  BgResourceData_o *BgResource; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  __int64 v22; // x1
  int64_t v23; // x2
  __int64 v24; // x3
  struct System_Action_o *EndCallback; // x8
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  BgResourceData_Fields fields; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  __int64 v33; // x8
  AssetLoader_LoadEndDataHandler_o *v34; // x21
  __int64 v35; // x1
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B190FB & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceBg_endChangeBg__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v8, v9);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
    byte_4B190FB = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    v36.fields.r = 0.0;
    v36.fields.g = 0.0;
    v36.fields.b = 0.0;
    v36.fields.a = 1.0;
    UnityEngine_RenderSettings__set_ambientLight(v36, 0LL);
    BattlePerformanceBg__ReleaseBg(this, v13);
    BgResource = BattlePerformanceBg__get_BgResource(this, v14);
    if ( BgResource )
    {
      BgResource = (BgResourceData_o *)BgResourceData__get_AssetPath(BgResource, 0LL);
      if ( this->fields.loadedChangeBgList )
      {
        v17 = (System_String_o *)BgResource;
        if ( System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)this->fields.loadedChangeBgList,
               (Il2CppObject *)BgResource,
               (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19, v20);
          AssetLoader_LoadEndDataHandler___ctor(
            v21,
            (Il2CppObject *)this,
            Method_BattlePerformanceBg_endChangeBg__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
          if ( AssetManager__getAsset_38504716(v17, v21, 0LL) )
            return;
LABEL_21:
          v34 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v23, v24);
          AssetLoader_LoadEndDataHandler___ctor(
            v34,
            (Il2CppObject *)this,
            Method_BattlePerformanceBg_endChangeBg__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v35);
          AssetManager__loadAssetStorage(v17, v34, 1, 0LL);
          return;
        }
        if ( !System_String__op_Inequality(v17, this->fields.initLoadedBgPath, 0LL) )
          goto LABEL_21;
        BgResource = (BgResourceData_o *)this->fields.loadedChangeBgList;
        if ( BgResource )
        {
          fields = BgResource->fields;
          v31 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(BgResource[1].klass);
          if ( fields )
          {
            klass_low = SLODWORD(BgResource[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)BgResource,
                (Il2CppObject *)v17,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = *(_QWORD *)&fields + 8 * klass_low;
              LODWORD(BgResource[1].klass) = klass_low + 1;
              *(_QWORD *)(v33 + 32) = v17;
              sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)v17, v23, v24, v26, v27, v28, v29);
            }
            goto LABEL_21;
          }
        }
      }
    }
    sub_1BCAA3C(BgResource, v16);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x23
  const MethodInfo *v31; // x4

  if ( (byte_4B190F2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&Method_BattlePerformanceBg___c__DisplayClass49_0__endloadBg_b__0__, v6, v7);
    sub_1BCA7E0(&BattlePerformanceBg___c__DisplayClass49_0_TypeInfo, v8, v9);
    byte_4B190F2 = 1;
  }
  v10 = sub_1BCAA2C(BattlePerformanceBg___c__DisplayClass49_0_TypeInfo, data, method, v3);
  BattlePerformanceBg___c__DisplayClass49_0___ctor((BattlePerformanceBg___c__DisplayClass49_0_o *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)data, v19, v20, v21, v22, v23, v24);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v10,
    Method_BattlePerformanceBg___c__DisplayClass49_0__endloadBg_b__0__,
    0LL);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v30, v31);
}


void __fastcall BattlePerformanceBg__endloadBgAll(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BattlePerformanceBg_BgState_o *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  __int64 v19; // x1
  UnityEngine_Object_o *frontobject; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *v27; // x22
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x22
  UnityEngine_Object_o *v30; // x22
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  _BOOL4 parentCamera; // w23
  BattlePerformanceBg_o *v37; // x22
  __int64 v38; // x2
  BattlePerformanceBg_o *v39; // x23
  __int64 v40; // x2
  BattlePerformanceBg_o *v41; // x23
  struct System_String_o *name; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  const MethodInfo *v55; // x2
  __int64 v56; // x1
  UnityEngine_Object_o *v57; // x20
  const MethodInfo *v58; // x2
  __int64 v59; // x2
  BattlePerformanceBg_o *v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v71; // w19
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  BattlePerformanceBg_ChangedBgArgs_o *v75; // x23

  v4 = this;
  if ( (byte_4B190F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data, method);
    sub_1BCA7E0(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v5, v6);
    this = (BattlePerformanceBg_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B190F3 = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_55;
  v9 = BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.nowBgState, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  p_bgobject = (UnityEngine_Object_o **)&v4->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)v4->fields.bgobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_10;
  frontobject = (UnityEngine_Object_o *)v4->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_10:
    v27 = *p_bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
    {
      v29 = *p_bgobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      UnityEngine_Object__Destroy_70154244(v29, 0LL);
    }
    v30 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    {
      v32 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
      UnityEngine_Object__Destroy_70154244(v32, 0LL);
    }
    actionCamera = (UnityEngine_Object_o *)v4->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      this = (BattlePerformanceBg_o *)v4->fields.actionCamera;
      if ( !this )
        goto LABEL_55;
      BattleActionCamera__stopCameraAnimation((BattleActionCamera_o *)this, 0LL);
    }
    BattlePerformanceBg__ReleaseBgAsset(v4, v4->fields.nowBgAssetPath, v34);
  }
  v4->fields.BgAssetData = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.BgAssetData, (int64_t)data, v21, v22, v23, v24, v25, v26);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__GetBgObject(v4, data, v35);
  if ( !this )
    goto LABEL_55;
  parentCamera = v4->fields.parentCamera;
  v37 = this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
    v39 = this;
    if ( !byte_4B109C1 )
    {
      this = (BattlePerformanceBg_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v38);
      byte_4B109C1 = 1;
    }
    if ( !v39 )
      goto LABEL_55;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v39,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
  if ( !this )
    goto LABEL_55;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
  v41 = this;
  if ( !byte_4B109C6 )
  {
    this = (BattlePerformanceBg_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v40);
    byte_4B109C6 = 1;
  }
  if ( !v41 )
    goto LABEL_55;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v41,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  name = data->fields.name;
  v4->fields.nowBgAssetPath = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.nowBgAssetPath, (int64_t)name, v43, v44, v45, v46, v47, v48);
  v4->fields.bgobject = (struct UnityEngine_GameObject_o *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.bgobject, (int64_t)v37, v49, v50, v51, v52, v53, v54);
  v57 = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(v4, data, v55);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v57, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v57 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v57, 0LL);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v57, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v57, 0LL);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
            this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v57, 0LL);
            v60 = this;
            if ( !byte_4B109C6 )
            {
              this = (BattlePerformanceBg_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v59);
              byte_4B109C6 = 1;
            }
            if ( v60 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v60,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0LL);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v57;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v4->fields.frontobject,
                (int64_t)v57,
                v61,
                v62,
                v63,
                v64,
                v65,
                v66);
              goto LABEL_53;
            }
          }
        }
      }
    }
LABEL_55:
    sub_1BCAA3C(this, data);
  }
LABEL_53:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v58);
  if ( !nowBgState )
    goto LABEL_55;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, 0LL);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  loadbgno = v4->fields.loadbgno;
  loadbgType = v4->fields.loadbgType;
  v71 = v4->fields.parentCamera;
  v75 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_1BCAA2C(BattlePerformanceBg_ChangedBgArgs_TypeInfo, v72, v73, v74);
  BattlePerformanceBg_ChangedBgArgs___ctor(v75, loadbgno, loadbgType, v71, 0LL);
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v75,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


// local variable allocation has failed, the output may be wrong!
BattleBgComponent_array *__fastcall BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *bgobject; // x22
  __int64 v19; // x1
  UnityEngine_GameObject_o *ComponentsInChildren_object; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_4B190EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___, includeInactive, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleBgComponent__TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B190EB = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleBgComponent__TypeInfo,
                                                       includeInactive,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
  {
    ComponentsInChildren_object = this->fields.bgobject;
    if ( !ComponentsInChildren_object )
      goto LABEL_17;
    ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                ComponentsInChildren_object,
                                                                includeInactive,
                                                                (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v16 )
      goto LABEL_17;
    System_Collections_Generic_List_object___AddRange(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
  {
    if ( v16 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v16,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_17:
    sub_1BCAA3C(ComponentsInChildren_object, v19);
  }
  ComponentsInChildren_object = this->fields.frontobject;
  if ( !ComponentsInChildren_object )
    goto LABEL_17;
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                              ComponentsInChildren_object,
                                                              includeInactive,
                                                              (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v16 )
    goto LABEL_17;
  System_Collections_Generic_List_object___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                      v16,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
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
  __int64 v24; // x3
  __int64 v25; // x20
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v27; // x1
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct BattlePerformanceBg_BgState_o *v35; // x8
  int64_t bgName; // x1
  struct BattlePerformanceBg_BgState_o *v37; // x8
  unsigned int Count; // w0
  int64_t v39; // x0
  _DWORD **v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct BattlePerformanceBg_BgState_o *v47; // x8
  unsigned int v48; // w25
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  Il2CppObject *value; // x23
  Il2CppObject *key; // x24
  int64_t v54; // x22
  __int64 v55; // x0
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x0
  __int64 v70; // x1
  _DWORD *v71; // x23
  __int64 v72; // x0
  __int64 v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  _DWORD *v80; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  __int64 v82; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v83; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v84; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B190E8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method, v2);
    sub_1BCA7E0(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__,
      v14,
      v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__, v16, v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__,
      v18,
      v19);
    sub_1BCA7E0(&BattlePerformanceBg_SaveData_TypeInfo, v20, v21);
    byte_4B190E8 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  v25 = sub_1BCAA2C(BattlePerformanceBg_SaveData_TypeInfo, v22, v23, v24);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v25, 0LL);
  nowBgState = this->fields.nowBgState;
  if ( nowBgState )
  {
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)nowBgState->fields.compDictionary;
    if ( !compDictionary )
      goto LABEL_26;
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                                  compDictionary,
                                                                                  (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    if ( (int)compDictionary >= 1 )
    {
      v35 = this->fields.nowBgState;
      if ( !v35 )
        goto LABEL_26;
      if ( !v25 )
        goto LABEL_26;
      bgName = (int64_t)v35->fields.bgName;
      *(_QWORD *)(v25 + 16) = bgName;
      sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), bgName, v29, v30, v31, v32, v33, v34);
      v37 = this->fields.nowBgState;
      if ( !v37 )
        goto LABEL_26;
      compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v37->fields.compDictionary;
      if ( !compDictionary
        || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                      compDictionary,
                      (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__),
            v39 = sub_1BCA888(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count),
            *(_QWORD *)(v25 + 24) = v39,
            v40 = (_DWORD **)(v25 + 24),
            sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 24), v39, v41, v42, v43, v44, v45, v46),
            (v47 = this->fields.nowBgState) == 0LL)
        || (compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v47->fields.compDictionary) == 0LL )
      {
LABEL_26:
        sub_1BCAA3C(compDictionary, v27);
      }
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v83,
        compDictionary,
        (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
      v84 = v83;
      v48 = 0;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v84,
                (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
      {
        key = v84.fields._current.fields.key;
        value = v84.fields._current.fields.value;
        v54 = sub_1BCAA2C(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v49, v50, v51);
        BattlePerformanceBg_SaveData_CompSaveData___ctor((BattlePerformanceBg_SaveData_CompSaveData_o *)v54, 0LL);
        if ( !v54 )
          sub_1BCAA3C(v55, v56);
        *(_QWORD *)(v54 + 16) = key;
        sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 16), (int64_t)key, v57, v58, v59, v60, v61, v62);
        *(_QWORD *)(v54 + 24) = value;
        sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 24), (int64_t)value, v63, v64, v65, v66, v67, v68);
        v71 = *v40;
        if ( !*v40 )
          sub_1BCAA3C(v69, v70);
        v72 = sub_1BCA91C(v54, *(_QWORD *)(*(_QWORD *)v71 + 64LL));
        if ( !v72 )
        {
          v82 = sub_1BCAA60(0LL);
          sub_1BCA908(v82, 0LL);
        }
        if ( v48 >= v71[6] )
          sub_1BCAA44(v72, v73);
        v80 = &v71[2 * v48];
        *((_QWORD *)v80 + 4) = v54;
        sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 8), v54, v74, v75, v76, v77, v78, v79);
        ++v48;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v84,
        (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    }
  }
  if ( !v25 )
    goto LABEL_26;
  result = (BattlePerformanceBg_SaveData_o *)v25;
  *(_QWORD *)(v25 + 32) = *(_QWORD *)&this->fields.loadbgno;
  return result;
}


BgResourceData_o *__fastcall BattlePerformanceBg__get_BgResource(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BgResourceData_o *cachedBgResource; // x21
  int32_t loadbgno; // w22
  int32_t loadbgType; // w23
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B190E7 & 1) == 0 )
  {
    sub_1BCA7E0(&BgResourceData_TypeInfo, method, v2);
    byte_4B190E7 = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    loadbgno = this->fields.loadbgno;
    loadbgType = this->fields.loadbgType;
    cachedBgResource = (BgResourceData_o *)sub_1BCAA2C(BgResourceData_TypeInfo, method, v2, v3);
    BgResourceData___ctor(cachedBgResource, loadbgno, loadbgType, 0LL);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.cachedBgResource,
      (int64_t)cachedBgResource,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__loadBg(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x1
  BgResourceData_o *BgResource; // x0
  __int64 v13; // x1
  struct System_String_o *AssetPath; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  __int64 v25; // x1

  if ( (byte_4B190EF & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&no, *(_QWORD *)&tp);
    sub_1BCA7E0(&Method_BattlePerformanceBg_endloadBg__, v7, v8);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    byte_4B190EF = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_8;
  BattlePerformanceBg__InitLoadBgInfo(this, no, tp, method);
  BgResource = BattlePerformanceBg__get_BgResource(this, v11);
  if ( !BgResource )
    sub_1BCAA3C(0LL, v13);
  AssetPath = BgResourceData__get_AssetPath(BgResource, 0LL);
  this->fields.initLoadedBgPath = AssetPath;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.initLoadedBgPath,
    (int64_t)AssetPath,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v21, v22, v23);
  AssetLoader_LoadEndDataHandler___ctor(v24, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  if ( !AssetManager__loadAssetStorage(AssetPath, v24, 1, 0LL) )
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
        sub_1BCAA44(BattleBgComponents, v9);
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
    sub_1BCAA3C(BattleBgComponents, v9);
  }
}


void __fastcall BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B19100 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22798/*"playerfield"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_3264/*"BattleIn"*/, v5, v6);
    byte_4B19100 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22798/*"playerfield"*/,
    (System_String_o *)StringLiteral_3264/*"BattleIn"*/,
    0.0,
    v3);
}


void __fastcall BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B190FF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3266/*"BattleOut"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_22798/*"playerfield"*/, v5, v6);
    byte_4B190FF = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22798/*"playerfield"*/,
    (System_String_o *)StringLiteral_3266/*"BattleOut"*/,
    0.0,
    v3);
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
        sub_1BCAA44(BattleBgComponents, v4);
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
    sub_1BCAA3C(BattleBgComponents, v4);
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
  UnityEngine_Object_o *bgobject; // x21
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  struct BattlePerformanceBg_BgState_o *v21; // x8
  struct BattlePerformanceBg_BgState_o *v22; // x8
  struct BattlePerformanceBg_BgState_o *v23; // x2
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v27; // x21

  if ( (byte_4B190FD & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceBg_BgState_TypeInfo, inName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__, v5, v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B190FD = 1;
  }
  if ( this->fields.nowBgState )
  {
    bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, inName);
    if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
      goto LABEL_10;
    frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
    {
LABEL_10:
      nowBgState = this->fields.nowBgState;
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v17);
      if ( !nowBgState )
        goto LABEL_30;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, 0LL);
      v21 = this->fields.nowBgState;
      if ( !v21 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                        (Il2CppObject *)v21->fields.bgName,
                                                        (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v22 = this->fields.nowBgState;
        if ( !v22 )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___Remove(
                                                          (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                          (Il2CppObject *)v22->fields.bgName,
                                                          (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v23 = this->fields.nowBgState;
      if ( !v23 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
        (Il2CppObject *)v23->fields.bgName,
        (Il2CppObject *)v23,
        (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
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
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
    if ( BattleBgComponents )
      return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                (Il2CppObject *)inName,
                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
LABEL_30:
    sub_1BCAA3C(BattleBgComponents, inName);
  }
  v27 = sub_1BCAA2C(BattlePerformanceBg_BgState_TypeInfo, inName, v24, v25);
  BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v27, inName, 0LL);
  if ( !v27 )
    goto LABEL_30;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
    *(Il2CppObject **)(v27 + 16),
    (Il2CppObject *)v27,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
  return (BattlePerformanceBg_BgState_o *)v27;
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
        sub_1BCAA44(BattleBgComponents, v5);
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
    sub_1BCAA3C(BattleBgComponents, v5);
  }
}


void __fastcall BattlePerformanceBg__setSaveData(
        BattlePerformanceBg_o *this,
        BattlePerformanceBg_SaveData_o *saveData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *compSaveDataList; // x8
  struct BattlePerformanceBg_BgState_o *v10; // x0
  struct BattlePerformanceBg_BgState_o **p_nowBgState; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v21; // x21
  int max_length; // w8
  unsigned int v23; // w22
  BattlePerformanceBg_SaveData_CompSaveData_o *v24; // x25
  BattlePerformanceBg_BgState_o *nowBgState; // x20

  if ( (byte_4B190E9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__,
      saveData,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, v6, v7);
    byte_4B190E9 = 1;
  }
  if ( saveData )
  {
    BattlePerformanceBg__InitLoadBgInfo(this, saveData->fields.bgNo, saveData->fields.bgTp, v3);
    compSaveDataList = saveData->fields.compSaveDataList;
    if ( compSaveDataList )
    {
      if ( *(_QWORD *)&compSaveDataList->max_length )
      {
        v10 = BattlePerformanceBg__saveHistoryBgState(this, saveData->fields.bgName, v8);
        this->fields.nowBgState = v10;
        p_nowBgState = &this->fields.nowBgState;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nowBgState, (int64_t)v10, v12, v13, v14, v15, v16, v17);
        v21 = saveData->fields.compSaveDataList;
        if ( !v21 )
          goto LABEL_21;
        max_length = v21->max_length;
        if ( max_length >= 1 )
        {
          v23 = 0;
          while ( 1 )
          {
            if ( v23 >= max_length )
              sub_1BCAA44(compDictionary, v19);
            if ( !*p_nowBgState )
              break;
            v24 = v21->m_Items[v23];
            if ( !v24 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
            if ( !compDictionary )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                          compDictionary,
                                                                                          (Il2CppObject *)v24->fields.bgCompName,
                                                                                          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
            if ( ((unsigned __int8)compDictionary & 1) == 0 )
            {
              if ( !*p_nowBgState )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_object__object___Add(
                compDictionary,
                (Il2CppObject *)v24->fields.bgCompName,
                (Il2CppObject *)v24->fields.bgCompData,
                (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
            }
            max_length = v21->max_length;
            if ( (int)++v23 >= max_length )
              goto LABEL_18;
          }
LABEL_21:
          sub_1BCAA3C(compDictionary, v19);
        }
LABEL_18:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattlePerformanceBg__getBattleBgComponents(
                                                                                      this,
                                                                                      0,
                                                                                      v20);
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
  sub_1BCA784((PartyOrganizationUtility_o *)v18, (int64_t)callback, v21, v22, v23, v24, v25, v26);
}


void __fastcall BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B19105 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__,
      inName,
      method);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo, v5, v6);
    byte_4B19105 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = inName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)inName, v7, v8, v9, v10, v11, v12);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo,
                                                                     v13,
                                                                     v14,
                                                                     v15);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  this->fields.compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.compDictionary, (int64_t)v16, v17, v18, v19, v20, v21, v22);
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
  __int64 v11; // x1
  __int64 v12; // x2
  signed int max_length; // w8
  unsigned int v14; // w24
  BattleBgComponent_o *v15; // x22
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_object__object__o *v17; // x23
  Il2CppObject *Item; // x0

  v10 = this;
  if ( (byte_4B19107 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__,
      list,
      actionCamera);
    this = (BattlePerformanceBg_BgState_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__,
                                              v11,
                                              v12);
    byte_4B19107 = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1BCAA44(this, list);
      v15 = list->m_Items[v14];
      if ( !v15 )
        break;
      v15->fields.actionCamera = actionCamera;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v15->fields.actionCamera,
        (int64_t)actionCamera,
        (int64_t)actionCamera,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      if ( v15->fields.isRecAnimation )
      {
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v15, 0LL);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  compDictionary,
                                                  (Il2CppObject *)this,
                                                  (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v17 = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v15, 0LL);
          if ( !v17 )
            break;
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v17,
                   (Il2CppObject *)this,
                   (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v15, (BattleBgComponent_SaveData_o *)Item, 0LL);
        }
      }
      max_length = list->max_length;
      if ( (int)++v14 >= max_length )
        return;
    }
LABEL_15:
    sub_1BCAA3C(this, list);
  }
}


void __fastcall BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  signed int max_length; // w8
  unsigned int v9; // w24
  BattleBgComponent_o *v10; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v11; // x21
  Il2CppObject *name; // x23

  if ( (byte_4B19106 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, list, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__, v5, v6);
    byte_4B19106 = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_object__object___Clear(
    compDictionary,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1BCAA44(compDictionary, list);
      v10 = list->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10->fields.isRecAnimation )
      {
        v11 = this->fields.compDictionary;
        name = (Il2CppObject *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponent__getSaveData(
                                                                                      v10,
                                                                                      0LL);
        if ( !v11 )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)v11,
          name,
          (Il2CppObject *)compDictionary,
          (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_14:
    sub_1BCAA3C(compDictionary, list);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B19108 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method, v2);
    sub_1BCA7E0(&string_TypeInfo, v4, v5);
    byte_4B19108 = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)Empty, v8, v9, v10, v11, v12, v13);
  v14 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_1BCA888(
                                                                    BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                    0LL);
  this->fields.compSaveDataList = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.compSaveDataList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass49_0___ctor(
        BattlePerformanceBg___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass49_0___endloadBg_b__0(
        BattlePerformanceBg___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  BattlePerformanceBg__endloadBgAll(_4__this, this->fields.data, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass69_0___ctor(
        BattlePerformanceBg___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceBg___c__DisplayClass69_0___FindComponentByKey_b__0(
        BattlePerformanceBg___c__DisplayClass69_0_o *this,
        BattleBgComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattleBgComponent__checkKey(x, this->fields.key, 0LL);
}