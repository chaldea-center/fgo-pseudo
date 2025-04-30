void __fastcall ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4A519DF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_Renderer__TypeInfo, v5);
    sub_1B863B8(&StringLiteral_16073/*"_ProjectorMatrixVP"*/, v6);
    sub_1B863B8(&StringLiteral_16074/*"_ProjectorPos"*/, v7);
    byte_4A519DF = 1;
  }
  this->fields._orthographicSize = 1.0;
  *(_QWORD *)&this->fields._nearClipPlane = 0x42C800003C23D70ALL;
  v8 = StringLiteral_16073/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_MatrixVP = (struct System_String_o *)StringLiteral_16073/*"_ProjectorMatrixVP"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._shaderPropertyName_MatrixVP, v8, v2, v3);
  v9 = StringLiteral_16074/*"_ProjectorPos"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16074/*"_ProjectorPos"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._shaderPropertyName_Pos, v9, v10, v11);
  this->fields._destroyRendererMaterial = 1;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.workRenderers = (struct System_Collections_Generic_List_Renderer__o *)v12;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.workRenderers, (int32_t)v12, v13, v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProjectionMatrixCalc__LateUpdate(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  UnityEngine_Matrix4x4_o *v10; // x0
  const MethodInfo *v11; // x2
  float orthographicSize; // s8
  float v13; // s9
  float v14; // s0
  float v15; // s1
  float v16; // s8
  float y; // s9
  float v18; // s2
  float v19; // s10
  __int64 v20; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v22; // x1
  UnityEngine_Material_array *v23; // x20
  int max_length; // w8
  int i; // w24
  System_String_o *shaderPropertyName_MatrixVP; // x1
  UnityEngine_Material_o *v27; // x21
  UnityEngine_Matrix4x4_o v28; // [xsp+0h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+40h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+80h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+C0h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+100h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+140h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+180h] [xbp-140h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+1C0h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+1E0h] [xbp-E0h]
  UnityEngine_Matrix4x4_o v37; // [xsp+220h] [xbp-A0h]
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A519DD & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__get_Count__, v6);
    byte_4A519DD = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_29;
  if ( workRenderers->fields._size < 1 )
    return;
  v38.fields.x = 1.0;
  v38.fields.y = 1.0;
  v38.fields.z = -1.0;
  UnityEngine_Matrix4x4__Scale(&v33, v38, 0LL);
  v34 = v33;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  UnityEngine_Transform__get_worldToLocalMatrix(&v33, transform, 0LL);
  v31 = v33;
  v32 = v34;
  v10 = UnityEngine_Matrix4x4__op_Multiply(&v33, &v32, &v31, 0LL);
  v37 = v33;
  orthographicSize = this->fields._orthographicSize;
  v13 = -orthographicSize;
  if ( this->fields._useRendererBounds )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v34,
      (ProjectionMatrixCalc_o *)v10,
      this->fields.workRenderers,
      v11);
    v14 = v13 - v34.fields.m30;
    v15 = orthographicSize + v34.fields.m30;
    v13 = v13 - v34.fields.m01;
    orthographicSize = orthographicSize + v34.fields.m01;
  }
  else
  {
    v15 = this->fields._orthographicSize;
    v14 = -orthographicSize;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v34,
    v14,
    v15,
    v13,
    orthographicSize,
    this->fields._nearClipPlane,
    this->fields._farClipPlane,
    0LL);
  v30 = v34;
  v29 = v37;
  UnityEngine_Matrix4x4__op_Multiply(&v34, &v30, &v29, 0LL);
  v36 = v34;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (LODWORD(v16) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (forward = UnityEngine_Transform__get_forward(transform, 0LL),
        y = forward.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v18 - 2) = UnityEngine_Transform__get_forward(transform, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.workRenderers) == 0LL) )
  {
LABEL_29:
    sub_1B86614(transform, v8);
  }
  v19 = v18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  *(_OWORD *)&v35.fields._list = *(_OWORD *)&v34.fields.m00;
  v35.fields._current = *(Il2CppObject **)&v34.fields.m01;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v35.fields._current )
      sub_1B86614(0LL, v20);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v35.fields._current, 0LL);
    v23 = materials;
    if ( !materials )
      sub_1B86614(0LL, v22);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1B8661C(materials, v22);
        shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
        v27 = v23->m_Items[i];
        v34 = v36;
        if ( !v27 )
          sub_1B86614(materials, shaderPropertyName_MatrixVP);
        v28 = v34;
        UnityEngine_Material__SetMatrix(v27, shaderPropertyName_MatrixVP, &v28, 0LL);
        v40.fields.w = 0.0;
        v40.fields.x = v16;
        v40.fields.y = y;
        v40.fields.z = v19;
        UnityEngine_Material__SetVector(v27, this->fields._shaderPropertyName_Pos, v40, 0LL);
        max_length = v23->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_o *v2; // x19
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A519DC & 1) == 0 )
  {
    this = (ProjectionMatrixCalc_o *)sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__Clear__, method);
    byte_4A519DC = 1;
  }
  if ( v2->fields._destroyRendererMaterial )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(v2, method);
  workRenderers = v2->fields.workRenderers;
  if ( !workRenderers )
    sub_1B86614(this, method);
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
    sub_1B86614(0LL, v4);
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
  if ( !byte_4A487EA )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4A487EA = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  float v10; // s8
  float v11; // s9
  float v12; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  Il2CppObject *current; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v21; // s21
  float v22; // s22
  float v23; // s0
  float v24; // s3
  float v25; // s1
  float v26; // s4
  float v27; // s2
  float v28; // s5
  float v29; // s6
  float v30; // s7
  float v31; // s6
  float v32; // s16
  float v33; // s6
  float v34; // s7
  float v35; // s3
  float v36; // s16
  float v37; // s4
  float v38; // s17
  float v39; // s3
  float v40; // s5
  float v41; // s6
  float v42; // s4
  float v43; // s7
  float v44; // s5
  float v45; // s0
  UnityEngine_Bounds_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_4A519DE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, renderers);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v8);
    this = (ProjectionMatrixCalc_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A519DE = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !renderers )
    sub_1B86614(this, renderers);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)renderers,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v48 = v47;
  v15 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v48.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v17 )
    {
      if ( !current )
        sub_1B86614(v17, v18);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0LL) )
      {
        if ( !byte_4A487E1 )
        {
          sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v19);
          byte_4A487E1 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        if ( (float)((float)((float)((float)(v10 + v10) - static_fields->zeroVector.fields.z)
                           * (float)((float)(v10 + v10) - static_fields->zeroVector.fields.z))
                   + (float)((float)((float)((float)(v12 + v12) - static_fields->zeroVector.fields.x)
                                   * (float)((float)(v12 + v12) - static_fields->zeroVector.fields.x))
                           + (float)((float)((float)(v11 + v11) - static_fields->zeroVector.fields.y)
                                   * (float)((float)(v11 + v11) - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v47, (UnityEngine_Renderer_o *)current, 0LL);
          v21 = *((float *)&v47.fields._list + 1) - *(float *)&v47.fields._current;
          v22 = *(float *)&v47.fields._index - *((float *)&v47.fields._current + 1);
          v23 = *(float *)&v47.fields._list + *(float *)&v47.fields._version;
          if ( (float)(v15 - v12) >= (float)(*(float *)&v47.fields._list - *(float *)&v47.fields._version) )
            v24 = *(float *)&v47.fields._list - *(float *)&v47.fields._version;
          else
            v24 = v15 - v12;
          v25 = *((float *)&v47.fields._list + 1) + *(float *)&v47.fields._current;
          if ( (float)(v14 - v11) >= v21 )
            v26 = *((float *)&v47.fields._list + 1) - *(float *)&v47.fields._current;
          else
            v26 = v14 - v11;
          v27 = *(float *)&v47.fields._index + *((float *)&v47.fields._current + 1);
          if ( (float)(v13 - v10) >= v22 )
            v28 = *(float *)&v47.fields._index - *((float *)&v47.fields._current + 1);
          else
            v28 = v13 - v10;
          if ( (float)(v12 + v15) <= (float)(*(float *)&v47.fields._list - *(float *)&v47.fields._version) )
            v29 = *(float *)&v47.fields._list - *(float *)&v47.fields._version;
          else
            v29 = v12 + v15;
          if ( (float)(v11 + v14) <= v21 )
            v30 = *((float *)&v47.fields._list + 1) - *(float *)&v47.fields._current;
          else
            v30 = v11 + v14;
          v31 = v29 - v24;
          if ( (float)(v10 + v13) <= v22 )
            v32 = *(float *)&v47.fields._index - *((float *)&v47.fields._current + 1);
          else
            v32 = v10 + v13;
          v33 = v31 * 0.5;
          v34 = (float)(v30 - v26) * 0.5;
          v35 = v24 + v33;
          v36 = (float)(v32 - v28) * 0.5;
          v37 = v26 + v34;
          v38 = v35 - v33;
          v39 = v33 + v35;
          v40 = v28 + v36;
          v41 = v37 - v34;
          v42 = v34 + v37;
          v43 = v40 - v36;
          if ( v38 >= v23 )
            v38 = *(float *)&v47.fields._list + *(float *)&v47.fields._version;
          if ( v41 >= v25 )
            v41 = *((float *)&v47.fields._list + 1) + *(float *)&v47.fields._current;
          if ( v43 >= v27 )
            v43 = *(float *)&v47.fields._index + *((float *)&v47.fields._current + 1);
          v44 = v36 + v40;
          if ( v39 > v23 )
            v23 = v39;
          if ( v42 > v25 )
            v25 = v42;
          v45 = v23 - v38;
          if ( v44 > v27 )
            v27 = v44;
          v12 = v45 * 0.5;
          v11 = (float)(v25 - v41) * 0.5;
          v10 = (float)(v27 - v43) * 0.5;
          v15 = v38 + (float)(v45 * 0.5);
          v14 = v41 + v11;
          v13 = v43 + v10;
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v47, (UnityEngine_Renderer_o *)current, 0LL);
          v14 = *((float *)&v47.fields._list + 1);
          v15 = *(float *)&v47.fields._list;
          v12 = *(float *)&v47.fields._version;
          v13 = *(float *)&v47.fields._index;
          v10 = *((float *)&v47.fields._current + 1);
          v11 = *(float *)&v47.fields._current;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  retstr->fields.m_Center.fields.x = v15;
  retstr->fields.m_Center.fields.y = v14;
  retstr->fields.m_Center.fields.z = v13;
  retstr->fields.m_Extents.fields.x = v12;
  retstr->fields.m_Extents.fields.y = v11;
  retstr->fields.m_Extents.fields.z = v10;
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
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  Il2CppObject *current; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v12; // x1
  UnityEngine_Material_array *v13; // x19
  __int64 v14; // x8
  unsigned __int64 v15; // x24
  UnityEngine_Object_o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A519DA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A519DA = 1;
  }
  memset(&v18, 0, sizeof(v18));
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v9 )
    {
      if ( !current )
        sub_1B86614(v9, v10);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
      v13 = materials;
      if ( !materials )
        sub_1B86614(0LL, v12);
      v14 = *(_QWORD *)&materials->max_length;
      if ( (int)v14 >= 1 )
      {
        v15 = 0LL;
        do
        {
          if ( v15 >= (unsigned int)v14 )
            sub_1B8661C(materials, v12);
          v16 = (UnityEngine_Object_o *)v13->m_Items[v15];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_69356480(v16, 0LL);
          LODWORD(v14) = v13->max_length;
          ++v15;
        }
        while ( (__int64)v15 < (int)v14 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
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
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_Renderer__o *targetRenderers; // x0
  Il2CppObject *current; // x21
  _BOOL8 v18; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  __int64 v28; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v30; // x1
  UnityEngine_Material_array *v31; // x21
  __int64 v32; // x8
  unsigned __int64 v33; // x23
  UnityEngine_Object_o *v34; // x22
  __int64 v35; // x1
  struct System_Collections_Generic_List_Renderer__o *v36; // x0
  Il2CppObject *v37; // x20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  struct System_Collections_Generic_List_Renderer__o *v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_object__o *v45; // x0
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x8
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A519DB & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__Contains__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__Remove__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_List_Renderer__TypeInfo, v10);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v11);
    byte_4A519DB = 1;
  }
  memset(&i, 0, sizeof(i));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v50;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    targetRenderers = this->fields._targetRenderers;
    if ( !targetRenderers )
      sub_1B86614(0LL, v15);
    current = i.fields._current;
    v18 = System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)targetRenderers,
            i.fields._current,
            (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v18 )
    {
      if ( !v12 )
        sub_1B86614(v18, v19);
      v20 = System_Collections_Generic_List_object___Contains(
              v12,
              current,
              (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_Renderer__Contains__);
      if ( !v20 )
      {
        items = v12->fields._items;
        v25 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B86614(v20, v21);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            current,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v27[4] = (Il2CppClass *)current;
          sub_1B8635C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)current, v22, v23);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( this->fields._destroyRendererMaterial )
  {
    if ( !v12 )
      goto LABEL_60;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      v12,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = v50;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields._current )
        sub_1B86614(0LL, v28);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields._current, 0LL);
      v31 = materials;
      if ( !materials )
        sub_1B86614(0LL, v30);
      v32 = *(_QWORD *)&materials->max_length;
      if ( (int)v32 >= 1 )
      {
        v33 = 0LL;
        do
        {
          if ( v33 >= (unsigned int)v32 )
            sub_1B8661C(materials, v30);
          v34 = (UnityEngine_Object_o *)v31->m_Items[v33];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_69356480(v34, 0LL);
          LODWORD(v32) = v31->max_length;
          ++v33;
        }
        while ( (__int64)v33 < (int)v32 );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  }
  if ( !v12 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    v12,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = v50;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)v36,
          i.fields._current,
          (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v36 = this->fields.workRenderers;
    if ( !v36 )
      sub_1B86614(0LL, v35);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  workRenderers = this->fields._targetRenderers;
  if ( !workRenderers )
LABEL_60:
    sub_1B86614(workRenderers, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v50;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v37 = i.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v38 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL);
    if ( v38 )
    {
      if ( !v37 )
        sub_1B86614(v38, v39);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v37, 0LL) )
      {
        v41 = this->fields.workRenderers;
        if ( !v41 )
          sub_1B86614(0LL, v40);
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)v41,
                v37,
                (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v45 = (System_Collections_Generic_List_object__o *)this->fields.workRenderers;
          if ( !v45 )
            sub_1B86614(0LL, v42);
          v46 = v45->fields._items;
          v47 = Method_System_Collections_Generic_List_Renderer__Add__;
          ++v45->fields._version;
          if ( !v46 )
            sub_1B86614(v45, v42);
          v48 = v45->fields._size;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v45,
              v37,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &v46->obj.klass + v48;
            v45->fields._size = v48 + 1;
            v49[4] = (Il2CppClass *)v37;
            sub_1B8635C((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v37, v43, v44);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}