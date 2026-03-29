void ScriptSubLayer___ctor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D32A40 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ScriptCharaData__TypeInfo);
    byte_4D32A40 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  this->fields.listCharaData = (struct System_Collections_Generic_List_ScriptCharaData__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.listCharaData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D32A3C & 1) == 0 )
  {
    sub_1C93AD4(&ScriptActionRenderEffectController_TypeInfo);
    byte_4D32A3C = 1;
  }
  meshRender = this->fields.meshRender;
  if ( !meshRender )
    sub_1C93D2C(0, method);
  material = ExUIMeshRenderer__get_material(meshRender, 0);
  v5 = (ScriptActionRenderEffectController_o *)sub_1C93D20(ScriptActionRenderEffectController_TypeInfo);
  ScriptActionRenderEffectController___ctor(v5, material, 0);
  this->fields._effectController_k__BackingField = v5;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._effectController_k__BackingField,
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
  struct UnityEngine_RenderTexture_o *Temporary_72027580; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x1
  UnityEngine_Object_o *renderTexture_k__BackingField; // x0

  if ( (byte_4D32A3B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13774/*"TempRenderTexture"*/);
    byte_4D32A3B = 1;
  }
  Temporary_72027580 = UnityEngine_RenderTexture__GetTemporary_72027580(1024, 1024, 0, 0, 0);
  this->fields._renderTexture_k__BackingField = Temporary_72027580;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)Temporary_72027580,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !renderTexture_k__BackingField
    || (UnityEngine_Object__set_name(renderTexture_k__BackingField, (System_String_o *)StringLiteral_13774/*"TempRenderTexture"*/, 0),
        (renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields.meshRender) == 0) )
  {
    sub_1C93D2C(renderTexture_k__BackingField, v10);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  ExUIMeshRenderer_o *meshRender; // x0
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x8
  int32_t size; // w2
  int v32; // w9
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1

  if ( (byte_4D32A3A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData__Clear__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32A3A = 1;
  }
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderTexture_k__BackingField, 0, 0) )
  {
    meshRender = this->fields.meshRender;
    if ( !meshRender )
      goto LABEL_13;
    ExUIMeshRenderer__ClearImage(meshRender, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(this->fields._renderTexture_k__BackingField, 0);
  }
  v12 = StringLiteral_1/*""*/;
  this->fields._layerKey_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._layerKey_k__BackingField, v12, v5, v6, v7, v8, v9, v10);
  this->fields._isRendering_k__BackingField = 0;
  this->fields._renderTexture_k__BackingField = 0;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.b = 0;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.r = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._renderTexture_k__BackingField,
    0,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._effectController_k__BackingField = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._effectController_k__BackingField,
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
  size = listCharaData->fields._size;
  v32 = listCharaData->fields._version + 1;
  listCharaData->fields._size = 0;
  listCharaData->fields._version = v32;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)listCharaData->fields._items, 0, size, 0);
  this->fields.subLayerMask = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.subLayerMask, 0, size, v25, v26, v27, v28, v29);
  meshRender = (ExUIMeshRenderer_o *)this->fields.renderRoot;
  if ( !meshRender )
LABEL_13:
    sub_1C93D2C(meshRender, v4);
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
  Il2CppObject *current; // x20
  UnityEngine_Object_o *v11; // x21
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D32A36 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32A36 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1C93D2C(0, isHideSkip);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    listCharaData,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v12.fields._current;
    if ( v12.fields._current )
    {
      v11 = *(UnityEngine_Object_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&dword_30);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v11, 0, 0)
        && (!isHideSkip || ScriptCharaData__IsDispCharacter((ScriptCharaData_o *)current, 0)) )
      {
        ScriptCharaData__MoveAlpha((ScriptCharaData_o *)current, duration, alpha, 1, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__OnShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *shakeRoot; // x0
  UnityEngine_Transform_o *transform; // x20
  float v6; // s8
  float v7; // s0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D32A3F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_10017/*"OnShake"*/);
    byte_4D32A3F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1C93D2C(shakeRoot, v3);
      }
      v8.fields.y = v7;
      v8.fields.z = 0.0;
      v8.fields.x = v6;
      UnityEngine_Transform__set_localPosition(transform, v8, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10017/*"OnShake"*/,
        this->fields.shakeParam.fields.cycle,
        0);
    }
  }
}


