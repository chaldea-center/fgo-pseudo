void BattlePerformanceBg___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C46476 & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceBg_TypeInfo);
    sub_1C37058(&StringLiteral_19695/*"front"*/);
    byte_4C46476 = 1;
  }
  BattlePerformanceBg_TypeInfo->static_fields->Frontfile = (struct System_String_o *)StringLiteral_19695/*"front"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)BattlePerformanceBg_TypeInfo->static_fields, StringLiteral_19695/*"front"*/, v1, v2);
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

  if ( (byte_4C46475 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&string_TypeInfo);
    byte_4C46475 = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadedChangeBgList, (int32_t)v3, v4, v5);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.initLoadedBgPath, (int32_t)Empty, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bgSpShadowList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v13,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.historyBgState, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bgInfoList, (int32_t)v16, v17, v18);
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

  if ( (byte_4C46473 & 1) == 0 )
  {
    sub_1C37058(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
    byte_4C46473 = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (CGThumbnailListItem_o *)&this->fields.onLoadBgFinished;
  v7 = System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0);
  if ( !v7 )
    goto LABEL_7;
  v10 = v7;
  v11 = sub_1C37194(v7, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
  if ( !v11
    || (p_onLoadBgFinished->klass = (CGThumbnailListItem_c *)v11,
        v12 = sub_1C37194(v10, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo),
        v13 = v12,
        !v12) )
  {
    sub_1C37574(v10);
LABEL_7:
    v13 = 0;
    p_onLoadBgFinished->klass = 0;
  }
  sub_1C36FFC(p_onLoadBgFinished, v13, v8, v9);
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4C46466 & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceBg_BgInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
    byte_4C46466 = 1;
  }
  v21 = (BattlePerformanceBg_BgInfo_o *)sub_1C372A4(BattlePerformanceBg_BgInfo_TypeInfo);
  v31.fields.x = v17;
  v31.fields.y = v16;
  v31.fields.z = v15;
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  v22 = (Il2CppObject *)v21;
  BattlePerformanceBg_BgInfo___ctor(v21, No, tp, v31, v32, changeDirect, parentCamera, callback, v23);
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (items = bgInfoList->fields._items,
        v28 = Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__,
        ++bgInfoList->fields._version,
        !items) )
  {
    sub_1C372B4(bgInfoList);
  }
  size = bgInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgInfoList,
      v22,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    bgInfoList->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v22;
    sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v22, v24, v25);
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
    sub_1C372B4(this);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onLoadBgFinished, 0, v2, v3);
}


void BattlePerformanceBg__DebugPrint(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0)) == 0 )
    sub_1C372B4(this);
}


bool BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_4C46467 & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_1C37058(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__);
    byte_4C46467 = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_1C372B4(this);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *BattlePerformanceBg__FetchBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  System_Collections_Generic_List_object__o *v4; // x8
  BattlePerformanceBg_BgInfo_o *v5; // x19

  if ( (byte_4C46468 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__);
    byte_4C46468 = 1;
  }
  if ( !BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
    return 0;
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (bgInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bgInfoList,
                                                                    0,
                                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__),
        (v4 = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList) == 0) )
  {
    sub_1C372B4(bgInfoList);
  }
  v5 = (BattlePerformanceBg_BgInfo_o *)bgInfoList;
  System_Collections_Generic_List_object___RemoveAt(
    v4,
    0,
    (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v5;
}


BattleBgComponent_o *BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  System_Object_array *BattleBgComponents; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C46470 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Find_BattleBgComponent___);
    sub_1C37058(&System_Func_BattleBgComponent__bool__TypeInfo);
    sub_1C37058(&Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__);
    sub_1C37058(&BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
    byte_4C46470 = 1;
  }
  v5 = sub_1C372A4(BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = key;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)key, v7, v8);
  BattleBgComponents = (System_Object_array *)BattlePerformanceBg__getBattleBgComponents(this, 0, v9);
  v11 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleBgComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__,
    0);
  return (BattleBgComponent_o *)BasicHelper__Find_object_(
                                  BattleBgComponents,
                                  (System_Func_T__bool__o *)v11,
                                  (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_BattleBgComponent___);
}


