void BattlePerformanceBg___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C2A745 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceBg_TypeInfo);
    sub_1C2D490(&StringLiteral_19680/*"front"*/);
    byte_4C2A745 = 1;
  }
  BattlePerformanceBg_TypeInfo->static_fields->Frontfile = (struct System_String_o *)StringLiteral_19680/*"front"*/;
  sub_1C2D434((CGThumbnailListItem_o *)BattlePerformanceBg_TypeInfo->static_fields, StringLiteral_19680/*"front"*/, v1, v2);
}


void BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_object__object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C2A744 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    byte_4C2A744 = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadedChangeBgList, (int32_t)v3, v4, v5);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.initLoadedBgPath, (int32_t)Empty, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bgSpShadowList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v13,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.historyBgState, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bgInfoList, (int32_t)v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePerformanceBg__AddCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        System_Action_BattlePerformanceBg_ChangedBgArgs__o *callback,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_onLoadBgFinished; // x19
  System_Delegate_o *onLoadBgFinished; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Delegate_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x0
  int32_t v13; // w1

  if ( (byte_4C2A742 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
    byte_4C2A742 = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (CGThumbnailListItem_o *)&this->fields.onLoadBgFinished;
  v7 = System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0);
  if ( !v7 )
    goto LABEL_7;
  v10 = v7;
  v11 = sub_1C2D5CC(v7, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
  if ( !v11
    || (p_onLoadBgFinished->klass = (CGThumbnailListItem_c *)v11,
        v12 = sub_1C2D5CC(v10, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo),
        v13 = v12,
        !v12) )
  {
    sub_1C2D9AC(v10);
LABEL_7:
    v13 = 0;
    p_onLoadBgFinished->klass = 0;
  }
  sub_1C2D434(p_onLoadBgFinished, v13, v8, v9);
}


void BattlePerformanceBg__AddChangeBgInfo(
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
  const MethodInfo *v23; // x6
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4C2A735 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceBg_BgInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
    byte_4C2A735 = 1;
  }
  v21 = (BattlePerformanceBg_BgInfo_o *)sub_1C2D6DC(BattlePerformanceBg_BgInfo_TypeInfo);
  v32.fields.x = v17;
  v32.fields.y = v16;
  v32.fields.z = v15;
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  v22 = (Il2CppObject *)v21;
  BattlePerformanceBg_BgInfo___ctor(v21, No, tp, v32, v33, changeDirect, parentCamera, callback, v23);
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (items = bgInfoList->fields._items,
        v29 = Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__,
        ++bgInfoList->fields._version,
        !items) )
  {
    sub_1C2D6EC(bgInfoList, v24);
  }
  size = bgInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgInfoList,
      v22,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    bgInfoList->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v22;
    sub_1C2D434((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v22, v25, v26);
  }
}


void BattlePerformanceBg__ChangeBg(
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
    sub_1C2D6EC(this, 0);
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


void BattlePerformanceBg__ClearCallbackOfOnLoadBgFinished(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.onLoadBgFinished = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onLoadBgFinished, 0, v2, v3);
}


void BattlePerformanceBg__DebugPrint(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0)) == 0 )
    sub_1C2D6EC(this, data);
}


bool BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_4C2A736 & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__);
    byte_4C2A736 = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_1C2D6EC(this, method);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *BattlePerformanceBg__FetchBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  System_Collections_Generic_List_object__o *v5; // x8
  BattlePerformanceBg_BgInfo_o *v6; // x19

  if ( (byte_4C2A737 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__);
    byte_4C2A737 = 1;
  }
  if ( !BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
    return 0;
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (bgInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bgInfoList,
                                                                    0,
                                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__),
        (v5 = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList) == 0) )
  {
    sub_1C2D6EC(bgInfoList, v3);
  }
  v6 = (BattlePerformanceBg_BgInfo_o *)bgInfoList;
  System_Collections_Generic_List_object___RemoveAt(
    v5,
    0,
    (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v6;
}


BattleBgComponent_o *BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  System_Object_array *BattleBgComponents; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4C2A73F & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Find_BattleBgComponent___);
    sub_1C2D490(&System_Func_BattleBgComponent__bool__TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__);
    sub_1C2D490(&BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
    byte_4C2A73F = 1;
  }
  v5 = sub_1C2D6DC(BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = key;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)key, v8, v9);
  BattleBgComponents = (System_Object_array *)BattlePerformanceBg__getBattleBgComponents(this, 0, v10);
  v12 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleBgComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__,
    0);
  return (BattleBgComponent_o *)BasicHelper__Find_object_(
                                  BattleBgComponents,
                                  (System_Func_T__bool__o *)v12,
                                  (const MethodInfo_30B88BC *)Method_BasicHelper_Find_BattleBgComponent___);
}


UnityEngine_GameObject_o *BattlePerformanceBg__GetBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BgResourceData_o *BgResource; // x0
  __int64 v6; // x1
  System_String_o *v7; // x1
  System_String_o *v8; // x0
  Il2CppObject *v9; // x20
  Il2CppObject *Object_object__51051712; // x20
  Il2CppObject *v12; // x19
  Il2CppObject *v13; // x19
  int Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2A739 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17130/*"bg"*/);
    sub_1C2D490(&StringLiteral_17133/*"bg0"*/);
    byte_4C2A739 = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    sub_1C2D6EC(0, v6);
  Type_k__BackingField = BgResource->fields._Type_k__BackingField;
  if ( Type_k__BackingField < 1 )
  {
    if ( !data )
      sub_1C2D6EC(BgResource, v6);
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                data,
                                (System_String_o *)StringLiteral_17130/*"bg"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__51051712,
                                           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v13 = AssetData__GetObject_object__51051712(
              data,
              (System_String_o *)StringLiteral_17133/*"bg0"*/,
              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v13,
                                           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v7 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0);
    v8 = System_String__Concat_63457864((System_String_o *)StringLiteral_17130/*"bg"*/, v7, 0);
    if ( !data )
      sub_1C2D6EC(v8, v8);
    v9 = AssetData__GetObject_object__51051712(
           data,
           v8,
           (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v9,
                                           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v12 = AssetData__GetObject_object__51051712(
              data,
              (System_String_o *)StringLiteral_17130/*"bg"*/,
              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v12,
                                           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


UnityEngine_GameObject_o *BattlePerformanceBg__GetFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  void *BgResource; // x0
  __int64 v6; // x1
  int v7; // w22
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  Il2CppObject *Object_object__51051712; // x20
  BattlePerformanceBg_c *v11; // x0
  bool v12; // w8
  UnityEngine_GameObject_o *result; // x0
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2A73A & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&BattlePerformanceBg_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A73A = 1;
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
    v9 = System_Int32__ToString((int32_t)&v14, 0);
    BgResource = System_String__Concat_63457864(v8, v9, 0);
    v8 = (System_String_o *)BgResource;
  }
  if ( !data )
LABEL_21:
    sub_1C2D6EC(BgResource, v6);
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              data,
                              v8,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    goto LABEL_24;
  v11 = BattlePerformanceBg_TypeInfo;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v11 = BattlePerformanceBg_TypeInfo;
  }
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              data,
                              v11->static_fields->Frontfile,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0);
  result = 0;
  if ( v12 )
  {
LABEL_24:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__51051712,
                                         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


UnityEngine_Texture2D_o *BattlePerformanceBg__GetShadowTexture(
        BattlePerformanceBg_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  AssetData_o *BgAssetData; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = shadowId;
  if ( (byte_4C2A73D & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&StringLiteral_23398/*"shadow_"*/);
    byte_4C2A73D = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63457864((System_String_o *)StringLiteral_23398/*"shadow_"*/, v5, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51051712(
                                      BgAssetData,
                                      v6,
                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
}


void BattlePerformanceBg__InitLoadBgInfo(
        BattlePerformanceBg_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  BgResourceData_o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A730 & 1) == 0 )
  {
    sub_1C2D490(&BgResourceData_TypeInfo);
    byte_4C2A730 = 1;
  }
  this->fields.loadbgno = bgId;
  this->fields.loadbgType = bgType;
  v7 = (BgResourceData_o *)sub_1C2D6DC(BgResourceData_TypeInfo);
  BgResourceData___ctor(v7, bgId, bgType, 0);
  this->fields.cachedBgResource = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cachedBgResource, (int32_t)v7, v8, v9);
}


void BattlePerformanceBg__LoadBgSpShadowEffect(
        BattlePerformanceBg_o *this,
        int32_t bgId,
        int32_t bgType,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w20
  int32_t v17; // w21
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x5

  if ( (byte_4C2A731 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__);
    sub_1C2D490(&BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
    byte_4C2A731 = 1;
  }
  v9 = sub_1C2D6DC(BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C2D6EC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 24) = bgId;
  *(_DWORD *)(v9 + 28) = bgType;
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)finishCallback, v14, v15);
  v16 = *(_DWORD *)(v9 + 24);
  v17 = *(_DWORD *)(v9 + 28);
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__,
    0);
  BattlePerformanceBg__LoadBgSpShadowEffectLocal(this, v16, v17, 1, v18, v19);
}


