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
  sub_B2C2F8((BattleServantConfConponent_o *)p_baseVertexs, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUvs = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseUvs, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.baseTriangles = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseTriangles, 0LL, v18, v19, v20, v21, v22, v23);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  int32_t height; // w20
  ManagerConfig_c *v9; // x8
  int32_t WIDTH; // w22
  float v11; // s1
  float v12; // s0
  float32x2_t v13; // d0
  int8x16_t v14; // q1
  unsigned __int64 v15; // d0
  int8x16_t v16; // off
  unsigned __int64 v17; // d0
  struct UnityEngine_MeshFilter_o *v18; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  float y; // s1
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  struct UnityEngine_Vector3_array *baseVertexs; // x8
  struct UnityEngine_Vector3_array *v24; // x10
  __int64 v25; // x9
  unsigned __int64 v26; // x8
  unsigned __int64 max_length; // x11
  float32x2_t *v28; // x10
  float32x2_t v29; // d1
  float v30; // s2
  float32x2_t *v31; // x10
  unsigned int klass; // w8
  float v33; // s3
  float v34; // s2
  unsigned int v35; // w8
  float v36; // w9
  float v37; // s0
  System_Array_o *v38; // x21
  UnityEngine_Mesh_o *v39; // x0
  System_Int32_array *baseTriangles; // x1
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v42; // x8
  __int64 v43; // x9
  unsigned __int64 v44; // x11
  unsigned __int64 v45; // x10
  __int64 v46; // x0
  unsigned int v47; // [xsp+10h] [xbp-40h]
  float32x2_t v48; // [xsp+10h] [xbp-40h]
  int32x2_t v49; // [xsp+20h] [xbp-30h]
  float32x2_t v50; // [xsp+20h] [xbp-30h]
  System_RuntimeFieldHandle_o v51; // 0:w1.4

  if ( (byte_4187773 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53,
      v4);
    sub_B2C35C(&UnityEngine_Vector2___TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Vector3___TypeInfo, v6);
    byte_4187773 = 1;
  }
  if ( this->fields.isFirst )
  {
    v7 = *(_QWORD *)&this->fields.mWidth;
    this->fields.isFirst = 0;
    *(_QWORD *)&this->fields.baseWidth = v7;
    UIWidget__set_width((UIWidget_o *)this, 0, 0LL);
  }
  if ( this->fields.isRescale )
  {
    height = UnityEngine_Screen__get_height(0LL);
    v9 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v9 = ManagerConfig_TypeInfo;
    }
    WIDTH = v9->static_fields->WIDTH;
    v11 = (float)(WIDTH * height)
        / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
    v12 = 1.0;
    if ( v11 > 1.0 )
      v12 = v11;
  }
  else
  {
    v12 = 1.0;
  }
  v13.n64_u64[0] = vmul_n_f32(vcvt_f32_s32(*(int32x2_t *)&this->fields.baseWidth), v12).n64_u64[0];
  v14 = vcvtq_f64_f32(v13);
  v15 = vceq_f32(v13, vdup_n_s32(0x7F800000u)).n64_u64[0];
  v16.n128_u64[0] = (int)v15;
  v16.n128_u64[1] = SHIDWORD(v15);
  v17 = vmovn_s64(vcvtq_s64_f64(vbslq_s8(v16, vnegq_f64(v14), v14))).n64_u64[0];
  if ( *(_QWORD *)&this->fields.mWidth != v17 || this->fields.isChangeMesh )
  {
    v49.n64_u64[0] = v17;
    UIWidget__set_width((UIWidget_o *)this, v17, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v49.n64_i32[1], 0LL);
    meshFilter = this->fields.meshFilter;
    if ( !meshFilter )
      goto LABEL_58;
    mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
    v47 = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
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
    v50.n64_u64[0] = vcvt_f32_s32(v49).n64_u64[0];
    v48.n64_u64[0] = vmul_f32((float32x2_t)__PAIR64__(LODWORD(y), v47), v50).n64_u64[0];
    if ( baseVertexs && this->fields.baseUvs && this->fields.baseTriangles )
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B2C374(
                                                        UnityEngine_Vector3___TypeInfo,
                                                        baseVertexs->max_length);
      v24 = this->fields.baseVertexs;
      if ( !v24 )
        goto LABEL_58;
      v18 = meshFilter;
      v25 = 0LL;
      v26 = 0LL;
      while ( 1 )
      {
        max_length = v24->max_length;
        if ( (__int64)v26 >= (int)max_length )
          break;
        if ( v26 >= max_length )
          goto LABEL_57;
        if ( meshFilter )
        {
          if ( v26 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_57;
          v28 = (float32x2_t *)((char *)v24 + v25);
          v29.n64_u64[0] = v28[4].n64_u64[0];
          v30 = v28[5].n64_f32[0];
          v31 = (float32x2_t *)((char *)meshFilter + v25);
          v25 += 12LL;
          v31[4].n64_u64[0] = vsub_f32(vmul_f32(v29, v50), v48).n64_u64[0];
          v31[5].n64_f32[0] = v30 + 1.0;
          v24 = this->fields.baseVertexs;
          ++v26;
          if ( v24 )
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
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B2C374(UnityEngine_Vector2___TypeInfo, baseUvs->max_length);
      v42 = this->fields.baseUvs;
      if ( !v42 )
        goto LABEL_58;
      v18 = meshFilter;
      v43 = 4LL;
      while ( 1 )
      {
        v44 = v42->max_length;
        v45 = v43 - 4;
        if ( v43 - 4 >= (int)v44 )
          break;
        if ( v45 >= v44 )
          goto LABEL_57;
        if ( meshFilter )
        {
          if ( v45 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_57;
          *((float32x2_t *)&meshFilter->klass + v43) = vadd_f32(
                                                         (float32x2_t)this->fields.uvOffset,
                                                         vmul_f32(
                                                           (float32x2_t)*(&v42->obj.klass + v43),
                                                           (float32x2_t)this->fields.uvSize));
          v42 = this->fields.baseUvs;
          ++v43;
          if ( v42 )
            continue;
        }
        goto LABEL_58;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      baseTriangles = this->fields.baseTriangles;
      v39 = mesh;
    }
    else
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_58;
      klass = (unsigned int)meshFilter[1].klass;
      v18 = meshFilter;
      if ( !klass )
        goto LABEL_57;
      *(float *)&meshFilter[1].monitor = 0.0 - v48.n64_f32[0];
      *((float *)&meshFilter[1].monitor + 1) = 0.0 - v48.n64_f32[1];
      meshFilter[1].fields.m_CachedPtr = 0;
      if ( klass == 1 )
        goto LABEL_57;
      v33 = (float)(v50.n64_f32[0] - v48.n64_f32[0]) + 0.0;
      v34 = (float)(v50.n64_f32[1] - v48.n64_f32[1]) + 0.0;
      *((float *)&meshFilter[1].fields + 1) = v33;
      *(float *)&meshFilter[2].klass = v34;
      HIDWORD(meshFilter[2].klass) = 0;
      if ( klass <= 2 )
        goto LABEL_57;
      *(float *)&meshFilter[2].monitor = v33;
      *((float *)&meshFilter[2].monitor + 1) = 0.0 - v48.n64_f32[1];
      meshFilter[2].fields.m_CachedPtr = 0;
      if ( klass == 3 )
        goto LABEL_57;
      *((float *)&meshFilter[2].fields + 1) = 0.0 - v48.n64_f32[0];
      *(float *)&meshFilter[3].klass = v34;
      HIDWORD(meshFilter[3].klass) = 0;
      if ( !mesh )
        goto LABEL_58;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B2C374(UnityEngine_Vector2___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_58;
      v35 = (unsigned int)meshFilter[1].klass;
      if ( !v35
        || (meshFilter[1].monitor = (void *)this->fields.uvOffset, v35 == 1)
        || (*(float32x2_t *)&meshFilter[1].fields.m_CachedPtr = vadd_f32(
                                                                  (float32x2_t)this->fields.uvOffset,
                                                                  (float32x2_t)this->fields.uvSize),
            v35 <= 2)
        || (v36 = this->fields.uvOffset.fields.y,
            *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *((float *)&meshFilter[2].klass + 1) = v36,
            v35 == 3) )
      {
LABEL_57:
        v46 = sub_B2C460(meshFilter);
        sub_B2C400(v46, 0LL);
      }
      v37 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)&meshFilter[2].monitor = this->fields.uvOffset.fields.x;
      *((float *)&meshFilter[2].monitor + 1) = v37;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_54;
      v38 = (System_Array_o *)sub_B2C374(int___TypeInfo, 6LL);
      v51.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v38, v51, 0LL);
      v39 = mesh;
      baseTriangles = (System_Int32_array *)v38;
    }
    UnityEngine_Mesh__set_triangles(v39, baseTriangles, 0LL);
LABEL_54:
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      UnityEngine_MeshFilter__set_mesh(meshFilter, mesh, 0LL);
      return;
    }
LABEL_58:
    sub_B2C434(meshFilter, v18);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseVertexs,
    (System_Int32_array **)vertexs,
    (System_String_array **)uvs,
    (System_String_array **)triangles,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.baseUvs = uvs;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUvs,
    (System_Int32_array **)uvs,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.baseTriangles = triangles;
  sub_B2C2F8(
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