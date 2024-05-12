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
  sub_B77560((BattleServantConfConponent_o *)p_baseVertexs, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUvs = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.baseUvs, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.baseTriangles = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.baseTriangles, 0LL, v18, v19, v20, v21, v22, v23);
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
  __int64 v3; // x8
  int32_t height; // w20
  ManagerConfig_c *v5; // x8
  int32_t WIDTH; // w22
  float v7; // s1
  float v8; // s0
  float32x2_t v9; // d0
  int8x16_t v10; // q1
  unsigned __int64 v11; // d0
  int8x16_t v12; // off
  unsigned __int64 v13; // d0
  struct UnityEngine_MeshFilter_o *v14; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  float y; // s1
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  struct UnityEngine_Vector3_array *baseVertexs; // x8
  struct UnityEngine_Vector3_array *v20; // x10
  __int64 v21; // x9
  unsigned __int64 v22; // x8
  unsigned __int64 max_length; // x11
  float32x2_t *v24; // x10
  float32x2_t v25; // d1
  float v26; // s2
  float32x2_t *v27; // x10
  unsigned int klass; // w8
  float v29; // s3
  float v30; // s2
  unsigned int v31; // w8
  float v32; // w9
  float v33; // s0
  System_Array_o *v34; // x21
  UnityEngine_Mesh_o *v35; // x0
  System_Int32_array *baseTriangles; // x1
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v38; // x8
  __int64 v39; // x9
  unsigned __int64 v40; // x11
  unsigned __int64 v41; // x10
  __int64 v42; // x0
  unsigned int v43; // [xsp+10h] [xbp-40h]
  float32x2_t v44; // [xsp+10h] [xbp-40h]
  int32x2_t v45; // [xsp+20h] [xbp-30h]
  float32x2_t v46; // [xsp+20h] [xbp-30h]
  System_RuntimeFieldHandle_o v47; // 0:w1.4

  if ( (byte_4389FBF & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53);
    sub_B775C4(&UnityEngine_Vector2___TypeInfo);
    sub_B775C4(&UnityEngine_Vector3___TypeInfo);
    byte_4389FBF = 1;
  }
  if ( this->fields.isFirst )
  {
    v3 = *(_QWORD *)&this->fields.mWidth;
    this->fields.isFirst = 0;
    *(_QWORD *)&this->fields.baseWidth = v3;
    UIWidget__set_width((UIWidget_o *)this, 0, 0LL);
  }
  if ( this->fields.isRescale )
  {
    height = UnityEngine_Screen__get_height(0LL);
    v5 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v5 = ManagerConfig_TypeInfo;
    }
    WIDTH = v5->static_fields->WIDTH;
    v7 = (float)(WIDTH * height)
       / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
    v8 = 1.0;
    if ( v7 > 1.0 )
      v8 = v7;
  }
  else
  {
    v8 = 1.0;
  }
  v9.n64_u64[0] = vmul_n_f32(vcvt_f32_s32(*(int32x2_t *)&this->fields.baseWidth), v8).n64_u64[0];
  v10 = vcvtq_f64_f32(v9);
  v11 = vceq_f32(v9, vdup_n_s32(0x7F800000u)).n64_u64[0];
  v12.n128_u64[0] = (int)v11;
  v12.n128_u64[1] = SHIDWORD(v11);
  v13 = vmovn_s64(vcvtq_s64_f64(vbslq_s8(v12, vnegq_f64(v10), v10))).n64_u64[0];
  if ( *(_QWORD *)&this->fields.mWidth != v13 || this->fields.isChangeMesh )
  {
    v45.n64_u64[0] = v13;
    UIWidget__set_width((UIWidget_o *)this, v13, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v45.n64_i32[1], 0LL);
    meshFilter = this->fields.meshFilter;
    if ( !meshFilter )
      goto LABEL_58;
    mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
    v43 = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
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
    v46.n64_u64[0] = vcvt_f32_s32(v45).n64_u64[0];
    v44.n64_u64[0] = vmul_f32((float32x2_t)__PAIR64__(LODWORD(y), v43), v46).n64_u64[0];
    if ( baseVertexs && this->fields.baseUvs && this->fields.baseTriangles )
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B775DC(
                                                        UnityEngine_Vector3___TypeInfo,
                                                        baseVertexs->max_length);
      v20 = this->fields.baseVertexs;
      if ( !v20 )
        goto LABEL_58;
      v14 = meshFilter;
      v21 = 0LL;
      v22 = 0LL;
      while ( 1 )
      {
        max_length = v20->max_length;
        if ( (__int64)v22 >= (int)max_length )
          break;
        if ( v22 >= max_length )
          goto LABEL_57;
        if ( meshFilter )
        {
          if ( v22 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_57;
          v24 = (float32x2_t *)((char *)v20 + v21);
          v25.n64_u64[0] = v24[4].n64_u64[0];
          v26 = v24[5].n64_f32[0];
          v27 = (float32x2_t *)((char *)meshFilter + v21);
          v21 += 12LL;
          v27[4].n64_u64[0] = vsub_f32(vmul_f32(v25, v46), v44).n64_u64[0];
          v27[5].n64_f32[0] = v26 + 1.0;
          v20 = this->fields.baseVertexs;
          ++v22;
          if ( v20 )
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
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B775DC(UnityEngine_Vector2___TypeInfo, baseUvs->max_length);
      v38 = this->fields.baseUvs;
      if ( !v38 )
        goto LABEL_58;
      v14 = meshFilter;
      v39 = 4LL;
      while ( 1 )
      {
        v40 = v38->max_length;
        v41 = v39 - 4;
        if ( v39 - 4 >= (int)v40 )
          break;
        if ( v41 >= v40 )
          goto LABEL_57;
        if ( meshFilter )
        {
          if ( v41 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_57;
          *((float32x2_t *)&meshFilter->klass + v39) = vadd_f32(
                                                         (float32x2_t)this->fields.uvOffset,
                                                         vmul_f32(
                                                           (float32x2_t)*(&v38->obj.klass + v39),
                                                           (float32x2_t)this->fields.uvSize));
          v38 = this->fields.baseUvs;
          ++v39;
          if ( v38 )
            continue;
        }
        goto LABEL_58;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      baseTriangles = this->fields.baseTriangles;
      v35 = mesh;
    }
    else
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_58;
      klass = (unsigned int)meshFilter[1].klass;
      v14 = meshFilter;
      if ( !klass )
        goto LABEL_57;
      *(float *)&meshFilter[1].monitor = 0.0 - v44.n64_f32[0];
      *((float *)&meshFilter[1].monitor + 1) = 0.0 - v44.n64_f32[1];
      meshFilter[1].fields.m_CachedPtr = 0;
      if ( klass == 1 )
        goto LABEL_57;
      v29 = (float)(v46.n64_f32[0] - v44.n64_f32[0]) + 0.0;
      v30 = (float)(v46.n64_f32[1] - v44.n64_f32[1]) + 0.0;
      *((float *)&meshFilter[1].fields + 1) = v29;
      *(float *)&meshFilter[2].klass = v30;
      HIDWORD(meshFilter[2].klass) = 0;
      if ( klass <= 2 )
        goto LABEL_57;
      *(float *)&meshFilter[2].monitor = v29;
      *((float *)&meshFilter[2].monitor + 1) = 0.0 - v44.n64_f32[1];
      meshFilter[2].fields.m_CachedPtr = 0;
      if ( klass == 3 )
        goto LABEL_57;
      *((float *)&meshFilter[2].fields + 1) = 0.0 - v44.n64_f32[0];
      *(float *)&meshFilter[3].klass = v30;
      HIDWORD(meshFilter[3].klass) = 0;
      if ( !mesh )
        goto LABEL_58;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B775DC(UnityEngine_Vector2___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_58;
      v31 = (unsigned int)meshFilter[1].klass;
      if ( !v31
        || (meshFilter[1].monitor = (void *)this->fields.uvOffset, v31 == 1)
        || (*(float32x2_t *)&meshFilter[1].fields.m_CachedPtr = vadd_f32(
                                                                  (float32x2_t)this->fields.uvOffset,
                                                                  (float32x2_t)this->fields.uvSize),
            v31 <= 2)
        || (v32 = this->fields.uvOffset.fields.y,
            *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *((float *)&meshFilter[2].klass + 1) = v32,
            v31 == 3) )
      {
LABEL_57:
        v42 = sub_B776C8(meshFilter);
        sub_B77668(v42, 0LL);
      }
      v33 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)&meshFilter[2].monitor = this->fields.uvOffset.fields.x;
      *((float *)&meshFilter[2].monitor + 1) = v33;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_54;
      v34 = (System_Array_o *)sub_B775DC(int___TypeInfo, 6LL);
      v47.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v34, v47, 0LL);
      v35 = mesh;
      baseTriangles = (System_Int32_array *)v34;
    }
    UnityEngine_Mesh__set_triangles(v35, baseTriangles, 0LL);
LABEL_54:
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      UnityEngine_MeshFilter__set_mesh(meshFilter, mesh, 0LL);
      return;
    }
LABEL_58:
    sub_B7769C(meshFilter, v14);
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseVertexs,
    (System_Int32_array **)vertexs,
    (System_String_array **)uvs,
    (System_String_array **)triangles,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.baseUvs = uvs;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseUvs,
    (System_Int32_array **)uvs,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.baseTriangles = triangles;
  sub_B77560(
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