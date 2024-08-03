void __fastcall BattlePerformanceBg___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FF21C & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceBg_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_19580/*"front"*/, v4);
    byte_49FF21C = 1;
  }
  BattlePerformanceBg_TypeInfo->static_fields->Frontfile = (struct System_String_o *)StringLiteral_19580/*"front"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattlePerformanceBg_TypeInfo->static_fields,
    StringLiteral_19580/*"front"*/,
    v2,
    v3);
}


void __fastcall BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_Dictionary_object__object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_49FF21B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_1B640C8(&string_TypeInfo, v9);
    byte_49FF21B = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadedChangeBgList, (int32_t)v10, v11, v12);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.initLoadedBgPath, (int32_t)Empty, v15, v16);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgSpShadowList, (int32_t)v19, v20, v21);
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo,
                                                                     v22,
                                                                     v23);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v24,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.historyBgState, (int32_t)v24, v25, v26);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgInfoList, (int32_t)v29, v30, v31);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceBg__AddCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        System_Action_BattlePerformanceBg_ChangedBgArgs__o *callback,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_onLoadBgFinished; // x19
  System_Delegate_o *onLoadBgFinished; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Delegate_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x0
  int32_t v13; // w1

  if ( (byte_49FF219 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo, callback);
    byte_49FF219 = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (ServantStatusBattleListViewItem_o *)&this->fields.onLoadBgFinished;
  v7 = System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0LL);
  if ( !v7 )
    goto LABEL_7;
  v10 = v7;
  v11 = sub_1B64204(v7, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
  if ( !v11
    || (p_onLoadBgFinished->klass = (ServantStatusBattleListViewItem_c *)v11,
        v12 = sub_1B64204(v10, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo),
        v13 = v12,
        !v12) )
  {
    sub_1B645E4(v10);
LABEL_7:
    v13 = 0;
    p_onLoadBgFinished->klass = 0LL;
  }
  sub_1B6406C(p_onLoadBgFinished, v13, v8, v9);
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
  int32_t v24; // w2
  int32_t v25; // w3
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
  if ( (byte_49FF20C & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceBg_BgInfo_TypeInfo, *(_QWORD *)&No);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__, v21);
    byte_49FF20C = 1;
  }
  v22 = (BattlePerformanceBg_BgInfo_o *)sub_1B64314(BattlePerformanceBg_BgInfo_TypeInfo, *(_QWORD *)&No, *(_QWORD *)&tp);
  v31.fields.x = v17;
  v31.fields.y = v16;
  v31.fields.z = v15;
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  v23 = (Il2CppObject *)v22;
  BattlePerformanceBg_BgInfo___ctor(v22, No, tp, v31, v32, changeDirect, parentCamera, callback, 0LL);
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (items = bgInfoList->fields._items,
        v28 = Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__,
        ++bgInfoList->fields._version,
        !items) )
  {
    sub_1B64324(bgInfoList);
  }
  size = bgInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgInfoList,
      v23,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    bgInfoList->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v23, v24, v25);
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
    sub_1B64324(this);
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
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.onLoadBgFinished = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onLoadBgFinished, 0, v2, v3);
}


void __fastcall BattlePerformanceBg__DebugPrint(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_1B64324(this);
}