void ScriptSubLayer__RegistCharaData(ScriptSubLayer_o *this, ScriptCharaData_o *charaData, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *listCharaData; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4D32A33 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData__Add__);
    sub_1C93AD4(&StringLiteral_12734/*"ScriptRenderSub"*/);
    byte_4D32A33 = 1;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    listCharaData->fields._size = size + 1;
    v14[4] = (Il2CppClass *)charaData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)charaData, (int32_t)method, v3, v4, v5, v6, v7);
  }
  listCharaData = (System_Collections_Generic_List_object__o *)UnityEngine_LayerMask__NameToLayer(
                                                                 (System_String_o *)StringLiteral_12734/*"ScriptRenderSub"*/,
                                                                 0);
  if ( !charaData )
LABEL_10:
    sub_1C93D2C(listCharaData, charaData);
  ScriptCharaData__SetLayer(charaData, (int32_t)listCharaData, 0);
}


void ScriptSubLayer__RemoveCharaData(ScriptSubLayer_o *this, ScriptCharaData_o *charaData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0

  if ( (byte_4D32A32 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
    byte_4D32A32 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1C93D2C(0, charaData);
  System_Collections_Generic_List_object___Remove(
    listCharaData,
    (Il2CppObject *)charaData,
    (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
}


void ScriptSubLayer__RemoveInvalidCharaData(ScriptSubLayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D32A34 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ScriptCharaData__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32A34 = 1;
  }
  memset(&i, 0, sizeof(i));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    listCharaData,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  i = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = i.fields._current;
    if ( i.fields._current )
    {
      klass = i.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0);
      if ( v8 )
      {
        if ( !v3 )
          sub_1C93D2C(v8, v9);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_ScriptCharaData__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C93D2C(v8, v9);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            current,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)current;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)current, v10, v11, v12, v13, v14, v15);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
  if ( !v3 )
LABEL_22:
    sub_1C93D2C(listCharaData, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    v3,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  for ( i = v21;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
        ScriptSubLayer__RemoveCharaData(this, (ScriptCharaData_o *)i.fields._current, v20) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__ResetShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *shakeRoot; // x0
  UnityEngine_Transform_o *v5; // x20

  if ( (byte_4D32A3E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_10017/*"OnShake"*/);
    byte_4D32A3E = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_72104408(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10017/*"OnShake"*/,
    0);
  shakeRoot = this->fields.shakeRoot;
  if ( !shakeRoot )
    goto LABEL_8;
  shakeRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(shakeRoot, 0);
  v5 = (UnityEngine_Transform_o *)shakeRoot;
  if ( !byte_4D2A139 )
  {
    shakeRoot = (UnityEngine_GameObject_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v5 )
LABEL_8:
    sub_1C93D2C(shakeRoot, v3);
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
  unsigned __int64 localPosition; // kr00_8
  UnityEngine_Vector3_o v7; // 0:kr14_12.12

  meshRender = (UnityEngine_Component_o *)this->fields.meshRender;
  if ( !meshRender
    || (meshRender = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(meshRender, 0)) == 0
    || (localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)meshRender,
                                            0),
        (meshRender = (UnityEngine_Component_o *)this->fields.meshRender) == 0)
    || (meshRender = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(meshRender, 0)) == 0 )
  {
    sub_1C93D2C(meshRender, method);
  }
  *(_QWORD *)&v7.fields.x = localPosition;
  v7.fields.z = -depth;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)meshRender, v7, 0);
}


void ScriptSubLayer__SetEdgeMaskSubMaterial(
        ScriptSubLayer_o *this,
        UnityEngine_Material_o *mat,
        System_Single_array *paramsFloat,
        const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_edgeMaskSubMaterial_k__BackingField; // x22
  UnityEngine_Object_o *edgeMaskSubMaterial_k__BackingField; // x23
  UnityEngine_Object_o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D32A38 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32A38 = 1;
  }
  p_edgeMaskSubMaterial_k__BackingField = &this->fields._edgeMaskSubMaterial_k__BackingField;
  edgeMaskSubMaterial_k__BackingField = (UnityEngine_Object_o *)this->fields._edgeMaskSubMaterial_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(edgeMaskSubMaterial_k__BackingField, (UnityEngine_Object_o *)mat, 0) )
  {
    v9 = (UnityEngine_Object_o *)*p_edgeMaskSubMaterial_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      v16 = (UnityEngine_Object_o *)*p_edgeMaskSubMaterial_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v16, 0);
    }
    this->fields._edgeMaskSubMaterial_k__BackingField = mat;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields._edgeMaskSubMaterial_k__BackingField,
      (int32_t)mat,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    this->fields._edgeMaskSubMaterialParams_k__BackingField = paramsFloat;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields._edgeMaskSubMaterialParams_k__BackingField,
      (int32_t)paramsFloat,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
}


