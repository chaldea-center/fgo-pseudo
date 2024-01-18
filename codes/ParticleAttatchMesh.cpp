void __fastcall ParticleAttatchMesh___ctor(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ParticleAttatchMesh__BakeMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_Renderer_o *targetRenderer; // x21
  UnityEngine_Renderer_c *klass; // x8
  unsigned int v14; // w9
  __int64 v15; // x11
  __int64 v16; // x11
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_Renderer_c *v21; // x9
  UnityEngine_SkinnedMeshRenderer_o *v22; // x22
  unsigned int v23; // w11
  __int64 v24; // x10
  UnityEngine_Mesh_o *v25; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *sharedMesh; // x21
  struct UnityEngine_Mesh_o *v28; // x0
  struct UnityEngine_Mesh_o **p_cacheMesh; // x21
  System_Collections_Generic_List_Vector3__o **p_cacheVertices; // x20
  System_Collections_Generic_List_Vector3__o *v31; // x22
  System_Collections_Generic_List_Vector3__o *v32; // x22
  __int64 v33; // x24
  unsigned __int64 v34; // x21
  System_Collections_Generic_List_Vector3__o *v35; // x26
  struct UnityEngine_Mesh_o *v36; // x1
  System_Collections_Generic_List_Vector3__o **v37; // x19
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // t1
  System_Collections_Generic_List_Vector3__o *v39; // x21
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418521A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector3___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector3__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector3__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector3__set_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_Vector3__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_MeshRenderer_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Mesh_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v11);
    byte_418521A = 1;
  }
  targetRenderer = this->fields.targetRenderer;
  if ( targetRenderer )
  {
    klass = targetRenderer->klass;
    v14 = *(&targetRenderer->klass->_2.bitflags2 + 1);
    v15 = *(&UnityEngine_MeshRenderer_TypeInfo->_2.bitflags2 + 1);
    if ( v14 >= (unsigned int)v15
      && (UnityEngine_MeshRenderer_c *)klass->_2.typeHierarchy[v15 - 1] == UnityEngine_MeshRenderer_TypeInfo )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.targetRenderer, 0LL);
      if ( !gameObject )
        goto LABEL_49;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_49;
        sharedMesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(
                                               (UnityEngine_MeshFilter_o *)Component_srcLineSprite,
                                               0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(sharedMesh, 0LL, 0LL) )
        {
          v28 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)Component_srcLineSprite, 0LL);
          this->fields.cacheMesh = v28;
          p_cacheMesh = &this->fields.cacheMesh;
          sub_B2C2F8(&this->fields.cacheMesh, v28);
          p_cacheVertices = &this->fields.cacheVertices;
          if ( !this->fields.cacheVertices )
          {
            v31 = (System_Collections_Generic_List_Vector3__o *)sub_B2C42C(System_Collections_Generic_List_Vector3__TypeInfo);
            System_Collections_Generic_List_Vector3____ctor(
              v31,
              (const MethodInfo_2EDD558 *)Method_System_Collections_Generic_List_Vector3___ctor__);
            *p_cacheVertices = v31;
            sub_B2C2F8(&this->fields.cacheVertices, v31);
          }
          gameObject = (UnityEngine_GameObject_o *)*p_cacheMesh;
          if ( !*p_cacheMesh )
            goto LABEL_49;
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *p_cacheVertices, 0LL);
          v32 = *p_cacheVertices;
          if ( !*p_cacheVertices )
            goto LABEL_49;
          v33 = 0LL;
          v34 = 0LL;
          while ( (__int64)v34 < v32->fields._size )
          {
            gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderer;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
                v35 = *p_cacheVertices;
                if ( *p_cacheVertices )
                {
                  if ( v34 >= (unsigned int)v35->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                  if ( gameObject )
                  {
                    v40 = UnityEngine_Transform__TransformPoint(
                            (UnityEngine_Transform_o *)gameObject,
                            *(UnityEngine_Vector3_o *)&v35->fields._items->m_Items[v33].fields.y,
                            0LL);
                    System_Collections_Generic_List_Vector3___set_Item(
                      v32,
                      v34,
                      v40,
                      (const MethodInfo_2EDDF80 *)Method_System_Collections_Generic_List_Vector3__set_Item__);
                    v32 = *p_cacheVertices;
                    ++v34;
                    ++v33;
                    if ( *p_cacheVertices )
                      continue;
                  }
                }
              }
            }
            goto LABEL_49;
          }
        }
      }
    }
    else
    {
      v16 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
      if ( v14 >= (unsigned int)v16
        && (UnityEngine_SkinnedMeshRenderer_c *)klass->_2.typeHierarchy[v16 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
      {
        p_bakedMesh = &this->fields.bakedMesh;
        bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bakedMesh, 0LL, 0LL);
        v21 = targetRenderer->klass;
        v22 = 0LL;
        v23 = *(&targetRenderer->klass->_2.bitflags2 + 1);
        v24 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
        if ( v23 >= (unsigned int)v24 )
        {
          if ( (UnityEngine_SkinnedMeshRenderer_c *)v21->_2.typeHierarchy[v24 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            v22 = (UnityEngine_SkinnedMeshRenderer_o *)targetRenderer;
          else
            v22 = 0LL;
        }
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v25 = (UnityEngine_Mesh_o *)sub_B2C42C(UnityEngine_Mesh_TypeInfo);
          UnityEngine_Mesh___ctor(v25, 0LL);
          *p_bakedMesh = v25;
          sub_B2C2F8(&this->fields.bakedMesh, v25);
          if ( !v22 )
            goto LABEL_49;
        }
        else
        {
          if ( v23 < (unsigned int)v24 )
            goto LABEL_49;
          v22 = (UnityEngine_SkinnedMeshRenderer_o *)targetRenderer;
          if ( (UnityEngine_SkinnedMeshRenderer_c *)v21->_2.typeHierarchy[v24 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
            goto LABEL_49;
        }
        UnityEngine_SkinnedMeshRenderer__BakeMesh_35396260(v22, this->fields.bakedMesh, 1, 0LL);
        v36 = this->fields.bakedMesh;
        this->fields.cacheMesh = v36;
        sub_B2C2F8(&this->fields.cacheMesh, v36);
        cacheVertices = this->fields.cacheVertices;
        v37 = &this->fields.cacheVertices;
        if ( !cacheVertices )
        {
          v39 = (System_Collections_Generic_List_Vector3__o *)sub_B2C42C(System_Collections_Generic_List_Vector3__TypeInfo);
          System_Collections_Generic_List_Vector3____ctor(
            v39,
            (const MethodInfo_2EDD558 *)Method_System_Collections_Generic_List_Vector3___ctor__);
          *v37 = v39;
          sub_B2C2F8(v37, v39);
        }
        gameObject = (UnityEngine_GameObject_o *)*p_bakedMesh;
        if ( *p_bakedMesh )
        {
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *v37, 0LL);
          return;
        }
LABEL_49:
        sub_B2C434(gameObject, v20);
      }
    }
  }
}


void __fastcall ParticleAttatchMesh__CleanupCustomData(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  this->fields.customData1 = 0LL;
  sub_B2C2F8(&this->fields.customData1, 0LL);
  this->fields.customData2 = 0LL;
  sub_B2C2F8(&this->fields.customData2, 0LL);
  this->fields.meshColors = 0LL;
  sub_B2C2F8(&this->fields.meshColors, 0LL);
  this->fields.meshUVs1 = 0LL;
  sub_B2C2F8(&this->fields.meshUVs1, 0LL);
  this->fields.meshUVs2 = 0LL;
  sub_B2C2F8(&this->fields.meshUVs2, 0LL);
}


void __fastcall ParticleAttatchMesh__CleanupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x21
  UnityEngine_Object_o *v5; // x21

  if ( (byte_4185219 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185219 = 1;
  }
  p_bakedMesh = &this->fields.bakedMesh;
  bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bakedMesh, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)*p_bakedMesh;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v5, 0LL);
    *p_bakedMesh = 0LL;
    sub_B2C2F8(&this->fields.bakedMesh, 0LL);
  }
  this->fields.cacheMesh = 0LL;
  sub_B2C2F8(&this->fields.cacheMesh, 0LL);
  this->fields.cacheVertices = 0LL;
  sub_B2C2F8(&this->fields.cacheVertices, 0LL);
  this->fields.useVertexIndices = 0LL;
  sub_B2C2F8(&this->fields.useVertexIndices, 0LL);
}