bool __fastcall BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_49FF20D & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__,
                                      method);
    byte_49FF20D = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_1B64324(this);
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

  if ( (byte_49FF20E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__, v3);
    byte_49FF20E = 1;
  }
  if ( !BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
    return 0LL;
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (bgInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bgInfoList,
                                                                    0,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__),
        (v5 = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList) == 0LL) )
  {
    sub_1B64324(bgInfoList);
  }
  v6 = (BattlePerformanceBg_BgInfo_o *)bgInfoList;
  System_Collections_Generic_List_object___RemoveAt(
    v5,
    0,
    (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v6;
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
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  System_Object_array *BattleBgComponents; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x20

  if ( (byte_49FF216 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_BattleBgComponent___, key);
    sub_1B640C8(&System_Func_BattleBgComponent__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattlePerformanceBg___c__DisplayClass69_0__FindComponentByKey_b__0__, v6);
    sub_1B640C8(&BattlePerformanceBg___c__DisplayClass69_0_TypeInfo, v7);
    byte_49FF216 = 1;
  }
  v8 = sub_1B64314(BattlePerformanceBg___c__DisplayClass69_0_TypeInfo, key, method);
  BattlePerformanceBg___c__DisplayClass69_0___ctor((BattlePerformanceBg___c__DisplayClass69_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = key;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)key, v10, v11);
  BattleBgComponents = (System_Object_array *)BattlePerformanceBg__getBattleBgComponents(this, 0, v12);
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBgComponent__bool__TypeInfo, v14, v15);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_BattlePerformanceBg___c__DisplayClass69_0__FindComponentByKey_b__0__,
    0LL);
  return (BattleBgComponent_o *)BasicHelper__Find_object_(
                                  BattleBgComponents,
                                  (System_Func_T__bool__o *)v16,
                                  (const MethodInfo_2E2543C *)Method_BasicHelper_Find_BattleBgComponent___);
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
  System_String_o *v10; // x1
  System_String_o *v11; // x0
  Il2CppObject *v12; // x20
  Il2CppObject *Object_object__48347676; // x20
  Il2CppObject *v15; // x19
  Il2CppObject *v16; // x19
  int32_t Type_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF210 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, data);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_17096/*"bg"*/, v7);
    sub_1B640C8(&StringLiteral_17099/*"bg0"*/, v8);
    byte_49FF210 = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    sub_1B64324(0LL);
  Type_k__BackingField = BgResource->fields._Type_k__BackingField;
  if ( Type_k__BackingField < 1 )
  {
    if ( !data )
      sub_1B64324(BgResource);
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                data,
                                (System_String_o *)StringLiteral_17096/*"bg"*/,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__48347676,
                                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v16 = AssetData__GetObject_object__48347676(
              data,
              (System_String_o *)StringLiteral_17099/*"bg0"*/,
              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v16,
                                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0LL);
    v11 = System_String__Concat_61375396((System_String_o *)StringLiteral_17096/*"bg"*/, v10, 0LL);
    if ( !data )
      sub_1B64324(v11);
    v12 = AssetData__GetObject_object__48347676(
            data,
            v11,
            (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v12,
                                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v15 = AssetData__GetObject_object__48347676(
              data,
              (System_String_o *)StringLiteral_17096/*"bg"*/,
              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v15,
                                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  int v9; // w22
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  Il2CppObject *Object_object__48347676; // x20
  BattlePerformanceBg_c *v13; // x0
  bool v14; // w8
  UnityEngine_GameObject_o *result; // x0
  int v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF211 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, data);
    sub_1B640C8(&BattlePerformanceBg_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FF211 = 1;
  }
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    goto LABEL_21;
  v9 = *((_DWORD *)BgResource + 5);
  BgResource = BattlePerformanceBg_TypeInfo;
  v16 = v9;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    BgResource = BattlePerformanceBg_TypeInfo;
  }
  v10 = (System_String_o *)**((_QWORD **)BgResource + 23);
  if ( v9 >= 1 )
  {
    v11 = System_Int32__ToString((int32_t)&v16, 0LL);
    BgResource = System_String__Concat_61375396(v10, v11, 0LL);
    v10 = (System_String_o *)BgResource;
  }
  if ( !data )
LABEL_21:
    sub_1B64324(BgResource);
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              data,
                              v10,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    goto LABEL_24;
  v13 = BattlePerformanceBg_TypeInfo;
  if ( !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v13 = BattlePerformanceBg_TypeInfo;
  }
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              data,
                              v13->static_fields->Frontfile,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL);
  result = 0LL;
  if ( v14 )
  {
LABEL_24:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__48347676,
                                         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( (byte_49FF214 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, *(_QWORD *)&shadowId);
    sub_1B640C8(&StringLiteral_23152/*"shadow_"*/, v4);
    byte_49FF214 = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0LL;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_61375396((System_String_o *)StringLiteral_23152/*"shadow_"*/, v6, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48347676(
                                      BgAssetData,
                                      v7,
                                      (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__InitLoadBgInfo(
        BattlePerformanceBg_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  BgResourceData_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FF208 & 1) == 0 )
  {
    sub_1B640C8(&BgResourceData_TypeInfo, *(_QWORD *)&bgId);
    byte_49FF208 = 1;
  }
  this->fields.loadbgno = bgId;
  this->fields.loadbgType = bgType;
  v7 = (BgResourceData_o *)sub_1B64314(BgResourceData_TypeInfo, *(_QWORD *)&bgId, *(_QWORD *)&bgType);
  BgResourceData___ctor(v7, bgId, bgType, 0LL);
  this->fields.cachedBgResource = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cachedBgResource, (int32_t)v7, v8, v9);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x19
  BattleBgMaster_o *Master_object; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v22; // w21
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x1
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x20
  AssetLoader_LoadEndDataHandler_o *v33; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF209 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_1B640C8(&BattleEffectUtility_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v13);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1B640C8(&Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__, v15);
    sub_1B640C8(&BattlePerformanceBg___c__DisplayClass48_0_TypeInfo, v16);
    byte_49FF209 = 1;
  }
  effectPath = 0LL;
  v17 = sub_1B64314(BattlePerformanceBg___c__DisplayClass48_0_TypeInfo, *(_QWORD *)&no, *(_QWORD *)&tp);
  BattlePerformanceBg___c__DisplayClass48_0___ctor((BattlePerformanceBg___c__DisplayClass48_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)finishCallback, v19, v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BattleBgMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_22;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(Master_object, no, tp, 0, 0LL);
  if ( BgSpecialShadowEffectId <= 0 )
    goto LABEL_13;
  v22 = BgSpecialShadowEffectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v22, 0LL) )
    goto LABEL_13;
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object )
    goto LABEL_22;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)Master_object,
         (Il2CppObject *)effectPath,
         (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_13:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
    return;
  }
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object
    || (v25 = (Il2CppObject *)effectPath,
        v26 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v27 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v26) )
  {
LABEL_22:
    sub_1B64324(Master_object);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v26 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v25,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = v26 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v29 + 32) = v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v25, v23, v24);
  }
  v32 = effectPath;
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v17,
    Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__,
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
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *actionCamera; // x20
  BattleActionCamera_o *v12; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v14; // x21
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49FF202 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF202 = 1;
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
      UnityEngine_Object__Destroy_69127736(v8, 0LL);
      *p_bgobject = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgobject, 0, v9, v10);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      v12 = this->fields.actionCamera;
      if ( !v12 )
        sub_1B64324(0LL);
      BattleActionCamera__stopCameraAnimation(v12, 0LL);
    }
    p_frontobject = &this->fields.frontobject;
    v14 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      v16 = (UnityEngine_Object_o *)*p_frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v16, 0LL);
      *p_frontobject = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.frontobject, 0, v17, v18);
    }
    BattlePerformanceBg__ReleaseBgAsset(this, this->fields.nowBgAssetPath, v15);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgAsset(
        BattlePerformanceBg_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FF205 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, path);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v6);
    byte_49FF205 = 1;
  }
  if ( !System_String__IsNullOrEmpty(path, 0LL) )
  {
    loadedChangeBgList = this->fields.loadedChangeBgList;
    if ( loadedChangeBgList )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)loadedChangeBgList,
              (Il2CppObject *)path,
              (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_8:
        this->fields.BgAssetData = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.BgAssetData, 0, v8, v9);
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
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_8;
      }
    }
    sub_1B64324(loadedChangeBgList);
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

  if ( (byte_49FF206 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_49FF206 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)bgSpShadowList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v13.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v10 = this->fields.bgSpShadowList;
  if ( !v10 )
LABEL_13:
    sub_1B64324(bgSpShadowList);
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

  if ( (byte_49FF204 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_49FF204 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)loadedChangeBgList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_37477464(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.loadedChangeBgList;
  if ( !v11 )
LABEL_16:
    sub_1B64324(loadedChangeBgList);
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

  if ( (byte_49FF21A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF21A = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_15:
    sub_1B64324(BattleBgComponents);
  v6 = *(_QWORD *)&BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1B6432C(BattleBgComponents, v5);
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
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  struct System_Action_o **p_EndCallback; // x25
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v36; // x0
  int32_t v37; // w2
  char v38; // w3
  System_Object_array *v39; // x20
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  char v43; // w3
  Il2CppObject *v44; // x21
  int32_t v45; // w2
  char v46; // w3
  int32_t v47; // w2
  char v48; // w3
  Il2CppObject *v49; // x21
  int32_t v50; // w2
  char v51; // w3
  int32_t v52; // w2
  char v53; // w3
  Il2CppObject *v54; // x21
  int32_t v55; // w2
  char v56; // w3
  int32_t v57; // w2
  char v58; // w3
  int32_t v59; // w2
  char v60; // w3
  int32_t v61; // w2
  char v62; // w3
  System_Collections_Hashtable_o *v63; // x0
  __int64 v64; // x0
  __int128 v65; // [xsp+0h] [xbp-A0h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-90h] BYREF
  int v67; // [xsp+5Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_49FF20F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Color_TypeInfo, *(_QWORD *)&No);
    sub_1B640C8(&object___TypeInfo, v21);
    sub_1B640C8(&float_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v23);
    sub_1B640C8(&StringLiteral_18928/*"endChangeColor"*/, v24);
    sub_1B640C8(&StringLiteral_15112/*"UpdateColor"*/, v25);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v26);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v27);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v28);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v29);
    sub_1B640C8(&iTween_TypeInfo, v30);
    byte_49FF20F = 1;
  }
  if ( this->fields.IsLoading )
  {
    v68.fields.x = v17;
    v68.fields.y = v16;
    v68.fields.z = v15;
    v69.fields.x = x;
    v69.fields.y = y;
    v69.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v68, v69, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.EndCallback, (int32_t)callback, tp, changeDirect);
  if ( this->fields.fade && !changeDirect )
  {
    if ( *p_EndCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*p_EndCallback)->fields.m_target)(
        (*p_EndCallback)->fields.original_method_info,
        *(_QWORD *)&(*p_EndCallback)->fields.extra_arg);
    BattlePerformanceBg__OnEndBgLoad(this, v32);
    return;
  }
  BattlePerformanceBg__InitLoadBgInfo(this, No, tp, v33);
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
    BattlePerformanceBg__endChangeColor(this, v34);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v36 = sub_1B64170(object___TypeInfo, 10LL);
  if ( !v36 )
    sub_1B64324(0LL);
  v39 = (System_Object_array *)v36;
  v40 = StringLiteral_19577/*"from"*/;
  if ( StringLiteral_19577/*"from"*/ )
  {
    v40 = sub_1B64204(StringLiteral_19577/*"from"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_61;
    v41 = StringLiteral_19577/*"from"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( !v39->max_length )
    goto LABEL_60;
  v39->m_Items[0] = (Il2CppObject *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v39->m_Items, v41, v37, v38);
  tmpcolor = this->fields.tmpcolor;
  v40 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v44 = (Il2CppObject *)v40;
  if ( v40 )
  {
    v40 = sub_1B64204(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_61;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_60;
  v39->m_Items[1] = v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[1], (int32_t)v44, v42, v43);
  v40 = StringLiteral_23870/*"to"*/;
  if ( StringLiteral_23870/*"to"*/ )
  {
    v40 = sub_1B64204(StringLiteral_23870/*"to"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_61;
    v41 = StringLiteral_23870/*"to"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 2 )
    goto LABEL_60;
  v39->m_Items[2] = (Il2CppObject *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[2], v41, v45, v46);
  v65 = xmmword_BA4010;
  v40 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v65);
  v49 = (Il2CppObject *)v40;
  if ( v40 )
  {
    v40 = sub_1B64204(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_61;
  }
  if ( v39->max_length <= 3 )
    goto LABEL_60;
  v39->m_Items[3] = v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[3], (int32_t)v49, v47, v48);
  v40 = StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v40 = sub_1B64204(StringLiteral_23830/*"time"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_61;
    v41 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 4 )
    goto LABEL_60;
  v39->m_Items[4] = (Il2CppObject *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[4], v41, v50, v51);
  v67 = 1056964608;
  v40 = j_il2cpp_value_box_0(float_TypeInfo, &v67);
  v54 = (Il2CppObject *)v40;
  if ( v40 )
  {
    v40 = sub_1B64204(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
    {
LABEL_61:
      v64 = sub_1B64348(v40);
      sub_1B641F0(v64, 0LL);
    }
  }
  if ( v39->max_length <= 5 )
    goto LABEL_60;
  v39->m_Items[5] = v54;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[5], (int32_t)v54, v52, v53);
  v40 = StringLiteral_22193/*"onupdate"*/;
  if ( StringLiteral_22193/*"onupdate"*/ )
  {
    v40 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_61;
    v41 = StringLiteral_22193/*"onupdate"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 6 )
    goto LABEL_60;
  v39->m_Items[6] = (Il2CppObject *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[6], v41, v55, v56);
  v40 = StringLiteral_15112/*"UpdateColor"*/;
  if ( StringLiteral_15112/*"UpdateColor"*/ )
  {
    v40 = sub_1B64204(StringLiteral_15112/*"UpdateColor"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_61;
    v41 = StringLiteral_15112/*"UpdateColor"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 7 )
    goto LABEL_60;
  v39->m_Items[7] = (Il2CppObject *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[7], v41, v57, v58);
  v40 = StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v40 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_61;
    v41 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 8 )
    goto LABEL_60;
  v39->m_Items[8] = (Il2CppObject *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[8], v41, v59, v60);
  v40 = StringLiteral_18928/*"endChangeColor"*/;
  if ( StringLiteral_18928/*"endChangeColor"*/ )
  {
    v40 = sub_1B64204(StringLiteral_18928/*"endChangeColor"*/, v39->obj.klass->_1.element_class);
    if ( v40 )
    {
      v41 = StringLiteral_18928/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_61;
  }
  v41 = 0LL;
LABEL_56:
  if ( v39->max_length <= 9 )
LABEL_60:
    sub_1B6432C(v40, v41);
  v39->m_Items[9] = (Il2CppObject *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[9], v41, v61, v62);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v63 = iTween__Hash(v39, 0LL);
  iTween__ValueTo(gameObject, v63, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 BgObject; // x0
  const MethodInfo *v20; // x2
  struct BattlePerformanceBg_BgState_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x2
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v26; // x21
  __int64 v27; // x1
  UnityEngine_Transform_o *v28; // x22
  __int64 v29; // x1
  UnityEngine_Transform_o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v35; // x2
  __int64 v36; // x1
  UnityEngine_Transform_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v44; // w23
  __int64 v45; // x1
  __int64 v46; // x2
  BattlePerformanceBg_ChangedBgArgs_o *v47; // x24
  const MethodInfo *v48; // x1
  struct System_Action_o *EndCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  System_Object_array *v53; // x21
  __int64 v54; // x0
  __int64 v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x19
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x19
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  System_Collections_Hashtable_o *v77; // x0
  __int64 v78; // x0
  int v79; // [xsp+Ch] [xbp-64h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-60h] BYREF
  __int128 v81; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF212 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_1B640C8(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Color_TypeInfo, v7);
    sub_1B640C8(&object___TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&float_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v11);
    sub_1B640C8(&StringLiteral_18928/*"endChangeColor"*/, v12);
    sub_1B640C8(&StringLiteral_15112/*"UpdateColor"*/, v13);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v14);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v15);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v16);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v17);
    sub_1B640C8(&iTween_TypeInfo, v18);
    byte_49FF212 = 1;
  }
  this->fields.BgAssetData = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.BgAssetData, (int32_t)data, (int32_t)method, v3);
  if ( !data )
    goto LABEL_82;
  v21 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v20);
  this->fields.nowBgState = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nowBgState, (int32_t)v21, v22, v23);
  BgObject = (__int64)BattlePerformanceBg__GetBgObject(this, data, v24);
  if ( !BgObject )
    goto LABEL_82;
  parentCamera = this->fields.parentCamera;
  v26 = (UnityEngine_GameObject_o *)BgObject;
  BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)BgObject, 0LL);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v26, 0LL);
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_82;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0LL);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v26, 0LL);
    v28 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_49F7111 )
    {
      BgObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v27);
      byte_49F7111 = 1;
    }
    if ( !v28 )
      goto LABEL_82;
    UnityEngine_Transform__set_eulerAngles(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v26, 0LL);
  if ( !BgObject )
    goto LABEL_82;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v26, 0LL);
  v30 = (UnityEngine_Transform_o *)BgObject;
  if ( !byte_49F7116 )
  {
    BgObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v29);
    byte_49F7116 = 1;
  }
  if ( !v30 )
    goto LABEL_82;
  UnityEngine_Transform__set_localScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this->fields.bgobject = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgobject, (int32_t)v26, v31, v32);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(this, data, v33);
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
    v37 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_49F7116 )
    {
      BgObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v36);
      byte_49F7116 = 1;
    }
    if ( !v37 )
      goto LABEL_82;
    UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.frontobject, (int32_t)FrontObject, v38, v39);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (__int64)BattlePerformanceBg__getBattleBgComponents(this, 0, v35);
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
  v44 = this->fields.parentCamera;
  v47 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_1B64314(BattlePerformanceBg_ChangedBgArgs_TypeInfo, v45, v46);
  BattlePerformanceBg_ChangedBgArgs___ctor(v47, loadbgno, loadbgType, v44, 0LL);
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v47,
    (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    v82.fields.r = 1.0;
    v82.fields.g = 1.0;
    v82.fields.b = 1.0;
    v82.fields.a = 1.0;
    this->fields.fade = 0;
    UnityEngine_RenderSettings__set_ambientLight(v82, 0LL);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
        EndCallback->fields.original_method_info,
        *(_QWORD *)&EndCallback->fields.extra_arg);
    BattlePerformanceBg__OnEndBgLoad(this, v48);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BgObject = sub_1B64170(object___TypeInfo, 10LL);
  if ( !BgObject )
