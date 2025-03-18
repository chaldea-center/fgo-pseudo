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

  if ( (byte_4C25008 & 1) == 0 )
  {
    sub_1C3B764(&BattlePerformanceBg_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_20043/*"img_parameter_endurance"*/, v8);
    byte_4C25008 = 1;
  }
  BattlePerformanceBg_TypeInfo->static_fields->Frontfile = (struct System_String_o *)StringLiteral_20043/*"img_parameter_endurance"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BattlePerformanceBg_TypeInfo->static_fields,
    StringLiteral_20043/*"img_parameter_endurance"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_Dictionary_object__object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4C25007 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1C3B764(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo, v6);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1C3B764(&string_TypeInfo, v8);
    byte_4C25007 = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.loadedChangeBgList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.initLoadedBgPath,
    (int64_t)Empty,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v24;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.bgSpShadowList, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v31,
    (const MethodInfo_3354DB8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v31;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.historyBgState, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v38;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.bgInfoList, (int64_t)v38, v39, v40, v41, v42, v43, v44);
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

  if ( (byte_4C25005 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo, callback);
    byte_4C25005 = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (PartyOrganizationUtility_o *)&this->fields.onLoadBgFinished;
  v7 = System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0LL);
  if ( !v7 )
    goto LABEL_7;
  v14 = v7;
  v15 = sub_1C3B8A0(v7, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
  if ( !v15
    || (p_onLoadBgFinished->klass = (PartyOrganizationUtility_c *)v15,
        (v16 = sub_1C3B8A0(v14, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo)) == 0) )
  {
    sub_1C3BC80(v14);
LABEL_7:
    v16 = 0LL;
    p_onLoadBgFinished->klass = 0LL;
  }
  sub_1C3B708(p_onLoadBgFinished, v16, v8, v9, v10, v11, v12, v13);
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
  BattlePerformanceBg_BgInfo_o *v22; // x0
  Il2CppObject *v23; // x20
  const MethodInfo *v24; // x6
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
  if ( (byte_4C24FF8 & 1) == 0 )
  {
    sub_1C3B764(&BattlePerformanceBg_BgInfo_TypeInfo, *(_QWORD *)&No);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__, v21);
    byte_4C24FF8 = 1;
  }
  v22 = (BattlePerformanceBg_BgInfo_o *)sub_1C3B9B0(BattlePerformanceBg_BgInfo_TypeInfo);
  v37.fields.x = v17;
  v37.fields.y = v16;
  v37.fields.z = v15;
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v23 = (Il2CppObject *)v22;
  BattlePerformanceBg_BgInfo___ctor(v22, No, tp, v37, v38, changeDirect, parentCamera, callback, v24);
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (items = bgInfoList->fields._items,
        v34 = Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__,
        ++bgInfoList->fields._version,
        !items) )
  {
    sub_1C3B9C0(bgInfoList, v25);
  }
  size = bgInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgInfoList,
      v23,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    bgInfoList->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v23;
    sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v23, v26, v27, v28, v29, v30, v31);
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
    sub_1C3B9C0(this, 0LL);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onLoadBgFinished, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg__DebugPrint(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_1C3B9C0(this, data);
}


bool __fastcall BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_4C24FF9 & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_1C3B764(
                                      &Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__,
                                      method);
    byte_4C24FF9 = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_1C3B9C0(this, method);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *__fastcall BattlePerformanceBg__FetchBgInfo(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  System_Collections_Generic_List_object__o *v6; // x8
  BattlePerformanceBg_BgInfo_o *v7; // x19

  if ( (byte_4C24FFA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__, v3);
    byte_4C24FFA = 1;
  }
  if ( !BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
    return 0LL;
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (bgInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bgInfoList,
                                                                    0,
                                                                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__),
        (v6 = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList) == 0LL) )
  {
    sub_1C3B9C0(bgInfoList, v4);
  }
  v7 = (BattlePerformanceBg_BgInfo_o *)bgInfoList;
  System_Collections_Generic_List_object___RemoveAt(
    v6,
    0,
    (const MethodInfo_368D440 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v7;
}


BattleBgComponent_o *__fastcall BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2
  System_Object_array *BattleBgComponents; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4C25002 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Find_BattleBgComponent___, key);
    sub_1C3B764(&System_Func_BattleBgComponent__bool__TypeInfo, v5);
    sub_1C3B764(&Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__, v6);
    sub_1C3B764(&BattlePerformanceBg___c__DisplayClass70_0_TypeInfo, v7);
    byte_4C25002 = 1;
  }
  v8 = sub_1C3B9B0(BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v9, v10);
  *(_QWORD *)(v8 + 16) = key;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)key, v11, v12, v13, v14, v15, v16);
  BattleBgComponents = (System_Object_array *)BattlePerformanceBg__getBattleBgComponents(this, 0, v17);
  v19 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BattleBgComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__,
    0LL);
  return (BattleBgComponent_o *)BasicHelper__Find_object_(
                                  BattleBgComponents,
                                  (System_Func_T__bool__o *)v19,
                                  (const MethodInfo_2FDB740 *)Method_BasicHelper_Find_BattleBgComponent___);
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__GetBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BgResourceData_o *BgResource; // x0
  __int64 v10; // x1
  System_String_o *v11; // x1
  System_String_o *v12; // x0
  Il2CppObject *v13; // x20
  Il2CppObject *Object_object__50142412; // x20
  Il2CppObject *v16; // x19
  Il2CppObject *v17; // x19
  int32_t Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C24FFC & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, data);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_17499/*"charaBackEffectPause"*/, v7);
    sub_1C3B764(&StringLiteral_17502/*"charaChange"*/, v8);
    byte_4C24FFC = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    sub_1C3B9C0(0LL, v10);
  Type_k__BackingField = BgResource->fields._Type_k__BackingField;
  if ( Type_k__BackingField < 1 )
  {
    if ( !data )
      sub_1C3B9C0(BgResource, v10);
    Object_object__50142412 = AssetData__GetObject_object__50142412(
                                data,
                                (System_String_o *)StringLiteral_17499/*"charaBackEffectPause"*/,
                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50142412, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__50142412,
                                           (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v17 = AssetData__GetObject_object__50142412(
              data,
              (System_String_o *)StringLiteral_17502/*"charaChange"*/,
              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v17,
                                           (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v11 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0LL);
    v12 = System_String__Concat_63368612((System_String_o *)StringLiteral_17499/*"charaBackEffectPause"*/, v11, 0LL);
    if ( !data )
      sub_1C3B9C0(v12, v12);
    v13 = AssetData__GetObject_object__50142412(
            data,
            v12,
            (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v13,
                                           (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v16 = AssetData__GetObject_object__50142412(
              data,
              (System_String_o *)StringLiteral_17499/*"charaBackEffectPause"*/,
              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v16,
                                           (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__GetFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *BgResource; // x0
  __int64 v9; // x1
  int v10; // w22
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  Il2CppObject *Object_object__50142412; // x20
  BattlePerformanceBg_c *v14; // x0
  bool v15; // w8
  UnityEngine_GameObject_o *result; // x0
  int v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C24FFD & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, data);
    sub_1C3B764(&BattlePerformanceBg_TypeInfo, v5);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C24FFD = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    goto LABEL_21;
  v10 = *((_DWORD *)BgResource + 5);
  BgResource = BattlePerformanceBg_TypeInfo;
  v17 = v10;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    BgResource = BattlePerformanceBg_TypeInfo;
  }
  v11 = (System_String_o *)**((_QWORD **)BgResource + 23);
  if ( v10 >= 1 )
  {
    v12 = System_Int32__ToString((int32_t)&v17, 0LL);
    BgResource = System_String__Concat_63368612(v11, v12, 0LL);
    v11 = (System_String_o *)BgResource;
  }
  if ( !data )
LABEL_21:
    sub_1C3B9C0(BgResource, v9);
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              data,
                              v11,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50142412, 0LL, 0LL) )
    goto LABEL_24;
  v14 = BattlePerformanceBg_TypeInfo;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v14 = BattlePerformanceBg_TypeInfo;
  }
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              data,
                              v14->static_fields->Frontfile,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50142412, 0LL, 0LL);
  result = 0LL;
  if ( v15 )
  {
LABEL_24:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__50142412,
                                         (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  AssetData_o *BgAssetData; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = shadowId;
  if ( (byte_4C25000 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_Texture2D____77902880, *(_QWORD *)&shadowId);
    sub_1C3B764(&StringLiteral_23737/*"treasurechest_img_frame_0{0}b"*/, v4);
    byte_4C25000 = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0LL;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_63368612((System_String_o *)StringLiteral_23737/*"treasurechest_img_frame_0{0}b"*/, v6, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__50142412(
                                      BgAssetData,
                                      v7,
                                      (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
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

  if ( (byte_4C24FF3 & 1) == 0 )
  {
    sub_1C3B764(&BgResourceData_TypeInfo, *(_QWORD *)&bgId);
    byte_4C24FF3 = 1;
  }
  this->fields.loadbgno = bgId;
  this->fields.loadbgType = bgType;
  v7 = (BgResourceData_o *)sub_1C3B9B0(BgResourceData_TypeInfo);
  BgResourceData___ctor(v7, bgId, bgType, 0LL);
  this->fields.cachedBgResource = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.cachedBgResource, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__LoadBgSpShadowEffect(
        BattlePerformanceBg_o *this,
        int32_t bgId,
        int32_t bgType,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
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
  int32_t v26; // w20
  int32_t v27; // w21
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x5

  if ( (byte_4C24FF4 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&bgId);
    sub_1C3B764(&Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__, v9);
    sub_1C3B764(&BattlePerformanceBg___c__DisplayClass48_0_TypeInfo, v10);
    byte_4C24FF4 = 1;
  }
  v11 = sub_1C3B9B0(BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C3B9C0(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = bgId;
  *(_DWORD *)(v11 + 28) = bgType;
  *(_QWORD *)(v11 + 32) = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)finishCallback, v20, v21, v22, v23, v24, v25);
  v26 = *(_DWORD *)(v11 + 24);
  v27 = *(_DWORD *)(v11 + 28);
  v28 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v11,
    Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__,
    0LL);
  BattlePerformanceBg__LoadBgSpShadowEffectLocal(this, v26, v27, 1, v28, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__LoadBgSpShadowEffectLocal(
        BattlePerformanceBg_o *this,
        int32_t battleBgId,
        int32_t battleBgType,
        bool isEnemySide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x19
  BattleBgMaster_o *Master_object; // x0
  Il2CppObject *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v29; // w21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v39; // x8
  System_String_o *v40; // x20
  AssetLoader_LoadEndDataHandler_o *v41; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C24FF5 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, *(_QWORD *)&battleBgId);
    sub_1C3B764(&BattleEffectUtility_TypeInfo, v11);
    sub_1C3B764(&Method_DataManager_GetMaster_BattleBgMaster___, v12);
    sub_1C3B764(&DataManager_TypeInfo, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Contains__, v15);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v16);
    sub_1C3B764(&Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__, v17);
    sub_1C3B764(&BattlePerformanceBg___c__DisplayClass49_0_TypeInfo, v18);
    byte_4C24FF5 = 1;
  }
  effectPath = 0LL;
  v19 = sub_1C3B9B0(BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_23;
  *(_QWORD *)(v19 + 16) = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BattleBgMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BattleBgMaster___);
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
  v29 = BgSpecialShadowEffectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v29, 0LL) )
    goto LABEL_13;
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object )
    goto LABEL_23;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)Master_object,
         (Il2CppObject *)effectPath,
         (const MethodInfo_368BFFC *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_13:
    ActionExtensions__Call(*(System_Action_o **)(v19 + 16), 0LL);
    return;
  }
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object
    || (v21 = (Il2CppObject *)effectPath,
        v36 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v37 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v36) )
  {
LABEL_23:
    sub_1C3B9C0(Master_object, v21);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v21,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = v36 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v39 + 32) = v21;
    sub_1C3B708((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v21, v30, v31, v32, v33, v34, v35);
  }
  v40 = effectPath;
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v41,
    (Il2CppObject *)v19,
    Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v40, v41, 1, 0LL);
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

  if ( (byte_4C24FED & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C24FED = 1;
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
      UnityEngine_Object__Destroy_71122748(v8, 0LL);
      *p_bgobject = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.bgobject, 0LL, v9, v10, v11, v12, v13, v14);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      v17 = this->fields.actionCamera;
      if ( !v17 )
        sub_1C3B9C0(0LL, v16);
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
      UnityEngine_Object__Destroy_71122748(v21, 0LL);
      *p_frontobject = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.frontobject, 0LL, v22, v23, v24, v25, v26, v27);
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24FF0 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, path);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Remove__, v6);
    byte_4C24FF0 = 1;
  }
  if ( !System_String__IsNullOrEmpty(path, 0LL) )
  {
    loadedChangeBgList = this->fields.loadedChangeBgList;
    if ( loadedChangeBgList )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)loadedChangeBgList,
              (Il2CppObject *)path,
              (const MethodInfo_368BFFC *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_8:
        this->fields.BgAssetData = 0LL;
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.BgAssetData, 0LL, v9, v10, v11, v12, v13, v14);
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
          (const MethodInfo_368D194 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_8;
      }
    }
    sub_1C3B9C0(loadedChangeBgList, v7);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C24FF1 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4C24FF1 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)bgSpShadowList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v13.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v10 = this->fields.bgSpShadowList;
  if ( !v10 )