void __fastcall ParticleAttatchMesh__CleanupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-18h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v10; // 0:x0.8

  if ( (byte_4185216 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185216 = 1;
  }
  m_ParticleSystem = 0LL;
  p_targetPS = &this->fields.targetPS;
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetPS, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)*p_targetPS;
    if ( !*p_targetPS
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL)) == 0LL
      || (UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)gameObject,
            this->fields.orgParticleScale,
            0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.targetPS) == 0LL) )
    {
      sub_B2C434(gameObject, v5);
    }
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
    v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(v10, this->fields.orgMaxParticles, 0LL);
    this->fields.targetPS = 0LL;
    sub_B2C2F8(&this->fields.targetPS, 0LL);
  }
  this->fields.particles = 0LL;
  sub_B2C2F8(&this->fields.particles, 0LL);
  ParticleAttatchMesh__CleanupCustomData(this, v7);
  ParticleAttatchMesh__CleanupMesh(this, v8);
}


UnityEngine_ParticleSystem_o *__fastcall ParticleAttatchMesh__GetTargetParticleSystem(
        ParticleAttatchMesh_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *targetParticleSystem; // x20
  UnityEngine_ParticleSystem_o *result; // x0
  bool IsNullOrEmpty; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x19
  bool v9; // w8

  if ( (byte_418521C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418521C = 1;
  }
  targetParticleSystem = (UnityEngine_Object_o *)this->fields.targetParticleSystem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetParticleSystem, 0LL, 0LL) )
    return this->fields.targetParticleSystem;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.targetParticleSystemPath, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    result = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !result )
      goto LABEL_19;
    result = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)result,
                                               0LL);
    if ( !result )
      goto LABEL_19;
    v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                   (UnityEngine_Transform_o *)result,
                                   this->fields.targetParticleSystemPath,
                                   0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
    result = 0LL;
    if ( v9 )
    {
      if ( v8 )
      {
        result = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v8,
                                                   0LL);
        if ( result )
          return (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)result,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      }
