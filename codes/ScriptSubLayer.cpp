void __fastcall ScriptSubLayer___ctor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A21760 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_List_ScriptCharaData__TypeInfo, v3);
    byte_4A21760 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  this->fields.listCharaData = (struct System_Collections_Generic_List_ScriptCharaData__o *)v4;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.listCharaData, (int32_t)v4, v5, v6);
  *(_QWORD *)&this->fields.shakeParam.fields.time = 0LL;
  *(_QWORD *)&this->fields.shakeParam.fields.x = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall ScriptSubLayer__Awake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  ScriptSubLayer__Init(this, method);
}


void __fastcall ScriptSubLayer__CreateEffectController(ScriptSubLayer_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer_o *meshRender; // x0
  UnityEngine_Material_o *material; // x20
  ScriptActionRenderEffectController_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A2175C & 1) == 0 )
  {
    sub_1B715CC(&ScriptActionRenderEffectController_TypeInfo, method);
    byte_4A2175C = 1;
  }
  meshRender = this->fields.meshRender;
  if ( !meshRender )
    sub_1B71828(0LL, method);
  material = ExUIMeshRenderer__get_material(meshRender, 0LL);
  v5 = (ScriptActionRenderEffectController_o *)sub_1B71818(ScriptActionRenderEffectController_TypeInfo);
  ScriptActionRenderEffectController___ctor(v5, material, 0LL);
  this->fields._effectController_k__BackingField = v5;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._effectController_k__BackingField, (int32_t)v5, v6, v7);
}


void __fastcall ScriptSubLayer__CreateRenderTexture(ScriptSubLayer_o *this, const MethodInfo *method)
{
  struct UnityEngine_RenderTexture_o *Temporary_69166136; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  __int64 v6; // x1
  UnityEngine_Object_o *renderTexture_k__BackingField; // x0

  if ( (byte_4A2175B & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_13533/*"TempRenderTexture"*/, method);
    byte_4A2175B = 1;
  }
  Temporary_69166136 = UnityEngine_RenderTexture__GetTemporary_69166136(1024, 1024, 0, 0, 0LL);
  this->fields._renderTexture_k__BackingField = Temporary_69166136;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)Temporary_69166136,
    v4,
    v5);
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !renderTexture_k__BackingField
    || (UnityEngine_Object__set_name(renderTexture_k__BackingField, (System_String_o *)StringLiteral_13533/*"TempRenderTexture"*/, 0LL),
        (renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields.meshRender) == 0LL) )
  {
    sub_1B71828(renderTexture_k__BackingField, v6);
  }
  ExUIMeshRenderer__SetImage(
    (ExUIMeshRenderer_o *)renderTexture_k__BackingField,
    (UnityEngine_Texture_o *)this->fields._renderTexture_k__BackingField,
    0LL);
}


void __fastcall ScriptSubLayer__EndExecuteStretch(ScriptSubLayer_o *this, const MethodInfo *method)
{
  this->fields._IsExecuteStretch_k__BackingField = 0;
}


void __fastcall ScriptSubLayer__Init(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *renderTexture_k__BackingField; // x21
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  ExUIMeshRenderer_o *meshRender; // x0
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w3
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x8
  int32_t size; // w2
  int v18; // w9
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1

  if ( (byte_4A2175A & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData__Clear__, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B715CC(&StringLiteral_1/*""*/, v4);
    byte_4A2175A = 1;
  }
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderTexture_k__BackingField, 0LL, 0LL) )
  {
    meshRender = this->fields.meshRender;
    if ( !meshRender )
      goto LABEL_13;
    ExUIMeshRenderer__ClearImage(meshRender, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(this->fields._renderTexture_k__BackingField, 0LL);
  }
  v10 = (int)StringLiteral_1/*""*/;
  this->fields._layerKey_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._layerKey_k__BackingField, v10, v7, v8);
  this->fields._isRendering_k__BackingField = 0;
  this->fields._renderTexture_k__BackingField = 0LL;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.b = 0LL;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.r = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._renderTexture_k__BackingField, 0, v11, v12);
  this->fields._effectController_k__BackingField = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._effectController_k__BackingField, 0, v13, v14);
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_13;
  size = listCharaData->fields._size;
  v18 = listCharaData->fields._version + 1;
  listCharaData->fields._size = 0;
  listCharaData->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)listCharaData->fields._items, 0, size, 0LL);
  this->fields.subLayerMask = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.subLayerMask, 0, size, v15);
  meshRender = (ExUIMeshRenderer_o *)this->fields.renderRoot;
  if ( !meshRender )
