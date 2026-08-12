void BattlePerformanceBg___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5973FB7 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceBg_TypeInfo);
    sub_2213A60(&StringLiteral_20625/*"front"*/);
    byte_5973FB7 = 1;
  }
  v7 = StringLiteral_20625/*"front"*/;
  BattlePerformanceBg_TypeInfo->static_fields->Frontfile = (struct System_String_o *)StringLiteral_20625/*"front"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattlePerformanceBg_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_String_o **v11; // x8
  struct System_String_o *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_Dictionary_object__object__o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_object__o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5973FB6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_5973FB6 = 1;
  }
  v3 = System_Collections_Generic_List_string__TypeInfo;
  *(_QWORD *)&this->fields.loadbgno = -1;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadedChangeBgList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = *(struct System_String_o ***)(qword_5984390 + 184);
  v12 = *v11;
  this->fields.initLoadedBgPath = *v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.initLoadedBgPath,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bgSpShadowList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v26,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.historyBgState,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgInfoList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePerformanceBg__AddCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        System_Action_BattlePerformanceBg_ChangedBgArgs__o *callback,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_onLoadBgFinished; // x19
  System_Delegate_o *onLoadBgFinished; // t1
  System_Delegate_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Delegate_o *v14; // x20
  System_Action_BattlePerformanceBg_ChangedBgArgs__c *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x0
  int32_t v18; // w1

  if ( (byte_5973FB4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
    byte_5973FB4 = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (MissionNaviTransitionBoardItem_o *)&this->fields.onLoadBgFinished;
  v7 = System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0);
  if ( !v7 )
    goto LABEL_7;
  v14 = v7;
  v15 = System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo;
  v16 = sub_2213BB4(v7, System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
  if ( !v16
    || (v15 = System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo,
        p_onLoadBgFinished->klass = (MissionNaviTransitionBoardItem_c *)v16,
        v17 = sub_2213BB4(v14, v15),
        v18 = v17,
        !v17) )
  {
    sub_221405C(v14, v15, v8);
LABEL_7:
    v18 = 0;
    p_onLoadBgFinished->klass = 0;
  }
  sub_2213A04(p_onLoadBgFinished, v18, v8, v9, v10, v11, v12, v13);
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
  float v12; // s11
  float v13; // s12
  float v14; // s13
  __int64 v21; // x19
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_object__o *bgInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v38; // x10
  __int64 size; // x11
  Il2CppClass **v40; // x0

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v12 = pos.fields.z;
  v13 = pos.fields.y;
  v14 = pos.fields.x;
  if ( (byte_5973FA7 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceBg_BgInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
    byte_5973FA7 = 1;
  }
  v21 = sub_2213CCC(BattlePerformanceBg_BgInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  *(_DWORD *)(v21 + 16) = No;
  *(_DWORD *)(v21 + 20) = tp;
  *(float *)(v21 + 24) = v14;
  *(float *)(v21 + 28) = v13;
  *(float *)(v21 + 32) = v12;
  *(float *)(v21 + 36) = x;
  *(float *)(v21 + 40) = y;
  *(float *)(v21 + 44) = z;
  *(_BYTE *)(v21 + 48) = changeDirect;
  *(_BYTE *)(v21 + 49) = parentCamera;
  *(_QWORD *)(v21 + 56) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 56), (int32_t)callback, v22, v23, v24, v25, v26, v27);
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (items = bgInfoList->fields._items,
        v38 = Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__,
        ++bgInfoList->fields._version,
        !items) )
  {
    sub_2213CDC(v28, v29);
  }
  size = bgInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgInfoList,
      (Il2CppObject *)v21,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v40[4] = (Il2CppClass *)v21;
    bgInfoList->fields._size = size + 1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), v21, v30, v31, v32, v33, v34, v35);
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
    sub_2213CDC(this, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onLoadBgFinished = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onLoadBgFinished, 0, v2, v3, v4, v5, v6, v7);
}


void BattlePerformanceBg__DebugPrint(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  int v4; // w9

  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0)) == 0 )
    sub_2213CDC(this, data);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v4 = m_CancellationTokenSource & ~(m_CancellationTokenSource >> 31);
    do
    {
      if ( !m_CancellationTokenSource )
        sub_2213CE4(this);
      --v4;
      --m_CancellationTokenSource;
    }
    while ( v4 );
  }
}


bool BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_5973FA8 & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__);
    byte_5973FA8 = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_2213CDC(this, method);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *BattlePerformanceBg__FetchBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *bgInfoList; // x0
  System_Collections_Generic_List_object__o *v5; // x8
  BattlePerformanceBg_BgInfo_o *v6; // x19

  if ( (byte_5973FA9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__);
    byte_5973FA9 = 1;
  }
  if ( !BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
    return 0;
  bgInfoList = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList;
  if ( !bgInfoList
    || (bgInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bgInfoList,
                                                                    0,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__),
        (v5 = (System_Collections_Generic_List_object__o *)this->fields.bgInfoList) == 0) )
  {
    sub_2213CDC(bgInfoList, v3);
  }
  v6 = (BattlePerformanceBg_BgInfo_o *)bgInfoList;
  System_Collections_Generic_List_object___RemoveAt(
    v5,
    0,
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  System_Object_array *BattleBgComponents; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_5973FB1 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_BattleBgComponent___);
    sub_2213A60(&System_Func_BattleBgComponent__bool__TypeInfo);
    sub_2213A60(&Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__);
    sub_2213A60(&BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
    byte_5973FB1 = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceBg___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = key;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)key, v8, v9, v10, v11, v12, v13);
  BattleBgComponents = (System_Object_array *)BattlePerformanceBg__getBattleBgComponents(this, 0, v14);
  v16 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBgComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattlePerformanceBg___c__DisplayClass70_0__FindComponentByKey_b__0__,
    0);
  return (BattleBgComponent_o *)BasicHelper__Find_object_(
                                  BattleBgComponents,
                                  (System_Func_T__bool__o *)v16,
                                  (const MethodInfo_3810A1C *)Method_BasicHelper_Find_BattleBgComponent___);
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
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  __int64 v11; // x1
  __int64 v13; // x1
  Il2CppObject *Object_object__58532980; // x20
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *v17; // x19
  __int64 v18; // x1
  Il2CppObject *v19; // x19
  int Type_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_5973FAB & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17871/*"bg"*/);
    sub_2213A60(&StringLiteral_17874/*"bg0"*/);
    byte_5973FAB = 1;
  }
  Type_k__BackingField = 0;
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    sub_2213CDC(0, v6);
  Type_k__BackingField = BgResource->fields._Type_k__BackingField;
  if ( Type_k__BackingField < 1 )
  {
    if ( !data )
      sub_2213CDC(BgResource, v6);
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                data,
                                (System_String_o *)StringLiteral_17871/*"bg"*/,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__58532980,
                                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v19 = AssetData__GetObject_object__58532980(
              data,
              (System_String_o *)StringLiteral_17874/*"bg0"*/,
              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v19,
                                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v7 = System_Int32__ToString((int32_t)&Type_k__BackingField, 0);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_17871/*"bg"*/, v7, 0);
    if ( !data )
      sub_2213CDC(v8, v8);
    v10 = AssetData__GetObject_object__58532980(
            data,
            v8,
            (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v10,
                                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v17 = AssetData__GetObject_object__58532980(
              data,
              (System_String_o *)StringLiteral_17871/*"bg"*/,
              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                           v17,
                                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


UnityEngine_GameObject_o *BattlePerformanceBg__GetFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  void *BgResource; // x0
  System_String_o *v6; // x1
  int v7; // w9
  int v8; // w8
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  Il2CppObject *Object_object__58532980; // x20
  __int64 v13; // x1
  BattlePerformanceBg_c *v14; // x0
  __int64 v15; // x1
  bool v16; // w8
  UnityEngine_GameObject_o *result; // x0
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5973FAC & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&BattlePerformanceBg_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973FAC = 1;
  }
  v18 = 0;
  BgResource = BattlePerformanceBg__get_BgResource(this, (const MethodInfo *)data);
  if ( !BgResource )
    goto LABEL_23;
  v7 = *((_DWORD *)BgResource + 5);
  BgResource = BattlePerformanceBg_TypeInfo;
  v18 = v7;
  v8 = *(&BattlePerformanceBg_TypeInfo->_2.cctor_finished + 1);
  if ( v7 > 0 )
  {
    if ( !v8 )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo, v6);
      BgResource = BattlePerformanceBg_TypeInfo;
    }
    v9 = (System_String_o *)**((_QWORD **)BgResource + 23);
    v10 = System_Int32__ToString((int32_t)&v18, 0);
    BgResource = System_String__Concat_75651716(v9, v10, 0);
    v6 = (System_String_o *)BgResource;
    if ( data )
      goto LABEL_8;
LABEL_23:
    sub_2213CDC(BgResource, v6);
  }
  if ( !v8 )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo, v6);
    BgResource = BattlePerformanceBg_TypeInfo;
  }
  v6 = (System_String_o *)**((_QWORD **)BgResource + 23);
  if ( !data )
    goto LABEL_23;
