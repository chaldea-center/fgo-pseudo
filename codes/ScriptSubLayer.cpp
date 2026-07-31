void ScriptSubLayer___ctor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593A75C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ScriptCharaData__TypeInfo);
    byte_593A75C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  this->fields.listCharaData = (struct System_Collections_Generic_List_ScriptCharaData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listCharaData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  *(_QWORD *)&this->fields.shakeParam.fields.time = 0;
  *(_QWORD *)&this->fields.shakeParam.fields.x = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void ScriptSubLayer__Awake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  ScriptSubLayer__Init(this, method);
}


void ScriptSubLayer__CreateEffectController(ScriptSubLayer_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer_o *meshRender; // x0
  UnityEngine_Material_o *material; // x20
  ScriptActionRenderEffectController_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593A758 & 1) == 0 )
  {
    sub_21FFC50(&ScriptActionRenderEffectController_TypeInfo);
    byte_593A758 = 1;
  }
  meshRender = this->fields.meshRender;
  if ( !meshRender )
    sub_21FFECC(0, method);
  material = ExUIMeshRenderer__get_material(meshRender, 0);
  v5 = (ScriptActionRenderEffectController_o *)sub_21FFEBC(ScriptActionRenderEffectController_TypeInfo);
  ScriptActionRenderEffectController___ctor(v5, material, 0);
  this->fields._effectController_k__BackingField = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._effectController_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void ScriptSubLayer__CreateRenderTexture(ScriptSubLayer_o *this, const MethodInfo *method)
{
  struct UnityEngine_RenderTexture_o *Temporary_83129020; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UnityEngine_Object_o *renderTexture_k__BackingField; // x0

  if ( (byte_593A757 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_14211/*"TempRenderTexture"*/);
    byte_593A757 = 1;
  }
  Temporary_83129020 = UnityEngine_RenderTexture__GetTemporary_83129020(1024, 1024, 0, 0, 0);
  this->fields._renderTexture_k__BackingField = Temporary_83129020;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)Temporary_83129020,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !renderTexture_k__BackingField
    || (UnityEngine_Object__set_name(renderTexture_k__BackingField, (System_String_o *)StringLiteral_14211/*"TempRenderTexture"*/, 0),
        (renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields.meshRender) == 0) )
  {
    sub_21FFECC(renderTexture_k__BackingField, v10);
  }
  ExUIMeshRenderer__SetImage(
    (ExUIMeshRenderer_o *)renderTexture_k__BackingField,
    (UnityEngine_Texture_o *)this->fields._renderTexture_k__BackingField,
    0);
}


void ScriptSubLayer__EndExecuteStretch(ScriptSubLayer_o *this, const MethodInfo *method)
{
  this->fields._IsExecuteStretch_k__BackingField = 0;
}


void ScriptSubLayer__Init(ScriptSubLayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *renderTexture_k__BackingField; // x21
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  ExUIMeshRenderer_o *meshRender; // x0
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x8
  System_String_o *size; // x2
  int v32; // w9
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1

  if ( (byte_593A756 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData__Clear__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A756 = 1;
  }
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(renderTexture_k__BackingField, 0, 0) )
  {
    meshRender = this->fields.meshRender;
    if ( !meshRender )
      goto LABEL_13;
    ExUIMeshRenderer__ClearImage(meshRender, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(this->fields._renderTexture_k__BackingField, 0);
  }
  v12 = (int)StringLiteral_1/*""*/;
  this->fields._layerKey_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._layerKey_k__BackingField, v12, v5, v6, v7, v8, v9, v10);
  this->fields._isRendering_k__BackingField = 0;
  this->fields._renderTexture_k__BackingField = 0;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.b = 0;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.r = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._renderTexture_k__BackingField,
    0,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._effectController_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._effectController_k__BackingField,
    0,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_13;
  size = (System_String_o *)(unsigned int)listCharaData->fields._size;
  v32 = listCharaData->fields._version + 1;
  listCharaData->fields._size = 0;
  listCharaData->fields._version = v32;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)listCharaData->fields._items, 0, (int32_t)size, 0);
  this->fields.subLayerMask = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.subLayerMask, 0, size, v25, v26, v27, v28, v29);
  meshRender = (ExUIMeshRenderer_o *)this->fields.renderRoot;
  if ( !meshRender )
