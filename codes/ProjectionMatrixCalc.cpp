void __fastcall ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Int32_array **v18; // x1
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E87F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_Renderer__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16232/*"_ProjectorMatrixVP"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16233/*"_ProjectorPos"*/, v15, v16, v17);
    byte_42E87F7 = 1;
  }
  LODWORD(this->fields._targetRenderers) = 1065353216;
  *(_QWORD *)&this->fields._farClipPlane = 0x42C800003C23D70ALL;
  v18 = (System_Int32_array **)StringLiteral_16232/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16232/*"_ProjectorMatrixVP"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._shaderPropertyName_Pos, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Int32_array **)StringLiteral_16233/*"_ProjectorPos"*/;
  *(_QWORD *)&this->fields._useRendererBounds = StringLiteral_16233/*"_ProjectorPos"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._useRendererBounds, v19, v20, v21, v22, v23, v24, v25);
  BYTE1(this->fields.workRenderers) = 1;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this[1].klass = (ProjectionMatrixCalc_c *)v26;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  ProjectionMatrixCalc_c *klass; // x8
  UnityEngine_Matrix4x4_o *v20; // x0
  const MethodInfo *v21; // x2
  float v22; // s8
  float v23; // s9
  float v24; // s10
  float v25; // s11
  float v26; // s8
  float y; // s9
  float v28; // s4
  float v29; // s5
  float v30; // s6
  float v31; // s7
  UnityEngine_Material_array *materials; // x0
  __int64 v33; // x1
  UnityEngine_Material_array *v34; // x20
  int max_length; // w8
  int i; // w23
  System_String_o *shaderPropertyName_Pos; // x1
  UnityEngine_Material_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x0
  UnityEngine_Matrix4x4_o v41; // [xsp+0h] [xbp-2E0h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+40h] [xbp-2A0h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+80h] [xbp-260h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+C0h] [xbp-220h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+100h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v46; // [xsp+140h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+180h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+1C0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v49; // [xsp+1E0h] [xbp-100h] BYREF
  MethodInfo methoda; // [xsp+200h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v51; // [xsp+250h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E87F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__get_Count__, v14, v15, v16);
    byte_42E87F5 = 1;
  }
  memset(&methoda, 0, sizeof(methoda));
  memset(&v49, 0, sizeof(v49));
  memset(&v48, 0, sizeof(v48));
  memset(&v51, 0, sizeof(v51));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_28;
  if ( SLODWORD(klass->_1.namespaze) < 1 )
    return;
  v52.fields.x = 1.0;
  v52.fields.z = -1.0;
  v52.fields.y = 1.0;
  UnityEngine_Matrix4x4__Scale(&v46, v52, 0LL);
  v47 = v46;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__get_worldToLocalMatrix(&v46, transform, 0LL);
  v44 = v46;
  v45 = v47;
  v20 = UnityEngine_Matrix4x4__op_Multiply(&v46, &v45, &v44, 0LL);
  v51 = v46;
  v22 = *(float *)&this->fields._targetRenderers;
  v23 = -v22;
  if ( LOBYTE(this->fields.workRenderers) )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v47,
      (ProjectionMatrixCalc_o *)v20,
      (System_Collections_Generic_List_Renderer__o *)this[1].klass,
      v21);
    *(_QWORD *)&v49.fields.m_Extents.fields.y = *(_QWORD *)&v47.fields.m01;
    *(_OWORD *)&v49.fields.m_Center.fields.x = *(_OWORD *)&v47.fields.m00;
    v24 = v23 - COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v49, 0LL));
    v25 = v22 + COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v49, 0LL));
    extents = UnityEngine_Bounds__get_extents(&v49, 0LL);
    v23 = v23 - extents.fields.y;
    v54 = UnityEngine_Bounds__get_extents(&v49, 0LL);
    v22 = v22 + v54.fields.y;
  }
  else
  {
    v25 = *(float *)&this->fields._targetRenderers;
    v24 = -v22;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v47,
    v24,
    v25,
    v23,
    v22,
    this->fields._farClipPlane,
    this->fields._orthographicSize,
    0LL);
  v43 = v47;
  v42 = v51;
  UnityEngine_Matrix4x4__op_Multiply(&v47, &v43, &v42, 0LL);
  *(UnityEngine_Matrix4x4_o *)&methoda.name = v47;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  LODWORD(v26) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  forward = UnityEngine_Transform__get_forward(transform, 0LL);
  y = forward.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (*(UnityEngine_Vector3_o *)&v56.fields.x = UnityEngine_Transform__get_forward(transform, 0LL),
        v56.fields.w = 0.0,
        v56.fields.x = v26,
        v56.fields.y = y,
        UnityEngine_Vector4___ctor(v56, v28, v29, v30, v31, &methoda),
        (transform = (UnityEngine_Transform_o *)this[1].klass) == 0LL) )
  {
LABEL_28:
    sub_B5D69C(transform, v18);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v48.fields.current = *(Il2CppObject **)&v47.fields.m01;
  *(_OWORD *)&v48.fields.list = *(_OWORD *)&v47.fields.m00;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v48.fields.current )
      sub_B5D69C(0LL, v39);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v48.fields.current, 0LL);
    v34 = materials;
    if ( !materials )
      sub_B5D69C(0LL, v33);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
          v40 = sub_B5D6C8(materials);
          sub_B5D668(v40, 0LL);
        }
        shaderPropertyName_Pos = this->fields._shaderPropertyName_Pos;
        v38 = v34->m_Items[i];
        v47 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
        if ( !v38 )
          sub_B5D69C(materials, shaderPropertyName_Pos);
        v41 = v47;
        UnityEngine_Material__SetMatrix(v38, shaderPropertyName_Pos, &v41, 0LL);
        *(_QWORD *)&v57.fields.x = methoda.methodPointer;
        *(_QWORD *)&v57.fields.z = methoda.invoker_method;
        UnityEngine_Material__SetVector(v38, *(System_String_o **)&this->fields._useRendererBounds, v57, 0LL);
        max_length = v34->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ProjectionMatrixCalc_c *klass; // x0

  if ( (byte_42E87F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__Clear__, (_DWORD)method, v2, v3);
    byte_42E87F4 = 1;
  }
  if ( BYTE1(this->fields.workRenderers) )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(this, method);
  klass = this[1].klass;
  if ( !klass )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_Renderer__Clear__);
}


void __fastcall ProjectionMatrixCalc__OnDrawGizmos(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  ProjectionMatrixCalc_o *v5; // x0
  const MethodInfo *v6; // x2
  float v7; // s9
  int workRenderers_low; // w8
  float v9; // s10
  float v10; // s11
  float v11; // s12
  __int128 v12; // q0
  __int128 v13; // q1
  __int128 v14; // q2
  __int128 v15; // q3
  float farClipPlane; // s0
  float v17; // s8
  float v18; // s13
  UnityEngine_Matrix4x4_o v19; // [xsp+0h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v20; // [xsp+40h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v21; // [xsp+80h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v22; // [xsp+C0h] [xbp-120h]
  UnityEngine_Matrix4x4_o v23[2]; // [xsp+100h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v24; // [xsp+188h] [xbp-58h] BYREF
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  memset(&v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  UnityEngine_Gizmos__get_matrix(&v21, 0LL);
  v22 = v21;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v4);
  UnityEngine_Transform__get_localToWorldMatrix(&v21, transform, 0LL);
  v20 = v21;
  UnityEngine_Gizmos__set_matrix(&v20, 0LL);
  v7 = *(float *)&this->fields._targetRenderers;
  workRenderers_low = LOBYTE(this->fields.workRenderers);
  v9 = -v7;
  v23[0] = v22;
  if ( workRenderers_low )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      &v24,
      v5,
      (System_Collections_Generic_List_Renderer__o *)this[1].klass,
      v6);
    v10 = v9 - COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v24, 0LL));
    v11 = v7 + COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v24, 0LL));
    extents = UnityEngine_Bounds__get_extents(&v24, 0LL);
    v9 = v9 - extents.fields.y;
    v26 = UnityEngine_Bounds__get_extents(&v24, 0LL);
    v7 = v7 + v26.fields.y;
    v13 = *(_OWORD *)&v23[0].fields.m02;
    v12 = *(_OWORD *)&v23[0].fields.m03;
    v15 = *(_OWORD *)&v23[0].fields.m00;
    v14 = *(_OWORD *)&v23[0].fields.m01;
  }
  else
  {
    v13 = *(_OWORD *)&v22.fields.m02;
    v12 = *(_OWORD *)&v22.fields.m03;
    v15 = *(_OWORD *)&v22.fields.m00;
    v14 = *(_OWORD *)&v22.fields.m01;
    v11 = v7;
    v10 = -v7;
  }
  *(_OWORD *)&v23[1].fields.m02 = v13;
  *(_OWORD *)&v23[1].fields.m03 = v12;
  *(_OWORD *)&v23[1].fields.m00 = v15;
  *(_OWORD *)&v23[1].fields.m01 = v14;
  farClipPlane = this->fields._farClipPlane;
  v17 = this->fields._orthographicSize - farClipPlane;
  v18 = farClipPlane + (float)(v17 * 0.5);
  forward = UnityEngine_Vector3__get_forward(0LL);
  forward.fields.x = forward.fields.x * v18;
  forward.fields.y = forward.fields.y * v18;
  forward.fields.z = forward.fields.z * v18;
  v28.fields.x = v11 - v10;
  v28.fields.y = v7 - v9;
  v28.fields.z = v17;
  UnityEngine_Gizmos__DrawWireCube(forward, v28, 0LL);
  v19 = v23[1];
  UnityEngine_Gizmos__set_matrix(&v19, 0LL);
}


UnityEngine_Bounds_o *__fastcall ProjectionMatrixCalc__calcRenderersBounds(
        UnityEngine_Bounds_o *retstr,
        ProjectionMatrixCalc_o *this,
        System_Collections_Generic_List_Renderer__o *renderers,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  Il2CppObject *current; // x20
  _BOOL8 v20; // x0
  __int64 v21; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Bounds_o *result; // x0
  __int128 v26; // q0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+50h] [xbp-60h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E87F6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__,
      (_DWORD)renderers,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v13, v14, v15);
    this = (ProjectionMatrixCalc_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42E87F6 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  memset(&v30, 0, sizeof(v30));
  if ( !renderers )
    sub_B5D69C(this, renderers);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)renderers,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v29.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v20 )
    {
      if ( !current )
        sub_B5D69C(v20, v21);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0LL) )
      {
        size = UnityEngine_Bounds__get_size((UnityEngine_Bounds_o *)&v30, 0LL);
        x = size.fields.x;
        y = size.fields.y;
        z = size.fields.z;
        zero = UnityEngine_Vector3__get_zero(0LL);
        v32.fields.x = x;
        v32.fields.y = y;
        v32.fields.z = z;
        if ( UnityEngine_Vector3__op_Equality(v32, zero, 0LL) )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v28, (UnityEngine_Renderer_o *)current, 0LL);
          v30 = v28;
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v28, (UnityEngine_Renderer_o *)current, 0LL);
          v27 = v28;
          UnityEngine_Bounds__Encapsulate_41559312((UnityEngine_Bounds_o *)&v30, (UnityEngine_Bounds_o *)&v27, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  v26 = *(_OWORD *)&v30.fields.list;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v30.fields.current;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v26;
  return result;
}


void __fastcall ProjectionMatrixCalc__destroyWorkRenderersMaterials(
        ProjectionMatrixCalc_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ProjectionMatrixCalc_c *klass; // x0
  Il2CppObject *current; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v22; // x1
  UnityEngine_Material_array *v23; // x19
  __int64 v24; // x8
  unsigned __int64 v25; // x23
  UnityEngine_Object_o *v26; // x20
  __int64 v27; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E87F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E87F2 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  klass = this[1].klass;
  if ( !klass )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v29.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v19 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v19 )
    {
      if ( !current )
        sub_B5D69C(v19, v20);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
      v23 = materials;
      if ( !materials )
        sub_B5D69C(0LL, v22);
      v24 = *(_QWORD *)&materials->max_length;
      if ( (int)v24 >= 1 )
      {
        v25 = 0LL;
        do
        {
          if ( v25 >= (unsigned int)v24 )
          {
            v27 = sub_B5D6C8(materials);
            sub_B5D668(v27, 0LL);
          }
          v26 = (UnityEngine_Object_o *)v23->m_Items[v25];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_35620448(v26, 0LL);
          LODWORD(v24) = v23->max_length;
          ++v25;
        }
        while ( (__int64)v25 < (int)v24 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__updateWorkRenderers(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  __int64 v33; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int64 v35; // x1
  struct System_String_o *shaderPropertyName_MatrixVP; // x0
  Il2CppObject *current; // x21
  _BOOL8 v38; // x0
  __int64 v39; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v41; // x1
  UnityEngine_Material_array *v42; // x21
  __int64 v43; // x8
  unsigned __int64 v44; // x28
  UnityEngine_Object_o *v45; // x22
  __int64 v46; // x1
  __int64 v47; // x1
  ProjectionMatrixCalc_c *v48; // x0
  Il2CppObject *v49; // x20
  _BOOL8 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  ProjectionMatrixCalc_c *v53; // x0
  __int64 v54; // x1
  ProjectionMatrixCalc_c *v55; // x0
  __int64 v56; // x0
  _BYTE v57[40]; // [xsp+0h] [xbp-A0h] BYREF
  int v58; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E87F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__Contains__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__Remove__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_Renderer__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    byte_42E87F3 = 1;
  }
  memset(&i, 0, sizeof(i));
  v58 = 0;
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Renderer___ctor__);
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
  if ( !klass )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v57,
    klass,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v57;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
    if ( !shaderPropertyName_MatrixVP )
      sub_B5D69C(0LL, v35);
    current = i.fields.current;
    v38 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)shaderPropertyName_MatrixVP,
            (WarBoardManager_TaskList_o *)i.fields.current,
            (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v38 )
    {
      if ( !v32 )
        sub_B5D69C(v38, v39);
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v32,
              (WarBoardManager_TaskList_o *)current,
              (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v32,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Renderer__Add__);
    }
  }
  *(_DWORD *)&v57[4 * v58++ + 24] = 83;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v58 && *(_DWORD *)&v57[4 * v58 + 20] == 83 )
    --v58;
  if ( BYTE1(this->fields.workRenderers) )
  {
    if ( !v32 )
      goto LABEL_64;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = *(System_Collections_Generic_List_Enumerator_T__o *)v57;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields.current )
        sub_B5D69C(0LL, v46);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields.current, 0LL);
      v42 = materials;
      if ( !materials )
        sub_B5D69C(0LL, v41);
      v43 = *(_QWORD *)&materials->max_length;
      if ( (int)v43 >= 1 )
      {
        v44 = 0LL;
        do
        {
          if ( v44 >= (unsigned int)v43 )
          {
            v56 = sub_B5D6C8(materials);
            sub_B5D668(v56, 0LL);
          }
          v45 = (UnityEngine_Object_o *)v42->m_Items[v44];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_35620448(v45, 0LL);
          LODWORD(v43) = v42->max_length;
          ++v44;
        }
        while ( (__int64)v44 < (int)v43 );
      }
    }
    *(_DWORD *)&v57[4 * v58++ + 24] = 165;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    if ( v58 && *(_DWORD *)&v57[4 * v58 + 20] == 165 )
      --v58;
  }
  if ( !v32 )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v57;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v48,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v48 = this[1].klass;
    if ( !v48 )
      sub_B5D69C(0LL, v47);
  }
  *(_DWORD *)&v57[4 * v58++ + 24] = 222;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v58 && *(_DWORD *)&v57[4 * v58 + 20] == 222 )
    --v58;
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._shaderPropertyName_MatrixVP;
  if ( !klass )
LABEL_64:
    sub_B5D69C(klass, v33);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v57,
    klass,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v57;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v49 = i.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v50 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL);
    if ( v50 )
    {
      if ( !v49 )
        sub_B5D69C(v50, v51);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v49, 0LL) )
      {
        v53 = this[1].klass;
        if ( !v53 )
          sub_B5D69C(0LL, v52);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v53,
                (WarBoardManager_TaskList_o *)v49,
                (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v55 = this[1].klass;
          if ( !v55 )
            sub_B5D69C(0LL, v54);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Renderer__Add__);
        }
      }
    }
  }
  *(_DWORD *)&v57[4 * v58++ + 24] = 317;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v58 && *(_DWORD *)&v57[4 * v58 + 20] == 317 )
    --v58;
}