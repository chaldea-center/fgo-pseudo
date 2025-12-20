void ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D3016A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C94098(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C94098(&StringLiteral_16370/*"_ProjectorMatrixVP"*/);
    sub_1C94098(&StringLiteral_16371/*"_ProjectorPos"*/);
    byte_4D3016A = 1;
  }
  this->fields._orthographicSize = 1.0;
  *(_QWORD *)&this->fields._nearClipPlane = 0x42C800003C23D70ALL;
  v9 = StringLiteral_16370/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_MatrixVP = (struct System_String_o *)StringLiteral_16370/*"_ProjectorMatrixVP"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._shaderPropertyName_MatrixVP, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_16371/*"_ProjectorPos"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16371/*"_ProjectorPos"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._shaderPropertyName_Pos, v10, v11, v12, v13, v14, v15, v16);
  this->fields._destroyRendererMaterial = 1;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.workRenderers = (struct System_Collections_Generic_List_Renderer__o *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.workRenderers, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
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
  float z; // s10
  __int64 v15; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v17; // x1
  UnityEngine_Material_array *v18; // x20
  int max_length; // w8
  int i; // w24
  System_String_o *shaderPropertyName_MatrixVP; // x1
  UnityEngine_Material_o *v22; // x21
  UnityEngine_Matrix4x4_o v23; // [xsp+0h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+40h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+80h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+C0h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+100h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+140h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+180h] [xbp-140h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+1C0h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+1E0h] [xbp-E0h]
  UnityEngine_Matrix4x4_o v32; // [xsp+220h] [xbp-A0h]
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D30168 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    byte_4D30168 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_29;
  if ( workRenderers->fields._size < 1 )
    return;
  v33.fields.x = 1.0;
  v33.fields.y = 1.0;
  v33.fields.z = -1.0;
  UnityEngine_Matrix4x4__Scale(&v28, v33, 0);
  v29 = v28;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  UnityEngine_Transform__get_worldToLocalMatrix(&v28, transform, 0);
  v26 = v28;
  v27 = v29;
  v6 = UnityEngine_Matrix4x4__op_Multiply(&v28, &v27, &v26, 0);
  v32 = v28;
  orthographicSize = this->fields._orthographicSize;
  v9 = -orthographicSize;
  if ( this->fields._useRendererBounds )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v29,
      (ProjectionMatrixCalc_o *)v6,
      this->fields.workRenderers,
      v7);
    v10 = v9 - v29.fields.m30;
    v11 = orthographicSize + v29.fields.m30;
    v9 = v9 - v29.fields.m01;
    orthographicSize = orthographicSize + v29.fields.m01;
  }
  else
  {
    v11 = this->fields._orthographicSize;
    v10 = -orthographicSize;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v29,
    v10,
    v11,
    v9,
    orthographicSize,
    this->fields._nearClipPlane,
    this->fields._farClipPlane,
    0);
  v25 = v29;
  v24 = v32;
  UnityEngine_Matrix4x4__op_Multiply(&v29, &v25, &v24, 0);
  v31 = v29;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (forward = UnityEngine_Transform__get_forward(transform, 0),
        y = forward.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (v35 = UnityEngine_Transform__get_forward(transform, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.workRenderers) == 0) )
  {
LABEL_29:
    sub_1C942F0(transform, v4);
  }
  z = v35.fields.z;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  *(_OWORD *)&v30.fields._list = *(_OWORD *)&v29.fields.m00;
  v30.fields._current = *(Il2CppObject **)&v29.fields.m01;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v30.fields._current )
      sub_1C942F0(0, v15);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v30.fields._current, 0);
    v18 = materials;
    if ( !materials )
      sub_1C942F0(0, v17);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C942F8(materials);
        shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
        v22 = v18->m_Items[i];
        v29 = v31;
        if ( !v22 )
          sub_1C942F0(materials, shaderPropertyName_MatrixVP);
        v23 = v29;
        UnityEngine_Material__SetMatrix(v22, shaderPropertyName_MatrixVP, &v23, 0);
        v36.fields.w = 0.0;
        v36.fields.x = v12;
        v36.fields.y = y;
        v36.fields.z = z;
        UnityEngine_Material__SetVector(v22, this->fields._shaderPropertyName_Pos, v36, 0);
        max_length = v18->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_o *v2; // x19
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4D30167 & 1) == 0 )
  {
    this = (ProjectionMatrixCalc_o *)sub_1C94098(&Method_System_Collections_Generic_List_Renderer__Clear__);
    byte_4D30167 = 1;
  }
  if ( v2->fields._destroyRendererMaterial )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(v2, method);
  workRenderers = v2->fields.workRenderers;
  if ( !workRenderers )
    sub_1C942F0(this, method);
  size = workRenderers->fields._size;
  v5 = workRenderers->fields._version + 1;
  workRenderers->fields._size = 0;
  workRenderers->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)workRenderers->fields._items, 0, size, 0);
}


// local variable allocation has failed, the output may be wrong!
void ProjectionMatrixCalc__OnDrawGizmos(ProjectionMatrixCalc_o *this, const MethodInfo *method)
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

  UnityEngine_Gizmos__get_matrix(&v25, 0);
  v23 = v25;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C942F0(0, v4);
  UnityEngine_Transform__get_localToWorldMatrix(&v25, transform, 0);
  v22 = v25;
  UnityEngine_Gizmos__set_matrix(&v22, 0);
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
  if ( !byte_4D25F22 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F22 = 1;
  }
  v15 = vsub_f32(v10, v9).n64_u64[0];
  v16 = HIDWORD(v15);
  v17 = v13;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v26.fields.x = v14 * static_fields->forwardVector.fields.x;
  v26.fields.y = v14 * static_fields->forwardVector.fields.y;
  v26.fields.z = v14 * static_fields->forwardVector.fields.z;
  UnityEngine_Gizmos__DrawWireCube(v26, *(UnityEngine_Vector3_o *)&v15, 0);
  v21 = v25;
  UnityEngine_Gizmos__set_matrix(&v21, 0);
}


UnityEngine_Bounds_o *ProjectionMatrixCalc__calcRenderersBounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        ProjectionMatrixCalc_o *this,
        System_Collections_Generic_List_Renderer__o *renderers,
        const MethodInfo *method)
{
  unsigned __int64 list; // kr00_8
  unsigned __int64 v7; // kr08_8
  unsigned __int64 v8; // kr10_8
  Il2CppObject *current; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v13; // s21
  float v14; // s22
  float v15; // s0
  float v16; // s3
  float v17; // s1
  float v18; // s4
  float v19; // s2
  float v20; // s5
  float v21; // s6
  float v22; // s7
  float v23; // s6
  float v24; // s16
  float v25; // s6
  float v26; // s7
  float v27; // s3
  float v28; // s16
  float v29; // s4
  float v30; // s17
  float v31; // s3
  float v32; // s5
  float v33; // s6
  float v34; // s4
  float v35; // s7
  float v36; // s5
  float v37; // s0
  unsigned int v38; // s9
  unsigned int v39; // s8
  UnityEngine_Bounds_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_4D30169 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    this = (ProjectionMatrixCalc_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30169 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !renderers )
    sub_1C942F0(this, renderers);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)renderers,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v42 = v41;
  list = 0;
  v7 = 0;
  v8 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v10 )
    {
      if ( !current )
        sub_1C942F0(v10, v11);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0) )
      {
        if ( !byte_4D25F19 )
        {
          sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F19 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        if ( (float)((float)((float)((float)(*((float *)&v8 + 1) + *((float *)&v8 + 1))
                                   - static_fields->zeroVector.fields.z)
                           * (float)((float)(*((float *)&v8 + 1) + *((float *)&v8 + 1))
                                   - static_fields->zeroVector.fields.z))
                   + (float)((float)((float)((float)(*((float *)&v7 + 1) + *((float *)&v7 + 1))
                                           - static_fields->zeroVector.fields.x)
                                   * (float)((float)(*((float *)&v7 + 1) + *((float *)&v7 + 1))
                                           - static_fields->zeroVector.fields.x))
                           + (float)((float)((float)(*(float *)&v8 + *(float *)&v8) - static_fields->zeroVector.fields.y)
                                   * (float)((float)(*(float *)&v8 + *(float *)&v8) - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v41, (UnityEngine_Renderer_o *)current, 0);
          v13 = *((float *)&v41.fields._list + 1) - *(float *)&v41.fields._current;
          v14 = *(float *)&v41.fields._index - *((float *)&v41.fields._current + 1);
          v15 = *(float *)&v41.fields._list + *(float *)&v41.fields._version;
          if ( (float)(*(float *)&list - *((float *)&v7 + 1)) >= (float)(*(float *)&v41.fields._list
                                                                       - *(float *)&v41.fields._version) )
            v16 = *(float *)&v41.fields._list - *(float *)&v41.fields._version;
          else
            v16 = *(float *)&list - *((float *)&v7 + 1);
          v17 = *((float *)&v41.fields._list + 1) + *(float *)&v41.fields._current;
          if ( (float)(*((float *)&list + 1) - *(float *)&v8) >= v13 )
            v18 = *((float *)&v41.fields._list + 1) - *(float *)&v41.fields._current;
          else
            v18 = *((float *)&list + 1) - *(float *)&v8;
          v19 = *(float *)&v41.fields._index + *((float *)&v41.fields._current + 1);
          if ( (float)(*(float *)&v7 - *((float *)&v8 + 1)) >= v14 )
            v20 = *(float *)&v41.fields._index - *((float *)&v41.fields._current + 1);
          else
            v20 = *(float *)&v7 - *((float *)&v8 + 1);
          if ( (float)(*((float *)&v7 + 1) + *(float *)&list) <= (float)(*(float *)&v41.fields._list
                                                                       - *(float *)&v41.fields._version) )
            v21 = *(float *)&v41.fields._list - *(float *)&v41.fields._version;
          else
            v21 = *((float *)&v7 + 1) + *(float *)&list;
          if ( (float)(*(float *)&v8 + *((float *)&list + 1)) <= v13 )
            v22 = *((float *)&v41.fields._list + 1) - *(float *)&v41.fields._current;
          else
            v22 = *(float *)&v8 + *((float *)&list + 1);
          v23 = v21 - v16;
          if ( (float)(*((float *)&v8 + 1) + *(float *)&v7) <= v14 )
            v24 = *(float *)&v41.fields._index - *((float *)&v41.fields._current + 1);
          else
            v24 = *((float *)&v8 + 1) + *(float *)&v7;
          v25 = v23 * 0.5;
          v26 = (float)(v22 - v18) * 0.5;
          v27 = v16 + v25;
          v28 = (float)(v24 - v20) * 0.5;
          v29 = v18 + v26;
          v30 = v27 - v25;
          v31 = v25 + v27;
          v32 = v20 + v28;
          v33 = v29 - v26;
          v34 = v26 + v29;
          v35 = v32 - v28;
          if ( v30 >= v15 )
            v30 = *(float *)&v41.fields._list + *(float *)&v41.fields._version;
          if ( v33 >= v17 )
            v33 = *((float *)&v41.fields._list + 1) + *(float *)&v41.fields._current;
          if ( v35 >= v19 )
            v35 = *(float *)&v41.fields._index + *((float *)&v41.fields._current + 1);
          v36 = v28 + v32;
          if ( v31 > v15 )
            v15 = v31;
          if ( v34 > v17 )
            v17 = v34;
          v37 = v15 - v30;
          if ( v36 > v19 )
            v19 = v36;
          *(float *)&v38 = (float)(v17 - v33) * 0.5;
          *(float *)&v39 = (float)(v19 - v35) * 0.5;
          list = __PAIR64__(v33 + *(float *)&v38, v30 + (float)(v37 * 0.5));
          v7 = __PAIR64__(v37 * 0.5, v35 + *(float *)&v39);
          v8 = __PAIR64__(v39, v38);
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v41, (UnityEngine_Renderer_o *)current, 0);
          list = (unsigned __int64)v41.fields._list;
          v7 = *(_QWORD *)&v41.fields._index;
          v8 = (unsigned __int64)v41.fields._current;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  *(_QWORD *)&retstr->fields.m_Center.fields.x = list;
  *(_QWORD *)&retstr->fields.m_Center.fields.z = v7;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v8;
  return result;
}


void ProjectionMatrixCalc__destroyWorkRenderersMaterials(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v8; // x1
  UnityEngine_Material_array *v9; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  UnityEngine_Object_o *v12; // x20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D30165 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30165 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v5 )
    {
      if ( !current )
        sub_1C942F0(v5, v6);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0);
      v9 = materials;
      if ( !materials )
        sub_1C942F0(0, v8);
      max_length = materials->max_length;
      if ( (int)max_length >= 1 )
      {
        v11 = 0;
        do
        {
          if ( v11 >= (unsigned int)max_length )
            sub_1C942F8(materials);
          v12 = (UnityEngine_Object_o *)v9->m_Items[v11];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_72111160(v12, 0);
          LODWORD(max_length) = v9->max_length;
          ++v11;
        }
        while ( (__int64)v11 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void ProjectionMatrixCalc__updateWorkRenderers(ProjectionMatrixCalc_o *this, const MethodInfo *method)
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  __int64 v23; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v25; // x1
  UnityEngine_Material_array *v26; // x21
  il2cpp_array_size_t max_length; // x8
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
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_List_object__o *v44; // x0
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D30166 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C94098(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30166 = 1;
  }
  memset(&i, 0, sizeof(i));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v49;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    targetRenderers = this->fields._targetRenderers;
    if ( !targetRenderers )
      sub_1C942F0(0, v6);
    current = i.fields._current;
    v9 = System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)targetRenderers,
           i.fields._current,
           (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v9 )
    {
      if ( !v3 )
        sub_1C942F0(v9, v10);
      v11 = System_Collections_Generic_List_object___Contains(
              v3,
              current,
              (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_Renderer__Contains__);
      if ( !v11 )
      {
        items = v3->fields._items;
        v20 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C942F0(v11, v12);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            current,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v22[4] = (Il2CppClass *)current;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)current, v13, v14, v15, v16, v17, v18);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( this->fields._destroyRendererMaterial )
  {
    if ( !v3 )
      goto LABEL_60;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      v3,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = v49;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields._current )
        sub_1C942F0(0, v23);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields._current, 0);
      v26 = materials;
      if ( !materials )
        sub_1C942F0(0, v25);
      max_length = materials->max_length;
      if ( (int)max_length >= 1 )
      {
        v28 = 0;
        do
        {
          if ( v28 >= (unsigned int)max_length )
            sub_1C942F8(materials);
          v29 = (UnityEngine_Object_o *)v26->m_Items[v28];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_72111160(v29, 0);
          LODWORD(max_length) = v26->max_length;
          ++v28;
        }
        while ( (__int64)v28 < (int)max_length );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  }
  if ( !v3 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v3,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = v49;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)v31,
          i.fields._current,
          (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v31 = this->fields.workRenderers;
    if ( !v31 )
      sub_1C942F0(0, v30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  workRenderers = this->fields._targetRenderers;
  if ( !workRenderers )
LABEL_60:
    sub_1C942F0(workRenderers, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v49;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v32 = i.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0, 0);
    if ( v33 )
    {
      if ( !v32 )
        sub_1C942F0(v33, v34);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v32, 0) )
      {
        v36 = this->fields.workRenderers;
        if ( !v36 )
          sub_1C942F0(0, v35);
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)v36,
                v32,
                (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v44 = (System_Collections_Generic_List_object__o *)this->fields.workRenderers;
          if ( !v44 )
            sub_1C942F0(0, v37);
          v45 = v44->fields._items;
          v46 = Method_System_Collections_Generic_List_Renderer__Add__;
          ++v44->fields._version;
          if ( !v45 )
            sub_1C942F0(v44, v37);
          v47 = v44->fields._size;
          if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v44,
              v32,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &v45->obj.klass + v47;
            v44->fields._size = v47 + 1;
            v48[4] = (Il2CppClass *)v32;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v48 + 4), (int32_t)v32, v38, v39, v40, v41, v42, v43);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}