UnityEngine_GameObject_o *BattlePerformanceBg__GetBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BgResourceData_o *BgResource; // x0
  System_String_o *v6; // x1
  System_String_o *v7; // x0
  Il2CppObject *v8; // x20
  Il2CppObject *Object_object__51154888; // x20
  Il2CppObject *v11; // x19
  Il2CppObject *v12; // x19
  int Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C4646A & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17136/*"bg"*/);
    sub_1C37058(&StringLiteral_17139/*"bg0"*/);
    byte_4C4646A = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    sub_1C372B4(0);
  Type_k__BackingField = BgResource->fields._Type_k__BackingField;
  if ( Type_k__BackingField < 1 )
  {
    if ( !data )
      sub_1C372B4(BgResource);
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                data,
                                (System_String_o *)StringLiteral_17136/*"bg"*/,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__51154888,
                                           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v12 = AssetData__GetObject_object__51154888(
              data,
              (System_String_o *)StringLiteral_17139/*"bg0"*/,
              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v12,
                                           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v6 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0);
    v7 = System_String__Concat_63561656((System_String_o *)StringLiteral_17136/*"bg"*/, v6, 0);
    if ( !data )
      sub_1C372B4(v7);
    v8 = AssetData__GetObject_object__51154888(
           data,
           v7,
           (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v8,
                                           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v11 = AssetData__GetObject_object__51154888(
              data,
              (System_String_o *)StringLiteral_17136/*"bg"*/,
              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v11,
                                           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


UnityEngine_GameObject_o *BattlePerformanceBg__GetFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  void *BgResource; // x0
  int v6; // w22
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  Il2CppObject *Object_object__51154888; // x20
  BattlePerformanceBg_c *v10; // x0
  bool v11; // w8
  UnityEngine_GameObject_o *result; // x0
  int v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C4646B & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&BattlePerformanceBg_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4646B = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    goto LABEL_21;
  v6 = *((_DWORD *)BgResource + 5);
  BgResource = BattlePerformanceBg_TypeInfo;
  v13 = v6;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    BgResource = BattlePerformanceBg_TypeInfo;
  }
  v7 = (System_String_o *)**((_QWORD **)BgResource + 23);
  if ( v6 >= 1 )
  {
    v8 = System_Int32__ToString((int32_t)&v13, 0);
    BgResource = System_String__Concat_63561656(v7, v8, 0);
    v7 = (System_String_o *)BgResource;
  }
  if ( !data )
LABEL_21:
    sub_1C372B4(BgResource);
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              data,
                              v7,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
    goto LABEL_24;
  v10 = BattlePerformanceBg_TypeInfo;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v10 = BattlePerformanceBg_TypeInfo;
  }
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              data,
                              v10->static_fields->Frontfile,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0);
  result = 0;
  if ( v11 )
  {
LABEL_24:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__51154888,
                                         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( (byte_4C4646E & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&StringLiteral_23420/*"shadow_"*/);
    byte_4C4646E = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_23420/*"shadow_"*/, v5, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51154888(
                                      BgAssetData,
                                      v6,
                                      (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
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

  if ( (byte_4C46461 & 1) == 0 )
  {
    sub_1C37058(&BgResourceData_TypeInfo);
    byte_4C46461 = 1;
  }
  this->fields.loadbgno = bgId;
  this->fields.loadbgType = bgType;
  v7 = (BgResourceData_o *)sub_1C372A4(BgResourceData_TypeInfo);
  BgResourceData___ctor(v7, bgId, bgType, 0);
  this->fields.cachedBgResource = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cachedBgResource, (int32_t)v7, v8, v9);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w20
  int32_t v16; // w21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x5

  if ( (byte_4C46462 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__);
    sub_1C37058(&BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
    byte_4C46462 = 1;
  }
  v9 = sub_1C372A4(BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_DWORD *)(v9 + 24) = bgId;
  *(_DWORD *)(v9 + 28) = bgType;
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)finishCallback, v13, v14);
  v15 = *(_DWORD *)(v9 + 24);
  v16 = *(_DWORD *)(v9 + 28);
  v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v9,
    Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__,
    0);
  BattlePerformanceBg__LoadBgSpShadowEffectLocal(this, v15, v16, 1, v17, v18);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v16; // w21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x1
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v23; // x8
  System_String_o *v24; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C46463 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__);
    sub_1C37058(&BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
    byte_4C46463 = 1;
  }
  effectPath = 0;
  v11 = sub_1C372A4(BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_23;
  *(_QWORD *)(v11 + 16) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)finishCallback, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BattleBgMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattleBgMaster___);
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
  v16 = BgSpecialShadowEffectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v16, 0) )
    goto LABEL_13;
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object )
    goto LABEL_23;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)Master_object,
         (Il2CppObject *)effectPath,
         (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_13:
    ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0);
    return;
  }
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object
    || (v19 = (Il2CppObject *)effectPath,
        v20 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v21 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v20) )
  {
LABEL_23:
    sub_1C372B4(Master_object);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v20 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v19,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = v20 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v23 + 32) = v19;
    sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v19, v17, v18);
  }
  v24 = effectPath;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  BattleActionCamera_o *v12; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v14; // x21
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C4645B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4645B = 1;
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
      UnityEngine_Object__Destroy_71266752(v8, 0);
      *p_bgobject = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bgobject, 0, v9, v10);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0, 0) )
    {
      v12 = this->fields.actionCamera;
      if ( !v12 )
        sub_1C372B4(0);
      BattleActionCamera__stopCameraAnimation(v12, 0);
    }
    p_frontobject = &this->fields.frontobject;
    v14 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
    {
      v16 = (UnityEngine_Object_o *)*p_frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v16, 0);
      *p_frontobject = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.frontobject, 0, v17, v18);
    }
    BattlePerformanceBg__ReleaseBgAsset(this, this->fields.nowBgAssetPath, v15);
  }
}


void BattlePerformanceBg__ReleaseBgAsset(BattlePerformanceBg_o *this, System_String_o *path, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C4645E & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4C4645E = 1;
  }
  if ( !System_String__IsNullOrEmpty(path, 0) )
  {
    loadedChangeBgList = this->fields.loadedChangeBgList;
    if ( loadedChangeBgList )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)loadedChangeBgList,
              (Il2CppObject *)path,
              (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_8:
        this->fields.BgAssetData = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.BgAssetData, 0, v6, v7);
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
          (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_8;
      }
    }
    sub_1C372B4(loadedChangeBgList);
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

  if ( (byte_4C4645F & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4C4645F = 1;
  }
  memset(&v8, 0, sizeof(v8));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)bgSpShadowList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v5 = this->fields.bgSpShadowList;
  if ( !v5 )