LABEL_82:
    sub_1B64324(BgObject);
  v53 = (System_Object_array *)BgObject;
  v54 = StringLiteral_19577/*"from"*/;
  if ( StringLiteral_19577/*"from"*/ )
  {
    v54 = sub_1B64204(StringLiteral_19577/*"from"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_84;
    v55 = StringLiteral_19577/*"from"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( !v53->max_length )
    goto LABEL_83;
  v53->m_Items[0] = (Il2CppObject *)v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v53->m_Items, v55, v51, v52);
  v81 = xmmword_BA4010;
  v54 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v81);
  v58 = (Il2CppObject *)v54;
  if ( v54 )
  {
    v54 = sub_1B64204(v54, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_84;
  }
  if ( v53->max_length <= 1 )
    goto LABEL_83;
  v53->m_Items[1] = v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->m_Items[1], (int32_t)v58, v56, v57);
  v54 = StringLiteral_23870/*"to"*/;
  if ( StringLiteral_23870/*"to"*/ )
  {
    v54 = sub_1B64204(StringLiteral_23870/*"to"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_84;
    v55 = StringLiteral_23870/*"to"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 2 )
    goto LABEL_83;
  v53->m_Items[2] = (Il2CppObject *)v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->m_Items[2], v55, v59, v60);
  tmpcolor = this->fields.tmpcolor;
  v54 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v63 = (Il2CppObject *)v54;
  if ( v54 )
  {
    v54 = sub_1B64204(v54, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_84;
  }
  if ( v53->max_length <= 3 )
    goto LABEL_83;
  v53->m_Items[3] = v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->m_Items[3], (int32_t)v63, v61, v62);
  v54 = StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v54 = sub_1B64204(StringLiteral_23830/*"time"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_84;
    v55 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 4 )
    goto LABEL_83;
  v53->m_Items[4] = (Il2CppObject *)v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->m_Items[4], v55, v64, v65);
  v79 = 1056964608;
  v54 = j_il2cpp_value_box_0(float_TypeInfo, &v79);
  v68 = (Il2CppObject *)v54;
  if ( v54 )
  {
    v54 = sub_1B64204(v54, v53->obj.klass->_1.element_class);
    if ( !v54 )
    {
LABEL_84:
      v78 = sub_1B64348(v54);
      sub_1B641F0(v78, 0LL);
    }
  }
  if ( v53->max_length <= 5 )
    goto LABEL_83;
  v53->m_Items[5] = v68;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->m_Items[5], (int32_t)v68, v66, v67);
  v54 = StringLiteral_22193/*"onupdate"*/;
  if ( StringLiteral_22193/*"onupdate"*/ )
  {
    v54 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_84;
    v55 = StringLiteral_22193/*"onupdate"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 6 )
    goto LABEL_83;
  v53->m_Items[6] = (Il2CppObject *)v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->m_Items[6], v55, v69, v70);
  v54 = StringLiteral_15112/*"UpdateColor"*/;
  if ( StringLiteral_15112/*"UpdateColor"*/ )
  {
    v54 = sub_1B64204(StringLiteral_15112/*"UpdateColor"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_84;
    v55 = StringLiteral_15112/*"UpdateColor"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 7 )
    goto LABEL_83;
  v53->m_Items[7] = (Il2CppObject *)v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->m_Items[7], v55, v71, v72);
  v54 = StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v54 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_84;
    v55 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 8 )
    goto LABEL_83;
  v53->m_Items[8] = (Il2CppObject *)v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->m_Items[8], v55, v73, v74);
  v54 = StringLiteral_18928/*"endChangeColor"*/;
  if ( StringLiteral_18928/*"endChangeColor"*/ )
  {
    v54 = sub_1B64204(StringLiteral_18928/*"endChangeColor"*/, v53->obj.klass->_1.element_class);
    if ( v54 )
    {
      v55 = StringLiteral_18928/*"endChangeColor"*/;
      goto LABEL_78;
    }
    goto LABEL_84;
  }
  v55 = 0LL;
LABEL_78:
  if ( v53->max_length <= 9 )
LABEL_83:
    sub_1B6432C(v54, v55);
  v53->m_Items[9] = (Il2CppObject *)v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->m_Items[9], v55, v75, v76);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v77 = iTween__Hash(v53, 0LL);
  iTween__ValueTo(gameObject, v77, 0LL);
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
  System_String_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Action_o *EndCallback; // x8
  int32_t v18; // w3
  BgResourceData_Fields fields; // x8
  _QWORD *v20; // x9
  __int64 klass_low; // x10
  __int64 v22; // x8
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF213 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceBg_endChangeBg__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    byte_49FF213 = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    v24.fields.r = 0.0;
    v24.fields.g = 0.0;
    v24.fields.b = 0.0;
    v24.fields.a = 1.0;
    UnityEngine_RenderSettings__set_ambientLight(v24, 0LL);
    BattlePerformanceBg__ReleaseBg(this, v8);
    BgResource = BattlePerformanceBg__get_BgResource(this, v9);
    if ( BgResource )
    {
      BgResource = (BgResourceData_o *)BgResourceData__get_AssetPath(BgResource, 0LL);
      if ( this->fields.loadedChangeBgList )
      {
        v11 = (System_String_o *)BgResource;
        if ( System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)this->fields.loadedChangeBgList,
               (Il2CppObject *)BgResource,
               (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
          AssetLoader_LoadEndDataHandler___ctor(
            v14,
            (Il2CppObject *)this,
            Method_BattlePerformanceBg_endChangeBg__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getAsset_37476476(v11, v14, 0LL) )
            return;
LABEL_21:
          v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
          AssetLoader_LoadEndDataHandler___ctor(
            v23,
            (Il2CppObject *)this,
            Method_BattlePerformanceBg_endChangeBg__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v11, v23, 1, 0LL);
          return;
        }
        if ( !System_String__op_Inequality(v11, this->fields.initLoadedBgPath, 0LL) )
          goto LABEL_21;
        BgResource = (BgResourceData_o *)this->fields.loadedChangeBgList;
        if ( BgResource )
        {
          fields = BgResource->fields;
          v20 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(BgResource[1].klass);
          if ( fields )
          {
            klass_low = SLODWORD(BgResource[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)BgResource,
                (Il2CppObject *)v11,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = *(_QWORD *)&fields + 8 * klass_low;
              LODWORD(BgResource[1].klass) = klass_low + 1;
              *(_QWORD *)(v22 + 32) = v11;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v11, v16, v18);
            }
            goto LABEL_21;
          }
        }
      }
    }
    sub_1B64324(BgResource);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x23
  const MethodInfo *v18; // x4

  if ( (byte_49FF20A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, data);
    sub_1B640C8(&Method_BattlePerformanceBg___c__DisplayClass49_0__endloadBg_b__0__, v5);
    sub_1B640C8(&BattlePerformanceBg___c__DisplayClass49_0_TypeInfo, v6);
    byte_49FF20A = 1;
  }
  v7 = sub_1B64314(BattlePerformanceBg___c__DisplayClass49_0_TypeInfo, data, method);
  BattlePerformanceBg___c__DisplayClass49_0___ctor((BattlePerformanceBg___c__DisplayClass49_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)data, v11, v12);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)v7, Method_BattlePerformanceBg___c__DisplayClass49_0__endloadBg_b__0__, 0LL);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v17, v18);
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
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Object_o *v16; // x22
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Object_o *v18; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  _BOOL4 parentCamera; // w23
  BattlePerformanceBg_o *v23; // x22
  __int64 v24; // x1
  BattlePerformanceBg_o *v25; // x23
  __int64 v26; // x1
  BattlePerformanceBg_o *v27; // x23
  struct System_String_o *name; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *v34; // x20
  const MethodInfo *v35; // x2
  __int64 v36; // x1
  BattlePerformanceBg_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v44; // w19
  __int64 v45; // x1
  __int64 v46; // x2
  BattlePerformanceBg_ChangedBgArgs_o *v47; // x23

  v4 = this;
  if ( (byte_49FF20B & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_1B640C8(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v5);
    this = (BattlePerformanceBg_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FF20B = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_55;
  v7 = BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.nowBgState, (int32_t)v7, v8, v9);
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
    v15 = *p_bgobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      v16 = *p_bgobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v16, 0LL);
    }
    v17 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      v18 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v18, 0LL);
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
    BattlePerformanceBg__ReleaseBgAsset(v4, v4->fields.nowBgAssetPath, v20);
  }
  v4->fields.BgAssetData = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.BgAssetData, (int32_t)data, v13, v14);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__GetBgObject(v4, data, v21);
  if ( !this )
    goto LABEL_55;
  parentCamera = v4->fields.parentCamera;
  v23 = this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v23, 0LL);
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_55;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v23, 0LL);
    v25 = this;
    if ( !byte_49F7111 )
    {
      this = (BattlePerformanceBg_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v24);
      byte_49F7111 = 1;
    }
    if ( !v25 )
      goto LABEL_55;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v25,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v23, 0LL);
  if ( !this )
    goto LABEL_55;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v23, 0LL);
  v27 = this;
  if ( !byte_49F7116 )
  {
    this = (BattlePerformanceBg_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v26);
    byte_49F7116 = 1;
  }
  if ( !v27 )
    goto LABEL_55;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v27,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  name = data->fields.name;
  v4->fields.nowBgAssetPath = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.nowBgAssetPath, (int32_t)name, v29, v30);
  v4->fields.bgobject = (struct UnityEngine_GameObject_o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.bgobject, (int32_t)v23, v31, v32);
  v34 = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(v4, data, v33);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v34 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
            this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
            v37 = this;
            if ( !byte_49F7116 )
            {
              this = (BattlePerformanceBg_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v36);
              byte_49F7116 = 1;
            }
            if ( v37 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v37,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0LL);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v34;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.frontobject, (int32_t)v34, v38, v39);
              goto LABEL_53;
            }
          }
        }
      }
    }
