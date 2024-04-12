void __fastcall ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42AFBB2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_B52984(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_B52984(&StringLiteral_16147/*"_ProjectorMatrixVP"*/);
    sub_B52984(&StringLiteral_16148/*"_ProjectorPos"*/);
    byte_42AFBB2 = 1;
  }
  LODWORD(this->fields._targetRenderers) = 1065353216;
  *(_QWORD *)&this->fields._farClipPlane = 0x42C800003C23D70ALL;
  v9 = (System_Int32_array **)StringLiteral_16147/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16147/*"_ProjectorMatrixVP"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields._shaderPropertyName_Pos, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_16148/*"_ProjectorPos"*/;
  *(_QWORD *)&this->fields._useRendererBounds = StringLiteral_16148/*"_ProjectorPos"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields._useRendererBounds, v10, v11, v12, v13, v14, v15, v16);
  BYTE1(this->fields.workRenderers) = 1;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this[1].klass = (ProjectionMatrixCalc_c *)v17;
  sub_B52920((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  ProjectionMatrixCalc_c *klass; // x8
  UnityEngine_Matrix4x4_o *v6; // x0
  const MethodInfo *v7; // x2
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s11
  float v12; // s8
  float y; // s9
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  UnityEngine_Material_array *materials; // x0
  __int64 v19; // x1
  UnityEngine_Material_array *v20; // x20
  int max_length; // w8
  int i; // w23
  System_String_o *shaderPropertyName_Pos; // x1
  UnityEngine_Material_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x0
  UnityEngine_Matrix4x4_o v27; // [xsp+0h] [xbp-2E0h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+40h] [xbp-2A0h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+80h] [xbp-260h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+C0h] [xbp-220h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+100h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+140h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+180h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+1C0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v35; // [xsp+1E0h] [xbp-100h] BYREF
  MethodInfo methoda; // [xsp+200h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+250h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AFBB0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    byte_42AFBB0 = 1;
  }
  memset(&methoda, 0, sizeof(methoda));
  memset(&v35, 0, sizeof(v35));
  memset(&v34, 0, sizeof(v34));
  memset(&v37, 0, sizeof(v37));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_28;
  if ( SLODWORD(klass->_1.namespaze) < 1 )
    return;
  v38.fields.x = 1.0;
  v38.fields.z = -1.0;
  v38.fields.y = 1.0;
  UnityEngine_Matrix4x4__Scale(&v32, v38, 0LL);
  v33 = v32;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__get_worldToLocalMatrix(&v32, transform, 0LL);
  v30 = v32;
  v31 = v33;
  v6 = UnityEngine_Matrix4x4__op_Multiply(&v32, &v31, &v30, 0LL);
  v37 = v32;
  v8 = *(float *)&this->fields._targetRenderers;
  v9 = -v8;
  if ( LOBYTE(this->fields.workRenderers) )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v33,
      (ProjectionMatrixCalc_o *)v6,
      (System_Collections_Generic_List_Renderer__o *)this[1].klass,
      v7);
    *(_QWORD *)&v35.fields.m_Extents.fields.y = *(_QWORD *)&v33.fields.m01;
    *(_OWORD *)&v35.fields.m_Center.fields.x = *(_OWORD *)&v33.fields.m00;
    v10 = v9 - COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v35, 0LL));
    v11 = v8 + COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v35, 0LL));
    extents = UnityEngine_Bounds__get_extents(&v35, 0LL);
    v9 = v9 - extents.fields.y;
    v40 = UnityEngine_Bounds__get_extents(&v35, 0LL);
    v8 = v8 + v40.fields.y;
  }
  else
  {
    v11 = *(float *)&this->fields._targetRenderers;
    v10 = -v8;
  }
  UnityEngine_Matrix4x4__Ortho(&v33, v10, v11, v9, v8, this->fields._farClipPlane, this->fields._orthographicSize, 0LL);
  v29 = v33;
  v28 = v37;
  UnityEngine_Matrix4x4__op_Multiply(&v33, &v29, &v28, 0LL);
  *(UnityEngine_Matrix4x4_o *)&methoda.name = v33;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  forward = UnityEngine_Transform__get_forward(transform, 0LL);
  y = forward.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (*(UnityEngine_Vector3_o *)&v42.fields.x = UnityEngine_Transform__get_forward(transform, 0LL),
        v42.fields.w = 0.0,
        v42.fields.x = v12,
        v42.fields.y = y,
        UnityEngine_Vector4___ctor(v42, v14, v15, v16, v17, &methoda),
        (transform = (UnityEngine_Transform_o *)this[1].klass) == 0LL) )
  {
LABEL_28:
    sub_B52A5C(transform, v4);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v34.fields.current = *(Il2CppObject **)&v33.fields.m01;
  *(_OWORD *)&v34.fields.list = *(_OWORD *)&v33.fields.m00;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v34.fields.current )
      sub_B52A5C(0LL, v25);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v34.fields.current, 0LL);
    v20 = materials;
    if ( !materials )
      sub_B52A5C(0LL, v19);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
          v26 = sub_B52A88(materials);
          sub_B52A28(v26, 0LL);
        }
        shaderPropertyName_Pos = this->fields._shaderPropertyName_Pos;
        v24 = v20->m_Items[i];
        v33 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
        if ( !v24 )
          sub_B52A5C(materials, shaderPropertyName_Pos);
        v27 = v33;
        UnityEngine_Material__SetMatrix(v24, shaderPropertyName_Pos, &v27, 0LL);
        *(_QWORD *)&v43.fields.x = methoda.methodPointer;
        *(_QWORD *)&v43.fields.z = methoda.invoker_method;
        UnityEngine_Material__SetVector(v24, *(System_String_o **)&this->fields._useRendererBounds, v43, 0LL);
        max_length = v20->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_c *klass; // x0

  if ( (byte_42AFBAF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__Clear__);
    byte_42AFBAF = 1;
  }
  if ( BYTE1(this->fields.workRenderers) )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(this, method);
  klass = this[1].klass;
  if ( !klass )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_Renderer__Clear__);
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
    sub_B52A5C(0LL, v4);
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
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Bounds_o *result; // x0
  __int128 v13; // q0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+50h] [xbp-60h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42AFBB1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    this = (ProjectionMatrixCalc_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFBB1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  memset(&v17, 0, sizeof(v17));
  if ( !renderers )
    sub_B52A5C(this, renderers);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)renderers,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v16.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0LL) )
      {
        size = UnityEngine_Bounds__get_size((UnityEngine_Bounds_o *)&v17, 0LL);
        x = size.fields.x;
        y = size.fields.y;
        z = size.fields.z;
        zero = UnityEngine_Vector3__get_zero(0LL);
        v19.fields.x = x;
        v19.fields.y = y;
        v19.fields.z = z;
        if ( UnityEngine_Vector3__op_Equality(v19, zero, 0LL) )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v15, (UnityEngine_Renderer_o *)current, 0LL);
          v17 = v15;
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v15, (UnityEngine_Renderer_o *)current, 0LL);
          v14 = v15;
          UnityEngine_Bounds__Encapsulate_41455164((UnityEngine_Bounds_o *)&v17, (UnityEngine_Bounds_o *)&v14, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  v13 = *(_OWORD *)&v17.fields.list;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v17.fields.current;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v13;
  return result;
}


void __fastcall ProjectionMatrixCalc__destroyWorkRenderersMaterials(
        ProjectionMatrixCalc_o *this,
        const MethodInfo *method)
{
  ProjectionMatrixCalc_c *klass; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v8; // x1
  UnityEngine_Material_array *v9; // x19
  __int64 v10; // x8
  unsigned __int64 v11; // x23
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42AFBAD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFBAD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  klass = this[1].klass;
  if ( !klass )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v15.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_B52A5C(v5, v6);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
      v9 = materials;
      if ( !materials )
        sub_B52A5C(0LL, v8);
      v10 = *(_QWORD *)&materials->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = 0LL;
        do
        {
          if ( v11 >= (unsigned int)v10 )
          {
            v13 = sub_B52A88(materials);
            sub_B52A28(v13, 0LL);
          }
          v12 = (UnityEngine_Object_o *)v9->m_Items[v11];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_35617168(v12, 0LL);
          LODWORD(v10) = v9->max_length;
          ++v11;
        }
        while ( (__int64)v11 < (int)v10 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__updateWorkRenderers(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int64 v6; // x1
  struct System_String_o *shaderPropertyName_MatrixVP; // x0
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v12; // x1
  UnityEngine_Material_array *v13; // x21
  __int64 v14; // x8
  unsigned __int64 v15; // x28
  UnityEngine_Object_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x1
  ProjectionMatrixCalc_c *v19; // x0
  Il2CppObject *v20; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  ProjectionMatrixCalc_c *v24; // x0
  __int64 v25; // x1
  ProjectionMatrixCalc_c *v26; // x0
  __int64 v27; // x0
  _BYTE v28[40]; // [xsp+0h] [xbp-A0h] BYREF
  int v29; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AFBAE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_B52984(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFBAE = 1;
  }
  memset(&i, 0, sizeof(i));
  v29 = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
  if ( !klass )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v28,
    klass,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
    if ( !shaderPropertyName_MatrixVP )
      sub_B52A5C(0LL, v6);
    current = i.fields.current;
    v9 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)shaderPropertyName_MatrixVP,
           (WarBoardManager_TaskList_o *)i.fields.current,
           (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v9 )
    {
      if ( !v3 )
        sub_B52A5C(v9, v10);
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v3,
              (WarBoardManager_TaskList_o *)current,
              (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_Renderer__Add__);
    }
  }
  *(_DWORD *)&v28[4 * v29++ + 24] = 83;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v29 && *(_DWORD *)&v28[4 * v29 + 20] == 83 )
    --v29;
  if ( BYTE1(this->fields.workRenderers) )
  {
    if ( !v3 )
      goto LABEL_64;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v28,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields.current )
        sub_B52A5C(0LL, v17);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields.current, 0LL);
      v13 = materials;
      if ( !materials )
        sub_B52A5C(0LL, v12);
      v14 = *(_QWORD *)&materials->max_length;
      if ( (int)v14 >= 1 )
      {
        v15 = 0LL;
        do
        {
          if ( v15 >= (unsigned int)v14 )
          {
            v27 = sub_B52A88(materials);
            sub_B52A28(v27, 0LL);
          }
          v16 = (UnityEngine_Object_o *)v13->m_Items[v15];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_35617168(v16, 0LL);
          LODWORD(v14) = v13->max_length;
          ++v15;
        }
        while ( (__int64)v15 < (int)v14 );
      }
    }
    *(_DWORD *)&v28[4 * v29++ + 24] = 165;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    if ( v29 && *(_DWORD *)&v28[4 * v29 + 20] == 165 )
      --v29;
  }
  if ( !v3 )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v19,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v19 = this[1].klass;
    if ( !v19 )
      sub_B52A5C(0LL, v18);
  }
  *(_DWORD *)&v28[4 * v29++ + 24] = 222;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v29 && *(_DWORD *)&v28[4 * v29 + 20] == 222 )
    --v29;
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._shaderPropertyName_MatrixVP;
  if ( !klass )
LABEL_64:
    sub_B52A5C(klass, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v28,
    klass,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v20 = i.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
    if ( v21 )
    {
      if ( !v20 )
        sub_B52A5C(v21, v22);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v20, 0LL) )
      {
        v24 = this[1].klass;
        if ( !v24 )
          sub_B52A5C(0LL, v23);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v24,
                (WarBoardManager_TaskList_o *)v20,
                (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v26 = this[1].klass;
          if ( !v26 )
            sub_B52A5C(0LL, v25);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_Renderer__Add__);
        }
      }
    }
  }
  *(_DWORD *)&v28[4 * v29++ + 24] = 317;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v29 && *(_DWORD *)&v28[4 * v29 + 20] == 317 )
    --v29;
}