void BattlePerformanceBg__LoadBgSpShadowEffectLocal(
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v17; // w21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v23; // x8
  System_String_o *v24; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2A732 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__);
    sub_1C2D490(&BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
    byte_4C2A732 = 1;
  }
  effectPath = 0;
  v11 = sub_1C2D6DC(BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_23;
  *(_QWORD *)(v11 + 16) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)finishCallback, v14, v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BattleBgMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_23;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(
                              Master_object,
                              battleBgId,
                              battleBgType,
                              isEnemySide,
                              0,
                              0);
  if ( BgSpecialShadowEffectId <= 0 )
    goto LABEL_13;
  v17 = BgSpecialShadowEffectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v17, 0) )
    goto LABEL_13;
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object )
    goto LABEL_23;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)Master_object,
         (Il2CppObject *)effectPath,
         (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_13:
    ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0);
    return;
  }
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object
    || (v13 = (Il2CppObject *)effectPath,
        v20 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v21 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v20) )
  {
LABEL_23:
    sub_1C2D6EC(Master_object, v13);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v20 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v13,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = v20 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v23 + 32) = v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v13, v18, v19);
  }
  v24 = effectPath;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v24, v25, 1, 0);
}


void BattlePerformanceBg__OnEndBgLoad(BattlePerformanceBg_o *this, const MethodInfo *method)
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


void BattlePerformanceBg__ReleaseBg(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UnityEngine_GameObject_o **p_bgobject; // x20
  UnityEngine_Object_o *bgobject; // x21
  UnityEngine_Object_o *frontobject; // x21
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v12; // x1
  BattleActionCamera_o *v13; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v15; // x21
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C2A72A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A72A = 1;
  }
  BattlePerformanceBg__saveHistoryBgState(this, 0, v2);
  p_bgobject = &this->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0, 0) )
    goto LABEL_9;
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontobject, 0, 0) )
  {
LABEL_9:
    v7 = (UnityEngine_Object_o *)*p_bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    {
      v8 = (UnityEngine_Object_o *)*p_bgobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v8, 0);
      *p_bgobject = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bgobject, 0, v9, v10);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0, 0) )
    {
      v13 = this->fields.actionCamera;
      if ( !v13 )
        sub_1C2D6EC(0, v12);
      BattleActionCamera__stopCameraAnimation(v13, 0);
    }
    p_frontobject = &this->fields.frontobject;
    v15 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
    {
      v17 = (UnityEngine_Object_o *)*p_frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v17, 0);
      *p_frontobject = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.frontobject, 0, v18, v19);
    }
    BattlePerformanceBg__ReleaseBgAsset(this, this->fields.nowBgAssetPath, v16);
  }
}


void BattlePerformanceBg__ReleaseBgAsset(BattlePerformanceBg_o *this, System_String_o *path, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A72D & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4C2A72D = 1;
  }
  if ( !System_String__IsNullOrEmpty(path, 0) )
  {
    loadedChangeBgList = this->fields.loadedChangeBgList;
    if ( loadedChangeBgList )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)loadedChangeBgList,
              (Il2CppObject *)path,
              (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_8:
        this->fields.BgAssetData = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.BgAssetData, 0, v7, v8);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(path, 0);
        return;
      }
      loadedChangeBgList = this->fields.loadedChangeBgList;
      if ( loadedChangeBgList )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadedChangeBgList,
          (Il2CppObject *)path,
          (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_8;
      }
    }
    sub_1C2D6EC(loadedChangeBgList, v5);
  }
}


void BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A72E & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4C2A72E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)bgSpShadowList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v5 = this->fields.bgSpShadowList;
  if ( !v5 )
LABEL_13:
    sub_1C2D6EC(bgSpShadowList, method);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
}


void BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A72C & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4C2A72C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)loadedChangeBgList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40313100(AssetStorage, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.loadedChangeBgList;
  if ( !v6 )
LABEL_16:
    sub_1C2D6EC(loadedChangeBgList, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


void BattlePerformanceBg__ResetBgAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  il2cpp_array_size_t max_length; // x8
  BattleBgComponent_array *v8; // x19
  unsigned __int64 v9; // x21
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4C2A743 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A743 = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_15:
    sub_1C2D6EC(BattleBgComponents, v5);
  max_length = BattleBgComponents->max_length;
  v8 = BattleBgComponents;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2D6F4(BattleBgComponents, v5, v6);
      v10 = (UnityEngine_Object_o *)v8->m_Items[v9];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      BattleBgComponents = (BattleBgComponent_array *)UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( ((unsigned __int8)BattleBgComponents & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_15;
        BattleBgComponent__ResetAnimation((BattleBgComponent_o *)v10, 0);
      }
      LODWORD(max_length) = v8->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)max_length );
  }
}