LABEL_55:
    sub_1B64324(this);
  }
LABEL_53:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v35);
  if ( !nowBgState )
    goto LABEL_55;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, 0LL);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  loadbgno = v4->fields.loadbgno;
  loadbgType = v4->fields.loadbgType;
  v44 = v4->fields.parentCamera;
  v47 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_1B64314(BattlePerformanceBg_ChangedBgArgs_TypeInfo, v45, v46);
  BattlePerformanceBg_ChangedBgArgs___ctor(v47, loadbgno, loadbgType, v44, 0LL);
  ActionExtensions__Call_object_(
    onLoadBgFinished,
    (Il2CppObject *)v47,
    (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
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
  UnityEngine_GameObject_o *ComponentsInChildren_object; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_49FF203 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___, includeInactive);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleBgComponent__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FF203 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleBgComponent__TypeInfo,
                                                       includeInactive,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
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
                                                                (const MethodInfo_2E88B78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v10 )
      goto LABEL_17;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
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
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_17:
    sub_1B64324(ComponentsInChildren_object);
  }
  ComponentsInChildren_object = this->fields.frontobject;
  if ( !ComponentsInChildren_object )
    goto LABEL_17;
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                              ComponentsInChildren_object,
                                                              includeInactive,
                                                              (const MethodInfo_2E88B78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v10 )
    goto LABEL_17;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                      v10,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  struct BattlePerformanceBg_BgState_o *v20; // x8
  struct System_String_o *bgName; // x1
  struct BattlePerformanceBg_BgState_o *v22; // x8
  unsigned int Count; // w0
  __int64 v24; // x0
  _DWORD **v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct BattlePerformanceBg_BgState_o *v28; // x8
  unsigned int v29; // w25
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *value; // x23
  Il2CppObject *key; // x24
  __int64 v34; // x22
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x0
  _DWORD *v41; // x23
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  _DWORD *v46; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  __int64 v48; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FF200 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_1B640C8(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__, v11);
    sub_1B640C8(&BattlePerformanceBg_SaveData_TypeInfo, v12);
    byte_49FF200 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  v15 = sub_1B64314(BattlePerformanceBg_SaveData_TypeInfo, v13, v14);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v15, 0LL);
  nowBgState = this->fields.nowBgState;
  if ( nowBgState )
  {
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)nowBgState->fields.compDictionary;
    if ( !compDictionary )
      goto LABEL_26;
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                                  compDictionary,
                                                                                  (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    if ( (int)compDictionary >= 1 )
    {
      v20 = this->fields.nowBgState;
      if ( !v20 )
        goto LABEL_26;
      if ( !v15 )
        goto LABEL_26;
      bgName = v20->fields.bgName;
      *(_QWORD *)(v15 + 16) = bgName;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)bgName, v18, v19);
      v22 = this->fields.nowBgState;
      if ( !v22 )
        goto LABEL_26;
      compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v22->fields.compDictionary;
      if ( !compDictionary
        || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                      compDictionary,
                      (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__),
            v24 = sub_1B64170(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count),
            *(_QWORD *)(v15 + 24) = v24,
            v25 = (_DWORD **)(v15 + 24),
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 24), v24, v26, v27),
            (v28 = this->fields.nowBgState) == 0LL)
        || (compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v28->fields.compDictionary) == 0LL )
      {
LABEL_26:
        sub_1B64324(compDictionary);
      }
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v49,
        compDictionary,
        (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
      v50 = v49;
      v29 = 0;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v50,
                (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
      {
        key = v50.fields._current.fields.key;
        value = v50.fields._current.fields.value;
        v34 = sub_1B64314(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v30, v31);
        BattlePerformanceBg_SaveData_CompSaveData___ctor((BattlePerformanceBg_SaveData_CompSaveData_o *)v34, 0LL);
        if ( !v34 )
          sub_1B64324(v35);
        *(_QWORD *)(v34 + 16) = key;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 16), (int32_t)key, v36, v37);
        *(_QWORD *)(v34 + 24) = value;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 24), (int32_t)value, v38, v39);
        v41 = *v25;
        if ( !*v25 )
          sub_1B64324(v40);
        v42 = sub_1B64204(v34, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
        if ( !v42 )
        {
          v48 = sub_1B64348(0LL);
          sub_1B641F0(v48, 0LL);
        }
        if ( v29 >= v41[6] )
          sub_1B6432C(v42, v43);
        v46 = &v41[2 * v29];
        *((_QWORD *)v46 + 4) = v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 8), v34, v44, v45);
        ++v29;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v50,
        (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    }
  }
  if ( !v15 )
    goto LABEL_26;
  result = (BattlePerformanceBg_SaveData_o *)v15;
  *(_QWORD *)(v15 + 32) = *(_QWORD *)&this->fields.loadbgno;
  return result;
}


