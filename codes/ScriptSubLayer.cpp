void ScriptSubLayer___ctor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C39A24 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ScriptCharaData__TypeInfo);
    byte_4C39A24 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  this->fields.listCharaData = (struct System_Collections_Generic_List_ScriptCharaData__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listCharaData, (int32_t)v3, v4, v5);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C39A20 & 1) == 0 )
  {
    sub_1C32C20(&ScriptActionRenderEffectController_TypeInfo);
    byte_4C39A20 = 1;
  }
  meshRender = this->fields.meshRender;
  if ( !meshRender )
    sub_1C32E7C(0);
  material = ExUIMeshRenderer__get_material(meshRender, 0);
  v5 = (ScriptActionRenderEffectController_o *)sub_1C32E6C(ScriptActionRenderEffectController_TypeInfo);
  ScriptActionRenderEffectController___ctor(v5, material, 0);
  this->fields._effectController_k__BackingField = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._effectController_k__BackingField, (int32_t)v5, v6, v7);
}


void ScriptSubLayer__CreateRenderTexture(ScriptSubLayer_o *this, const MethodInfo *method)
{
  struct UnityEngine_RenderTexture_o *Temporary_71131944; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *renderTexture_k__BackingField; // x0

  if ( (byte_4C39A1F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_13674/*"TempRenderTexture"*/);
    byte_4C39A1F = 1;
  }
  Temporary_71131944 = UnityEngine_RenderTexture__GetTemporary_71131944(1024, 1024, 0, 0, 0);
  this->fields._renderTexture_k__BackingField = Temporary_71131944;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)Temporary_71131944,
    v4,
    v5);
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !renderTexture_k__BackingField
    || (UnityEngine_Object__set_name(renderTexture_k__BackingField, (System_String_o *)StringLiteral_13674/*"TempRenderTexture"*/, 0),
        (renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields.meshRender) == 0) )
  {
    sub_1C32E7C(renderTexture_k__BackingField);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  ExUIMeshRenderer_o *meshRender; // x0
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x8
  int32_t size; // w2
  int v15; // w9
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_4C39A1E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData__Clear__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39A1E = 1;
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
  v7 = StringLiteral_1/*""*/;
  this->fields._layerKey_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._layerKey_k__BackingField, v7, v4, v5);
  this->fields._isRendering_k__BackingField = 0;
  this->fields._renderTexture_k__BackingField = 0;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.b = 0;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.r = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._renderTexture_k__BackingField, 0, v8, v9);
  this->fields._effectController_k__BackingField = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._effectController_k__BackingField, 0, v10, v11);
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_13;
  size = listCharaData->fields._size;
  v15 = listCharaData->fields._version + 1;
  listCharaData->fields._size = 0;
  listCharaData->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)listCharaData->fields._items, 0, size, 0);
  this->fields.subLayerMask = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.subLayerMask, 0, size, v12);
  meshRender = (ExUIMeshRenderer_o *)this->fields.renderRoot;
  if ( !meshRender )
LABEL_13:
    sub_1C32E7C(meshRender);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)meshRender, 0, 0);
  ScriptSubLayer__SetDepth(this, 1.0, v16);
  ScriptSubLayer__SetEdgeMaskSubMaterial(this, 0, 0, v17);
  ScriptSubLayer__ResetShake(this, v18);
}


void ScriptSubLayer__MoveAlphaCharaData(ScriptSubLayer_o *this, float duration, float alpha, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x19
  UnityEngine_Object_o *v9; // x20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C39A1A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39A1A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    listCharaData,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v10.fields._current;
    if ( v10.fields._current )
    {
      v9 = *(UnityEngine_Object_o **)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_30);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
        ScriptCharaData__MoveAlpha((ScriptCharaData_o *)current, duration, alpha, 1, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__OnShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *shakeRoot; // x0
  UnityEngine_Transform_o *transform; // x20
  float v6; // s8
  float v7; // s0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C39A23 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9960/*"OnShake"*/);
    byte_4C39A23 = 1;
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
        sub_1C32E7C(shakeRoot);
      }
      v8.fields.y = v7;
      v8.fields.z = 0.0;
      v8.fields.x = v6;
      UnityEngine_Transform__set_localPosition(transform, v8, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9960/*"OnShake"*/,
        this->fields.shakeParam.fields.cycle,
        0);
    }
  }
}