LABEL_13:
    sub_1C3B9C0(bgSpShadowList, method);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
}


void __fastcall BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C24FEF & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4C24FEF = 1;
  }
  memset(&v14, 0, sizeof(v14));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)loadedChangeBgList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_39213104(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.loadedChangeBgList;
  if ( !v11 )
LABEL_16:
    sub_1C3B9C0(loadedChangeBgList, method);
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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

  if ( (byte_4C25006 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C25006 = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_15:
    sub_1C3B9C0(BattleBgComponents, v5);
  v6 = *(_QWORD *)&BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1C3B9C8(BattleBgComponents, v5);
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  struct System_Action_o **p_EndCallback; // x25
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  char v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Object_array *v45; // x20
  __int64 v46; // x0
  int64_t v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  int64_t v51; // x2
  char v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x21
  int64_t v58; // x2
  char v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  int64_t v67; // x2
  char v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x21
  int64_t v74; // x2
  char v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int64_t v83; // x2
  char v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x21
  int64_t v90; // x2
  char v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x2
  char v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  char v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x2
  char v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  System_Collections_Hashtable_o *v114; // x0
  __int64 v115; // x0
  __int128 v116; // [xsp+0h] [xbp-A0h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-90h] BYREF
  int v118; // [xsp+5Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  if ( (byte_4C24FFB & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Color_TypeInfo, *(_QWORD *)&No);
    sub_1C3B764(&object___TypeInfo, v22);
    sub_1C3B764(&float_TypeInfo, v23);
    sub_1C3B764(&StringLiteral_20040/*"img_parameter_D"*/, v24);
    sub_1C3B764(&StringLiteral_19371/*"gdprPath"*/, v25);
    sub_1C3B764(&StringLiteral_15486/*"[*]"*/, v26);
    sub_1C3B764(&StringLiteral_24427/*"x-cp20936"*/, v27);
    sub_1C3B764(&StringLiteral_22739/*"seagreen"*/, v28);
    sub_1C3B764(&StringLiteral_24469/*"x/("*/, v29);
    sub_1C3B764(&StringLiteral_22731/*"se-NO"*/, v30);
    sub_1C3B764(&iTween_TypeInfo, v31);
    byte_4C24FFB = 1;
  }
  if ( this->fields.IsLoading )
  {
    v119.fields.x = v18;
    v119.fields.y = v17;
    v119.fields.z = v16;
    v120.fields.x = x;
    v120.fields.y = y;
    v120.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v119, v120, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_1C3B708(
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
    BattlePerformanceBg__OnEndBgLoad(this, v33);
    return;
  }
  BattlePerformanceBg__InitLoadBgInfo(this, No, tp, v34);
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
    BattlePerformanceBg__endChangeColor(this, v35);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37 = sub_1C3B80C(object___TypeInfo, 10LL);
  if ( !v37 )
    sub_1C3B9C0(0LL, v38);
  v45 = (System_Object_array *)v37;
  v46 = StringLiteral_20040/*"img_parameter_D"*/;
  if ( StringLiteral_20040/*"img_parameter_D"*/ )
  {
    v46 = sub_1C3B8A0(StringLiteral_20040/*"img_parameter_D"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_61;
    v47 = StringLiteral_20040/*"img_parameter_D"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v45->max_length )
    goto LABEL_60;
  v45->m_Items[0] = (Il2CppObject *)v47;
  sub_1C3B708((PartyOrganizationUtility_o *)v45->m_Items, v47, v39, v40, v41, v42, v43, v44);
  tmpcolor = this->fields.tmpcolor;
  v46 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v48, v49, v50);
  v57 = v46;
  if ( v46 )
  {
    v46 = sub_1C3B8A0(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_61;
  }
  if ( v45->max_length <= 1 )
    goto LABEL_60;
  v45->m_Items[1] = (Il2CppObject *)v57;
  sub_1C3B708((PartyOrganizationUtility_o *)&v45->m_Items[1], v57, v51, v52, v53, v54, v55, v56);
  v46 = StringLiteral_24469/*"x/("*/;
  if ( StringLiteral_24469/*"x/("*/ )
  {
    v46 = sub_1C3B8A0(StringLiteral_24469/*"x/("*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_61;
    v47 = StringLiteral_24469/*"x/("*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 2 )
    goto LABEL_60;
  v45->m_Items[2] = (Il2CppObject *)v47;
  sub_1C3B708((PartyOrganizationUtility_o *)&v45->m_Items[2], v47, v58, v59, v60, v61, v62, v63);
  v116 = xmmword_C0E740;
  v46 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v116, v64, v65, v66);
  v73 = v46;
  if ( v46 )
  {
    v46 = sub_1C3B8A0(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_61;
  }
  if ( v45->max_length <= 3 )
    goto LABEL_60;
  v45->m_Items[3] = (Il2CppObject *)v73;
  sub_1C3B708((PartyOrganizationUtility_o *)&v45->m_Items[3], v73, v67, v68, v69, v70, v71, v72);
  v46 = StringLiteral_24427/*"x-cp20936"*/;
  if ( StringLiteral_24427/*"x-cp20936"*/ )
  {
    v46 = sub_1C3B8A0(StringLiteral_24427/*"x-cp20936"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_61;
    v47 = StringLiteral_24427/*"x-cp20936"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 4 )
    goto LABEL_60;
  v45->m_Items[4] = (Il2CppObject *)v47;
  sub_1C3B708((PartyOrganizationUtility_o *)&v45->m_Items[4], v47, v74, v75, v76, v77, v78, v79);
  v118 = 1056964608;
  v46 = j_il2cpp_value_box_0(float_TypeInfo, &v118, v80, v81, v82);
  v89 = v46;
  if ( v46 )
  {
    v46 = sub_1C3B8A0(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
    {
LABEL_61:
      v115 = sub_1C3B9E4(v46);
      sub_1C3B88C(v115, 0LL);
    }
  }
  if ( v45->max_length <= 5 )
    goto LABEL_60;
  v45->m_Items[5] = (Il2CppObject *)v89;
  sub_1C3B708((PartyOrganizationUtility_o *)&v45->m_Items[5], v89, v83, v84, v85, v86, v87, v88);
  v46 = StringLiteral_22739/*"seagreen"*/;
  if ( StringLiteral_22739/*"seagreen"*/ )
  {
    v46 = sub_1C3B8A0(StringLiteral_22739/*"seagreen"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_61;
    v47 = StringLiteral_22739/*"seagreen"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 6 )
    goto LABEL_60;
  v45->m_Items[6] = (Il2CppObject *)v47;
  sub_1C3B708((PartyOrganizationUtility_o *)&v45->m_Items[6], v47, v90, v91, v92, v93, v94, v95);
  v46 = StringLiteral_15486/*"[*]"*/;
  if ( StringLiteral_15486/*"[*]"*/ )
  {
    v46 = sub_1C3B8A0(StringLiteral_15486/*"[*]"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_61;
    v47 = StringLiteral_15486/*"[*]"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 7 )
    goto LABEL_60;
  v45->m_Items[7] = (Il2CppObject *)v47;
  sub_1C3B708((PartyOrganizationUtility_o *)&v45->m_Items[7], v47, v96, v97, v98, v99, v100, v101);
  v46 = StringLiteral_22731/*"se-NO"*/;
  if ( StringLiteral_22731/*"se-NO"*/ )
  {
    v46 = sub_1C3B8A0(StringLiteral_22731/*"se-NO"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_61;
    v47 = StringLiteral_22731/*"se-NO"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 8 )
    goto LABEL_60;
  v45->m_Items[8] = (Il2CppObject *)v47;
  sub_1C3B708((PartyOrganizationUtility_o *)&v45->m_Items[8], v47, v102, v103, v104, v105, v106, v107);
  v46 = StringLiteral_19371/*"gdprPath"*/;
  if ( StringLiteral_19371/*"gdprPath"*/ )
  {
    v46 = sub_1C3B8A0(StringLiteral_19371/*"gdprPath"*/, v45->obj.klass->_1.element_class);
    if ( v46 )
    {
      v47 = StringLiteral_19371/*"gdprPath"*/;
      goto LABEL_56;
    }
    goto LABEL_61;
  }
  v47 = 0LL;
LABEL_56:
  if ( v45->max_length <= 9 )
LABEL_60:
    sub_1C3B9C8(v46, v47);
  v45->m_Items[9] = (Il2CppObject *)v47;
  sub_1C3B708((PartyOrganizationUtility_o *)&v45->m_Items[9], v47, v108, v109, v110, v111, v112, v113);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v114 = iTween__Hash(v45, 0LL);
  iTween__ValueTo(gameObject, v114, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 BgObject; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  struct BattlePerformanceBg_BgState_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x2
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_Transform_o *v36; // x22
  UnityEngine_Transform_o *v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v46; // x2
  UnityEngine_Transform_o *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v55; // x3
  System_Action_T__o *onLoadBgFinished; // x20
  __int64 v57; // d8
  bool v58; // w23
  __int64 v59; // x21
  const MethodInfo *v60; // x1
  struct System_Action_o *EndCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Object_array *v69; // x21
  __int64 v70; // x0
  int64_t v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x22
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x19
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x19
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  System_Collections_Hashtable_o *v138; // x0
  __int64 v139; // x0
  struct UnityEngine_Color_o tmpcolor; // [xsp+0h] [xbp-70h] BYREF
  __int128 v141; // [xsp+10h] [xbp-60h] BYREF
  int v142; // [xsp+2Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v143; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C24FFE & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_1C3B764(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v10);
    sub_1C3B764(&UnityEngine_Color_TypeInfo, v11);
    sub_1C3B764(&object___TypeInfo, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&float_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_20040/*"img_parameter_D"*/, v15);
    sub_1C3B764(&StringLiteral_19371/*"gdprPath"*/, v16);
    sub_1C3B764(&StringLiteral_15486/*"[*]"*/, v17);
    sub_1C3B764(&StringLiteral_24427/*"x-cp20936"*/, v18);
    sub_1C3B764(&StringLiteral_22739/*"seagreen"*/, v19);
    sub_1C3B764(&StringLiteral_24469/*"x/("*/, v20);
    sub_1C3B764(&StringLiteral_22731/*"se-NO"*/, v21);
    sub_1C3B764(&iTween_TypeInfo, v22);
    byte_4C24FFE = 1;
  }
  this->fields.BgAssetData = data;
  sub_1C3B708(
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
  v26 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v25);
  this->fields.nowBgState = v26;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.nowBgState, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  BgObject = (__int64)BattlePerformanceBg__GetBgObject(this, data, v33);
  if ( !BgObject )
    goto LABEL_82;
  parentCamera = this->fields.parentCamera;
  v35 = (UnityEngine_GameObject_o *)BgObject;
  BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)BgObject, 0LL);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
    v36 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4C1C511 )
    {
      BgObject = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v24);
      byte_4C1C511 = 1;
    }
    if ( !v36 )
      goto LABEL_82;
    UnityEngine_Transform__set_eulerAngles(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
  if ( !BgObject )
    goto LABEL_82;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
  v37 = (UnityEngine_Transform_o *)BgObject;
  if ( !byte_4C1C516 )
  {
    BgObject = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v24);
    byte_4C1C516 = 1;
  }
  if ( !v37 )
    goto LABEL_82;
  UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this->fields.bgobject = v35;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.bgobject, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(this, data, v44);
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
    v47 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4C1C516 )
    {
      BgObject = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v24);
      byte_4C1C516 = 1;
    }
    if ( !v47 )
      goto LABEL_82;
    UnityEngine_Transform__set_localScale(v47, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.frontobject,
      (int64_t)FrontObject,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (__int64)BattlePerformanceBg__getBattleBgComponents(this, 0, v46);
  if ( !nowBgState )
    goto LABEL_82;
  BattlePerformanceBg_BgState__loadSaveData(
    nowBgState,
    (BattleBgComponent_array *)BgObject,
    this->fields.actionCamera,
    v55);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  v57 = *(_QWORD *)&this->fields.loadbgno;
  v58 = this->fields.parentCamera;
  v59 = sub_1C3B9B0(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v59, 0LL);
  *(_QWORD *)(v59 + 16) = v57;
  *(_BYTE *)(v59 + 24) = v58;
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v59,
    (const MethodInfo_2F42300 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    v143.fields.r = 1.0;
    v143.fields.g = 1.0;
    v143.fields.b = 1.0;
    v143.fields.a = 1.0;
    this->fields.fade = 0;
    UnityEngine_RenderSettings__set_ambientLight(v143, 0LL);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
        EndCallback->fields.original_method_info,
        *(_QWORD *)&EndCallback->fields.extra_arg);
    BattlePerformanceBg__OnEndBgLoad(this, v60);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BgObject = sub_1C3B80C(object___TypeInfo, 10LL);
  if ( !BgObject )
LABEL_82:
    sub_1C3B9C0(BgObject, v24);
  v69 = (System_Object_array *)BgObject;
  v70 = StringLiteral_20040/*"img_parameter_D"*/;
  if ( StringLiteral_20040/*"img_parameter_D"*/ )
  {
    v70 = sub_1C3B8A0(StringLiteral_20040/*"img_parameter_D"*/, v69->obj.klass->_1.element_class);
    if ( !v70 )
      goto LABEL_84;
    v71 = StringLiteral_20040/*"img_parameter_D"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( !v69->max_length )
    goto LABEL_83;
  v69->m_Items[0] = (Il2CppObject *)v71;
  sub_1C3B708((PartyOrganizationUtility_o *)v69->m_Items, v71, v63, v64, v65, v66, v67, v68);
  v141 = xmmword_C0E740;
  v70 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v141, v72, v73, v74);
  v81 = v70;
  if ( v70 )
  {
    v70 = sub_1C3B8A0(v70, v69->obj.klass->_1.element_class);
    if ( !v70 )
      goto LABEL_84;
  }
  if ( v69->max_length <= 1 )
    goto LABEL_83;
  v69->m_Items[1] = (Il2CppObject *)v81;
  sub_1C3B708((PartyOrganizationUtility_o *)&v69->m_Items[1], v81, v75, v76, v77, v78, v79, v80);
  v70 = StringLiteral_24469/*"x/("*/;
  if ( StringLiteral_24469/*"x/("*/ )
  {
    v70 = sub_1C3B8A0(StringLiteral_24469/*"x/("*/, v69->obj.klass->_1.element_class);
    if ( !v70 )
      goto LABEL_84;
    v71 = StringLiteral_24469/*"x/("*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v69->max_length <= 2 )
    goto LABEL_83;
  v69->m_Items[2] = (Il2CppObject *)v71;
  sub_1C3B708((PartyOrganizationUtility_o *)&v69->m_Items[2], v71, v82, v83, v84, v85, v86, v87);
  tmpcolor = this->fields.tmpcolor;
  v70 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v88, v89, v90);
  v97 = v70;
  if ( v70 )
  {
    v70 = sub_1C3B8A0(v70, v69->obj.klass->_1.element_class);
    if ( !v70 )
      goto LABEL_84;
  }
  if ( v69->max_length <= 3 )
    goto LABEL_83;
  v69->m_Items[3] = (Il2CppObject *)v97;
  sub_1C3B708((PartyOrganizationUtility_o *)&v69->m_Items[3], v97, v91, v92, v93, v94, v95, v96);
  v70 = StringLiteral_24427/*"x-cp20936"*/;
  if ( StringLiteral_24427/*"x-cp20936"*/ )
  {
    v70 = sub_1C3B8A0(StringLiteral_24427/*"x-cp20936"*/, v69->obj.klass->_1.element_class);
    if ( !v70 )
      goto LABEL_84;
    v71 = StringLiteral_24427/*"x-cp20936"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v69->max_length <= 4 )
    goto LABEL_83;
  v69->m_Items[4] = (Il2CppObject *)v71;
  sub_1C3B708((PartyOrganizationUtility_o *)&v69->m_Items[4], v71, v98, v99, v100, v101, v102, v103);
  v142 = 1056964608;
  v70 = j_il2cpp_value_box_0(float_TypeInfo, &v142, v104, v105, v106);
  v113 = v70;
  if ( v70 )
  {
    v70 = sub_1C3B8A0(v70, v69->obj.klass->_1.element_class);
    if ( !v70 )
    {
LABEL_84:
      v139 = sub_1C3B9E4(v70);
      sub_1C3B88C(v139, 0LL);
    }
  }
  if ( v69->max_length <= 5 )
    goto LABEL_83;
  v69->m_Items[5] = (Il2CppObject *)v113;
  sub_1C3B708((PartyOrganizationUtility_o *)&v69->m_Items[5], v113, v107, v108, v109, v110, v111, v112);
  v70 = StringLiteral_22739/*"seagreen"*/;
  if ( StringLiteral_22739/*"seagreen"*/ )
  {
    v70 = sub_1C3B8A0(StringLiteral_22739/*"seagreen"*/, v69->obj.klass->_1.element_class);
    if ( !v70 )
      goto LABEL_84;
    v71 = StringLiteral_22739/*"seagreen"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v69->max_length <= 6 )
    goto LABEL_83;
  v69->m_Items[6] = (Il2CppObject *)v71;
  sub_1C3B708((PartyOrganizationUtility_o *)&v69->m_Items[6], v71, v114, v115, v116, v117, v118, v119);
  v70 = StringLiteral_15486/*"[*]"*/;
  if ( StringLiteral_15486/*"[*]"*/ )
  {
    v70 = sub_1C3B8A0(StringLiteral_15486/*"[*]"*/, v69->obj.klass->_1.element_class);
    if ( !v70 )
      goto LABEL_84;
    v71 = StringLiteral_15486/*"[*]"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v69->max_length <= 7 )
    goto LABEL_83;
  v69->m_Items[7] = (Il2CppObject *)v71;
  sub_1C3B708((PartyOrganizationUtility_o *)&v69->m_Items[7], v71, v120, v121, v122, v123, v124, v125);
  v70 = StringLiteral_22731/*"se-NO"*/;
  if ( StringLiteral_22731/*"se-NO"*/ )
  {
    v70 = sub_1C3B8A0(StringLiteral_22731/*"se-NO"*/, v69->obj.klass->_1.element_class);
    if ( !v70 )
      goto LABEL_84;
    v71 = StringLiteral_22731/*"se-NO"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v69->max_length <= 8 )
    goto LABEL_83;
  v69->m_Items[8] = (Il2CppObject *)v71;
  sub_1C3B708((PartyOrganizationUtility_o *)&v69->m_Items[8], v71, v126, v127, v128, v129, v130, v131);
  v70 = StringLiteral_19371/*"gdprPath"*/;
  if ( StringLiteral_19371/*"gdprPath"*/ )
  {
    v70 = sub_1C3B8A0(StringLiteral_19371/*"gdprPath"*/, v69->obj.klass->_1.element_class);
    if ( v70 )
    {
      v71 = StringLiteral_19371/*"gdprPath"*/;
      goto LABEL_78;
    }
    goto LABEL_84;
  }
  v71 = 0LL;
LABEL_78:
  if ( v69->max_length <= 9 )
LABEL_83:
    sub_1C3B9C8(v70, v71);
  v69->m_Items[9] = (Il2CppObject *)v71;
  sub_1C3B708((PartyOrganizationUtility_o *)&v69->m_Items[9], v71, v132, v133, v134, v135, v136, v137);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v138 = iTween__Hash(v69, 0LL);
  iTween__ValueTo(gameObject, v138, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t fade; // w8
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  BgResourceData_o *BgResource; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  struct System_Action_o *EndCallback; // x8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BgResourceData_Fields fields; // x8
  _QWORD *v22; // x9
  __int64 klass_low; // x10
  __int64 v24; // x8
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C24FFF & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&Method_BattlePerformanceBg_endChangeBg__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    byte_4C24FFF = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    v26.fields.r = 0.0;
    v26.fields.g = 0.0;
    v26.fields.b = 0.0;
    v26.fields.a = 1.0;
    UnityEngine_RenderSettings__set_ambientLight(v26, 0LL);
    BattlePerformanceBg__ReleaseBg(this, v8);
    BgResource = BattlePerformanceBg__get_BgResource(this, v9);
    if ( BgResource )
    {
      BgResource = (BgResourceData_o *)BgResourceData__get_AssetPath(BgResource, 0LL);
      if ( this->fields.loadedChangeBgList )
      {
        v12 = (System_String_o *)BgResource;
        if ( System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)this->fields.loadedChangeBgList,
               (Il2CppObject *)BgResource,
               (const MethodInfo_368BFFC *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v13,
            (Il2CppObject *)this,
            Method_BattlePerformanceBg_endChangeBg__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getAsset_39212116(v12, v13, 0LL) )
            return;
LABEL_21:
          v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v25,
            (Il2CppObject *)this,
            Method_BattlePerformanceBg_endChangeBg__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v12, v25, 1, 0LL);
          return;
        }
        if ( !System_String__op_Inequality(v12, this->fields.initLoadedBgPath, 0LL) )
          goto LABEL_21;
        BgResource = (BgResourceData_o *)this->fields.loadedChangeBgList;
        if ( BgResource )
        {
          fields = BgResource->fields;
          v22 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(BgResource[1].klass);
          if ( fields )
          {
            klass_low = SLODWORD(BgResource[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)BgResource,
                (Il2CppObject *)v12,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = *(_QWORD *)&fields + 8 * klass_low;
              LODWORD(BgResource[1].klass) = klass_low + 1;
              *(_QWORD *)(v24 + 32) = v12;
              sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v12, v15, v16, v17, v18, v19, v20);
            }
            goto LABEL_21;
          }
        }
      }
    }
    sub_1C3B9C0(BgResource, v11);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
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
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  System_Action_o *v24; // x23
  const MethodInfo *v25; // x4

  if ( (byte_4C24FF6 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, data);
    sub_1C3B764(&Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__, v5);
    sub_1C3B764(&BattlePerformanceBg___c__DisplayClass50_0_TypeInfo, v6);
    byte_4C24FF6 = 1;
  }
  v7 = sub_1C3B9B0(BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = data;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)data, v16, v17, v18, v19, v20, v21);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v24 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v7, Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__, 0LL);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v24, v25);
}


void __fastcall BattlePerformanceBg__endloadBgAll(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformanceBg_BgState_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Object_o *v24; // x22
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  _BOOL4 parentCamera; // w23
  BattlePerformanceBg_o *v31; // x22
  BattlePerformanceBg_o *v32; // x23
  BattlePerformanceBg_o *v33; // x23
  struct System_String_o *name; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x2
  UnityEngine_Object_o *v48; // x20
  const MethodInfo *v49; // x2
  BattlePerformanceBg_o *v50; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v58; // x3
  System_Action_T__o *onLoadBgFinished; // x20
  __int64 v60; // d8
  bool v61; // w23
  __int64 v62; // x19

  v4 = this;
  if ( (byte_4C24FF7 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_1C3B764(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v5);
    this = (BattlePerformanceBg_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    byte_4C24FF7 = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_55;
  v7 = BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.nowBgState, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
    v23 = *p_bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      v24 = *p_bgobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748(v24, 0LL);
    }
    v25 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    {
      v26 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748(v26, 0LL);
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
    BattlePerformanceBg__ReleaseBgAsset(v4, v4->fields.nowBgAssetPath, v28);
  }
  v4->fields.BgAssetData = data;
  sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.BgAssetData, (int64_t)data, v17, v18, v19, v20, v21, v22);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__GetBgObject(v4, data, v29);
  if ( !this )
    goto LABEL_55;
  parentCamera = v4->fields.parentCamera;
  v31 = this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0LL);
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0LL);
    v32 = this;
    if ( !byte_4C1C511 )
    {
      this = (BattlePerformanceBg_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, data);
      byte_4C1C511 = 1;
    }
    if ( !v32 )
      goto LABEL_55;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v32,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0LL);
  if ( !this )
    goto LABEL_55;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0LL);
  v33 = this;
  if ( !byte_4C1C516 )
  {
    this = (BattlePerformanceBg_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, data);
    byte_4C1C516 = 1;
  }
  if ( !v33 )
    goto LABEL_55;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v33,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  name = data->fields.name;
  v4->fields.nowBgAssetPath = name;
  sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.nowBgAssetPath, (int64_t)name, v35, v36, v37, v38, v39, v40);
  v4->fields.bgobject = (struct UnityEngine_GameObject_o *)v31;
  sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.bgobject, (int64_t)v31, v41, v42, v43, v44, v45, v46);
  v48 = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(v4, data, v47);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v48 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v48, 0LL);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v48, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v48, 0LL);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
            this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v48, 0LL);
            v50 = this;
            if ( !byte_4C1C516 )
            {
              this = (BattlePerformanceBg_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, data);
              byte_4C1C516 = 1;
            }
            if ( v50 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v50,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0LL);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v48;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&v4->fields.frontobject,
                (int64_t)v48,
                v51,
                v52,
                v53,
                v54,
                v55,
                v56);
              goto LABEL_53;
            }
          }
        }
      }
    }
