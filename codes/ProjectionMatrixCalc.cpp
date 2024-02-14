void __fastcall ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42144CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_Renderer__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_16088/*"_ProjectorMatrixVP"*/, v10);
    sub_B0D8A4(&StringLiteral_16089/*"_ProjectorPos"*/, v11);
    byte_42144CF = 1;
  }
  LODWORD(this->fields._targetRenderers) = 1065353216;
  *(_QWORD *)&this->fields._farClipPlane = 0x42C800003C23D70ALL;
  v12 = (System_Int32_array **)StringLiteral_16088/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16088/*"_ProjectorMatrixVP"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._shaderPropertyName_Pos, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_16089/*"_ProjectorPos"*/;
  *(_QWORD *)&this->fields._useRendererBounds = StringLiteral_16089/*"_ProjectorPos"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._useRendererBounds, v13, v14, v15, v16, v17, v18, v19);
  BYTE1(this->fields.workRenderers) = 1;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this[1].klass = (ProjectionMatrixCalc_c *)v22;
  sub_B0D840((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  ProjectionMatrixCalc_c *klass; // x8
  UnityEngine_Matrix4x4_o *v9; // x0
  const MethodInfo *v10; // x2
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  float v15; // s8
  float y; // s9
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  UnityEngine_Material_array *materials; // x0
  UnityEngine_Material_array *v22; // x20
  int max_length; // w8
  int i; // w23
  System_String_o *shaderPropertyName_Pos; // x1
  UnityEngine_Material_o *v26; // x21
  __int64 v27; // x0
  UnityEngine_Matrix4x4_o v28; // [xsp+0h] [xbp-2E0h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+40h] [xbp-2A0h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+80h] [xbp-260h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+C0h] [xbp-220h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+100h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+140h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+180h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+1C0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v36; // [xsp+1E0h] [xbp-100h] BYREF
  MethodInfo methoda; // [xsp+200h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+250h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42144CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__get_Count__, v6);
    byte_42144CD = 1;
  }
  memset(&methoda, 0, sizeof(methoda));
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  memset(&v38, 0, sizeof(v38));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_28;
  if ( SLODWORD(klass->_1.namespaze) < 1 )
    return;
  v39.fields.x = 1.0;
  v39.fields.z = -1.0;
  v39.fields.y = 1.0;
  UnityEngine_Matrix4x4__Scale(&v33, v39, 0LL);
  v34 = v33;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__get_worldToLocalMatrix(&v33, transform, 0LL);
  v31 = v33;
  v32 = v34;
  v9 = UnityEngine_Matrix4x4__op_Multiply(&v33, &v32, &v31, 0LL);
  v38 = v33;
  v11 = *(float *)&this->fields._targetRenderers;
  v12 = -v11;
  if ( LOBYTE(this->fields.workRenderers) )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v34,
      (ProjectionMatrixCalc_o *)v9,
      (System_Collections_Generic_List_Renderer__o *)this[1].klass,
      v10);
    *(_QWORD *)&v36.fields.m_Extents.fields.y = *(_QWORD *)&v34.fields.m01;
    *(_OWORD *)&v36.fields.m_Center.fields.x = *(_OWORD *)&v34.fields.m00;
    v13 = v12 - COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v36, 0LL));
    v14 = v11 + COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v36, 0LL));
    extents = UnityEngine_Bounds__get_extents(&v36, 0LL);
    v12 = v12 - extents.fields.y;
    v41 = UnityEngine_Bounds__get_extents(&v36, 0LL);
    v11 = v11 + v41.fields.y;
  }
  else
  {
    v14 = *(float *)&this->fields._targetRenderers;
    v13 = -v11;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v34,
    v13,
    v14,
    v12,
    v11,
    this->fields._farClipPlane,
    this->fields._orthographicSize,
    0LL);
  v30 = v34;
  v29 = v38;
  UnityEngine_Matrix4x4__op_Multiply(&v34, &v30, &v29, 0LL);
  *(UnityEngine_Matrix4x4_o *)&methoda.name = v34;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  forward = UnityEngine_Transform__get_forward(transform, 0LL);
  y = forward.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (*(UnityEngine_Vector3_o *)&v43.fields.x = UnityEngine_Transform__get_forward(transform, 0LL),
        v43.fields.w = 0.0,
        v43.fields.x = v15,
        v43.fields.y = y,
        UnityEngine_Vector4___ctor(v43, v17, v18, v19, v20, &methoda),
        (transform = (UnityEngine_Transform_o *)this[1].klass) == 0LL) )
  {
LABEL_28:
    sub_B0D97C(transform);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v35.fields.current = *(Il2CppObject **)&v34.fields.m01;
  *(_OWORD *)&v35.fields.list = *(_OWORD *)&v34.fields.m00;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v35.fields.current )
      sub_B0D97C(0LL);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v35.fields.current, 0LL);
    v22 = materials;
    if ( !materials )
      sub_B0D97C(0LL);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
          v27 = sub_B0D9A8(materials);
          sub_B0D948(v27, 0LL);
        }
        shaderPropertyName_Pos = this->fields._shaderPropertyName_Pos;
        v26 = v22->m_Items[i];
        v34 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
        if ( !v26 )
          sub_B0D97C(materials);
        v28 = v34;
        UnityEngine_Material__SetMatrix(v26, shaderPropertyName_Pos, &v28, 0LL);
        *(_QWORD *)&v44.fields.x = methoda.methodPointer;
        *(_QWORD *)&v44.fields.z = methoda.invoker_method;
        UnityEngine_Material__SetVector(v26, *(System_String_o **)&this->fields._useRendererBounds, v44, 0LL);
        max_length = v22->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_c *klass; // x0

  if ( (byte_42144CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__Clear__, method);
    byte_42144CC = 1;
  }
  if ( BYTE1(this->fields.workRenderers) )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(this, method);
  klass = this[1].klass;
  if ( !klass )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_Renderer__Clear__);
}


void __fastcall ProjectionMatrixCalc__OnDrawGizmos(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  ProjectionMatrixCalc_o *v4; // x0
  const MethodInfo *v5; // x2
  float v6; // s9
  int workRenderers_low; // w8
  float v8; // s10
  float v9; // s11
  float v10; // s12
  __int128 v11; // q0
  __int128 v12; // q1
  __int128 v13; // q2
  __int128 v14; // q3
  float farClipPlane; // s0
  float v16; // s8
  float v17; // s13
  UnityEngine_Matrix4x4_o v18; // [xsp+0h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v19; // [xsp+40h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v20; // [xsp+80h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v21; // [xsp+C0h] [xbp-120h]
  UnityEngine_Matrix4x4_o v22[2]; // [xsp+100h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v23; // [xsp+188h] [xbp-58h] BYREF
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  memset(&v23, 0, sizeof(v23));
  memset(v22, 0, sizeof(v22));
  UnityEngine_Gizmos__get_matrix(&v20, 0LL);
  v21 = v20;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  UnityEngine_Transform__get_localToWorldMatrix(&v20, transform, 0LL);
  v19 = v20;
  UnityEngine_Gizmos__set_matrix(&v19, 0LL);
  v6 = *(float *)&this->fields._targetRenderers;
  workRenderers_low = LOBYTE(this->fields.workRenderers);
  v8 = -v6;
  v22[0] = v21;
  if ( workRenderers_low )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      &v23,
      v4,
      (System_Collections_Generic_List_Renderer__o *)this[1].klass,
      v5);
    v9 = v8 - COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v23, 0LL));
    v10 = v6 + COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v23, 0LL));
    extents = UnityEngine_Bounds__get_extents(&v23, 0LL);
    v8 = v8 - extents.fields.y;
    v25 = UnityEngine_Bounds__get_extents(&v23, 0LL);
    v6 = v6 + v25.fields.y;
    v12 = *(_OWORD *)&v22[0].fields.m02;
    v11 = *(_OWORD *)&v22[0].fields.m03;
    v14 = *(_OWORD *)&v22[0].fields.m00;
    v13 = *(_OWORD *)&v22[0].fields.m01;
  }
  else
  {
    v12 = *(_OWORD *)&v21.fields.m02;
    v11 = *(_OWORD *)&v21.fields.m03;
    v14 = *(_OWORD *)&v21.fields.m00;
    v13 = *(_OWORD *)&v21.fields.m01;
    v10 = v6;
    v9 = -v6;
  }
  *(_OWORD *)&v22[1].fields.m02 = v12;
  *(_OWORD *)&v22[1].fields.m03 = v11;
  *(_OWORD *)&v22[1].fields.m00 = v14;
  *(_OWORD *)&v22[1].fields.m01 = v13;
  farClipPlane = this->fields._farClipPlane;
  v16 = this->fields._orthographicSize - farClipPlane;
  v17 = farClipPlane + (float)(v16 * 0.5);
  forward = UnityEngine_Vector3__get_forward(0LL);
  forward.fields.x = forward.fields.x * v17;
  forward.fields.y = forward.fields.y * v17;
  forward.fields.z = forward.fields.z * v17;
  v27.fields.x = v10 - v9;
  v27.fields.y = v6 - v8;
  v27.fields.z = v16;
  UnityEngine_Gizmos__DrawWireCube(forward, v27, 0LL);
  v18 = v22[1];
  UnityEngine_Gizmos__set_matrix(&v18, 0LL);
}


UnityEngine_Bounds_o *__fastcall ProjectionMatrixCalc__calcRenderersBounds(
        UnityEngine_Bounds_o *retstr,
        ProjectionMatrixCalc_o *this,
        System_Collections_Generic_List_Renderer__o *renderers,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Bounds_o *result; // x0
  __int128 v16; // q0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+50h] [xbp-60h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42144CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, renderers);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v8);
    this = (ProjectionMatrixCalc_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_42144CE = 1;
  }
  memset(&v19, 0, sizeof(v19));
  memset(&v20, 0, sizeof(v20));
  if ( !renderers )
    sub_B0D97C(this);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)renderers,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_B0D97C(v11);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0LL) )
      {
        size = UnityEngine_Bounds__get_size((UnityEngine_Bounds_o *)&v20, 0LL);
        x = size.fields.x;
        y = size.fields.y;
        z = size.fields.z;
        zero = UnityEngine_Vector3__get_zero(0LL);
        v22.fields.x = x;
        v22.fields.y = y;
        v22.fields.z = z;
        if ( UnityEngine_Vector3__op_Equality(v22, zero, 0LL) )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v18, (UnityEngine_Renderer_o *)current, 0LL);
          v20 = v18;
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v18, (UnityEngine_Renderer_o *)current, 0LL);
          v17 = v18;
          UnityEngine_Bounds__Encapsulate_40749020((UnityEngine_Bounds_o *)&v20, (UnityEngine_Bounds_o *)&v17, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  v16 = *(_OWORD *)&v20.fields.list;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v20.fields.current;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v16;
  return result;
}


void __fastcall ProjectionMatrixCalc__destroyWorkRenderersMaterials(
        ProjectionMatrixCalc_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ProjectionMatrixCalc_c *klass; // x0
  Il2CppObject *current; // x19
  _BOOL8 v9; // x0
  UnityEngine_Material_array *materials; // x0
  UnityEngine_Material_array *v11; // x19
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42144CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_42144CA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  klass = this[1].klass;
  if ( !klass )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v17.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v9 )
    {
      if ( !current )
        sub_B0D97C(v9);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
      v11 = materials;
      if ( !materials )
        sub_B0D97C(0LL);
      v12 = *(_QWORD *)&materials->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = 0LL;
        do
        {
          if ( v13 >= (unsigned int)v12 )
          {
            v15 = sub_B0D9A8(materials);
            sub_B0D948(v15, 0LL);
          }
          v14 = (UnityEngine_Object_o *)v11->m_Items[v13];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_34935488(v14, 0LL);
          LODWORD(v12) = v11->max_length;
          ++v13;
        }
        while ( (__int64)v13 < (int)v12 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__updateWorkRenderers(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  struct System_String_o *shaderPropertyName_MatrixVP; // x0
  Il2CppObject *current; // x21
  _BOOL8 v17; // x0
  UnityEngine_Material_array *materials; // x0
  UnityEngine_Material_array *v19; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x28
  UnityEngine_Object_o *v22; // x22
  ProjectionMatrixCalc_c *v23; // x0
  Il2CppObject *v24; // x20
  _BOOL8 v25; // x0
  ProjectionMatrixCalc_c *v26; // x0
  ProjectionMatrixCalc_c *v27; // x0
  __int64 v28; // x0
  _BYTE v29[40]; // [xsp+0h] [xbp-A0h] BYREF
  int v30; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42144CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__Contains__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__Remove__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_Renderer__TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_42144CB = 1;
  }
  memset(&i, 0, sizeof(i));
  v30 = 0;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
  if ( !klass )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v29,
    klass,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
    if ( !shaderPropertyName_MatrixVP )
      sub_B0D97C(0LL);
    current = i.fields.current;
    v17 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)shaderPropertyName_MatrixVP,
            (WarBoardManager_TaskList_o *)i.fields.current,
            (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v17 )
    {
      if ( !v13 )
        sub_B0D97C(v17);
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v13,
              (WarBoardManager_TaskList_o *)current,
              (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Renderer__Add__);
    }
  }
  *(_DWORD *)&v29[4 * v30++ + 24] = 83;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v30 && *(_DWORD *)&v29[4 * v30 + 20] == 83 )
    --v30;
  if ( BYTE1(this->fields.workRenderers) )
  {
    if ( !v13 )
      goto LABEL_64;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v13,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields.current )
        sub_B0D97C(0LL);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields.current, 0LL);
      v19 = materials;
      if ( !materials )
        sub_B0D97C(0LL);
      v20 = *(_QWORD *)&materials->max_length;
      if ( (int)v20 >= 1 )
      {
        v21 = 0LL;
        do
        {
          if ( v21 >= (unsigned int)v20 )
          {
            v28 = sub_B0D9A8(materials);
            sub_B0D948(v28, 0LL);
          }
          v22 = (UnityEngine_Object_o *)v19->m_Items[v21];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_34935488(v22, 0LL);
          LODWORD(v20) = v19->max_length;
          ++v21;
        }
        while ( (__int64)v21 < (int)v20 );
      }
    }
    *(_DWORD *)&v29[4 * v30++ + 24] = 165;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    if ( v30 && *(_DWORD *)&v29[4 * v30 + 20] == 165 )
      --v30;
  }
  if ( !v13 )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v13,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v23 = this[1].klass;
    if ( !v23 )
      sub_B0D97C(0LL);
  }
  *(_DWORD *)&v29[4 * v30++ + 24] = 222;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v30 && *(_DWORD *)&v29[4 * v30 + 20] == 222 )
    --v30;
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._shaderPropertyName_MatrixVP;
  if ( !klass )
LABEL_64:
    sub_B0D97C(klass);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v29,
    klass,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v24 = i.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
    if ( v25 )
    {
      if ( !v24 )
        sub_B0D97C(v25);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v24, 0LL) )
      {
        v26 = this[1].klass;
        if ( !v26 )
          sub_B0D97C(0LL);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v26,
                (WarBoardManager_TaskList_o *)v24,
                (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v27 = this[1].klass;
          if ( !v27 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Renderer__Add__);
        }
      }
    }
  }
  *(_DWORD *)&v29[4 * v30++ + 24] = 317;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v30 && *(_DWORD *)&v29[4 * v30 + 20] == 317 )
    --v30;
}