void ScriptSubLayer__RegistCharaData(ScriptSubLayer_o *this, ScriptCharaData_o *charaData, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *listCharaData; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C39A17 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData__Add__);
    sub_1C32C20(&StringLiteral_12637/*"ScriptRenderSub"*/);
    byte_4C39A17 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_10;
  items = listCharaData->fields._items;
  v8 = Method_System_Collections_Generic_List_ScriptCharaData__Add__;
  ++listCharaData->fields._version;
  if ( !items )
    goto LABEL_10;
  size = listCharaData->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listCharaData,
      (Il2CppObject *)charaData,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    listCharaData->fields._size = size + 1;
    v10[4] = (Il2CppClass *)charaData;
    sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 4), (int32_t)charaData, (int32_t)method, v3);
  }
  listCharaData = (System_Collections_Generic_List_object__o *)UnityEngine_LayerMask__NameToLayer(
                                                                 (System_String_o *)StringLiteral_12637/*"ScriptRenderSub"*/,
                                                                 0);
  if ( !charaData )
LABEL_10:
    sub_1C32E7C(listCharaData);
  ScriptCharaData__SetLayer(charaData, (int32_t)listCharaData, 0);
}


void ScriptSubLayer__RemoveCharaData(ScriptSubLayer_o *this, ScriptCharaData_o *charaData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0

  if ( (byte_4C39A16 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
    byte_4C39A16 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___Remove(
    listCharaData,
    (Il2CppObject *)charaData,
    (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
}


void ScriptSubLayer__RemoveInvalidCharaData(ScriptSubLayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x22
  _BOOL8 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C39A18 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ScriptCharaData__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39A18 = 1;
  }
  memset(&i, 0, sizeof(i));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    listCharaData,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  i = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = i.fields._current;
    if ( i.fields._current )
    {
      klass = i.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0);
      if ( v7 )
      {
        if ( !v3 )
          sub_1C32E7C(v7);
        items = v3->fields._items;
        v11 = Method_System_Collections_Generic_List_ScriptCharaData__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(v7);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            current,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v13[4] = (Il2CppClass *)current;
          sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)current, v8, v9);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
  if ( !v3 )
LABEL_22:
    sub_1C32E7C(listCharaData);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    v3,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  for ( i = v15;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
        ScriptSubLayer__RemoveCharaData(this, (ScriptCharaData_o *)i.fields._current, v14) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__ResetShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *shakeRoot; // x0
  UnityEngine_Transform_o *v4; // x20

  if ( (byte_4C39A22 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9960/*"OnShake"*/);
    byte_4C39A22 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_71208520(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9960/*"OnShake"*/,
    0);
  shakeRoot = this->fields.shakeRoot;
  if ( !shakeRoot )
    goto LABEL_8;
  shakeRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(shakeRoot, 0);
  v4 = (UnityEngine_Transform_o *)shakeRoot;
  if ( !byte_4C313D1 )
  {
    shakeRoot = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v4 )
LABEL_8:
    sub_1C32E7C(shakeRoot);
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
    sub_1C32E7C(meshRender);
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
  UnityEngine_Object_o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C39A1C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39A1C = 1;
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
      v12 = (UnityEngine_Object_o *)*p_edgeMaskSubMaterial_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v12, 0);
    }
    this->fields._edgeMaskSubMaterial_k__BackingField = mat;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._edgeMaskSubMaterial_k__BackingField, (int32_t)mat, v10, v11);
    this->fields._edgeMaskSubMaterialParams_k__BackingField = paramsFloat;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields._edgeMaskSubMaterialParams_k__BackingField,
      (int32_t)paramsFloat,
      v13,
      v14);
  }
}


