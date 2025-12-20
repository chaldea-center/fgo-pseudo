void BattlePerformanceBg___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2FE3B & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceBg_TypeInfo);
    sub_1C94098(&StringLiteral_19856/*"front"*/);
    byte_4D2FE3B = 1;
  }
  BattlePerformanceBg_TypeInfo->static_fields->Frontfile = (struct System_String_o *)StringLiteral_19856/*"front"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattlePerformanceBg_TypeInfo->static_fields,
    StringLiteral_19856/*"front"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_Dictionary_object__object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D2FE3A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&string_TypeInfo);
    byte_4D2FE3A = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.loadedChangeBgList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.initLoadedBgPath,
    (int32_t)Empty,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bgSpShadowList, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v25,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v25;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.historyBgState, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v32;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bgInfoList, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePerformanceBg__AddCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        System_Action_BattlePerformanceBg_ChangedBgArgs__o *callback,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_onLoadBgFinished; // x19
  System_Delegate_o *onLoadBgFinished; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Delegate_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x0
  int32_t v17; // w1

  if ( (byte_4D2FE38 & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
    byte_4D2FE38 = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (GrandQuestFolderBoardItem_o *)&this->fields.onLoadBgFinished;
  v7 = System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0);
  if ( !v7 )
    goto LABEL_7;
  v14 = v7;
  v15 = sub_1C941D4(v7, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
  if ( !v15
    || (p_onLoadBgFinished->klass = (GrandQuestFolderBoardItem_c *)v15,
        v16 = sub_1C941D4(v14, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo),
        v17 = v16,
        !v16) )
  {
    sub_1C9468C(v14);
LABEL_7:
    v17 = 0;
    p_onLoadBgFinished->klass = 0;
  }
  sub_1C9403C(p_onLoadBgFinished, v17, v8, v9, v10, v11, v12, v13);
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
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4D2FE2B & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceBg_BgInfo_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
    byte_4D2FE2B = 1;
  }
  v21 = (BattlePerformanceBg_BgInfo_o *)sub_1C942E4(BattlePerformanceBg_BgInfo_TypeInfo);
  v36.fields.x = v17;
  v36.fields.y = v16;
  v36.fields.z = v15;
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  v22 = (Il2CppObject *)v21;
  BattlePerformanceBg_BgInfo___ctor(v21, No, tp, v36, v37, changeDirect, parentCamera, callback, v23);
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (items = bgInfoList->fields._items,
        v33 = Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__,
        ++bgInfoList->fields._version,
        !items) )
  {
    sub_1C942F0(bgInfoList, v24);
  }
  size = bgInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgInfoList,
      v22,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    bgInfoList->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v22;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v22, v25, v26, v27, v28, v29, v30);
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
    sub_1C942F0(this, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.onLoadBgFinished = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onLoadBgFinished, 0, v2, v3, v4, v5, v6, v7);
}


void BattlePerformanceBg__DebugPrint(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0)) == 0 )
    sub_1C942F0(this, data);
}


bool BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_4D2FE2C & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__);
    byte_4D2FE2C = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_1C942F0(this, method);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *BattlePerformanceBg__FetchBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  System_Collections_Generic_List_object__o *v5; // x8
  BattlePerformanceBg_BgInfo_o *v6; // x19

  if ( (byte_4D2FE2D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__);
    byte_4D2FE2D = 1;
  }
  if ( !BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
    return 0;
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (bgInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bgInfoList,
                                                                    0,
                                                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__),
        (v5 = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList) == 0) )
  {
    sub_1C942F0(bgInfoList, v3);
  }
  v6 = (BattlePerformanceBg_BgInfo_o *)bgInfoList;
  System_Collections_Generic_List_object___RemoveAt(
    v5,
    0,
    (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  System_Object_array *BattleBgComponents; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_4D2FE35 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Find_BattleBgComponent___);
    sub_1C94098(&System_Func_BattleBgComponent__bool__TypeInfo);
    sub_1C94098(&Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__);
    sub_1C94098(&BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
    byte_4D2FE35 = 1;
  }
  v5 = sub_1C942E4(BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = key;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)key, v8, v9, v10, v11, v12, v13);
  BattleBgComponents = (System_Object_array *)BattlePerformanceBg__getBattleBgComponents(this, 0, v14);
  v16 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBgComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__,
    0);
  return (BattleBgComponent_o *)BasicHelper__Find_object_(
                                  BattleBgComponents,
                                  (System_Func_T__bool__o *)v16,
                                  (const MethodInfo_3186034 *)Method_BasicHelper_Find_BattleBgComponent___);
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
  Il2CppObject *Object_object__51893132; // x20
  Il2CppObject *v12; // x19
  Il2CppObject *v13; // x19
  int Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2FE2F & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_17219/*"bg"*/);
    sub_1C94098(&StringLiteral_17222/*"bg0"*/);
    byte_4D2FE2F = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    sub_1C942F0(0, v6);
  Type_k__BackingField = BgResource->fields._Type_k__BackingField;
  if ( Type_k__BackingField < 1 )
  {
    if ( !data )
      sub_1C942F0(BgResource, v6);
    Object_object__51893132 = AssetData__GetObject_object__51893132(
                                data,
                                (System_String_o *)StringLiteral_17219/*"bg"*/,
                                (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51893132, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__51893132,
                                           (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v13 = AssetData__GetObject_object__51893132(
              data,
              (System_String_o *)StringLiteral_17222/*"bg0"*/,
              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v13,
                                           (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v7 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0);
    v8 = System_String__Concat_64417744((System_String_o *)StringLiteral_17219/*"bg"*/, v7, 0);
    if ( !data )
      sub_1C942F0(v8, v8);
    v9 = AssetData__GetObject_object__51893132(
           data,
           v8,
           (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v9,
                                           (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v12 = AssetData__GetObject_object__51893132(
              data,
              (System_String_o *)StringLiteral_17219/*"bg"*/,
              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v12,
                                           (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  Il2CppObject *Object_object__51893132; // x20
  BattlePerformanceBg_c *v11; // x0
  bool v12; // w8
  UnityEngine_GameObject_o *result; // x0
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2FE30 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&BattlePerformanceBg_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FE30 = 1;
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
    BgResource = System_String__Concat_64417744(v8, v9, 0);
    v8 = (System_String_o *)BgResource;
  }
  if ( !data )
LABEL_21:
    sub_1C942F0(BgResource, v6);
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              data,
                              v8,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51893132, 0, 0) )
    goto LABEL_24;
  v11 = BattlePerformanceBg_TypeInfo;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v11 = BattlePerformanceBg_TypeInfo;
  }
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              data,
                              v11->static_fields->Frontfile,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51893132, 0, 0);
  result = 0;
  if ( v12 )
  {
LABEL_24:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__51893132,
                                         (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( (byte_4D2FE33 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&StringLiteral_23641/*"shadow_"*/);
    byte_4D2FE33 = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64417744((System_String_o *)StringLiteral_23641/*"shadow_"*/, v5, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51893132(
                                      BgAssetData,
                                      v6,
                                      (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
}


void BattlePerformanceBg__InitLoadBgInfo(
        BattlePerformanceBg_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  BgResourceData_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2FE26 & 1) == 0 )
  {
    sub_1C94098(&BgResourceData_TypeInfo);
    byte_4D2FE26 = 1;
  }
  this->fields.loadbgno = bgId;
  this->fields.loadbgType = bgType;
  v7 = (BgResourceData_o *)sub_1C942E4(BgResourceData_TypeInfo);
  BgResourceData___ctor(v7, bgId, bgType, 0);
  this->fields.cachedBgResource = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.cachedBgResource, (int32_t)v7, v8, v9, v10, v11, v12, v13);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w20
  int32_t v25; // w21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x5

  if ( (byte_4D2FE27 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__);
    sub_1C94098(&BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
    byte_4D2FE27 = 1;
  }
  v9 = sub_1C942E4(BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C942F0(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = bgId;
  *(_DWORD *)(v9 + 28) = bgType;
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)finishCallback, v18, v19, v20, v21, v22, v23);
  v24 = *(_DWORD *)(v9 + 24);
  v25 = *(_DWORD *)(v9 + 28);
  v26 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__,
    0);
  BattlePerformanceBg__LoadBgSpShadowEffectLocal(this, v24, v25, 1, v26, v27);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v21; // w21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v31; // x8
  System_String_o *v32; // x20
  AssetLoader_LoadEndDataHandler_o *v33; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2FE28 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&BattleEffectUtility_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__);
    sub_1C94098(&BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
    byte_4D2FE28 = 1;
  }
  effectPath = 0;
  v11 = sub_1C942E4(BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_23;
  *(_QWORD *)(v11 + 16) = finishCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BattleBgMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BattleBgMaster___);
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
  v21 = BgSpecialShadowEffectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v21, 0) )
    goto LABEL_13;
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object )
    goto LABEL_23;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)Master_object,
         (Il2CppObject *)effectPath,
         (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_13:
    ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0);
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
    sub_1C942F0(Master_object, v13);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v28 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v13,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = v28 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v31 + 32) = v13;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v31 + 32), (int32_t)v13, v22, v23, v24, v25, v26, v27);
  }
  v32 = effectPath;
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v11,
    Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v32, v33, 1, 0);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v16; // x1
  BattleActionCamera_o *v17; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2FE20 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FE20 = 1;
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
      UnityEngine_Object__Destroy_72110972(v8, 0);
      *p_bgobject = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bgobject, 0, v9, v10, v11, v12, v13, v14);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0, 0) )
    {
      v17 = this->fields.actionCamera;
      if ( !v17 )
        sub_1C942F0(0, v16);
      BattleActionCamera__stopCameraAnimation(v17, 0);
    }
    p_frontobject = &this->fields.frontobject;
    v19 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      v21 = (UnityEngine_Object_o *)*p_frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v21, 0);
      *p_frontobject = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.frontobject, 0, v22, v23, v24, v25, v26, v27);
    }
    BattlePerformanceBg__ReleaseBgAsset(this, this->fields.nowBgAssetPath, v20);
  }
}