LABEL_13:
    sub_1B71828(meshRender, v6);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)meshRender, 0, 0LL);
  ScriptSubLayer__SetDepth(this, 1.0, v19);
  ScriptSubLayer__SetEdgeMaskSubMaterial(this, 0LL, v20);
  ScriptSubLayer__ResetShake(this, v21);
}


void __fastcall ScriptSubLayer__MoveAlphaCharaData(
        ScriptSubLayer_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x20
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A21756 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v9);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v10);
    byte_4A21756 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1B71828(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    listCharaData,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v14.fields._current;
    if ( v14.fields._current )
    {
      klass = v14.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
        ScriptCharaData__MoveAlpha((ScriptCharaData_o *)current, duration, alpha, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__OnShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *shakeRoot; // x0
  UnityEngine_Transform_o *transform; // x20
  float v7; // s8
  float v8; // s0
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A2175F & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&StringLiteral_9920/*"OnShake"*/, v3);
    byte_4A2175F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL) )
  {
    if ( this->fields.shakeParam.fields.cycle <= 0.0
      || this->fields.shakeParam.fields.time > 0.0
      && UnityEngine_Time__get_time(0LL) >= this->fields.shakeParam.fields.time )
    {
      ScriptSubLayer__ResetShake(this, v4);
    }
    else
    {
      shakeRoot = this->fields.shakeRoot;
      if ( !shakeRoot
        || (transform = UnityEngine_GameObject__get_transform(shakeRoot, 0LL),
            v7 = UnityEngine_Random__Range(-this->fields.shakeParam.fields.x, this->fields.shakeParam.fields.x, 0LL),
            v8 = UnityEngine_Random__Range(-this->fields.shakeParam.fields.y, this->fields.shakeParam.fields.y, 0LL),
            !transform) )
      {
        sub_1B71828(shakeRoot, v4);
      }
      v9.fields.y = v8;
      v9.fields.z = 0.0;
      v9.fields.x = v7;
      UnityEngine_Transform__set_localPosition(transform, v9, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9920/*"OnShake"*/,
        this->fields.shakeParam.fields.cycle,
        0LL);
    }
  }
}


void __fastcall ScriptSubLayer__RegistCharaData(
        ScriptSubLayer_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *listCharaData; // x0
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x8

  if ( (byte_4A21753 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData__Add__, charaData);
    sub_1B715CC(&StringLiteral_12499/*"ScriptRenderSub"*/, v6);
    byte_4A21753 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_10;
  items = listCharaData->fields._items;
  v9 = Method_System_Collections_Generic_List_ScriptCharaData__Add__;
  ++listCharaData->fields._version;
  if ( !items )
    goto LABEL_10;
  size = listCharaData->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listCharaData,
      (Il2CppObject *)charaData,
      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    listCharaData->fields._size = size + 1;
    v11[4] = (Il2CppClass *)charaData;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v11 + 4), (int32_t)charaData, (int32_t)method, v3);
  }
  listCharaData = (System_Collections_Generic_List_object__o *)UnityEngine_LayerMask__NameToLayer(
                                                                 (System_String_o *)StringLiteral_12499/*"ScriptRenderSub"*/,
                                                                 0LL);
  if ( !charaData )
LABEL_10:
    sub_1B71828(listCharaData, charaData);
  ScriptCharaData__SetLayer(charaData, (int32_t)listCharaData, 0LL);
}


void __fastcall ScriptSubLayer__RemoveCharaData(
        ScriptSubLayer_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0

  if ( (byte_4A21752 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData__Remove__, charaData);
    byte_4A21752 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1B71828(0LL, charaData);
  System_Collections_Generic_List_object___Remove(
    listCharaData,
    (Il2CppObject *)charaData,
    (const MethodInfo_34D1788 *)Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
}


void __fastcall ScriptSubLayer__RemoveInvalidCharaData(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A21754 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData__Add__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__, v7);
    sub_1B715CC(&System_Collections_Generic_List_ScriptCharaData__TypeInfo, v8);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v9);
    byte_4A21754 = 1;
  }
  memset(&i, 0, sizeof(i));
  v10 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    listCharaData,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  i = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = i.fields._current;
    if ( i.fields._current )
    {
      klass = i.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL);
      if ( v15 )
      {
        if ( !v10 )
          sub_1B71828(v15, v16);
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_ScriptCharaData__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1B71828(v15, v16);
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            current,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)current;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)current, v17, v18);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
  if ( !v10 )
