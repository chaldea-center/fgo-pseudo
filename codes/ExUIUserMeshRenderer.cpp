void ExUIUserMeshRenderer___ctor(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_E937C0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void ExUIUserMeshRenderer__ClearUserMesh(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  void *baseVertexs; // x8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  baseVertexs = this->fields.baseVertexs;
  if ( baseVertexs )
  {
    baseVertexs = this->fields.baseUvs;
    if ( baseVertexs )
      LOBYTE(baseVertexs) = this->fields.baseTriangles != 0;
  }
  this->fields.isChangeMesh = (char)baseVertexs;
  this->fields.baseVertexs = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseVertexs, 0, v2, v3, v4, v5, v6, v7);
  this->fields.baseUvs = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseUvs, 0, v10, v11, v12, v13, v14, v15);
  this->fields.baseTriangles = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseTriangles, 0, v16, v17, v18, v19, v20, v21);
  ((void (__fastcall *)(ExUIUserMeshRenderer_o *, const MethodInfo *))this->klass->vtable._43_ReScale.methodPtr)(
    this,
    this->klass->vtable._43_ReScale.method);
  this->fields.isUseUserMesh = 0;
}


bool ExUIUserMeshRenderer__HaveUserMesh(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  return this->fields.baseVertexs && this->fields.baseUvs && this->fields.baseTriangles != 0;
}


