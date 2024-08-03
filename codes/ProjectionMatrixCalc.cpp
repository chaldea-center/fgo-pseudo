void __fastcall ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FF4BC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_Renderer__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16238/*"_ProjectorMatrixVP"*/, v6);
    sub_1B640C8(&StringLiteral_16239/*"_ProjectorPos"*/, v7);
    byte_49FF4BC = 1;
  }
  this->fields._orthographicSize = 1.0;
  *(_QWORD *)&this->fields._nearClipPlane = 0x42C800003C23D70ALL;
  v8 = StringLiteral_16238/*"_ProjectorMatrixVP"*/;
  this->fields._shaderPropertyName_MatrixVP = (struct System_String_o *)StringLiteral_16238/*"_ProjectorMatrixVP"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._shaderPropertyName_MatrixVP, v8, v2, v3);
  v9 = StringLiteral_16239/*"_ProjectorPos"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16239/*"_ProjectorPos"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._shaderPropertyName_Pos, v9, v10, v11);
  this->fields._destroyRendererMaterial = 1;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.workRenderers = (struct System_Collections_Generic_List_Renderer__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.workRenderers, (int32_t)v14, v15, v16);
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
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  UnityEngine_Matrix4x4_o *v9; // x0
  const MethodInfo *v10; // x2
  float orthographicSize; // s8
  float v12; // s9
  float v13; // s0
  float v14; // s1
  float v15; // s8
  float y; // s9
  float v17; // s2
  float v18; // s10
  UnityEngine_Material_array *materials; // x0
  __int64 v20; // x1
  UnityEngine_Material_array *v21; // x20
  int max_length; // w8
  int i; // w24
  System_String_o *shaderPropertyName_MatrixVP; // x1
  UnityEngine_Material_o *v25; // x21
  UnityEngine_Matrix4x4_o v26; // [xsp+0h] [xbp-2C0h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+40h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+80h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+C0h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+100h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+140h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+180h] [xbp-140h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+1C0h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+1E0h] [xbp-E0h]
  UnityEngine_Matrix4x4_o v35; // [xsp+220h] [xbp-A0h]
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF4BA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Count__, v6);
    byte_49FF4BA = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_29;
  if ( workRenderers->fields._size < 1 )
    return;
  v36.fields.x = 1.0;
  v36.fields.y = 1.0;
  v36.fields.z = -1.0;
  UnityEngine_Matrix4x4__Scale(&v31, v36, 0LL);
  v32 = v31;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  UnityEngine_Transform__get_worldToLocalMatrix(&v31, transform, 0LL);
  v29 = v31;
  v30 = v32;
  v9 = UnityEngine_Matrix4x4__op_Multiply(&v31, &v30, &v29, 0LL);
  v35 = v31;
  orthographicSize = this->fields._orthographicSize;
  v12 = -orthographicSize;
  if ( this->fields._useRendererBounds )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v32,
      (ProjectionMatrixCalc_o *)v9,
      this->fields.workRenderers,
      v10);
    v13 = v12 - v32.fields.m30;
    v14 = orthographicSize + v32.fields.m30;
    v12 = v12 - v32.fields.m01;
    orthographicSize = orthographicSize + v32.fields.m01;
  }
  else
  {
    v14 = this->fields._orthographicSize;
    v13 = -orthographicSize;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v32,
    v13,
    v14,
    v12,
    orthographicSize,
    this->fields._nearClipPlane,
    this->fields._farClipPlane,
    0LL);
  v28 = v32;
  v27 = v35;
  UnityEngine_Matrix4x4__op_Multiply(&v32, &v28, &v27, 0LL);
  v34 = v32;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (forward = UnityEngine_Transform__get_forward(transform, 0LL),
        y = forward.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v17 - 2) = UnityEngine_Transform__get_forward(transform, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.workRenderers) == 0LL) )
  {
LABEL_29:
    sub_1B64324(transform);
  }
  v18 = v17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  *(_OWORD *)&v33.fields._list = *(_OWORD *)&v32.fields.m00;
  v33.fields._current = *(Il2CppObject **)&v32.fields.m01;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v33.fields._current )
      sub_1B64324(0LL);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v33.fields._current, 0LL);
    v21 = materials;
    if ( !materials )
      sub_1B64324(0LL);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1B6432C(materials, v20);
        shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
        v25 = v21->m_Items[i];
        v32 = v34;
        if ( !v25 )
          sub_1B64324(materials);
        v26 = v32;
        UnityEngine_Material__SetMatrix(v25, shaderPropertyName_MatrixVP, &v26, 0LL);
        v38.fields.w = 0.0;
        v38.fields.x = v15;
        v38.fields.y = y;
        v38.fields.z = v18;
        UnityEngine_Material__SetVector(v25, this->fields._shaderPropertyName_Pos, v38, 0LL);
        max_length = v21->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void __fastcall ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_o *v2; // x19
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_49FF4B9 & 1) == 0 )
  {
    this = (ProjectionMatrixCalc_o *)sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__Clear__, method);
    byte_49FF4B9 = 1;
  }
  if ( v2->fields._destroyRendererMaterial )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(v2, method);
  workRenderers = v2->fields.workRenderers;
  if ( !workRenderers )
    sub_1B64324(this);
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
  ProjectionMatrixCalc_o *v4; // x0
  __int64 v5; // x1
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
    sub_1B64324(0LL);
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
    ProjectionMatrixCalc__calcRenderersBounds((UnityEngine_Bounds_o *)&v25, v4, this->fields.workRenderers, v6);
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
  if ( !byte_49F711A )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v5);
    byte_49F711A = 1;
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v20; // s21
  float v21; // s22
  float v22; // s0
  float v23; // s3
  float v24; // s1
  float v25; // s4
  float v26; // s2
  float v27; // s5
  float v28; // s6
  float v29; // s7
  float v30; // s6
  float v31; // s16
  float v32; // s6
  float v33; // s7
  float v34; // s3
  float v35; // s16
  float v36; // s4
  float v37; // s17
  float v38; // s3
  float v39; // s5
  float v40; // s6
  float v41; // s4
  float v42; // s7
  float v43; // s5
  float v44; // s0
  UnityEngine_Bounds_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_49FF4BB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, renderers);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v8);
    this = (ProjectionMatrixCalc_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FF4BB = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( !renderers )
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)renderers,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v47 = v46;
  v15 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v17 )
    {
      if ( !current )
        sub_1B64324(v17);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0LL) )
      {
        if ( !byte_49F7111 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
          byte_49F7111 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        if ( (float)((float)((float)((float)(v10 + v10) - static_fields->zeroVector.fields.z)
                           * (float)((float)(v10 + v10) - static_fields->zeroVector.fields.z))
                   + (float)((float)((float)((float)(v12 + v12) - static_fields->zeroVector.fields.x)
                                   * (float)((float)(v12 + v12) - static_fields->zeroVector.fields.x))
                           + (float)((float)((float)(v11 + v11) - static_fields->zeroVector.fields.y)
                                   * (float)((float)(v11 + v11) - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v46, (UnityEngine_Renderer_o *)current, 0LL);
          v20 = *((float *)&v46.fields._list + 1) - *(float *)&v46.fields._current;
          v21 = *(float *)&v46.fields._index - *((float *)&v46.fields._current + 1);
          v22 = *(float *)&v46.fields._list + *(float *)&v46.fields._version;
          if ( (float)(v15 - v12) >= (float)(*(float *)&v46.fields._list - *(float *)&v46.fields._version) )
            v23 = *(float *)&v46.fields._list - *(float *)&v46.fields._version;
          else
            v23 = v15 - v12;
          v24 = *((float *)&v46.fields._list + 1) + *(float *)&v46.fields._current;
          if ( (float)(v14 - v11) >= v20 )
            v25 = *((float *)&v46.fields._list + 1) - *(float *)&v46.fields._current;
          else
            v25 = v14 - v11;
          v26 = *(float *)&v46.fields._index + *((float *)&v46.fields._current + 1);
          if ( (float)(v13 - v10) >= v21 )
            v27 = *(float *)&v46.fields._index - *((float *)&v46.fields._current + 1);
          else
            v27 = v13 - v10;
          if ( (float)(v12 + v15) <= (float)(*(float *)&v46.fields._list - *(float *)&v46.fields._version) )
            v28 = *(float *)&v46.fields._list - *(float *)&v46.fields._version;
          else
            v28 = v12 + v15;
          if ( (float)(v11 + v14) <= v20 )
            v29 = *((float *)&v46.fields._list + 1) - *(float *)&v46.fields._current;
          else
            v29 = v11 + v14;
          v30 = v28 - v23;
          if ( (float)(v10 + v13) <= v21 )
            v31 = *(float *)&v46.fields._index - *((float *)&v46.fields._current + 1);
          else
            v31 = v10 + v13;
          v32 = v30 * 0.5;
          v33 = (float)(v29 - v25) * 0.5;
          v34 = v23 + v32;
          v35 = (float)(v31 - v27) * 0.5;
          v36 = v25 + v33;
          v37 = v34 - v32;
          v38 = v32 + v34;
          v39 = v27 + v35;
          v40 = v36 - v33;
          v41 = v33 + v36;
          v42 = v39 - v35;
          if ( v37 >= v22 )
            v37 = *(float *)&v46.fields._list + *(float *)&v46.fields._version;
          if ( v40 >= v24 )
            v40 = *((float *)&v46.fields._list + 1) + *(float *)&v46.fields._current;
          if ( v42 >= v26 )
            v42 = *(float *)&v46.fields._index + *((float *)&v46.fields._current + 1);
          v43 = v35 + v39;
          if ( v38 > v22 )
            v22 = v38;
          if ( v41 > v24 )
            v24 = v41;
          v44 = v22 - v37;
          if ( v43 > v26 )
            v26 = v43;
          v12 = v44 * 0.5;
          v11 = (float)(v24 - v40) * 0.5;
          v10 = (float)(v26 - v42) * 0.5;
          v15 = v37 + (float)(v44 * 0.5);
          v14 = v40 + v11;
          v13 = v42 + v10;
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v46, (UnityEngine_Renderer_o *)current, 0LL);
          v14 = *((float *)&v46.fields._list + 1);
          v15 = *(float *)&v46.fields._list;
          v12 = *(float *)&v46.fields._version;
          v13 = *(float *)&v46.fields._index;
          v10 = *((float *)&v46.fields._current + 1);
          v11 = *(float *)&v46.fields._current;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
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
  UnityEngine_Material_array *materials; // x0
  __int64 v11; // x1
  UnityEngine_Material_array *v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  UnityEngine_Object_o *v15; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF4B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FF4B7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v9 )
    {
      if ( !current )
        sub_1B64324(v9);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
      v12 = materials;
      if ( !materials )
        sub_1B64324(0LL);
      v13 = *(_QWORD *)&materials->max_length;
      if ( (int)v13 >= 1 )
      {
        v14 = 0LL;
        do
        {
          if ( v14 >= (unsigned int)v13 )
            sub_1B6432C(materials, v11);
          v15 = (UnityEngine_Object_o *)v12->m_Items[v14];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_69127924(v15, 0LL);
          LODWORD(v13) = v12->max_length;
          ++v14;
        }
        while ( (__int64)v14 < (int)v13 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
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
  System_Collections_Generic_List_object__o *v13; // x20
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  struct System_Collections_Generic_List_Renderer__o *targetRenderers; // x0
  Il2CppObject *current; // x21
  _BOOL8 v17; // x0
  _BOOL8 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  UnityEngine_Material_array *materials; // x0
  __int64 v26; // x1
  UnityEngine_Material_array *v27; // x21
  __int64 v28; // x8
  unsigned __int64 v29; // x23
  UnityEngine_Object_o *v30; // x22
  struct System_Collections_Generic_List_Renderer__o *v31; // x0
  Il2CppObject *v32; // x20
  _BOOL8 v33; // x0
  struct System_Collections_Generic_List_Renderer__o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_List_object__o *v37; // x0
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x8
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FF4B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__Contains__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__Remove__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_Renderer__TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49FF4B8 = 1;
  }
  memset(&i, 0, sizeof(i));
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    targetRenderers = this->fields._targetRenderers;
    if ( !targetRenderers )
      sub_1B64324(0LL);
    current = i.fields._current;
    v17 = System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)targetRenderers,
            i.fields._current,
            (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v17 )
    {
      if ( !v13 )
        sub_1B64324(v17);
      v18 = System_Collections_Generic_List_object___Contains(
              v13,
              current,
              (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_Renderer__Contains__);
      if ( !v18 )
      {
        items = v13->fields._items;
        v22 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1B64324(v18);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            current,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v24[4] = (Il2CppClass *)current;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)current, v19, v20);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( this->fields._destroyRendererMaterial )
  {
    if ( !v13 )
      goto LABEL_60;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      v13,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    i = v42;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !i.fields._current )
        sub_1B64324(0LL);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)i.fields._current, 0LL);
      v27 = materials;
      if ( !materials )
        sub_1B64324(0LL);
      v28 = *(_QWORD *)&materials->max_length;
      if ( (int)v28 >= 1 )
      {
        v29 = 0LL;
        do
        {
          if ( v29 >= (unsigned int)v28 )
            sub_1B6432C(materials, v26);
          v30 = (UnityEngine_Object_o *)v27->m_Items[v29];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_69127924(v30, 0LL);
          LODWORD(v28) = v27->max_length;
          ++v29;
        }
        while ( (__int64)v29 < (int)v28 );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  }
  if ( !v13 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    v13,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  for ( i = v42;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)v31,
          i.fields._current,
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_Renderer__Remove__) )
  {
    v31 = this->fields.workRenderers;
    if ( !v31 )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  workRenderers = this->fields._targetRenderers;
  if ( !workRenderers )
LABEL_60:
    sub_1B64324(workRenderers);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  i = v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v32 = i.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL);
    if ( v33 )
    {
      if ( !v32 )
        sub_1B64324(v33);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v32, 0LL) )
      {
        v34 = this->fields.workRenderers;
        if ( !v34 )
          sub_1B64324(0LL);
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)v34,
                v32,
                (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v37 = (System_Collections_Generic_List_object__o *)this->fields.workRenderers;
          if ( !v37 )
            sub_1B64324(0LL);
          v38 = v37->fields._items;
          v39 = Method_System_Collections_Generic_List_Renderer__Add__;
          ++v37->fields._version;
          if ( !v38 )
            sub_1B64324(v37);
          v40 = v37->fields._size;
          if ( (unsigned int)v40 >= v38->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              v32,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &v38->obj.klass + v40;
            v37->fields._size = v40 + 1;
            v41[4] = (Il2CppClass *)v32;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v32, v35, v36);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}