LABEL_13:
    sub_21FFECC(meshRender, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)meshRender, 0, 0);
  ScriptSubLayer__SetDepth(this, 1.0, v33);
  ScriptSubLayer__SetEdgeMaskSubMaterial(this, 0, 0, v34);
  ScriptSubLayer__ResetShake(this, v35);
}


// local variable allocation has failed, the output may be wrong!
void ScriptSubLayer__MoveAlphaCharaData(
        ScriptSubLayer_o *this,
        float duration,
        float alpha,
        bool isHideSkip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *v12; // x21
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_593A752 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A752 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  memset(&v13, 0, sizeof(v13));
  if ( !listCharaData )
    sub_21FFECC(0, isHideSkip);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    listCharaData,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v13.fields._current;
    if ( v13.fields._current )
    {
      v12 = *(UnityEngine_Object_o **)((char *)&v13.fields._current->klass + (unsigned __int64)&dword_30);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( !UnityEngine_Object__op_Equality(v12, 0, 0)
        && (!isHideSkip || ScriptCharaData__IsDispCharacter((ScriptCharaData_o *)current, 0)) )
      {
        ScriptCharaData__MoveAlpha((ScriptCharaData_o *)current, duration, alpha, 1, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__OnShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *shakeRoot; // x0
  UnityEngine_Transform_o *transform; // x20
  float v6; // s8
  float v7; // s0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A75B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10351/*"OnShake"*/);
    byte_593A75B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0, 0) )
  {
    if ( this->fields.shakeParam.fields.cycle <= 0.0
      || this->fields.shakeParam.fields.time > 0.0
      && UnityEngine_Time__get_time(0) >= this->fields.shakeParam.fields.time )
    {
      ScriptSubLayer__ResetShake(this, v3);
    }
    else
    {
      shakeRoot = this->fields.shakeRoot;
      if ( !shakeRoot
        || (transform = UnityEngine_GameObject__get_transform(shakeRoot, 0),
            v6 = UnityEngine_Random__Range(-this->fields.shakeParam.fields.x, this->fields.shakeParam.fields.x, 0),
            v7 = UnityEngine_Random__Range(-this->fields.shakeParam.fields.y, this->fields.shakeParam.fields.y, 0),
            !transform) )
      {
        sub_21FFECC(shakeRoot, v3);
      }
      v8.fields.y = v7;
      v8.fields.z = 0.0;
      v8.fields.x = v6;
      UnityEngine_Transform__set_localPosition(transform, v8, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10351/*"OnShake"*/,
        this->fields.shakeParam.fields.cycle,
        0);
    }
  }
}


void ScriptSubLayer__RegistCharaData(ScriptSubLayer_o *this, ScriptCharaData_o *charaData, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *listCharaData; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_593A74F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData__Add__);
    sub_21FFC50(&StringLiteral_13142/*"ScriptRenderSub"*/);
    byte_593A74F = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_10;
  items = listCharaData->fields._items;
  v12 = Method_System_Collections_Generic_List_ScriptCharaData__Add__;
  ++listCharaData->fields._version;
  if ( !items )
    goto LABEL_10;
  size = listCharaData->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listCharaData,
      (Il2CppObject *)charaData,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    listCharaData->fields._size = size + 1;
    v14[4] = (Il2CppClass *)charaData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)charaData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  listCharaData = (System_Collections_Generic_List_object__o *)UnityEngine_LayerMask__NameToLayer(
                                                                 (System_String_o *)StringLiteral_13142/*"ScriptRenderSub"*/,
                                                                 0);
  if ( !charaData )