LABEL_13:
    sub_1C372B4(bgSpShadowList);
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

  if ( (byte_4C4645D & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4C4645D = 1;
  }
  memset(&v9, 0, sizeof(v9));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)loadedChangeBgList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40534712(AssetStorage, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.loadedChangeBgList;
  if ( !v6 )
LABEL_16:
    sub_1C372B4(loadedChangeBgList);
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
  il2cpp_array_size_t max_length; // x8
  BattleBgComponent_array *v6; // x19
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x20

  if ( (byte_4C46474 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46474 = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_15:
    sub_1C372B4(BattleBgComponents);
  max_length = BattleBgComponents->max_length;
  v6 = BattleBgComponents;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(BattleBgComponents);
      v8 = (UnityEngine_Object_o *)v6->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      BattleBgComponents = (BattleBgComponent_array *)UnityEngine_Object__op_Equality(v8, 0, 0);
      if ( ((unsigned __int8)BattleBgComponents & 1) == 0 )
      {
        if ( !v8 )
          goto LABEL_15;
        BattleBgComponent__ResetAnimation((BattleBgComponent_o *)v8, 0);
      }
      LODWORD(max_length) = v6->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
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
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Object_array *v29; // x20
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x5
  __int64 v60; // x6
  __int64 v61; // x7
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x21
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  __int64 v70; // x1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  __int64 v76; // x1
  System_Collections_Hashtable_o *v77; // x0
  __int64 v78; // x0
  __int128 v79; // [xsp+0h] [xbp-A0h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-90h] BYREF
  int v81; // [xsp+5Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4C46469 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Color_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&StringLiteral_19692/*"from"*/);
    sub_1C37058(&StringLiteral_19009/*"endChangeColor"*/);
    sub_1C37058(&StringLiteral_15185/*"UpdateColor"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22438/*"onupdate"*/);
    sub_1C37058(&StringLiteral_24110/*"to"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C46469 = 1;
  }
  if ( this->fields.IsLoading )
  {
    v82.fields.x = v17;
    v82.fields.y = v16;
    v82.fields.z = v15;
    v83.fields.x = x;
    v83.fields.y = y;
    v83.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v82, v83, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_1C36FFC(
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
  v26 = sub_1C37100(object___TypeInfo, 10);
  if ( !v26 )
    sub_1C372B4(0);
  v29 = (System_Object_array *)v26;
  v30 = StringLiteral_19692/*"from"*/;
  if ( StringLiteral_19692/*"from"*/ )
  {
    v30 = sub_1C37194(StringLiteral_19692/*"from"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_61;
    v31 = StringLiteral_19692/*"from"*/;
  }
  else
  {
    v31 = 0;
  }
  if ( !LODWORD(v29->max_length) )
    goto LABEL_60;
  v29->m_Items[0] = (Il2CppObject *)v31;
  sub_1C36FFC((CGThumbnailListItem_o *)v29->m_Items, v31, v27, v28);
  tmpcolor = this->fields.tmpcolor;
  v30 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v32, v33, v34, v35, v36, v37);
  v40 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = sub_1C37194(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_61;
  }
  if ( LODWORD(v29->max_length) <= 1 )
    goto LABEL_60;
  v29->m_Items[1] = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[1], (int32_t)v40, v38, v39);
  v30 = StringLiteral_24110/*"to"*/;
  if ( StringLiteral_24110/*"to"*/ )
  {
    v30 = sub_1C37194(StringLiteral_24110/*"to"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_61;
    v43 = StringLiteral_24110/*"to"*/;
  }
  else
  {
    v43 = 0;
  }
  if ( LODWORD(v29->max_length) <= 2 )
    goto LABEL_60;
  v29->m_Items[2] = (Il2CppObject *)v43;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[2], v43, v41, v42);
  v79 = xmmword_C0FC60;
  v30 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v79, v44, v45, v46, v47, v48, v49);
  v52 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = sub_1C37194(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_61;
  }
  if ( LODWORD(v29->max_length) <= 3 )
    goto LABEL_60;
  v29->m_Items[3] = v52;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[3], (int32_t)v52, v50, v51);
  v30 = StringLiteral_24071/*"time"*/;
  if ( StringLiteral_24071/*"time"*/ )
  {
    v30 = sub_1C37194(StringLiteral_24071/*"time"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_61;
    v55 = StringLiteral_24071/*"time"*/;
  }
  else
  {
    v55 = 0;
  }
  if ( LODWORD(v29->max_length) <= 4 )
    goto LABEL_60;
  v29->m_Items[4] = (Il2CppObject *)v55;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[4], v55, v53, v54);
  v81 = 1056964608;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, &v81, v56, v57, v58, v59, v60, v61);
  v64 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = sub_1C37194(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_61:
      v78 = sub_1C372D8(v30);
      sub_1C37180(v78, 0);
    }
  }
  if ( LODWORD(v29->max_length) <= 5 )
    goto LABEL_60;
  v29->m_Items[5] = v64;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[5], (int32_t)v64, v62, v63);
  v30 = StringLiteral_22438/*"onupdate"*/;
  if ( StringLiteral_22438/*"onupdate"*/ )
  {
    v30 = sub_1C37194(StringLiteral_22438/*"onupdate"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_61;
    v67 = StringLiteral_22438/*"onupdate"*/;
  }
  else
  {
    v67 = 0;
  }
  if ( LODWORD(v29->max_length) <= 6 )
    goto LABEL_60;
  v29->m_Items[6] = (Il2CppObject *)v67;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[6], v67, v65, v66);
  v30 = StringLiteral_15185/*"UpdateColor"*/;
  if ( StringLiteral_15185/*"UpdateColor"*/ )
  {
    v30 = sub_1C37194(StringLiteral_15185/*"UpdateColor"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_61;
    v70 = StringLiteral_15185/*"UpdateColor"*/;
  }
  else
  {
    v70 = 0;
  }
  if ( LODWORD(v29->max_length) <= 7 )
    goto LABEL_60;
  v29->m_Items[7] = (Il2CppObject *)v70;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[7], v70, v68, v69);
  v30 = StringLiteral_22430/*"oncomplete"*/;
  if ( StringLiteral_22430/*"oncomplete"*/ )
  {
    v30 = sub_1C37194(StringLiteral_22430/*"oncomplete"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_61;
    v73 = StringLiteral_22430/*"oncomplete"*/;
  }
  else
  {
    v73 = 0;
  }
  if ( LODWORD(v29->max_length) <= 8 )
    goto LABEL_60;
  v29->m_Items[8] = (Il2CppObject *)v73;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[8], v73, v71, v72);
  v30 = StringLiteral_19009/*"endChangeColor"*/;
  if ( StringLiteral_19009/*"endChangeColor"*/ )
  {
    v30 = sub_1C37194(StringLiteral_19009/*"endChangeColor"*/, v29->obj.klass->_1.element_class);
    if ( v30 )
    {
      v76 = StringLiteral_19009/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_61;
  }
  v76 = 0;
LABEL_56:
  if ( LODWORD(v29->max_length) <= 9 )
LABEL_60:
    sub_1C372BC(v30);
  v29->m_Items[9] = (Il2CppObject *)v76;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->m_Items[9], v76, v74, v75);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v77 = iTween__Hash(v29, 0);
  iTween__ValueTo(gameObject, v77, 0);
}


