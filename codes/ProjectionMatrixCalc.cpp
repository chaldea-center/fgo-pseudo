void __fastcall ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x1
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B19491 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_Renderer__TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_16476/*"_ProjectorMatrixVP"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16477/*"_ProjectorPos"*/, v13, v14);
    byte_4B19491 = 1;
  }
  this->fields._orthographicSize = 1.0;
  *(_QWORD *)&this->fields._nearClipPlane = 0x42C800003C23D70ALL;
  v15 = StringLiteral_16476/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_MatrixVP = (struct System_String_o *)StringLiteral_16476/*"_ProjectorMatrixVP"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._shaderPropertyName_MatrixVP, v15, v2, v3, v4, v5, v6, v7);
  v16 = StringLiteral_16477/*"_ProjectorPos"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16477/*"_ProjectorPos"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._shaderPropertyName_Pos, v16, v17, v18, v19, v20, v21, v22);
  this->fields._destroyRendererMaterial = 1;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.workRenderers = (struct System_Collections_Generic_List_Renderer__o *)v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.workRenderers, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  UnityEngine_Matrix4x4_o *v15; // x0
  const MethodInfo *v16; // x2
  float orthographicSize; // s8
  float v18; // s9
  float v19; // s0
  float v20; // s1
  float v21; // s8
  float y; // s9
  float v23; // s2
  float v24; // s10
  __int64 v25; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v27; // x1
  UnityEngine_Material_array *v28; // x20
  int max_length; // w8
  int i; // w24
  System_String_o *shaderPropertyName_MatrixVP; // x1
  UnityEngine_Material_o *v32; // x21
  UnityEngine_Matrix4x4_o v33; // [xsp+0h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+40h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+80h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+C0h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+100h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+140h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+180h] [xbp-140h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+1C0h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+1E0h] [xbp-E0h]
  UnityEngine_Matrix4x4_o v42; // [xsp+220h] [xbp-A0h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1948F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Count__, v10, v11);
    byte_4B1948F = 1;
  }
  memset(&v40, 0, sizeof(v40));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_29;
  if ( workRenderers->fields._size < 1 )
    return;
  v43.fields.x = 1.0;
  v43.fields.y = 1.0;
  v43.fields.z = -1.0;
  UnityEngine_Matrix4x4__Scale(&v38, v43, 0LL);
  v39 = v38;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  UnityEngine_Transform__get_worldToLocalMatrix(&v38, transform, 0LL);
  v36 = v38;
  v37 = v39;
  v15 = UnityEngine_Matrix4x4__op_Multiply(&v38, &v37, &v36, 0LL);
  v42 = v38;
  orthographicSize = this->fields._orthographicSize;
  v18 = -orthographicSize;
  if ( this->fields._useRendererBounds )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v39,
      (ProjectionMatrixCalc_o *)v15,
      this->fields.workRenderers,
      v16);
    v19 = v18 - v39.fields.m30;
    v20 = orthographicSize + v39.fields.m30;
    v18 = v18 - v39.fields.m01;
    orthographicSize = orthographicSize + v39.fields.m01;
  }
  else
  {
    v20 = this->fields._orthographicSize;
    v19 = -orthographicSize;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v39,
    v19,
    v20,
    v18,
    orthographicSize,
    this->fields._nearClipPlane,
    this->fields._farClipPlane,
    0LL);
  v35 = v39;
  v34 = v42;
  UnityEngine_Matrix4x4__op_Multiply(&v39, &v35, &v34, 0LL);
  v41 = v39;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (LODWORD(v21) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (forward = UnityEngine_Transform__get_forward(transform, 0LL),
        y = forward.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v23 - 2) = UnityEngine_Transform__get_forward(transform, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.workRenderers) == 0LL) )
  {
LABEL_29:
    sub_1BCAA3C(transform, v13);
  }
  v24 = v23;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  *(_OWORD *)&v40.fields._list = *(_OWORD *)&v39.fields.m00;
  v40.fields._current = *(Il2CppObject **)&v39.fields.m01;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v40.fields._current )
      sub_1BCAA3C(0LL, v25);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v40.fields._current, 0LL);
    v28 = materials;
    if ( !materials )
      sub_1BCAA3C(0LL, v27);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1BCAA44(materials, v27);
        shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
        v32 = v28->m_Items[i];
        v39 = v41;
        if ( !v32 )
          sub_1BCAA3C(materials, shaderPropertyName_MatrixVP);
        v33 = v39;
        UnityEngine_Material__SetMatrix(v32, shaderPropertyName_MatrixVP, &v33, 0LL);
        v45.fields.w = 0.0;
        v45.fields.x = v21;
        v45.fields.y = y;
        v45.fields.z = v24;
        UnityEngine_Material__SetVector(v32, this->fields._shaderPropertyName_Pos, v45, 0LL);
        max_length = v28->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ProjectionMatrixCalc_o *v3; // x19
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B1948E & 1) == 0 )
  {
    this = (ProjectionMatrixCalc_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__Clear__, method, v2);
    byte_4B1948E = 1;
  }
  if ( v3->fields._destroyRendererMaterial )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(v3, method);
  workRenderers = v3->fields.workRenderers;
  if ( !workRenderers )
    sub_1BCAA3C(this, method);
  size = workRenderers->fields._size;
  v6 = workRenderers->fields._version + 1;
  workRenderers->fields._size = 0;
  workRenderers->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)workRenderers->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProjectionMatrixCalc__OnDrawGizmos(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  ProjectionMatrixCalc_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32x2_t v8; // d4
  int32x2_t v9; // d5
  float32x2_t v10; // d10
  float32x2_t v11; // d9
  float farClipPlane; // s0
  float nearClipPlane; // s1
  float v14; // s8
  float v15; // s11
  unsigned __int64 v16; // d3 OVERLAPPED
  int v17; // s4
  float v18; // s5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32x2_t v20; // [xsp+0h] [xbp-1A0h]
  int32x2_t v21; // [xsp+10h] [xbp-190h]
  UnityEngine_Matrix4x4_o v22; // [xsp+20h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+60h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+A0h] [xbp-100h]
  UnityEngine_Matrix4x4_o v25; // [xsp+E0h] [xbp-C0h]
  UnityEngine_Matrix4x4_o v26; // [xsp+120h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  UnityEngine_Gizmos__get_matrix(&v26, 0LL);
  v24 = v26;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_Transform__get_localToWorldMatrix(&v26, transform, 0LL);
  v23 = v26;
  UnityEngine_Gizmos__set_matrix(&v23, 0LL);
  v8.n64_u32[0] = LODWORD(this->fields._orthographicSize);
  v9.n64_f32[0] = -v8.n64_f32[0];
  if ( this->fields._useRendererBounds )
  {
    v20.n64_u64[0] = v9.n64_u64[0];
    v21.n64_u64[0] = v8.n64_u64[0];
    v25 = v24;
    ProjectionMatrixCalc__calcRenderersBounds((UnityEngine_Bounds_o *)&v26, v5, this->fields.workRenderers, v7);
    v10.n64_u64[0] = vsub_f32(vdup_lane_s32(v20, 0), *(float32x2_t *)&v26.fields.m30).n64_u64[0];
    v11.n64_u64[0] = vadd_f32(vdup_lane_s32(v21, 0), *(float32x2_t *)&v26.fields.m30).n64_u64[0];
    v26 = v25;
  }
  else
  {
    v11.n64_u64[0] = vdup_lane_s32(v8, 0).n64_u64[0];
    v10.n64_u64[0] = vdup_lane_s32(v9, 0).n64_u64[0];
    v26 = v24;
  }
  nearClipPlane = this->fields._nearClipPlane;
  farClipPlane = this->fields._farClipPlane;
  v14 = farClipPlane - nearClipPlane;
  v15 = nearClipPlane + (float)((float)(farClipPlane - nearClipPlane) * 0.5);
  if ( !byte_4B109CA )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
    byte_4B109CA = 1;
  }
  v16 = vsub_f32(v11, v10).n64_u64[0];
  v17 = HIDWORD(v16);
  v18 = v14;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v27.fields.x = v15 * static_fields->forwardVector.fields.x;
  v27.fields.y = v15 * static_fields->forwardVector.fields.y;
  v27.fields.z = v15 * static_fields->forwardVector.fields.z;
  UnityEngine_Gizmos__DrawWireCube(v27, *(UnityEngine_Vector3_o *)&v16, 0LL);
  v22 = v26;
  UnityEngine_Gizmos__set_matrix(&v22, 0LL);
}


UnityEngine_Bounds_o *__fastcall ProjectionMatrixCalc__calcRenderersBounds(
        UnityEngine_Bounds_o *retstr,
        ProjectionMatrixCalc_o *this,
        System_Collections_Generic_List_Renderer__o *renderers,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  float v18; // s12
  float v19; // s13
  __int64 v20; // x1
  Il2CppObject *current; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v27; // s21
  float v28; // s22
  float v29; // s0
  float v30; // s3
  float v31; // s1
  float v32; // s4
  float v33; // s2
  float v34; // s5
  float v35; // s6
  float v36; // s7
  float v37; // s6
  float v38; // s16
  float v39; // s6
  float v40; // s7
  float v41; // s3
  float v42; // s16
  float v43; // s4
  float v44; // s17
  float v45; // s3
  float v46; // s5
  float v47; // s6
  float v48; // s4
  float v49; // s7
  float v50; // s5
  float v51; // s0
  UnityEngine_Bounds_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_4B19490 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, renderers, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v10, v11);
    this = (ProjectionMatrixCalc_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B19490 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  if ( !renderers )
    sub_1BCAA3C(this, renderers);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)renderers,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v54 = v53;
  v19 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v54.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v22 )
    {
      if ( !current )
        sub_1BCAA3C(v22, v23);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0LL) )
      {
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v24, v25);
          byte_4B109C1 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        if ( (float)((float)((float)((float)(v14 + v14) - static_fields->zeroVector.fields.z)
                           * (float)((float)(v14 + v14) - static_fields->zeroVector.fields.z))
                   + (float)((float)((float)((float)(v16 + v16) - static_fields->zeroVector.fields.x)
                                   * (float)((float)(v16 + v16) - static_fields->zeroVector.fields.x))
                           + (float)((float)((float)(v15 + v15) - static_fields->zeroVector.fields.y)
                                   * (float)((float)(v15 + v15) - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v53, (UnityEngine_Renderer_o *)current, 0LL);
          v27 = *((float *)&v53.fields._list + 1) - *(float *)&v53.fields._current;
          v28 = *(float *)&v53.fields._index - *((float *)&v53.fields._current + 1);
          v29 = *(float *)&v53.fields._list + *(float *)&v53.fields._version;
          if ( (float)(v19 - v16) >= (float)(*(float *)&v53.fields._list - *(float *)&v53.fields._version) )
            v30 = *(float *)&v53.fields._list - *(float *)&v53.fields._version;
          else
            v30 = v19 - v16;
          v31 = *((float *)&v53.fields._list + 1) + *(float *)&v53.fields._current;
          if ( (float)(v18 - v15) >= v27 )
            v32 = *((float *)&v53.fields._list + 1) - *(float *)&v53.fields._current;
          else
            v32 = v18 - v15;
          v33 = *(float *)&v53.fields._index + *((float *)&v53.fields._current + 1);
          if ( (float)(v17 - v14) >= v28 )
            v34 = *(float *)&v53.fields._index - *((float *)&v53.fields._current + 1);
          else
            v34 = v17 - v14;
          if ( (float)(v16 + v19) <= (float)(*(float *)&v53.fields._list - *(float *)&v53.fields._version) )
            v35 = *(float *)&v53.fields._list - *(float *)&v53.fields._version;
          else
            v35 = v16 + v19;
          if ( (float)(v15 + v18) <= v27 )
            v36 = *((float *)&v53.fields._list + 1) - *(float *)&v53.fields._current;
          else
            v36 = v15 + v18;
          v37 = v35 - v30;
          if ( (float)(v14 + v17) <= v28 )
            v38 = *(float *)&v53.fields._index - *((float *)&v53.fields._current + 1);
          else
            v38 = v14 + v17;
          v39 = v37 * 0.5;
          v40 = (float)(v36 - v32) * 0.5;
          v41 = v30 + v39;
          v42 = (float)(v38 - v34) * 0.5;
          v43 = v32 + v40;
          v44 = v41 - v39;
          v45 = v39 + v41;
          v46 = v34 + v42;
          v47 = v43 - v40;
          v48 = v40 + v43;
          v49 = v46 - v42;
          if ( v44 >= v29 )
            v44 = *(float *)&v53.fields._list + *(float *)&v53.fields._version;
          if ( v47 >= v31 )
            v47 = *((float *)&v53.fields._list + 1) + *(float *)&v53.fields._current;
          if ( v49 >= v33 )
            v49 = *(float *)&v53.fields._index + *((float *)&v53.fields._current + 1);
          v50 = v42 + v46;
          if ( v45 > v29 )
            v29 = v45;
          if ( v48 > v31 )
            v31 = v48;
          v51 = v29 - v44;
          if ( v50 > v33 )
            v33 = v50;
          v16 = v51 * 0.5;
          v15 = (float)(v31 - v47) * 0.5;
          v14 = (float)(v33 - v49) * 0.5;
          v19 = v44 + (float)(v51 * 0.5);
          v18 = v47 + v15;
          v17 = v49 + v14;
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v53, (UnityEngine_Renderer_o *)current, 0LL);
          v18 = *((float *)&v53.fields._list + 1);
          v19 = *(float *)&v53.fields._list;
          v16 = *(float *)&v53.fields._version;
          v17 = *(float *)&v53.fields._index;
          v14 = *((float *)&v53.fields._current + 1);
          v15 = *(float *)&v53.fields._current;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  retstr->fields.m_Center.fields.x = v19;
  retstr->fields.m_Center.fields.y = v18;
  retstr->fields.m_Center.fields.z = v17;
  retstr->fields.m_Extents.fields.x = v16;
  retstr->fields.m_Extents.fields.y = v15;
  retstr->fields.m_Extents.fields.z = v14;
  return result;
}


void __fastcall ProjectionMatrixCalc__destroyWorkRenderersMaterials(
        ProjectionMatrixCalc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v18; // x1
  UnityEngine_Material_array *v19; // x19
  __int64 v20; // x8
  unsigned __int64 v21; // x24
  UnityEngine_Object_o *v22; // x20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1948C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1948C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCAA3C(v15, v16);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
      v19 = materials;
      if ( !materials )
        sub_1BCAA3C(0LL, v18);
      v20 = *(_QWORD *)&materials->max_length;
      if ( (int)v20 >= 1 )
      {
        v21 = 0LL;
        do
        {
          if ( v21 >= (unsigned int)v20 )
            sub_1BCAA44(materials, v18);
          v22 = (UnityEngine_Object_o *)v19->m_Items[v21];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
          UnityEngine_Object__DestroyImmediate_70154432(v22, 0LL);
          LODWORD(v20) = v19->max_length;
          ++v21;
        }
        while ( (__int64)v21 < (int)v20 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__updateWorkRenderers(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  __int64 v24; // x1
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  __int64 v26; // x1
  struct System_Collections_Generic_List_Renderer__o *targetRenderers; // x0
  Il2CppObject *current; // x21
  _BOOL8 v29; // x0
  __int64 v30; // x1
  _BOOL8 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v45; // x1
  UnityEngine_Material_array *v46; // x21
  __int64 v47; // x8
  unsigned __int64 v48; // x23
  UnityEngine_Object_o *v49; // x22
  __int64 v50; // x1
  struct System_Collections_Generic_List_Renderer__o *v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x20
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x1
  struct System_Collections_Generic_List_Renderer__o *v57; // x0
  __int64 v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_List_object__o *v65; // x0
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x8
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1948D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__Contains__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__Remove__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_Renderer__TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    byte_4B1948D = 1;
  }
  memset(&i, 0, sizeof(i));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v70;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    targetRenderers = this->fields._targetRenderers;
    if ( !targetRenderers )
      sub_1BCAA3C(0LL, v26);
    current = i.fields._current;
    v29 = System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)targetRenderers,
            i.fields._current,
            (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v29 )
    {
      if ( !v23 )
        sub_1BCAA3C(v29, v30);
      v31 = System_Collections_Generic_List_object___Contains(
              v23,
              current,
              (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_Renderer__Contains__);
      if ( !v31 )
      {
        items = v23->fields._items;
        v40 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++v23->fields._version;
        if ( !items )
          sub_1BCAA3C(v31, v32);
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            current,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v42[4] = (Il2CppClass *)current;
          sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)current, v33, v34, v35, v36, v37, v38);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( this->fields._destroyRendererMaterial )
  {
    if ( !v23 )
      goto LABEL_60;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v70,
      v23,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = v70;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields._current )
        sub_1BCAA3C(0LL, v43);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields._current, 0LL);
      v46 = materials;
      if ( !materials )
        sub_1BCAA3C(0LL, v45);
      v47 = *(_QWORD *)&materials->max_length;
      if ( (int)v47 >= 1 )
      {
        v48 = 0LL;
        do
        {
          if ( v48 >= (unsigned int)v47 )
            sub_1BCAA44(materials, v45);
          v49 = (UnityEngine_Object_o *)v46->m_Items[v48];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
          UnityEngine_Object__DestroyImmediate_70154432(v49, 0LL);
          LODWORD(v47) = v46->max_length;
          ++v48;
        }
        while ( (__int64)v48 < (int)v47 );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  }
  if ( !v23 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    v23,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = v70;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)v51,
          i.fields._current,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v51 = this->fields.workRenderers;
    if ( !v51 )
      sub_1BCAA3C(0LL, v50);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  workRenderers = this->fields._targetRenderers;
  if ( !workRenderers )
LABEL_60:
    sub_1BCAA3C(workRenderers, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v70;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v53 = i.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
    v54 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL);
    if ( v54 )
    {
      if ( !v53 )
        sub_1BCAA3C(v54, v55);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v53, 0LL) )
      {
        v57 = this->fields.workRenderers;
        if ( !v57 )
          sub_1BCAA3C(0LL, v56);
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)v57,
                v53,
                (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v65 = (System_Collections_Generic_List_object__o *)this->fields.workRenderers;
          if ( !v65 )
            sub_1BCAA3C(0LL, v58);
          v66 = v65->fields._items;
          v67 = Method_System_Collections_Generic_List_Renderer__Add__;
          ++v65->fields._version;
          if ( !v66 )
            sub_1BCAA3C(v65, v58);
          v68 = v65->fields._size;
          if ( (unsigned int)v68 >= v66->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v65,
              v53,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            v65->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)v53;
            sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v53, v59, v60, v61, v62, v63, v64);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}