LABEL_10:
    sub_21FFECC(listCharaData, charaData);
  ScriptCharaData__SetLayer(charaData, (int32_t)listCharaData, 0);
}


void ScriptSubLayer__RemoveCharaData(ScriptSubLayer_o *this, ScriptCharaData_o *charaData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0

  if ( (byte_593A74E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
    byte_593A74E = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_21FFECC(0, charaData);
  System_Collections_Generic_List_object___Remove(
    listCharaData,
    (Il2CppObject *)charaData,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
}


void ScriptSubLayer__RemoveInvalidCharaData(ScriptSubLayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *listCharaData; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_593A750 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ScriptCharaData__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A750 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    listCharaData,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v23.fields._current;
    if ( v23.fields._current )
    {
      klass = v23.fields._current[3].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0);
      if ( v9 )
      {
        if ( !v3
          || (items = v3->fields._items,
              v18 = Method_System_Collections_Generic_List_ScriptCharaData__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(v9, v10);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            current,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v20[4] = (Il2CppClass *)current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)current, v11, v12, v13, v14, v15, v16);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
  if ( !v3 )
LABEL_21:
    sub_21FFECC(listCharaData, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v3,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
    ScriptSubLayer__RemoveCharaData(this, (ScriptCharaData_o *)v23.fields._current, v21);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__ResetShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *shakeRoot; // x0
  UnityEngine_Transform_o *v5; // x20

  if ( (byte_593A75A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10351/*"OnShake"*/);
    byte_593A75A = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10351/*"OnShake"*/,
    0);
  shakeRoot = this->fields.shakeRoot;
  if ( !shakeRoot )
    goto LABEL_8;
  shakeRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(shakeRoot, 0);
  v5 = (UnityEngine_Transform_o *)shakeRoot;
  if ( !byte_5931940 )
  {
    shakeRoot = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v5 )
LABEL_8:
    sub_21FFECC(shakeRoot, v3);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  *(_QWORD *)&this->fields.shakeParam.fields.time = 0;
  *(_QWORD *)&this->fields.shakeParam.fields.x = 0;
}


void ScriptSubLayer__SetBackgroundColor(ScriptSubLayer_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  this->fields._backgroundColor_k__BackingField = color;
}


void ScriptSubLayer__SetDepth(ScriptSubLayer_o *this, float depth, const MethodInfo *method)
{
  UnityEngine_Component_o *meshRender; // x0
  float x; // s9
  float y; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  meshRender = (UnityEngine_Component_o *)this->fields.meshRender;
  if ( !meshRender
    || (meshRender = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(meshRender, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)meshRender, 0),
        (meshRender = (UnityEngine_Component_o *)this->fields.meshRender) == 0)
    || (x = localPosition.fields.x,
        y = localPosition.fields.y,
        (meshRender = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(meshRender, 0)) == 0) )
  {
    sub_21FFECC(meshRender, method);
  }
  v9.fields.z = -depth;
  v9.fields.x = x;
  v9.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)meshRender, v9, 0);
}


void ScriptSubLayer__SetEdgeMaskSubMaterial(
        ScriptSubLayer_o *this,
        UnityEngine_Material_o *mat,
        System_Single_array *paramsFloat,
        const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_edgeMaskSubMaterial_k__BackingField; // x22
  UnityEngine_Object_o *edgeMaskSubMaterial_k__BackingField; // x23
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Object_o *v18; // x23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593A754 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A754 = 1;
  }
  p_edgeMaskSubMaterial_k__BackingField = &this->fields._edgeMaskSubMaterial_k__BackingField;
  edgeMaskSubMaterial_k__BackingField = (UnityEngine_Object_o *)this->fields._edgeMaskSubMaterial_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mat);
  if ( !UnityEngine_Object__op_Equality(edgeMaskSubMaterial_k__BackingField, (UnityEngine_Object_o *)mat, 0) )
  {
    v10 = (UnityEngine_Object_o *)*p_edgeMaskSubMaterial_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
      v18 = (UnityEngine_Object_o *)*p_edgeMaskSubMaterial_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__Destroy_83246496(v18, 0);
    }
    this->fields._edgeMaskSubMaterial_k__BackingField = mat;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._edgeMaskSubMaterial_k__BackingField,
      (int32_t)mat,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields._edgeMaskSubMaterialParams_k__BackingField = paramsFloat;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._edgeMaskSubMaterialParams_k__BackingField,
      (int32_t)paramsFloat,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
}