void ScriptSubLayer__SetFilterCharaData(ScriptSubLayer_o *this, System_String_o *filterName, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x20
  UnityEngine_Object_o *v7; // x21
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C39A1B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39A1B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    listCharaData,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
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
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__SetLayer(ScriptSubLayer_o *this, int32_t layer, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x20
  UnityEngine_Object_o *v7; // x21
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C39A21 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39A21 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    listCharaData,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
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
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void ScriptSubLayer__SetLayerActive(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  const MethodInfo *v4; // x2

  if ( (byte_4C39A19 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12637/*"ScriptRenderSub"*/);
    byte_4C39A19 = 1;
  }
  v3 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_12637/*"ScriptRenderSub"*/, 0);
  ScriptSubLayer__SetLayer(this, v3, v4);
}


void ScriptSubLayer__SetLayerKey(ScriptSubLayer_o *this, System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._layerKey_k__BackingField = key;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._layerKey_k__BackingField, (int32_t)key, (int32_t)method, v3);
}


void ScriptSubLayer__SetMaskLayer(ScriptSubLayer_o *this, ScriptSubLayer_o *maskLayer, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.subLayerMask = maskLayer;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.subLayerMask, (int32_t)maskLayer, (int32_t)method, v3);
}


void ScriptSubLayer__SetRendering(ScriptSubLayer_o *this, bool rendering, const MethodInfo *method)
{
  bool v4; // w22
  UnityEngine_Object_o *subLayerMask; // x21
  _BOOL8 v6; // x0

  v4 = rendering;
  while ( 1 )
  {
    if ( (byte_4C39A15 & 1) == 0 )
    {
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C39A15 = 1;
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
      sub_1C32E7C(v6);
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
    sub_1C32E7C(subStretchBase);
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
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  uint32_t v28; // w0
  float v29; // [xsp+8h] [xbp-78h]
  float v30; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  y = stretchBaseRange.fields.y;
  x = stretchBaseRange.fields.x;
  if ( (byte_4C39A1D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_19999/*"horizontally"*/);
    sub_1C32C20(&StringLiteral_5997/*"EndExecuteStretch"*/);
    sub_1C32C20(&StringLiteral_20000/*"horizontallyLeft"*/);
    sub_1C32C20(&StringLiteral_19705/*"full"*/);
    sub_1C32C20(&StringLiteral_24669/*"verticalUp"*/);
    sub_1C32C20(&StringLiteral_24665/*"verticalDown"*/);
    sub_1C32C20(&StringLiteral_24661/*"vertical"*/);
    sub_1C32C20(&StringLiteral_20001/*"horizontallyRight"*/);
    byte_4C39A1D = 1;
  }
  if ( !this->fields._IsExecuteStretch_k__BackingField )
  {
    if ( !byte_4C313D6 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v15 = static_fields->oneVector.fields.x;
    v16 = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    }
    v18 = static_fields->zeroVector.fields.z;
    v29 = static_fields->zeroVector.fields.x;
    v30 = static_fields->zeroVector.fields.y;
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
            v31.fields.x = v15;
            v31.fields.y = v16;
            v31.fields.z = z;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)subStretchBase, v31, 0);
            subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
            if ( subStretchBase )
            {
              subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0);
              if ( subStretchBase )
              {
                v32.fields.x = v29;
                v32.fields.y = v30;
                v32.fields.z = v18;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)subStretchBase, v32, 0);
                return;
              }
            }
          }
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject(subStretchBase, 0);
          v33.fields.x = v15;
          v33.fields.y = v16;
          v33.fields.z = z;
          v21 = TweenScale__Begin(gameObject, duration, v33, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v21, 0, 0) )
            return;
          subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
          if ( subStretchBase )
          {
            v22 = UnityEngine_Component__get_gameObject(subStretchBase, 0);
            v34.fields.x = v29;
            v34.fields.y = v30;
            v34.fields.z = v18;
            TweenPosition__Begin(v22, duration, v34, 0);
            subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
            if ( v21 )
            {
              v21->fields.eventReceiver = (struct UnityEngine_GameObject_o *)subStretchBase;
              sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.eventReceiver, (int32_t)subStretchBase, v23, v24);
              v25 = StringLiteral_5997/*"EndExecuteStretch"*/;
              v21->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5997/*"EndExecuteStretch"*/;
              sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.callWhenFinished, v25, v26, v27);
              this->fields._IsExecuteStretch_k__BackingField = 1;
              return;
            }
          }
        }
      }
      sub_1C32E7C(subStretchBase);
    }
    v28 = PrivateImplementationDetails___ComputeStringHash(name, 0);
    if ( v28 <= 0x70027A90 )
    {
      if ( v28 != 264610898 )
      {
        if ( v28 == 690205847 )
        {
          if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_24665/*"verticalDown"*/, 0) )
            goto LABEL_10;
          v15 = 1.0;
          v16 = scale;
          z = 1.0;
          v29 = 0.0;
          v30 = (float)-y * scale;
        }
        else
        {
          if ( v28 != 1879210640 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_20001/*"horizontallyRight"*/, 0) )
            goto LABEL_10;
          v16 = 1.0;
          v15 = scale;
          z = 1.0;
          v29 = (float)-x * scale;
          v30 = 0.0;
        }