LABEL_19:
      sub_B2C434(result, v7);
    }
  }
  return result;
}


// attributes: thunk
void __fastcall ParticleAttatchMesh__LateUpdate(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  ParticleAttatchMesh__UpdateParticle(this, method);
}


System_Collections_Generic_List_int__o *__fastcall ParticleAttatchMesh__MergeVertexIndices(
        System_Collections_Generic_List_Vector3__o *vertices,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_HashSet_Vector3__o *v11; // x20
  System_Collections_Generic_List_int__o *v12; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  signed __int64 size; // x8
  __int64 v16; // x23
  unsigned __int64 v17; // x22
  float *v18; // x8
  float v19; // s8
  float v20; // s9
  float v21; // s10
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418521D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Vector3__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Vector3__Contains__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Vector3___ctor___67288744, v4);
    sub_B2C35C(&System_Collections_Generic_HashSet_Vector3__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector3__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector3__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_418521D = 1;
  }
  v11 = (System_Collections_Generic_HashSet_Vector3__o *)sub_B2C42C(System_Collections_Generic_HashSet_Vector3__TypeInfo);
  System_Collections_Generic_HashSet_Vector3____ctor(
    v11,
    (const MethodInfo_1BBD218 *)Method_System_Collections_Generic_HashSet_Vector3___ctor___67288744);
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vertices )
    goto LABEL_14;
  LODWORD(size) = vertices->fields._size;
  if ( (int)size >= 1 )
  {
    v16 = 0LL;
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v11 )
        break;
      v18 = (float *)((char *)vertices->fields._items + v16);
      v19 = v18[8];
      v20 = v18[9];
      v21 = v18[10];
      v23.fields.x = v19;
      v23.fields.y = v20;
      v23.fields.z = v21;
      v13 = System_Collections_Generic_HashSet_Vector3___Contains(
              v11,
              v23,
              (const MethodInfo_1BBD8A0 *)Method_System_Collections_Generic_HashSet_Vector3__Contains__);
      if ( !v13 )
      {
        v24.fields.x = v19;
        v24.fields.y = v20;
        v24.fields.z = v21;
        v13 = System_Collections_Generic_HashSet_Vector3___Add(
                v11,
                v24,
                (const MethodInfo_1BBE430 *)Method_System_Collections_Generic_HashSet_Vector3__Add__);
        if ( !v12 )
          break;
        System_Collections_Generic_List_int___Add(
          v12,
          v17,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      size = vertices->fields._size;
      ++v17;
      v16 += 12LL;
      if ( (__int64)v17 >= size )
        return v12;
    }
LABEL_14:
    sub_B2C434(v13, v14);
  }
  return v12;
}


// attributes: thunk
void __fastcall ParticleAttatchMesh__OnDisable(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  ParticleAttatchMesh__CleanupParticle(this, method);
}