void BattlePerformanceBg__endChangeBg(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 BgObject; // x0
  const MethodInfo *v7; // x2
  struct BattlePerformanceBg_BgState_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v20; // x2
  UnityEngine_Transform_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v25; // x3
  System_Action_T__o *onLoadBgFinished; // x20
  __int64 v27; // d8
  bool v28; // w23
  __int64 v29; // x21
  const MethodInfo *v30; // x1
  struct System_Action_o *EndCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Object_array *v35; // x21
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x22
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x19
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  __int64 v65; // x5
  __int64 v66; // x6
  __int64 v67; // x7
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  Il2CppObject *v70; // x19
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  __int64 v76; // x1
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  __int64 v79; // x1
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  __int64 v82; // x1
  System_Collections_Hashtable_o *v83; // x0
  __int64 v84; // x0
  struct UnityEngine_Color_o tmpcolor; // [xsp+0h] [xbp-70h] BYREF
  __int128 v86; // [xsp+10h] [xbp-60h] BYREF
  int v87; // [xsp+2Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C4646C & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_1C37058(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    sub_1C37058(&UnityEngine_Color_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&StringLiteral_19692/*"from"*/);
    sub_1C37058(&StringLiteral_19009/*"endChangeColor"*/);
    sub_1C37058(&StringLiteral_15185/*"UpdateColor"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22438/*"onupdate"*/);
    sub_1C37058(&StringLiteral_24110/*"to"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C4646C = 1;
  }
  this->fields.BgAssetData = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.BgAssetData, (int32_t)data, (int32_t)method, v3);
  if ( !data )
    goto LABEL_82;
  v8 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v7);
  this->fields.nowBgState = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nowBgState, (int32_t)v8, v9, v10);
  BgObject = (__int64)BattlePerformanceBg__GetBgObject(this, data, v11);
  if ( !BgObject )
    goto LABEL_82;
  parentCamera = this->fields.parentCamera;
  v13 = (UnityEngine_GameObject_o *)BgObject;
  BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)BgObject, 0);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v13, 0);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v13, 0);
    v14 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4C3C921 )
    {
      BgObject = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v14 )
      goto LABEL_82;
    UnityEngine_Transform__set_eulerAngles(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v13, 0);
  if ( !BgObject )
    goto LABEL_82;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0);
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v13, 0);
  v15 = (UnityEngine_Transform_o *)BgObject;
  if ( !byte_4C3C926 )
  {
    BgObject = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v15 )
    goto LABEL_82;
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  this->fields.bgobject = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bgobject, (int32_t)v13, v16, v17);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(this, data, v18);
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
    v21 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4C3C926 )
    {
      BgObject = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v21 )
      goto LABEL_82;
    UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.frontobject, (int32_t)FrontObject, v22, v23);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (__int64)BattlePerformanceBg__getBattleBgComponents(this, 0, v20);
  if ( !nowBgState )
    goto LABEL_82;
  BattlePerformanceBg_BgState__loadSaveData(
    nowBgState,
    (BattleBgComponent_array *)BgObject,
    this->fields.actionCamera,
    v25);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  v27 = *(_QWORD *)&this->fields.loadbgno;
  v28 = this->fields.parentCamera;
  v29 = sub_1C372A4(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0);
  *(_QWORD *)(v29 + 16) = v27;
  *(_BYTE *)(v29 + 24) = v28;
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v29,
    (const MethodInfo_3034548 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    v88.fields.r = 1.0;
    v88.fields.g = 1.0;
    v88.fields.b = 1.0;
    v88.fields.a = 1.0;
    this->fields.fade = 0;
    UnityEngine_RenderSettings__set_ambientLight(v88, 0);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
        EndCallback->fields.method_code,
        EndCallback->fields.method);
    BattlePerformanceBg__OnEndBgLoad(this, v30);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  BgObject = sub_1C37100(object___TypeInfo, 10);
  if ( !BgObject )
LABEL_82:
    sub_1C372B4(BgObject);
  v35 = (System_Object_array *)BgObject;
  v36 = StringLiteral_19692/*"from"*/;
  if ( StringLiteral_19692/*"from"*/ )
  {
    v36 = sub_1C37194(StringLiteral_19692/*"from"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_84;
    v37 = StringLiteral_19692/*"from"*/;
  }
  else
  {
    v37 = 0;
  }
  if ( !LODWORD(v35->max_length) )
    goto LABEL_83;
  v35->m_Items[0] = (Il2CppObject *)v37;
  sub_1C36FFC((CGThumbnailListItem_o *)v35->m_Items, v37, v33, v34);
  v86 = xmmword_C0FC60;
  v36 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v86, v38, v39, v40, v41, v42, v43);
  v46 = (Il2CppObject *)v36;
  if ( v36 )
  {
    v36 = sub_1C37194(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_84;
  }
  if ( LODWORD(v35->max_length) <= 1 )
    goto LABEL_83;
  v35->m_Items[1] = v46;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->m_Items[1], (int32_t)v46, v44, v45);
  v36 = StringLiteral_24110/*"to"*/;
  if ( StringLiteral_24110/*"to"*/ )
  {
    v36 = sub_1C37194(StringLiteral_24110/*"to"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_84;
    v49 = StringLiteral_24110/*"to"*/;
  }
  else
  {
    v49 = 0;
  }
  if ( LODWORD(v35->max_length) <= 2 )
    goto LABEL_83;
  v35->m_Items[2] = (Il2CppObject *)v49;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->m_Items[2], v49, v47, v48);
  tmpcolor = this->fields.tmpcolor;
  v36 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v50, v51, v52, v53, v54, v55);
  v58 = (Il2CppObject *)v36;
  if ( v36 )
  {
    v36 = sub_1C37194(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_84;
  }
  if ( LODWORD(v35->max_length) <= 3 )
    goto LABEL_83;
  v35->m_Items[3] = v58;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->m_Items[3], (int32_t)v58, v56, v57);
  v36 = StringLiteral_24071/*"time"*/;
  if ( StringLiteral_24071/*"time"*/ )
  {
    v36 = sub_1C37194(StringLiteral_24071/*"time"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_84;
    v61 = StringLiteral_24071/*"time"*/;
  }
  else
  {
    v61 = 0;
  }
  if ( LODWORD(v35->max_length) <= 4 )
    goto LABEL_83;
  v35->m_Items[4] = (Il2CppObject *)v61;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->m_Items[4], v61, v59, v60);
  v87 = 1056964608;
  v36 = j_il2cpp_value_box_0(float_TypeInfo, &v87, v62, v63, v64, v65, v66, v67);
  v70 = (Il2CppObject *)v36;
  if ( v36 )
  {
    v36 = sub_1C37194(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
    {
LABEL_84:
      v84 = sub_1C372D8(v36);
      sub_1C37180(v84, 0);
    }
  }
  if ( LODWORD(v35->max_length) <= 5 )
    goto LABEL_83;
  v35->m_Items[5] = v70;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->m_Items[5], (int32_t)v70, v68, v69);
  v36 = StringLiteral_22438/*"onupdate"*/;
  if ( StringLiteral_22438/*"onupdate"*/ )
  {
    v36 = sub_1C37194(StringLiteral_22438/*"onupdate"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_84;
    v73 = StringLiteral_22438/*"onupdate"*/;
  }
  else
  {
    v73 = 0;
  }
  if ( LODWORD(v35->max_length) <= 6 )
    goto LABEL_83;
  v35->m_Items[6] = (Il2CppObject *)v73;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->m_Items[6], v73, v71, v72);
  v36 = StringLiteral_15185/*"UpdateColor"*/;
  if ( StringLiteral_15185/*"UpdateColor"*/ )
  {
    v36 = sub_1C37194(StringLiteral_15185/*"UpdateColor"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_84;
    v76 = StringLiteral_15185/*"UpdateColor"*/;
  }
  else
  {
    v76 = 0;
  }
  if ( LODWORD(v35->max_length) <= 7 )
    goto LABEL_83;
  v35->m_Items[7] = (Il2CppObject *)v76;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->m_Items[7], v76, v74, v75);
  v36 = StringLiteral_22430/*"oncomplete"*/;
  if ( StringLiteral_22430/*"oncomplete"*/ )
  {
    v36 = sub_1C37194(StringLiteral_22430/*"oncomplete"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_84;
    v79 = StringLiteral_22430/*"oncomplete"*/;
  }
  else
  {
    v79 = 0;
  }
  if ( LODWORD(v35->max_length) <= 8 )
    goto LABEL_83;
  v35->m_Items[8] = (Il2CppObject *)v79;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->m_Items[8], v79, v77, v78);
  v36 = StringLiteral_19009/*"endChangeColor"*/;
  if ( StringLiteral_19009/*"endChangeColor"*/ )
  {
    v36 = sub_1C37194(StringLiteral_19009/*"endChangeColor"*/, v35->obj.klass->_1.element_class);
    if ( v36 )
    {
      v82 = StringLiteral_19009/*"endChangeColor"*/;
      goto LABEL_78;
    }
    goto LABEL_84;
  }
  v82 = 0;
LABEL_78:
  if ( LODWORD(v35->max_length) <= 9 )
LABEL_83:
    sub_1C372BC(v36);
  v35->m_Items[9] = (Il2CppObject *)v82;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->m_Items[9], v82, v80, v81);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v83 = iTween__Hash(v35, 0);
  iTween__ValueTo(gameObject, v83, 0);
}


void BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int32_t fade; // w8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  BgResourceData_o *BgResource; // x0
  System_String_o *v7; // x20
  AssetLoader_LoadEndDataHandler_o *v8; // x21
  struct System_Action_o *EndCallback; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BgResourceData_Fields fields; // x8
  _QWORD *v13; // x9
  __int64 klass_low; // x10
  __int64 v15; // x8
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C4646D & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_BattlePerformanceBg_endChangeBg__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C4646D = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    v17.fields.r = 0.0;
    v17.fields.g = 0.0;
    v17.fields.b = 0.0;
    v17.fields.a = 1.0;
    UnityEngine_RenderSettings__set_ambientLight(v17, 0);
    BattlePerformanceBg__ReleaseBg(this, v4);
    BgResource = BattlePerformanceBg__get_BgResource(this, v5);
    if ( BgResource )
    {
      BgResource = (BgResourceData_o *)BgResourceData__get_AssetPath(BgResource, 0);
      if ( this->fields.loadedChangeBgList )
      {
        v7 = (System_String_o *)BgResource;
        if ( System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)this->fields.loadedChangeBgList,
               (Il2CppObject *)BgResource,
               (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(v8, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getAsset_40533720(v7, v8, 0) )
            return;
LABEL_21:
          v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v7, v16, 1, 0);
          return;
        }
        if ( !System_String__op_Inequality(v7, this->fields.initLoadedBgPath, 0) )
          goto LABEL_21;
        BgResource = (BgResourceData_o *)this->fields.loadedChangeBgList;
        if ( BgResource )
        {
          fields = BgResource->fields;
          v13 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(BgResource[1].klass);
          if ( fields )
          {
            klass_low = SLODWORD(BgResource[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)BgResource,
                (Il2CppObject *)v7,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v15 = *(_QWORD *)&fields + 8 * klass_low;
              LODWORD(BgResource[1].klass) = klass_low + 1;
              *(_QWORD *)(v15 + 32) = v7;
              sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v7, v10, v11);
            }
            goto LABEL_21;
          }
        }
      }
    }
    sub_1C372B4(BgResource);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  System_Action_o *v13; // x23
  const MethodInfo *v14; // x4

  if ( (byte_4C46464 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__);
    sub_1C37058(&BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
    byte_4C46464 = 1;
  }
  v5 = sub_1C372A4(BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = data;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)data, v9, v10);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v5, Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__, 0);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v13, v14);
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
  if ( (byte_4C46465 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_1C37058(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    this = (BattlePerformanceBg_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46465 = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_55;
  v5 = BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.nowBgState, (int32_t)v5, v6, v7);
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
      UnityEngine_Object__Destroy_71266752(v14, 0);
    }
    v15 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
    {
      v16 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v16, 0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.BgAssetData, (int32_t)data, v11, v12);
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
    if ( !byte_4C3C921 )
    {
      this = (BattlePerformanceBg_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
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
  if ( !byte_4C3C926 )
  {
    this = (BattlePerformanceBg_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v23 )
    goto LABEL_55;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v23,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  name = data->fields.name;
  v4->fields.nowBgAssetPath = name;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.nowBgAssetPath, (int32_t)name, v25, v26);
  v4->fields.bgobject = (struct UnityEngine_GameObject_o *)v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.bgobject, (int32_t)v21, v27, v28);
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
            if ( !byte_4C3C926 )
            {
              this = (BattlePerformanceBg_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
              byte_4C3C926 = 1;
            }
            if ( v32 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v32,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v30;
              sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.frontobject, (int32_t)v30, v33, v34);
              goto LABEL_53;
            }
          }
        }
      }
    }
