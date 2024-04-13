void __fastcall ExUIUserMeshRenderer___ctor(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  ExUIMeshRenderer___ctor((ExUIMeshRenderer_o *)this, 0LL);
}


void __fastcall ExUIUserMeshRenderer__ClearUserMesh(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UnityEngine_Vector3_array *baseVertexs; // x8
  struct UnityEngine_Vector3_array **p_baseVertexs; // x0
  struct UnityEngine_Vector2_array **p_baseUvs; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  baseVertexs = this->fields.baseVertexs;
  p_baseVertexs = &this->fields.baseVertexs;
  p_baseUvs = &this->fields.baseUvs;
  if ( baseVertexs )
  {
    baseVertexs = (struct UnityEngine_Vector3_array *)*p_baseUvs;
    if ( *p_baseUvs )
      LOBYTE(baseVertexs) = this->fields.baseTriangles != 0LL;
  }
  this->fields.isChangeMesh = (char)baseVertexs;
  this->fields.baseVertexs = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)p_baseVertexs, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUvs = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseUvs, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.baseTriangles = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseTriangles, 0LL, v18, v19, v20, v21, v22, v23);
  ((void (__fastcall *)(ExUIUserMeshRenderer_o *, void *))this->klass->vtable._43_ReScale.method)(
    this,
    this->klass[1]._1.image);
  this->fields.isUseUserMesh = 0;
}


bool __fastcall ExUIUserMeshRenderer__HaveUserMesh(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  return this->fields.baseVertexs && this->fields.baseUvs && this->fields.baseTriangles != 0LL;
}