int32_t __fastcall ParticleAttatchMesh__SetupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Vector3__o *cacheVertices; // x0
  struct System_Collections_Generic_List_int__o *v8; // x0
  struct System_Collections_Generic_List_int__o **p_useVertexIndices; // x19
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4185218 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185218 = 1;
  }
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetRenderer, 0LL, 0LL) )
  {
    ParticleAttatchMesh__BakeMesh(this, v5);
    cacheVertices = this->fields.cacheVertices;
    if ( cacheVertices )
    {
      v8 = ParticleAttatchMesh__MergeVertexIndices(cacheVertices, v6);
      this->fields.useVertexIndices = v8;
      p_useVertexIndices = &this->fields.useVertexIndices;
      sub_B2C2F8(p_useVertexIndices, v8);
      if ( !*p_useVertexIndices )
        sub_B2C434(v10, v11);
      LODWORD(cacheVertices) = (*p_useVertexIndices)->fields._size;
    }
  }
  else
  {
    LODWORD(cacheVertices) = 0;
  }
  return (int)cacheVertices;
}


void __fastcall ParticleAttatchMesh__SetupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  UnityEngine_Object_o *targetRenderer; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *TargetParticleSystem; // x22
  const MethodInfo *v9; // x1
  int32_t v10; // w0
  unsigned int v11; // w21
  __int64 v12; // x1
  UnityEngine_ParticleSystem_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_Particle_array *v14; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v16; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v17; // 0:x0.8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185215 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&UnityEngine_ParticleSystem_Particle___TypeInfo, v3);
    byte_4185215 = 1;
  }
  m_ParticleSystem = 0LL;
  p_targetPS = &this->fields.targetPS;
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(targetPS, 0LL, 0LL) )
  {
    targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(targetRenderer, 0LL, 0LL) )
    {
      TargetParticleSystem = (UnityEngine_Object_o *)ParticleAttatchMesh__GetTargetParticleSystem(this, v7);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(TargetParticleSystem, 0LL, 0LL) )
      {
        v10 = ParticleAttatchMesh__SetupMesh(this, v9);
        if ( v10 >= 1 )
        {
          v11 = v10;
          *p_targetPS = (struct UnityEngine_ParticleSystem_o *)TargetParticleSystem;
          sub_B2C2F8(&this->fields.targetPS, TargetParticleSystem);
          gameObject = *p_targetPS;
          if ( !*p_targetPS )
            goto LABEL_23;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(gameObject, 0LL).fields.m_ParticleSystem;
          gameObject = *p_targetPS;
          if ( !*p_targetPS )
            goto LABEL_23;
          gameObject = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
          if ( !gameObject )
            goto LABEL_23;
          gameObject = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)gameObject,
                                                         0LL);
          if ( !gameObject )
            goto LABEL_23;
          localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          v16.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          this->fields.orgParticleScale = localScale;
          this->fields.orgMaxParticles = UnityEngine_ParticleSystem_MainModule__get_maxParticles(v16, 0LL);
          v14 = (struct UnityEngine_ParticleSystem_Particle_array *)sub_B2C374(
                                                                      UnityEngine_ParticleSystem_Particle___TypeInfo,
                                                                      v11);
          this->fields.particles = v14;
          sub_B2C2F8(&this->fields.particles, v14);
          gameObject = this->fields.targetPS;
          if ( !gameObject )
LABEL_23:
            sub_B2C434(gameObject, v12);
          UnityEngine_ParticleSystem__SetParticles_50258056(gameObject, this->fields.particles, v11, 0LL);
          v17.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          UnityEngine_ParticleSystem_MainModule__set_maxParticles(v17, v11, 0LL);
        }
      }
    }
  }
}