void ScriptSubLayer__SetFilterCharaData(ScriptSubLayer_o *this, System_String_o *filterName, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *v8; // x21
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593A753 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A753 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  memset(&v9, 0, sizeof(v9));
  if ( !listCharaData )
    sub_21FFECC(0, filterName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    listCharaData,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v9.fields._current;
    if ( v9.fields._current )
    {
      v8 = *(UnityEngine_Object_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&dword_30);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
      {
        v10.fields.r = 1.0;
        v10.fields.g = 1.0;
        v10.fields.b = 1.0;
        v10.fields.a = 1.0;
        ScriptCharaData__SetFilter((ScriptCharaData_o *)current, filterName, v10, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ScriptSubLayer__SetLayer(ScriptSubLayer_o *this, int32_t layer, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *v8; // x21
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593A759 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A759 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  memset(&v9, 0, sizeof(v9));
  if ( !listCharaData )
    sub_21FFECC(0, *(_QWORD *)&layer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    listCharaData,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v9.fields._current;
    if ( v9.fields._current )
    {
      v8 = *(UnityEngine_Object_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&dword_30);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
        ScriptCharaData__SetLayer((ScriptCharaData_o *)current, layer, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__SetLayerActive(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  const MethodInfo *v4; // x2

  if ( (byte_593A751 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13142/*"ScriptRenderSub"*/);
    byte_593A751 = 1;
  }
  v3 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_13142/*"ScriptRenderSub"*/, 0);
  ScriptSubLayer__SetLayer(this, v3, v4);
}


void ScriptSubLayer__SetLayerKey(ScriptSubLayer_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._layerKey_k__BackingField = key;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._layerKey_k__BackingField,
    (int32_t)key,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptSubLayer__SetMaskLayer(ScriptSubLayer_o *this, ScriptSubLayer_o *maskLayer, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.subLayerMask = maskLayer;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.subLayerMask,
    (int32_t)maskLayer,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ScriptSubLayer__SetRendering(ScriptSubLayer_o *this, bool rendering, const MethodInfo *method)
{
  bool v4; // w23
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *subLayerMask; // x21
  _BOOL8 v7; // x0

  v4 = rendering;
  while ( 1 )
  {
    if ( (byte_593A74D & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593A74D = 1;
    }
    v5 = UnityEngine_Object_TypeInfo;
    subLayerMask = (UnityEngine_Object_o *)this->fields.subLayerMask;
    this->fields._isRendering_k__BackingField = v4;
    if ( !*(&v5->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v5, rendering);
    v7 = UnityEngine_Object__op_Inequality(subLayerMask, 0, 0);
    if ( !v7 )
      break;
    this = this->fields.subLayerMask;
    if ( !this )
      sub_21FFECC(v7, rendering);
  }
}


void ScriptSubLayer__SetStretchObj(
        ScriptSubLayer_o *this,
        UnityEngine_GameObject_o *stretchObj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *subStretchBase; // x0
  UnityEngine_Transform_o *v6; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
  if ( !subStretchBase )
    goto LABEL_9;
  subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0);
  if ( !stretchObj )
    goto LABEL_9;
  v6 = (UnityEngine_Transform_o *)subStretchBase;
  subStretchBase = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(stretchObj, 0);
  if ( !subStretchBase
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)subStretchBase, 0), !v6)
    || (UnityEngine_Transform__set_localPosition(v6, localPosition, 0),
        (subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase) == 0)
    || (transform = UnityEngine_Component__get_transform(subStretchBase, 0),
        (subStretchBase = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(stretchObj, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)subStretchBase, 0), !transform) )
  {
LABEL_9:
    sub_21FFECC(subStretchBase, stretchObj);
  }
  UnityEngine_Transform__set_localScale(transform, localScale, 0);
}


void ScriptSubLayer__Shake(
        ScriptSubLayer_o *this,
        float duration,
        float cycle,
        float x,
        float y,
        const MethodInfo *method)
{
  float v11; // s0

  v11 = 0.0;
  if ( duration > 0.0 )
    v11 = UnityEngine_Time__get_time(0) + duration;
  this->fields.shakeParam.fields.time = v11;
  this->fields.shakeParam.fields.cycle = cycle;
  this->fields.shakeParam.fields.x = x;
  this->fields.shakeParam.fields.y = y;
  ScriptSubLayer__OnShake(this, method);
}


// attributes: thunk
void ScriptSubLayer__ShakeStop(ScriptSubLayer_o *this, const MethodInfo *method)
{
  ScriptSubLayer__ResetShake(this, method);
}


void ScriptSubLayer__StartSubLayer(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  ScriptSubLayer__Init(this, method);
  ScriptSubLayer__CreateRenderTexture(this, v3);
  ScriptSubLayer__CreateEffectController(this, v4);
}


void ScriptSubLayer__StartSubStretch(
        ScriptSubLayer_o *this,
        System_String_o *name,
        bool isIn,
        float duration,
        float scale,
        UnityEngine_Vector2_o stretchBaseRange,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v15; // s14
  float v16; // s15
  float z; // s13
  float v18; // s11
  UnityEngine_Component_o *subStretchBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  TweenScale_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  uint32_t v37; // w0
  float v38; // s0
  float v39; // s0
  float v40; // [xsp+8h] [xbp-78h]
  float v41; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v45; // 0:s1.4,4:s2.4,8:s3.4

  y = stretchBaseRange.fields.y;
  x = stretchBaseRange.fields.x;
  if ( (byte_593A755 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_20919/*"horizontally"*/);
    sub_21FFC50(&StringLiteral_6240/*"EndExecuteStretch"*/);
    sub_21FFC50(&StringLiteral_20920/*"horizontallyLeft"*/);
    sub_21FFC50(&StringLiteral_20597/*"full"*/);
    sub_21FFC50(&StringLiteral_25987/*"verticalUp"*/);
    sub_21FFC50(&StringLiteral_25982/*"verticalDown"*/);
    sub_21FFC50(&StringLiteral_25977/*"vertical"*/);
    sub_21FFC50(&StringLiteral_20921/*"horizontallyRight"*/);
    byte_593A755 = 1;
  }
  if ( !this->fields._IsExecuteStretch_k__BackingField )
  {
    if ( !byte_5931945 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v15 = static_fields->oneVector.fields.x;
    v16 = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    }
    v18 = static_fields->zeroVector.fields.z;
    v40 = static_fields->zeroVector.fields.x;
    v41 = static_fields->zeroVector.fields.y;
    if ( isIn )
    {
LABEL_10:
      subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
      if ( duration <= 0.0 )
      {
        if ( subStretchBase )
        {
          subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0);
          if ( subStretchBase )
          {
            v42.fields.x = v15;
            v42.fields.y = v16;
            v42.fields.z = z;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)subStretchBase, v42, 0);
            subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
            if ( subStretchBase )
            {
              subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0);
              if ( subStretchBase )
              {
                v43.fields.x = v40;
                v43.fields.y = v41;
                v43.fields.z = v18;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)subStretchBase, v43, 0);
                return;
              }
            }
          }
        }
      }
      else if ( subStretchBase )
      {
        gameObject = UnityEngine_Component__get_gameObject(subStretchBase, 0);
        v44.fields.x = v15;
        v44.fields.y = v16;
        v44.fields.z = z;
        v22 = TweenScale__Begin(gameObject, duration, v44, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v22, 0, 0) )
          return;
        subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
        if ( subStretchBase )
        {
          v23 = UnityEngine_Component__get_gameObject(subStretchBase, 0);
          v45.fields.z = v18;
          v45.fields.x = v40;
          v45.fields.y = v41;
          TweenPosition__Begin(v23, duration, v45, 0);
          subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
          if ( v22 )
          {
            v22->fields.eventReceiver = (struct UnityEngine_GameObject_o *)subStretchBase;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v22->fields.eventReceiver,
              (int32_t)subStretchBase,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            v30 = StringLiteral_6240/*"EndExecuteStretch"*/;
            v22->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6240/*"EndExecuteStretch"*/;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v22->fields.callWhenFinished,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
            this->fields._IsExecuteStretch_k__BackingField = 1;
            return;
          }
        }
      }
      sub_21FFECC(subStretchBase, name);
    }
    v37 = PrivateImplementationDetails___ComputeStringHash(name, 0);
    if ( v37 > 0x70027A90 )
    {
      if ( v37 > 0x8EBB41AE )
      {
        if ( v37 == -454329761 )
        {
          if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_20920/*"horizontallyLeft"*/, 0) )
            goto LABEL_10;
          v38 = x * scale;
LABEL_48:
          v40 = v38;
          v18 = 0.0;
          v41 = 0.0;
LABEL_49:
          v15 = scale;
          v16 = 1.0;
          z = 1.0;
          goto LABEL_10;
        }
        if ( v37 != -8801476 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_20597/*"full"*/, 0) )
          goto LABEL_10;
        z = 1.0;
        v15 = scale;
LABEL_45:
        v16 = scale;
        goto LABEL_10;
      }
      if ( v37 == -2027301573 )
      {
        if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_25977/*"vertical"*/, 0) )
          goto LABEL_10;
        goto LABEL_44;
      }
      if ( v37 != -1900330578 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_25987/*"verticalUp"*/, 0) )
        goto LABEL_10;
      v39 = y * scale;
    }
    else
    {
      if ( v37 == 264610898 )
      {
        if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_20919/*"horizontally"*/, 0) )
          goto LABEL_10;
        goto LABEL_49;
      }
      if ( v37 != 690205847 )
      {
        if ( v37 != 1879210640 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_20921/*"horizontallyRight"*/, 0) )
          goto LABEL_10;
        v38 = -(float)(x * scale);
        goto LABEL_48;
      }
      if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_25982/*"verticalDown"*/, 0) )
        goto LABEL_10;
      v39 = -(float)(y * scale);
    }
    v41 = v39;
    v18 = 0.0;
    v40 = 0.0;