void BattlePerformanceBg__ReleaseBgAsset(BattlePerformanceBg_o *this, System_String_o *path, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2FE23 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4D2FE23 = 1;
  }
  if ( !System_String__IsNullOrEmpty(path, 0) )
  {
    loadedChangeBgList = this->fields.loadedChangeBgList;
    if ( loadedChangeBgList )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)loadedChangeBgList,
              (Il2CppObject *)path,
              (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_8:
        this->fields.BgAssetData = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.BgAssetData, 0, v7, v8, v9, v10, v11, v12);
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
          (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_8;
      }
    }
    sub_1C942F0(loadedChangeBgList, v5);
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

  if ( (byte_4D2FE24 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4D2FE24 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)bgSpShadowList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v5 = this->fields.bgSpShadowList;
  if ( !v5 )
LABEL_13:
    sub_1C942F0(bgSpShadowList, method);
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

  if ( (byte_4D2FE22 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4D2FE22 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)loadedChangeBgList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_41285308(AssetStorage, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.loadedChangeBgList;
  if ( !v6 )
LABEL_16:
    sub_1C942F0(loadedChangeBgList, method);
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
  il2cpp_array_size_t max_length; // x8
  BattleBgComponent_array *v7; // x19
  unsigned __int64 v8; // x21
  UnityEngine_Object_o *v9; // x20

  if ( (byte_4D2FE39 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FE39 = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_15:
    sub_1C942F0(BattleBgComponents, v5);
  max_length = BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C942F8(BattleBgComponents);
      v9 = (UnityEngine_Object_o *)v7->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      BattleBgComponents = (BattleBgComponent_array *)UnityEngine_Object__op_Equality(v9, 0, 0);
      if ( ((unsigned __int8)BattleBgComponents & 1) == 0 )
      {
        if ( !v9 )
          goto LABEL_15;
        BattleBgComponent__ResetAnimation((BattleBgComponent_o *)v9, 0);
      }
      LODWORD(max_length) = v7->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
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
  System_String_o *v9; // x7
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
  int32_t v29; // w2
  char v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Object_array *v35; // x20
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  char v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  Il2CppObject *v44; // x21
  int32_t v45; // w2
  char v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  __int64 v51; // x1
  int32_t v52; // w2
  char v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  Il2CppObject *v58; // x21
  int32_t v59; // w2
  char v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  __int64 v65; // x1
  int32_t v66; // w2
  char v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  Il2CppObject *v72; // x21
  int32_t v73; // w2
  char v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  __int64 v79; // x1
  int32_t v80; // w2
  char v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x1
  int32_t v87; // w2
  char v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  __int64 v93; // x1
  int32_t v94; // w2
  char v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x1
  System_Collections_Hashtable_o *v101; // x0
  __int64 v102; // x0
  __int128 v103; // [xsp+0h] [xbp-A0h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-90h] BYREF
  int v105; // [xsp+5Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  if ( (byte_4D2FE2E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Color_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&float_TypeInfo);
    sub_1C94098(&StringLiteral_19853/*"from"*/);
    sub_1C94098(&StringLiteral_19150/*"endChangeColor"*/);
    sub_1C94098(&StringLiteral_15241/*"UpdateColor"*/);
    sub_1C94098(&StringLiteral_24310/*"time"*/);
    sub_1C94098(&StringLiteral_22649/*"onupdate"*/);
    sub_1C94098(&StringLiteral_24349/*"to"*/);
    sub_1C94098(&StringLiteral_22641/*"oncomplete"*/);
    sub_1C94098(&iTween_TypeInfo);
    byte_4D2FE2E = 1;
  }
  if ( this->fields.IsLoading )
  {
    v106.fields.x = v18;
    v106.fields.y = v17;
    v106.fields.z = v16;
    v107.fields.x = x;
    v107.fields.y = y;
    v107.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v106, v107, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.EndCallback,
    (int32_t)callback,
    tp,
    changeDirect,
    (System_String_o *)parentCamera,
    (int32_t)callback,
    (int64_t)method,
    v9);
  if ( this->fields.fade && !changeDirect )
  {
    if ( *p_EndCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))(*p_EndCallback)->fields.invoke_impl)(
        (*p_EndCallback)->fields.method_code,
        (*p_EndCallback)->fields.method);
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
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v27 = sub_1C94140(object___TypeInfo, 10);
  if ( !v27 )
    sub_1C942F0(0, v28);
  v35 = (System_Object_array *)v27;
  v36 = StringLiteral_19853/*"from"*/;
  if ( StringLiteral_19853/*"from"*/ )
  {
    v36 = sub_1C941D4(StringLiteral_19853/*"from"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v37 = StringLiteral_19853/*"from"*/;
  }
  else
  {
    v37 = 0;
  }
  if ( !LODWORD(v35->max_length) )
    goto LABEL_60;
  v35->m_Items[0] = (Il2CppObject *)v37;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v35->m_Items, v37, v29, v30, v31, v32, v33, v34);
  tmpcolor = this->fields.tmpcolor;
  v36 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v44 = (Il2CppObject *)v36;
  if ( v36 )
  {
    v36 = sub_1C941D4(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
  }
  if ( LODWORD(v35->max_length) <= 1 )
    goto LABEL_60;
  v35->m_Items[1] = v44;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->m_Items[1], (int32_t)v44, v38, v39, v40, v41, v42, v43);
  v36 = StringLiteral_24349/*"to"*/;
  if ( StringLiteral_24349/*"to"*/ )
  {
    v36 = sub_1C941D4(StringLiteral_24349/*"to"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v51 = StringLiteral_24349/*"to"*/;
  }
  else
  {
    v51 = 0;
  }
  if ( LODWORD(v35->max_length) <= 2 )
    goto LABEL_60;
  v35->m_Items[2] = (Il2CppObject *)v51;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
  v103 = xmmword_CFFE30;
  v36 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v103);
  v58 = (Il2CppObject *)v36;
  if ( v36 )
  {
    v36 = sub_1C941D4(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
  }
  if ( LODWORD(v35->max_length) <= 3 )
    goto LABEL_60;
  v35->m_Items[3] = v58;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->m_Items[3], (int32_t)v58, v52, v53, v54, v55, v56, v57);
  v36 = StringLiteral_24310/*"time"*/;
  if ( StringLiteral_24310/*"time"*/ )
  {
    v36 = sub_1C941D4(StringLiteral_24310/*"time"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v65 = StringLiteral_24310/*"time"*/;
  }
  else
  {
    v65 = 0;
  }
  if ( LODWORD(v35->max_length) <= 4 )
    goto LABEL_60;
  v35->m_Items[4] = (Il2CppObject *)v65;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->m_Items[4], v65, v59, v60, v61, v62, v63, v64);
  v105 = 1056964608;
  v36 = j_il2cpp_value_box_0(float_TypeInfo, &v105);
  v72 = (Il2CppObject *)v36;
  if ( v36 )
  {
    v36 = sub_1C941D4(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
    {
LABEL_61:
      v102 = sub_1C94314(v36);
      sub_1C941C0(v102, 0);
    }
  }
  if ( LODWORD(v35->max_length) <= 5 )
    goto LABEL_60;
  v35->m_Items[5] = v72;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->m_Items[5], (int32_t)v72, v66, v67, v68, v69, v70, v71);
  v36 = StringLiteral_22649/*"onupdate"*/;
  if ( StringLiteral_22649/*"onupdate"*/ )
  {
    v36 = sub_1C941D4(StringLiteral_22649/*"onupdate"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v79 = StringLiteral_22649/*"onupdate"*/;
  }
  else
  {
    v79 = 0;
  }
  if ( LODWORD(v35->max_length) <= 6 )
    goto LABEL_60;
  v35->m_Items[6] = (Il2CppObject *)v79;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->m_Items[6], v79, v73, v74, v75, v76, v77, v78);
  v36 = StringLiteral_15241/*"UpdateColor"*/;
  if ( StringLiteral_15241/*"UpdateColor"*/ )
  {
    v36 = sub_1C941D4(StringLiteral_15241/*"UpdateColor"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v86 = StringLiteral_15241/*"UpdateColor"*/;
  }
  else
  {
    v86 = 0;
  }
  if ( LODWORD(v35->max_length) <= 7 )
    goto LABEL_60;
  v35->m_Items[7] = (Il2CppObject *)v86;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->m_Items[7], v86, v80, v81, v82, v83, v84, v85);
  v36 = StringLiteral_22641/*"oncomplete"*/;
  if ( StringLiteral_22641/*"oncomplete"*/ )
  {
    v36 = sub_1C941D4(StringLiteral_22641/*"oncomplete"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_61;
    v93 = StringLiteral_22641/*"oncomplete"*/;
  }
  else
  {
    v93 = 0;
  }
  if ( LODWORD(v35->max_length) <= 8 )
    goto LABEL_60;
  v35->m_Items[8] = (Il2CppObject *)v93;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->m_Items[8], v93, v87, v88, v89, v90, v91, v92);
  v36 = StringLiteral_19150/*"endChangeColor"*/;
  if ( StringLiteral_19150/*"endChangeColor"*/ )
  {
    v36 = sub_1C941D4(StringLiteral_19150/*"endChangeColor"*/, v35->obj.klass->_1.element_class);
    if ( v36 )
    {
      v100 = StringLiteral_19150/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_61;
  }
  v100 = 0;
LABEL_56:
  if ( LODWORD(v35->max_length) <= 9 )
LABEL_60:
    sub_1C942F8(v36);
  v35->m_Items[9] = (Il2CppObject *)v100;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->m_Items[9], v100, v94, v95, v96, v97, v98, v99);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v101 = iTween__Hash(v35, 0);
  iTween__ValueTo(gameObject, v101, 0);
}


void BattlePerformanceBg__endChangeBg(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 BgObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct BattlePerformanceBg_BgState_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x2
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v22; // x21
  UnityEngine_Transform_o *v23; // x22
  UnityEngine_Transform_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v33; // x2
  UnityEngine_Transform_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v42; // x3
  System_Action_T__o *onLoadBgFinished; // x20
  __int64 v44; // d8
  bool v45; // w23
  __int64 v46; // x21
  const MethodInfo *v47; // x1
  struct System_Action_o *EndCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Object_array *v56; // x21
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  Il2CppObject *v65; // x22
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  Il2CppObject *v79; // x19
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  Il2CppObject *v93; // x19
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  __int64 v107; // x1
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  __int64 v114; // x1
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  __int64 v121; // x1
  System_Collections_Hashtable_o *v122; // x0
  __int64 v123; // x0
  struct UnityEngine_Color_o tmpcolor; // [xsp+0h] [xbp-70h] BYREF
  __int128 v125; // [xsp+10h] [xbp-60h] BYREF
  int v126; // [xsp+2Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v127; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2FE31 & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_1C94098(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    sub_1C94098(&UnityEngine_Color_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&float_TypeInfo);
    sub_1C94098(&StringLiteral_19853/*"from"*/);
    sub_1C94098(&StringLiteral_19150/*"endChangeColor"*/);
    sub_1C94098(&StringLiteral_15241/*"UpdateColor"*/);
    sub_1C94098(&StringLiteral_24310/*"time"*/);
    sub_1C94098(&StringLiteral_22649/*"onupdate"*/);
    sub_1C94098(&StringLiteral_24349/*"to"*/);
    sub_1C94098(&StringLiteral_22641/*"oncomplete"*/);
    sub_1C94098(&iTween_TypeInfo);
    byte_4D2FE31 = 1;
  }
  this->fields.BgAssetData = data;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.BgAssetData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    goto LABEL_82;
  v13 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v12);
  this->fields.nowBgState = v13;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nowBgState, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  BgObject = (__int64)BattlePerformanceBg__GetBgObject(this, data, v20);
  if ( !BgObject )
    goto LABEL_82;
  parentCamera = this->fields.parentCamera;
  v22 = (UnityEngine_GameObject_o *)BgObject;
  BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)BgObject, 0);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
    v23 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4D25F19 )
    {
      BgObject = sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    if ( !v23 )
      goto LABEL_82;
    UnityEngine_Transform__set_eulerAngles(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
  if ( !BgObject )
    goto LABEL_82;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0);
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
  v24 = (UnityEngine_Transform_o *)BgObject;
  if ( !byte_4D25F1E )
  {
    BgObject = sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  if ( !v24 )
    goto LABEL_82;
  UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  this->fields.bgobject = v22;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bgobject, (int32_t)v22, v25, v26, v27, v28, v29, v30);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(this, data, v31);
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
    v34 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_4D25F1E )
    {
      BgObject = sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F1E = 1;
    }
    if ( !v34 )
      goto LABEL_82;
    UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.frontobject,
      (int32_t)FrontObject,
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
    v42);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  v44 = *(_QWORD *)&this->fields.loadbgno;
  v45 = this->fields.parentCamera;
  v46 = sub_1C942E4(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v46, 0);
  *(_QWORD *)(v46 + 16) = v44;
  *(_BYTE *)(v46 + 24) = v45;
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v46,
    (const MethodInfo_30E5920 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    v127.fields.r = 1.0;
    v127.fields.g = 1.0;
    v127.fields.b = 1.0;
    v127.fields.a = 1.0;
    this->fields.fade = 0;
    UnityEngine_RenderSettings__set_ambientLight(v127, 0);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
        EndCallback->fields.method_code,
        EndCallback->fields.method);
    BattlePerformanceBg__OnEndBgLoad(this, v47);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  BgObject = sub_1C94140(object___TypeInfo, 10);
  if ( !BgObject )