void BattlePerformanceBg__UpdateColor(BattlePerformanceBg_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  UnityEngine_RenderSettings__set_ambientLight(color, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceBg__changeBg(
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
  struct System_Action_o **p_EndCallback; // x25
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  System_Object_array *v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x21
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x21
  const MethodInfo *v44; // x3
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x21
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  System_Collections_Hashtable_o *v54; // x0
  __int64 v55; // x0
  __int128 v56; // [xsp+0h] [xbp-A0h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-90h] BYREF
  int v58; // [xsp+5Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4C2A738 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Color_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_18997/*"endChangeColor"*/);
    sub_1C2D490(&StringLiteral_15182/*"UpdateColor"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A738 = 1;
  }
  if ( this->fields.IsLoading )
  {
    v59.fields.x = v17;
    v59.fields.y = v16;
    v59.fields.z = v15;
    v60.fields.x = x;
    v60.fields.y = y;
    v60.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v59, v60, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.EndCallback,
    (int32_t)callback,
    tp,
    (const MethodInfo *)changeDirect);
  if ( this->fields.fade && !changeDirect )
  {
    if ( *p_EndCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))(*p_EndCallback)->fields.invoke_impl)(
        (*p_EndCallback)->fields.method_code,
        (*p_EndCallback)->fields.method);
    BattlePerformanceBg__OnEndBgLoad(this, v22);
    return;
  }
  BattlePerformanceBg__InitLoadBgInfo(this, No, tp, v23);
  this->fields.changeDirect = changeDirect;
  this->fields.parentCamera = parentCamera;
  this->fields.pos.fields.x = v17;
  this->fields.pos.fields.y = v16;
  this->fields.pos.fields.z = v15;
  this->fields.rot.fields.x = x;
  this->fields.rot.fields.y = y;
  this->fields.rot.fields.z = z;
  this->fields.fade = 1;
  if ( changeDirect )
  {
    BattlePerformanceBg__endChangeColor(this, v24);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v26 = sub_1C2D538(object___TypeInfo, 10);
  if ( !v26 )
    sub_1C2D6EC(0, v27);
  v30 = (System_Object_array *)v26;
  v31 = StringLiteral_19677/*"from"*/;
  if ( StringLiteral_19677/*"from"*/ )
  {
    v31 = sub_1C2D5CC(StringLiteral_19677/*"from"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_61;
    v32 = StringLiteral_19677/*"from"*/;
  }
  else
  {
    v32 = 0;
  }
  if ( !LODWORD(v30->max_length) )
    goto LABEL_60;
  v30->m_Items[0] = (Il2CppObject *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)v30->m_Items, v32, v28, v29);
  tmpcolor = this->fields.tmpcolor;
  v31 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v33, v34, v35);
  v37 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_1C2D5CC(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_61;
  }
  if ( LODWORD(v30->max_length) <= 1 )
    goto LABEL_60;
  v30->m_Items[1] = v37;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[1], (int32_t)v37, v28, v36);
  v31 = StringLiteral_24088/*"to"*/;
  if ( StringLiteral_24088/*"to"*/ )
  {
    v31 = sub_1C2D5CC(StringLiteral_24088/*"to"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_61;
    v32 = StringLiteral_24088/*"to"*/;
  }
  else
  {
    v32 = 0;
  }
  if ( LODWORD(v30->max_length) <= 2 )
    goto LABEL_60;
  v30->m_Items[2] = (Il2CppObject *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[2], v32, v28, v38);
  v56 = xmmword_C0A900;
  v31 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v56, v39, v40, v41);
  v43 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_1C2D5CC(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_61;
  }
  if ( LODWORD(v30->max_length) <= 3 )
    goto LABEL_60;
  v30->m_Items[3] = v43;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[3], (int32_t)v43, v28, v42);
  v31 = StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v31 = sub_1C2D5CC(StringLiteral_24049/*"time"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_61;
    v32 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v32 = 0;
  }
  if ( LODWORD(v30->max_length) <= 4 )
    goto LABEL_60;
  v30->m_Items[4] = (Il2CppObject *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[4], v32, v28, v44);
  v58 = 1056964608;
  v31 = j_il2cpp_value_box_0(float_TypeInfo, &v58, v45, v46, v47);
  v49 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_1C2D5CC(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
    {
LABEL_61:
      v55 = sub_1C2D710(v31);
      sub_1C2D5B8(v55, 0);
    }
  }
  if ( LODWORD(v30->max_length) <= 5 )
    goto LABEL_60;
  v30->m_Items[5] = v49;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[5], (int32_t)v49, v28, v48);
  v31 = StringLiteral_22418/*"onupdate"*/;
  if ( StringLiteral_22418/*"onupdate"*/ )
  {
    v31 = sub_1C2D5CC(StringLiteral_22418/*"onupdate"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_61;
    v32 = StringLiteral_22418/*"onupdate"*/;
  }
  else
  {
    v32 = 0;
  }
  if ( LODWORD(v30->max_length) <= 6 )
    goto LABEL_60;
  v30->m_Items[6] = (Il2CppObject *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[6], v32, v28, v50);
  v31 = StringLiteral_15182/*"UpdateColor"*/;
  if ( StringLiteral_15182/*"UpdateColor"*/ )
  {
    v31 = sub_1C2D5CC(StringLiteral_15182/*"UpdateColor"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_61;
    v32 = StringLiteral_15182/*"UpdateColor"*/;
  }
  else
  {
    v32 = 0;
  }
  if ( LODWORD(v30->max_length) <= 7 )
    goto LABEL_60;
  v30->m_Items[7] = (Il2CppObject *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[7], v32, v28, v51);
  v31 = StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v31 = sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_61;
    v32 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v32 = 0;
  }
  if ( LODWORD(v30->max_length) <= 8 )
    goto LABEL_60;
  v30->m_Items[8] = (Il2CppObject *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[8], v32, v28, v52);
  v31 = StringLiteral_18997/*"endChangeColor"*/;
  if ( StringLiteral_18997/*"endChangeColor"*/ )
  {
    v31 = sub_1C2D5CC(StringLiteral_18997/*"endChangeColor"*/, v30->obj.klass->_1.element_class);
    if ( v31 )
    {
      v32 = StringLiteral_18997/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_61;
  }
  v32 = 0;
LABEL_56:
  if ( LODWORD(v30->max_length) <= 9 )
LABEL_60:
    sub_1C2D6F4(v31, v32, v28);
  v30->m_Items[9] = (Il2CppObject *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[9], v32, v28, v53);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v54 = iTween__Hash(v30, 0);
  iTween__ValueTo(gameObject, v54, 0);
}


void BattlePerformanceBg__endChangeBg(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 BgObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct BattlePerformanceBg_BgState_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v21; // x2
  UnityEngine_Transform_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v26; // x3
  System_Action_T__o *onLoadBgFinished; // x20
  __int64 v28; // d8
  bool v29; // w23
  __int64 v30; // x21
  const MethodInfo *v31; // x1
  struct System_Action_o *EndCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  System_Object_array *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x22
  const MethodInfo *v44; // x3
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x19
  const MethodInfo *v50; // x3
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x19
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  System_Collections_Hashtable_o *v60; // x0
  __int64 v61; // x0
  struct UnityEngine_Color_o tmpcolor; // [xsp+0h] [xbp-70h] BYREF
  __int128 v63; // [xsp+10h] [xbp-60h] BYREF
  int v64; // [xsp+2Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A73B & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_1C2D490(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    sub_1C2D490(&UnityEngine_Color_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_18997/*"endChangeColor"*/);
    sub_1C2D490(&StringLiteral_15182/*"UpdateColor"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A73B = 1;
  }
  this->fields.BgAssetData = data;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.BgAssetData, (int32_t)data, (int32_t)method, v3);
  if ( !data )
    goto LABEL_82;
  v9 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v8);
  this->fields.nowBgState = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.nowBgState, (int32_t)v9, v10, v11);
  BgObject = (__int64)BattlePerformanceBg__GetBgObject(this, data, v12);
  if ( !BgObject )
    goto LABEL_82;
  parentCamera = this->fields.parentCamera;
  v14 = (UnityEngine_GameObject_o *)BgObject;
  BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)BgObject, 0);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v14, 0);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v14, 0);
    v15 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4C20DA1 )
    {
      BgObject = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v15 )
      goto LABEL_82;
    UnityEngine_Transform__set_eulerAngles(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v14, 0);
  if ( !BgObject )
    goto LABEL_82;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0);
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v14, 0);
  v16 = (UnityEngine_Transform_o *)BgObject;
  if ( !byte_4C20DA6 )
  {
    BgObject = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v16 )
    goto LABEL_82;
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  this->fields.bgobject = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bgobject, (int32_t)v14, v17, v18);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(this, data, v19);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  BgObject = UnityEngine_Object__op_Inequality(FrontObject, 0, 0);
  if ( (BgObject & 1) != 0 )
  {
    if ( !FrontObject )
      goto LABEL_82;
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0);
    v22 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4C20DA6 )
    {
      BgObject = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( !v22 )
      goto LABEL_82;
    UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.frontobject, (int32_t)FrontObject, v23, v24);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (__int64)BattlePerformanceBg__getBattleBgComponents(this, 0, v21);
  if ( !nowBgState )
    goto LABEL_82;
  BattlePerformanceBg_BgState__loadSaveData(
    nowBgState,
    (BattleBgComponent_array *)BgObject,
    this->fields.actionCamera,
    v26);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  v28 = *(_QWORD *)&this->fields.loadbgno;
  v29 = this->fields.parentCamera;
  v30 = sub_1C2D6DC(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0);
  *(_QWORD *)(v30 + 16) = v28;
  *(_BYTE *)(v30 + 24) = v29;
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v30,
    (const MethodInfo_301B240 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    v65.fields.r = 1.0;
    v65.fields.g = 1.0;
    v65.fields.b = 1.0;
    v65.fields.a = 1.0;
    this->fields.fade = 0;
    UnityEngine_RenderSettings__set_ambientLight(v65, 0);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
        EndCallback->fields.method_code,
        EndCallback->fields.method);
    BattlePerformanceBg__OnEndBgLoad(this, v31);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  BgObject = sub_1C2D538(object___TypeInfo, 10);
  if ( !BgObject )
LABEL_82:
    sub_1C2D6EC(BgObject, v7);
  v36 = (System_Object_array *)BgObject;
  v37 = StringLiteral_19677/*"from"*/;
  if ( StringLiteral_19677/*"from"*/ )
  {
    v37 = sub_1C2D5CC(StringLiteral_19677/*"from"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_84;
    v38 = StringLiteral_19677/*"from"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( !LODWORD(v36->max_length) )
    goto LABEL_83;
  v36->m_Items[0] = (Il2CppObject *)v38;
  sub_1C2D434((CGThumbnailListItem_o *)v36->m_Items, v38, v34, v35);
  v63 = xmmword_C0A900;
  v37 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v63, v39, v40, v41);
  v43 = (Il2CppObject *)v37;
  if ( v37 )
  {
    v37 = sub_1C2D5CC(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_84;
  }
  if ( LODWORD(v36->max_length) <= 1 )
    goto LABEL_83;
  v36->m_Items[1] = v43;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->m_Items[1], (int32_t)v43, v34, v42);
  v37 = StringLiteral_24088/*"to"*/;
  if ( StringLiteral_24088/*"to"*/ )
  {
    v37 = sub_1C2D5CC(StringLiteral_24088/*"to"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_84;
    v38 = StringLiteral_24088/*"to"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v36->max_length) <= 2 )
    goto LABEL_83;
  v36->m_Items[2] = (Il2CppObject *)v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->m_Items[2], v38, v34, v44);
  tmpcolor = this->fields.tmpcolor;
  v37 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v45, v46, v47);
  v49 = (Il2CppObject *)v37;
  if ( v37 )
  {
    v37 = sub_1C2D5CC(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_84;
  }
  if ( LODWORD(v36->max_length) <= 3 )
    goto LABEL_83;
  v36->m_Items[3] = v49;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->m_Items[3], (int32_t)v49, v34, v48);
  v37 = StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v37 = sub_1C2D5CC(StringLiteral_24049/*"time"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_84;
    v38 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v36->max_length) <= 4 )
    goto LABEL_83;
  v36->m_Items[4] = (Il2CppObject *)v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->m_Items[4], v38, v34, v50);
  v64 = 1056964608;
  v37 = j_il2cpp_value_box_0(float_TypeInfo, &v64, v51, v52, v53);
  v55 = (Il2CppObject *)v37;
  if ( v37 )
  {
    v37 = sub_1C2D5CC(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
    {
LABEL_84:
      v61 = sub_1C2D710(v37);
      sub_1C2D5B8(v61, 0);
    }
  }
  if ( LODWORD(v36->max_length) <= 5 )
    goto LABEL_83;
  v36->m_Items[5] = v55;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->m_Items[5], (int32_t)v55, v34, v54);
  v37 = StringLiteral_22418/*"onupdate"*/;
  if ( StringLiteral_22418/*"onupdate"*/ )
  {
    v37 = sub_1C2D5CC(StringLiteral_22418/*"onupdate"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_84;
    v38 = StringLiteral_22418/*"onupdate"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v36->max_length) <= 6 )
    goto LABEL_83;
  v36->m_Items[6] = (Il2CppObject *)v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->m_Items[6], v38, v34, v56);
  v37 = StringLiteral_15182/*"UpdateColor"*/;
  if ( StringLiteral_15182/*"UpdateColor"*/ )
  {
    v37 = sub_1C2D5CC(StringLiteral_15182/*"UpdateColor"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_84;
    v38 = StringLiteral_15182/*"UpdateColor"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v36->max_length) <= 7 )
    goto LABEL_83;
  v36->m_Items[7] = (Il2CppObject *)v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->m_Items[7], v38, v34, v57);
  v37 = StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v37 = sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_84;
    v38 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v36->max_length) <= 8 )
    goto LABEL_83;
  v36->m_Items[8] = (Il2CppObject *)v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->m_Items[8], v38, v34, v58);
  v37 = StringLiteral_18997/*"endChangeColor"*/;
  if ( StringLiteral_18997/*"endChangeColor"*/ )
  {
    v37 = sub_1C2D5CC(StringLiteral_18997/*"endChangeColor"*/, v36->obj.klass->_1.element_class);
    if ( v37 )
    {
      v38 = StringLiteral_18997/*"endChangeColor"*/;
      goto LABEL_78;
    }
    goto LABEL_84;
  }
  v38 = 0;
LABEL_78:
  if ( LODWORD(v36->max_length) <= 9 )
LABEL_83:
    sub_1C2D6F4(v37, v38, v34);
  v36->m_Items[9] = (Il2CppObject *)v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->m_Items[9], v38, v34, v59);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v60 = iTween__Hash(v36, 0);
  iTween__ValueTo(gameObject, v60, 0);
}


void BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int32_t fade; // w8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  BgResourceData_o *BgResource; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21
  struct System_Action_o *EndCallback; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BgResourceData_Fields fields; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  __int64 v16; // x8
  AssetLoader_LoadEndDataHandler_o *v17; // x21
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A73C & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceBg_endChangeBg__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C2A73C = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    v18.fields.r = 0.0;
    v18.fields.g = 0.0;
    v18.fields.b = 0.0;
    v18.fields.a = 1.0;
    UnityEngine_RenderSettings__set_ambientLight(v18, 0);
    BattlePerformanceBg__ReleaseBg(this, v4);
    BgResource = BattlePerformanceBg__get_BgResource(this, v5);
    if ( BgResource )
    {
      BgResource = (BgResourceData_o *)BgResourceData__get_AssetPath(BgResource, 0);
      if ( this->fields.loadedChangeBgList )
      {
        v8 = (System_String_o *)BgResource;
        if ( System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)this->fields.loadedChangeBgList,
               (Il2CppObject *)BgResource,
               (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getAsset_40312108(v8, v9, 0) )
            return;
LABEL_21:
          v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v8, v17, 1, 0);
          return;
        }
        if ( !System_String__op_Inequality(v8, this->fields.initLoadedBgPath, 0) )
          goto LABEL_21;
        BgResource = (BgResourceData_o *)this->fields.loadedChangeBgList;
        if ( BgResource )
        {
          fields = BgResource->fields;
          v14 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(BgResource[1].klass);
          if ( fields )
          {
            klass_low = SLODWORD(BgResource[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)BgResource,
                (Il2CppObject *)v8,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = *(_QWORD *)&fields + 8 * klass_low;
              LODWORD(BgResource[1].klass) = klass_low + 1;
              *(_QWORD *)(v16 + 32) = v8;
              sub_1C2D434((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v8, v11, v12);
            }
            goto LABEL_21;
          }
        }
      }
    }
    sub_1C2D6EC(BgResource, v7);
  }
  EndCallback = this->fields.EndCallback;
  this->fields.fade = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
  BattlePerformanceBg__OnEndBgLoad(this, method);
}


void BattlePerformanceBg__endloadBg(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  System_Action_o *v14; // x23
  const MethodInfo *v15; // x4

  if ( (byte_4C2A733 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__);
    sub_1C2D490(&BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
    byte_4C2A733 = 1;
  }
  v5 = sub_1C2D6DC(BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = data;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)data, v10, v11);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__, 0);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v14, v15);
}


void BattlePerformanceBg__endloadBgAll(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  BattlePerformanceBg_o *v4; // x19
  BattlePerformanceBg_BgState_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *v13; // x22
  UnityEngine_Object_o *v14; // x22
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Object_o *v16; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  _BOOL4 parentCamera; // w23
  BattlePerformanceBg_o *v21; // x22
  BattlePerformanceBg_o *v22; // x23
  BattlePerformanceBg_o *v23; // x23
  struct System_String_o *name; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *v30; // x20
  const MethodInfo *v31; // x2
  BattlePerformanceBg_o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v36; // x3
  System_Action_T__o *onLoadBgFinished; // x20
  __int64 v38; // d8
  bool v39; // w23
  __int64 v40; // x19

  v4 = this;
  if ( (byte_4C2A734 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_1C2D490(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    this = (BattlePerformanceBg_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A734 = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_55;
  v5 = BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.nowBgState, (int32_t)v5, v6, v7);
  p_bgobject = (UnityEngine_Object_o **)&v4->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)v4->fields.bgobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0, 0) )
    goto LABEL_10;
  frontobject = (UnityEngine_Object_o *)v4->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontobject, 0, 0) )
  {
LABEL_10:
    v13 = *p_bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
    {
      v14 = *p_bgobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v14, 0);
    }
    v15 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
    {
      v16 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v16, 0);
    }
    actionCamera = (UnityEngine_Object_o *)v4->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0, 0) )
    {
      this = (BattlePerformanceBg_o *)v4->fields.actionCamera;
      if ( !this )
        goto LABEL_55;
      BattleActionCamera__stopCameraAnimation((BattleActionCamera_o *)this, 0);
    }
    BattlePerformanceBg__ReleaseBgAsset(v4, v4->fields.nowBgAssetPath, v18);
  }
  v4->fields.BgAssetData = data;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.BgAssetData, (int32_t)data, v11, v12);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__GetBgObject(v4, data, v19);
  if ( !this )
    goto LABEL_55;
  parentCamera = v4->fields.parentCamera;
  v21 = this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0);
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0);
    v22 = this;
    if ( !byte_4C20DA1 )
    {
      this = (BattlePerformanceBg_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v22 )
      goto LABEL_55;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v22,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0);
  if ( !this )
    goto LABEL_55;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0);
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0);
  v23 = this;
  if ( !byte_4C20DA6 )
  {
    this = (BattlePerformanceBg_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v23 )
    goto LABEL_55;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v23,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  name = data->fields.name;
  v4->fields.nowBgAssetPath = name;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.nowBgAssetPath, (int32_t)name, v25, v26);
  v4->fields.bgobject = (struct UnityEngine_GameObject_o *)v21;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.bgobject, (int32_t)v21, v27, v28);
  v30 = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(v4, data, v29);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v30 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0);
            this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
            v32 = this;
            if ( !byte_4C20DA6 )
            {
              this = (BattlePerformanceBg_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
              byte_4C20DA6 = 1;
            }
            if ( v32 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v32,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v30;
              sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.frontobject, (int32_t)v30, v33, v34);
              goto LABEL_53;
            }
          }
        }
      }
    }
