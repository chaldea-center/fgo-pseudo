void __fastcall ExUIUserMeshRenderer___ctor(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_BD2210;
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
  sub_1BCA784((PartyOrganizationUtility_o *)p_baseVertexs, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUvs = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUvs, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.baseTriangles = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseTriangles, 0LL, v17, v18, v19, v20, v21, v22);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // d0
  int32_t height; // w0
  __int64 v14; // x1
  ManagerConfig_c *v15; // x8
  int32_t v16; // w20
  int32_t WIDTH; // w22
  float v18; // s1
  float v19; // s0
  float v20; // s1
  float v21; // s0
  int32_t v22; // w22
  int32_t v23; // w21
  struct UnityEngine_MeshFilter_o *v24; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  float v27; // s8
  float v28; // s9
  struct UnityEngine_Vector3_array *baseVertexs; // x9
  float v30; // s0
  float v31; // s8
  float v32; // s11
  float v33; // s0
  float v34; // s9
  float v35; // s10
  struct UnityEngine_Vector3_array *v36; // x10
  __int64 v37; // x9
  unsigned __int64 v38; // x8
  unsigned __int64 max_length; // x11
  float *v40; // x10
  float v41; // s1
  float v42; // s2
  float v43; // s3
  float *v44; // x10
  unsigned int klass; // w8
  float v46; // s3
  float v47; // s2
  unsigned int v48; // w8
  float y; // s2
  float v50; // s0
  System_Array_o *baseTriangles; // x21
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v53; // x8
  __int64 v54; // x9
  unsigned __int64 v55; // x11
  unsigned __int64 v56; // x10
  System_RuntimeFieldHandle_o v57; // 0:w1.4

  if ( (byte_4B1567F & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53,
      v6,
      v7);
    sub_1BCA7E0(&UnityEngine_Vector2___TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Vector3___TypeInfo, v10, v11);
    byte_4B1567F = 1;
  }
  if ( this->fields.isFirst )
  {
    v12 = *(_QWORD *)&this->fields.mWidth;
    this->fields.isFirst = 0;
    *(_QWORD *)&this->fields.baseWidth = v12;
    UIWidget__set_width((UIWidget_o *)this, 0, 0LL);
  }
  if ( this->fields.isRescale )
  {
    height = UnityEngine_Screen__get_height(0LL);
    v15 = ManagerConfig_TypeInfo;
    v16 = height;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v14);
      v15 = ManagerConfig_TypeInfo;
    }
    WIDTH = v15->static_fields->WIDTH;
    v18 = (float)(WIDTH * v16)
        / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
    v19 = 1.0;
    if ( v18 > 1.0 )
      v19 = v18;
  }
  else
  {
    v19 = 1.0;
  }
  v20 = v19 * (float)this->fields.baseWidth;
  v21 = v19 * (float)this->fields.baseHeight;
  if ( v20 == INFINITY )
    v22 = 0x80000000;
  else
    v22 = (int)v20;
  if ( v21 == INFINITY )
    v23 = 0x80000000;
  else
    v23 = (int)v21;
  if ( v22 != this->fields.mWidth || v23 != this->fields.mHeight || this->fields.isChangeMesh )
  {
    UIWidget__set_width((UIWidget_o *)this, v22, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v23, 0LL);
    meshFilter = this->fields.meshFilter;
    if ( !meshFilter )
      goto LABEL_64;
    mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
    LODWORD(v27) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
    LODWORD(v28) = HIDWORD(*(unsigned __int64 *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL));
    if ( this->fields.isUseUserMesh )
    {
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__Clear(mesh, 0LL);
    }
    baseVertexs = this->fields.baseVertexs;
    v30 = -v27;
    v31 = (float)v22;
    v32 = (float)v22 * v30;
    v33 = -v28;
    v34 = (float)v23;
    v35 = (float)v23 * v33;
    if ( baseVertexs && this->fields.baseUvs && this->fields.baseTriangles )
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BCA888(
                                                        UnityEngine_Vector3___TypeInfo,
                                                        baseVertexs->max_length);
      v36 = this->fields.baseVertexs;
      if ( !v36 )
        goto LABEL_64;
      v24 = meshFilter;
      v37 = 0LL;
      v38 = 0LL;
      while ( 1 )
      {
        max_length = v36->max_length;
        if ( (__int64)v38 >= (int)max_length )
          break;
        if ( v38 >= max_length )
          goto LABEL_63;
        if ( meshFilter )
        {
          if ( v38 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_63;
          v40 = (float *)((char *)v36 + v37);
          v41 = v40[8];
          v42 = v40[9];
          v43 = v40[10];
          v44 = (float *)((char *)meshFilter + v37);
          v37 += 12LL;
          v44[8] = v32 + (float)(v41 * v31);
          v44[9] = v35 + (float)(v42 * v34);
          v44[10] = v43 + 1.0;
          v36 = this->fields.baseVertexs;
          ++v38;
          if ( v36 )
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
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BCA888(UnityEngine_Vector2___TypeInfo, baseUvs->max_length);
      v53 = this->fields.baseUvs;
      if ( !v53 )
        goto LABEL_64;
      v24 = meshFilter;
      v54 = 4LL;
      while ( 1 )
      {
        v55 = v53->max_length;
        v56 = v54 - 4;
        if ( v54 - 4 >= (int)v55 )
          break;
        if ( v56 >= v55 )
          goto LABEL_63;
        if ( meshFilter )
        {
          if ( v56 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_63;
          *((float32x2_t *)&meshFilter->klass + v54) = vadd_f32(
                                                         (float32x2_t)this->fields.uvOffset,
                                                         vmul_f32(
                                                           (float32x2_t)*(&v53->obj.klass + v54),
                                                           (float32x2_t)this->fields.uvSize));
          v53 = this->fields.baseUvs;
          ++v54;
          if ( v53 )
            continue;
        }
        goto LABEL_64;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      baseTriangles = (System_Array_o *)this->fields.baseTriangles;
    }
    else
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_64;
      klass = (unsigned int)meshFilter[1].klass;
      v24 = meshFilter;
      if ( !klass )
        goto LABEL_63;
      *(float *)&meshFilter[1].monitor = v32 + 0.0;
      *((float *)&meshFilter[1].monitor + 1) = v35 + 0.0;
      meshFilter[1].fields.m_CachedPtr = 0;
      if ( klass == 1 )
        goto LABEL_63;
      v46 = (float)(v32 + v31) + 0.0;
      v47 = (float)(v35 + v34) + 0.0;
      *((float *)&meshFilter[1].fields + 1) = v46;
      *(float *)&meshFilter[2].klass = v47;
      HIDWORD(meshFilter[2].klass) = 0;
      if ( klass <= 2 )
        goto LABEL_63;
      *(float *)&meshFilter[2].monitor = v46;
      *((float *)&meshFilter[2].monitor + 1) = v35 + 0.0;
      meshFilter[2].fields.m_CachedPtr = 0;
      if ( klass == 3 )
        goto LABEL_63;
      *((float *)&meshFilter[2].fields + 1) = v32 + 0.0;
      *(float *)&meshFilter[3].klass = v47;
      HIDWORD(meshFilter[3].klass) = 0;
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BCA888(UnityEngine_Vector2___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_64;
      v48 = (unsigned int)meshFilter[1].klass;
      v24 = meshFilter;
      if ( !v48
        || (meshFilter[1].monitor = (void *)this->fields.uvOffset, v48 == 1)
        || (*(float32x2_t *)&meshFilter[1].fields.m_CachedPtr = vadd_f32(
                                                                  (float32x2_t)this->fields.uvOffset,
                                                                  (float32x2_t)this->fields.uvSize),
            v48 <= 2)
        || (y = this->fields.uvOffset.fields.y,
            *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *((float *)&meshFilter[2].klass + 1) = y,
            v48 == 3) )
      {
LABEL_63:
        sub_1BCAA44(meshFilter, v24);
      }
      v50 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)&meshFilter[2].monitor = this->fields.uvOffset.fields.x;
      *((float *)&meshFilter[2].monitor + 1) = v50;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_60;
      baseTriangles = (System_Array_o *)sub_1BCA888(int___TypeInfo, 6LL);
      v57.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(baseTriangles, v57, 0LL);
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
    sub_1BCAA3C(meshFilter, v24);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseVertexs,
    (int64_t)vertexs,
    (int64_t)uvs,
    (int32_t)triangles,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.baseUvs = uvs;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUvs, (int64_t)uvs, v11, v12, v13, v14, v15, v16);
  this->fields.baseTriangles = triangles;
  sub_1BCA784(
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