LABEL_82:
    sub_1C942F0(BgObject, v11);
  v56 = (System_Object_array *)BgObject;
  v57 = StringLiteral_19853/*"from"*/;
  if ( StringLiteral_19853/*"from"*/ )
  {
    v57 = sub_1C941D4(StringLiteral_19853/*"from"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v58 = StringLiteral_19853/*"from"*/;
  }
  else
  {
    v58 = 0;
  }
  if ( !LODWORD(v56->max_length) )
    goto LABEL_83;
  v56->m_Items[0] = (Il2CppObject *)v58;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v56->m_Items, v58, v50, v51, v52, v53, v54, v55);
  v125 = xmmword_CFFE30;
  v57 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v125);
  v65 = (Il2CppObject *)v57;
  if ( v57 )
  {
    v57 = sub_1C941D4(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
  }
  if ( LODWORD(v56->max_length) <= 1 )
    goto LABEL_83;
  v56->m_Items[1] = v65;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->m_Items[1], (int32_t)v65, v59, v60, v61, v62, v63, v64);
  v57 = StringLiteral_24349/*"to"*/;
  if ( StringLiteral_24349/*"to"*/ )
  {
    v57 = sub_1C941D4(StringLiteral_24349/*"to"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v72 = StringLiteral_24349/*"to"*/;
  }
  else
  {
    v72 = 0;
  }
  if ( LODWORD(v56->max_length) <= 2 )
    goto LABEL_83;
  v56->m_Items[2] = (Il2CppObject *)v72;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->m_Items[2], v72, v66, v67, v68, v69, v70, v71);
  tmpcolor = this->fields.tmpcolor;
  v57 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v79 = (Il2CppObject *)v57;
  if ( v57 )
  {
    v57 = sub_1C941D4(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
  }
  if ( LODWORD(v56->max_length) <= 3 )
    goto LABEL_83;
  v56->m_Items[3] = v79;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->m_Items[3], (int32_t)v79, v73, v74, v75, v76, v77, v78);
  v57 = StringLiteral_24310/*"time"*/;
  if ( StringLiteral_24310/*"time"*/ )
  {
    v57 = sub_1C941D4(StringLiteral_24310/*"time"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v86 = StringLiteral_24310/*"time"*/;
  }
  else
  {
    v86 = 0;
  }
  if ( LODWORD(v56->max_length) <= 4 )
    goto LABEL_83;
  v56->m_Items[4] = (Il2CppObject *)v86;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->m_Items[4], v86, v80, v81, v82, v83, v84, v85);
  v126 = 1056964608;
  v57 = j_il2cpp_value_box_0(float_TypeInfo, &v126);
  v93 = (Il2CppObject *)v57;
  if ( v57 )
  {
    v57 = sub_1C941D4(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
    {
LABEL_84:
      v123 = sub_1C94314(v57);
      sub_1C941C0(v123, 0);
    }
  }
  if ( LODWORD(v56->max_length) <= 5 )
    goto LABEL_83;
  v56->m_Items[5] = v93;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->m_Items[5], (int32_t)v93, v87, v88, v89, v90, v91, v92);
  v57 = StringLiteral_22649/*"onupdate"*/;
  if ( StringLiteral_22649/*"onupdate"*/ )
  {
    v57 = sub_1C941D4(StringLiteral_22649/*"onupdate"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v100 = StringLiteral_22649/*"onupdate"*/;
  }
  else
  {
    v100 = 0;
  }
  if ( LODWORD(v56->max_length) <= 6 )
    goto LABEL_83;
  v56->m_Items[6] = (Il2CppObject *)v100;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->m_Items[6], v100, v94, v95, v96, v97, v98, v99);
  v57 = StringLiteral_15241/*"UpdateColor"*/;
  if ( StringLiteral_15241/*"UpdateColor"*/ )
  {
    v57 = sub_1C941D4(StringLiteral_15241/*"UpdateColor"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v107 = StringLiteral_15241/*"UpdateColor"*/;
  }
  else
  {
    v107 = 0;
  }
  if ( LODWORD(v56->max_length) <= 7 )
    goto LABEL_83;
  v56->m_Items[7] = (Il2CppObject *)v107;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->m_Items[7], v107, v101, v102, v103, v104, v105, v106);
  v57 = StringLiteral_22641/*"oncomplete"*/;
  if ( StringLiteral_22641/*"oncomplete"*/ )
  {
    v57 = sub_1C941D4(StringLiteral_22641/*"oncomplete"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_84;
    v114 = StringLiteral_22641/*"oncomplete"*/;
  }
  else
  {
    v114 = 0;
  }
  if ( LODWORD(v56->max_length) <= 8 )
    goto LABEL_83;
  v56->m_Items[8] = (Il2CppObject *)v114;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->m_Items[8], v114, v108, v109, v110, v111, v112, v113);
  v57 = StringLiteral_19150/*"endChangeColor"*/;
  if ( StringLiteral_19150/*"endChangeColor"*/ )
  {
    v57 = sub_1C941D4(StringLiteral_19150/*"endChangeColor"*/, v56->obj.klass->_1.element_class);
    if ( v57 )
    {
      v121 = StringLiteral_19150/*"endChangeColor"*/;
      goto LABEL_78;
    }
    goto LABEL_84;
  }
  v121 = 0;