BgResourceData_o *__fastcall BattlePerformanceBg__get_BgResource(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BgResourceData_o *cachedBgResource; // x21
  int32_t loadbgno; // w22
  int32_t loadbgType; // w23
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FF1FF & 1) == 0 )
  {
    sub_1B640C8(&BgResourceData_TypeInfo, method);
    byte_49FF1FF = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    loadbgno = this->fields.loadbgno;
    loadbgType = this->fields.loadbgType;
    cachedBgResource = (BgResourceData_o *)sub_1B64314(BgResourceData_TypeInfo, method, v2);
    BgResourceData___ctor(cachedBgResource, loadbgno, loadbgType, 0LL);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cachedBgResource, (int32_t)cachedBgResource, v7, v8);
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
  struct System_String_o *AssetPath; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_49FF207 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_1B640C8(&Method_BattlePerformanceBg_endloadBg__, v7);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    byte_49FF207 = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_8;
  BattlePerformanceBg__InitLoadBgInfo(this, no, tp, method);
  BgResource = BattlePerformanceBg__get_BgResource(this, v9);
  if ( !BgResource )
    sub_1B64324(0LL);
  AssetPath = BgResourceData__get_AssetPath(BgResource, 0LL);
  this->fields.initLoadedBgPath = AssetPath;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.initLoadedBgPath, (int32_t)AssetPath, v12, v13);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPath, v16, 1, 0LL) )
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
        sub_1B6432C(BattleBgComponents, v9);
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
    sub_1B64324(BattleBgComponents);
  }
}


