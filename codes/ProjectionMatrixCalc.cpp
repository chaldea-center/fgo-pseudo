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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4187A77 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_Renderer__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_16040/*"_ProjectorMatrixVP"*/, v10);
    sub_B2C35C(&StringLiteral_16041/*"_ProjectorPos"*/, v11);
    byte_4187A77 = 1;
  }
  LODWORD(this->fields._targetRenderers) = 1065353216;
  *(_QWORD *)&this->fields._farClipPlane = 0x42C800003C23D70ALL;
  v12 = (System_Int32_array **)StringLiteral_16040/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16040/*"_ProjectorMatrixVP"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._shaderPropertyName_Pos, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_16041/*"_ProjectorPos"*/;
  *(_QWORD *)&this->fields._useRendererBounds = StringLiteral_16041/*"_ProjectorPos"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._useRendererBounds, v13, v14, v15, v16, v17, v18, v19);
  BYTE1(this->fields.workRenderers) = 1;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this[1].klass = (ProjectionMatrixCalc_c *)v20;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  ProjectionMatrixCalc_c *klass; // x8
  UnityEngine_Matrix4x4_o *v10; // x0
  const MethodInfo *v11; // x2
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s11
  float v16; // s8
  float y; // s9
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  UnityEngine_Material_array *materials; // x0
  __int64 v23; // x1
  UnityEngine_Material_array *v24; // x20
  int max_length; // w8
  int i; // w23
  System_String_o *shaderPropertyName_Pos; // x1
  UnityEngine_Material_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x0
  UnityEngine_Matrix4x4_o v31; // [xsp+0h] [xbp-2E0h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+40h] [xbp-2A0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+80h] [xbp-260h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+C0h] [xbp-220h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+100h] [xbp-1E0h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+140h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+180h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+1C0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v39; // [xsp+1E0h] [xbp-100h] BYREF
  MethodInfo methoda; // [xsp+200h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+250h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4187A75 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__get_Count__, v6);
    byte_4187A75 = 1;
  }
  memset(&methoda, 0, sizeof(methoda));
  memset(&v39, 0, sizeof(v39));
  memset(&v38, 0, sizeof(v38));
  memset(&v41, 0, sizeof(v41));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_28;
  if ( SLODWORD(klass->_1.namespaze) < 1 )
    return;
  v42.fields.x = 1.0;
  v42.fields.z = -1.0;
  v42.fields.y = 1.0;
  UnityEngine_Matrix4x4__Scale(&v36, v42, 0LL);
  v37 = v36;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__get_worldToLocalMatrix(&v36, transform, 0LL);
  v34 = v36;
  v35 = v37;
  v10 = UnityEngine_Matrix4x4__op_Multiply(&v36, &v35, &v34, 0LL);
  v41 = v36;
  v12 = *(float *)&this->fields._targetRenderers;
  v13 = -v12;
  if ( LOBYTE(this->fields.workRenderers) )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v37,
      (ProjectionMatrixCalc_o *)v10,
      (System_Collections_Generic_List_Renderer__o *)this[1].klass,
      v11);
    *(_QWORD *)&v39.fields.m_Extents.fields.y = *(_QWORD *)&v37.fields.m01;
    *(_OWORD *)&v39.fields.m_Center.fields.x = *(_OWORD *)&v37.fields.m00;
    v14 = v13 - COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v39, 0LL));
    v15 = v12 + COERCE_FLOAT(UnityEngine_Bounds__get_extents(&v39, 0LL));
    extents = UnityEngine_Bounds__get_extents(&v39, 0LL);
    v13 = v13 - extents.fields.y;
    v44 = UnityEngine_Bounds__get_extents(&v39, 0LL);
    v12 = v12 + v44.fields.y;
  }
  else
  {
    v15 = *(float *)&this->fields._targetRenderers;
    v14 = -v12;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v37,
    v14,
    v15,
    v13,
    v12,
    this->fields._farClipPlane,
    this->fields._orthographicSize,
    0LL);
  v33 = v37;
  v32 = v41;
  UnityEngine_Matrix4x4__op_Multiply(&v37, &v33, &v32, 0LL);
  *(UnityEngine_Matrix4x4_o *)&methoda.name = v37;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  LODWORD(v16) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  forward = UnityEngine_Transform__get_forward(transform, 0LL);
  y = forward.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (*(UnityEngine_Vector3_o *)&v46.fields.x = UnityEngine_Transform__get_forward(transform, 0LL),
        v46.fields.w = 0.0,
        v46.fields.x = v16,
        v46.fields.y = y,
        UnityEngine_Vector4___ctor(v46, v18, v19, v20, v21, &methoda),
        (transform = (UnityEngine_Transform_o *)this[1].klass) == 0LL) )
  {
LABEL_28:
    sub_B2C434(transform, v8);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v38.fields.current = *(Il2CppObject **)&v37.fields.m01;
  *(_OWORD *)&v38.fields.list = *(_OWORD *)&v37.fields.m00;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v38.fields.current )
      sub_B2C434(0LL, v29);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v38.fields.current, 0LL);
    v24 = materials;
    if ( !materials )
      sub_B2C434(0LL, v23);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
          v30 = sub_B2C460(materials);
          sub_B2C400(v30, 0LL);
        }
        shaderPropertyName_Pos = this->fields._shaderPropertyName_Pos;
        v28 = v24->m_Items[i];
        v37 = *(UnityEngine_Matrix4x4_o *)&methoda.name;
        if ( !v28 )
          sub_B2C434(materials, shaderPropertyName_Pos);
        v31 = v37;
        UnityEngine_Material__SetMatrix(v28, shaderPropertyName_Pos, &v31, 0LL);
        *(_QWORD *)&v47.fields.x = methoda.methodPointer;
        *(_QWORD *)&v47.fields.z = methoda.invoker_method;
        UnityEngine_Material__SetVector(v28, *(System_String_o **)&this->fields._useRendererBounds, v47, 0LL);
        max_length = v24->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_c *klass; // x0

  if ( (byte_4187A74 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__Clear__, method);
    byte_4187A74 = 1;
  }
  if ( BYTE1(this->fields.workRenderers) )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(this, method);
  klass = this[1].klass;
  if ( !klass )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_Renderer__Clear__);
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
    sub_B2C434(0LL, v4);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Bounds_o *result; // x0
  __int128 v17; // q0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+50h] [xbp-60h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4187A76 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, renderers);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v8);
    this = (ProjectionMatrixCalc_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4187A76 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  memset(&v21, 0, sizeof(v21));
  if ( !renderers )
    sub_B2C434(this, renderers);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)renderers,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_B2C434(v11, v12);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0LL) )
      {
        size = UnityEngine_Bounds__get_size((UnityEngine_Bounds_o *)&v21, 0LL);
        x = size.fields.x;
        y = size.fields.y;
        z = size.fields.z;
        zero = UnityEngine_Vector3__get_zero(0LL);
        v23.fields.x = x;
        v23.fields.y = y;
        v23.fields.z = z;
        if ( UnityEngine_Vector3__op_Equality(v23, zero, 0LL) )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v19, (UnityEngine_Renderer_o *)current, 0LL);
          v21 = v19;
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v19, (UnityEngine_Renderer_o *)current, 0LL);
          v18 = v19;
          UnityEngine_Bounds__Encapsulate_40624680((UnityEngine_Bounds_o *)&v21, (UnityEngine_Bounds_o *)&v18, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  v17 = *(_OWORD *)&v21.fields.list;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v21.fields.current;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v17;
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
  __int64 v10; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v12; // x1
  UnityEngine_Material_array *v13; // x19
  __int64 v14; // x8
  unsigned __int64 v15; // x23
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187A72 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4187A72 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  klass = this[1].klass;
  if ( !klass )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v9 )
    {
      if ( !current )
        sub_B2C434(v9, v10);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
      v13 = materials;
      if ( !materials )
        sub_B2C434(0LL, v12);
      v14 = *(_QWORD *)&materials->max_length;
      if ( (int)v14 >= 1 )
      {
        v15 = 0LL;
        do
        {
          if ( v15 >= (unsigned int)v14 )
          {
            v17 = sub_B2C460(materials);
            sub_B2C400(v17, 0LL);
          }
          v16 = (UnityEngine_Object_o *)v13->m_Items[v15];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_35315108(v16, 0LL);
          LODWORD(v14) = v13->max_length;
          ++v15;
        }
        while ( (__int64)v15 < (int)v14 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__updateWorkRenderers(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int64 v15; // x1
  struct System_String_o *shaderPropertyName_MatrixVP; // x0
  Il2CppObject *current; // x21
  _BOOL8 v18; // x0
  __int64 v19; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v21; // x1
  UnityEngine_Material_array *v22; // x21
  __int64 v23; // x8
  unsigned __int64 v24; // x28
  UnityEngine_Object_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x1
  ProjectionMatrixCalc_c *v28; // x0
  Il2CppObject *v29; // x20
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  ProjectionMatrixCalc_c *v33; // x0
  __int64 v34; // x1
  ProjectionMatrixCalc_c *v35; // x0
  __int64 v36; // x0
  _BYTE v37[40]; // [xsp+0h] [xbp-A0h] BYREF
  int v38; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4187A73 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__Contains__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__Remove__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_Renderer__TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4187A73 = 1;
  }
  memset(&i, 0, sizeof(i));
  v38 = 0;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
  if ( !klass )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v37,
    klass,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
    if ( !shaderPropertyName_MatrixVP )
      sub_B2C434(0LL, v15);
    current = i.fields.current;
    v18 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)shaderPropertyName_MatrixVP,
            (WarBoardManager_TaskList_o *)i.fields.current,
            (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v18 )
    {
      if ( !v12 )
        sub_B2C434(v18, v19);
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12,
              (WarBoardManager_TaskList_o *)current,
              (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Renderer__Add__);
    }
  }
  *(_DWORD *)&v37[4 * v38++ + 24] = 83;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v38 && *(_DWORD *)&v37[4 * v38 + 20] == 83 )
    --v38;
  if ( BYTE1(this->fields.workRenderers) )
  {
    if ( !v12 )
      goto LABEL_64;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v12,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = *(System_Collections_Generic_List_Enumerator_T__o *)v37;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields.current )
        sub_B2C434(0LL, v26);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields.current, 0LL);
      v22 = materials;
      if ( !materials )
        sub_B2C434(0LL, v21);
      v23 = *(_QWORD *)&materials->max_length;
      if ( (int)v23 >= 1 )
      {
        v24 = 0LL;
        do
        {
          if ( v24 >= (unsigned int)v23 )
          {
            v36 = sub_B2C460(materials);
            sub_B2C400(v36, 0LL);
          }
          v25 = (UnityEngine_Object_o *)v22->m_Items[v24];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_35315108(v25, 0LL);
          LODWORD(v23) = v22->max_length;
          ++v24;
        }
        while ( (__int64)v24 < (int)v23 );
      }
    }
    *(_DWORD *)&v37[4 * v38++ + 24] = 165;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    if ( v38 && *(_DWORD *)&v37[4 * v38 + 20] == 165 )
      --v38;
  }
  if ( !v12 )
    goto LABEL_64;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v12,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = *(System_Collections_Generic_List_Enumerator_T__o *)v37;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v28,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v28 = this[1].klass;
    if ( !v28 )
      sub_B2C434(0LL, v27);
  }
  *(_DWORD *)&v37[4 * v38++ + 24] = 222;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v38 && *(_DWORD *)&v37[4 * v38 + 20] == 222 )
    --v38;
  klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._shaderPropertyName_MatrixVP;
  if ( !klass )
LABEL_64:
    sub_B2C434(klass, v13);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v37,
    klass,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = *(System_Collections_Generic_List_Enumerator_T__o *)v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v29 = i.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v30 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
    if ( v30 )
    {
      if ( !v29 )
        sub_B2C434(v30, v31);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v29, 0LL) )
      {
        v33 = this[1].klass;
        if ( !v33 )
          sub_B2C434(0LL, v32);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v33,
                (WarBoardManager_TaskList_o *)v29,
                (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v35 = this[1].klass;
          if ( !v35 )
            sub_B2C434(0LL, v34);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Renderer__Add__);
        }
      }
    }
  }
  *(_DWORD *)&v37[4 * v38++ + 24] = 317;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( v38 && *(_DWORD *)&v37[4 * v38 + 20] == 317 )
    --v38;
}