LABEL_44:
    v15 = 1.0;
    z = 1.0;
    goto LABEL_45;
  }
}


void ScriptSubLayer__SwapLayer(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptSubLayer__SetLayer(this, -1, v2);
}


void ScriptSubLayer__Update(ScriptSubLayer_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  ScriptActionRenderEffectController_o *effectController_k__BackingField; // x0

  deltaTime = RealTime__get_deltaTime(0);
  effectController_k__BackingField = this->fields._effectController_k__BackingField;
  if ( effectController_k__BackingField )
    ScriptActionRenderEffectController__Update(effectController_k__BackingField, deltaTime, 0);
}


bool ScriptSubLayer__get_IsExecuteStretch(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._IsExecuteStretch_k__BackingField;
}


System_Collections_Generic_IReadOnlyList_ScriptCharaData__o *ScriptSubLayer__get_ListCharaData(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyList_ScriptCharaData__o *)this->fields.listCharaData;
}


ScriptSubLayer_o *ScriptSubLayer__get_SubLayerMask(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.subLayerMask;
}


UnityEngine_GameObject_o *ScriptSubLayer__get_SubStretchBase(ScriptSubLayer_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *subStretchBase; // x0

  subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
  if ( !subStretchBase )
    sub_21FFECC(0, method);
  return UnityEngine_Component__get_gameObject(subStretchBase, 0);
}