void __fastcall ExUIUserMeshRenderer__ReScale(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
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
  __int64 v17; // x8
  int32_t height; // w20
  ManagerConfig_c *v19; // x8
  int32_t WIDTH; // w22
  float v21; // s1
  float v22; // s0
  float32x2_t v23; // d0
  int8x16_t v24; // q1
  unsigned __int64 v25; // d0
  int8x16_t v26; // off
  unsigned __int64 v27; // d0
  struct UnityEngine_MeshFilter_o *v28; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  float y; // s1
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  struct UnityEngine_Vector3_array *baseVertexs; // x8
  struct UnityEngine_Vector3_array *v34; // x10
  __int64 v35; // x9
  unsigned __int64 v36; // x8
  unsigned __int64 max_length; // x11
  float32x2_t *v38; // x10
  float32x2_t v39; // d1
  float v40; // s2
  float32x2_t *v41; // x10
  unsigned int klass; // w8
  float v43; // s3
  float v44; // s2
  unsigned int v45; // w8
  float v46; // w9
  float v47; // s0
  System_Array_o *v48; // x21
  UnityEngine_Mesh_o *v49; // x0
  System_Int32_array *baseTriangles; // x1
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v52; // x8
  __int64 v53; // x9
  unsigned __int64 v54; // x11
  unsigned __int64 v55; // x10
  __int64 v56; // x0
  unsigned int v57; // [xsp+10h] [xbp-40h]
  float32x2_t v58; // [xsp+10h] [xbp-40h]
  int32x2_t v59; // [xsp+20h] [xbp-30h]
  float32x2_t v60; // [xsp+20h] [xbp-30h]
  System_RuntimeFieldHandle_o v61; // 0:w1.4

  if ( (byte_42E79FD & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53,
      v8,
      v9,
      v10);
    sub_B5D5C4(&UnityEngine_Vector2___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v14, v15, v16);
    byte_42E79FD = 1;
  }
  if ( this->fields.isFirst )
  {
    v17 = *(_QWORD *)&this->fields.mWidth;
    this->fields.isFirst = 0;
    *(_QWORD *)&this->fields.baseWidth = v17;
    UIWidget__set_width((UIWidget_o *)this, 0, 0LL);
  }
  if ( this->fields.isRescale )
  {
    height = UnityEngine_Screen__get_height(0LL);
    v19 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v19 = ManagerConfig_TypeInfo;
    }
    WIDTH = v19->static_fields->WIDTH;
    v21 = (float)(WIDTH * height)
        / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
    v22 = 1.0;
    if ( v21 > 1.0 )
      v22 = v21;
  }
  else
  {
    v22 = 1.0;
  }
  v23.n64_u64[0] = vmul_n_f32(vcvt_f32_s32(*(int32x2_t *)&this->fields.baseWidth), v22).n64_u64[0];
  v24 = vcvtq_f64_f32(v23);
  v25 = vceq_f32(v23, vdup_n_s32(0x7F800000u)).n64_u64[0];
  v26.n128_u64[0] = (int)v25;
  v26.n128_u64[1] = SHIDWORD(v25);
  v27 = vmovn_s64(vcvtq_s64_f64(vbslq_s8(v26, vnegq_f64(v24), v24))).n64_u64[0];
  if ( *(_QWORD *)&this->fields.mWidth != v27 || this->fields.isChangeMesh )
  {
    v59.n64_u64[0] = v27;
    UIWidget__set_width((UIWidget_o *)this, v27, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v59.n64_i32[1], 0LL);
    meshFilter = this->fields.meshFilter;
    if ( !meshFilter )
      goto LABEL_58;
    mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
    v57 = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
    pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
    y = pivotOffset.fields.y;
    if ( this->fields.isUseUserMesh )
    {
      if ( !mesh )
        goto LABEL_58;
      UnityEngine_Mesh__Clear(mesh, 0LL);
      y = pivotOffset.fields.y;
    }
    baseVertexs = this->fields.baseVertexs;
    v60.n64_u64[0] = vcvt_f32_s32(v59).n64_u64[0];
    v58.n64_u64[0] = vmul_f32((float32x2_t)__PAIR64__(LODWORD(y), v57), v60).n64_u64[0];
    if ( baseVertexs && this->fields.baseUvs && this->fields.baseTriangles )
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B5D5DC(
                                                        UnityEngine_Vector3___TypeInfo,
                                                        baseVertexs->max_length);
      v34 = this->fields.baseVertexs;
      if ( !v34 )
        goto LABEL_58;
      v28 = meshFilter;
      v35 = 0LL;
      v36 = 0LL;
      while ( 1 )
      {
        max_length = v34->max_length;
        if ( (__int64)v36 >= (int)max_length )
          break;
        if ( v36 >= max_length )
          goto LABEL_57;
        if ( meshFilter )
        {
          if ( v36 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_57;
          v38 = (float32x2_t *)((char *)v34 + v35);
          v39.n64_u64[0] = v38[4].n64_u64[0];
          v40 = v38[5].n64_f32[0];
          v41 = (float32x2_t *)((char *)meshFilter + v35);
          v35 += 12LL;
          v41[4].n64_u64[0] = vsub_f32(vmul_f32(v39, v60), v58).n64_u64[0];
          v41[5].n64_f32[0] = v40 + 1.0;
          v34 = this->fields.baseVertexs;
          ++v36;
          if ( v34 )
            continue;
        }
        goto LABEL_58;
      }
      if ( !mesh )
        goto LABEL_58;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      baseUvs = this->fields.baseUvs;
      if ( !baseUvs )
        goto LABEL_58;
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B5D5DC(UnityEngine_Vector2___TypeInfo, baseUvs->max_length);
      v52 = this->fields.baseUvs;
      if ( !v52 )
        goto LABEL_58;
      v28 = meshFilter;
      v53 = 4LL;
      while ( 1 )
      {
        v54 = v52->max_length;
        v55 = v53 - 4;
        if ( v53 - 4 >= (int)v54 )
          break;
        if ( v55 >= v54 )
          goto LABEL_57;
        if ( meshFilter )
        {
          if ( v55 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_57;
          *((float32x2_t *)&meshFilter->klass + v53) = vadd_f32(
                                                         (float32x2_t)this->fields.uvOffset,
                                                         vmul_f32(
                                                           (float32x2_t)*(&v52->obj.klass + v53),
                                                           (float32x2_t)this->fields.uvSize));
          v52 = this->fields.baseUvs;
          ++v53;
          if ( v52 )
            continue;
        }
        goto LABEL_58;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      baseTriangles = this->fields.baseTriangles;
      v49 = mesh;
    }
    else
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_58;
      klass = (unsigned int)meshFilter[1].klass;
      v28 = meshFilter;
      if ( !klass )
        goto LABEL_57;
      *(float *)&meshFilter[1].monitor = 0.0 - v58.n64_f32[0];
      *((float *)&meshFilter[1].monitor + 1) = 0.0 - v58.n64_f32[1];
      meshFilter[1].fields.m_CachedPtr = 0;
      if ( klass == 1 )
        goto LABEL_57;
      v43 = (float)(v60.n64_f32[0] - v58.n64_f32[0]) + 0.0;
      v44 = (float)(v60.n64_f32[1] - v58.n64_f32[1]) + 0.0;
      *((float *)&meshFilter[1].fields + 1) = v43;
      *(float *)&meshFilter[2].klass = v44;
      HIDWORD(meshFilter[2].klass) = 0;
      if ( klass <= 2 )
        goto LABEL_57;
      *(float *)&meshFilter[2].monitor = v43;
      *((float *)&meshFilter[2].monitor + 1) = 0.0 - v58.n64_f32[1];
      meshFilter[2].fields.m_CachedPtr = 0;
      if ( klass == 3 )
        goto LABEL_57;
      *((float *)&meshFilter[2].fields + 1) = 0.0 - v58.n64_f32[0];
      *(float *)&meshFilter[3].klass = v44;
      HIDWORD(meshFilter[3].klass) = 0;
      if ( !mesh )
        goto LABEL_58;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_58;
      v45 = (unsigned int)meshFilter[1].klass;
      if ( !v45
        || (meshFilter[1].monitor = (void *)this->fields.uvOffset, v45 == 1)
        || (*(float32x2_t *)&meshFilter[1].fields.m_CachedPtr = vadd_f32(
                                                                  (float32x2_t)this->fields.uvOffset,
                                                                  (float32x2_t)this->fields.uvSize),
            v45 <= 2)
        || (v46 = this->fields.uvOffset.fields.y,
            *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *((float *)&meshFilter[2].klass + 1) = v46,
            v45 == 3) )
      {
LABEL_57:
        v56 = sub_B5D6C8(meshFilter);
        sub_B5D668(v56, 0LL);
      }
      v47 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)&meshFilter[2].monitor = this->fields.uvOffset.fields.x;
      *((float *)&meshFilter[2].monitor + 1) = v47;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_54;
      v48 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 6LL);
      v61.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v48, v61, 0LL);
      v49 = mesh;
      baseTriangles = (System_Int32_array *)v48;
    }
    UnityEngine_Mesh__set_triangles(v49, baseTriangles, 0LL);
LABEL_54:
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      UnityEngine_MeshFilter__set_mesh(meshFilter, mesh, 0LL);
      return;
    }
LABEL_58:
    sub_B5D69C(meshFilter, v28);
  }
}


void __fastcall ExUIUserMeshRenderer__SetUserMesh(
        ExUIUserMeshRenderer_o *this,
        UnityEngine_Vector3_array *vertexs,
        UnityEngine_Vector2_array *uvs,
        System_Int32_array *triangles,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ExUIUserMeshRenderer_c *klass; // x8

  this->fields.baseVertexs = vertexs;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseVertexs,
    (System_Int32_array **)vertexs,
    (System_String_array **)uvs,
    (System_String_array **)triangles,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.baseUvs = uvs;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUvs,
    (System_Int32_array **)uvs,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.baseTriangles = triangles;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseTriangles,
    (System_Int32_array **)triangles,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  klass = this->klass;
  this->fields.isChangeMesh = 1;
  ((void (__fastcall *)(ExUIUserMeshRenderer_o *, void *))klass->vtable._43_ReScale.method)(this, klass[1]._1.image);
  this->fields.isUseUserMesh = 1;
}