LABEL_22:
    sub_1B71828(listCharaData, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v10,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  for ( i = v24;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
        ScriptSubLayer__RemoveCharaData(this, (ScriptCharaData_o *)i.fields._current, v23) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__ResetShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *shakeRoot; // x0
  UnityEngine_Transform_o *v5; // x20

  if ( (byte_4A2175E & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_9920/*"OnShake"*/, method);
    byte_4A2175E = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69242432(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9920/*"OnShake"*/,
    0LL);
  shakeRoot = this->fields.shakeRoot;
  if ( !shakeRoot )
    goto LABEL_8;
  shakeRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(shakeRoot, 0LL);
  v5 = (UnityEngine_Transform_o *)shakeRoot;
  if ( !byte_4A1A751 )
  {
    shakeRoot = (UnityEngine_GameObject_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v3);
    byte_4A1A751 = 1;
  }
  if ( !v5 )
LABEL_8:
    sub_1B71828(shakeRoot, v3);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  *(_QWORD *)&this->fields.shakeParam.fields.time = 0LL;
  *(_QWORD *)&this->fields.shakeParam.fields.x = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetBackgroundColor(
        ScriptSubLayer_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  this->fields._backgroundColor_k__BackingField = color;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetDepth(ScriptSubLayer_o *this, float depth, const MethodInfo *method)
{
  UnityEngine_Component_o *meshRender; // x0
  float v6; // s0
  float v7; // s1
  float v8; // s9
  float v9; // s10
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  meshRender = (UnityEngine_Component_o *)this->fields.meshRender;
  if ( !meshRender
    || (meshRender = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(meshRender, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)meshRender,
                                          0LL),
        (meshRender = (UnityEngine_Component_o *)this->fields.meshRender) == 0LL)
    || (v8 = v6,
        v9 = v7,
        (meshRender = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(meshRender, 0LL)) == 0LL) )
  {
    sub_1B71828(meshRender, method);
  }
  v10.fields.z = -depth;
  v10.fields.x = v8;
  v10.fields.y = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)meshRender, v10, 0LL);
}


void __fastcall ScriptSubLayer__SetEdgeMaskSubMaterial(
        ScriptSubLayer_o *this,
        UnityEngine_Material_o *mat,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_edgeMaskSubMaterial_k__BackingField; // x20
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Material_o *edgeMaskSubMaterial_k__BackingField; // t1
  UnityEngine_Object_o *klass; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *v11; // x21

  if ( (byte_4A21758 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, mat);
    byte_4A21758 = 1;
  }
  edgeMaskSubMaterial_k__BackingField = this->fields._edgeMaskSubMaterial_k__BackingField;
  p_edgeMaskSubMaterial_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._edgeMaskSubMaterial_k__BackingField;
  v6 = (UnityEngine_Object_o *)edgeMaskSubMaterial_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, (UnityEngine_Object_o *)mat, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_edgeMaskSubMaterial_k__BackingField->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v11 = (UnityEngine_Object_o *)p_edgeMaskSubMaterial_k__BackingField->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69257852(v11, 0LL);
    }
    p_edgeMaskSubMaterial_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)mat;
    sub_1B71570(p_edgeMaskSubMaterial_k__BackingField, (int32_t)mat, v9, v10);
  }
}