LABEL_55:
    sub_1C2D6EC(this, data);
  }
LABEL_53:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v31);
  if ( !nowBgState )
    goto LABEL_55;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, v36);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  v38 = *(_QWORD *)&v4->fields.loadbgno;
  v39 = v4->fields.parentCamera;
  v40 = sub_1C2D6DC(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v40, 0);
  *(_QWORD *)(v40 + 16) = v38;
  *(_BYTE *)(v40 + 24) = v39;
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v40,
    (const MethodInfo_301B240 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


BattleBgComponent_array *BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  UnityEngine_Object_o *bgobject; // x22
  __int64 v7; // x1
  UnityEngine_GameObject_o *ComponentsInChildren_object; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_4C2A72B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleBgComponent__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A72B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleBgComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0, 0) )
  {
    ComponentsInChildren_object = this->fields.bgobject;
    if ( !ComponentsInChildren_object )
      goto LABEL_17;
    ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                ComponentsInChildren_object,
                                                                includeInactive,
                                                                (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v5 )
      goto LABEL_17;
    System_Collections_Generic_List_object___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(frontobject, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
  {
    if ( v5 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_17:
    sub_1C2D6EC(ComponentsInChildren_object, v7);
  }
  ComponentsInChildren_object = this->fields.frontobject;
  if ( !ComponentsInChildren_object )
    goto LABEL_17;
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                              ComponentsInChildren_object,
                                                              includeInactive,
                                                              (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v5 )
    goto LABEL_17;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
}


System_String_array *BattlePerformanceBg__getChangeBgList(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.debuglist;
}


BattlePerformanceBg_SaveData_o *BattlePerformanceBg__getSaveData(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x20
  const MethodInfo *v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v7; // x1
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattlePerformanceBg_BgState_o *v11; // x8
  struct System_String_o *bgName; // x1
  struct BattlePerformanceBg_BgState_o *v13; // x8
  unsigned int Count; // w0
  __int64 v15; // x0
  _DWORD **v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattlePerformanceBg_BgState_o *v19; // x8
  unsigned int v20; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  __int64 v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x0
  __int64 v30; // x1
  _DWORD *v31; // x23
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  _DWORD *v36; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  __int64 v38; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C2A728 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_1C2D490(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__);
    sub_1C2D490(&BattlePerformanceBg_SaveData_TypeInfo);
    byte_4C2A728 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  BattlePerformanceBg__saveHistoryBgState(this, 0, v2);
  v4 = sub_1C2D6DC(BattlePerformanceBg_SaveData_TypeInfo);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v4, v5);
  nowBgState = this->fields.nowBgState;
  if ( nowBgState )
  {
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)nowBgState->fields.compDictionary;
    if ( !compDictionary )
      goto LABEL_26;
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                                  compDictionary,
                                                                                  (const MethodInfo_3449FF8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    if ( (int)compDictionary >= 1 )
    {
      v11 = this->fields.nowBgState;
      if ( !v11 )
        goto LABEL_26;
      if ( !v4 )
        goto LABEL_26;
      bgName = v11->fields.bgName;
      *(_QWORD *)(v4 + 16) = bgName;
      sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)bgName, v9, v10);
      v13 = this->fields.nowBgState;
      if ( !v13 )
        goto LABEL_26;
      compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v13->fields.compDictionary;
      if ( !compDictionary
        || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                      compDictionary,
                      (const MethodInfo_3449FF8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__),
            v15 = sub_1C2D538(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count),
            *(_QWORD *)(v4 + 24) = v15,
            v16 = (_DWORD **)(v4 + 24),
            sub_1C2D434((CGThumbnailListItem_o *)(v4 + 24), v15, v17, v18),
            (v19 = this->fields.nowBgState) == 0)
        || (compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v19->fields.compDictionary) == 0 )
      {
LABEL_26:
        sub_1C2D6EC(compDictionary, v7);
      }
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v39,
        compDictionary,
        (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
      v40 = v39;
      v20 = 0;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v40,
                (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
      {
        current = v40.fields._current;
        v22 = sub_1C2D6DC(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v22, 0);
        if ( !v22 )
          sub_1C2D6EC(v23, v24);
        *(_QWORD *)(v22 + 16) = current.fields.key;
        sub_1C2D434((CGThumbnailListItem_o *)(v22 + 16), (int32_t)current.fields.key, v25, v26);
        *(_QWORD *)(v22 + 24) = current.fields.value;
        sub_1C2D434((CGThumbnailListItem_o *)(v22 + 24), (int32_t)current.fields.value, v27, v28);
        v31 = *v16;
        if ( !*v16 )
          sub_1C2D6EC(v29, v30);
        v32 = sub_1C2D5CC(v22, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
        if ( !v32 )
        {
          v38 = sub_1C2D710(0);
          sub_1C2D5B8(v38, 0);
        }
        if ( v20 >= v31[6] )
          sub_1C2D6F4(v32, v33, v34);
        v36 = &v31[2 * v20];
        *((_QWORD *)v36 + 4) = v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v36 + 8), v22, v34, v35);
        ++v20;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v40,
        (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    }
  }
  if ( !v4 )
    goto LABEL_26;
  result = (BattlePerformanceBg_SaveData_o *)v4;
  *(_QWORD *)(v4 + 32) = *(_QWORD *)&this->fields.loadbgno;
  return result;
}


BgResourceData_o *BattlePerformanceBg__get_BgResource(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BgResourceData_o *cachedBgResource; // x21
  int32_t loadbgno; // w22
  int32_t loadbgType; // w23
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2A727 & 1) == 0 )
  {
    sub_1C2D490(&BgResourceData_TypeInfo);
    byte_4C2A727 = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    loadbgno = this->fields.loadbgno;
    loadbgType = this->fields.loadbgType;
    cachedBgResource = (BgResourceData_o *)sub_1C2D6DC(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, loadbgno, loadbgType, 0);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cachedBgResource, (int32_t)cachedBgResource, v6, v7);
  }
  return cachedBgResource;
}


