void ProjectionMatrixCalc___ctor(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_Renderer__c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_597432A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_2213A60(&StringLiteral_16964/*"_ProjectorMatrixVP"*/);
    sub_2213A60(&StringLiteral_16965/*"_ProjectorPos"*/);
    byte_597432A = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_16964/*"_ProjectorMatrixVP"*/;
  this->fields._orthographicSize = 1.0;
  this->fields._shaderPropertyName_MatrixVP = v9;
  *(_QWORD *)&this->fields._nearClipPlane = 0x42C800003C23D70ALL;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._shaderPropertyName_MatrixVP,
    (int32_t)v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_16965/*"_ProjectorPos"*/;
  this->fields._shaderPropertyName_Pos = (struct System_String_o *)StringLiteral_16965/*"_ProjectorPos"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._shaderPropertyName_Pos,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = System_Collections_Generic_List_Renderer__TypeInfo;
  this->fields._destroyRendererMaterial = 1;
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.workRenderers = (struct System_Collections_Generic_List_Renderer__o *)v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.workRenderers,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  float v14; // s10
  __int64 v15; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v17; // x1
  UnityEngine_Material_array *v18; // x20
  int max_length; // w8
  __int64 v20; // x24
  UnityEngine_Material_o *v21; // x21
  System_String_o *shaderPropertyName_MatrixVP; // x1
  float z; // s2
  UnityEngine_Matrix4x4_o v24; // [xsp+0h] [xbp-2E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+48h] [xbp-298h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+60h] [xbp-280h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+A0h] [xbp-240h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+E0h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+120h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+160h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+1A0h] [xbp-140h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32[4]; // [xsp+1E0h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+240h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974328 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    byte_5974328 = 1;
  }
  memset(v32, 0, 24);
  memset(&v32[1].fields._index, 0, 64);
  memset(&v33, 0, sizeof(v33));
  ProjectionMatrixCalc__updateWorkRenderers(this, method);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_29;
  if ( workRenderers->fields._size < 1 )
    return;
  v34.fields.x = 1.0;
  v34.fields.y = 1.0;
  v34.fields.z = -1.0;
  UnityEngine_Matrix4x4__Scale(&v31, v34, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  UnityEngine_Transform__get_worldToLocalMatrix(&v30, transform, 0);
  v29 = v31;
  v28 = v30;
  v6 = UnityEngine_Matrix4x4__op_Multiply(&v33, &v29, &v28, 0);
  orthographicSize = this->fields._orthographicSize;
  v9 = -orthographicSize;
  if ( this->fields._useRendererBounds )
  {
    ProjectionMatrixCalc__calcRenderersBounds(
      (UnityEngine_Bounds_o *)&v31,
      (ProjectionMatrixCalc_o *)v6,
      this->fields.workRenderers,
      v7);
    v10 = v9 - v31.fields.m30;
    v11 = orthographicSize + v31.fields.m30;
    v9 = v9 - v31.fields.m01;
    orthographicSize = orthographicSize + v31.fields.m01;
  }
  else
  {
    v11 = this->fields._orthographicSize;
    v10 = -orthographicSize;
  }
  UnityEngine_Matrix4x4__Ortho(
    &v31,
    v10,
    v11,
    v9,
    orthographicSize,
    this->fields._nearClipPlane,
    this->fields._farClipPlane,
    0);
  v26 = v33;
  v27 = v31;
  UnityEngine_Matrix4x4__op_Multiply(&v30, &v27, &v26, 0);
  *(UnityEngine_Matrix4x4_o *)&v32[1].fields._index = v30;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_forward(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (y = UnityEngine_Transform__get_forward(transform, 0).fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (z = UnityEngine_Transform__get_forward(transform, 0).fields.z,
        (transform = (UnityEngine_Transform_o *)this->fields.workRenderers) == 0) )
  {
LABEL_29:
    sub_2213CDC(transform, v4);
  }
  v14 = z;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v32[0] = v25;
  *(_QWORD *)&v31.fields.m00 = 0;
  *(_QWORD *)&v31.fields.m20 = v32;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            v32,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    if ( !v32[0].fields._current )
      sub_2213CDC(0, v15);
    materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v32[0].fields._current, 0);
    v18 = materials;
    if ( !materials )
      sub_2213CDC(0, v17);
    max_length = materials->max_length;
    if ( max_length >= 1 )
    {
      v20 = 0;
      do
      {
        if ( (unsigned int)v20 >= max_length )
          sub_2213CE4(materials);
        v21 = v18->m_Items[v20];
        if ( !v21 )
          sub_2213CDC(materials, v17);
        shaderPropertyName_MatrixVP = this->fields._shaderPropertyName_MatrixVP;
        v24 = *(UnityEngine_Matrix4x4_o *)&v32[1].fields._index;
        UnityEngine_Material__SetMatrix(v21, shaderPropertyName_MatrixVP, &v24, 0);
        v35.fields.w = 0.0;
        v35.fields.x = v12;
        v35.fields.y = y;
        v35.fields.z = v14;
        UnityEngine_Material__SetVector(v21, this->fields._shaderPropertyName_Pos, v35, 0);
        max_length = v18->max_length;
        ++v20;
      }
      while ( (int)v20 < max_length );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    v32,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}


void ProjectionMatrixCalc__OnDisable(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  ProjectionMatrixCalc_o *v2; // x19
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_5974327 & 1) == 0 )
  {
    this = (ProjectionMatrixCalc_o *)sub_2213A60(&Method_System_Collections_Generic_List_Renderer__Clear__);
    byte_5974327 = 1;
  }
  if ( v2->fields._destroyRendererMaterial )
    ProjectionMatrixCalc__destroyWorkRenderersMaterials(v2, method);
  workRenderers = v2->fields.workRenderers;
  if ( !workRenderers )
    sub_2213CDC(this, method);
  size = workRenderers->fields._size;
  v5 = workRenderers->fields._version + 1;
  workRenderers->fields._size = 0;
  workRenderers->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)workRenderers->fields._items, 0, size, 0);
}


void ProjectionMatrixCalc__OnDrawGizmos(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  ProjectionMatrixCalc_o *v5; // x0
  const MethodInfo *v6; // x2
  float orthographicSize; // s8
  float v8; // s9
  System_Collections_Generic_List_Renderer__o *workRenderers; // x1
  float v10; // s11
  float v11; // s10
  float nearClipPlane; // s12
  float farClipPlane; // s13
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v15; // s2
  UnityEngine_Matrix4x4_o v16; // [xsp+0h] [xbp-1D0h] BYREF
  UnityEngine_Matrix4x4_o v17; // [xsp+40h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v18; // [xsp+80h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v19[3]; // [xsp+C0h] [xbp-110h] BYREF
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s3.4,4:s4.4,8:s5.4

  memset(&v19[1], 0, 128);
  UnityEngine_Gizmos__get_matrix(v19, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  UnityEngine_Transform__get_localToWorldMatrix(&v18, transform, 0);
  v17 = v18;
  UnityEngine_Gizmos__set_matrix(&v17, 0);
  orthographicSize = this->fields._orthographicSize;
  v8 = -orthographicSize;
  if ( this->fields._useRendererBounds )
  {
    workRenderers = this->fields.workRenderers;
    v19[1] = v19[0];
    ProjectionMatrixCalc__calcRenderersBounds((UnityEngine_Bounds_o *)v19, v5, workRenderers, v6);
    v10 = v8 - v19[0].fields.m30;
    v11 = orthographicSize + v19[0].fields.m30;
    v8 = v8 - v19[0].fields.m01;
    orthographicSize = orthographicSize + v19[0].fields.m01;
    v19[2] = v19[1];
  }
  else
  {
    v11 = this->fields._orthographicSize;
    v10 = -orthographicSize;
    v19[2] = v19[0];
  }
  nearClipPlane = this->fields._nearClipPlane;
  farClipPlane = this->fields._farClipPlane;
  if ( !byte_5969AE9 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  v21.fields.z = farClipPlane - nearClipPlane;
  v21.fields.y = orthographicSize - v8;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v15 = nearClipPlane + (float)((float)(farClipPlane - nearClipPlane) * 0.5);
  v20.fields.x = v15 * static_fields->forwardVector.fields.x;
  v20.fields.y = v15 * static_fields->forwardVector.fields.y;
  v20.fields.z = v15 * static_fields->forwardVector.fields.z;
  v21.fields.x = v11 - v10;
  UnityEngine_Gizmos__DrawWireCube(v20, v21, 0);
  v16 = v19[2];
  UnityEngine_Gizmos__set_matrix(&v16, 0);
}


UnityEngine_Bounds_o *ProjectionMatrixCalc__calcRenderersBounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        ProjectionMatrixCalc_o *this,
        System_Collections_Generic_List_Renderer__o *renderers,
        const MethodInfo *method)
{
  float32x2_t v6; // d8
  float v7; // s9
  float v8; // s11
  float32x2_t v9; // d10
  __int64 v10; // x1
  Il2CppObject *current; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  float32x2_t *static_fields; // x8
  float32x2_t v15; // d0
  float v16; // s3
  int8x8_t v17; // d16
  float v18; // s2
  int8x8_t v19; // d6
  int8x8_t v20; // d17
  float v21; // s0
  int8x8_t v22; // d4
  int8x8_t v23; // d19
  int8x8_t v24; // d18
  float32x2_t v25; // d6
  float v26; // s2
  float32x2_t v27; // d7
  float v28; // s3
  float32x2_t v29; // d6
  float v30; // s1
  float v31; // s2
  int8x8_t v32; // d5
  int8x8_t v33; // d6
  int8x8_t v34; // d3
  int8x8_t v35; // d7
  float32x2_t v36; // d2
  UnityEngine_Bounds_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+30h] [xbp-A0h] BYREF

  if ( (byte_5974329 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    this = (ProjectionMatrixCalc_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974329 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !renderers )
    sub_2213CDC(this, renderers);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)renderers,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v6.n64_u64[0] = 0;
  v39 = v38;
  v7 = 0.0;
  v8 = 0.0;
  v9.n64_u64[0] = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v39.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v12 )
    {
      if ( !current )
        sub_2213CDC(v12, v13);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)current, 0) )
      {
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
        v15.n64_u64[0] = vsub_f32(vadd_f32(v9, v9), (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
        if ( (float)((float)((float)((float)(v7 + v7) - static_fields[1].n64_f32[0])
                           * (float)((float)(v7 + v7) - static_fields[1].n64_f32[0]))
                   + vaddv_f32(vmul_f32(v15, v15))) >= 1.0e-10 )
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v38, (UnityEngine_Renderer_o *)current, 0);
          v16 = v8 - v7;
          v17.n64_u64[0] = vadd_f32(v6, v9).n64_u64[0];
          v18 = *(float *)&v38.fields._index - *((float *)&v38.fields._current + 1);
          v19.n64_u64[0] = vsub_f32(v6, v9).n64_u64[0];
          v20.n64_u64[0] = vsub_f32((float32x2_t)v38.fields._list, *(float32x2_t *)&v38.fields._version).n64_u64[0];
          v21 = *(float *)&v38.fields._index + *((float *)&v38.fields._current + 1);
          v22.n64_u64[0] = vadd_f32((float32x2_t)v38.fields._list, *(float32x2_t *)&v38.fields._version).n64_u64[0];
          v23.n64_u64[0] = vcgt_f32(v17, v20).n64_u64[0];
          v24.n64_u64[0] = vcgt_f32(v20, v19).n64_u64[0];
          if ( (float)(v8 - v7) >= (float)(*(float *)&v38.fields._index - *((float *)&v38.fields._current + 1)) )
            v16 = *(float *)&v38.fields._index - *((float *)&v38.fields._current + 1);
          v25.n64_u64[0] = vbsl_s8(v24, v19, v20).n64_u64[0];
          if ( (float)(v7 + v8) > v18 )
            v18 = v7 + v8;
          v26 = (float)(v18 - v16) * 0.5;
          v27.n64_u64[0] = vmul_f32(vsub_f32(vbsl_s8(v23, v17, v20), v25), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
          v28 = v16 + v26;
          v29.n64_u64[0] = vadd_f32(v25, v27).n64_u64[0];
          v30 = v28 - v26;
          v31 = v26 + v28;
          v32.n64_u64[0] = vsub_f32(v29, v27).n64_u64[0];
          v33.n64_u64[0] = vadd_f32(v27, v29).n64_u64[0];
          v34.n64_u64[0] = vcgt_f32(v22, v32).n64_u64[0];
          v35.n64_u64[0] = vcgt_f32(v33, v22).n64_u64[0];
          if ( v30 >= v21 )
            v30 = *(float *)&v38.fields._index + *((float *)&v38.fields._current + 1);
          if ( v31 > v21 )
            v21 = v31;
          v36.n64_u64[0] = vbsl_s8(v34, v32, v22).n64_u64[0];
          v7 = (float)(v21 - v30) * 0.5;
          v9.n64_u64[0] = vmul_f32(vsub_f32(vbsl_s8(v35, v33, v22), v36), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
          v8 = v30 + v7;
          v6.n64_u64[0] = vadd_f32(v36, v9).n64_u64[0];
        }
        else
        {
          UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&v38, (UnityEngine_Renderer_o *)current, 0);
          v8 = *(float *)&v38.fields._index;
          v6.n64_u64[0] = (unsigned __int64)v38.fields._list;
          v9.n64_u64[0] = *(unsigned __int64 *)&v38.fields._version;
          v7 = *((float *)&v38.fields._current + 1);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  *(float32x2_t *)&retstr->fields.m_Center.fields.x = v6;
  retstr->fields.m_Center.fields.z = v8;
  *(float32x2_t *)&retstr->fields.m_Extents.fields.x = v9;
  retstr->fields.m_Extents.fields.z = v7;
  return result;
}


void ProjectionMatrixCalc__destroyWorkRenderersMaterials(ProjectionMatrixCalc_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Renderer__o *workRenderers; // x0
  __int64 v4; // x1
  Il2CppObject *current; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v9; // x1
  UnityEngine_Material_array *v10; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x24
  UnityEngine_Object_o *v13; // x20
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5974325 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974325 = 1;
  }
  workRenderers = this->fields.workRenderers;
  memset(&v15, 0, sizeof(v15));
  if ( !workRenderers )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v15 = v14;
  v14.fields._list = 0;
  *(_QWORD *)&v14.fields._index = &v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_2213CDC(v6, v7);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0);
      v10 = materials;
      if ( !materials )
        sub_2213CDC(0, v9);
      max_length = materials->max_length;
      if ( (int)max_length >= 1 )
      {
        v12 = 0;
        do
        {
          if ( v12 >= (unsigned int)max_length )
            sub_2213CE4(materials);
          v13 = (UnityEngine_Object_o *)v10->m_Items[v12];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
          UnityEngine_Object__DestroyImmediate_83460132(v13, 0);
          LODWORD(max_length) = v10->max_length;
          ++v12;
        }
        while ( (__int64)v12 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
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
  __int64 v32; // x1
  Il2CppObject *v33; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  struct System_Collections_Generic_List_Renderer__o *v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *v45; // x0
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x8
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5974326 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974326 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Renderer___ctor__);
  workRenderers = this->fields.workRenderers;
  if ( !workRenderers )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v51 = v50;
  v50.fields._list = 0;
  *(_QWORD *)&v50.fields._index = &v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    targetRenderers = this->fields._targetRenderers;
    if ( !targetRenderers )
      sub_2213CDC(0, v6);
    current = v51.fields._current;
    v9 = System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)targetRenderers,
           v51.fields._current,
           (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_Renderer__Contains__);
    if ( !v9 )
    {
      if ( !v3 )
        sub_2213CDC(v9, v10);
      v11 = System_Collections_Generic_List_object___Contains(
              v3,
              current,
              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_Renderer__Contains__);
      if ( !v11 )
      {
        items = v3->fields._items;
        v20 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_2213CDC(v11, v12);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v22[4] = (Il2CppClass *)current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)current, v13, v14, v15, v16, v17, v18);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  if ( this->fields._destroyRendererMaterial )
  {
    if ( !v3 )
      goto LABEL_59;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      v3,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    v51 = v50;
    v50.fields._list = 0;
    *(_QWORD *)&v50.fields._index = &v51;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
    {
      if ( !v51.fields._current )
        sub_2213CDC(0, v23);
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v51.fields._current, 0);
      v26 = materials;
      if ( !materials )
        sub_2213CDC(0, v25);
      max_length = materials->max_length;
      if ( (int)max_length >= 1 )
      {
        v28 = 0;
        do
        {
          if ( v28 >= (unsigned int)max_length )
            sub_2213CE4(materials);
          v29 = (UnityEngine_Object_o *)v26->m_Items[v28];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
          UnityEngine_Object__DestroyImmediate_83460132(v29, 0);
          LODWORD(max_length) = v26->max_length;
          ++v28;
        }
        while ( (__int64)v28 < (int)max_length );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  }
  if ( !v3 )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    v3,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v51 = v50;
  v50.fields._list = 0;
  *(_QWORD *)&v50.fields._index = &v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v31 = this->fields.workRenderers;
    if ( !v31 )
      sub_2213CDC(0, v30);
    System_Collections_Generic_List_object___Remove(
      (System_Collections_Generic_List_object__o *)v31,
      v51.fields._current,
      (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_Renderer__Remove__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
  workRenderers = this->fields._targetRenderers;
  if ( !workRenderers )
LABEL_59:
    sub_2213CDC(workRenderers, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)workRenderers,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
  v51 = v50;
  v50.fields._list = 0;
  *(_QWORD *)&v50.fields._index = &v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
  {
    v33 = v51.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    v34 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0, 0);
    if ( v34 )
    {
      if ( !v33 )
        sub_2213CDC(v34, v35);
      if ( UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v33, 0) )
      {
        v37 = this->fields.workRenderers;
        if ( !v37 )
          sub_2213CDC(0, v36);
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)v37,
                v33,
                (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_Renderer__Contains__) )
        {
          v45 = (System_Collections_Generic_List_object__o *)this->fields.workRenderers;
          if ( !v45
            || (v46 = v45->fields._items,
                v47 = Method_System_Collections_Generic_List_Renderer__Add__,
                ++v45->fields._version,
                !v46) )
          {
            sub_2213CDC(v45, v38);
          }
          v48 = v45->fields._size;
          if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v45,
              v33,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &v46->obj.klass + v48;
            v45->fields._size = v48 + 1;
            v49[4] = (Il2CppClass *)v33;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v33, v39, v40, v41, v42, v43, v44);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
}