LABEL_78:
  if ( LODWORD(v56->max_length) <= 9 )
LABEL_83:
    sub_1C942F8(v57);
  v56->m_Items[9] = (Il2CppObject *)v121;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->m_Items[9], v121, v115, v116, v117, v118, v119, v120);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v122 = iTween__Hash(v56, 0);
  iTween__ValueTo(gameObject, v122, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BgResourceData_Fields fields; // x8
  _QWORD *v18; // x9
  __int64 klass_low; // x10
  __int64 v20; // x8
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2FE32 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_BattlePerformanceBg_endChangeBg__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4D2FE32 = 1;
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
    UnityEngine_RenderSettings__set_ambientLight(v22, 0);
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
               (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getAsset_41284316(v8, v9, 0) )
            return;
LABEL_21:
          v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v8, v21, 1, 0);
          return;
        }
        if ( !System_String__op_Inequality(v8, this->fields.initLoadedBgPath, 0) )
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
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = *(_QWORD *)&fields + 8 * klass_low;
              LODWORD(BgResource[1].klass) = klass_low + 1;
              *(_QWORD *)(v20 + 32) = v8;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)v8, v11, v12, v13, v14, v15, v16);
            }
            goto LABEL_21;
          }
        }
      }
    }
    sub_1C942F0(BgResource, v7);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x4

  if ( (byte_4D2FE29 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__);
    sub_1C94098(&BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
    byte_4D2FE29 = 1;
  }
  v5 = sub_1C942E4(BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = data;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)data, v14, v15, v16, v17, v18, v19);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v22 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v5, Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__, 0);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v22, v23);
}