LABEL_8:
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              data,
                              v6,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    goto LABEL_26;
  v14 = BattlePerformanceBg_TypeInfo;
  if ( !*(&BattlePerformanceBg_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo, v13);
    v14 = BattlePerformanceBg_TypeInfo;
  }
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              data,
                              v14->static_fields->Frontfile,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
  result = 0;
  if ( v16 )
  {
LABEL_26:
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__58532980,
                                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( (byte_5973FAF & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&StringLiteral_24645/*"shadow_"*/);
    byte_5973FAF = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_24645/*"shadow_"*/, v5, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58532980(
                                      BgAssetData,
                                      v6,
                                      (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
}


void BattlePerformanceBg__InitLoadBgInfo(
        BattlePerformanceBg_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  BgResourceData_c *v7; // x0
  BgResourceData_o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5973FA2 & 1) == 0 )
  {
    sub_2213A60(&BgResourceData_TypeInfo);
    byte_5973FA2 = 1;
  }
  v7 = BgResourceData_TypeInfo;
  this->fields.loadbgno = bgId;
  this->fields.loadbgType = bgType;
  v8 = (BgResourceData_o *)sub_2213CCC(v7);
  BgResourceData___ctor(v8, bgId, bgType, 0);
  this->fields.cachedBgResource = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedBgResource,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w20
  int32_t v25; // w21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x5

  if ( (byte_5973FA3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceBg___c__DisplayClass48_0__LoadBgSpShadowEffect_b__0__);
    sub_2213A60(&BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
    byte_5973FA3 = 1;
  }
  v9 = sub_2213CCC(BattlePerformanceBg___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = bgId;
  *(_DWORD *)(v9 + 28) = bgType;
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)finishCallback, v18, v19, v20, v21, v22, v23);
  v24 = *(_DWORD *)(v9 + 24);
  v25 = *(_DWORD *)(v9 + 28);
  v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o **v20; // x24
  __int64 v21; // x1
  int32_t BgSpecialShadowEffectId; // w0
  __int64 v23; // x1
  int32_t v24; // w21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v34; // x8
  System_String_o *v35; // x20
  AssetLoader_LoadEndDataHandler_o *v36; // x21
  __int64 v37; // x1
  System_String_o *effectPath; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5973FA4 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__);
    sub_2213A60(&BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
    byte_5973FA4 = 1;
  }
  effectPath = 0;
  v11 = sub_2213CCC(BattlePerformanceBg___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_24;
  *(_QWORD *)(v11 + 16) = finishCallback;
  v20 = (System_Action_o **)(v11 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Master_object = (BattleBgMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_24;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(
                              Master_object,
                              battleBgId,
                              battleBgType,
                              isEnemySide,
                              0,
                              0);
  if ( BgSpecialShadowEffectId <= 0 )
  {
    ActionExtensions__Call(*v20, 0);
    return;
  }
  v24 = BgSpecialShadowEffectId;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v23);
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v24, 0) )
    goto LABEL_13;
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object )
    goto LABEL_24;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)Master_object,
         (Il2CppObject *)effectPath,
         (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_13:
    ActionExtensions__Call(*v20, 0);
    return;
  }
  Master_object = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_object
    || (v31 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v13 = (Il2CppObject *)effectPath,
        v32 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v31) )
  {
LABEL_24:
    sub_2213CDC(Master_object, v13);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v31 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v13,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = v31 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v34 + 32) = v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 32), (int32_t)v13, v25, v26, v27, v28, v29, v30);
  }
  v35 = effectPath;
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v11,
    Method_BattlePerformanceBg___c__DisplayClass49_0__LoadBgSpShadowEffectLocal_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37);
  AssetManager__loadAssetStorage(v35, v36, 1, 0, 0);
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
  __int64 v4; // x1
  struct UnityEngine_GameObject_o **p_bgobject; // x20
  UnityEngine_Object_o *bgobject; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *frontobject; // x21
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v19; // x1
  BattleActionCamera_o *v20; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v22; // x21
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5973F9C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F9C = 1;
  }
  BattlePerformanceBg__saveHistoryBgState(this, 0, v2);
  p_bgobject = &this->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0, 0) )
    goto LABEL_9;
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(frontobject, 0, 0) )
  {
LABEL_9:
    v9 = (UnityEngine_Object_o *)*p_bgobject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      v11 = (UnityEngine_Object_o *)*p_bgobject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__Destroy_83459800(v11, 0);
      *p_bgobject = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgobject, 0, v12, v13, v14, v15, v16, v17);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0, 0) )
    {
      v20 = this->fields.actionCamera;
      if ( !v20 )
        sub_2213CDC(0, v19);
      BattleActionCamera__stopCameraAnimation(v20, 0);
    }
    p_frontobject = &this->fields.frontobject;
    v22 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
    {
      v25 = (UnityEngine_Object_o *)*p_frontobject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__Destroy_83459800(v25, 0);
      *p_frontobject = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.frontobject, 0, v26, v27, v28, v29, v30, v31);
    }
    BattlePerformanceBg__ReleaseBgAsset(this, this->fields.nowBgAssetPath, v24);
  }
}