UnityEngine_Color_o ScriptSubLayer__get_backgroundColor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._backgroundColor_k__BackingField.fields.r;
  g = this->fields._backgroundColor_k__BackingField.fields.g;
  b = this->fields._backgroundColor_k__BackingField.fields.b;
  a = this->fields._backgroundColor_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_GameObject_o *ScriptSubLayer__get_cameraPosition(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.positionCamera;
}


UnityEngine_GameObject_o *ScriptSubLayer__get_cameraRoll1(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.rollCamera1;
}


UnityEngine_GameObject_o *ScriptSubLayer__get_cameraRoll2(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.rollCamera2;
}


UnityEngine_GameObject_o *ScriptSubLayer__get_cameraScale(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.scaleCamera;
}


UnityEngine_Material_o *ScriptSubLayer__get_edgeMaskSubMaterial(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._edgeMaskSubMaterial_k__BackingField;
}


System_Single_array *ScriptSubLayer__get_edgeMaskSubMaterialParams(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._edgeMaskSubMaterialParams_k__BackingField;
}


ScriptActionRenderEffectController_o *ScriptSubLayer__get_effectController(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return this->fields._effectController_k__BackingField;
}


bool ScriptSubLayer__get_isRendering(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._isRendering_k__BackingField;
}


System_String_o *ScriptSubLayer__get_layerKey(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._layerKey_k__BackingField;
}