bool BattlePerformanceBg__get_IsBusy(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.IsLoading;
}


int32_t BattlePerformanceBg__get_LoadBgNo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno;
}


int32_t BattlePerformanceBg__get_LoadBgType(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgType;
}


bool BattlePerformanceBg__isReload(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno != -1 && this->fields.loadbgType != -1;
}


void BattlePerformanceBg__loadBg(BattlePerformanceBg_o *this, int32_t no, int32_t tp, const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  BgResourceData_o *BgResource; // x0
  __int64 v9; // x1
  struct System_String_o *AssetPath; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_4C2A72F & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceBg_endloadBg__);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C2A72F = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_8;
  BattlePerformanceBg__InitLoadBgInfo(this, no, tp, method);
  BgResource = BattlePerformanceBg__get_BgResource(this, v7);
  if ( !BgResource )
    sub_1C2D6EC(0, v9);
  AssetPath = BgResourceData__get_AssetPath(BgResource, 0);
  this->fields.initLoadedBgPath = AssetPath;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.initLoadedBgPath, (int32_t)AssetPath, v11, v12);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPath, v13, 1, 0) )
LABEL_8:
    this->fields.IsLoading = 0;
}


void BattlePerformanceBg__playAnimation(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  BattleBgComponent_array *v12; // x21
  unsigned int v13; // w23
  Il2CppClass **v14; // x8
  BattleBgComponent_o *v15; // x22

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, (const MethodInfo *)animName);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v12 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C2D6F4(BattleBgComponents, v9, v10);
      v14 = &v12->obj.klass + (int)v13;
      v15 = (BattleBgComponent_o *)v14[4];
      if ( !v15 )
        break;
      BattleBgComponents = (BattleBgComponent_array *)BattleBgComponent__checkKey((BattleBgComponent_o *)v14[4], key, 0);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
        BattleBgComponent__playAnimation(v15, animName, timeline, 0);
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        return;
    }