LABEL_47:
        v18 = 0.0;
        goto LABEL_10;
      }
      if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_19999/*"horizontally"*/, 0) )
        goto LABEL_10;
      v16 = 1.0;
      v15 = scale;
LABEL_43:
      z = 1.0;
      goto LABEL_10;
    }
    if ( v28 > 0x8EBB41AE )
    {
      if ( v28 != -454329761 )
      {
        if ( v28 == -8801476 && System_String__op_Equality(name, (System_String_o *)StringLiteral_19705/*"full"*/, 0) )
        {
          z = 1.0;
          v15 = scale;
          v16 = scale;
        }
        goto LABEL_10;
      }
      if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_20000/*"horizontallyLeft"*/, 0) )
        goto LABEL_10;
      v29 = x * scale;
      v30 = 0.0;
      v16 = 1.0;
      v15 = scale;
    }
    else
    {
      if ( v28 == -2027301573 )
      {
        if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_24661/*"vertical"*/, 0) )
          goto LABEL_10;
        v15 = 1.0;
        v16 = scale;
        goto LABEL_43;
      }
      if ( v28 != -1900330578 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_24669/*"verticalUp"*/, 0) )
        goto LABEL_10;
      v15 = 1.0;
      v16 = scale;
      v29 = 0.0;
      v30 = y * scale;
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
    sub_1C32E7C(0);
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
  const MethodInfo *v3; // x3

  this->fields._edgeMaskSubMaterial_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._edgeMaskSubMaterial_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScriptSubLayer__set_edgeMaskSubMaterialParams(
        ScriptSubLayer_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._edgeMaskSubMaterialParams_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._edgeMaskSubMaterialParams_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScriptSubLayer__set_effectController(
        ScriptSubLayer_o *this,
        ScriptActionRenderEffectController_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._effectController_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._effectController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScriptSubLayer__set_isRendering(ScriptSubLayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._isRendering_k__BackingField = value;
}


void ScriptSubLayer__set_layerKey(ScriptSubLayer_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._layerKey_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._layerKey_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void ScriptSubLayer__set_renderTexture(
        ScriptSubLayer_o *this,
        UnityEngine_RenderTexture_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._renderTexture_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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