LABEL_55:
    sub_1C3B9C0(this, data);
  }
LABEL_53:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v49);
  if ( !nowBgState )
    goto LABEL_55;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, v58);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  v60 = *(_QWORD *)&v4->fields.loadbgno;
  v61 = v4->fields.parentCamera;
  v62 = sub_1C3B9B0(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v62, 0LL);
  *(_QWORD *)(v62 + 16) = v60;
  *(_BYTE *)(v62 + 24) = v61;
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v62,
    (const MethodInfo_2F42300 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


// local variable allocation has failed, the output may be wrong!
BattleBgComponent_array *__fastcall BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  UnityEngine_Object_o *bgobject; // x22
  __int64 v12; // x1
  UnityEngine_GameObject_o *ComponentsInChildren_object; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_4C24FEE & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___, includeInactive);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_BattleBgComponent__TypeInfo, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    byte_4C24FEE = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_BattleBgComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
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
                                                                (const MethodInfo_30426B8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v10 )
      goto LABEL_17;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
      (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
  {
    if ( v10 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v10,
                                          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_17:
    sub_1C3B9C0(ComponentsInChildren_object, v12);
  }
  ComponentsInChildren_object = this->fields.frontobject;
  if ( !ComponentsInChildren_object )
    goto LABEL_17;
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                              ComponentsInChildren_object,
                                                              includeInactive,
                                                              (const MethodInfo_30426B8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v10 )
    goto LABEL_17;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                      v10,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v16; // x1
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct BattlePerformanceBg_BgState_o *v24; // x8
  int64_t bgName; // x1
  struct BattlePerformanceBg_BgState_o *v26; // x8
  unsigned int Count; // w0
  int64_t v28; // x0
  _DWORD **v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct BattlePerformanceBg_BgState_o *v36; // x8
  unsigned int v37; // w25
  Il2CppObject *value; // x23
  Il2CppObject *key; // x24
  int64_t v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
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
  __int64 v55; // x0
  __int64 v56; // x1
  _DWORD *v57; // x23
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  _DWORD *v66; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  __int64 v68; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C24FEB & 1) == 0 )
  {
    sub_1C3B764(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_1C3B764(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__, v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__,
      v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__,
      v8);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__,
      v9);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__, v11);
    sub_1C3B764(&BattlePerformanceBg_SaveData_TypeInfo, v12);
    byte_4C24FEB = 1;
  }
  memset(&v70, 0, sizeof(v70));
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  v13 = sub_1C3B9B0(BattlePerformanceBg_SaveData_TypeInfo);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v13, v14);
  nowBgState = this->fields.nowBgState;
  if ( nowBgState )
  {
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)nowBgState->fields.compDictionary;
    if ( !compDictionary )
      goto LABEL_26;
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                                  compDictionary,
                                                                                  (const MethodInfo_3355438 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    if ( (int)compDictionary >= 1 )
    {
      v24 = this->fields.nowBgState;
      if ( !v24 )
        goto LABEL_26;
      if ( !v13 )
        goto LABEL_26;
      bgName = (int64_t)v24->fields.bgName;
      *(_QWORD *)(v13 + 16) = bgName;
      sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 16), bgName, v18, v19, v20, v21, v22, v23);
      v26 = this->fields.nowBgState;
      if ( !v26 )
        goto LABEL_26;
      compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v26->fields.compDictionary;
      if ( !compDictionary
        || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                      compDictionary,
                      (const MethodInfo_3355438 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__),
            v28 = sub_1C3B80C(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count),
            *(_QWORD *)(v13 + 24) = v28,
            v29 = (_DWORD **)(v13 + 24),
            sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 24), v28, v30, v31, v32, v33, v34, v35),
            (v36 = this->fields.nowBgState) == 0LL)
        || (compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v36->fields.compDictionary) == 0LL )
      {
LABEL_26:
        sub_1C3B9C0(compDictionary, v16);
      }
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v69,
        compDictionary,
        (const MethodInfo_3355B98 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
      v70 = v69;
      v37 = 0;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v70,
                (const MethodInfo_34515CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
      {
        key = v70.fields._current.fields.key;
        value = v70.fields._current.fields.value;
        v40 = sub_1C3B9B0(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v40, 0LL);
        if ( !v40 )
          sub_1C3B9C0(v41, v42);
        *(_QWORD *)(v40 + 16) = key;
        sub_1C3B708((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)key, v43, v44, v45, v46, v47, v48);
        *(_QWORD *)(v40 + 24) = value;
        sub_1C3B708((PartyOrganizationUtility_o *)(v40 + 24), (int64_t)value, v49, v50, v51, v52, v53, v54);
        v57 = *v29;
        if ( !*v29 )
          sub_1C3B9C0(v55, v56);
        v58 = sub_1C3B8A0(v40, *(_QWORD *)(*(_QWORD *)v57 + 64LL));
        if ( !v58 )
        {
          v68 = sub_1C3B9E4(0LL);
          sub_1C3B88C(v68, 0LL);
        }
        if ( v37 >= v57[6] )
          sub_1C3B9C8(v58, v59);
        v66 = &v57[2 * v37];
        *((_QWORD *)v66 + 4) = v40;
        sub_1C3B708((PartyOrganizationUtility_o *)(v66 + 8), v40, v60, v61, v62, v63, v64, v65);
        ++v37;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v70,
        (const MethodInfo_34516EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    }
  }
  if ( !v13 )
    goto LABEL_26;
  result = (BattlePerformanceBg_SaveData_o *)v13;
  *(_QWORD *)(v13 + 32) = *(_QWORD *)&this->fields.loadbgno;
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

  if ( (byte_4C24FEA & 1) == 0 )
  {
    sub_1C3B764(&BgResourceData_TypeInfo, method);
    byte_4C24FEA = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    loadbgno = this->fields.loadbgno;
    loadbgType = this->fields.loadbgType;
    cachedBgResource = (BgResourceData_o *)sub_1C3B9B0(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, loadbgno, loadbgType, 0LL);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1C3B708(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__loadBg(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  BgResourceData_o *BgResource; // x0
  __int64 v11; // x1
  struct System_String_o *AssetPath; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_4C24FF2 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_1C3B764(&Method_BattlePerformanceBg_endloadBg__, v7);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    byte_4C24FF2 = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_8;
  BattlePerformanceBg__InitLoadBgInfo(this, no, tp, method);
  BgResource = BattlePerformanceBg__get_BgResource(this, v9);
  if ( !BgResource )
    sub_1C3B9C0(0LL, v11);
  AssetPath = BgResourceData__get_AssetPath(BgResource, 0LL);
  this->fields.initLoadedBgPath = AssetPath;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.initLoadedBgPath,
    (int64_t)AssetPath,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v19, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPath, v19, 1, 0LL) )
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
        sub_1C3B9C8(BattleBgComponents, v9);
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
    sub_1C3B9C0(BattleBgComponents, v9);
  }
}


void __fastcall BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C25004 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23020/*"skillId"*/, method);
    sub_1C3B764(&StringLiteral_3274/*"C.E."*/, v4);
    byte_4C25004 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_23020/*"skillId"*/,
    (System_String_o *)StringLiteral_3274/*"C.E."*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C25003 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3276/*"C="*/, method);
    sub_1C3B764(&StringLiteral_23020/*"skillId"*/, v4);
    byte_4C25003 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_23020/*"skillId"*/,
    (System_String_o *)StringLiteral_3276/*"C="*/,
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
        sub_1C3B9C8(BattleBgComponents, v4);
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
    sub_1C3B9C0(BattleBgComponents, v4);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *bgobject; // x21
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  const MethodInfo *v15; // x2
  struct BattlePerformanceBg_BgState_o *v16; // x8
  struct BattlePerformanceBg_BgState_o *v17; // x8
  struct BattlePerformanceBg_BgState_o *v18; // x2
  __int64 v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_4C25001 & 1) == 0 )
  {
    sub_1C3B764(&BattlePerformanceBg_BgState_TypeInfo, inName);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    byte_4C25001 = 1;
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
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v11);
      if ( !nowBgState )
        goto LABEL_30;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, v15);
      v16 = this->fields.nowBgState;
      if ( !v16 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                        (Il2CppObject *)v16->fields.bgName,
                                                        (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v17 = this->fields.nowBgState;
        if ( !v17 )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___Remove(
                                                          (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                          (Il2CppObject *)v17->fields.bgName,
                                                          (const MethodInfo_3356C64 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v18 = this->fields.nowBgState;
      if ( !v18 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
        (Il2CppObject *)v18->fields.bgName,
        (Il2CppObject *)v18,
        (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
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
         (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
    if ( BattleBgComponents )
      return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                (Il2CppObject *)inName,
                                                (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
LABEL_30:
    sub_1C3B9C0(BattleBgComponents, inName);
  }
  v20 = sub_1C3B9B0(BattlePerformanceBg_BgState_TypeInfo);
  BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v20, inName, v21);
  if ( !v20 )
    goto LABEL_30;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
    *(Il2CppObject **)(v20 + 16),
    (Il2CppObject *)v20,
    (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
  return (BattlePerformanceBg_BgState_o *)v20;
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
        sub_1C3B9C8(BattleBgComponents, v5);
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
    sub_1C3B9C0(BattleBgComponents, v5);
  }
}


void __fastcall BattlePerformanceBg__setSaveData(
        BattlePerformanceBg_o *this,
        BattlePerformanceBg_SaveData_o *saveData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *compSaveDataList; // x8
  struct BattlePerformanceBg_BgState_o *v9; // x0
  struct BattlePerformanceBg_BgState_o **p_nowBgState; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v20; // x21
  int max_length; // w8
  unsigned int v22; // w22
  BattlePerformanceBg_SaveData_CompSaveData_o *v23; // x25
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v25; // x3

  if ( (byte_4C24FEC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, saveData);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, v6);
    byte_4C24FEC = 1;
  }
  if ( saveData )
  {
    BattlePerformanceBg__InitLoadBgInfo(this, saveData->fields.bgNo, saveData->fields.bgTp, v3);
    compSaveDataList = saveData->fields.compSaveDataList;
    if ( compSaveDataList )
    {
      if ( *(_QWORD *)&compSaveDataList->max_length )
      {
        v9 = BattlePerformanceBg__saveHistoryBgState(this, saveData->fields.bgName, v7);
        this->fields.nowBgState = v9;
        p_nowBgState = &this->fields.nowBgState;
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.nowBgState, (int64_t)v9, v11, v12, v13, v14, v15, v16);
        v20 = saveData->fields.compSaveDataList;
        if ( !v20 )
          goto LABEL_21;
        max_length = v20->max_length;
        if ( max_length >= 1 )
        {
          v22 = 0;
          while ( 1 )
          {
            if ( v22 >= max_length )
              sub_1C3B9C8(compDictionary, v18);
            if ( !*p_nowBgState )
              break;
            v23 = v20->m_Items[v22];
            if ( !v23 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
            if ( !compDictionary )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                          compDictionary,
                                                                                          (Il2CppObject *)v23->fields.bgCompName,
                                                                                          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
            if ( ((unsigned __int8)compDictionary & 1) == 0 )
            {
              if ( !*p_nowBgState )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_object__object___Add(
                compDictionary,
                (Il2CppObject *)v23->fields.bgCompName,
                (Il2CppObject *)v23->fields.bgCompData,
                (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
            }
            max_length = v20->max_length;
            if ( (int)++v22 >= max_length )
              goto LABEL_18;
          }
LABEL_21:
          sub_1C3B9C0(compDictionary, v18);
        }
LABEL_18:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattlePerformanceBg__getBattleBgComponents(
                                                                                      this,
                                                                                      0,
                                                                                      v19);
        if ( !nowBgState )
          goto LABEL_21;
        BattlePerformanceBg_BgState__loadSaveData(
          nowBgState,
          (BattleBgComponent_array *)compDictionary,
          this->fields.actionCamera,
          v25);
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
  sub_1C3B708((PartyOrganizationUtility_o *)v18, (int64_t)callback, v21, v22, v23, v24, v25, v26);
}


void __fastcall BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_Dictionary_object__object__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4C25009 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__, inName);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo, v5);
    byte_4C25009 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = inName;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)inName, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_3354DB8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  this->fields.compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v12;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.compDictionary, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  signed int max_length; // w8
  unsigned int v13; // w24
  BattleBgComponent_o *v14; // x22
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_object__object__o *v16; // x23
  Il2CppObject *Item; // x0

  v10 = this;
  if ( (byte_4C2500B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, list);
    this = (BattlePerformanceBg_BgState_o *)sub_1C3B764(
                                              &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__,
                                              v11);
    byte_4C2500B = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C3B9C8(this, list);
      v14 = list->m_Items[v13];
      if ( !v14 )
        break;
      v14->fields.actionCamera = actionCamera;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v14->fields.actionCamera,
        (int64_t)actionCamera,
        (int64_t)actionCamera,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      if ( v14->fields.isRecAnimation )
      {
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v14, 0LL);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  compDictionary,
                                                  (Il2CppObject *)this,
                                                  (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v16 = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v14, 0LL);
          if ( !v16 )
            break;
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v16,
                   (Il2CppObject *)this,
                   (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v14, (BattleBgComponent_SaveData_o *)Item, 0LL);
        }
      }
      max_length = list->max_length;
      if ( (int)++v13 >= max_length )
        return;
    }
LABEL_15:
    sub_1C3B9C0(this, list);
  }
}


void __fastcall BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  signed int max_length; // w8
  unsigned int v8; // w24
  BattleBgComponent_o *v9; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v10; // x21
  Il2CppObject *name; // x23

  if ( (byte_4C2500A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, list);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__, v5);
    byte_4C2500A = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_object__object___Clear(
    compDictionary,
    (const MethodInfo_33558F0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C3B9C8(compDictionary, list);
      v9 = list->m_Items[v8];
      if ( !v9 )
        break;
      if ( v9->fields.isRecAnimation )
      {
        v10 = this->fields.compDictionary;
        name = (Il2CppObject *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0LL);
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponent__getSaveData(
                                                                                      v9,
                                                                                      0LL);
        if ( !v10 )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)v10,
          name,
          (Il2CppObject *)compDictionary,
          (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_14:
    sub_1C3B9C0(compDictionary, list);
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
  __int64 v3; // x1
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4C2500C & 1) == 0 )
  {
    sub_1C3B764(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_1C3B764(&string_TypeInfo, v3);
    byte_4C2500C = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)Empty, v6, v7, v8, v9, v10, v11);
  v12 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_1C3B80C(
                                                                    BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                    0LL);
  this->fields.compSaveDataList = v12;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.compSaveDataList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  const MethodInfo *v2; // x5
  BattlePerformanceBg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  BattlePerformanceBg__LoadBgSpShadowEffectLocal(
    _4__this,
    this->fields.bgId,
    this->fields.bgType,
    0,
    this->fields.finishCallback,
    v2);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C3B9C0(this, method);
  BattlePerformanceBg__endloadBgAll(this->fields.__4__this, this->fields.data, v2);
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
    sub_1C3B9C0(this, 0LL);
  return BattleBgComponent__checkKey(x, this->fields.key, 0LL);
}