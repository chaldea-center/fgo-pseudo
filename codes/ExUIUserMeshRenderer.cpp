void __fastcall ExUIUserMeshRenderer___ctor(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_BDDEF0;
  this->fields.isFirst = 1;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall ExUIUserMeshRenderer__ClearUserMesh(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  void *baseVertexs; // x8
  struct UnityEngine_Vector3_array **p_baseVertexs; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  baseVertexs = this->fields.baseVertexs;
  p_baseVertexs = &this->fields.baseVertexs;
  if ( baseVertexs )
  {
    baseVertexs = this->fields.baseUvs;
    if ( baseVertexs )
      LOBYTE(baseVertexs) = this->fields.baseTriangles != 0LL;
  }
  this->fields.isChangeMesh = (char)baseVertexs;
  this->fields.baseVertexs = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_baseVertexs, 0, v2, v3);
  this->fields.baseUvs = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseUvs, 0, v7, v8);
  this->fields.baseTriangles = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseTriangles, 0, v9, v10);
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
  __int64 v7; // d0
  int32_t height; // w0
  ManagerConfig_c *v9; // x8
  int32_t v10; // w20
  int32_t WIDTH; // w22
  float v12; // s1
  float v13; // s0
  float v14; // s1
  float v15; // s0
  int32_t v16; // w22
  int32_t v17; // w21
  struct UnityEngine_MeshFilter_o *v18; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  float v21; // s8
  float v22; // s9
  struct UnityEngine_Vector3_array *baseVertexs; // x9
  float v24; // s0
  float v25; // s8
  float v26; // s11
  float v27; // s0
  float v28; // s9
  float v29; // s10
  __int64 v30; // x2
  struct UnityEngine_Vector3_array *v31; // x10
  __int64 v32; // x9
  unsigned __int64 v33; // x8
  unsigned __int64 max_length; // x11
  float *v35; // x10
  float v36; // s1
  float v37; // s2
  float v38; // s3
  float *v39; // x10
  unsigned int klass; // w8
  float v41; // s3
  float v42; // s2
  unsigned int v43; // w8
  float y; // s2
  float v45; // s0
  System_Array_o *baseTriangles; // x21
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v48; // x8
  __int64 v49; // x9
  unsigned __int64 v50; // x11
  unsigned __int64 v51; // x10
  System_RuntimeFieldHandle_o v52; // 0:w1.4

  if ( (byte_4B01444 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(&ManagerConfig_TypeInfo, v3);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53,
      v4);
    sub_1BC3008(&UnityEngine_Vector2___TypeInfo, v5);
    sub_1BC3008(&UnityEngine_Vector3___TypeInfo, v6);
    byte_4B01444 = 1;
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
    v10 = height;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v9 = ManagerConfig_TypeInfo;
    }
    WIDTH = v9->static_fields->WIDTH;
    v12 = (float)(WIDTH * v10)
        / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
    v13 = 1.0;
    if ( v12 > 1.0 )
      v13 = v12;
  }
  else
  {
    v13 = 1.0;
  }
  v14 = v13 * (float)this->fields.baseWidth;
  v15 = v13 * (float)this->fields.baseHeight;
  if ( v14 == INFINITY )
    v16 = 0x80000000;
  else
    v16 = (int)v14;
  if ( v15 == INFINITY )
    v17 = 0x80000000;
  else
    v17 = (int)v15;
  if ( v16 != this->fields.mWidth || v17 != this->fields.mHeight || this->fields.isChangeMesh )
  {
    UIWidget__set_width((UIWidget_o *)this, v16, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v17, 0LL);
    meshFilter = this->fields.meshFilter;
    if ( !meshFilter )
      goto LABEL_64;
    mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
    LODWORD(v21) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
    LODWORD(v22) = HIDWORD(*(unsigned __int64 *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL));
    if ( this->fields.isUseUserMesh )
    {
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__Clear(mesh, 0LL);
    }
    baseVertexs = this->fields.baseVertexs;
    v24 = -v21;
    v25 = (float)v16;
    v26 = (float)v16 * v24;
    v27 = -v22;
    v28 = (float)v17;
    v29 = (float)v17 * v27;
    if ( baseVertexs && this->fields.baseUvs && this->fields.baseTriangles )
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BC30B0(
                                                        UnityEngine_Vector3___TypeInfo,
                                                        baseVertexs->max_length);
      v31 = this->fields.baseVertexs;
      if ( !v31 )
        goto LABEL_64;
      v18 = meshFilter;
      v32 = 0LL;
      v33 = 0LL;
      while ( 1 )
      {
        max_length = v31->max_length;
        if ( (__int64)v33 >= (int)max_length )
          break;
        if ( v33 >= max_length )
          goto LABEL_63;
        if ( meshFilter )
        {
          if ( v33 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_63;
          v35 = (float *)((char *)v31 + v32);
          v36 = v35[8];
          v37 = v35[9];
          v38 = v35[10];
          v39 = (float *)((char *)meshFilter + v32);
          v32 += 12LL;
          v39[8] = v26 + (float)(v36 * v25);
          v39[9] = v29 + (float)(v37 * v28);
          v39[10] = v38 + 1.0;
          v31 = this->fields.baseVertexs;
          ++v33;
          if ( v31 )
            continue;
        }
        goto LABEL_64;
      }
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      baseUvs = this->fields.baseUvs;
      if ( !baseUvs )
        goto LABEL_64;
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BC30B0(UnityEngine_Vector2___TypeInfo, baseUvs->max_length);
      v48 = this->fields.baseUvs;
      if ( !v48 )
        goto LABEL_64;
      v18 = meshFilter;
      v49 = 4LL;
      while ( 1 )
      {
        v50 = v48->max_length;
        v51 = v49 - 4;
        if ( v49 - 4 >= (int)v50 )
          break;
        if ( v51 >= v50 )
          goto LABEL_63;
        if ( meshFilter )
        {
          if ( v51 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_63;
          *((float32x2_t *)&meshFilter->klass + v49) = vadd_f32(
                                                         (float32x2_t)this->fields.uvOffset,
                                                         vmul_f32(
                                                           (float32x2_t)*(&v48->obj.klass + v49),
                                                           (float32x2_t)this->fields.uvSize));
          v48 = this->fields.baseUvs;
          ++v49;
          if ( v48 )
            continue;
        }
        goto LABEL_64;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      baseTriangles = (System_Array_o *)this->fields.baseTriangles;
    }
    else
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BC30B0(UnityEngine_Vector3___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_64;
      klass = (unsigned int)meshFilter[1].klass;
      v18 = meshFilter;
      if ( !klass )
        goto LABEL_63;
      *(float *)&meshFilter[1].monitor = v26 + 0.0;
      *((float *)&meshFilter[1].monitor + 1) = v29 + 0.0;
      meshFilter[1].fields.m_CachedPtr = 0;
      if ( klass == 1 )
        goto LABEL_63;
      v41 = (float)(v26 + v25) + 0.0;
      v42 = (float)(v29 + v28) + 0.0;
      *((float *)&meshFilter[1].fields + 1) = v41;
      *(float *)&meshFilter[2].klass = v42;
      HIDWORD(meshFilter[2].klass) = 0;
      if ( klass <= 2 )
        goto LABEL_63;
      *(float *)&meshFilter[2].monitor = v41;
      *((float *)&meshFilter[2].monitor + 1) = v29 + 0.0;
      meshFilter[2].fields.m_CachedPtr = 0;
      if ( klass == 3 )
        goto LABEL_63;
      *((float *)&meshFilter[2].fields + 1) = v26 + 0.0;
      *(float *)&meshFilter[3].klass = v42;
      HIDWORD(meshFilter[3].klass) = 0;
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BC30B0(UnityEngine_Vector2___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_64;
      v43 = (unsigned int)meshFilter[1].klass;
      v18 = meshFilter;
      if ( !v43
        || (meshFilter[1].monitor = (void *)this->fields.uvOffset, v43 == 1)
        || (*(float32x2_t *)&meshFilter[1].fields.m_CachedPtr = vadd_f32(
                                                                  (float32x2_t)this->fields.uvOffset,
                                                                  (float32x2_t)this->fields.uvSize),
            v43 <= 2)
        || (y = this->fields.uvOffset.fields.y,
            *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *((float *)&meshFilter[2].klass + 1) = y,
            v43 == 3) )
      {
LABEL_63:
        sub_1BC326C(meshFilter, v18, v30);
      }
      v45 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)&meshFilter[2].monitor = this->fields.uvOffset.fields.x;
      *((float *)&meshFilter[2].monitor + 1) = v45;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_60;
      baseTriangles = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 6LL);
      v52.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(baseTriangles, v52, 0LL);
    }
    UnityEngine_Mesh__set_triangles(mesh, (System_Int32_array *)baseTriangles, 0LL);
LABEL_60:
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      UnityEngine_MeshFilter__set_mesh(meshFilter, mesh, 0LL);
      return;
    }
LABEL_64:
    sub_1BC3264(meshFilter, v18);
  }
}


void __fastcall ExUIUserMeshRenderer__SetUserMesh(
        ExUIUserMeshRenderer_o *this,
        UnityEngine_Vector3_array *vertexs,
        UnityEngine_Vector2_array *uvs,
        System_Int32_array *triangles,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ExUIUserMeshRenderer_c *klass; // x8

  this->fields.baseVertexs = vertexs;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.baseVertexs,
    (int32_t)vertexs,
    (int32_t)uvs,
    (const MethodInfo *)triangles);
  this->fields.baseUvs = uvs;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseUvs, (int32_t)uvs, v8, v9);
  this->fields.baseTriangles = triangles;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseTriangles, (int32_t)triangles, v10, v11);
  klass = this->klass;
  this->fields.isChangeMesh = 1;
  ((void (__fastcall *)(ExUIUserMeshRenderer_o *, void *))klass->vtable._43_ReScale.method)(this, klass[1]._1.image);
  this->fields.isUseUserMesh = 1;
}