void BattlePerformanceBg__ReleaseBgAsset(BattlePerformanceBg_o *this, System_String_o *path, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1

  if ( (byte_5973F9F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    byte_5973F9F = 1;
  }
  if ( !System_String__IsNullOrEmpty(path, 0) )
  {
    loadedChangeBgList = this->fields.loadedChangeBgList;
    if ( loadedChangeBgList )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)loadedChangeBgList,
              (Il2CppObject *)path,
              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_8:
        this->fields.BgAssetData = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.BgAssetData, 0, v7, v8, v9, v10, v11, v12);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
        AssetManager__releaseAssetStorage(path, 0);
        return;
      }
      loadedChangeBgList = this->fields.loadedChangeBgList;
      if ( loadedChangeBgList )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadedChangeBgList,
          (Il2CppObject *)path,
          (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_8;
      }
    }
    sub_2213CDC(loadedChangeBgList, v5);
  }
}


void BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  __int64 v4; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5973FA0 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_5973FA0 = 1;
  }
  bgSpShadowList = this->fields.bgSpShadowList;
  memset(&v9, 0, sizeof(v9));
  if ( !bgSpShadowList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)bgSpShadowList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.bgSpShadowList;
  if ( !v6 )
LABEL_13:
    sub_2213CDC(bgSpShadowList, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


void BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  __int64 v4; // x1
  Il2CppObject *current; // x20
  __int64 v6; // x1
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v8; // x8
  int32_t size; // w2
  int v10; // w9
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5973F9E & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_5973F9E = 1;
  }
  loadedChangeBgList = this->fields.loadedChangeBgList;
  memset(&v11, 0, sizeof(v11));
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)loadedChangeBgList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0);
    if ( AssetStorage )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
      AssetManager__releaseAsset_47496972(AssetStorage, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v8 = this->fields.loadedChangeBgList;
  if ( !v8 )
LABEL_16:
    sub_2213CDC(loadedChangeBgList, method);
  size = v8->fields._size;
  v10 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0);
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

  if ( (byte_5973FB5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973FB5 = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_15:
    sub_2213CDC(BattleBgComponents, v5);
  max_length = BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_2213CE4(BattleBgComponents);
      v9 = (UnityEngine_Object_o *)v7->m_Items[v8];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
  bool v9; // w7
  float z; // s8
  float y; // s9
  float x; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  struct System_Action_o **p_EndCallback; // x25
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  struct UnityEngine_Color_o *p_tmpcolor; // x21
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  char v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Object_array *v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  int32_t v39; // w1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  char v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppObject *v46; // x21
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  char v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int32_t v53; // w1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  char v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *v60; // x21
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  char v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  int32_t v67; // w1
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  char v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  Il2CppObject *v74; // x21
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  char v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  int32_t v81; // w1
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  char v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  int32_t v88; // w1
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  char v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  int32_t v95; // w1
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  char v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  int32_t v102; // w1
  __int64 v103; // x1
  System_Collections_Hashtable_o *v104; // x0
  __int64 v105; // x0
  __int128 v106; // [xsp+0h] [xbp-A0h] BYREF
  struct UnityEngine_Color_o v107; // [xsp+10h] [xbp-90h] BYREF
  int v108; // [xsp+5Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_5973FAA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Color_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_19895/*"endChangeColor"*/);
    sub_2213A60(&StringLiteral_15792/*"UpdateColor"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5973FAA = 1;
  }
  if ( this->fields.IsLoading )
  {
    v109.fields.x = v15;
    v109.fields.y = v14;
    v109.fields.z = v13;
    v110.fields.x = x;
    v110.fields.y = y;
    v110.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v109, v110, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.EndCallback,
    (int32_t)callback,
    *(System_String_o **)&tp,
    (System_String_o *)changeDirect,
    parentCamera,
    (int32_t)callback,
    (bool)method,
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
  this->fields.pos.fields.x = v15;
  this->fields.pos.fields.y = v14;
  this->fields.pos.fields.z = v13;
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
  p_tmpcolor = &this->fields.tmpcolor;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v28 = sub_2213B20(object___TypeInfo, 10);
  if ( !v28 )
    sub_2213CDC(0, v29);
  v36 = (System_Object_array *)v28;
  v37 = StringLiteral_20622/*"from"*/;
  if ( StringLiteral_20622/*"from"*/ )
  {
    v37 = sub_2213BB4(StringLiteral_20622/*"from"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_47;
  }
  if ( !LODWORD(v36->max_length) )
    goto LABEL_46;
  v39 = StringLiteral_20622/*"from"*/;
  v36->m_Items[0] = (Il2CppObject *)StringLiteral_20622/*"from"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v36->m_Items, v39, v30, v31, v32, v33, v34, v35);
  v107 = *p_tmpcolor;
  v37 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v107);
  v46 = (Il2CppObject *)v37;
  if ( v37 )
  {
    v37 = sub_2213BB4(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_47;
  }
  if ( (v36->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_46;
  v36->m_Items[1] = v46;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[1], (int32_t)v46, v40, v41, v42, v43, v44, v45);
  v37 = StringLiteral_25406/*"to"*/;
  if ( StringLiteral_25406/*"to"*/ )
  {
    v37 = sub_2213BB4(StringLiteral_25406/*"to"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_47;
  }
  if ( LODWORD(v36->max_length) <= 2 )
    goto LABEL_46;
  v53 = StringLiteral_25406/*"to"*/;
  v36->m_Items[2] = (Il2CppObject *)StringLiteral_25406/*"to"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[2], v53, v47, v48, v49, v50, v51, v52);
  v106 = xmmword_E9C600;
  v37 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v106);
  v60 = (Il2CppObject *)v37;
  if ( v37 )
  {
    v37 = sub_2213BB4(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_47;
  }
  if ( (v36->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_46;
  v36->m_Items[3] = v60;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[3], (int32_t)v60, v54, v55, v56, v57, v58, v59);
  v37 = StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v37 = sub_2213BB4(StringLiteral_25366/*"time"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_47;
  }
  if ( LODWORD(v36->max_length) <= 4 )
    goto LABEL_46;
  v67 = StringLiteral_25366/*"time"*/;
  v36->m_Items[4] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[4], v67, v61, v62, v63, v64, v65, v66);
  v108 = 1056964608;
  v37 = j_il2cpp_value_box_0(qword_5984378, &v108);
  v74 = (Il2CppObject *)v37;
  if ( v37 )
  {
    v37 = sub_2213BB4(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_47;
  }
  if ( LODWORD(v36->max_length) <= 5 )
    goto LABEL_46;
  v36->m_Items[5] = v74;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[5], (int32_t)v74, v68, v69, v70, v71, v72, v73);
  v37 = StringLiteral_23573/*"onupdate"*/;
  if ( StringLiteral_23573/*"onupdate"*/ )
  {
    v37 = sub_2213BB4(StringLiteral_23573/*"onupdate"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_47;
  }
  if ( LODWORD(v36->max_length) <= 6 )
    goto LABEL_46;
  v81 = StringLiteral_23573/*"onupdate"*/;
  v36->m_Items[6] = (Il2CppObject *)StringLiteral_23573/*"onupdate"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[6], v81, v75, v76, v77, v78, v79, v80);
  v37 = StringLiteral_15792/*"UpdateColor"*/;
  if ( StringLiteral_15792/*"UpdateColor"*/ )
  {
    v37 = sub_2213BB4(StringLiteral_15792/*"UpdateColor"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_47;
  }
  if ( (v36->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_46;
  v88 = StringLiteral_15792/*"UpdateColor"*/;
  v36->m_Items[7] = (Il2CppObject *)StringLiteral_15792/*"UpdateColor"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[7], v88, v82, v83, v84, v85, v86, v87);
  v37 = StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    v37 = sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_47;
  }
  if ( LODWORD(v36->max_length) <= 8 )
    goto LABEL_46;
  v95 = StringLiteral_23565/*"oncomplete"*/;
  v36->m_Items[8] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[8], v95, v89, v90, v91, v92, v93, v94);
  v37 = StringLiteral_19895/*"endChangeColor"*/;
  if ( StringLiteral_19895/*"endChangeColor"*/ )
  {
    v37 = sub_2213BB4(StringLiteral_19895/*"endChangeColor"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
    {
LABEL_47:
      v105 = sub_2213D00(v37, v38);
      sub_2213BA0(v105, 0);
    }
  }
  if ( LODWORD(v36->max_length) <= 9 )
LABEL_46:
    sub_2213CE4(v37);
  v102 = StringLiteral_19895/*"endChangeColor"*/;
  v36->m_Items[9] = (Il2CppObject *)StringLiteral_19895/*"endChangeColor"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[9], v102, v96, v97, v98, v99, v100, v101);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v103);
  v104 = iTween__Hash(v36, 0);
  iTween__ValueTo(gameObject, v104, 0);
}


void BattlePerformanceBg__endChangeBg(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 BgObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct BattlePerformanceBg_BgState_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_Transform_o *v22; // x22
  UnityEngine_Transform_o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v33; // x2
  UnityEngine_Transform_o *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v42; // x3
  System_Action_T__o *onLoadBgFinished; // x20
  bool parentCamera; // w23
  __int64 v45; // d8
  __int64 v46; // x21
  const MethodInfo_36FFECC *v47; // x2
  const MethodInfo *v48; // x1
  struct System_Action_o *EndCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_Object_array *v57; // x21
  __int64 v58; // x0
  __int64 v59; // x1
  int32_t v60; // w1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  Il2CppObject *v67; // x22
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  int32_t v74; // w1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  Il2CppObject *v81; // x19
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  int32_t v88; // w1
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  Il2CppObject *v95; // x19
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  int32_t v102; // w1
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  int32_t v109; // w1
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  int32_t v116; // w1
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  int32_t v123; // w1
  __int64 v124; // x1
  System_Collections_Hashtable_o *v125; // x0
  __int64 v126; // x0
  struct UnityEngine_Color_o tmpcolor; // [xsp+0h] [xbp-70h] BYREF
  __int128 v128; // [xsp+10h] [xbp-60h] BYREF
  int v129; // [xsp+2Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973FAD & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_2213A60(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    sub_2213A60(&UnityEngine_Color_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_19895/*"endChangeColor"*/);
    sub_2213A60(&StringLiteral_15792/*"UpdateColor"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5973FAD = 1;
  }
  this->fields.BgAssetData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.BgAssetData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    goto LABEL_69;
  v13 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v12);
  this->fields.nowBgState = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nowBgState, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  BgObject = (__int64)BattlePerformanceBg__GetBgObject(this, data, v20);
  v21 = (UnityEngine_GameObject_o *)BgObject;
  if ( this->fields.parentCamera )
  {
    if ( !BgObject )
      goto LABEL_69;
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)BgObject, 0);
    if ( !BgObject )
      goto LABEL_69;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
    if ( !BgObject )
      goto LABEL_69;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_69;
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)BgObject, 0);
    if ( !BgObject )
      goto LABEL_69;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
    v22 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_5969AE0 )
    {
      BgObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v22 )
      goto LABEL_69;
    UnityEngine_Transform__set_eulerAngles(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
  if ( !BgObject )
    goto LABEL_69;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0);
  BgObject = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
  v23 = (UnityEngine_Transform_o *)BgObject;
  if ( !byte_5969AE5 )
  {
    BgObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v23 )
    goto LABEL_69;
  UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  this->fields.bgobject = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgobject, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(this, data, v30);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  BgObject = UnityEngine_Object__op_Inequality(FrontObject, 0, 0);
  if ( (BgObject & 1) != 0 )
  {
    if ( !FrontObject )
      goto LABEL_69;
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0);
    if ( !BgObject )
      goto LABEL_69;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0);
    if ( !BgObject )
      goto LABEL_69;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0);
    if ( !BgObject )
      goto LABEL_69;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0);
    BgObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0);
    v34 = (UnityEngine_Transform_o *)BgObject;
    if ( !byte_5969AE5 )
    {
      BgObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v34 )
      goto LABEL_69;
    UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.frontobject,
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
    goto LABEL_69;
  BattlePerformanceBg_BgState__loadSaveData(
    nowBgState,
    (BattleBgComponent_array *)BgObject,
    this->fields.actionCamera,
    v42);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  parentCamera = this->fields.parentCamera;
  v45 = *(_QWORD *)&this->fields.loadbgno;
  v46 = sub_2213CCC(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v46, 0);
  v47 = (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___;
  *(_QWORD *)(v46 + 16) = v45;
  *(_BYTE *)(v46 + 24) = parentCamera;
  ActionExtensions__Call_object_(onLoadBgFinished, (Il2CppObject *)v46, v47);
  if ( this->fields.changeDirect )
  {
    v130.fields.r = 1.0;
    v130.fields.g = 1.0;
    v130.fields.b = 1.0;
    v130.fields.a = 1.0;
    this->fields.fade = 0;
    UnityEngine_RenderSettings__set_ambientLight(v130, 0);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
        EndCallback->fields.method_code,
        EndCallback->fields.method);
    BattlePerformanceBg__OnEndBgLoad(this, v48);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  BgObject = sub_2213B20(object___TypeInfo, 10);
  if ( !BgObject )
LABEL_69:
    sub_2213CDC(BgObject, v11);
  v57 = (System_Object_array *)BgObject;
  v58 = StringLiteral_20622/*"from"*/;
  if ( StringLiteral_20622/*"from"*/ )
  {
    v58 = sub_2213BB4(StringLiteral_20622/*"from"*/, v57->obj.klass->_1.element_class);
    if ( !v58 )
      goto LABEL_71;
  }
  if ( !LODWORD(v57->max_length) )
    goto LABEL_70;
  v60 = StringLiteral_20622/*"from"*/;
  v57->m_Items[0] = (Il2CppObject *)StringLiteral_20622/*"from"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v57->m_Items, v60, v51, v52, v53, v54, v55, v56);
  v128 = xmmword_E9C600;
  v58 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &v128);
  v67 = (Il2CppObject *)v58;
  if ( v58 )
  {
    v58 = sub_2213BB4(v58, v57->obj.klass->_1.element_class);
    if ( !v58 )
      goto LABEL_71;
  }
  if ( (v57->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_70;
  v57->m_Items[1] = v67;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->m_Items[1], (int32_t)v67, v61, v62, v63, v64, v65, v66);
  v58 = StringLiteral_25406/*"to"*/;
  if ( StringLiteral_25406/*"to"*/ )
  {
    v58 = sub_2213BB4(StringLiteral_25406/*"to"*/, v57->obj.klass->_1.element_class);
    if ( !v58 )
      goto LABEL_71;
  }
  if ( LODWORD(v57->max_length) <= 2 )
    goto LABEL_70;
  v74 = StringLiteral_25406/*"to"*/;
  v57->m_Items[2] = (Il2CppObject *)StringLiteral_25406/*"to"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->m_Items[2], v74, v68, v69, v70, v71, v72, v73);
  tmpcolor = this->fields.tmpcolor;
  v58 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v81 = (Il2CppObject *)v58;
  if ( v58 )
  {
    v58 = sub_2213BB4(v58, v57->obj.klass->_1.element_class);
    if ( !v58 )
      goto LABEL_71;
  }
  if ( (v57->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_70;
  v57->m_Items[3] = v81;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->m_Items[3], (int32_t)v81, v75, v76, v77, v78, v79, v80);
  v58 = StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v58 = sub_2213BB4(StringLiteral_25366/*"time"*/, v57->obj.klass->_1.element_class);
    if ( !v58 )
      goto LABEL_71;
  }
  if ( LODWORD(v57->max_length) <= 4 )
    goto LABEL_70;
  v88 = StringLiteral_25366/*"time"*/;
  v57->m_Items[4] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->m_Items[4], v88, v82, v83, v84, v85, v86, v87);
  v129 = 1056964608;
  v58 = j_il2cpp_value_box_0(qword_5984378, &v129);
  v95 = (Il2CppObject *)v58;
  if ( v58 )
  {
    v58 = sub_2213BB4(v58, v57->obj.klass->_1.element_class);
    if ( !v58 )
      goto LABEL_71;
  }
  if ( LODWORD(v57->max_length) <= 5 )
    goto LABEL_70;
  v57->m_Items[5] = v95;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->m_Items[5], (int32_t)v95, v89, v90, v91, v92, v93, v94);
  v58 = StringLiteral_23573/*"onupdate"*/;
  if ( StringLiteral_23573/*"onupdate"*/ )
  {
    v58 = sub_2213BB4(StringLiteral_23573/*"onupdate"*/, v57->obj.klass->_1.element_class);
    if ( !v58 )
      goto LABEL_71;
  }
  if ( LODWORD(v57->max_length) <= 6 )
    goto LABEL_70;
  v102 = StringLiteral_23573/*"onupdate"*/;
  v57->m_Items[6] = (Il2CppObject *)StringLiteral_23573/*"onupdate"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->m_Items[6], v102, v96, v97, v98, v99, v100, v101);
  v58 = StringLiteral_15792/*"UpdateColor"*/;
  if ( StringLiteral_15792/*"UpdateColor"*/ )
  {
    v58 = sub_2213BB4(StringLiteral_15792/*"UpdateColor"*/, v57->obj.klass->_1.element_class);
    if ( !v58 )
      goto LABEL_71;
  }
  if ( (v57->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_70;
  v109 = StringLiteral_15792/*"UpdateColor"*/;
  v57->m_Items[7] = (Il2CppObject *)StringLiteral_15792/*"UpdateColor"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->m_Items[7], v109, v103, v104, v105, v106, v107, v108);
  v58 = StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    v58 = sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v57->obj.klass->_1.element_class);
    if ( !v58 )
      goto LABEL_71;
  }
  if ( LODWORD(v57->max_length) <= 8 )
    goto LABEL_70;
  v116 = StringLiteral_23565/*"oncomplete"*/;
  v57->m_Items[8] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->m_Items[8], v116, v110, v111, v112, v113, v114, v115);
  v58 = StringLiteral_19895/*"endChangeColor"*/;
  if ( StringLiteral_19895/*"endChangeColor"*/ )
  {
    v58 = sub_2213BB4(StringLiteral_19895/*"endChangeColor"*/, v57->obj.klass->_1.element_class);
    if ( !v58 )
    {
LABEL_71:
      v126 = sub_2213D00(v58, v59);
      sub_2213BA0(v126, 0);
    }
  }
  if ( LODWORD(v57->max_length) <= 9 )
LABEL_70:
    sub_2213CE4(v58);
  v123 = StringLiteral_19895/*"endChangeColor"*/;
  v57->m_Items[9] = (Il2CppObject *)StringLiteral_19895/*"endChangeColor"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->m_Items[9], v123, v117, v118, v119, v120, v121, v122);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v124);
  v125 = iTween__Hash(v57, 0);
  iTween__ValueTo(gameObject, v125, 0);
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
  __int64 v10; // x1
  struct System_Action_o *EndCallback; // x8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BgResourceData_Fields fields; // x8
  _QWORD *v19; // x9
  __int64 klass_low; // x10
  __int64 v21; // x8
  AssetLoader_LoadEndDataHandler_o *v22; // x21
  __int64 v23; // x1
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973FAE & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceBg_endChangeBg__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_5973FAE = 1;
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
    UnityEngine_RenderSettings__set_ambientLight(v24, 0);
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
               (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          v9 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0);
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
          if ( AssetManager__getAsset_47495960(v8, v9, 0) )
            return;
LABEL_21:
          v22 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(v22, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0);
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23);
          AssetManager__loadAssetStorage(v8, v22, 1, 0, 0);
          return;
        }
        if ( !System_String__op_Inequality(v8, this->fields.initLoadedBgPath, 0) )
          goto LABEL_21;
        BgResource = (BgResourceData_o *)this->fields.loadedChangeBgList;
        if ( BgResource )
        {
          fields = BgResource->fields;
          v19 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(BgResource[1].klass);
          if ( fields )
          {
            klass_low = SLODWORD(BgResource[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)BgResource,
                (Il2CppObject *)v8,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = *(_QWORD *)&fields + 8 * klass_low;
              LODWORD(BgResource[1].klass) = klass_low + 1;
              *(_QWORD *)(v21 + 32) = v8;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), (int32_t)v8, v12, v13, v14, v15, v16, v17);
            }
            goto LABEL_21;
          }
        }
      }
    }
    sub_2213CDC(BgResource, v7);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x4

  if ( (byte_5973FA5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__);
    sub_2213A60(&BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
    byte_5973FA5 = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceBg___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)data, v14, v15, v16, v17, v18, v19);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v5, Method_BattlePerformanceBg___c__DisplayClass50_0__endloadBg_b__0__, 0);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v22, v23);
}


void BattlePerformanceBg__endloadBgAll(BattlePerformanceBg_o *this, AssetData_o *data, const MethodInfo *method)
{
  BattlePerformanceBg_o *v4; // x19
  BattlePerformanceBg_BgState_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  __int64 v15; // x1
  UnityEngine_Object_o *frontobject; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Object_o *v23; // x22
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *v26; // x22
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  BattlePerformanceBg_o *v32; // x22
  BattlePerformanceBg_o *v33; // x23
  BattlePerformanceBg_o *v34; // x23
  struct System_String_o *name; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  const MethodInfo *v48; // x2
  __int64 v49; // x1
  UnityEngine_Object_o *v50; // x20
  const MethodInfo *v51; // x2
  BattlePerformanceBg_o *v52; // x21
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v60; // x3
  System_Action_T__o *onLoadBgFinished; // x20
  bool parentCamera; // w23
  __int64 v63; // d8
  __int64 v64; // x19
  const MethodInfo_36FFECC *v65; // x2

  v4 = this;
  if ( (byte_5973FA6 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_2213A60(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    this = (BattlePerformanceBg_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973FA6 = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_56;
  v5 = BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.nowBgState, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  p_bgobject = (UnityEngine_Object_o **)&v4->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)v4->fields.bgobject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0, 0) )
    goto LABEL_10;
  frontobject = (UnityEngine_Object_o *)v4->fields.frontobject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(frontobject, 0, 0) )
  {
LABEL_10:
    v23 = *p_bgobject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
    {
      v25 = *p_bgobject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      UnityEngine_Object__Destroy_83459800(v25, 0);
    }
    v26 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
    {
      v28 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      UnityEngine_Object__Destroy_83459800(v28, 0);
    }
    actionCamera = (UnityEngine_Object_o *)v4->fields.actionCamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0, 0) )
    {
      this = (BattlePerformanceBg_o *)v4->fields.actionCamera;
      if ( !this )
        goto LABEL_56;
      BattleActionCamera__stopCameraAnimation((BattleActionCamera_o *)this, 0);
    }
    BattlePerformanceBg__ReleaseBgAsset(v4, v4->fields.nowBgAssetPath, v30);
  }
  v4->fields.BgAssetData = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.BgAssetData, (int32_t)data, v17, v18, v19, v20, v21, v22);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__GetBgObject(v4, data, v31);
  v32 = this;
  if ( v4->fields.parentCamera )
  {
    if ( !this )
      goto LABEL_56;
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_56;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v32, 0);
    if ( !this )
      goto LABEL_56;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_56;
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_56;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v32, 0);
    v33 = this;
    if ( !byte_5969AE0 )
    {
      this = (BattlePerformanceBg_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v33 )
      goto LABEL_56;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v33,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v32, 0);
  if ( !this )
    goto LABEL_56;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0);
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v32, 0);
  v34 = this;
  if ( !byte_5969AE5 )
  {
    this = (BattlePerformanceBg_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v34 )
    goto LABEL_56;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v34,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  name = data->fields.name;
  v4->fields.nowBgAssetPath = name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.nowBgAssetPath,
    (int32_t)name,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v4->fields.bgobject = (struct UnityEngine_GameObject_o *)v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.bgobject, (int32_t)v32, v42, v43, v44, v45, v46, v47);
  v50 = (UnityEngine_Object_o *)BattlePerformanceBg__GetFrontObject(v4, data, v48);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v50, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v50 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0);
            this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0);
            v52 = this;
            if ( !byte_5969AE5 )
            {
              this = (BattlePerformanceBg_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE5 = 1;
            }
            if ( v52 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v52,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v50;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v4->fields.frontobject,
                (int32_t)v50,
                v53,
                v54,
                v55,
                v56,
                v57,
                v58);
              goto LABEL_54;
            }
          }
        }
      }
    }
LABEL_56:
    sub_2213CDC(this, data);
  }
LABEL_54:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v51);
  if ( !nowBgState )
    goto LABEL_56;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, v60);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  parentCamera = v4->fields.parentCamera;
  v63 = *(_QWORD *)&v4->fields.loadbgno;
  v64 = sub_2213CCC(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v64, 0);
  v65 = (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___;
  *(_QWORD *)(v64 + 16) = v63;
  *(_BYTE *)(v64 + 24) = parentCamera;
  ActionExtensions__Call_object_(onLoadBgFinished, (Il2CppObject *)v64, v65);
}


BattleBgComponent_array *BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *bgobject; // x22
  __int64 v8; // x1
  UnityEngine_GameObject_o *ComponentsInChildren_object; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_5973F9D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleBgComponent__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F9D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBgComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(bgobject, 0, 0) )
  {
    ComponentsInChildren_object = this->fields.bgobject;
    if ( !ComponentsInChildren_object )
      goto LABEL_17;
    ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                ComponentsInChildren_object,
                                                                includeInactive,
                                                                (const MethodInfo_38B79D0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v5 )
      goto LABEL_17;
    System_Collections_Generic_List_object___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(frontobject, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
  {
    if ( v5 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_17:
    sub_2213CDC(ComponentsInChildren_object, v8);
  }
  ComponentsInChildren_object = this->fields.frontobject;
  if ( !ComponentsInChildren_object )
    goto LABEL_17;
  ComponentsInChildren_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                              ComponentsInChildren_object,
                                                              includeInactive,
                                                              (const MethodInfo_38B79D0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v5 )
    goto LABEL_17;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct BattlePerformanceBg_BgState_o *v15; // x8
  struct System_String_o *bgName; // x1
  struct BattlePerformanceBg_BgState_o *v17; // x8
  unsigned int Count; // w0
  __int64 v19; // x0
  _DWORD **v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct BattlePerformanceBg_BgState_o *v27; // x8
  unsigned int v28; // w25
  Il2CppObject *value; // x23
  Il2CppObject *key; // x24
  __int64 v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x0
  __int64 v47; // x1
  _DWORD *v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  _DWORD *v57; // x0
  __int64 v59; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_5973F9A & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_2213A60(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__);
    sub_2213A60(&BattlePerformanceBg_SaveData_TypeInfo);
    byte_5973F9A = 1;
  }
  memset(&v61, 0, sizeof(v61));
  BattlePerformanceBg__saveHistoryBgState(this, 0, v2);
  v4 = sub_2213CCC(BattlePerformanceBg_SaveData_TypeInfo);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v4, v5);
  nowBgState = this->fields.nowBgState;
  if ( nowBgState )
  {
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)nowBgState->fields.compDictionary;
    if ( !compDictionary )
      goto LABEL_26;
    compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                                  compDictionary,
                                                                                  (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    if ( (int)compDictionary >= 1 )
    {
      v15 = this->fields.nowBgState;
      if ( !v15 )
        goto LABEL_26;
      if ( !v4 )
        goto LABEL_26;
      bgName = v15->fields.bgName;
      *(_QWORD *)(v4 + 16) = bgName;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)bgName, v9, v10, v11, v12, v13, v14);
      v17 = this->fields.nowBgState;
      if ( !v17 )
        goto LABEL_26;
      compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v17->fields.compDictionary;
      if ( !compDictionary
        || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                      compDictionary,
                      (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__),
            v19 = sub_2213B20(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count),
            *(_QWORD *)(v4 + 24) = v19,
            v20 = (_DWORD **)(v4 + 24),
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), v19, v21, v22, v23, v24, v25, v26),
            (v27 = this->fields.nowBgState) == 0)
        || (compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v27->fields.compDictionary) == 0 )
      {
LABEL_26:
        sub_2213CDC(compDictionary, v7);
      }
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v60,
        compDictionary,
        (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
      v61 = v60;
      v28 = 0;
      v60.fields._dictionary = 0;
      *(_QWORD *)&v60.fields._version = &v61;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v61,
                (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
      {
        key = v61.fields._current.fields.key;
        value = v61.fields._current.fields.value;
        v31 = sub_2213CCC(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v31, 0);
        if ( !v31 )
          sub_2213CDC(v32, v33);
        *(_QWORD *)(v31 + 16) = key;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 16), (int32_t)key, v34, v35, v36, v37, v38, v39);
        *(_QWORD *)(v31 + 24) = value;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 24), (int32_t)value, v40, v41, v42, v43, v44, v45);
        v48 = *v20;
        if ( !*v20 )
          sub_2213CDC(v46, v47);
        v49 = sub_2213BB4(v31, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
        if ( !v49 )
        {
          v59 = sub_2213D00(0, v50);
          sub_2213BA0(v59, 0);
        }
        if ( v28 >= v48[6] )
          sub_2213CE4(v49);
        v57 = &v48[2 * v28];
        *((_QWORD *)v57 + 4) = v31;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v57 + 8), v31, v51, v52, v53, v54, v55, v56);
        ++v28;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v61,
        (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    }
  }
  if ( !v4 )
    goto LABEL_26;
  *(_QWORD *)(v4 + 32) = *(_QWORD *)&this->fields.loadbgno;
  return (BattlePerformanceBg_SaveData_o *)v4;
}


BgResourceData_o *BattlePerformanceBg__get_BgResource(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BgResourceData_o *cachedBgResource; // x21
  int32_t loadbgno; // w22
  int32_t loadbgType; // w23
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5973F99 & 1) == 0 )
  {
    sub_2213A60(&BgResourceData_TypeInfo);
    byte_5973F99 = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    loadbgno = this->fields.loadbgno;
    loadbgType = this->fields.loadbgType;
    cachedBgResource = (BgResourceData_o *)sub_2213CCC(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, loadbgno, loadbgType, 0);
    this->fields.cachedBgResource = cachedBgResource;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cachedBgResource,
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  AssetLoader_LoadEndDataHandler_o *v17; // x21
  __int64 v18; // x1

  if ( (byte_5973FA1 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceBg_endloadBg__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_5973FA1 = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_8;
  BattlePerformanceBg__InitLoadBgInfo(this, no, tp, method);
  BgResource = BattlePerformanceBg__get_BgResource(this, v7);
  if ( !BgResource )
    sub_2213CDC(0, v9);
  AssetPath = BgResourceData__get_AssetPath(BgResource, 0);
  this->fields.initLoadedBgPath = AssetPath;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.initLoadedBgPath,
    (int32_t)AssetPath,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18);
  if ( !AssetManager__loadAssetStorage(AssetPath, v17, 1, 0, 0) )
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
    goto LABEL_10;
  max_length = BattleBgComponents->max_length;
  v11 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_2213CE4(BattleBgComponents);
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
LABEL_10:
    sub_2213CDC(BattleBgComponents, v9);
  }
}


void BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5973FB3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23896/*"playerfield"*/);
    sub_2213A60(&StringLiteral_3243/*"BattleIn"*/);
    byte_5973FB3 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_23896/*"playerfield"*/,
    (System_String_o *)StringLiteral_3243/*"BattleIn"*/,
    0.0,
    v2);
}


void BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5973FB2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3245/*"BattleOut"*/);
    sub_2213A60(&StringLiteral_23896/*"playerfield"*/);
    byte_5973FB2 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_23896/*"playerfield"*/,
    (System_String_o *)StringLiteral_3245/*"BattleOut"*/,
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
    goto LABEL_10;
  max_length = BattleBgComponents->max_length;
  v6 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_2213CE4(BattleBgComponents);
      BattleBgComponents = (BattleBgComponent_array *)v6->m_Items[v7];
      if ( !BattleBgComponents )
        break;
      if ( LOBYTE(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__playLoadEndAnimation((BattleBgComponent_o *)BattleBgComponents, 0);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_10:
    sub_2213CDC(BattleBgComponents, v4);
  }
}


void BattlePerformanceBg__reloadBg(
        BattlePerformanceBg_o *this,
        int32_t *outNo,
        int32_t *outType,
        const MethodInfo *method)
{
  int32_t loadbgType; // w8

  *outNo = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  *outType = loadbgType;
  BattlePerformanceBg__loadBg(this, this->fields.loadbgno, loadbgType, method);
}


BattlePerformanceBg_BgState_o *BattlePerformanceBg__saveHistoryBgState(
        BattlePerformanceBg_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgobject; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  const MethodInfo *v11; // x2
  struct BattlePerformanceBg_BgState_o *v12; // x8
  struct BattlePerformanceBg_BgState_o *v13; // x8
  struct BattlePerformanceBg_BgState_o *v14; // x2
  __int64 v16; // x21
  const MethodInfo *v17; // x2

  if ( (byte_5973FB0 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceBg_BgState_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973FB0 = 1;
  }
  if ( this->fields.nowBgState )
  {
    bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, inName);
    if ( UnityEngine_Object__op_Inequality(bgobject, 0, 0) )
      goto LABEL_10;
    frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(frontobject, 0, 0) )
    {
LABEL_10:
      nowBgState = this->fields.nowBgState;
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v7);
      if ( !nowBgState )
        goto LABEL_30;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, v11);
      v12 = this->fields.nowBgState;
      if ( !v12 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                        (Il2CppObject *)v12->fields.bgName,
                                                        (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v13 = this->fields.nowBgState;
        if ( !v13 )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_30;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_object__object___Remove(
                                                          (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                          (Il2CppObject *)v13->fields.bgName,
                                                          (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v14 = this->fields.nowBgState;
      if ( !v14 )
        goto LABEL_30;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
        (Il2CppObject *)v14->fields.bgName,
        (Il2CppObject *)v14,
        (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
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
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
    if ( BattleBgComponents )
      return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
                                                (Il2CppObject *)inName,
                                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
LABEL_30:
    sub_2213CDC(BattleBgComponents, inName);
  }
  v16 = sub_2213CCC(BattlePerformanceBg_BgState_TypeInfo);
  BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v16, inName, v17);
  if ( !v16 )
    goto LABEL_30;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)BattleBgComponents,
    *(Il2CppObject **)(v16 + 16),
    (Il2CppObject *)v16,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
  return (BattlePerformanceBg_BgState_o *)v16;
}


void BattlePerformanceBg__setCutNodeNoble(BattlePerformanceBg_o *this, bool flg, const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x1
  int max_length; // w8
  BattleBgComponent_array *v7; // x20
  unsigned int v8; // w21

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 1, method);
  if ( !BattleBgComponents )
    goto LABEL_10;
  max_length = BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_2213CE4(BattleBgComponents);
      BattleBgComponents = (BattleBgComponent_array *)v7->m_Items[v8];
      if ( !BattleBgComponents )
        break;
      if ( BYTE1(BattleBgComponents->m_Items[2]) )
        BattleBgComponent__setCutNodeNoble((BattleBgComponent_o *)BattleBgComponents, flg, 0);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_10:
    sub_2213CDC(BattleBgComponents, v5);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v20; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x23
  BattlePerformanceBg_SaveData_CompSaveData_o *v23; // x28
  struct BattlePerformanceBg_BgState_o *v24; // x8
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  const MethodInfo *v26; // x3

  if ( (byte_5973F9B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__set_Item__);
    byte_5973F9B = 1;
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
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.nowBgState,
          (int32_t)v9,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        v20 = saveData->fields.compSaveDataList;
        if ( !v20 )
          goto LABEL_26;
        max_length = v20->max_length;
        if ( (int)max_length >= 1 )
        {
          v22 = 0;
          do
          {
            if ( v22 >= (unsigned int)max_length )
              sub_2213CE4(compDictionary);
            v23 = v20->m_Items[v22];
            v24 = *p_nowBgState;
            if ( isForceOverWriteBgState )
            {
              if ( !v24 )
                goto LABEL_26;
              if ( !v23 )
                goto LABEL_26;
              compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v24->fields.compDictionary;
              if ( !compDictionary )
                goto LABEL_26;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                compDictionary,
                (Il2CppObject *)v23->fields.bgCompName,
                (Il2CppObject *)v23->fields.bgCompData,
                (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__set_Item__);
            }
            else
            {
              if ( !v24 )
                goto LABEL_26;
              if ( !v23 )
                goto LABEL_26;
              compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v24->fields.compDictionary;
              if ( !compDictionary )
                goto LABEL_26;
              compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                            compDictionary,
                                                                                            (Il2CppObject *)v23->fields.bgCompName,
                                                                                            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
              if ( ((unsigned __int8)compDictionary & 1) == 0 )
              {
                if ( !*p_nowBgState )
                  goto LABEL_26;
                compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)(*p_nowBgState)->fields.compDictionary;
                if ( !compDictionary )
                  goto LABEL_26;
                System_Collections_Generic_Dictionary_object__object___Add(
                  compDictionary,
                  (Il2CppObject *)v23->fields.bgCompName,
                  (Il2CppObject *)v23->fields.bgCompData,
                  (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
              }
            }
            LODWORD(max_length) = v20->max_length;
          }
          while ( (__int64)++v22 < (int)max_length );
        }
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)BattlePerformanceBg__getBattleBgComponents(
                                                                                      this,
                                                                                      0,
                                                                                      v19);
        if ( !nowBgState )
LABEL_26:
          sub_2213CDC(compDictionary, v18);
        BattlePerformanceBg_BgState__loadSaveData(
          nowBgState,
          (BattleBgComponent_array *)compDictionary,
          this->fields.actionCamera,
          v26);
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
  float v16; // s11
  float v17; // s12
  float v18; // s13
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.callback = callback;
  this->fields.bgNo = No;
  this->fields.tp = tp;
  this->fields.pos.fields.x = v18;
  this->fields.pos.fields.y = v17;
  this->fields.pos.fields.z = v16;
  this->fields.rot.fields.x = x;
  this->fields.rot.fields.y = y;
  this->fields.rot.fields.z = z;
  this->fields.changeDirect = changeDirect;
  this->fields.parentCamera = parentCamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callback,
    (int32_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5973FB8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
    byte_5973FB8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.bgName = inName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)inName, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  this->fields.compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.compDictionary,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattlePerformanceBg_BgState_o *v10; // x21
  int max_length; // w8
  unsigned int v12; // w26
  BattleBgComponent_o *v13; // x22
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_object__object__o *v15; // x23
  Il2CppObject *Item; // x0

  v10 = this;
  if ( (byte_5973FBA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    this = (BattlePerformanceBg_BgState_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
    byte_5973FBA = 1;
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
        sub_2213CE4(this);
      v13 = list->m_Items[v12];
      if ( !v13 )
        break;
      v13->fields.actionCamera = actionCamera;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v13->fields.actionCamera,
        (int32_t)actionCamera,
        (System_String_o *)actionCamera,
        (System_String_o *)method,
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
                                                  (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v15 = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v13, 0);
          if ( !v15 )
            break;
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v15,
                   (Il2CppObject *)this,
                   (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v13, (BattleBgComponent_SaveData_o *)Item, 0);
        }
      }
      max_length = list->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_15:
    sub_2213CDC(this, list);
  }
}


void BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *compDictionary; // x0
  int max_length; // w8
  unsigned int v7; // w25
  BattleBgComponent_o *v8; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v9; // x21
  Il2CppObject *name; // x23

  if ( (byte_5973FB9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
    byte_5973FB9 = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_object__object___Clear(
    compDictionary,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_2213CE4(compDictionary);
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
          (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_14:
    sub_2213CDC(compDictionary, list);
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
  struct System_String_o **v3; // x8
  struct System_String_o *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5973FBB & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    byte_5973FBB = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = *(struct System_String_o ***)(qword_5984390 + 184);
  v4 = *v3;
  this->fields.bgName = *v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_2213B20(
                                                                    BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                    0);
  this->fields.compSaveDataList = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.compSaveDataList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, 0);
  return BattleBgComponent__checkKey(x, this->fields.key, 0);
}