ExUIMeshRenderer_o *ScriptSubLayer__get_mesh(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.meshRender;
}


UnityEngine_RenderTexture_o *ScriptSubLayer__get_renderTexture(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._renderTexture_k__BackingField;
}


UnityEngine_GameObject_o *ScriptSubLayer__get_root(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.renderRoot;
}


void ScriptSubLayer__set_IsExecuteStretch(ScriptSubLayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExecuteStretch_k__BackingField = value;
}


void ScriptSubLayer__set_backgroundColor(ScriptSubLayer_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  this->fields._backgroundColor_k__BackingField = value;
}


void ScriptSubLayer__set_edgeMaskSubMaterial(
        ScriptSubLayer_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._edgeMaskSubMaterial_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._edgeMaskSubMaterial_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptSubLayer__set_edgeMaskSubMaterialParams(
        ScriptSubLayer_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._edgeMaskSubMaterialParams_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._edgeMaskSubMaterialParams_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptSubLayer__set_effectController(
        ScriptSubLayer_o *this,
        ScriptActionRenderEffectController_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._effectController_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._effectController_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptSubLayer__set_isRendering(ScriptSubLayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._isRendering_k__BackingField = value;
}


void ScriptSubLayer__set_layerKey(ScriptSubLayer_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._layerKey_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._layerKey_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptSubLayer__set_renderTexture(
        ScriptSubLayer_o *this,
        UnityEngine_RenderTexture_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._renderTexture_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptSubLayer_ShakeParam___ctor(
        ScriptSubLayer_ShakeParam_o this,
        float shakeTime,
        float shakeCycle,
        float shakeX,
        float shakeY,
        const MethodInfo *method)
{
  *(float *)&method->methodPointer = this.fields.time;
  HIDWORD(method->methodPointer) = LODWORD(this.fields.cycle);
  *(float *)&method->virtualMethodPointer = this.fields.x;
  HIDWORD(method->virtualMethodPointer) = LODWORD(this.fields.y);
}


void ScriptSubLayer_ShakeParam__Reset(ScriptSubLayer_ShakeParam_o this, const MethodInfo *method)
{
  method->methodPointer = 0;
  method->virtualMethodPointer = 0;
}