void ScriptSubLayer__SetFilterCharaData(ScriptSubLayer_o *this, System_String_o *filterName, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x20
  UnityEngine_Object_o *v7; // x21
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D32A37 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32A37 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1C93D2C(0, filterName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    listCharaData,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v8.fields._current;
    if ( v8.fields._current )
    {
      v7 = *(UnityEngine_Object_o **)((char *)&v8.fields._current->klass + (unsigned __int64)&dword_30);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        ScriptCharaData__SetFilter((ScriptCharaData_o *)current, filterName, v9, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ScriptSubLayer__SetLayer(ScriptSubLayer_o *this, int32_t layer, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x20
  UnityEngine_Object_o *v7; // x21
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D32A3D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32A3D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1C93D2C(0, *(_QWORD *)&layer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    listCharaData,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v8.fields._current;
    if ( v8.fields._current )
    {
      v7 = *(UnityEngine_Object_o **)((char *)&v8.fields._current->klass + (unsigned __int64)&dword_30);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
        ScriptCharaData__SetLayer((ScriptCharaData_o *)current, layer, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__SetLayerActive(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  const MethodInfo *v4; // x2

  if ( (byte_4D32A35 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12734/*"ScriptRenderSub"*/);
    byte_4D32A35 = 1;
  }
  v3 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_12734/*"ScriptRenderSub"*/, 0);
  ScriptSubLayer__SetLayer(this, v3, v4);
}


void ScriptSubLayer__SetLayerKey(ScriptSubLayer_o *this, System_String_o *key, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._layerKey_k__BackingField = key;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._layerKey_k__BackingField,
    (int32_t)key,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptSubLayer__SetMaskLayer(ScriptSubLayer_o *this, ScriptSubLayer_o *maskLayer, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.subLayerMask = maskLayer;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.subLayerMask,
    (int32_t)maskLayer,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptSubLayer__SetRendering(ScriptSubLayer_o *this, bool rendering, const MethodInfo *method)
{
  bool v4; // w22
  UnityEngine_Object_o *subLayerMask; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1

  v4 = rendering;
  while ( 1 )
  {
    if ( (byte_4D32A31 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D32A31 = 1;
    }
    this->fields._isRendering_k__BackingField = v4;
    subLayerMask = (UnityEngine_Object_o *)this->fields.subLayerMask;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(subLayerMask, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.subLayerMask;
    if ( !this )
      sub_1C93D2C(v6, v7);
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
    sub_1C93D2C(subStretchBase, stretchObj);
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
  bool v11; // cc
  float v12; // s0

  v11 = duration <= 0.0;
  v12 = 0.0;
  if ( !v11 )
    v12 = UnityEngine_Time__get_time(0) + duration;
  this->fields.shakeParam.fields.time = v12;
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
  float v15; // s12
  float v16; // s13
  float z; // s14
  float v18; // s11
  UnityEngine_Component_o *subStretchBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenScale_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  uint32_t v36; // w0
  float v37; // [xsp+8h] [xbp-78h]
  float v38; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v42; // 0:s1.4,4:s2.4,8:s3.4

  y = stretchBaseRange.fields.y;
  x = stretchBaseRange.fields.x;
  if ( (byte_4D32A39 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20218/*"horizontally"*/);
    sub_1C93AD4(&StringLiteral_6024/*"EndExecuteStretch"*/);
    sub_1C93AD4(&StringLiteral_20219/*"horizontallyLeft"*/);
    sub_1C93AD4(&StringLiteral_19918/*"full"*/);
    sub_1C93AD4(&StringLiteral_24990/*"verticalUp"*/);
    sub_1C93AD4(&StringLiteral_24986/*"verticalDown"*/);
    sub_1C93AD4(&StringLiteral_24982/*"vertical"*/);
    sub_1C93AD4(&StringLiteral_20220/*"horizontallyRight"*/);
    byte_4D32A39 = 1;
  }
  if ( !this->fields._IsExecuteStretch_k__BackingField )
  {
    if ( !byte_4D2A13E )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v15 = static_fields->oneVector.fields.x;
    v16 = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    }
    v18 = static_fields->zeroVector.fields.z;
    v37 = static_fields->zeroVector.fields.x;
    v38 = static_fields->zeroVector.fields.y;
    if ( isIn )
    {
LABEL_10:
      subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
      if ( subStretchBase )
      {
        if ( duration <= 0.0 )
        {
          subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0);
          if ( subStretchBase )
          {
            v39.fields.x = v15;
            v39.fields.y = v16;
            v39.fields.z = z;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)subStretchBase, v39, 0);
            subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
            if ( subStretchBase )
            {
              subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0);
              if ( subStretchBase )
              {
                v40.fields.x = v37;
                v40.fields.y = v38;
                v40.fields.z = v18;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)subStretchBase, v40, 0);
                return;
              }
            }
          }
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject(subStretchBase, 0);
          v41.fields.x = v15;
          v41.fields.y = v16;
          v41.fields.z = z;
          v21 = TweenScale__Begin(gameObject, duration, v41, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v21, 0, 0) )
            return;
          subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
          if ( subStretchBase )
          {
            v22 = UnityEngine_Component__get_gameObject(subStretchBase, 0);
            v42.fields.x = v37;
            v42.fields.y = v38;
            v42.fields.z = v18;
            TweenPosition__Begin(v22, duration, v42, 0);
            subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
            if ( v21 )
            {
              v21->fields.eventReceiver = (struct UnityEngine_GameObject_o *)subStretchBase;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v21->fields.eventReceiver,
                (int32_t)subStretchBase,
                v23,
                v24,
                v25,
                v26,
                v27,
                v28);
              v29 = StringLiteral_6024/*"EndExecuteStretch"*/;
              v21->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6024/*"EndExecuteStretch"*/;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v21->fields.callWhenFinished,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35);
              this->fields._IsExecuteStretch_k__BackingField = 1;
              return;
            }
          }
        }
      }
      sub_1C93D2C(subStretchBase, name);
    }
    v36 = PrivateImplementationDetails___ComputeStringHash(name, 0);
    if ( v36 <= 0x70027A90 )
    {
      if ( v36 != 264610898 )
      {
        if ( v36 == 690205847 )
        {
          if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_24986/*"verticalDown"*/, 0) )
            goto LABEL_10;
          v15 = 1.0;
          v16 = scale;
          z = 1.0;
          v37 = 0.0;
          v38 = (float)-y * scale;
        }
        else
        {
          if ( v36 != 1879210640 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_20220/*"horizontallyRight"*/, 0) )
            goto LABEL_10;
          v16 = 1.0;
          v15 = scale;
          z = 1.0;
          v37 = (float)-x * scale;
          v38 = 0.0;
        }
LABEL_47:
        v18 = 0.0;
        goto LABEL_10;
      }
      if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_20218/*"horizontally"*/, 0) )
        goto LABEL_10;
      v16 = 1.0;
      v15 = scale;