void __fastcall ScriptSubLayer__SetFilterCharaData(
        ScriptSubLayer_o *this,
        System_String_o *filterName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A21757 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, filterName);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v7);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v8);
    byte_4A21757 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1B71828(0LL, filterName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    listCharaData,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v12.fields._current;
    if ( v12.fields._current )
    {
      klass = v12.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        v13.fields.r = 1.0;
        v13.fields.g = 1.0;
        v13.fields.b = 1.0;
        v13.fields.a = 1.0;
        ScriptCharaData__SetFilter((ScriptCharaData_o *)current, filterName, v13, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetLayer(ScriptSubLayer_o *this, int32_t layer, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *listCharaData; // x0
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A2175D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, *(_QWORD *)&layer);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v7);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v8);
    byte_4A2175D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1B71828(0LL, *(_QWORD *)&layer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    listCharaData,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v12.fields._current;
    if ( v12.fields._current )
    {
      klass = v12.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
        ScriptCharaData__SetLayer((ScriptCharaData_o *)current, layer, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__SetLayerActive(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  const MethodInfo *v4; // x2

  if ( (byte_4A21755 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_12499/*"ScriptRenderSub"*/, method);
    byte_4A21755 = 1;
  }
  v3 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_12499/*"ScriptRenderSub"*/, 0LL);
  ScriptSubLayer__SetLayer(this, v3, v4);
}


void __fastcall ScriptSubLayer__SetLayerKey(ScriptSubLayer_o *this, System_String_o *key, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._layerKey_k__BackingField = key;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._layerKey_k__BackingField,
    (int32_t)key,
    (int32_t)method,
    v3);
}


void __fastcall ScriptSubLayer__SetMaskLayer(
        ScriptSubLayer_o *this,
        ScriptSubLayer_o *maskLayer,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.subLayerMask = maskLayer;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.subLayerMask, (int32_t)maskLayer, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetRendering(ScriptSubLayer_o *this, bool rendering, const MethodInfo *method)
{
  bool v4; // w22
  UnityEngine_Object_o *subLayerMask; // x21
  _BOOL8 v6; // x0

  v4 = rendering;
  while ( 1 )
  {
    if ( (byte_4A21751 & 1) == 0 )
    {
      sub_1B715CC(&UnityEngine_Object_TypeInfo, rendering);
      byte_4A21751 = 1;
    }
    this->fields._isRendering_k__BackingField = v4;
    subLayerMask = (UnityEngine_Object_o *)this->fields.subLayerMask;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(subLayerMask, 0LL, 0LL);
    if ( !v6 )
      break;
    this = this->fields.subLayerMask;
    if ( !this )
      sub_1B71828(v6, rendering);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetStretchObj(
        ScriptSubLayer_o *this,
        UnityEngine_GameObject_o *stretchObj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *subStretchBase; // x0
  UnityEngine_Transform_o *v6; // x21
  int v7; // s0
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0

  subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
  if ( !subStretchBase )
    goto LABEL_9;
  subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0LL);
  if ( !stretchObj )
    goto LABEL_9;
  v6 = (UnityEngine_Transform_o *)subStretchBase;
  subStretchBase = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(stretchObj, 0LL);
  if ( !subStretchBase
    || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)subStretchBase,
                                          0LL),
        !v6)
    || (UnityEngine_Transform__set_localPosition(v6, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase) == 0LL)
    || (transform = UnityEngine_Component__get_transform(subStretchBase, 0LL),
        (subStretchBase = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(stretchObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)subStretchBase,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_1B71828(subStretchBase, stretchObj);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
}


void __fastcall ScriptSubLayer__Shake(
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
    v12 = UnityEngine_Time__get_time(0LL) + duration;
  this->fields.shakeParam.fields.time = v12;
  this->fields.shakeParam.fields.cycle = cycle;
  this->fields.shakeParam.fields.x = x;
  this->fields.shakeParam.fields.y = y;
  ScriptSubLayer__OnShake(this, method);
}


// attributes: thunk
void __fastcall ScriptSubLayer__ShakeStop(ScriptSubLayer_o *this, const MethodInfo *method)
{
  ScriptSubLayer__ResetShake(this, method);
}


void __fastcall ScriptSubLayer__StartSubLayer(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  ScriptSubLayer__Init(this, method);
  ScriptSubLayer__CreateRenderTexture(this, v3);
  ScriptSubLayer__CreateEffectController(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__StartSubStretch(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v23; // s12
  float v24; // s13
  float z; // s14
  float v26; // s11
  UnityEngine_Component_o *subStretchBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenScale_o *v29; // x20
  UnityEngine_GameObject_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  uint32_t v36; // w0
  float v37; // [xsp+8h] [xbp-78h]
  float v38; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v42; // 0:s1.4,4:s2.4,8:s3.4

  y = stretchBaseRange.fields.y;
  x = stretchBaseRange.fields.x;
  if ( (byte_4A21759 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, name);
    sub_1B715CC(&StringLiteral_19901/*"horizontally"*/, v14);
    sub_1B715CC(&StringLiteral_5943/*"EndExecuteStretch"*/, v15);
    sub_1B715CC(&StringLiteral_19902/*"horizontallyLeft"*/, v16);
    sub_1B715CC(&StringLiteral_19612/*"full"*/, v17);
    sub_1B715CC(&StringLiteral_24482/*"verticalUp"*/, v18);
    sub_1B715CC(&StringLiteral_24478/*"verticalDown"*/, v19);
    sub_1B715CC(&StringLiteral_24474/*"vertical"*/, v20);
    sub_1B715CC(&StringLiteral_19903/*"horizontallyRight"*/, v21);
    byte_4A21759 = 1;
  }
  if ( !this->fields._IsExecuteStretch_k__BackingField )
  {
    if ( !byte_4A1A756 )
    {
      sub_1B715CC(&UnityEngine_Vector3_TypeInfo, name);
      byte_4A1A756 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v23 = static_fields->oneVector.fields.x;
    v24 = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
    if ( !byte_4A1A751 )
    {
      sub_1B715CC(&UnityEngine_Vector3_TypeInfo, name);
      byte_4A1A751 = 1;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    }
    v26 = static_fields->zeroVector.fields.z;
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
          subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0LL);
          if ( subStretchBase )
          {
            v39.fields.x = v23;
            v39.fields.y = v24;
            v39.fields.z = z;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)subStretchBase, v39, 0LL);
            subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
            if ( subStretchBase )
            {
              subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0LL);
              if ( subStretchBase )
              {
                v40.fields.x = v37;
                v40.fields.y = v38;
                v40.fields.z = v26;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)subStretchBase, v40, 0LL);
                return;
              }
            }
          }
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject(subStretchBase, 0LL);
          v41.fields.x = v23;
          v41.fields.y = v24;
          v41.fields.z = z;
          v29 = TweenScale__Begin(gameObject, duration, v41, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
            return;
          subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
          if ( subStretchBase )
          {
            v30 = UnityEngine_Component__get_gameObject(subStretchBase, 0LL);
            v42.fields.x = v37;
            v42.fields.y = v38;
            v42.fields.z = v26;
            TweenPosition__Begin(v30, duration, v42, 0LL);
            subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
            if ( v29 )
            {
              v29->fields.eventReceiver = (struct UnityEngine_GameObject_o *)subStretchBase;
              sub_1B71570(
                (ServantStatusBattleListViewItem_o *)&v29->fields.eventReceiver,
                (int32_t)subStretchBase,
                v31,
                v32);
              v33 = StringLiteral_5943/*"EndExecuteStretch"*/;
              v29->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5943/*"EndExecuteStretch"*/;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&v29->fields.callWhenFinished, v33, v34, v35);
              this->fields._IsExecuteStretch_k__BackingField = 1;
              return;
            }
          }
        }
      }
      sub_1B71828(subStretchBase, name);
    }
    v36 = PrivateImplementationDetails___ComputeStringHash(name, 0LL);
    if ( v36 <= 0x70027A90 )
    {
      if ( v36 != 264610898 )
      {
        if ( v36 == 690205847 )
        {
          if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_24478/*"verticalDown"*/, 0LL) )
            goto LABEL_10;
          v23 = 1.0;
          v24 = scale;
          z = 1.0;
          v37 = 0.0;
          v38 = (float)-y * scale;
        }
        else
        {
          if ( v36 != 1879210640 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_19903/*"horizontallyRight"*/, 0LL) )
            goto LABEL_10;
          v24 = 1.0;
          v23 = scale;
          z = 1.0;
          v37 = (float)-x * scale;
          v38 = 0.0;
        }
