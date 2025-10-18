void ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C46782 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C37058(&StringLiteral_16313/*"_ProjectorMatrixVP"*/);
    sub_1C37058(&StringLiteral_16314/*"_ProjectorPos"*/);
    byte_4C46782 = 1;
  }
  this->fields._orthographicSize = 1.0;
  *(_QWORD *)&this->fields._nearClipPlane = 0x42C800003C23D70ALL;
  v5 = StringLiteral_16313/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_MatrixVP = (struct System_String_o *)StringLiteral_16313/*"_ProjectorMatrixVP"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._shaderPropertyName_MatrixVP, v5, v2, v3);
  v6 = StringLiteral_16314/*"_ProjectorPos"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16314/*"_ProjectorPos"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._shaderPropertyName_Pos, v6, v7, v8);
  this->fields._destroyRendererMaterial = 1;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.workRenderers = (struct System_Collections_Generic_List_Renderer__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.workRenderers, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  UnityEngine_Matrix4x4_o *v5; // x0
  const MethodInfo *v6; // x2
  float orthographicSize; // s8
  float v8; // s9
  float v9; // s0
  float v10; // s1
  float v11; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Material_array *materials; // x0
  UnityEngine_Material_array *v15; // x20
  int max_length; // w8
  int i; // w24
  System_String_o *shaderPropertyName_MatrixVP; // x1
  UnityEngine_Material_o *v19; // x21
  UnityEngine_Matrix4x4_o v20; // [xsp+0h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v21; // [xsp+40h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v22; // [xsp+80h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+C0h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+100h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+140h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+180h] [xbp-140h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+1C0h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+1E0h] [xbp-E0h]
  UnityEngine_Matrix4x4_o v29; // [xsp+220h] [xbp-A0h]
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C46780 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    byte_4C46780 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_29;
  if ( workRenderers->fields._size < 1 )
    return;
  v30.fields.x = 1.0;
  v30.fields.y = 1.0;
  v30.fields.z = -1.0;
  UnityEngine_Matrix4x4__Scale(&v25, v30, 0);
  v26 = v25;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  UnityEngine_Transform__get_worldToLocalMatrix(&v25, transform, 0);
  v23 = v25;
  v24 = v26;
  v5 = UnityEngine_Matrix4x4__op_Multiply(&v25, &v24, &v23, 0);
  v29 = v25;
  orthographicSize = this->fields._orthographicSize;
  v8 = -orthographicSize;
  if ( this->fields._useRendererBounds )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v26,
      (ProjectionMatrixCalc_o *)v5,
      this->fields.workRenderers,
      v6);
    v9 = v8 - v26.fields.m30;
    v10 = orthographicSize + v26.fields.m30;
    v8 = v8 - v26.fields.m01;
    orthographicSize = orthographicSize + v26.fields.m01;
  }
  else
  {
    v10 = this->fields._orthographicSize;
    v9 = -orthographicSize;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v26,
    v9,
    v10,
    v8,
    orthographicSize,
    this->fields._nearClipPlane,
    this->fields._farClipPlane,
    0);
  v22 = v26;
  v21 = v29;
  UnityEngine_Matrix4x4__op_Multiply(&v26, &v22, &v21, 0);
  v28 = v26;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (forward = UnityEngine_Transform__get_forward(transform, 0),
        y = forward.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (v32 = UnityEngine_Transform__get_forward(transform, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.workRenderers) == 0) )
  {
LABEL_29:
    sub_1C372B4(transform);
  }
  z = v32.fields.z;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  *(_OWORD *)&v27.fields._list = *(_OWORD *)&v26.fields.m00;
  v27.fields._current = *(Il2CppObject **)&v26.fields.m01;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v27.fields._current )
      sub_1C372B4(0);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v27.fields._current, 0);
    v15 = materials;
    if ( !materials )
      sub_1C372B4(0);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C372BC(materials);
        shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
        v19 = v15->m_Items[i];
        v26 = v28;
        if ( !v19 )
          sub_1C372B4(materials);
        v20 = v26;
        UnityEngine_Material__SetMatrix(v19, shaderPropertyName_MatrixVP, &v20, 0);
        v33.fields.w = 0.0;
        v33.fields.x = v11;
        v33.fields.y = y;
        v33.fields.z = z;
        UnityEngine_Material__SetVector(v19, this->fields._shaderPropertyName_Pos, v33, 0);
        max_length = v15->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_o *v2; // x19
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4C4677F & 1) == 0 )
  {
    this = (ProjectionMatrixCalc_o *)sub_1C37058(&Method_System_Collections_Generic_List_Renderer__Clear__);
    byte_4C4677F = 1;
  }
  if ( v2->fields._destroyRendererMaterial )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(v2, method);
  workRenderers = v2->fields.workRenderers;
  if ( !workRenderers )
    sub_1C372B4(this);
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
  ProjectionMatrixCalc_o *v4; // x0
  const MethodInfo *v5; // x2
  int32x2_t v6; // d4
  int32x2_t v7; // d5
  float32x2_t v8; // d10
  float32x2_t v9; // d9
  float farClipPlane; // s0
  float nearClipPlane; // s1
  float v12; // s8
  float v13; // s11
  unsigned __int64 v14; // d3 OVERLAPPED
  int v15; // s4
  float v16; // s5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32x2_t v18; // [xsp+0h] [xbp-1A0h]
  int32x2_t v19; // [xsp+10h] [xbp-190h]
  UnityEngine_Matrix4x4_o v20; // [xsp+20h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v21; // [xsp+60h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v22; // [xsp+A0h] [xbp-100h]
  UnityEngine_Matrix4x4_o v23; // [xsp+E0h] [xbp-C0h]
  UnityEngine_Matrix4x4_o v24; // [xsp+120h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  UnityEngine_Gizmos__get_matrix(&v24, 0);
  v22 = v24;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  UnityEngine_Transform__get_localToWorldMatrix(&v24, transform, 0);
  v21 = v24;
  UnityEngine_Gizmos__set_matrix(&v21, 0);
  v6.n64_u32[0] = LODWORD(this->fields._orthographicSize);
  v7.n64_f32[0] = -v6.n64_f32[0];
  if ( this->fields._useRendererBounds )
  {
    v18.n64_u64[0] = v7.n64_u64[0];
    v19.n64_u64[0] = v6.n64_u64[0];
    v23 = v22;
    ProjectionMatrixCalc__calcRenderersBounds((UnityEngine_Bounds_o *)&v24, v4, this->fields.workRenderers, v5);
    v8.n64_u64[0] = vsub_f32(vdup_lane_s32(v18, 0), *(float32x2_t *)&v24.fields.m30).n64_u64[0];
    v9.n64_u64[0] = vadd_f32(vdup_lane_s32(v19, 0), *(float32x2_t *)&v24.fields.m30).n64_u64[0];
    v24 = v23;
  }
  else
  {
    v9.n64_u64[0] = vdup_lane_s32(v6, 0).n64_u64[0];
    v8.n64_u64[0] = vdup_lane_s32(v7, 0).n64_u64[0];
    v24 = v22;
  }
  nearClipPlane = this->fields._nearClipPlane;
  farClipPlane = this->fields._farClipPlane;
  v12 = farClipPlane - nearClipPlane;
  v13 = nearClipPlane + (float)((float)(farClipPlane - nearClipPlane) * 0.5);
  if ( !byte_4C3C92A )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C92A = 1;
  }
  v14 = vsub_f32(v9, v8).n64_u64[0];
  v15 = HIDWORD(v14);
  v16 = v12;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v25.fields.x = v13 * static_fields->forwardVector.fields.x;
  v25.fields.y = v13 * static_fields->forwardVector.fields.y;
  v25.fields.z = v13 * static_fields->forwardVector.fields.z;
  UnityEngine_Gizmos__DrawWireCube(v25, *(UnityEngine_Vector3_o *)&v14, 0);
  v20 = v24;
  UnityEngine_Gizmos__set_matrix(&v20, 0);
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v12; // s21
  float v13; // s22
  float v14; // s0
  float v15; // s3
  float v16; // s1
  float v17; // s4
  float v18; // s2
  float v19; // s5
  float v20; // s6
  float v21; // s7
  float v22; // s6
  float v23; // s16
  float v24; // s6
  float v25; // s7
  float v26; // s3
  float v27; // s16
  float v28; // s4
  float v29; // s17
  float v30; // s3
  float v31; // s5
  float v32; // s6
  float v33; // s4
  float v34; // s7
  float v35; // s5
  float v36; // s0
  unsigned int v37; // s9
  unsigned int v38; // s8
  UnityEngine_Bounds_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_4C46781 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    this = (ProjectionMatrixCalc_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46781 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !renderers )
    sub_1C372B4(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)renderers,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v41 = v40;
  list = 0;
  v7 = 0;
  v8 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v10 )
    {
      if ( !current )
        sub_1C372B4(v10);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0) )
      {
        if ( !byte_4C3C921 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
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
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v40, (UnityEngine_Renderer_o *)current, 0);
          v12 = *((float *)&v40.fields._list + 1) - *(float *)&v40.fields._current;
          v13 = *(float *)&v40.fields._index - *((float *)&v40.fields._current + 1);
          v14 = *(float *)&v40.fields._list + *(float *)&v40.fields._version;
          if ( (float)(*(float *)&list - *((float *)&v7 + 1)) >= (float)(*(float *)&v40.fields._list
                                                                       - *(float *)&v40.fields._version) )
            v15 = *(float *)&v40.fields._list - *(float *)&v40.fields._version;
          else
            v15 = *(float *)&list - *((float *)&v7 + 1);
          v16 = *((float *)&v40.fields._list + 1) + *(float *)&v40.fields._current;
          if ( (float)(*((float *)&list + 1) - *(float *)&v8) >= v12 )
            v17 = *((float *)&v40.fields._list + 1) - *(float *)&v40.fields._current;
          else
            v17 = *((float *)&list + 1) - *(float *)&v8;
          v18 = *(float *)&v40.fields._index + *((float *)&v40.fields._current + 1);
          if ( (float)(*(float *)&v7 - *((float *)&v8 + 1)) >= v13 )
            v19 = *(float *)&v40.fields._index - *((float *)&v40.fields._current + 1);
          else
            v19 = *(float *)&v7 - *((float *)&v8 + 1);
          if ( (float)(*((float *)&v7 + 1) + *(float *)&list) <= (float)(*(float *)&v40.fields._list
                                                                       - *(float *)&v40.fields._version) )
            v20 = *(float *)&v40.fields._list - *(float *)&v40.fields._version;
          else
            v20 = *((float *)&v7 + 1) + *(float *)&list;
          if ( (float)(*(float *)&v8 + *((float *)&list + 1)) <= v12 )
            v21 = *((float *)&v40.fields._list + 1) - *(float *)&v40.fields._current;
          else
            v21 = *(float *)&v8 + *((float *)&list + 1);
          v22 = v20 - v15;
          if ( (float)(*((float *)&v8 + 1) + *(float *)&v7) <= v13 )
            v23 = *(float *)&v40.fields._index - *((float *)&v40.fields._current + 1);
          else
            v23 = *((float *)&v8 + 1) + *(float *)&v7;
          v24 = v22 * 0.5;
          v25 = (float)(v21 - v17) * 0.5;
          v26 = v15 + v24;
          v27 = (float)(v23 - v19) * 0.5;
          v28 = v17 + v25;
          v29 = v26 - v24;
          v30 = v24 + v26;
          v31 = v19 + v27;
          v32 = v28 - v25;
          v33 = v25 + v28;
          v34 = v31 - v27;
          if ( v29 >= v14 )
            v29 = *(float *)&v40.fields._list + *(float *)&v40.fields._version;
          if ( v32 >= v16 )
            v32 = *((float *)&v40.fields._list + 1) + *(float *)&v40.fields._current;
          if ( v34 >= v18 )
            v34 = *(float *)&v40.fields._index + *((float *)&v40.fields._current + 1);
          v35 = v27 + v31;
          if ( v30 > v14 )
            v14 = v30;
          if ( v33 > v16 )
            v16 = v33;
          v36 = v14 - v29;
          if ( v35 > v18 )
            v18 = v35;
          *(float *)&v37 = (float)(v16 - v32) * 0.5;
          *(float *)&v38 = (float)(v18 - v34) * 0.5;
          list = __PAIR64__(v32 + *(float *)&v37, v29 + (float)(v36 * 0.5));
          v7 = __PAIR64__(v36 * 0.5, v34 + *(float *)&v38);
          v8 = __PAIR64__(v38, v37);
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v40, (UnityEngine_Renderer_o *)current, 0);
          list = (unsigned __int64)v40.fields._list;
          v7 = *(_QWORD *)&v40.fields._index;
          v8 = (unsigned __int64)v40.fields._current;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
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
  UnityEngine_Material_array *materials; // x0
  UnityEngine_Material_array *v7; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x24
  UnityEngine_Object_o *v10; // x20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C4677D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4677D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v5 )
    {
      if ( !current )
        sub_1C372B4(v5);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0);
      v7 = materials;
      if ( !materials )
        sub_1C372B4(0);
      max_length = materials->max_length;
      if ( (int)max_length >= 1 )
      {
        v9 = 0;
        do
        {
          if ( v9 >= (unsigned int)max_length )
            sub_1C372BC(materials);
          v10 = (UnityEngine_Object_o *)v7->m_Items[v9];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_71266940(v10, 0);
          LODWORD(max_length) = v7->max_length;
          ++v9;
        }
        while ( (__int64)v9 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void ProjectionMatrixCalc__updateWorkRenderers(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  struct System_Collections_Generic_List_Renderer__o *targetRenderers; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  _BOOL8 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  UnityEngine_Material_array *materials; // x0
  UnityEngine_Material_array *v16; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v18; // x23
  UnityEngine_Object_o *v19; // x22
  struct System_Collections_Generic_List_Renderer__o *v20; // x0
  Il2CppObject *v21; // x20
  _BOOL8 v22; // x0
  struct System_Collections_Generic_List_Renderer__o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x0
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x8
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C4677E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4677E = 1;
  }
  memset(&i, 0, sizeof(i));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    targetRenderers = this->fields._targetRenderers;
    if ( !targetRenderers )
      sub_1C372B4(0);
    current = i.fields._current;
    v7 = System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)targetRenderers,
           i.fields._current,
           (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v7 )
    {
      if ( !v3 )
        sub_1C372B4(v7);
      v8 = System_Collections_Generic_List_object___Contains(
             v3,
             current,
             (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_Renderer__Contains__);
      if ( !v8 )
      {
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(v8);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            current,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v14[4] = (Il2CppClass *)current;
          sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)current, v9, v10);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( this->fields._destroyRendererMaterial )
  {
    if ( !v3 )
      goto LABEL_60;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      v3,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = v31;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields._current )
        sub_1C372B4(0);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields._current, 0);
      v16 = materials;
      if ( !materials )
        sub_1C372B4(0);
      max_length = materials->max_length;
      if ( (int)max_length >= 1 )
      {
        v18 = 0;
        do
        {
          if ( v18 >= (unsigned int)max_length )
            sub_1C372BC(materials);
          v19 = (UnityEngine_Object_o *)v16->m_Items[v18];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_71266940(v19, 0);
          LODWORD(max_length) = v16->max_length;
          ++v18;
        }
        while ( (__int64)v18 < (int)max_length );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  }
  if ( !v3 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v3,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = v31;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)v20,
          i.fields._current,
          (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v20 = this->fields.workRenderers;
    if ( !v20 )
      sub_1C372B4(0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  workRenderers = this->fields._targetRenderers;
  if ( !workRenderers )
LABEL_60:
    sub_1C372B4(workRenderers);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v21 = i.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
    if ( v22 )
    {
      if ( !v21 )
        sub_1C372B4(v22);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v21, 0) )
      {
        v23 = this->fields.workRenderers;
        if ( !v23 )
          sub_1C372B4(0);
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)v23,
                v21,
                (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v26 = (System_Collections_Generic_List_object__o *)this->fields.workRenderers;
          if ( !v26 )
            sub_1C372B4(0);
          v27 = v26->fields._items;
          v28 = Method_System_Collections_Generic_List_Renderer__Add__;
          ++v26->fields._version;
          if ( !v27 )
            sub_1C372B4(v26);
          v29 = v26->fields._size;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              v21,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &v27->obj.klass + v29;
            v26->fields._size = v29 + 1;
            v30[4] = (Il2CppClass *)v21;
            sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v21, v24, v25);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}