LABEL_43:
      z = 1.0;
      goto LABEL_10;
    }
    if ( v36 > 0x8EBB41AE )
    {
      if ( v36 != -454329761 )
      {
        if ( v36 == -8801476 && System_String__op_Equality(name, (System_String_o *)StringLiteral_19918/*"full"*/, 0) )
        {
          z = 1.0;
          v15 = scale;
          v16 = scale;
        }
        goto LABEL_10;
      }
      if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_20219/*"horizontallyLeft"*/, 0) )
        goto LABEL_10;
      v37 = x * scale;
      v38 = 0.0;
      v16 = 1.0;
      v15 = scale;
    }
    else
    {
      if ( v36 == -2027301573 )
      {
        if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_24982/*"vertical"*/, 0) )
          goto LABEL_10;
        v15 = 1.0;
        v16 = scale;
        goto LABEL_43;
      }
      if ( v36 != -1900330578 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_24990/*"verticalUp"*/, 0) )
        goto LABEL_10;
      v15 = 1.0;
      v16 = scale;
      v37 = 0.0;
      v38 = y * scale;
    }
    z = 1.0;
    goto LABEL_47;
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
    sub_1C93D2C(0, method);
  return UnityEngine_Component__get_gameObject(subStretchBase, 0);
}


UnityEngine_Color_o ScriptSubLayer__get_backgroundColor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = this->fields._backgroundColor_k__BackingField.fields.r;
  result.fields.g = this->fields._backgroundColor_k__BackingField.fields.g;
  result.fields.b = this->fields._backgroundColor_k__BackingField.fields.b;
  result.fields.a = this->fields._backgroundColor_k__BackingField.fields.a;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._edgeMaskSubMaterial_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._edgeMaskSubMaterial_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._edgeMaskSubMaterialParams_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._edgeMaskSubMaterialParams_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._effectController_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._effectController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._layerKey_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._layerKey_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._renderTexture_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  *(ScriptSubLayer_ShakeParam_o *)&method->methodPointer = this;
}


void ScriptSubLayer_ShakeParam__Reset(ScriptSubLayer_ShakeParam_o this, const MethodInfo *method)
{
  method->methodPointer = 0;
  method->virtualMethodPointer = 0;
}