void ExUIUserMeshRenderer__ReScale(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // d0
  int32_t height; // w0
  __int64 v5; // x1
  ManagerConfig_c *v6; // x8
  int32_t v7; // w20
  int32_t WIDTH; // w22
  int32_t v9; // w0
  float v10; // s0
  float32x2_t v11; // d0
  unsigned __int64 v12; // d0
  struct UnityEngine_MeshFilter_o *v13; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  float y; // s1
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  struct UnityEngine_Vector3_array *baseVertexs; // x9
  float32x2_t v19; // d8
  float32x2_t v20; // d9
  struct UnityEngine_Vector3_array *v21; // x10
  __int64 v22; // x8
  unsigned __int64 v23; // x9
  unsigned __int64 max_length_low; // x11
  float32x2_t *v25; // x10
  float32x2_t v26; // d1
  float v27; // s2
  float32x2_t *v28; // x10
  unsigned int klass; // w8
  unsigned __int64 v30; // d0
  unsigned __int64 v31; // d1
  unsigned int v32; // w8
  float v33; // s1
  float v34; // s0
  System_Array_o *baseTriangles; // x21
  System_RuntimeFieldHandle_o v36; // x1
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v38; // x8
  __int64 v39; // x9
  unsigned __int64 v40; // x11
  unsigned __int64 v41; // x10
  unsigned int v42; // [xsp+10h] [xbp-60h]
  int32x2_t v43; // [xsp+20h] [xbp-50h]

  if ( (byte_5937ACF & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53);
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    byte_5937ACF = 1;
  }
  if ( this->fields.isFirst )
  {
    v3 = *(_QWORD *)&this->fields.mWidth;
    this->fields.isFirst = 0;
    *(_QWORD *)&this->fields.baseWidth = v3;
    UIWidget__set_width((UIWidget_o *)this, 0, 0);
  }
  if ( this->fields.isRescale )
  {
    height = UnityEngine_Screen__get_height(0);
    v6 = ManagerConfig_TypeInfo;
    v7 = height;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v5);
      v6 = ManagerConfig_TypeInfo;
    }
    WIDTH = v6->static_fields->WIDTH;
    v9 = UnityEngine_Screen__get_width(0);
    v10 = 1.0;
    if ( (float)((float)(WIDTH * v7) / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * v9)) > 1.0 )
      v10 = (float)(WIDTH * v7) / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * v9);
  }
  else
  {
    v10 = 1.0;
  }
  v11.n64_u64[0] = vmul_n_f32(vcvt_f32_s32(*(int32x2_t *)&this->fields.baseWidth), v10).n64_u64[0];
  v12 = vbsl_s8(vceq_f32(v11, vdup_n_s32(0x7F800000u)), (int8x8_t)0x8000000080000000LL, vcvt_s32_f32(v11)).n64_u64[0];
  if ( v12 != *(_QWORD *)&this->fields.mWidth || this->fields.isChangeMesh )
  {
    v43.n64_u64[0] = v12;
    UIWidget__set_width((UIWidget_o *)this, v12, 0);
    UIWidget__set_height((UIWidget_o *)this, v43.n64_i32[1], 0);
    meshFilter = this->fields.meshFilter;
    if ( !meshFilter )
      goto LABEL_50;
    mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0);
    v42 = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
    pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
    y = pivotOffset.fields.y;
    if ( this->fields.isUseUserMesh )
    {
      if ( !mesh )
        goto LABEL_50;
      UnityEngine_Mesh__Clear(mesh, 0);
      y = pivotOffset.fields.y;
    }
    baseVertexs = this->fields.baseVertexs;
    v19.n64_u64[0] = vcvt_f32_s32(v43).n64_u64[0];
    v20.n64_u64[0] = vmul_f32(v19, vneg_f32((float32x2_t)__PAIR64__(LODWORD(y), v42))).n64_u64[0];
    if ( baseVertexs && this->fields.baseUvs && this->fields.baseTriangles )
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_21FFD10(
                                                        UnityEngine_Vector3___TypeInfo,
                                                        LODWORD(baseVertexs->max_length));
      v21 = this->fields.baseVertexs;
      if ( !v21 )
        goto LABEL_50;
      v13 = meshFilter;
      v22 = 0;
      v23 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(v21->max_length);
        if ( (__int64)v23 >= (int)max_length_low )
          break;
        if ( v23 >= max_length_low )
          goto LABEL_56;
        if ( meshFilter )
        {
          if ( v23 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_56;
          v25 = (float32x2_t *)((char *)v21 + v22);
          ++v23;
          v26.n64_u64[0] = v25[4].n64_u64[0];
          v27 = v25[5].n64_f32[0];
          v28 = (float32x2_t *)((char *)meshFilter + v22);
          v22 += 12;
          v28[5].n64_f32[0] = v27 + 1.0;
          v28[4].n64_u64[0] = vadd_f32(v20, vmul_f32(v26, v19)).n64_u64[0];
          v21 = this->fields.baseVertexs;
          if ( v21 )
            continue;
        }
        goto LABEL_50;
      }
      if ( !mesh )
        goto LABEL_50;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0);
      baseUvs = this->fields.baseUvs;
      if ( !baseUvs )
        goto LABEL_50;
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_21FFD10(
                                                        UnityEngine_Vector2___TypeInfo,
                                                        LODWORD(baseUvs->max_length));
      v38 = this->fields.baseUvs;
      if ( !v38 )
        goto LABEL_50;
      v13 = meshFilter;
      v39 = 4;
      while ( 1 )
      {
        v40 = LODWORD(v38->max_length);
        v41 = v39 - 4;
        if ( v39 - 4 >= (int)v40 )
          break;
        if ( v41 >= v40 )
          goto LABEL_56;
        if ( meshFilter )
        {
          if ( v41 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_56;
          *((float32x2_t *)&meshFilter->klass + v39) = vadd_f32(
                                                         (float32x2_t)this->fields.uvOffset,
                                                         vmul_f32(
                                                           (float32x2_t)*(&v38->obj.klass + v39),
                                                           (float32x2_t)this->fields.uvSize));
          ++v39;
          v38 = this->fields.baseUvs;
          if ( v38 )
            continue;
        }
        goto LABEL_50;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0);
      baseTriangles = (System_Array_o *)this->fields.baseTriangles;
    }
    else
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_21FFD10(UnityEngine_Vector3___TypeInfo, 4);
      if ( !meshFilter )
        goto LABEL_50;
      klass = (unsigned int)meshFilter[1].klass;
      v13 = meshFilter;
      if ( !klass )
        goto LABEL_56;
      LODWORD(meshFilter[1].fields.m_CachedPtr) = 0;
      v30 = vadd_f32(v20, 0).n64_u64[0];
      meshFilter[1].monitor = (void *)v30;
      if ( klass == 1 )
        goto LABEL_56;
      v31 = vadd_f32(v20, v19).n64_u64[0];
      HIDWORD(meshFilter[2].klass) = 0;
      *(intptr_t *)((char *)&meshFilter[1].fields.m_CachedPtr + 4) = v31;
      if ( klass <= 2 )
        goto LABEL_56;
      LODWORD(meshFilter[2].fields.m_CachedPtr) = 0;
      meshFilter[2].monitor = (void *)__PAIR64__(HIDWORD(v30), v31);
      if ( klass == 3 )
        goto LABEL_56;
      HIDWORD(v30) = HIDWORD(v31);
      HIDWORD(meshFilter[3].klass) = 0;
      *(intptr_t *)((char *)&meshFilter[2].fields.m_CachedPtr + 4) = v30;
      if ( !mesh )
        goto LABEL_50;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0);
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
      if ( !meshFilter )
        goto LABEL_50;
      v32 = (unsigned int)meshFilter[1].klass;
      if ( !v32
        || (meshFilter[1].monitor = (void *)this->fields.uvOffset, v32 == 1)
        || (meshFilter[1].fields.m_CachedPtr = vadd_f32(
                                                 (float32x2_t)this->fields.uvOffset,
                                                 (float32x2_t)this->fields.uvSize).n64_i64[0],
            v32 <= 2)
        || (v33 = this->fields.uvOffset.fields.y,
            *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *((float *)&meshFilter[2].klass + 1) = v33,
            v32 == 3) )
      {
LABEL_56:
        sub_21FFED4(meshFilter);
      }
      v34 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)&meshFilter[2].monitor = this->fields.uvOffset.fields.x;
      *((float *)&meshFilter[2].monitor + 1) = v34;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_53;
      baseTriangles = (System_Array_o *)sub_21FFD10(int___TypeInfo, 6);
      v36.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(baseTriangles, v36, 0);
    }
    UnityEngine_Mesh__set_triangles(mesh, (System_Int32_array *)baseTriangles, 0);
LABEL_53:
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      UnityEngine_MeshFilter__set_mesh(meshFilter, mesh, 0);
      return;
    }
LABEL_50:
    sub_21FFECC(meshFilter, v13);
  }
}


void ExUIUserMeshRenderer__SetUserMesh(
        ExUIUserMeshRenderer_o *this,
        UnityEngine_Vector3_array *vertexs,
        UnityEngine_Vector2_array *uvs,
        System_Int32_array *triangles,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  ExUIUserMeshRenderer_c *klass; // x8

  this->fields.baseVertexs = vertexs;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseVertexs,
    (int32_t)vertexs,
    (System_String_o *)uvs,
    (System_String_o *)triangles,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.baseUvs = uvs;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseUvs, (int32_t)uvs, v11, v12, v13, v14, v15, v16);
  this->fields.baseTriangles = triangles;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseTriangles,
    (int32_t)triangles,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  klass = this->klass;
  this->fields.isChangeMesh = 1;
  ((void (__fastcall *)(ExUIUserMeshRenderer_o *, const MethodInfo *))klass->vtable._43_ReScale.methodPtr)(
    this,
    klass->vtable._43_ReScale.method);
  this->fields.isUseUserMesh = 1;
}