LABEL_11:
    sub_1C2D6EC(BattleBgComponents, v9);
  }
}


void BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2A741 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22702/*"playerfield"*/);
    sub_1C2D490(&StringLiteral_3118/*"BattleIn"*/);
    byte_4C2A741 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22702/*"playerfield"*/,
    (System_String_o *)StringLiteral_3118/*"BattleIn"*/,
    0.0,
    v2);
}


void BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2A740 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3120/*"BattleOut"*/);
    sub_1C2D490(&StringLiteral_22702/*"playerfield"*/);
    byte_4C2A740 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22702/*"playerfield"*/,
    (System_String_o *)StringLiteral_3120/*"BattleOut"*/,
    0.0,
    v2);
}


void BattlePerformanceBg__playLoadEndAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  BattleBgComponent_array *v7; // x19
  unsigned int v8; // w20

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C2D6F4(BattleBgComponents, v4, v5);
      BattleBgComponents = (BattleBgComponent_array *)v7->m_Items[v8];
      if ( !BattleBgComponents )
        break;
      if ( LOBYTE(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__playLoadEndAnimation((BattleBgComponent_o *)BattleBgComponents, 0);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_1C2D6EC(BattleBgComponents, v4);
  }
}


void BattlePerformanceBg__reloadBg(
        BattlePerformanceBg_o *this,
        int32_t *outNo,
        int32_t *outType,
        const MethodInfo *method)
{
  *outNo = this->fields.loadbgno;
  *outType = this->fields.loadbgType;
  BattlePerformanceBg__loadBg(this, this->fields.loadbgno, this->fields.loadbgType, method);
}


