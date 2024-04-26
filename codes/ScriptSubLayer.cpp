void __fastcall ScriptSubLayer___ctor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43576DD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
    sub_B70694(&System_Collections_Generic_List_ScriptCharaData__TypeInfo);
    byte_43576DD = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  this->fields.listCharaData = (struct System_Collections_Generic_List_ScriptCharaData__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.listCharaData,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_43576DB & 1) == 0 )
  {
    sub_B70694(&ScriptActionRenderEffectController_TypeInfo);
    byte_43576DB = 1;
  }
  meshRender = this->fields.meshRender;
  if ( !meshRender )
    sub_B7076C(0LL, method);
  material = ExUIMeshRenderer__get_material(meshRender, 0LL);
  v5 = (ScriptActionRenderEffectController_o *)sub_B70764(ScriptActionRenderEffectController_TypeInfo);
  ScriptActionRenderEffectController___ctor(v5, material, 0LL);
  this->fields._effectController_k__BackingField = v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._effectController_k__BackingField,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall ScriptSubLayer__CreateRenderTexture(ScriptSubLayer_o *this, const MethodInfo *method)
{
  struct UnityEngine_RenderTexture_o *Temporary_36126740; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x1
  UnityEngine_Object_o *renderTexture_k__BackingField; // x0

  if ( (byte_43576DA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_13778/*"TempRenderTexture"*/);
    byte_43576DA = 1;
  }
  Temporary_36126740 = UnityEngine_RenderTexture__GetTemporary_36126740(1024, 1024, 0, 0, 0LL);
  this->fields._renderTexture_k__BackingField = Temporary_36126740;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._renderTexture_k__BackingField,
    (System_Int32_array **)Temporary_36126740,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !renderTexture_k__BackingField
    || (UnityEngine_Object__set_name(renderTexture_k__BackingField, (System_String_o *)StringLiteral_13778/*"TempRenderTexture"*/, 0LL),
        (renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields.meshRender) == 0LL) )
  {
    sub_B7076C(renderTexture_k__BackingField, v10);
  }
  ExUIMeshRenderer__SetImage(
    (ExUIMeshRenderer_o *)renderTexture_k__BackingField,
    (UnityEngine_Texture_o *)this->fields._renderTexture_k__BackingField,
    0LL);
}


void __fastcall ScriptSubLayer__Init(ScriptSubLayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *renderTexture_k__BackingField; // x21
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  ExUIMeshRenderer_o *meshRender; // x0
  System_Int32_array **v12; // x1
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  struct UnityEngine_Color_o v17; // q0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  struct UnityEngine_Color_o v38; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43576D9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData__Clear__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43576D9 = 1;
  }
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(renderTexture_k__BackingField, 0LL, 0LL) )
  {
    meshRender = this->fields.meshRender;
    if ( !meshRender )
      goto LABEL_12;
    ExUIMeshRenderer__ClearImage(meshRender, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(this->fields._renderTexture_k__BackingField, 0LL);
  }
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._layerKey_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields._layerKey_k__BackingField, v12, v5, v6, v7, v8, v9, v10);
  v39.fields.r = 0.0;
  v39.fields.g = 0.0;
  v39.fields.b = 0.0;
  v39.fields.a = 0.0;
  this->fields._isRendering_k__BackingField = 0;
  v38 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v39, v13, v14, v15, v16, (const MethodInfo *)&v38);
  v17 = v38;
  this->fields._renderTexture_k__BackingField = 0LL;
  this->fields._backgroundColor_k__BackingField = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._renderTexture_k__BackingField,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._effectController_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._effectController_k__BackingField,
    0LL,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  meshRender = (ExUIMeshRenderer_o *)this->fields.listCharaData;
  if ( !meshRender
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)meshRender,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ScriptCharaData__Clear__),
        this->fields.subLayerMask = 0LL,
        sub_B70630((BattleServantConfConponent_o *)&this->fields.subLayerMask, 0LL, v30, v31, v32, v33, v34, v35),
        (meshRender = (ExUIMeshRenderer_o *)this->fields.renderRoot) == 0LL) )
  {
LABEL_12:
    sub_B7076C(meshRender, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)meshRender, 0, 0LL);
  ScriptSubLayer__SetDepth(this, 1.0, v36);
  ScriptSubLayer__SetEdgeMaskSubMaterial(this, 0LL, v37);
}


void __fastcall ScriptSubLayer__MoveAlphaCharaData(
        ScriptSubLayer_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_43576D6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43576D6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listCharaData,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v10.fields.current;
    if ( v10.fields.current )
    {
      klass = v10.fields.current[3].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
        ScriptCharaData__MoveAlpha((ScriptCharaData_o *)current, duration, alpha, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__RegistCharaData(
        ScriptSubLayer_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0

  if ( (byte_43576D3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData__Add__);
    sub_B70694(&StringLiteral_12798/*"ScriptRenderSub"*/);
    byte_43576D3 = 1;
  }
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listCharaData,
          (EventMissionProgressRequest_Argument_ProgressData_o *)charaData,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ScriptCharaData__Add__),
        listCharaData = (struct System_Collections_Generic_List_ScriptCharaData__o *)UnityEngine_LayerMask__NameToLayer(
                                                                                       (System_String_o *)StringLiteral_12798/*"ScriptRenderSub"*/,
                                                                                       0LL),
        !charaData) )
  {
    sub_B7076C(listCharaData, charaData);
  }
  ScriptCharaData__SetLayer(charaData, (int32_t)listCharaData, 0LL);
}


