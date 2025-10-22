void ExUIUserMeshRenderer___ctor(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_C119B0;
  this->fields.isFirst = 1;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void ExUIUserMeshRenderer__ClearUserMesh(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
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
      LOBYTE(baseVertexs) = this->fields.baseTriangles != 0;
  }
  this->fields.isChangeMesh = (char)baseVertexs;
  this->fields.baseVertexs = 0;
  sub_1C3E508((CGThumbnailListItem_o *)p_baseVertexs, 0, v2, v3);
  this->fields.baseUvs = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseUvs, 0, v7, v8);
  this->fields.baseTriangles = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseTriangles, 0, v9, v10);
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
  ManagerConfig_c *v5; // x8
  int32_t v6; // w20
  int32_t WIDTH; // w22
  float v8; // s1
  float v9; // s0
  float v10; // s1
  float v11; // s0
  int32_t v12; // w22
  int32_t v13; // w21
  struct UnityEngine_MeshFilter_o *v14; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  float v17; // s8
  float y; // s9
  struct UnityEngine_Vector3_array *baseVertexs; // x9
  float v20; // s0
  float v21; // s8
  float v22; // s11
  float v23; // s0
  float v24; // s9
  float v25; // s10
  struct UnityEngine_Vector3_array *v26; // x10
  __int64 v27; // x9
  unsigned __int64 v28; // x8
  unsigned __int64 max_length_low; // x11
  float *v30; // x10
  float v31; // s1
  float v32; // s2
  float v33; // s3
  float *v34; // x10
  unsigned int klass; // w8
  float v36; // s3
  float v37; // s2
  unsigned int v38; // w8
  float v39; // s2
  float v40; // s0
  System_Array_o *baseTriangles; // x21
  System_RuntimeFieldHandle_o v42; // x1
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v44; // x8
  __int64 v45; // x9
  unsigned __int64 v46; // x11
  unsigned __int64 v47; // x10

  if ( (byte_4C56146 & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53);
    sub_1C3E564(&UnityEngine_Vector2___TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3___TypeInfo);
    byte_4C56146 = 1;
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
    v5 = ManagerConfig_TypeInfo;
    v6 = height;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v5 = ManagerConfig_TypeInfo;
    }
    WIDTH = v5->static_fields->WIDTH;
    v8 = (float)(WIDTH * v6) / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0));
    v9 = 1.0;
    if ( v8 > 1.0 )
      v9 = v8;
  }
  else
  {
    v9 = 1.0;
  }
  v10 = v9 * (float)this->fields.baseWidth;
  v11 = v9 * (float)this->fields.baseHeight;
  if ( v10 == INFINITY )
    v12 = 0x80000000;
  else
    v12 = (int)v10;
  if ( v11 == INFINITY )
    v13 = 0x80000000;
  else
    v13 = (int)v11;
  if ( v12 != this->fields.mWidth || v13 != this->fields.mHeight || this->fields.isChangeMesh )
  {
    UIWidget__set_width((UIWidget_o *)this, v12, 0);
    UIWidget__set_height((UIWidget_o *)this, v13, 0);
    meshFilter = this->fields.meshFilter;
    if ( !meshFilter )
      goto LABEL_64;
    mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0);
    LODWORD(v17) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
    y = UIWidget__get_pivotOffset((UIWidget_o *)this, 0).fields.y;
    if ( this->fields.isUseUserMesh )
    {
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__Clear(mesh, 0);
    }
    baseVertexs = this->fields.baseVertexs;
    v20 = -v17;
    v21 = (float)v12;
    v22 = (float)v12 * v20;
    v23 = -y;
    v24 = (float)v13;
    v25 = (float)v13 * v23;
    if ( baseVertexs && this->fields.baseUvs && this->fields.baseTriangles )
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1C3E60C(
                                                        UnityEngine_Vector3___TypeInfo,
                                                        LODWORD(baseVertexs->max_length));
      v26 = this->fields.baseVertexs;
      if ( !v26 )
        goto LABEL_64;
      v14 = meshFilter;
      v27 = 0;
      v28 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(v26->max_length);
        if ( (__int64)v28 >= (int)max_length_low )
          break;
        if ( v28 >= max_length_low )
          goto LABEL_63;
        if ( meshFilter )
        {
          if ( v28 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_63;
          v30 = (float *)((char *)v26 + v27);
          v31 = v30[8];
          v32 = v30[9];
          v33 = v30[10];
          v34 = (float *)((char *)meshFilter + v27);
          v27 += 12;
          v34[8] = v22 + (float)(v31 * v21);
          v34[9] = v25 + (float)(v32 * v24);
          v34[10] = v33 + 1.0;
          v26 = this->fields.baseVertexs;
          ++v28;
          if ( v26 )
            continue;
        }
        goto LABEL_64;
      }
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0);
      baseUvs = this->fields.baseUvs;
      if ( !baseUvs )
        goto LABEL_64;
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1C3E60C(
                                                        UnityEngine_Vector2___TypeInfo,
                                                        LODWORD(baseUvs->max_length));
      v44 = this->fields.baseUvs;
      if ( !v44 )
        goto LABEL_64;
      v14 = meshFilter;
      v45 = 4;
      while ( 1 )
      {
        v46 = LODWORD(v44->max_length);
        v47 = v45 - 4;
        if ( v45 - 4 >= (int)v46 )
          break;
        if ( v47 >= v46 )
          goto LABEL_63;
        if ( meshFilter )
        {
          if ( v47 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_63;
          *((float32x2_t *)&meshFilter->klass + v45) = vadd_f32(
                                                         (float32x2_t)this->fields.uvOffset,
                                                         vmul_f32(
                                                           (float32x2_t)*(&v44->obj.klass + v45),
                                                           (float32x2_t)this->fields.uvSize));
          v44 = this->fields.baseUvs;
          ++v45;
          if ( v44 )
            continue;
        }
        goto LABEL_64;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0);
      baseTriangles = (System_Array_o *)this->fields.baseTriangles;
    }
    else
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1C3E60C(UnityEngine_Vector3___TypeInfo, 4);
      if ( !meshFilter )
        goto LABEL_64;
      klass = (unsigned int)meshFilter[1].klass;
      v14 = meshFilter;
      if ( !klass )
        goto LABEL_63;
      *(float *)&meshFilter[1].monitor = v22 + 0.0;
      *((float *)&meshFilter[1].monitor + 1) = v25 + 0.0;
      LODWORD(meshFilter[1].fields.m_CachedPtr) = 0;
      if ( klass == 1 )
        goto LABEL_63;
      v36 = (float)(v22 + v21) + 0.0;
      v37 = (float)(v25 + v24) + 0.0;
      *((float *)&meshFilter[1].fields.m_CachedPtr + 1) = v36;
      *(float *)&meshFilter[2].klass = v37;
      HIDWORD(meshFilter[2].klass) = 0;
      if ( klass <= 2 )
        goto LABEL_63;
      *(float *)&meshFilter[2].monitor = v36;
      *((float *)&meshFilter[2].monitor + 1) = v25 + 0.0;
      LODWORD(meshFilter[2].fields.m_CachedPtr) = 0;
      if ( klass == 3 )
        goto LABEL_63;
      *((float *)&meshFilter[2].fields.m_CachedPtr + 1) = v22 + 0.0;
      *(float *)&meshFilter[3].klass = v37;
      HIDWORD(meshFilter[3].klass) = 0;
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0);
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 4);
      if ( !meshFilter )
        goto LABEL_64;
      v38 = (unsigned int)meshFilter[1].klass;
      v14 = meshFilter;
      if ( !v38
        || (meshFilter[1].monitor = (void *)this->fields.uvOffset, v38 == 1)
        || (meshFilter[1].fields.m_CachedPtr = vadd_f32(
                                                 (float32x2_t)this->fields.uvOffset,
                                                 (float32x2_t)this->fields.uvSize).n64_i64[0],
            v38 <= 2)
        || (v39 = this->fields.uvOffset.fields.y,
            *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *((float *)&meshFilter[2].klass + 1) = v39,
            v38 == 3) )
      {
LABEL_63:
        sub_1C3E7C8(meshFilter, v14);
      }
      v40 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)&meshFilter[2].monitor = this->fields.uvOffset.fields.x;
      *((float *)&meshFilter[2].monitor + 1) = v40;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_60;
      baseTriangles = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 6);
      v42.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(baseTriangles, v42, 0);
    }
    UnityEngine_Mesh__set_triangles(mesh, (System_Int32_array *)baseTriangles, 0);
LABEL_60:
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      UnityEngine_MeshFilter__set_mesh(meshFilter, mesh, 0);
      return;
    }
LABEL_64:
    sub_1C3E7C0(meshFilter, v14);
  }
}


void ExUIUserMeshRenderer__SetUserMesh(
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
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.baseVertexs,
    (int32_t)vertexs,
    (int32_t)uvs,
    (const MethodInfo *)triangles);
  this->fields.baseUvs = uvs;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseUvs, (int32_t)uvs, v8, v9);
  this->fields.baseTriangles = triangles;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseTriangles, (int32_t)triangles, v10, v11);
  klass = this->klass;
  this->fields.isChangeMesh = 1;
  ((void (__fastcall *)(ExUIUserMeshRenderer_o *, const MethodInfo *))klass->vtable._43_ReScale.methodPtr)(
    this,
    klass->vtable._43_ReScale.method);
  this->fields.isUseUserMesh = 1;
}