void __fastcall BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FF218 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22465/*"playerfield"*/, method);
    sub_1B640C8(&StringLiteral_3219/*"BattleIn"*/, v4);
    byte_49FF218 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22465/*"playerfield"*/,
    (System_String_o *)StringLiteral_3219/*"BattleIn"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FF217 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3221/*"BattleOut"*/, method);
    sub_1B640C8(&StringLiteral_22465/*"playerfield"*/, v4);
    byte_49FF217 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_22465/*"playerfield"*/,
    (System_String_o *)StringLiteral_3221/*"BattleOut"*/,
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
        sub_1B6432C(BattleBgComponents, v4);
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
    sub_1B64324(BattleBgComponents);
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
  struct BattlePerformanceBg_BgState_o *v15; // x8
  struct BattlePerformanceBg_BgState_o *v16; // x8
  struct BattlePerformanceBg_BgState_o *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v21; // x21

  if ( (byte_49FF215 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceBg_BgState_TypeInfo, inName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FF215 = 1;
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
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, 0LL);
      v15 = this->fields.nowBgState;
      if ( !v15 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                        (Il2CppObject *)v15->fields.bgName,
                                                        (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v16 = this->fields.nowBgState;
        if ( !v16 )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___Remove(
                                                          (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                          (Il2CppObject *)v16->fields.bgName,
                                                          (const MethodInfo_317A8F4 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v17 = this->fields.nowBgState;
      if ( !v17 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
        (Il2CppObject *)v17->fields.bgName,
        (Il2CppObject *)v17,
        (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
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
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
    if ( BattleBgComponents )
      return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                (Il2CppObject *)inName,
                                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
LABEL_30:
    sub_1B64324(BattleBgComponents);
  }
  v21 = sub_1B64314(BattlePerformanceBg_BgState_TypeInfo, v18, v19);
  BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v21, inName, 0LL);
  if ( !v21 )
    goto LABEL_30;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
    *(Il2CppObject **)(v21 + 16),
    (Il2CppObject *)v21,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
  return (BattlePerformanceBg_BgState_o *)v21;
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
        sub_1B6432C(BattleBgComponents, v5);
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
    sub_1B64324(BattleBgComponents);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v16; // x21
  int max_length; // w8
  unsigned int v18; // w22
  BattlePerformanceBg_SaveData_CompSaveData_o *v19; // x25
  BattlePerformanceBg_BgState_o *nowBgState; // x20

  if ( (byte_49FF201 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, saveData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, v6);
    byte_49FF201 = 1;
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nowBgState, (int32_t)v9, v11, v12);
        v16 = saveData->fields.compSaveDataList;
        if ( !v16 )
          goto LABEL_21;
        max_length = v16->max_length;
        if ( max_length >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( v18 >= max_length )
              sub_1B6432C(compDictionary, v14);
            if ( !*p_nowBgState )
              break;
            v19 = v16->m_Items[v18];
            if ( !v19 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
            if ( !compDictionary )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                          compDictionary,
                                                                                          (Il2CppObject *)v19->fields.bgCompName,
                                                                                          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
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
                (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
            }
            max_length = v16->max_length;
            if ( (int)++v18 >= max_length )
              goto LABEL_18;
          }
LABEL_21:
          sub_1B64324(compDictionary);
        }
LABEL_18:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattlePerformanceBg__getBattleBgComponents(
                                                                                      this,
                                                                                      0,
                                                                                      v15);
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
  ServantStatusBattleListViewItem_o *v18; // x22
  bool v19; // w23
  bool v20; // w24
  int32_t v21; // w2
  int32_t v22; // w3

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v14 = pos.fields.z;
  v15 = pos.fields.y;
  v16 = pos.fields.x;
  v18 = (ServantStatusBattleListViewItem_o *)this;
  v19 = changeDirect;
  v20 = parentCamera;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v18->fields.sortStr1 = (struct System_String_o *)callback;
  v18 = (ServantStatusBattleListViewItem_o *)((char *)v18 + 56);
  v18[-1].fields.dispLimitCount.fields.currentCryptoKey = No;
  v18[-1].fields.dispLimitCount.fields.hiddenValue = tp;
  *(float *)&v18[-1].fields.dispLimitCount.fields.fakeValue = v16;
  *(float *)&v18[-1].fields.dispLimitCount.fields.inited = v15;
  *(float *)&v18[-1].fields.isEnabled = v14;
  *(float *)(&v18[-1].fields.isCanSelect + 3) = x;
  *(float *)&v18[-1].fields.name = y;
  *((float *)&v18[-1].fields.name + 1) = z;
  v18[-1].fields.isMine = v19;
  *(&v18[-1].fields.isMine + 1) = v20;
  sub_1B6406C(v18, (int32_t)callback, v21, v22);
}


void __fastcall BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF21D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__, inName);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo, v5);
    byte_49FF21D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = inName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)inName, v6, v7);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo,
                                                                     v8,
                                                                     v9);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  this->fields.compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.compDictionary, (int32_t)v10, v11, v12);
}


