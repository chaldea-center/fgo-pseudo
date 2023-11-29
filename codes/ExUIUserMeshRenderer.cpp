void __fastcall ExUIUserMeshRenderer___ctor(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_3135840;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
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
  sub_B16F98((BattleServantConfConponent_o *)p_baseVertexs, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUvs = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseUvs, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.baseTriangles = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseTriangles, 0LL, v18, v19, v20, v21, v22, v23);
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
  UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  UnityEngine_Vector2_o v20; // x2
  float y; // s1
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  struct UnityEngine_Vector3_array *baseVertexs; // x8
  __int64 v24; // x0
  __int64 v25; // x2
  struct UnityEngine_Vector3_array *v26; // x10
  __int64 v27; // x1
  __int64 v28; // x9
  unsigned __int64 v29; // x8
  unsigned __int64 max_length; // x11
  float32x2_t *v31; // x10
  float32x2_t v32; // d1
  float v33; // s2
  float32x2_t *v34; // x10
  unsigned int v35; // w8
  float v36; // s3
  float v37; // s2
  __int64 v38; // x2
  unsigned int v39; // w8
  float v40; // w9
  float v41; // s0
  __int64 v42; // x2
  System_Array_o *v43; // x21
  UnityEngine_Mesh_o *v44; // x0
  System_Int32_array *baseTriangles; // x1
  __int64 v46; // x2
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v48; // x8
  __int64 v49; // x9
  unsigned __int64 v50; // x11
  unsigned __int64 v51; // x10
  UnityEngine_MeshFilter_o *v52; // x0
  unsigned int v53; // [xsp+10h] [xbp-40h]
  float32x2_t v54; // [xsp+10h] [xbp-40h]
  int32x2_t v55; // [xsp+20h] [xbp-30h]
  float32x2_t v56; // [xsp+20h] [xbp-30h]
  System_RuntimeFieldHandle_o v57; // 0:w1.4

  if ( (byte_40F9C72 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&ManagerConfig_TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53,
      v4);
    sub_B16FFC(&UnityEngine_Vector2___TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Vector3___TypeInfo, v6);
    byte_40F9C72 = 1;
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
    v55.n64_u64[0] = v17;
    UIWidget__set_width((UIWidget_o *)this, v17, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v55.n64_i32[1], 0LL);
    meshFilter = this->fields.meshFilter;
    if ( !meshFilter )
      goto LABEL_58;
    mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
    v53 = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
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
    v56.n64_u64[0] = vcvt_f32_s32(v55).n64_u64[0];
    v54.n64_u64[0] = vmul_f32((float32x2_t)__PAIR64__(LODWORD(y), v53), v56).n64_u64[0];
    if ( baseVertexs && this->fields.baseUvs && this->fields.baseTriangles )
    {
      v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_B17014)(
              UnityEngine_Vector3___TypeInfo,
              baseVertexs->max_length,
              v20);
      v26 = this->fields.baseVertexs;
      if ( !v26 )
        goto LABEL_58;
      v27 = v24;
      v28 = 0LL;
      v29 = 0LL;
      while ( 1 )
      {
        max_length = v26->max_length;
        if ( (__int64)v29 >= (int)max_length )
          break;
        if ( v29 >= max_length )
          goto LABEL_57;
        if ( v24 )
        {
          if ( v29 >= *(unsigned int *)(v24 + 24) )
            goto LABEL_57;
          v31 = (float32x2_t *)((char *)v26 + v28);
          v32.n64_u64[0] = v31[4].n64_u64[0];
          v33 = v31[5].n64_f32[0];
          v34 = (float32x2_t *)(v24 + v28);
          v28 += 12LL;
          v34[4].n64_u64[0] = vsub_f32(vmul_f32(v32, v56), v54).n64_u64[0];
          v34[5].n64_f32[0] = v33 + 1.0;
          v26 = this->fields.baseVertexs;
          ++v29;
          if ( v26 )
            continue;
        }
        goto LABEL_58;
      }
      if ( !mesh )
        goto LABEL_58;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)v24, 0LL);
      baseUvs = this->fields.baseUvs;
      if ( !baseUvs )
        goto LABEL_58;
      v24 = sub_B17014(UnityEngine_Vector2___TypeInfo, baseUvs->max_length, v46);
      v48 = this->fields.baseUvs;
      if ( !v48 )
        goto LABEL_58;
      v27 = v24;
      v49 = 4LL;
      while ( 1 )
      {
        v50 = v48->max_length;
        v51 = v49 - 4;
        if ( v49 - 4 >= (int)v50 )
          break;
        if ( v51 >= v50 )
          goto LABEL_57;
        if ( v24 )
        {
          if ( v51 >= *(unsigned int *)(v24 + 24) )
            goto LABEL_57;
          *(float32x2_t *)(v24 + 8 * v49) = vadd_f32(
                                              (float32x2_t)this->fields.uvOffset,
                                              vmul_f32(
                                                (float32x2_t)*(&v48->obj.klass + v49),
                                                (float32x2_t)this->fields.uvSize));
          v48 = this->fields.baseUvs;
          ++v49;
          if ( v48 )
            continue;
        }
        goto LABEL_58;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)v24, 0LL);
      baseTriangles = this->fields.baseTriangles;
      v44 = mesh;
    }
    else
    {
      v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_B17014)(UnityEngine_Vector3___TypeInfo, 4LL, v20);
      if ( !v24 )
        goto LABEL_58;
      v35 = *(_DWORD *)(v24 + 24);
      v27 = v24;
      if ( !v35 )
        goto LABEL_57;
      *(float *)(v24 + 32) = 0.0 - v54.n64_f32[0];
      *(float *)(v24 + 36) = 0.0 - v54.n64_f32[1];
      *(_DWORD *)(v24 + 40) = 0;
      if ( v35 == 1 )
        goto LABEL_57;
      v36 = (float)(v56.n64_f32[0] - v54.n64_f32[0]) + 0.0;
      v37 = (float)(v56.n64_f32[1] - v54.n64_f32[1]) + 0.0;
      *(float *)(v24 + 44) = v36;
      *(float *)(v24 + 48) = v37;
      *(_DWORD *)(v24 + 52) = 0;
      if ( v35 <= 2 )
        goto LABEL_57;
      *(float *)(v24 + 56) = v36;
      *(float *)(v24 + 60) = 0.0 - v54.n64_f32[1];
      *(_DWORD *)(v24 + 64) = 0;
      if ( v35 == 3 )
        goto LABEL_57;
      *(float *)(v24 + 68) = 0.0 - v54.n64_f32[0];
      *(float *)(v24 + 72) = v37;
      *(_DWORD *)(v24 + 76) = 0;
      if ( !mesh )
        goto LABEL_58;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)v24, 0LL);
      v24 = sub_B17014(UnityEngine_Vector2___TypeInfo, 4LL, v38);
      if ( !v24 )
        goto LABEL_58;
      v39 = *(_DWORD *)(v24 + 24);
      v27 = v24;
      if ( !v39
        || (*(struct UnityEngine_Vector2_o *)(v24 + 32) = this->fields.uvOffset, v39 == 1)
        || (*(float32x2_t *)(v24 + 40) = vadd_f32((float32x2_t)this->fields.uvOffset, (float32x2_t)this->fields.uvSize),
            v39 <= 2)
        || (v40 = this->fields.uvOffset.fields.y,
            *(float *)(v24 + 48) = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *(float *)(v24 + 52) = v40,
            v39 == 3) )
      {
LABEL_57:
        sub_B17100(v24, v27, v25);
        sub_B170A0();
      }
      v41 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)(v24 + 56) = this->fields.uvOffset.fields.x;
      *(float *)(v24 + 60) = v41;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)v24, 0LL);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_54;
      v43 = (System_Array_o *)sub_B17014(int___TypeInfo, 6LL, v42);
      v57.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v43, v57, 0LL);
      v44 = mesh;
      baseTriangles = (System_Int32_array *)v43;
    }
    UnityEngine_Mesh__set_triangles(v44, baseTriangles, 0LL);
LABEL_54:
    v52 = this->fields.meshFilter;
    if ( v52 )
    {
      UnityEngine_MeshFilter__set_mesh(v52, mesh, 0LL);
      return;
    }
LABEL_58:
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseVertexs,
    (System_Int32_array **)vertexs,
    (System_String_array **)uvs,
    (System_String_array **)triangles,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.baseUvs = uvs;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUvs,
    (System_Int32_array **)uvs,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.baseTriangles = triangles;
  sub_B16F98(
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