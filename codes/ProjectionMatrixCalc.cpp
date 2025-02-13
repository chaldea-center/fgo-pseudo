void __fastcall ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDF8CD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C21E38(&StringLiteral_16586/*"_ProjectorMatrixVP"*/);
    sub_1C21E38(&StringLiteral_16587/*"_ProjectorPos"*/);
    byte_4BDF8CD = 1;
  }
  this->fields._orthographicSize = 1.0;
  *(_QWORD *)&this->fields._nearClipPlane = 0x42C800003C23D70ALL;
  v9 = StringLiteral_16586/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_MatrixVP = (struct System_String_o *)StringLiteral_16586/*"_ProjectorMatrixVP"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._shaderPropertyName_MatrixVP, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_16587/*"_ProjectorPos"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16587/*"_ProjectorPos"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._shaderPropertyName_Pos, v10, v11, v12, v13, v14, v15, v16);
  this->fields._destroyRendererMaterial = 1;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.workRenderers = (struct System_Collections_Generic_List_Renderer__o *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.workRenderers, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  UnityEngine_Matrix4x4_o *v6; // x0
  const MethodInfo *v7; // x2
  float orthographicSize; // s8
  float v9; // s9
  float v10; // s0
  float v11; // s1
  float v12; // s8
  float y; // s9
  float v14; // s2
  float v15; // s10
  __int64 v16; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v18; // x1
  UnityEngine_Material_array *v19; // x20
  int max_length; // w8
  int i; // w24
  System_String_o *shaderPropertyName_MatrixVP; // x1
  UnityEngine_Material_o *v23; // x21
  UnityEngine_Matrix4x4_o v24; // [xsp+0h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+40h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+80h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+C0h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+100h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+140h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+180h] [xbp-140h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+1C0h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+1E0h] [xbp-E0h]
  UnityEngine_Matrix4x4_o v33; // [xsp+220h] [xbp-A0h]
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDF8CB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    byte_4BDF8CB = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_29;
  if ( workRenderers->fields._size < 1 )
    return;
  v34.fields.x = 1.0;
  v34.fields.y = 1.0;
  v34.fields.z = -1.0;
  UnityEngine_Matrix4x4__Scale(&v29, v34, 0LL);
  v30 = v29;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  UnityEngine_Transform__get_worldToLocalMatrix(&v29, transform, 0LL);
  v27 = v29;
  v28 = v30;
  v6 = UnityEngine_Matrix4x4__op_Multiply(&v29, &v28, &v27, 0LL);
  v33 = v29;
  orthographicSize = this->fields._orthographicSize;
  v9 = -orthographicSize;
  if ( this->fields._useRendererBounds )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v30,
      (ProjectionMatrixCalc_o *)v6,
      this->fields.workRenderers,
      v7);
    v10 = v9 - v30.fields.m30;
    v11 = orthographicSize + v30.fields.m30;
    v9 = v9 - v30.fields.m01;
    orthographicSize = orthographicSize + v30.fields.m01;
  }
  else
  {
    v11 = this->fields._orthographicSize;
    v10 = -orthographicSize;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v30,
    v10,
    v11,
    v9,
    orthographicSize,
    this->fields._nearClipPlane,
    this->fields._farClipPlane,
    0LL);
  v26 = v30;
  v25 = v33;
  UnityEngine_Matrix4x4__op_Multiply(&v30, &v26, &v25, 0LL);
  v32 = v30;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (forward = UnityEngine_Transform__get_forward(transform, 0LL),
        y = forward.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_forward(transform, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.workRenderers) == 0LL) )
  {
LABEL_29:
    sub_1C22094(transform, v4);
  }
  v15 = v14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  *(_OWORD *)&v31.fields._list = *(_OWORD *)&v30.fields.m00;
  v31.fields._current = *(Il2CppObject **)&v30.fields.m01;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v31.fields._current )
      sub_1C22094(0LL, v16);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v31.fields._current, 0LL);
    v19 = materials;
    if ( !materials )
      sub_1C22094(0LL, v18);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C2209C(materials, v18);
        shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
        v23 = v19->m_Items[i];
        v30 = v32;
        if ( !v23 )
          sub_1C22094(materials, shaderPropertyName_MatrixVP);
        v24 = v30;
        UnityEngine_Material__SetMatrix(v23, shaderPropertyName_MatrixVP, &v24, 0LL);
        v36.fields.w = 0.0;
        v36.fields.x = v12;
        v36.fields.y = y;
        v36.fields.z = v15;
        UnityEngine_Material__SetVector(v23, this->fields._shaderPropertyName_Pos, v36, 0LL);
        max_length = v19->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_o *v2; // x19
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4BDF8CA & 1) == 0 )
  {
    this = (ProjectionMatrixCalc_o *)sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__Clear__);
    byte_4BDF8CA = 1;
  }
  if ( v2->fields._destroyRendererMaterial )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(v2, method);
  workRenderers = v2->fields.workRenderers;
  if ( !workRenderers )
    sub_1C22094(this, method);
  size = workRenderers->fields._size;
  v5 = workRenderers->fields._version + 1;
  workRenderers->fields._size = 0;
  workRenderers->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)workRenderers->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProjectionMatrixCalc__OnDrawGizmos(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  ProjectionMatrixCalc_o *v5; // x0
  const MethodInfo *v6; // x2
  int32x2_t v7; // d4
  int32x2_t v8; // d5
  float32x2_t v9; // d10
  float32x2_t v10; // d9
  float farClipPlane; // s0
  float nearClipPlane; // s1
  float v13; // s8
  float v14; // s11
  unsigned __int64 v15; // d3 OVERLAPPED
  int v16; // s4
  float v17; // s5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32x2_t v19; // [xsp+0h] [xbp-1A0h]
  int32x2_t v20; // [xsp+10h] [xbp-190h]
  UnityEngine_Matrix4x4_o v21; // [xsp+20h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v22; // [xsp+60h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+A0h] [xbp-100h]
  UnityEngine_Matrix4x4_o v24; // [xsp+E0h] [xbp-C0h]
  UnityEngine_Matrix4x4_o v25; // [xsp+120h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  UnityEngine_Gizmos__get_matrix(&v25, 0LL);
  v23 = v25;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1C22094(0LL, v4);
  UnityEngine_Transform__get_localToWorldMatrix(&v25, transform, 0LL);
  v22 = v25;
  UnityEngine_Gizmos__set_matrix(&v22, 0LL);
  v7.n64_u32[0] = LODWORD(this->fields._orthographicSize);
  v8.n64_f32[0] = -v7.n64_f32[0];
  if ( this->fields._useRendererBounds )
  {
    v19.n64_u64[0] = v8.n64_u64[0];
    v20.n64_u64[0] = v7.n64_u64[0];
    v24 = v23;
    ProjectionMatrixCalc__calcRenderersBounds((UnityEngine_Bounds_o *)&v25, v5, this->fields.workRenderers, v6);
    v9.n64_u64[0] = vsub_f32(vdup_lane_s32(v19, 0), *(float32x2_t *)&v25.fields.m30).n64_u64[0];
    v10.n64_u64[0] = vadd_f32(vdup_lane_s32(v20, 0), *(float32x2_t *)&v25.fields.m30).n64_u64[0];
    v25 = v24;
  }
  else
  {
    v10.n64_u64[0] = vdup_lane_s32(v7, 0).n64_u64[0];
    v9.n64_u64[0] = vdup_lane_s32(v8, 0).n64_u64[0];
    v25 = v23;
  }
  nearClipPlane = this->fields._nearClipPlane;
  farClipPlane = this->fields._farClipPlane;
  v13 = farClipPlane - nearClipPlane;
  v14 = nearClipPlane + (float)((float)(farClipPlane - nearClipPlane) * 0.5);
  if ( !byte_4BD6BBA )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BBA = 1;
  }
  v15 = vsub_f32(v10, v9).n64_u64[0];
  v16 = HIDWORD(v15);
  v17 = v13;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v26.fields.x = v14 * static_fields->forwardVector.fields.x;
  v26.fields.y = v14 * static_fields->forwardVector.fields.y;
  v26.fields.z = v14 * static_fields->forwardVector.fields.z;
  UnityEngine_Gizmos__DrawWireCube(v26, *(UnityEngine_Vector3_o *)&v15, 0LL);
  v21 = v25;
  UnityEngine_Gizmos__set_matrix(&v21, 0LL);
}


UnityEngine_Bounds_o *__fastcall ProjectionMatrixCalc__calcRenderersBounds(
        UnityEngine_Bounds_o *retstr,
        ProjectionMatrixCalc_o *this,
        System_Collections_Generic_List_Renderer__o *renderers,
        const MethodInfo *method)
{
  float v6; // s8
  float v7; // s9
  float v8; // s10
  float v9; // s11
  float v10; // s12
  float v11; // s13
  Il2CppObject *current; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v16; // s21
  float v17; // s22
  float v18; // s0
  float v19; // s3
  float v20; // s1
  float v21; // s4
  float v22; // s2
  float v23; // s5
  float v24; // s6
  float v25; // s7
  float v26; // s6
  float v27; // s16
  float v28; // s6
  float v29; // s7
  float v30; // s3
  float v31; // s16
  float v32; // s4
  float v33; // s17
  float v34; // s3
  float v35; // s5
  float v36; // s6
  float v37; // s4
  float v38; // s7
  float v39; // s5
  float v40; // s0
  UnityEngine_Bounds_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_4BDF8CC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    this = (ProjectionMatrixCalc_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8CC = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !renderers )
    sub_1C22094(this, renderers);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)renderers,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  v43 = v42;
  v11 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v43.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v13 )
    {
      if ( !current )
        sub_1C22094(v13, v14);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0LL) )
      {
        if ( !byte_4BD6BB1 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB1 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        if ( (float)((float)((float)((float)(v6 + v6) - static_fields->zeroVector.fields.z)
                           * (float)((float)(v6 + v6) - static_fields->zeroVector.fields.z))
                   + (float)((float)((float)((float)(v8 + v8) - static_fields->zeroVector.fields.x)
                                   * (float)((float)(v8 + v8) - static_fields->zeroVector.fields.x))
                           + (float)((float)((float)(v7 + v7) - static_fields->zeroVector.fields.y)
                                   * (float)((float)(v7 + v7) - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v42, (UnityEngine_Renderer_o *)current, 0LL);
          v16 = *((float *)&v42.fields._list + 1) - *(float *)&v42.fields._current;
          v17 = *(float *)&v42.fields._index - *((float *)&v42.fields._current + 1);
          v18 = *(float *)&v42.fields._list + *(float *)&v42.fields._version;
          if ( (float)(v11 - v8) >= (float)(*(float *)&v42.fields._list - *(float *)&v42.fields._version) )
            v19 = *(float *)&v42.fields._list - *(float *)&v42.fields._version;
          else
            v19 = v11 - v8;
          v20 = *((float *)&v42.fields._list + 1) + *(float *)&v42.fields._current;
          if ( (float)(v10 - v7) >= v16 )
            v21 = *((float *)&v42.fields._list + 1) - *(float *)&v42.fields._current;
          else
            v21 = v10 - v7;
          v22 = *(float *)&v42.fields._index + *((float *)&v42.fields._current + 1);
          if ( (float)(v9 - v6) >= v17 )
            v23 = *(float *)&v42.fields._index - *((float *)&v42.fields._current + 1);
          else
            v23 = v9 - v6;
          if ( (float)(v8 + v11) <= (float)(*(float *)&v42.fields._list - *(float *)&v42.fields._version) )
            v24 = *(float *)&v42.fields._list - *(float *)&v42.fields._version;
          else
            v24 = v8 + v11;
          if ( (float)(v7 + v10) <= v16 )
            v25 = *((float *)&v42.fields._list + 1) - *(float *)&v42.fields._current;
          else
            v25 = v7 + v10;
          v26 = v24 - v19;
          if ( (float)(v6 + v9) <= v17 )
            v27 = *(float *)&v42.fields._index - *((float *)&v42.fields._current + 1);
          else
            v27 = v6 + v9;
          v28 = v26 * 0.5;
          v29 = (float)(v25 - v21) * 0.5;
          v30 = v19 + v28;
          v31 = (float)(v27 - v23) * 0.5;
          v32 = v21 + v29;
          v33 = v30 - v28;
          v34 = v28 + v30;
          v35 = v23 + v31;
          v36 = v32 - v29;
          v37 = v29 + v32;
          v38 = v35 - v31;
          if ( v33 >= v18 )
            v33 = *(float *)&v42.fields._list + *(float *)&v42.fields._version;
          if ( v36 >= v20 )
            v36 = *((float *)&v42.fields._list + 1) + *(float *)&v42.fields._current;
          if ( v38 >= v22 )
            v38 = *(float *)&v42.fields._index + *((float *)&v42.fields._current + 1);
          v39 = v31 + v35;
          if ( v34 > v18 )
            v18 = v34;
          if ( v37 > v20 )
            v20 = v37;
          v40 = v18 - v33;
          if ( v39 > v22 )
            v22 = v39;
          v8 = v40 * 0.5;
          v7 = (float)(v20 - v36) * 0.5;
          v6 = (float)(v22 - v38) * 0.5;
          v11 = v33 + (float)(v40 * 0.5);
          v10 = v36 + v7;
          v9 = v38 + v6;
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v42, (UnityEngine_Renderer_o *)current, 0LL);
          v10 = *((float *)&v42.fields._list + 1);
          v11 = *(float *)&v42.fields._list;
          v8 = *(float *)&v42.fields._version;
          v9 = *(float *)&v42.fields._index;
          v6 = *((float *)&v42.fields._current + 1);
          v7 = *(float *)&v42.fields._current;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  retstr->fields.m_Center.fields.x = v11;
  retstr->fields.m_Center.fields.y = v10;
  retstr->fields.m_Center.fields.z = v9;
  retstr->fields.m_Extents.fields.x = v8;
  retstr->fields.m_Extents.fields.y = v7;
  retstr->fields.m_Extents.fields.z = v6;
  return result;
}


void __fastcall ProjectionMatrixCalc__destroyWorkRenderersMaterials(
        ProjectionMatrixCalc_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v8; // x1
  UnityEngine_Material_array *v9; // x19
  __int64 v10; // x8
  unsigned __int64 v11; // x24
  UnityEngine_Object_o *v12; // x20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDF8C8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8C8 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_1C22094(v5, v6);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
      v9 = materials;
      if ( !materials )
        sub_1C22094(0LL, v8);
      v10 = *(_QWORD *)&materials->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = 0LL;
        do
        {
          if ( v11 >= (unsigned int)v10 )
            sub_1C2209C(materials, v8);
          v12 = (UnityEngine_Object_o *)v9->m_Items[v11];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_70869800(v12, 0LL);
          LODWORD(v10) = v9->max_length;
          ++v11;
        }
        while ( (__int64)v11 < (int)v10 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__updateWorkRenderers(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_Renderer__o *targetRenderers; // x0
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  __int64 v23; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v25; // x1
  UnityEngine_Material_array *v26; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x22
  __int64 v30; // x1
  struct System_Collections_Generic_List_Renderer__o *v31; // x0
  Il2CppObject *v32; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  struct System_Collections_Generic_List_Renderer__o *v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_object__o *v44; // x0
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDF8C9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8C9 = 1;
  }
  memset(&i, 0, sizeof(i));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v49;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    targetRenderers = this->fields._targetRenderers;
    if ( !targetRenderers )
      sub_1C22094(0LL, v6);
    current = i.fields._current;
    v9 = System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)targetRenderers,
           i.fields._current,
           (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v9 )
    {
      if ( !v3 )
        sub_1C22094(v9, v10);
      v11 = System_Collections_Generic_List_object___Contains(
              v3,
              current,
              (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_Renderer__Contains__);
      if ( !v11 )
      {
        items = v3->fields._items;
        v20 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C22094(v11, v12);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            current,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v22[4] = (Il2CppClass *)current;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)current, v13, v14, v15, v16, v17, v18);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( this->fields._destroyRendererMaterial )
  {
    if ( !v3 )
      goto LABEL_60;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      v3,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = v49;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields._current )
        sub_1C22094(0LL, v23);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields._current, 0LL);
      v26 = materials;
      if ( !materials )
        sub_1C22094(0LL, v25);
      v27 = *(_QWORD *)&materials->max_length;
      if ( (int)v27 >= 1 )
      {
        v28 = 0LL;
        do
        {
          if ( v28 >= (unsigned int)v27 )
            sub_1C2209C(materials, v25);
          v29 = (UnityEngine_Object_o *)v26->m_Items[v28];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_70869800(v29, 0LL);
          LODWORD(v27) = v26->max_length;
          ++v28;
        }
        while ( (__int64)v28 < (int)v27 );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  }
  if ( !v3 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v3,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = v49;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)v31,
          i.fields._current,
          (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v31 = this->fields.workRenderers;
    if ( !v31 )
      sub_1C22094(0LL, v30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  workRenderers = this->fields._targetRenderers;
  if ( !workRenderers )
LABEL_60:
    sub_1C22094(workRenderers, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v49;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v32 = i.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL);
    if ( v33 )
    {
      if ( !v32 )
        sub_1C22094(v33, v34);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v32, 0LL) )
      {
        v36 = this->fields.workRenderers;
        if ( !v36 )
          sub_1C22094(0LL, v35);
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)v36,
                v32,
                (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v44 = (System_Collections_Generic_List_object__o *)this->fields.workRenderers;
          if ( !v44 )
            sub_1C22094(0LL, v37);
          v45 = v44->fields._items;
          v46 = Method_System_Collections_Generic_List_Renderer__Add__;
          ++v44->fields._version;
          if ( !v45 )
            sub_1C22094(v44, v37);
          v47 = v44->fields._size;
          if ( (unsigned int)v47 >= v45->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v44,
              v32,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &v45->obj.klass + v47;
            v44->fields._size = v47 + 1;
            v48[4] = (Il2CppClass *)v32;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v32, v38, v39, v40, v41, v42, v43);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}