LABEL_47:
        v26 = 0.0;
        goto LABEL_10;
      }
      if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_19901/*"horizontally"*/, 0LL) )
        goto LABEL_10;
      v24 = 1.0;
      v23 = scale;
LABEL_43:
      z = 1.0;
      goto LABEL_10;
    }
    if ( v36 > 0x8EBB41AE )
    {
      if ( v36 != -454329761 )
      {
        if ( v36 == -8801476 && System_String__op_Equality(name, (System_String_o *)StringLiteral_19612/*"full"*/, 0LL) )
        {
          z = 1.0;
          v23 = scale;
          v24 = scale;
        }
        goto LABEL_10;
      }
      if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_19902/*"horizontallyLeft"*/, 0LL) )
        goto LABEL_10;
      v37 = x * scale;
      v38 = 0.0;
      v24 = 1.0;
      v23 = scale;
    }
    else
    {
      if ( v36 == -2027301573 )
      {
        if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_24474/*"vertical"*/, 0LL) )
          goto LABEL_10;
        v23 = 1.0;
        v24 = scale;
        goto LABEL_43;
      }
      if ( v36 != -1900330578 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_24482/*"verticalUp"*/, 0LL) )
        goto LABEL_10;
      v23 = 1.0;
      v24 = scale;
      v37 = 0.0;
      v38 = y * scale;
    }
    z = 1.0;
    goto LABEL_47;
  }
}