BattlePerformanceBg_BgState_o *BattlePerformanceBg__saveHistoryBgState(
        BattlePerformanceBg_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgobject; // x21
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  const MethodInfo *v10; // x2
  struct BattlePerformanceBg_BgState_o *v11; // x8
  struct BattlePerformanceBg_BgState_o *v12; // x8
  struct BattlePerformanceBg_BgState_o *v13; // x2
  __int64 v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4C2A73E & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceBg_BgState_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A73E = 1;
  }
  if ( this->fields.nowBgState )
  {
    bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bgobject, 0, 0) )
      goto LABEL_10;
    frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontobject, 0, 0) )
    {
LABEL_10:
      nowBgState = this->fields.nowBgState;
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v6);
      if ( !nowBgState )
        goto LABEL_30;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, v10);
      v11 = this->fields.nowBgState;
      if ( !v11 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                        (Il2CppObject *)v11->fields.bgName,
                                                        (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v12 = this->fields.nowBgState;
        if ( !v12 )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___Remove(
                                                          (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                          (Il2CppObject *)v12->fields.bgName,
                                                          (const MethodInfo_344B824 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v13 = this->fields.nowBgState;
      if ( !v13 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
        (Il2CppObject *)v13->fields.bgName,
        (Il2CppObject *)v13,
        (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    }
  }
  if ( !inName )
    return 0;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_30;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
         (Il2CppObject *)inName,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
    if ( BattleBgComponents )
      return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                (Il2CppObject *)inName,
                                                (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
LABEL_30:
    sub_1C2D6EC(BattleBgComponents, inName);
  }
  v15 = sub_1C2D6DC(BattlePerformanceBg_BgState_TypeInfo);
  BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v15, inName, v16);
  if ( !v15 )
    goto LABEL_30;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
    *(Il2CppObject **)(v15 + 16),
    (Il2CppObject *)v15,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
  return (BattlePerformanceBg_BgState_o *)v15;
}


void BattlePerformanceBg__setCutNodeNoble(BattlePerformanceBg_o *this, bool flg, const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int max_length; // w8
  BattleBgComponent_array *v8; // x19
  unsigned int v9; // w21
  bool v10; // w20

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 1, method);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v8 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v10 = flg;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C2D6F4(BattleBgComponents, v5, v6);
      BattleBgComponents = (BattleBgComponent_array *)v8->m_Items[v9];
      if ( !BattleBgComponents )
        break;
      if ( BYTE1(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__setCutNodeNoble((BattleBgComponent_o *)BattleBgComponents, v10, 0);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_11:
    sub_1C2D6EC(BattleBgComponents, v5);
  }
}


void BattlePerformanceBg__setSaveData(
        BattlePerformanceBg_o *this,
        BattlePerformanceBg_SaveData_o *saveData,
        bool isForceOverWriteBgState,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *compSaveDataList; // x8
  struct BattlePerformanceBg_BgState_o *v9; // x0
  struct BattlePerformanceBg_BgState_o **p_nowBgState; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  Il2CppObject *bgCompName; // x1
  const MethodInfo *v15; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v16; // x22
  int max_length; // w8
  unsigned int v18; // w23
  BattlePerformanceBg_SaveData_CompSaveData_o *v19; // x27
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4C2A729 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__set_Item__);
    byte_4C2A729 = 1;
  }
  if ( saveData )
  {
    BattlePerformanceBg__InitLoadBgInfo(this, saveData->fields.bgNo, saveData->fields.bgTp, method);
    compSaveDataList = saveData->fields.compSaveDataList;
    if ( compSaveDataList )
    {
      if ( compSaveDataList->max_length )
      {
        v9 = BattlePerformanceBg__saveHistoryBgState(this, saveData->fields.bgName, v7);
        this->fields.nowBgState = v9;
        p_nowBgState = &this->fields.nowBgState;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.nowBgState, (int32_t)v9, v11, v12);
        v16 = saveData->fields.compSaveDataList;
        if ( !v16 )
          goto LABEL_24;
        max_length = v16->max_length;
        if ( max_length >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( v18 >= max_length )
              sub_1C2D6F4(compDictionary, bgCompName, v15);
            if ( !*p_nowBgState )
              break;
            v19 = v16->m_Items[v18];
            if ( !v19 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
            bgCompName = (Il2CppObject *)v19->fields.bgCompName;
            if ( isForceOverWriteBgState )
            {
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                compDictionary,
                bgCompName,
                (Il2CppObject *)v19->fields.bgCompData,
                (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__set_Item__);
            }
            else
            {
              if ( !compDictionary )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                            compDictionary,
                                                                                            bgCompName,
                                                                                            (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
              if ( ((unsigned __int8)compDictionary & 1) == 0 )
              {
                if ( !*p_nowBgState )
                  break;
                compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
                if ( !compDictionary )
                  break;
                System_Collections_Generic_Dictionary_object__object___Add(
                  compDictionary,
                  (Il2CppObject *)v19->fields.bgCompName,
                  (Il2CppObject *)v19->fields.bgCompData,
                  (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
              }
            }
            max_length = v16->max_length;
            if ( (int)++v18 >= max_length )
              goto LABEL_21;
          }
LABEL_24:
          sub_1C2D6EC(compDictionary, bgCompName);
        }
LABEL_21:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattlePerformanceBg__getBattleBgComponents(
                                                                                      this,
                                                                                      0,
                                                                                      v15);
        if ( !nowBgState )
          goto LABEL_24;
        BattlePerformanceBg_BgState__loadSaveData(
          nowBgState,
          (BattleBgComponent_array *)compDictionary,
          this->fields.actionCamera,
          v21);
      }
    }
  }
}


void BattlePerformanceBg_BgInfo___ctor(
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
  CGThumbnailListItem_o *v18; // x22
  bool v19; // w23
  bool v20; // w24
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v14 = pos.fields.z;
  v15 = pos.fields.y;
  v16 = pos.fields.x;
  v18 = (CGThumbnailListItem_o *)this;
  v19 = changeDirect;
  v20 = parentCamera;
  System_Object___ctor((Il2CppObject *)this, 0);
  v18->fields.sortStr1 = (struct System_String_o *)callback;
  v18 = (CGThumbnailListItem_o *)((char *)v18 + 56);
  LODWORD(v18[-1].fields.basePosition.fields.y) = No;
  LODWORD(v18[-1].fields.basePosition.fields.z) = tp;
  *(float *)&v18[-1].fields.viewObject = v16;
  *((float *)&v18[-1].fields.viewObject + 1) = v15;
  *(float *)&v18[-1].fields._Id_k__BackingField = v14;
  *(float *)&v18[-1].fields._Priority_k__BackingField = x;
  *(float *)&v18[-1].fields._Type_k__BackingField = y;
  *(float *)&v18[-1].fields._HaveDifferenceCG_k__BackingField = z;
  LOBYTE(v18[-1].fields._ThumbnailSpritePath_k__BackingField) = v19;
  BYTE1(v18[-1].fields._ThumbnailSpritePath_k__BackingField) = v20;
  sub_1C2D434(v18, (int32_t)callback, v21, v22);
}


void BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A746 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
    byte_4C2A746 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.bgName = inName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)inName, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  this->fields.compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.compDictionary, (int32_t)v7, v8, v9);
}


void BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  BattlePerformanceBg_BgState_o *v6; // x21
  int max_length; // w8
  unsigned int v8; // w24
  BattleBgComponent_o *v9; // x22
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_object__object__o *v11; // x23
  Il2CppObject *Item; // x0

  v6 = this;
  if ( (byte_4C2A748 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    this = (BattlePerformanceBg_BgState_o *)sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
    byte_4C2A748 = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C2D6F4(this, list, actionCamera);
      v9 = list->m_Items[v8];
      if ( !v9 )
        break;
      v9->fields.actionCamera = actionCamera;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&v9->fields.actionCamera,
        (int32_t)actionCamera,
        (int32_t)actionCamera,
        method);
      if ( v9->fields.isRecAnimation )
      {
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  compDictionary,
                                                  (Il2CppObject *)this,
                                                  (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v11 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0);
          if ( !v11 )
            break;
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v11,
                   (Il2CppObject *)this,
                   (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v9, (BattleBgComponent_SaveData_o *)Item, 0);
        }
      }
      max_length = list->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_15:
    sub_1C2D6EC(this, list);
  }
}


void BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v6; // x2
  int max_length; // w8
  unsigned int v8; // w24
  BattleBgComponent_o *v9; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v10; // x21
  Il2CppObject *name; // x23

  if ( (byte_4C2A747 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
    byte_4C2A747 = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_object__object___Clear(
    compDictionary,
    (const MethodInfo_344A4B0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C2D6F4(compDictionary, list, v6);
      v9 = list->m_Items[v8];
      if ( !v9 )
        break;
      if ( v9->fields.isRecAnimation )
      {
        v10 = this->fields.compDictionary;
        name = (Il2CppObject *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0);
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponent__getSaveData(
                                                                                      v9,
                                                                                      0);
        if ( !v10 )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)v10,
          name,
          (Il2CppObject *)compDictionary,
          (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_14:
    sub_1C2D6EC(compDictionary, list);
  }
}


void BattlePerformanceBg_ChangedBgArgs___ctor(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t bgNo,
        int32_t bgType,
        bool useParentCamera,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._BgNo_k__BackingField = bgNo;
  this->fields._BgType_k__BackingField = bgType;
  this->fields._UseParentCamera_k__BackingField = useParentCamera;
}


int32_t BattlePerformanceBg_ChangedBgArgs__get_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgNo_k__BackingField;
}


int32_t BattlePerformanceBg_ChangedBgArgs__get_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgType_k__BackingField;
}


bool BattlePerformanceBg_ChangedBgArgs__get_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._UseParentCamera_k__BackingField;
}


void BattlePerformanceBg_ChangedBgArgs__set_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgNo_k__BackingField = value;
}


void BattlePerformanceBg_ChangedBgArgs__set_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgType_k__BackingField = value;
}


void BattlePerformanceBg_ChangedBgArgs__set_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._UseParentCamera_k__BackingField = value;
}


void BattlePerformanceBg_SaveData___ctor(BattlePerformanceBg_SaveData_o *this, const MethodInfo *method)
{
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A749 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    byte_4C2A749 = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)Empty, v5, v6);
  v7 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_1C2D538(
                                                                   BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                   0);
  this->fields.compSaveDataList = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.compSaveDataList, (int32_t)v7, v8, v9);
}


void BattlePerformanceBg_SaveData_CompSaveData___ctor(
        BattlePerformanceBg_SaveData_CompSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceBg___c__DisplayClass48_0___ctor(
        BattlePerformanceBg___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceBg___c__DisplayClass48_0___LoadBgSpShadowEffect_b__0(
        BattlePerformanceBg___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  BattlePerformanceBg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  BattlePerformanceBg__LoadBgSpShadowEffectLocal(
    _4__this,
    this->fields.bgId,
    this->fields.bgType,
    0,
    this->fields.finishCallback,
    v2);
}


void BattlePerformanceBg___c__DisplayClass49_0___ctor(
        BattlePerformanceBg___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceBg___c__DisplayClass49_0___LoadBgSpShadowEffectLocal_b__0(
        BattlePerformanceBg___c__DisplayClass49_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void BattlePerformanceBg___c__DisplayClass50_0___ctor(
        BattlePerformanceBg___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceBg___c__DisplayClass50_0___endloadBg_b__0(
        BattlePerformanceBg___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, method);
  BattlePerformanceBg__endloadBgAll(this->fields.__4__this, this->fields.data, v2);
}


void BattlePerformanceBg___c__DisplayClass70_0___ctor(
        BattlePerformanceBg___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceBg___c__DisplayClass70_0___FindComponentByKey_b__0(
        BattlePerformanceBg___c__DisplayClass70_0_o *this,
        BattleBgComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattleBgComponent__checkKey(x, this->fields.key, 0);
}