LABEL_55:
    sub_1C372B4(this);
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
  v40 = sub_1C372A4(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v40, 0);
  *(_QWORD *)(v40 + 16) = v38;
  *(_BYTE *)(v40 + 24) = v39;
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v40,
    (const MethodInfo_3034548 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


BattleBgComponent_array *BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_GameObject_o *ComponentsInChildren_object; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_4C4645C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleBgComponent__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4645C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleBgComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
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
                                                                (const MethodInfo_313FE78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v5 )
      goto LABEL_17;
    System_Collections_Generic_List_object___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
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
                                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_17:
    sub_1C372B4(ComponentsInChildren_object);
  }
  ComponentsInChildren_object = this->fields.frontobject;
  if ( !ComponentsInChildren_object )
    goto LABEL_17;
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                              ComponentsInChildren_object,
                                                              includeInactive,
                                                              (const MethodInfo_313FE78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v5 )
    goto LABEL_17;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
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
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattlePerformanceBg_BgState_o *v10; // x8
  struct System_String_o *bgName; // x1
  struct BattlePerformanceBg_BgState_o *v12; // x8
  unsigned int Count; // w0
  __int64 v14; // x0
  _DWORD **v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattlePerformanceBg_BgState_o *v18; // x8
  unsigned int v19; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  __int64 v21; // x22
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  _DWORD *v28; // x23
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  _DWORD *v32; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  __int64 v34; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C46459 & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_1C37058(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__);
    sub_1C37058(&BattlePerformanceBg_SaveData_TypeInfo);
    byte_4C46459 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  BattlePerformanceBg__saveHistoryBgState(this, 0, v2);
  v4 = sub_1C372A4(BattlePerformanceBg_SaveData_TypeInfo);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v4, v5);
  nowBgState = this->fields.nowBgState;
  if ( nowBgState )
  {
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)nowBgState->fields.compDictionary;
    if ( !compDictionary )
      goto LABEL_26;
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                                  compDictionary,
                                                                                  (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    if ( (int)compDictionary >= 1 )
    {
      v10 = this->fields.nowBgState;
      if ( !v10 )
        goto LABEL_26;
      if ( !v4 )
        goto LABEL_26;
      bgName = v10->fields.bgName;
      *(_QWORD *)(v4 + 16) = bgName;
      sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)bgName, v8, v9);
      v12 = this->fields.nowBgState;
      if ( !v12 )
        goto LABEL_26;
      compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.compDictionary;
      if ( !compDictionary
        || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                      compDictionary,
                      (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__),
            v14 = sub_1C37100(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count),
            *(_QWORD *)(v4 + 24) = v14,
            v15 = (_DWORD **)(v4 + 24),
            sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 24), v14, v16, v17),
            (v18 = this->fields.nowBgState) == 0)
        || (compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v18->fields.compDictionary) == 0 )
      {
LABEL_26:
        sub_1C372B4(compDictionary);
      }
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v35,
        compDictionary,
        (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
      v36 = v35;
      v19 = 0;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v36,
                (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
      {
        current = v36.fields._current;
        v21 = sub_1C372A4(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v21, 0);
        if ( !v21 )
          sub_1C372B4(v22);
        *(_QWORD *)(v21 + 16) = current.fields.key;
        sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 16), (int32_t)current.fields.key, v23, v24);
        *(_QWORD *)(v21 + 24) = current.fields.value;
        sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 24), (int32_t)current.fields.value, v25, v26);
        v28 = *v15;
        if ( !*v15 )
          sub_1C372B4(v27);
        v29 = sub_1C37194(v21, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
        if ( !v29 )
        {
          v34 = sub_1C372D8(0);
          sub_1C37180(v34, 0);
        }
        if ( v19 >= v28[6] )
          sub_1C372BC(v29);
        v32 = &v28[2 * v19];
        *((_QWORD *)v32 + 4) = v21;
        sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 8), v21, v30, v31);
        ++v19;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v36,
        (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
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

  if ( (byte_4C46458 & 1) == 0 )
  {
    sub_1C37058(&BgResourceData_TypeInfo);
    byte_4C46458 = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    loadbgno = this->fields.loadbgno;
    loadbgType = this->fields.loadbgType;
    cachedBgResource = (BgResourceData_o *)sub_1C372A4(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, loadbgno, loadbgType, 0);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cachedBgResource, (int32_t)cachedBgResource, v6, v7);
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
  struct System_String_o *AssetPath; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AssetLoader_LoadEndDataHandler_o *v12; // x21

  if ( (byte_4C46460 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_BattlePerformanceBg_endloadBg__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C46460 = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_8;
  BattlePerformanceBg__InitLoadBgInfo(this, no, tp, method);
  BgResource = BattlePerformanceBg__get_BgResource(this, v7);
  if ( !BgResource )
    sub_1C372B4(0);
  AssetPath = BgResourceData__get_AssetPath(BgResource, 0);
  this->fields.initLoadedBgPath = AssetPath;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.initLoadedBgPath, (int32_t)AssetPath, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v12, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPath, v12, 1, 0) )
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
  int max_length; // w8
  BattleBgComponent_array *v10; // x21
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  BattleBgComponent_o *v13; // x22

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, (const MethodInfo *)animName);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v10 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C372BC(BattleBgComponents);
      v12 = &v10->obj.klass + (int)v11;
      v13 = (BattleBgComponent_o *)v12[4];
      if ( !v13 )
        break;
      BattleBgComponents = (BattleBgComponent_array *)BattleBgComponent__checkKey((BattleBgComponent_o *)v12[4], key, 0);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
        BattleBgComponent__playAnimation(v13, animName, timeline, 0);
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_11:
    sub_1C372B4(BattleBgComponents);
  }
}


void BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C46472 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22722/*"playerfield"*/);
    sub_1C37058(&StringLiteral_3121/*"BattleIn"*/);
    byte_4C46472 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22722/*"playerfield"*/,
    (System_String_o *)StringLiteral_3121/*"BattleIn"*/,
    0.0,
    v2);
}


void BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C46471 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3123/*"BattleOut"*/);
    sub_1C37058(&StringLiteral_22722/*"playerfield"*/);
    byte_4C46471 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22722/*"playerfield"*/,
    (System_String_o *)StringLiteral_3123/*"BattleOut"*/,
    0.0,
    v2);
}


void BattlePerformanceBg__playLoadEndAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  int max_length; // w8
  BattleBgComponent_array *v5; // x19
  unsigned int v6; // w20

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v5 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C372BC(BattleBgComponents);
      BattleBgComponents = (BattleBgComponent_array *)v5->m_Items[v6];
      if ( !BattleBgComponents )
        break;
      if ( LOBYTE(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__playLoadEndAnimation((BattleBgComponent_o *)BattleBgComponents, 0);
      max_length = v5->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_11:
    sub_1C372B4(BattleBgComponents);
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

  if ( (byte_4C4646F & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceBg_BgState_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4646F = 1;
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
                                                        (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
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
                                                          (const MethodInfo_3464B2C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
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
        (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
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
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
    if ( BattleBgComponents )
      return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                (Il2CppObject *)inName,
                                                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
LABEL_30:
    sub_1C372B4(BattleBgComponents);
  }
  v15 = sub_1C372A4(BattlePerformanceBg_BgState_TypeInfo);
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
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
  return (BattlePerformanceBg_BgState_o *)v15;
}


void BattlePerformanceBg__setCutNodeNoble(BattlePerformanceBg_o *this, bool flg, const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  int max_length; // w8
  BattleBgComponent_array *v6; // x19
  unsigned int v7; // w21
  bool v8; // w20

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 1, method);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v6 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = flg;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C372BC(BattleBgComponents);
      BattleBgComponents = (BattleBgComponent_array *)v6->m_Items[v7];
      if ( !BattleBgComponents )
        break;
      if ( BYTE1(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__setCutNodeNoble((BattleBgComponent_o *)BattleBgComponents, v8, 0);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1C372B4(BattleBgComponents);
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
  const MethodInfo *v14; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v15; // x22
  int max_length; // w8
  unsigned int v17; // w23
  BattlePerformanceBg_SaveData_CompSaveData_o *v18; // x27
  Il2CppObject *bgCompName; // x1
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4C4645A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__set_Item__);
    byte_4C4645A = 1;
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
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nowBgState, (int32_t)v9, v11, v12);
        v15 = saveData->fields.compSaveDataList;
        if ( !v15 )
          goto LABEL_24;
        max_length = v15->max_length;
        if ( max_length >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            if ( v17 >= max_length )
              sub_1C372BC(compDictionary);
            if ( !*p_nowBgState )
              break;
            v18 = v15->m_Items[v17];
            if ( !v18 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
            bgCompName = (Il2CppObject *)v18->fields.bgCompName;
            if ( isForceOverWriteBgState )
            {
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                compDictionary,
                bgCompName,
                (Il2CppObject *)v18->fields.bgCompData,
                (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__set_Item__);
            }
            else
            {
              if ( !compDictionary )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                            compDictionary,
                                                                                            bgCompName,
                                                                                            (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
              if ( ((unsigned __int8)compDictionary & 1) == 0 )
              {
                if ( !*p_nowBgState )
                  break;
                compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
                if ( !compDictionary )
                  break;
                System_Collections_Generic_Dictionary_object__object___Add(
                  compDictionary,
                  (Il2CppObject *)v18->fields.bgCompName,
                  (Il2CppObject *)v18->fields.bgCompData,
                  (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
              }
            }
            max_length = v15->max_length;
            if ( (int)++v17 >= max_length )
              goto LABEL_21;
          }
LABEL_24:
          sub_1C372B4(compDictionary);
        }
LABEL_21:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattlePerformanceBg__getBattleBgComponents(
                                                                                      this,
                                                                                      0,
                                                                                      v14);
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
  sub_1C36FFC(v18, (int32_t)callback, v21, v22);
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

  if ( (byte_4C46477 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
    byte_4C46477 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.bgName = inName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)inName, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  this->fields.compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.compDictionary, (int32_t)v7, v8, v9);
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
  if ( (byte_4C46479 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    this = (BattlePerformanceBg_BgState_o *)sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
    byte_4C46479 = 1;
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
        sub_1C372BC(this);
      v9 = list->m_Items[v8];
      if ( !v9 )
        break;
      v9->fields.actionCamera = actionCamera;
      sub_1C36FFC(
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
                                                  (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v11 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0);
          if ( !v11 )
            break;
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v11,
                   (Il2CppObject *)this,
                   (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v9, (BattleBgComponent_SaveData_o *)Item, 0);
        }
      }
      max_length = list->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_15:
    sub_1C372B4(this);
  }
}


void BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  int max_length; // w8
  unsigned int v7; // w24
  BattleBgComponent_o *v8; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v9; // x21
  Il2CppObject *name; // x23

  if ( (byte_4C46478 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
    byte_4C46478 = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_object__object___Clear(
    compDictionary,
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C372BC(compDictionary);
      v8 = list->m_Items[v7];
      if ( !v8 )
        break;
      if ( v8->fields.isRecAnimation )
      {
        v9 = this->fields.compDictionary;
        name = (Il2CppObject *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v8, 0);
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponent__getSaveData(
                                                                                      v8,
                                                                                      0);
        if ( !v9 )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)v9,
          name,
          (Il2CppObject *)compDictionary,
          (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_14:
    sub_1C372B4(compDictionary);
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

  if ( (byte_4C4647A & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_1C37058(&string_TypeInfo);
    byte_4C4647A = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)Empty, v5, v6);
  v7 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_1C37100(
                                                                   BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                   0);
  this->fields.compSaveDataList = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.compSaveDataList, (int32_t)v7, v8, v9);
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
    sub_1C372B4(0);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return BattleBgComponent__checkKey(x, this->fields.key, 0);
}