void __fastcall ScriptSubLayer__SwapLayer(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptSubLayer__SetLayer(this, -1, v2);
}


void __fastcall ScriptSubLayer__Update(ScriptSubLayer_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  ScriptActionRenderEffectController_o *effectController_k__BackingField; // x0

  deltaTime = RealTime__get_deltaTime(0LL);
  effectController_k__BackingField = this->fields._effectController_k__BackingField;
  if ( effectController_k__BackingField )
    ScriptActionRenderEffectController__Update(effectController_k__BackingField, deltaTime, 0LL);
}


bool __fastcall ScriptSubLayer__get_IsExecuteStretch(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._IsExecuteStretch_k__BackingField;
}


System_Collections_Generic_IReadOnlyList_ScriptCharaData__o *__fastcall ScriptSubLayer__get_ListCharaData(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyList_ScriptCharaData__o *)this->fields.listCharaData;
}


ScriptSubLayer_o *__fastcall ScriptSubLayer__get_SubLayerMask(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.subLayerMask;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_SubStretchBase(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *subStretchBase; // x0

  subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
  if ( !subStretchBase )
    sub_1B71828(0LL, method);
  return UnityEngine_Component__get_gameObject(subStretchBase, 0LL);
}


UnityEngine_Color_o __fastcall ScriptSubLayer__get_backgroundColor(ScriptSubLayer_o *this, const MethodInfo *method)
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


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_cameraPosition(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return this->fields.positionCamera;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_cameraRoll1(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.rollCamera1;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_cameraRoll2(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.rollCamera2;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_cameraScale(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.scaleCamera;
}


UnityEngine_Material_o *__fastcall ScriptSubLayer__get_edgeMaskSubMaterial(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return this->fields._edgeMaskSubMaterial_k__BackingField;
}


ScriptActionRenderEffectController_o *__fastcall ScriptSubLayer__get_effectController(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return this->fields._effectController_k__BackingField;
}


bool __fastcall ScriptSubLayer__get_isRendering(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._isRendering_k__BackingField;
}


System_String_o *__fastcall ScriptSubLayer__get_layerKey(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._layerKey_k__BackingField;
}


ExUIMeshRenderer_o *__fastcall ScriptSubLayer__get_mesh(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.meshRender;
}


UnityEngine_RenderTexture_o *__fastcall ScriptSubLayer__get_renderTexture(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return this->fields._renderTexture_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_root(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.renderRoot;
}


void __fastcall ScriptSubLayer__set_IsExecuteStretch(ScriptSubLayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExecuteStretch_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__set_backgroundColor(
        ScriptSubLayer_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._backgroundColor_k__BackingField = value;
}


void __fastcall ScriptSubLayer__set_edgeMaskSubMaterial(
        ScriptSubLayer_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._edgeMaskSubMaterial_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._edgeMaskSubMaterial_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ScriptSubLayer__set_effectController(
        ScriptSubLayer_o *this,
        ScriptActionRenderEffectController_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._effectController_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._effectController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ScriptSubLayer__set_isRendering(ScriptSubLayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._isRendering_k__BackingField = value;
}


void __fastcall ScriptSubLayer__set_layerKey(ScriptSubLayer_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._layerKey_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._layerKey_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ScriptSubLayer__set_renderTexture(
        ScriptSubLayer_o *this,
        UnityEngine_RenderTexture_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._renderTexture_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._renderTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer_ShakeParam___ctor(
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


void __fastcall ScriptSubLayer_ShakeParam__Reset(ScriptSubLayer_ShakeParam_o this, const MethodInfo *method)
{
  method->methodPointer = 0LL;
  method->virtualMethodPointer = 0LL;
}