// attributes: thunk
void __fastcall ParticleAttatchMesh__Start(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  ParticleAttatchMesh__SetupParticle(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ParticleAttatchMesh__UpdateCustomData(
        ParticleAttatchMesh_o *this,
        int32_t particleNum,
        const MethodInfo *method)
{
  ParticleAttatchMesh_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_Vector4__o **p_customData1; // x21
  System_Collections_Generic_List_Vector4__o *v18; // x22
  System_Collections_Generic_List_Vector4__o **p_customData2; // x21
  System_Collections_Generic_List_Vector4__o *v20; // x22
  int32_t customDataType1; // w8
  System_Collections_Generic_List_Color__o *v22; // x22
  System_Collections_Generic_List_Vector2__o *v23; // x22
  struct System_Collections_Generic_List_Vector2__o *meshUVs1; // x1
  System_Collections_Generic_List_Vector2__o *v25; // x22
  signed __int64 v26; // x21
  signed __int64 v27; // x22
  struct System_Collections_Generic_List_int__o *useVertexIndices; // x20
  int32_t v29; // w8
  __int64 v30; // x24
  struct System_Collections_Generic_List_Color__o *meshColors; // x25
  int v32; // w8
  System_Collections_Generic_List_Vector4__o *customData1; // x20
  int v34; // s0
  struct System_Collections_Generic_List_Vector2__o *v38; // x25
  int size; // w8
  int32_t customDataType2; // w8
  struct System_Collections_Generic_List_Color__o *v41; // x25
  int v42; // w8
  System_Collections_Generic_List_Vector4__o *customData2; // x20
  int v44; // s0
  struct System_Collections_Generic_List_Vector2__o *meshUVs2; // x25
  int v49; // w8

  v4 = this;
  if ( (byte_418521B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2___ctor__, *(_QWORD *)&particleNum);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector4___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Color___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector4__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Color__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2__get_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Color__get_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector4__set_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_Vector4__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_Vector2__TypeInfo, v15);
    this = (ParticleAttatchMesh_o *)sub_B2C35C(&System_Collections_Generic_List_Color__TypeInfo, v16);
    byte_418521B = 1;
  }
  if ( v4->fields.customDataType1 )
  {
    p_customData1 = &v4->fields.customData1;
    if ( !v4->fields.customData1 )
    {
      v18 = (System_Collections_Generic_List_Vector4__o *)sub_B2C42C(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v18,
        (const MethodInfo_2EE06F8 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData1 = v18;
      sub_B2C2F8(&v4->fields.customData1, v18);
    }
    this = (ParticleAttatchMesh_o *)v4->fields.targetPS;
    if ( !this )
      goto LABEL_83;
    this = (ParticleAttatchMesh_o *)UnityEngine_ParticleSystem__GetCustomParticleData(
                                      (UnityEngine_ParticleSystem_o *)this,
                                      *p_customData1,
                                      0,
                                      0LL);
  }
  if ( v4->fields.customDataType2 )
  {
    p_customData2 = &v4->fields.customData2;
    if ( !v4->fields.customData2 )
    {
      v20 = (System_Collections_Generic_List_Vector4__o *)sub_B2C42C(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v20,
        (const MethodInfo_2EE06F8 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData2 = v20;
      sub_B2C2F8(&v4->fields.customData2, v20);
    }
    this = (ParticleAttatchMesh_o *)v4->fields.targetPS;
    if ( !this )
      goto LABEL_83;
    this = (ParticleAttatchMesh_o *)UnityEngine_ParticleSystem__GetCustomParticleData(
                                      (UnityEngine_ParticleSystem_o *)this,
                                      *p_customData2,
                                      1,
                                      0LL);
  }
  customDataType1 = v4->fields.customDataType1;
  if ( customDataType1 == 1 || v4->fields.customDataType2 == 1 )
  {
    if ( !v4->fields.meshColors )
    {
      v22 = (System_Collections_Generic_List_Color__o *)sub_B2C42C(System_Collections_Generic_List_Color__TypeInfo);
      System_Collections_Generic_List_Color____ctor(
        v22,
        (const MethodInfo_2F39FE4 *)Method_System_Collections_Generic_List_Color___ctor__);
      v4->fields.meshColors = v22;
      sub_B2C2F8(&v4->fields.meshColors, v22);
    }
    this = (ParticleAttatchMesh_o *)v4->fields.cacheMesh;
    if ( !this )
      goto LABEL_83;
    UnityEngine_Mesh__GetColors((UnityEngine_Mesh_o *)this, v4->fields.meshColors, 0LL);
    customDataType1 = v4->fields.customDataType1;
  }
  if ( customDataType1 == 2 )
  {
    if ( !v4->fields.meshUVs1 )
    {
      v23 = (System_Collections_Generic_List_Vector2__o *)sub_B2C42C(System_Collections_Generic_List_Vector2__TypeInfo);
      System_Collections_Generic_List_Vector2____ctor(
        v23,
        (const MethodInfo_2EDA4C4 *)Method_System_Collections_Generic_List_Vector2___ctor__);
      v4->fields.meshUVs1 = v23;
      sub_B2C2F8(&v4->fields.meshUVs1, v23);
    }
    this = (ParticleAttatchMesh_o *)v4->fields.cacheMesh;
    if ( !this )
      goto LABEL_83;
    UnityEngine_Mesh__GetUVs((UnityEngine_Mesh_o *)this, v4->fields.customDataUVIndex1, v4->fields.meshUVs1, 0LL);
  }
  if ( v4->fields.customDataType2 == 2 )
  {
    if ( v4->fields.customDataType1 == 2 && v4->fields.customDataUVIndex2 == v4->fields.customDataUVIndex1 )
    {
      meshUVs1 = v4->fields.meshUVs1;
      v4->fields.meshUVs2 = meshUVs1;
      sub_B2C2F8(&v4->fields.meshUVs2, meshUVs1);
    }
    else
    {
      if ( !v4->fields.meshUVs2 )
      {
        v25 = (System_Collections_Generic_List_Vector2__o *)sub_B2C42C(System_Collections_Generic_List_Vector2__TypeInfo);
        System_Collections_Generic_List_Vector2____ctor(
          v25,
          (const MethodInfo_2EDA4C4 *)Method_System_Collections_Generic_List_Vector2___ctor__);
        v4->fields.meshUVs2 = v25;
        sub_B2C2F8(&v4->fields.meshUVs2, v25);
      }
      this = (ParticleAttatchMesh_o *)v4->fields.cacheMesh;
      if ( !this )
        goto LABEL_83;
      UnityEngine_Mesh__GetUVs((UnityEngine_Mesh_o *)this, v4->fields.customDataUVIndex2, v4->fields.meshUVs2, 0LL);
    }
  }
  if ( particleNum >= 1 )
  {
    v26 = 0LL;
    v27 = particleNum;
    do
    {
      useVertexIndices = v4->fields.useVertexIndices;
      if ( !useVertexIndices )
        goto LABEL_83;
      if ( v26 >= (unsigned __int64)(unsigned int)useVertexIndices->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v29 = v4->fields.customDataType1;
      v30 = useVertexIndices->fields._items->m_Items[v26 + 1];
      if ( v29 == 2 )
      {
        if ( (v30 & 0x80000000) == 0 )
        {
          v38 = v4->fields.meshUVs1;
          if ( !v38 )
            goto LABEL_83;
          size = v38->fields._size;
          if ( (int)v30 < size )
          {
            customData1 = v4->fields.customData1;
            if ( !customData1 )
              goto LABEL_83;
            if ( v26 < customData1->fields._size )
            {
              if ( size <= (unsigned int)v30 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              *(UnityEngine_Vector4_o *)&v34 = UnityEngine_Vector4__op_Implicit_49842540(
                                                 *(UnityEngine_Vector2_o *)&v38->fields._items->m_Items[v30].fields.y,
                                                 0LL);
              goto LABEL_55;
            }
          }
        }
      }
      else if ( v29 == 1 && (v30 & 0x80000000) == 0 )
      {
        meshColors = v4->fields.meshColors;
        if ( !meshColors )
          goto LABEL_83;
        v32 = meshColors->fields._size;
        if ( (int)v30 < v32 )
        {
          customData1 = v4->fields.customData1;
          if ( !customData1 )
            goto LABEL_83;
          if ( v26 < customData1->fields._size )
          {
            if ( v32 <= (unsigned int)v30 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            *(UnityEngine_Vector4_o *)&v34 = UnityEngine_Color__op_Implicit(
                                               *(UnityEngine_Color_o *)&meshColors->fields._items->m_Items[v30].fields.g,
                                               0LL);
LABEL_55:
            System_Collections_Generic_List_Vector4___set_Item(
              customData1,
              v26,
              *(UnityEngine_Vector4_o *)&v34,
              (const MethodInfo_2EE1118 *)Method_System_Collections_Generic_List_Vector4__set_Item__);
          }
        }
      }
      customDataType2 = v4->fields.customDataType2;
      if ( customDataType2 == 2 )
      {
        if ( (v30 & 0x80000000) != 0 )
          goto LABEL_75;
        meshUVs2 = v4->fields.meshUVs2;
        if ( !meshUVs2 )
          goto LABEL_83;
        v49 = meshUVs2->fields._size;
        if ( (int)v30 >= v49 )
          goto LABEL_75;
        customData2 = v4->fields.customData2;
        if ( !customData2 )
          goto LABEL_83;
        if ( v26 >= customData2->fields._size )
          goto LABEL_75;
        if ( v49 <= (unsigned int)v30 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        *(UnityEngine_Vector4_o *)&v44 = UnityEngine_Vector4__op_Implicit_49842540(
                                           *(UnityEngine_Vector2_o *)&meshUVs2->fields._items->m_Items[v30].fields.y,
                                           0LL);
      }
      else
      {
        if ( customDataType2 != 1 || (v30 & 0x80000000) != 0 )
          goto LABEL_75;
        v41 = v4->fields.meshColors;
        if ( !v41 )
          goto LABEL_83;
        v42 = v41->fields._size;
        if ( (int)v30 >= v42 )
          goto LABEL_75;
        customData2 = v4->fields.customData2;
        if ( !customData2 )
          goto LABEL_83;
        if ( v26 >= customData2->fields._size )
          goto LABEL_75;
        if ( v42 <= (unsigned int)v30 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        *(UnityEngine_Vector4_o *)&v44 = UnityEngine_Color__op_Implicit(
                                           *(UnityEngine_Color_o *)&v41->fields._items->m_Items[v30].fields.g,
                                           0LL);
      }
      System_Collections_Generic_List_Vector4___set_Item(
        customData2,
        v26,
        *(UnityEngine_Vector4_o *)&v44,
        (const MethodInfo_2EE1118 *)Method_System_Collections_Generic_List_Vector4__set_Item__);
LABEL_75:
      ++v26;
    }
    while ( v26 < v27 );
  }
  if ( v4->fields.customDataType1 )
  {
    this = (ParticleAttatchMesh_o *)v4->fields.targetPS;
    if ( !this )
      goto LABEL_83;
    UnityEngine_ParticleSystem__SetCustomParticleData(
      (UnityEngine_ParticleSystem_o *)this,
      v4->fields.customData1,
      0,
      0LL);
  }
  if ( v4->fields.customDataType2 )
  {
    this = (ParticleAttatchMesh_o *)v4->fields.targetPS;
    if ( this )
    {
      UnityEngine_ParticleSystem__SetCustomParticleData(
        (UnityEngine_ParticleSystem_o *)this,
        v4->fields.customData2,
        1,
        0LL);
      return;
    }
LABEL_83:
    sub_B2C434(this, *(_QWORD *)&particleNum);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ParticleAttatchMesh__UpdateParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *targetPS; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v8; // x1
  UnityEngine_ParticleSystem_o *Particles_50258344; // x0
  struct System_Collections_Generic_List_int__o *useVertexIndices; // x8
  int size; // w8
  int32_t v12; // w20
  const MethodInfo *v13; // x2
  UnityEngine_Transform_o *v14; // x21
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *nodeTransform; // x23
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v19; // x24
  char v20; // w24
  float v21; // s8
  unsigned int lossyScale; // s0
  float x; // s13
  float v24; // s9
  float y; // s10
  float v26; // s14
  float v27; // s11
  float z; // s12
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s9
  float v33; // s10
  float v34; // s11
  float v35; // s12
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s8
  float v40; // s9
  float v41; // s10
  float v42; // s0
  float v43; // s1
  float v44; // s2
  unsigned __int64 v45; // x21
  __int64 v46; // x23
  struct System_Collections_Generic_List_int__o *v47; // x26
  struct UnityEngine_ParticleSystem_Particle_array *particles; // x25
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // x27
  __int64 v50; // x26
  __int64 v51; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v53; // 0:x0.8
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185217 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector3__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4185217 = 1;
  }
  m_ParticleSystem = 0LL;
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(targetPS, 0LL, 0LL) )
    return;
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(targetRenderer, 0LL, 0LL) )
    return;
  Particles_50258344 = this->fields.targetPS;
  if ( !Particles_50258344 )
    goto LABEL_56;
  Particles_50258344 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__GetParticles_50258344(
                                                         Particles_50258344,
                                                         this->fields.particles,
                                                         0LL);
  if ( (int)Particles_50258344 < 1 )
    return;
  useVertexIndices = this->fields.useVertexIndices;
  if ( !useVertexIndices )
    goto LABEL_56;
  size = useVertexIndices->fields._size;
  v12 = (int)Particles_50258344 <= size ? (int)Particles_50258344 : size;
  ParticleAttatchMesh__BakeMesh(this, v8);
  ParticleAttatchMesh__UpdateCustomData(this, v12, v13);
  Particles_50258344 = this->fields.targetPS;
  if ( !Particles_50258344 )
    goto LABEL_56;
  Particles_50258344 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Particles_50258344,
                                                         0LL);
  if ( !Particles_50258344 )
    goto LABEL_56;
  Particles_50258344 = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Particles_50258344,
                                                         0LL);
  if ( !Particles_50258344 )
    goto LABEL_56;
  v14 = (UnityEngine_Transform_o *)Particles_50258344;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Particles_50258344, 0LL);
  nodeTransform = (UnityEngine_Object_o *)this->fields.nodeTransform;
  v17 = parent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nodeTransform, 0LL, 0LL) )
  {
    transform = this->fields.nodeTransform;
  }
  else
  {
    Particles_50258344 = (UnityEngine_ParticleSystem_o *)this->fields.targetRenderer;
    if ( !Particles_50258344 )
      goto LABEL_56;
    Particles_50258344 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Particles_50258344,
                                                           0LL);
    if ( !Particles_50258344 )
      goto LABEL_56;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Particles_50258344, 0LL);
  }
  v19 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v14, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Particles_50258344 = (UnityEngine_ParticleSystem_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  if ( !transform )
    goto LABEL_56;
  v20 = (char)Particles_50258344;
  LODWORD(v21) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL);
  if ( (v20 & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_56;
    lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale(v17, 0LL);
    x = this->fields.orgParticleScale.fields.x;
    v24 = *(float *)&lossyScale;
    v54 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    y = v54.fields.y;
    v55 = UnityEngine_Transform__get_lossyScale(v17, 0LL);
    v26 = this->fields.orgParticleScale.fields.y;
    v27 = v55.fields.y;
    v56 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    z = v56.fields.z;
    v57 = UnityEngine_Transform__get_lossyScale(v17, 0LL);
    v29 = x * (float)(v21 / v24);
    v30 = v26 * (float)(y / v27);
    v31 = this->fields.orgParticleScale.fields.z * (float)(z / v57.fields.z);
  }
  else
  {
    v32 = COERCE_FLOAT(UnityEngine_Transform__get_lossyScale(v14, 0LL));
    v58 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    v33 = v58.fields.y;
    v59 = UnityEngine_Transform__get_lossyScale(v14, 0LL);
    v34 = v59.fields.y;
    v60 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    v35 = v60.fields.z;
    v61 = UnityEngine_Transform__get_lossyScale(v14, 0LL);
    v29 = v21 / v32;
    v30 = v33 / v34;
    v31 = v35 / v61.fields.z;
  }
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v29, 0LL);
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_one(0LL);
  Particles_50258344 = this->fields.targetPS;
  if ( !Particles_50258344 )
LABEL_56:
    sub_B2C434(Particles_50258344, v8);
  v39 = v36;
  v40 = v37;
  v41 = v38;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Particles_50258344, 0LL).fields.m_ParticleSystem;
  v53.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  Particles_50258344 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem_MainModule__get_scalingMode(v53, 0LL);
  if ( (_DWORD)Particles_50258344 == 1 )
  {
    *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localScale(v14, 0LL);
    goto LABEL_41;
  }
  if ( !(_DWORD)Particles_50258344 )
  {
    *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_lossyScale(v14, 0LL);
LABEL_41:
    v39 = v42;
    v40 = v43;
    v41 = v44;
  }
  if ( v12 >= 1 )
  {
    v45 = 0LL;
    v46 = 32LL;
    do
    {
      v47 = this->fields.useVertexIndices;
      if ( !v47 )
        goto LABEL_56;
      if ( v45 >= (unsigned int)v47->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      particles = this->fields.particles;
      if ( !particles )
        goto LABEL_56;
      cacheVertices = this->fields.cacheVertices;
      if ( !cacheVertices )
        goto LABEL_56;
      v50 = v47->fields._items->m_Items[v45 + 1];
      if ( cacheVertices->fields._size <= (unsigned int)v50 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( v45 >= particles->max_length )
      {
        v51 = sub_B2C460(Particles_50258344);
        sub_B2C400(v51, 0LL);
      }
      v62.fields.y = cacheVertices->fields._items->m_Items[v50].fields.z / v40;
      v62.fields.x = cacheVertices->fields._items->m_Items[v50].fields.y / v39;
      v62.fields.z = cacheVertices->fields._items->m_Items[v50 + 1].fields.x / v41;
      UnityEngine_ParticleSystem_Particle__set_position(
        (UnityEngine_ParticleSystem_Particle_o *)((char *)particles + v46),
        v62,
        0LL);
      ++v45;
      v46 += 132LL;
    }
    while ( (__int64)v45 < v12 );
  }
  Particles_50258344 = this->fields.targetPS;
  if ( !Particles_50258344 )
    goto LABEL_56;
  UnityEngine_ParticleSystem__SetParticles_50258056(Particles_50258344, this->fields.particles, v12, 0LL);
}