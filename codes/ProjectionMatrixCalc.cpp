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
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40FA031 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_Renderer__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_15977, v10);
    sub_B16FFC(&StringLiteral_15978, v11);
    byte_40FA031 = 1;
  }
  LODWORD(this->fields._targetRenderers) = 1065353216;
  *(_QWORD *)&this->fields._farClipPlane = 0x42C800003C23D70ALL;
  v12 = (System_Int32_array **)StringLiteral_15977;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_15977;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._shaderPropertyName_Pos, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_15978;
  *(_QWORD *)&this->fields._useRendererBounds = StringLiteral_15978;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._useRendererBounds, v13, v14, v15, v16, v17, v18, v19);
  BYTE1(this->fields.workRenderers) = 1;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this[1].klass = (ProjectionMatrixCalc_c *)v24;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ProjectionMatrixCalc_c *klass; // x8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Matrix4x4_o *v9; // x0
  const MethodInfo *v10; // x2
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  UnityEngine_Transform_o *v15; // x0
  float v16; // s8
  UnityEngine_Transform_o *v17; // x0
  float y; // s9
  UnityEngine_Transform_o *v19; // x0
  float v20; // s4
  float v21; // s5
  float v22; // s6
  float v23; // s7
  ProjectionMatrixCalc_c *v24; // x0
  UnityEngine_Material_array *materials; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Material_array *v28; // x20
  int max_length; // w8
  int i; // w23
  System_String_o *shaderPropertyName_Pos; // x1
  UnityEngine_Material_o *v32; // x21
  UnityEngine_Matrix4x4_o v33; // [xsp+0h] [xbp-2E0h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+40h] [xbp-2A0h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+80h] [xbp-260h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+C0h] [xbp-220h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+100h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+140h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+180h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+1C0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v41; // [xsp+1E0h] [xbp-100h] BYREF
  MethodInfo methoda; // [xsp+200h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+250h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA02F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__get_Count__, v6);
    byte_40FA02F = 1;
  }
  memset(&methoda, 0, sizeof(methoda));
  memset(&v41, 0, sizeof(v41));
  memset(&v40, 0, sizeof(v40));
  memset(&v43, 0, sizeof(v43));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_28;
  if ( SLODWORD(klass->_1.namespaze) < 1 )
    return;
  v44.fields.x = 1.0;
  v44.fields.z = -1.0;
  v44.fields.y = 1.0;
  UnityEngine_Matrix4x4__Scale(&v38, v44, 0LL);
  v39 = v38;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__get_worldToLocalMatrix(&v38, transform, 0LL);
  v36 = v38;
  v37 = v39;
  v9 = UnityEngine_Matrix4x4__op_Multiply(&v38, &v37, &v36, 0LL);
  v43 = v38;
  v11 = *(float *)&this->fields._targetRenderers;
  v12 = -v11;
  if ( LOBYTE(this->fields.workRenderers) )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v39,
      (ProjectionMatrixCalc_o *)v9,
      (System_Collections_Generic_List_Renderer__o *)this[1].klass,
      v10);
    *(_QWORD *)&v41.fields.m_Extents.fields.y = *(_QWORD *)&v39.fields.m01;
    *(_OWORD *)&v41.fields.m_Center.fields.x = *(_OWORD *)&v39.fields.m00;
    v13 = v12 - COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v41, 0LL));
    v14 = v11 + COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v41, 0LL));
    extents = UnityEngine_Bounds__get_extents(&v41, 0LL);
    v12 = v12 - extents.fields.y;
    v46 = UnityEngine_Bounds__get_extents(&v41, 0LL);
    v11 = v11 + v46.fields.y;
  }
  else
  {
    v14 = *(float *)&this->fields._targetRenderers;
    v13 = -v11;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v39,
    v13,
    v14,
    v12,
    v11,
    this->fields._farClipPlane,
    this->fields._orthographicSize,
    0LL);
  v35 = v39;
  v34 = v43;
  UnityEngine_Matrix4x4__op_Multiply(&v39, &v35, &v34, 0LL);
  *(UnityEngine_Matrix4x4_o *)&methoda.name = v39;
  v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v15 )
    goto LABEL_28;
  LODWORD(v16) = (unsigned int)UnityEngine_Transform__get_forward(v15, 0LL);
  v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v17 )
    goto LABEL_28;
  forward = UnityEngine_Transform__get_forward(v17, 0LL);
  y = forward.fields.y;
  v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v19
    || (*(UnityEngine_Vector3_o *)&v48.fields.x = UnityEngine_Transform__get_forward(v19, 0LL),
        v48.fields.w = 0.0,
        v48.fields.x = v16,
        v48.fields.y = y,
        UnityEngine_Vector4___ctor(v48, v20, v21, v22, v23, &methoda),
        (v24 = this[1].klass) == 0LL) )
  {
LABEL_28:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v40.fields.current = *(Il2CppObject **)&v39.fields.m01;
  *(_OWORD *)&v40.fields.list = *(_OWORD *)&v39.fields.m00;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v40.fields.current )
      sub_B170D4();
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v40.fields.current, 0LL);
    v28 = materials;
    if ( !materials )
      sub_B170D4();
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
          sub_B17100(materials, v26, v27);
          sub_B170A0();
        }
        shaderPropertyName_Pos = this->fields._shaderPropertyName_Pos;
        v32 = v28->m_Items[i];
        v39 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
        if ( !v32 )
          sub_B170D4();
        v33 = v39;
        UnityEngine_Material__SetMatrix(v32, shaderPropertyName_Pos, &v33, 0LL);
        *(_QWORD *)&v49.fields.x = methoda.methodPointer;
        *(_QWORD *)&v49.fields.z = methoda.invoker_method;
        UnityEngine_Material__SetVector(v32, *(System_String_o **)&this->fields._useRendererBounds, v49, 0LL);
        max_length = v28->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_c *klass; // x0

  if ( (byte_40FA02E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__Clear__, method);
    byte_40FA02E = 1;
  }
  if ( BYTE1(this->fields.workRenderers) )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(this, method);
  klass = this[1].klass;
  if ( !klass )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_Renderer__Clear__);
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
    sub_B170D4();
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Bounds_o *result; // x0
  __int128 v15; // q0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+50h] [xbp-60h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FA030 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, renderers);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FA030 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  memset(&v19, 0, sizeof(v19));
  if ( !renderers )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)renderers,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0LL) )
      {
        size = UnityEngine_Bounds__get_size((UnityEngine_Bounds_o *)&v19, 0LL);
        x = size.fields.x;
        y = size.fields.y;
        z = size.fields.z;
        zero = UnityEngine_Vector3__get_zero(0LL);
        v21.fields.x = x;
        v21.fields.y = y;
        v21.fields.z = z;
        if ( UnityEngine_Vector3__op_Equality(v21, zero, 0LL) )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v17, (UnityEngine_Renderer_o *)current, 0LL);
          v19 = v17;
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v17, (UnityEngine_Renderer_o *)current, 0LL);
          v16 = v17;
          UnityEngine_Bounds__Encapsulate_40657508((UnityEngine_Bounds_o *)&v19, (UnityEngine_Bounds_o *)&v16, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  v15 = *(_OWORD *)&v19.fields.list;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v19.fields.current;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v15;
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
  UnityEngine_Material_array *materials; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Material_array *v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FA02C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FA02C = 1;
  }
  memset(&v17, 0, sizeof(v17));
  klass = this[1].klass;
  if ( !klass )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v17.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
      v12 = materials;
      if ( !materials )
        sub_B170D4();
      v13 = *(_QWORD *)&materials->max_length;
      if ( (int)v13 >= 1 )
      {
        v14 = 0LL;
        do
        {
          if ( v14 >= (unsigned int)v13 )
          {
            sub_B17100(materials, v10, v11);
            sub_B170A0();
          }
          v15 = (UnityEngine_Object_o *)v12->m_Items[v14];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_34809676(v15, 0LL);
          LODWORD(v13) = v12->max_length;
          ++v14;
        }
        while ( (__int64)v14 < (int)v13 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__updateWorkRenderers(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  ProjectionMatrixCalc_c *klass; // x0
  struct System_String_o *shaderPropertyName_MatrixVP; // x0
  Il2CppObject *current; // x21
  UnityEngine_Material_array *materials; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Material_array *v22; // x21
  __int64 v23; // x8
  unsigned __int64 v24; // x28
  UnityEngine_Object_o *v25; // x22
  ProjectionMatrixCalc_c *v26; // x0
  struct System_String_o *v27; // x0
  Il2CppObject *v28; // x20
  ProjectionMatrixCalc_c *v29; // x0
  ProjectionMatrixCalc_c *v30; // x0
  _BYTE v31[40]; // [xsp+0h] [xbp-A0h] BYREF
  int v32; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FA02D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_Renderer__TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40FA02D = 1;
  }
  memset(&i, 0, sizeof(i));
  v32 = 0;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v31;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
    if ( !shaderPropertyName_MatrixVP )
      sub_B170D4();
    current = i.fields.current;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)shaderPropertyName_MatrixVP,
            (WarBoardManager_TaskList_o *)i.fields.current,
            (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
    {
      if ( !v15 )
        sub_B170D4();
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v15,
              (WarBoardManager_TaskList_o *)current,
              (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Renderer__Add__);
    }
  }
  *(_DWORD *)&v31[4 * v32++ + 24] = 83;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v32 && *(_DWORD *)&v31[4 * v32 + 20] == 83 )
    --v32;
  if ( BYTE1(this->fields.workRenderers) )
  {
    if ( !v15 )
      goto LABEL_64;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v31,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = *(System_Collections_Generic_List_Enumerator_T__o *)v31;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields.current )
        sub_B170D4();
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields.current, 0LL);
      v22 = materials;
      if ( !materials )
        sub_B170D4();
      v23 = *(_QWORD *)&materials->max_length;
      if ( (int)v23 >= 1 )
      {
        v24 = 0LL;
        do
        {
          if ( v24 >= (unsigned int)v23 )
          {
            sub_B17100(materials, v20, v21);
            sub_B170A0();
          }
          v25 = (UnityEngine_Object_o *)v22->m_Items[v24];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_34809676(v25, 0LL);
          LODWORD(v23) = v22->max_length;
          ++v24;
        }
        while ( (__int64)v24 < (int)v23 );
      }
    }
    *(_DWORD *)&v31[4 * v32++ + 24] = 165;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    if ( v32 && *(_DWORD *)&v31[4 * v32 + 20] == 165 )
      --v32;
  }
  if ( !v15 )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v31;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v26,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v26 = this[1].klass;
    if ( !v26 )
      sub_B170D4();
  }
  *(_DWORD *)&v31[4 * v32++ + 24] = 222;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v32 && *(_DWORD *)&v31[4 * v32 + 20] == 222 )
    --v32;
  v27 = this->fields._shaderPropertyName_MatrixVP;
  if ( !v27 )
LABEL_64:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v27,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v31;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v28 = i.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL) )
    {
      if ( !v28 )
        sub_B170D4();
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v28, 0LL) )
      {
        v29 = this[1].klass;
        if ( !v29 )
          sub_B170D4();
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v29,
                (WarBoardManager_TaskList_o *)v28,
                (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v30 = this[1].klass;
          if ( !v30 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Renderer__Add__);
        }
      }
    }
  }
  *(_DWORD *)&v31[4 * v32++ + 24] = 317;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v32 && *(_DWORD *)&v31[4 * v32 + 20] == 317 )
    --v32;
}