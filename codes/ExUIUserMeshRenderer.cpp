void __fastcall ExUIUserMeshRenderer___ctor(ExUIUserMeshRenderer_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_BD7660;
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
  sub_1BD33FC((PartyOrganizationUtility_o *)p_baseVertexs, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUvs = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseUvs, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.baseTriangles = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseTriangles, 0LL, v17, v18, v19, v20, v21, v22);
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
  struct UnityEngine_Vector3_array *v30; // x10
  __int64 v31; // x9
  unsigned __int64 v32; // x8
  unsigned __int64 max_length; // x11
  float *v34; // x10
  float v35; // s1
  float v36; // s2
  float v37; // s3
  float *v38; // x10
  unsigned int klass; // w8
  float v40; // s3
  float v41; // s2
  unsigned int v42; // w8
  float y; // s2
  float v44; // s0
  System_Array_o *baseTriangles; // x21
  struct UnityEngine_Vector2_array *baseUvs; // x8
  struct UnityEngine_Vector2_array *v47; // x8
  __int64 v48; // x9
  unsigned __int64 v49; // x11
  unsigned __int64 v50; // x10
  System_RuntimeFieldHandle_o v51; // 0:w1.4

  if ( (byte_4B3661A & 1) == 0 )
  {
    sub_1BD3458(&int___TypeInfo, method);
    sub_1BD3458(&ManagerConfig_TypeInfo, v3);
    sub_1BD3458(
      &Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53,
      v4);
    sub_1BD3458(&UnityEngine_Vector2___TypeInfo, v5);
    sub_1BD3458(&UnityEngine_Vector3___TypeInfo, v6);
    byte_4B3661A = 1;
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
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BD3500(
                                                        UnityEngine_Vector3___TypeInfo,
                                                        baseVertexs->max_length);
      v30 = this->fields.baseVertexs;
      if ( !v30 )
        goto LABEL_64;
      v18 = meshFilter;
      v31 = 0LL;
      v32 = 0LL;
      while ( 1 )
      {
        max_length = v30->max_length;
        if ( (__int64)v32 >= (int)max_length )
          break;
        if ( v32 >= max_length )
          goto LABEL_63;
        if ( meshFilter )
        {
          if ( v32 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_63;
          v34 = (float *)((char *)v30 + v31);
          v35 = v34[8];
          v36 = v34[9];
          v37 = v34[10];
          v38 = (float *)((char *)meshFilter + v31);
          v31 += 12LL;
          v38[8] = v26 + (float)(v35 * v25);
          v38[9] = v29 + (float)(v36 * v28);
          v38[10] = v37 + 1.0;
          v30 = this->fields.baseVertexs;
          ++v32;
          if ( v30 )
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
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BD3500(UnityEngine_Vector2___TypeInfo, baseUvs->max_length);
      v47 = this->fields.baseUvs;
      if ( !v47 )
        goto LABEL_64;
      v18 = meshFilter;
      v48 = 4LL;
      while ( 1 )
      {
        v49 = v47->max_length;
        v50 = v48 - 4;
        if ( v48 - 4 >= (int)v49 )
          break;
        if ( v50 >= v49 )
          goto LABEL_63;
        if ( meshFilter )
        {
          if ( v50 >= LODWORD(meshFilter[1].klass) )
            goto LABEL_63;
          *((float32x2_t *)&meshFilter->klass + v48) = vadd_f32(
                                                         (float32x2_t)this->fields.uvOffset,
                                                         vmul_f32(
                                                           (float32x2_t)*(&v47->obj.klass + v48),
                                                           (float32x2_t)this->fields.uvSize));
          v47 = this->fields.baseUvs;
          ++v48;
          if ( v47 )
            continue;
        }
        goto LABEL_64;
      }
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      baseTriangles = (System_Array_o *)this->fields.baseTriangles;
    }
    else
    {
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BD3500(UnityEngine_Vector3___TypeInfo, 4LL);
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
      v40 = (float)(v26 + v25) + 0.0;
      v41 = (float)(v29 + v28) + 0.0;
      *((float *)&meshFilter[1].fields + 1) = v40;
      *(float *)&meshFilter[2].klass = v41;
      HIDWORD(meshFilter[2].klass) = 0;
      if ( klass <= 2 )
        goto LABEL_63;
      *(float *)&meshFilter[2].monitor = v40;
      *((float *)&meshFilter[2].monitor + 1) = v29 + 0.0;
      meshFilter[2].fields.m_CachedPtr = 0;
      if ( klass == 3 )
        goto LABEL_63;
      *((float *)&meshFilter[2].fields + 1) = v26 + 0.0;
      *(float *)&meshFilter[3].klass = v41;
      HIDWORD(meshFilter[3].klass) = 0;
      if ( !mesh )
        goto LABEL_64;
      UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)meshFilter, 0LL);
      meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BD3500(UnityEngine_Vector2___TypeInfo, 4LL);
      if ( !meshFilter )
        goto LABEL_64;
      v42 = (unsigned int)meshFilter[1].klass;
      v18 = meshFilter;
      if ( !v42
        || (meshFilter[1].monitor = (void *)this->fields.uvOffset, v42 == 1)
        || (*(float32x2_t *)&meshFilter[1].fields.m_CachedPtr = vadd_f32(
                                                                  (float32x2_t)this->fields.uvOffset,
                                                                  (float32x2_t)this->fields.uvSize),
            v42 <= 2)
        || (y = this->fields.uvOffset.fields.y,
            *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x + this->fields.uvSize.fields.x,
            *((float *)&meshFilter[2].klass + 1) = y,
            v42 == 3) )
      {
LABEL_63:
        sub_1BD36BC(meshFilter, v18);
      }
      v44 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y;
      *(float *)&meshFilter[2].monitor = this->fields.uvOffset.fields.x;
      *((float *)&meshFilter[2].monitor + 1) = v44;
      UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
      if ( !this->fields.isUseUserMesh )
        goto LABEL_60;
      baseTriangles = (System_Array_o *)sub_1BD3500(int___TypeInfo, 6LL);
      v51.fields.value = Field__PrivateImplementationDetails__DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62433328(baseTriangles, v51, 0LL);
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
    sub_1BD36B4(meshFilter, v18);
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
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.baseVertexs,
    (int64_t)vertexs,
    (int64_t)uvs,
    (int32_t)triangles,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.baseUvs = uvs;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseUvs, (int64_t)uvs, v11, v12, v13, v14, v15, v16);
  this->fields.baseTriangles = triangles;
  sub_1BD33FC(
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