void __fastcall ScriptSubLayer__RemoveCharaData(
        ScriptSubLayer_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *listCharaData; // x0

  if ( (byte_43576D2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
    byte_43576D2 = 1;
  }
  listCharaData = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_B7076C(0LL, charaData);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    listCharaData,
    (WarBoardManager_TaskList_o *)charaData,
    (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
}


void __fastcall ScriptSubLayer__RemoveInvalidCharaData(ScriptSubLayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int v11; // w19
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-88h] BYREF
  int v13[2]; // [xsp+20h] [xbp-70h]
  int v14; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_43576D4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
    sub_B70694(&System_Collections_Generic_List_ScriptCharaData__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43576D4 = 1;
  }
  memset(&i, 0, sizeof(i));
  v14 = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listCharaData,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  i = v12;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = i.fields.current;
    if ( i.fields.current )
    {
      klass = i.fields.current[3].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL);
      if ( v8 )
      {
        if ( !v3 )
          sub_B7076C(v8, v9);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ScriptCharaData__Add__);
      }
    }
  }
  v13[0] = 77;
  v14 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
  v14 = 0;
  if ( !v3 )
LABEL_22:
    sub_B7076C(listCharaData, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  for ( i = v12;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
        ScriptSubLayer__RemoveCharaData(this, (ScriptCharaData_o *)i.fields.current, v10) )
  {
    ;
  }
  v13[0] = 126;
  v11 = ++v14;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
  if ( v11 && v13[v11 - 1] == 126 )
    v14 = v11 - 1;
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
    sub_B7076C(meshRender, method);
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
  BattleServantConfConponent_o *p_edgeMaskSubMaterial_k__BackingField; // x20
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Material_o *edgeMaskSubMaterial_k__BackingField; // t1
  UnityEngine_Object_o *klass; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *v15; // x21

  if ( (byte_43576D8 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43576D8 = 1;
  }
  edgeMaskSubMaterial_k__BackingField = this->fields._edgeMaskSubMaterial_k__BackingField;
  p_edgeMaskSubMaterial_k__BackingField = (BattleServantConfConponent_o *)&this->fields._edgeMaskSubMaterial_k__BackingField;
  v6 = (UnityEngine_Object_o *)edgeMaskSubMaterial_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v6, (UnityEngine_Object_o *)mat, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_edgeMaskSubMaterial_k__BackingField->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v15 = (UnityEngine_Object_o *)p_edgeMaskSubMaterial_k__BackingField->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v15, 0LL);
    }
    p_edgeMaskSubMaterial_k__BackingField->klass = (BattleServantConfConponent_c *)mat;
    sub_B70630(p_edgeMaskSubMaterial_k__BackingField, (System_Int32_array **)mat, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall ScriptSubLayer__SetFilterCharaData(
        ScriptSubLayer_o *this,
        System_String_o *filterName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43576D7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43576D7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    sub_B7076C(0LL, filterName);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listCharaData,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v8.fields.current;
    if ( v8.fields.current )
    {
      klass = v8.fields.current[3].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        white = UnityEngine_Color__get_white(0LL);
        ScriptCharaData__SetFilter((ScriptCharaData_o *)current, filterName, white, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetLayer(ScriptSubLayer_o *this, int32_t layer, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_43576DC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43576DC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    sub_B7076C(0LL, *(_QWORD *)&layer);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listCharaData,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v8.fields.current;
    if ( v8.fields.current )
    {
      klass = v8.fields.current[3].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
        ScriptCharaData__SetLayer((ScriptCharaData_o *)current, layer, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__SetLayerActive(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  const MethodInfo *v4; // x2

  if ( (byte_43576D5 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12798/*"ScriptRenderSub"*/);
    byte_43576D5 = 1;
  }
  v3 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_12798/*"ScriptRenderSub"*/, 0LL);
  ScriptSubLayer__SetLayer(this, v3, v4);
}


void __fastcall ScriptSubLayer__SetLayerKey(ScriptSubLayer_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._layerKey_k__BackingField = key;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._layerKey_k__BackingField,
    (System_Int32_array **)key,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptSubLayer__SetMaskLayer(
        ScriptSubLayer_o *this,
        ScriptSubLayer_o *maskLayer,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.subLayerMask = maskLayer;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.subLayerMask,
    (System_Int32_array **)maskLayer,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptSubLayer__SetRendering(ScriptSubLayer_o *this, bool rendering, const MethodInfo *method)
{
  bool v4; // w22
  UnityEngine_Object_o *subLayerMask; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1

  v4 = rendering;
  while ( 1 )
  {
    if ( (byte_43576D1 & 1) == 0 )
    {
      sub_B70694(&UnityEngine_Object_TypeInfo);
      byte_43576D1 = 1;
    }
    this->fields._isRendering_k__BackingField = v4;
    subLayerMask = (UnityEngine_Object_o *)this->fields.subLayerMask;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = UnityEngine_Object__op_Inequality(subLayerMask, 0LL, 0LL);
    if ( !v6 )
      break;
    this = this->fields.subLayerMask;
    if ( !this )
      sub_B7076C(v6, v7);
  }
}


void __fastcall ScriptSubLayer__StartSubLayer(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  ScriptSubLayer__Init(this, method);
  ScriptSubLayer__CreateRenderTexture(this, v3);
  ScriptSubLayer__CreateEffectController(this, v4);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._edgeMaskSubMaterial_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._edgeMaskSubMaterial_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptSubLayer__set_effectController(
        ScriptSubLayer_o *this,
        ScriptActionRenderEffectController_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._effectController_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._effectController_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptSubLayer__set_isRendering(ScriptSubLayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._isRendering_k__BackingField = value;
}


void __fastcall ScriptSubLayer__set_layerKey(ScriptSubLayer_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._layerKey_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._layerKey_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptSubLayer__set_renderTexture(
        ScriptSubLayer_o *this,
        UnityEngine_RenderTexture_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._renderTexture_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._renderTexture_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}