void BattlePerformanceBg__endloadBgAll(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  BattlePerformanceBg_o *v4; // x19
  BattlePerformanceBg_BgState_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
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
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *v46; // x20
  const MethodInfo *v47; // x2
  BattlePerformanceBg_o *v48; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v56; // x3
  System_Action_T__o *onLoadBgFinished; // x20
  __int64 v58; // d8
  bool v59; // w23
  __int64 v60; // x19

  v4 = this;
  if ( (byte_4D2FE2A & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_1C94098(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    this = (BattlePerformanceBg_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FE2A = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_55;
  v5 = BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.nowBgState, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
    v21 = *p_bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
    {
      v22 = *p_bgobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v22, 0);
    }
    v23 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
    {
      v24 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v24, 0);
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
    BattlePerformanceBg__ReleaseBgAsset(v4, v4->fields.nowBgAssetPath, v26);
  }
  v4->fields.BgAssetData = data;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.BgAssetData, (int32_t)data, v15, v16, v17, v18, v19, v20);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__GetBgObject(v4, data, v27);
  if ( !this )
    goto LABEL_55;
  parentCamera = v4->fields.parentCamera;
  v29 = this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0);
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0);
    v30 = this;
    if ( !byte_4D25F19 )
    {
      this = (BattlePerformanceBg_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    if ( !v30 )
      goto LABEL_55;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v30,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0);
  if ( !this )
    goto LABEL_55;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0);
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0);
  v31 = this;
  if ( !byte_4D25F1E )
  {
    this = (BattlePerformanceBg_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  if ( !v31 )
    goto LABEL_55;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v31,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  name = data->fields.name;
  v4->fields.nowBgAssetPath = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.nowBgAssetPath, (int32_t)name, v33, v34, v35, v36, v37, v38);
  v4->fields.bgobject = (struct UnityEngine_GameObject_o *)v29;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.bgobject, (int32_t)v29, v39, v40, v41, v42, v43, v44);
  v46 = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(v4, data, v45);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v46, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v46 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0);
            this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0);
            v48 = this;
            if ( !byte_4D25F1E )
            {
              this = (BattlePerformanceBg_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
              byte_4D25F1E = 1;
            }
            if ( v48 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v48,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v46;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)&v4->fields.frontobject,
                (int32_t)v46,
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
    sub_1C942F0(this, data);
  }
