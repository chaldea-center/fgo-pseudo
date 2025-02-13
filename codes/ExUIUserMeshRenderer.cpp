void __fastcall ExUIUserMeshRenderer___ctor(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_BFDBB0;
  this->fields.isFirst = 1;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall ExUIUserMeshRenderer__ClearUserMesh(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *baseVertexs; // x8
  struct UnityEngine_Vector3_array **p_baseVertexs; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

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
  sub_1C21DDC((PartyOrganizationUtility_o *)p_baseVertexs, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUvs = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseUvs, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.baseTriangles = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseTriangles, 0LL, v17, v18, v19, v20, v21, v22);
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
  float v18; // s9
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
  unsigned __int64 max_length; // x11
  float *v30; // x10
  float v31; // s1
  float v32; // s2
  float v33; // s3
  float *v34; // x10
  unsigned int klass; // w8
  float v36; // s3
  float v37; // s2
  unsigned int v38; // w8
  float y; // s2
  float v40; // s0
  System_Array_o *baseTriangles; // x21
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v43; // x8
  __int64 v44; // x9
  unsigned __int64 v45; // x11
  unsigned __int64 v46; // x10
  System_RuntimeFieldHandle_o v47; // 0:w1.4

  if ( (byte_4BDB9B9 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53);
    sub_1C21E38(&UnityEngine_Vector2___TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3___TypeInfo);
    byte_4BDB9B9 = 1;
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
    v6 = height;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v5 = ManagerConfig_TypeInfo;
    }
    WIDTH = v5->static_fields->WIDTH;
    v8 = (float)(WIDTH * v6)
       / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
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
    UIWidget__set_width((UIWidget_o *)this, v12, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v13, 0LL);
    meshFilter = this->fields.meshFilter;
    if ( !meshFilter )
      goto LABEL_64;
    mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
    LODWORD(v17) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
    LODWORD(v18) = HIDWORD(*(unsigned __int64 *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL));
    if ( this->fields.isUseUserMesh )
    {
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__Clear(mesh, 0LL);
    }
    baseVertexs = this->fields.baseVertexs;
    v20 = -v17;
    v21 = (float)v12;
    v22 = (float)v12 * v20;
    v23 = -v18;
    v24 = (float)v13;
    v25 = (float)v13 * v23;
    if ( baseVertexs && this->fields.baseUvs && this->fields.baseTriangles )
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1C21EE0(
                                                        UnityEngine_Vector3___TypeInfo,
                                                        baseVertexs->max_length);
      v26 = this->fields.baseVertexs;
      if ( !v26 )
        goto LABEL_64;
      v14 = meshFilter;
      v27 = 0LL;
      v28 = 0LL;
      while ( 1 )
      {
        max_length = v26->max_length;
        if ( (__int64)v28 >= (int)max_length )
          break;
        if ( v28 >= max_length )
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
          v27 += 12LL;
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
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      baseUvs = this->fields.baseUvs;
      if ( !baseUvs )
        goto LABEL_64;
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1C21EE0(UnityEngine_Vector2___TypeInfo, baseUvs->max_length);
      v43 = this->fields.baseUvs;
      if ( !v43 )
        goto LABEL_64;
      v14 = meshFilter;
      v44 = 4LL;
      while ( 1 )
      {
        v45 = v43->max_length;
        v46 = v44 - 4;
        if ( v44 - 4 >= (int)v45 )
          break;
        if ( v46 >= v45 )
          goto LABEL_63;
        if ( meshFilter )
        {
          if ( v46 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_63;
          *((float32x2_t *)&meshFilter->klass + v44) = vadd_f32(
                                                         (float32x2_t)this->fields.uvOffset,
                                                         vmul_f32(
                                                           (float32x2_t)*(&v43->obj.klass + v44),
                                                           (float32x2_t)this->fields.uvSize));
          v43 = this->fields.baseUvs;
          ++v44;
          if ( v43 )
            continue;
        }
        goto LABEL_64;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      baseTriangles = (System_Array_o *)this->fields.baseTriangles;
    }
    else
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_64;
      klass = (unsigned int)meshFilter[1].klass;
      v14 = meshFilter;
      if ( !klass )
        goto LABEL_63;
      *(float *)&meshFilter[1].monitor = v22 + 0.0;
      *((float *)&meshFilter[1].monitor + 1) = v25 + 0.0;
      meshFilter[1].fields.m_CachedPtr = 0;
      if ( klass == 1 )
        goto LABEL_63;
      v36 = (float)(v22 + v21) + 0.0;
      v37 = (float)(v25 + v24) + 0.0;
      *((float *)&meshFilter[1].fields + 1) = v36;
      *(float *)&meshFilter[2].klass = v37;
      HIDWORD(meshFilter[2].klass) = 0;
      if ( klass <= 2 )
        goto LABEL_63;
      *(float *)&meshFilter[2].monitor = v36;
      *((float *)&meshFilter[2].monitor + 1) = v25 + 0.0;
      meshFilter[2].fields.m_CachedPtr = 0;
      if ( klass == 3 )
        goto LABEL_63;
      *((float *)&meshFilter[2].fields + 1) = v22 + 0.0;
      *(float *)&meshFilter[3].klass = v37;
      HIDWORD(meshFilter[3].klass) = 0;
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1C21EE0(UnityEngine_Vector2___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_64;
      v38 = (unsigned int)meshFilter[1].klass;
      v14 = meshFilter;
      if ( !v38
        || (meshFilter[1].monitor = (void *)this->fields.uvOffset, v38 == 1)
        || (*(float32x2_t *)&meshFilter[1].fields.m_CachedPtr = vadd_f32(
                                                                  (float32x2_t)this->fields.uvOffset,
                                                                  (float32x2_t)this->fields.uvSize),
            v38 <= 2)
        || (y = this->fields.uvOffset.fields.y,
            *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *((float *)&meshFilter[2].klass + 1) = y,
            v38 == 3) )
      {
LABEL_63:
        sub_1C2209C(meshFilter, v14);
      }
      v40 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)&meshFilter[2].monitor = this->fields.uvOffset.fields.x;
      *((float *)&meshFilter[2].monitor + 1) = v40;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_60;
      baseTriangles = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 6LL);
      v47.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(baseTriangles, v47, 0LL);
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
    sub_1C22094(meshFilter, v14);
  }
}


void __fastcall ExUIUserMeshRenderer__SetUserMesh(
        ExUIUserMeshRenderer_o *this,
        UnityEngine_Vector3_array *vertexs,
        UnityEngine_Vector2_array *uvs,
        System_Int32_array *triangles,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ExUIUserMeshRenderer_c *klass; // x8

  this->fields.baseVertexs = vertexs;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.baseVertexs,
    (int64_t)vertexs,
    (int64_t)uvs,
    (int32_t)triangles,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.baseUvs = uvs;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseUvs, (int64_t)uvs, v11, v12, v13, v14, v15, v16);
  this->fields.baseTriangles = triangles;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.baseTriangles,
    (int64_t)triangles,
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