void __fastcall BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  BattlePerformanceBg_BgState_o *v6; // x21
  __int64 v7; // x1
  signed int max_length; // w8
  unsigned int v9; // w24
  BattleBgComponent_o *v10; // x22
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_object__object__o *v12; // x23
  Il2CppObject *Item; // x0

  v6 = this;
  if ( (byte_49FF21F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, list);
    this = (BattlePerformanceBg_BgState_o *)sub_1B640C8(
                                              &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__,
                                              v7);
    byte_49FF21F = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B6432C(this, list);
      v10 = list->m_Items[v9];
      if ( !v10 )
        break;
      v10->fields.actionCamera = actionCamera;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v10->fields.actionCamera,
        (int32_t)actionCamera,
        (int32_t)actionCamera,
        (int32_t)method);
      if ( v10->fields.isRecAnimation )
      {
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  compDictionary,
                                                  (Il2CppObject *)this,
                                                  (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v12 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
          if ( !v12 )
            break;
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v12,
                   (Il2CppObject *)this,
                   (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v10, (BattleBgComponent_SaveData_o *)Item, 0LL);
        }
      }
      max_length = list->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_15:
    sub_1B64324(this);
  }
}


void __fastcall BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v7; // x1
  signed int max_length; // w8
  unsigned int v9; // w24
  BattleBgComponent_o *v10; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v11; // x21
  Il2CppObject *name; // x23

  if ( (byte_49FF21E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, list);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__, v5);
    byte_49FF21E = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_object__object___Clear(
    compDictionary,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B6432C(compDictionary, v7);
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
          (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_14:
    sub_1B64324(compDictionary);
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
  int32_t v6; // w2
  int32_t v7; // w3
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FF220 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_1B640C8(&string_TypeInfo, v3);
    byte_49FF220 = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)Empty, v6, v7);
  v8 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_1B64170(
                                                                   BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                   0LL);
  this->fields.compSaveDataList = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.compSaveDataList, (int32_t)v8, v9, v10);
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
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  return BattleBgComponent__checkKey(x, this->fields.key, 0LL);
}