LABEL_53:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v47);
  if ( !nowBgState )
    goto LABEL_55;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, v56);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  v58 = *(_QWORD *)&v4->fields.loadbgno;
  v59 = v4->fields.parentCamera;
  v60 = sub_1C942E4(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v60, 0);
  *(_QWORD *)(v60 + 16) = v58;
  *(_BYTE *)(v60 + 24) = v59;
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v60,
    (const MethodInfo_30E5920 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
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

  if ( (byte_4D2FE21 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleBgComponent__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FE21 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleBgComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
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
                                                                (const MethodInfo_31F5430 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v5 )
      goto LABEL_17;
    System_Collections_Generic_List_object___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
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
                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_17:
    sub_1C942F0(ComponentsInChildren_object, v7);
  }
  ComponentsInChildren_object = this->fields.frontobject;
  if ( !ComponentsInChildren_object )
    goto LABEL_17;
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                              ComponentsInChildren_object,
                                                              includeInactive,
                                                              (const MethodInfo_31F5430 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v5 )
    goto LABEL_17;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct BattlePerformanceBg_BgState_o *v15; // x8
  struct System_String_o *bgName; // x1
  struct BattlePerformanceBg_BgState_o *v17; // x8
  unsigned int Count; // w0
  __int64 v19; // x0
  _DWORD **v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct BattlePerformanceBg_BgState_o *v27; // x8
  unsigned int v28; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  __int64 v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x0
  __int64 v46; // x1
  _DWORD *v47; // x23
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  _DWORD *v55; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  __int64 v57; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4D2FE1E & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_1C94098(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__);
    sub_1C94098(&BattlePerformanceBg_SaveData_TypeInfo);
    byte_4D2FE1E = 1;
  }
  memset(&v59, 0, sizeof(v59));
  BattlePerformanceBg__saveHistoryBgState(this, 0, v2);
  v4 = sub_1C942E4(BattlePerformanceBg_SaveData_TypeInfo);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v4, v5);
  nowBgState = this->fields.nowBgState;
  if ( nowBgState )
  {
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)nowBgState->fields.compDictionary;
    if ( !compDictionary )
      goto LABEL_26;
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                                  compDictionary,
                                                                                  (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    if ( (int)compDictionary >= 1 )
    {
      v15 = this->fields.nowBgState;
      if ( !v15 )
        goto LABEL_26;
      if ( !v4 )
        goto LABEL_26;
      bgName = v15->fields.bgName;
      *(_QWORD *)(v4 + 16) = bgName;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)bgName, v9, v10, v11, v12, v13, v14);
      v17 = this->fields.nowBgState;
      if ( !v17 )
        goto LABEL_26;
      compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v17->fields.compDictionary;
      if ( !compDictionary
        || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                      compDictionary,
                      (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__),
            v19 = sub_1C94140(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count),
            *(_QWORD *)(v4 + 24) = v19,
            v20 = (_DWORD **)(v4 + 24),
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 24), v19, v21, v22, v23, v24, v25, v26),
            (v27 = this->fields.nowBgState) == 0)
        || (compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v27->fields.compDictionary) == 0 )
      {
LABEL_26:
        sub_1C942F0(compDictionary, v7);
      }
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v58,
        compDictionary,
        (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
      v59 = v58;
      v28 = 0;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v59,
                (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
      {
        current = v59.fields._current;
        v30 = sub_1C942E4(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v30, 0);
        if ( !v30 )
          sub_1C942F0(v31, v32);
        *(_QWORD *)(v30 + 16) = current.fields.key;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)(v30 + 16),
          (int32_t)current.fields.key,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        *(_QWORD *)(v30 + 24) = current.fields.value;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)(v30 + 24),
          (int32_t)current.fields.value,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        v47 = *v20;
        if ( !*v20 )
          sub_1C942F0(v45, v46);
        v48 = sub_1C941D4(v30, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
        if ( !v48 )
        {
          v57 = sub_1C94314(0);
          sub_1C941C0(v57, 0);
        }
        if ( v28 >= v47[6] )
          sub_1C942F8(v48);
        v55 = &v47[2 * v28];
        *((_QWORD *)v55 + 4) = v30;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v55 + 8), v30, v49, v50, v51, v52, v53, v54);
        ++v28;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v59,
        (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2FE1D & 1) == 0 )
  {
    sub_1C94098(&BgResourceData_TypeInfo);
    byte_4D2FE1D = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    loadbgno = this->fields.loadbgno;
    loadbgType = this->fields.loadbgType;
    cachedBgResource = (BgResourceData_o *)sub_1C942E4(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, loadbgno, loadbgType, 0);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.cachedBgResource,
      (int32_t)cachedBgResource,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4D2FE25 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_BattlePerformanceBg_endloadBg__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4D2FE25 = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_8;
  BattlePerformanceBg__InitLoadBgInfo(this, no, tp, method);
  BgResource = BattlePerformanceBg__get_BgResource(this, v7);
  if ( !BgResource )
    sub_1C942F0(0, v9);
  AssetPath = BgResourceData__get_AssetPath(BgResource, 0);
  this->fields.initLoadedBgPath = AssetPath;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.initLoadedBgPath,
    (int32_t)AssetPath,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPath, v17, 1, 0) )
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
        sub_1C942F8(BattleBgComponents);
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleBgComponent_o *)v13[4];
      if ( !v14 )
        break;
      BattleBgComponents = (BattleBgComponent_array *)BattleBgComponent__checkKey((BattleBgComponent_o *)v13[4], key, 0);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
        BattleBgComponent__playAnimation(v14, animName, timeline, 0);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_11:
    sub_1C942F0(BattleBgComponents, v9);
  }
}


void BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2FE37 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22942/*"playerfield"*/);
    sub_1C94098(&StringLiteral_3123/*"BattleIn"*/);
    byte_4D2FE37 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22942/*"playerfield"*/,
    (System_String_o *)StringLiteral_3123/*"BattleIn"*/,
    0.0,
    v2);
}


void BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2FE36 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3125/*"BattleOut"*/);
    sub_1C94098(&StringLiteral_22942/*"playerfield"*/);
    byte_4D2FE36 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22942/*"playerfield"*/,
    (System_String_o *)StringLiteral_3125/*"BattleOut"*/,
    0.0,
    v2);
}


void BattlePerformanceBg__playLoadEndAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
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
        sub_1C942F8(BattleBgComponents);
      BattleBgComponents = (BattleBgComponent_array *)v6->m_Items[v7];
      if ( !BattleBgComponents )
        break;
      if ( LOBYTE(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__playLoadEndAnimation((BattleBgComponent_o *)BattleBgComponents, 0);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1C942F0(BattleBgComponents, v4);
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

  if ( (byte_4D2FE34 & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceBg_BgState_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FE34 = 1;
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
                                                        (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
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
                                                          (const MethodInfo_35220F0 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
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
        (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
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
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
    if ( BattleBgComponents )
      return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                (Il2CppObject *)inName,
                                                (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
LABEL_30:
    sub_1C942F0(BattleBgComponents, inName);
  }
  v15 = sub_1C942E4(BattlePerformanceBg_BgState_TypeInfo);
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
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
  return (BattlePerformanceBg_BgState_o *)v15;
}


void BattlePerformanceBg__setCutNodeNoble(BattlePerformanceBg_o *this, bool flg, const MethodInfo *method)
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
        sub_1C942F8(BattleBgComponents);
      BattleBgComponents = (BattleBgComponent_array *)v7->m_Items[v8];
      if ( !BattleBgComponents )
        break;
      if ( BYTE1(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__setCutNodeNoble((BattleBgComponent_o *)BattleBgComponents, v9, 0);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_1C942F0(BattleBgComponents, v5);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  Il2CppObject *bgCompName; // x1
  const MethodInfo *v19; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v20; // x22
  int max_length; // w8
  unsigned int v22; // w23
  BattlePerformanceBg_SaveData_CompSaveData_o *v23; // x27
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v25; // x3

  if ( (byte_4D2FE1F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__set_Item__);
    byte_4D2FE1F = 1;
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
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nowBgState, (int32_t)v9, v11, v12, v13, v14, v15, v16);
        v20 = saveData->fields.compSaveDataList;
        if ( !v20 )
          goto LABEL_24;
        max_length = v20->max_length;
        if ( max_length >= 1 )
        {
          v22 = 0;
          while ( 1 )
          {
            if ( v22 >= max_length )
              sub_1C942F8(compDictionary);
            if ( !*p_nowBgState )
              break;
            v23 = v20->m_Items[v22];
            if ( !v23 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
            bgCompName = (Il2CppObject *)v23->fields.bgCompName;
            if ( isForceOverWriteBgState )
            {
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                compDictionary,
                bgCompName,
                (Il2CppObject *)v23->fields.bgCompData,
                (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__set_Item__);
            }
            else
            {
              if ( !compDictionary )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                            compDictionary,
                                                                                            bgCompName,
                                                                                            (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
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
                  (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
              }
            }
            max_length = v20->max_length;
            if ( (int)++v22 >= max_length )
              goto LABEL_21;
          }
LABEL_24:
          sub_1C942F0(compDictionary, bgCompName);
        }
LABEL_21:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattlePerformanceBg__getBattleBgComponents(
                                                                                      this,
                                                                                      0,
                                                                                      v19);
        if ( !nowBgState )
          goto LABEL_24;
        BattlePerformanceBg_BgState__loadSaveData(
          nowBgState,
          (BattleBgComponent_array *)compDictionary,
          this->fields.actionCamera,
          v25);
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
  GrandQuestFolderBoardItem_o *v18; // x22
  bool v19; // w23
  bool v20; // w24
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v14 = pos.fields.z;
  v15 = pos.fields.y;
  v16 = pos.fields.x;
  v18 = (GrandQuestFolderBoardItem_o *)this;
  v19 = changeDirect;
  v20 = parentCamera;
  System_Object___ctor((Il2CppObject *)this, 0);
  v18->fields.sortStr1 = (struct System_String_o *)callback;
  v18 = (GrandQuestFolderBoardItem_o *)((char *)v18 + 56);
  v18[-1].fields._BannerId_k__BackingField = No;
  v18[-1].fields._WarId_k__BackingField = tp;
  *(float *)&v18[-1].fields._Name_k__BackingField = v16;
  *((float *)&v18[-1].fields._Name_k__BackingField + 1) = v15;
  *(float *)&v18[-1].fields._IconId_k__BackingField = v14;
  *((float *)&v18[-1].fields._IconId_k__BackingField + 1) = x;
  *(float *)&v18[-1].fields._ListCreatedTime_k__BackingField = y;
  *((float *)&v18[-1].fields._ListCreatedTime_k__BackingField + 1) = z;
  LOBYTE(v18[-1].fields._ClosedMessage_k__BackingField) = v19;
  BYTE1(v18[-1].fields._ClosedMessage_k__BackingField) = v20;
  sub_1C9403C(v18, (int32_t)callback, v21, v22, v23, v24, v25, v26);
}


void BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2FE3C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
    byte_4D2FE3C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.bgName = inName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)inName, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  this->fields.compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.compDictionary, (int32_t)v11, v12, v13, v14, v15, v16, v17);
}


void BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattlePerformanceBg_BgState_o *v10; // x21
  int max_length; // w8
  unsigned int v12; // w24
  BattleBgComponent_o *v13; // x22
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_object__object__o *v15; // x23
  Il2CppObject *Item; // x0

  v10 = this;
  if ( (byte_4D2FE3E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    this = (BattlePerformanceBg_BgState_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
    byte_4D2FE3E = 1;
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
        sub_1C942F8(this);
      v13 = list->m_Items[v12];
      if ( !v13 )
        break;
      v13->fields.actionCamera = actionCamera;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v13->fields.actionCamera,
        (int32_t)actionCamera,
        (int32_t)actionCamera,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      if ( v13->fields.isRecAnimation )
      {
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v13, 0);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  compDictionary,
                                                  (Il2CppObject *)this,
                                                  (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v15 = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v13, 0);
          if ( !v15 )
            break;
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v15,
                   (Il2CppObject *)this,
                   (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v13, (BattleBgComponent_SaveData_o *)Item, 0);
        }
      }
      max_length = list->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_15:
    sub_1C942F0(this, list);
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

  if ( (byte_4D2FE3D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
    byte_4D2FE3D = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_object__object___Clear(
    compDictionary,
    (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C942F8(compDictionary);
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
          (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_14:
    sub_1C942F0(compDictionary, list);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2FE3F & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_1C94098(&string_TypeInfo);
    byte_4D2FE3F = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)Empty, v5, v6, v7, v8, v9, v10);
  v11 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_1C94140(
                                                                    BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                    0);
  this->fields.compSaveDataList = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.compSaveDataList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
    sub_1C942F0(0, method);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, 0);
  return BattleBgComponent__checkKey(x, this->fields.key, 0);
}