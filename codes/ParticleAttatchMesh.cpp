void __fastcall ParticleAttatchMesh___ctor(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ParticleAttatchMesh__BakeMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct UnityEngine_Renderer_o *targetRenderer; // x21
  UnityEngine_Renderer_c *klass; // x8
  unsigned int v34; // w9
  __int64 v35; // x11
  __int64 v36; // x11
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v40; // x1
  UnityEngine_Renderer_c *v41; // x9
  UnityEngine_SkinnedMeshRenderer_o *v42; // x22
  unsigned int v43; // w11
  __int64 v44; // x10
  UnityEngine_Mesh_o *v45; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *sharedMesh; // x21
  struct UnityEngine_Mesh_o **p_cacheMesh; // x21
  System_Collections_Generic_List_Vector3__o **p_cacheVertices; // x20
  System_Collections_Generic_List_Vector3__o *v50; // x22
  System_Collections_Generic_List_Vector3__o *v51; // x22
  __int64 v52; // x24
  unsigned __int64 v53; // x21
  System_Collections_Generic_List_Vector3__o *v54; // x26
  System_Collections_Generic_List_Vector3__o **v55; // x19
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // t1
  System_Collections_Generic_List_Vector3__o *v57; // x21
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E63A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__set_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_Vector3__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_MeshRenderer_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Mesh_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v29, v30, v31);
    byte_42E63A1 = 1;
  }
  targetRenderer = this->fields.targetRenderer;
  if ( targetRenderer )
  {
    klass = targetRenderer->klass;
    v34 = *(&targetRenderer->klass->_2.bitflags2 + 1);
    v35 = *(&UnityEngine_MeshRenderer_TypeInfo->_2.bitflags2 + 1);
    if ( v34 >= (unsigned int)v35
      && (UnityEngine_MeshRenderer_c *)klass->_2.typeHierarchy[v35 - 1] == UnityEngine_MeshRenderer_TypeInfo )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.targetRenderer, 0LL);
      if ( !gameObject )
        goto LABEL_49;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
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
          this->fields.cacheMesh = UnityEngine_MeshFilter__get_sharedMesh(
                                     (UnityEngine_MeshFilter_o *)Component_srcLineSprite,
                                     0LL);
          p_cacheMesh = &this->fields.cacheMesh;
          sub_B5D560(&this->fields.cacheMesh);
          p_cacheVertices = &this->fields.cacheVertices;
          if ( !this->fields.cacheVertices )
          {
            v50 = (System_Collections_Generic_List_Vector3__o *)sub_B5D694(System_Collections_Generic_List_Vector3__TypeInfo);
            System_Collections_Generic_List_Vector3____ctor(
              v50,
              (const MethodInfo_30408B4 *)Method_System_Collections_Generic_List_Vector3___ctor__);
            *p_cacheVertices = v50;
            sub_B5D560(&this->fields.cacheVertices);
          }
          gameObject = (UnityEngine_GameObject_o *)*p_cacheMesh;
          if ( !*p_cacheMesh )
            goto LABEL_49;
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *p_cacheVertices, 0LL);
          v51 = *p_cacheVertices;
          if ( !*p_cacheVertices )
            goto LABEL_49;
          v52 = 0LL;
          v53 = 0LL;
          while ( (__int64)v53 < v51->fields._size )
          {
            gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderer;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
                v54 = *p_cacheVertices;
                if ( *p_cacheVertices )
                {
                  if ( v53 >= (unsigned int)v54->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  if ( gameObject )
                  {
                    v58 = UnityEngine_Transform__TransformPoint(
                            (UnityEngine_Transform_o *)gameObject,
                            *(UnityEngine_Vector3_o *)&v54->fields._items->m_Items[v52].fields.y,
                            0LL);
                    System_Collections_Generic_List_Vector3___set_Item(
                      v51,
                      v53,
                      v58,
                      (const MethodInfo_30412DC *)Method_System_Collections_Generic_List_Vector3__set_Item__);
                    v51 = *p_cacheVertices;
                    ++v53;
                    ++v52;
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
      v36 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
      if ( v34 >= (unsigned int)v36
        && (UnityEngine_SkinnedMeshRenderer_c *)klass->_2.typeHierarchy[v36 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
      {
        p_bakedMesh = &this->fields.bakedMesh;
        bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bakedMesh, 0LL, 0LL);
        v41 = targetRenderer->klass;
        v42 = 0LL;
        v43 = *(&targetRenderer->klass->_2.bitflags2 + 1);
        v44 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
        if ( v43 >= (unsigned int)v44 )
        {
          if ( (UnityEngine_SkinnedMeshRenderer_c *)v41->_2.typeHierarchy[v44 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            v42 = (UnityEngine_SkinnedMeshRenderer_o *)targetRenderer;
          else
            v42 = 0LL;
        }
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v45 = (UnityEngine_Mesh_o *)sub_B5D694(UnityEngine_Mesh_TypeInfo);
          UnityEngine_Mesh___ctor(v45, 0LL);
          *p_bakedMesh = v45;
          sub_B5D560(&this->fields.bakedMesh);
          if ( !v42 )
            goto LABEL_49;
        }
        else
        {
          if ( v43 < (unsigned int)v44 )
            goto LABEL_49;
          v42 = (UnityEngine_SkinnedMeshRenderer_o *)targetRenderer;
          if ( (UnityEngine_SkinnedMeshRenderer_c *)v41->_2.typeHierarchy[v44 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
            goto LABEL_49;
        }
        UnityEngine_SkinnedMeshRenderer__BakeMesh_35701600(v42, this->fields.bakedMesh, 1, 0LL);
        this->fields.cacheMesh = this->fields.bakedMesh;
        sub_B5D560(&this->fields.cacheMesh);
        cacheVertices = this->fields.cacheVertices;
        v55 = &this->fields.cacheVertices;
        if ( !cacheVertices )
        {
          v57 = (System_Collections_Generic_List_Vector3__o *)sub_B5D694(System_Collections_Generic_List_Vector3__TypeInfo);
          System_Collections_Generic_List_Vector3____ctor(
            v57,
            (const MethodInfo_30408B4 *)Method_System_Collections_Generic_List_Vector3___ctor__);
          *v55 = v57;
          sub_B5D560(v55);
        }
        gameObject = (UnityEngine_GameObject_o *)*p_bakedMesh;
        if ( *p_bakedMesh )
        {
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *v55, 0LL);
          return;
        }
LABEL_49:
        sub_B5D69C(gameObject, v40);
      }
    }
  }
}


void __fastcall ParticleAttatchMesh__CleanupCustomData(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  this->fields.customData1 = 0LL;
  sub_B5D560(&this->fields.customData1);
  this->fields.customData2 = 0LL;
  sub_B5D560(&this->fields.customData2);
  this->fields.meshColors = 0LL;
  sub_B5D560(&this->fields.meshColors);
  this->fields.meshUVs1 = 0LL;
  sub_B5D560(&this->fields.meshUVs1);
  this->fields.meshUVs2 = 0LL;
  sub_B5D560(&this->fields.meshUVs2);
}


void __fastcall ParticleAttatchMesh__CleanupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x21
  UnityEngine_Object_o *v7; // x21

  if ( (byte_42E63A0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63A0 = 1;
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
    v7 = (UnityEngine_Object_o *)*p_bakedMesh;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v7, 0LL);
    *p_bakedMesh = 0LL;
    sub_B5D560(&this->fields.bakedMesh);
  }
  this->fields.cacheMesh = 0LL;
  sub_B5D560(&this->fields.cacheMesh);
  this->fields.cacheVertices = 0LL;
  sub_B5D560(&this->fields.cacheVertices);
  this->fields.useVertexIndices = 0LL;
  sub_B5D560(&this->fields.useVertexIndices);
}


void __fastcall ParticleAttatchMesh__CleanupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-18h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v12; // 0:x0.8

  if ( (byte_42E639D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E639D = 1;
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
      sub_B5D69C(gameObject, v7);
    }
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
    v12.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(v12, this->fields.orgMaxParticles, 0LL);
    this->fields.targetPS = 0LL;
    sub_B5D560(&this->fields.targetPS);
  }
  this->fields.particles = 0LL;
  sub_B5D560(&this->fields.particles);
  ParticleAttatchMesh__CleanupCustomData(this, v9);
  ParticleAttatchMesh__CleanupMesh(this, v10);
}


UnityEngine_ParticleSystem_o *__fastcall ParticleAttatchMesh__GetTargetParticleSystem(
        ParticleAttatchMesh_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *targetParticleSystem; // x20
  UnityEngine_ParticleSystem_o *result; // x0
  bool IsNullOrEmpty; // w8
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x19
  bool v13; // w8

  if ( (byte_42E63A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E63A3 = 1;
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
    v12 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                    (UnityEngine_Transform_o *)result,
                                    this->fields.targetParticleSystemPath,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    result = 0LL;
    if ( v13 )
    {
      if ( v12 )
      {
        result = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v12,
                                                   0LL);
        if ( result )
          return (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)result,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      }
LABEL_19:
      sub_B5D69C(result, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_HashSet_Vector3__o *v29; // x20
  System_Collections_Generic_List_int__o *v30; // x21
  _BOOL8 v31; // x0
  __int64 v32; // x1
  signed __int64 size; // x8
  __int64 v34; // x23
  unsigned __int64 v35; // x22
  float *v36; // x8
  float v37; // s8
  float v38; // s9
  float v39; // s10
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E63A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Vector3__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Vector3__Contains__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Vector3___ctor___68717144, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_HashSet_Vector3__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    byte_42E63A4 = 1;
  }
  v29 = (System_Collections_Generic_HashSet_Vector3__o *)sub_B5D694(System_Collections_Generic_HashSet_Vector3__TypeInfo);
  System_Collections_Generic_HashSet_Vector3____ctor(
    v29,
    (const MethodInfo_250C7BC *)Method_System_Collections_Generic_HashSet_Vector3___ctor___68717144);
  v30 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !vertices )
    goto LABEL_14;
  LODWORD(size) = vertices->fields._size;
  if ( (int)size >= 1 )
  {
    v34 = 0LL;
    v35 = 0LL;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v29 )
        break;
      v36 = (float *)((char *)vertices->fields._items + v34);
      v37 = v36[8];
      v38 = v36[9];
      v39 = v36[10];
      v41.fields.x = v37;
      v41.fields.y = v38;
      v41.fields.z = v39;
      v31 = System_Collections_Generic_HashSet_Vector3___Contains(
              v29,
              v41,
              (const MethodInfo_250CE44 *)Method_System_Collections_Generic_HashSet_Vector3__Contains__);
      if ( !v31 )
      {
        v42.fields.x = v37;
        v42.fields.y = v38;
        v42.fields.z = v39;
        v31 = System_Collections_Generic_HashSet_Vector3___Add(
                v29,
                v42,
                (const MethodInfo_250D9D4 *)Method_System_Collections_Generic_HashSet_Vector3__Add__);
        if ( !v30 )
          break;
        System_Collections_Generic_List_int___Add(
          v30,
          v35,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      size = vertices->fields._size;
      ++v35;
      v34 += 12LL;
      if ( (__int64)v35 >= size )
        return v30;
    }
LABEL_14:
    sub_B5D69C(v31, v32);
  }
  return v30;
}


// attributes: thunk
void __fastcall ParticleAttatchMesh__OnDisable(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  ParticleAttatchMesh__CleanupParticle(this, method);
}


int32_t __fastcall ParticleAttatchMesh__SetupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_Vector3__o *cacheVertices; // x0
  struct System_Collections_Generic_List_int__o **p_useVertexIndices; // x19
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E639F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E639F = 1;
  }
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetRenderer, 0LL, 0LL) )
  {
    ParticleAttatchMesh__BakeMesh(this, v9);
    cacheVertices = this->fields.cacheVertices;
    if ( cacheVertices )
    {
      this->fields.useVertexIndices = ParticleAttatchMesh__MergeVertexIndices(cacheVertices, v10);
      p_useVertexIndices = &this->fields.useVertexIndices;
      sub_B5D560(p_useVertexIndices);
      if ( !*p_useVertexIndices )
        sub_B5D69C(v13, v14);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  UnityEngine_Object_o *targetRenderer; // x21
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *TargetParticleSystem; // x22
  const MethodInfo *v13; // x1
  int32_t v14; // w0
  unsigned int v15; // w21
  __int64 v16; // x1
  UnityEngine_ParticleSystem_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v19; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v20; // 0:x0.8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E639C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_ParticleSystem_Particle___TypeInfo, v5, v6, v7);
    byte_42E639C = 1;
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
      TargetParticleSystem = (UnityEngine_Object_o *)ParticleAttatchMesh__GetTargetParticleSystem(this, v11);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(TargetParticleSystem, 0LL, 0LL) )
      {
        v14 = ParticleAttatchMesh__SetupMesh(this, v13);
        if ( v14 >= 1 )
        {
          v15 = v14;
          *p_targetPS = (struct UnityEngine_ParticleSystem_o *)TargetParticleSystem;
          sub_B5D560(&this->fields.targetPS);
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
          if ( !gameObject
            || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL),
                v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem,
                this->fields.orgParticleScale = localScale,
                this->fields.orgMaxParticles = UnityEngine_ParticleSystem_MainModule__get_maxParticles(v19, 0LL),
                this->fields.particles = (struct UnityEngine_ParticleSystem_Particle_array *)sub_B5D5DC(
                                                                                               UnityEngine_ParticleSystem_Particle___TypeInfo,
                                                                                               v15),
                sub_B5D560(&this->fields.particles),
                (gameObject = this->fields.targetPS) == 0LL) )
          {
LABEL_23:
            sub_B5D69C(gameObject, v16);
          }
          UnityEngine_ParticleSystem__SetParticles_51305600(gameObject, this->fields.particles, v15, 0LL);
          v20.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          UnityEngine_ParticleSystem_MainModule__set_maxParticles(v20, v15, 0LL);
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
  __int64 v3; // x3
  ParticleAttatchMesh_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_List_Vector4__o **p_customData1; // x21
  System_Collections_Generic_List_Vector4__o *v43; // x22
  System_Collections_Generic_List_Vector4__o **p_customData2; // x21
  System_Collections_Generic_List_Vector4__o *v45; // x22
  int32_t customDataType1; // w8
  System_Collections_Generic_List_Color__o *v47; // x22
  System_Collections_Generic_List_Vector2__o *v48; // x22
  System_Collections_Generic_List_Vector2__o *v49; // x22
  signed __int64 v50; // x21
  signed __int64 v51; // x22
  struct System_Collections_Generic_List_int__o *useVertexIndices; // x20
  int32_t v53; // w8
  __int64 v54; // x24
  struct System_Collections_Generic_List_Color__o *meshColors; // x25
  int v56; // w8
  System_Collections_Generic_List_Vector4__o *customData1; // x20
  int v58; // s0
  struct System_Collections_Generic_List_Vector2__o *meshUVs1; // x25
  int size; // w8
  int32_t customDataType2; // w8
  struct System_Collections_Generic_List_Color__o *v65; // x25
  int v66; // w8
  System_Collections_Generic_List_Vector4__o *customData2; // x20
  int v68; // s0
  struct System_Collections_Generic_List_Vector2__o *meshUVs2; // x25
  int v73; // w8

  v5 = this;
  if ( (byte_42E63A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2___ctor__, particleNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector4___ctor__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Color___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector4__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Color__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2__get_Item__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Color__get_Item__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector4__set_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_Vector4__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_Vector2__TypeInfo, v36, v37, v38);
    this = (ParticleAttatchMesh_o *)sub_B5D5C4(&System_Collections_Generic_List_Color__TypeInfo, v39, v40, v41);
    byte_42E63A2 = 1;
  }
  if ( v5->fields.customDataType1 )
  {
    p_customData1 = &v5->fields.customData1;
    if ( !v5->fields.customData1 )
    {
      v43 = (System_Collections_Generic_List_Vector4__o *)sub_B5D694(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v43,
        (const MethodInfo_2F8C998 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData1 = v43;
      sub_B5D560(&v5->fields.customData1);
    }
    this = (ParticleAttatchMesh_o *)v5->fields.targetPS;
    if ( !this )
      goto LABEL_83;
    this = (ParticleAttatchMesh_o *)UnityEngine_ParticleSystem__GetCustomParticleData(
                                      (UnityEngine_ParticleSystem_o *)this,
                                      *p_customData1,
                                      0,
                                      0LL);
  }
  if ( v5->fields.customDataType2 )
  {
    p_customData2 = &v5->fields.customData2;
    if ( !v5->fields.customData2 )
    {
      v45 = (System_Collections_Generic_List_Vector4__o *)sub_B5D694(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v45,
        (const MethodInfo_2F8C998 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData2 = v45;
      sub_B5D560(&v5->fields.customData2);
    }
    this = (ParticleAttatchMesh_o *)v5->fields.targetPS;
    if ( !this )
      goto LABEL_83;
    this = (ParticleAttatchMesh_o *)UnityEngine_ParticleSystem__GetCustomParticleData(
                                      (UnityEngine_ParticleSystem_o *)this,
                                      *p_customData2,
                                      1,
                                      0LL);
  }
  customDataType1 = v5->fields.customDataType1;
  if ( customDataType1 == 1 || v5->fields.customDataType2 == 1 )
  {
    if ( !v5->fields.meshColors )
    {
      v47 = (System_Collections_Generic_List_Color__o *)sub_B5D694(System_Collections_Generic_List_Color__TypeInfo);
      System_Collections_Generic_List_Color____ctor(
        v47,
        (const MethodInfo_3020A04 *)Method_System_Collections_Generic_List_Color___ctor__);
      v5->fields.meshColors = v47;
      sub_B5D560(&v5->fields.meshColors);
    }
    this = (ParticleAttatchMesh_o *)v5->fields.cacheMesh;
    if ( !this )
      goto LABEL_83;
    UnityEngine_Mesh__GetColors((UnityEngine_Mesh_o *)this, v5->fields.meshColors, 0LL);
    customDataType1 = v5->fields.customDataType1;
  }
  if ( customDataType1 == 2 )
  {
    if ( !v5->fields.meshUVs1 )
    {
      v48 = (System_Collections_Generic_List_Vector2__o *)sub_B5D694(System_Collections_Generic_List_Vector2__TypeInfo);
      System_Collections_Generic_List_Vector2____ctor(
        v48,
        (const MethodInfo_303D820 *)Method_System_Collections_Generic_List_Vector2___ctor__);
      v5->fields.meshUVs1 = v48;
      sub_B5D560(&v5->fields.meshUVs1);
    }
    this = (ParticleAttatchMesh_o *)v5->fields.cacheMesh;
    if ( !this )
      goto LABEL_83;
    UnityEngine_Mesh__GetUVs((UnityEngine_Mesh_o *)this, v5->fields.customDataUVIndex1, v5->fields.meshUVs1, 0LL);
  }
  if ( v5->fields.customDataType2 == 2 )
  {
    if ( v5->fields.customDataType1 == 2 && v5->fields.customDataUVIndex2 == v5->fields.customDataUVIndex1 )
    {
      v5->fields.meshUVs2 = v5->fields.meshUVs1;
      sub_B5D560(&v5->fields.meshUVs2);
    }
    else
    {
      if ( !v5->fields.meshUVs2 )
      {
        v49 = (System_Collections_Generic_List_Vector2__o *)sub_B5D694(System_Collections_Generic_List_Vector2__TypeInfo);
        System_Collections_Generic_List_Vector2____ctor(
          v49,
          (const MethodInfo_303D820 *)Method_System_Collections_Generic_List_Vector2___ctor__);
        v5->fields.meshUVs2 = v49;
        sub_B5D560(&v5->fields.meshUVs2);
      }
      this = (ParticleAttatchMesh_o *)v5->fields.cacheMesh;
      if ( !this )
        goto LABEL_83;
      UnityEngine_Mesh__GetUVs((UnityEngine_Mesh_o *)this, v5->fields.customDataUVIndex2, v5->fields.meshUVs2, 0LL);
    }
  }
  if ( particleNum >= 1 )
  {
    v50 = 0LL;
    v51 = particleNum;
    do
    {
      useVertexIndices = v5->fields.useVertexIndices;
      if ( !useVertexIndices )
        goto LABEL_83;
      if ( v50 >= (unsigned __int64)(unsigned int)useVertexIndices->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v53 = v5->fields.customDataType1;
      v54 = useVertexIndices->fields._items->m_Items[v50 + 1];
      if ( v53 == 2 )
      {
        if ( (v54 & 0x80000000) == 0 )
        {
          meshUVs1 = v5->fields.meshUVs1;
          if ( !meshUVs1 )
            goto LABEL_83;
          size = meshUVs1->fields._size;
          if ( (int)v54 < size )
          {
            customData1 = v5->fields.customData1;
            if ( !customData1 )
              goto LABEL_83;
            if ( v50 < customData1->fields._size )
            {
              if ( size <= (unsigned int)v54 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              *(UnityEngine_Vector4_o *)&v58 = UnityEngine_Vector4__op_Implicit_51047756(
                                                 *(UnityEngine_Vector2_o *)&meshUVs1->fields._items->m_Items[v54].fields.y,
                                                 0LL);
              goto LABEL_55;
            }
          }
        }
      }
      else if ( v53 == 1 && (v54 & 0x80000000) == 0 )
      {
        meshColors = v5->fields.meshColors;
        if ( !meshColors )
          goto LABEL_83;
        v56 = meshColors->fields._size;
        if ( (int)v54 < v56 )
        {
          customData1 = v5->fields.customData1;
          if ( !customData1 )
            goto LABEL_83;
          if ( v50 < customData1->fields._size )
          {
            if ( v56 <= (unsigned int)v54 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            *(UnityEngine_Vector4_o *)&v58 = UnityEngine_Color__op_Implicit(
                                               *(UnityEngine_Color_o *)&meshColors->fields._items->m_Items[v54].fields.g,
                                               0LL);
LABEL_55:
            System_Collections_Generic_List_Vector4___set_Item(
              customData1,
              v50,
              *(UnityEngine_Vector4_o *)&v58,
              (const MethodInfo_2F8D3B8 *)Method_System_Collections_Generic_List_Vector4__set_Item__);
          }
        }
      }
      customDataType2 = v5->fields.customDataType2;
      if ( customDataType2 == 2 )
      {
        if ( (v54 & 0x80000000) != 0 )
          goto LABEL_75;
        meshUVs2 = v5->fields.meshUVs2;
        if ( !meshUVs2 )
          goto LABEL_83;
        v73 = meshUVs2->fields._size;
        if ( (int)v54 >= v73 )
          goto LABEL_75;
        customData2 = v5->fields.customData2;
        if ( !customData2 )
          goto LABEL_83;
        if ( v50 >= customData2->fields._size )
          goto LABEL_75;
        if ( v73 <= (unsigned int)v54 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        *(UnityEngine_Vector4_o *)&v68 = UnityEngine_Vector4__op_Implicit_51047756(
                                           *(UnityEngine_Vector2_o *)&meshUVs2->fields._items->m_Items[v54].fields.y,
                                           0LL);
      }
      else
      {
        if ( customDataType2 != 1 || (v54 & 0x80000000) != 0 )
          goto LABEL_75;
        v65 = v5->fields.meshColors;
        if ( !v65 )
          goto LABEL_83;
        v66 = v65->fields._size;
        if ( (int)v54 >= v66 )
          goto LABEL_75;
        customData2 = v5->fields.customData2;
        if ( !customData2 )
          goto LABEL_83;
        if ( v50 >= customData2->fields._size )
          goto LABEL_75;
        if ( v66 <= (unsigned int)v54 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        *(UnityEngine_Vector4_o *)&v68 = UnityEngine_Color__op_Implicit(
                                           *(UnityEngine_Color_o *)&v65->fields._items->m_Items[v54].fields.g,
                                           0LL);
      }
      System_Collections_Generic_List_Vector4___set_Item(
        customData2,
        v50,
        *(UnityEngine_Vector4_o *)&v68,
        (const MethodInfo_2F8D3B8 *)Method_System_Collections_Generic_List_Vector4__set_Item__);
LABEL_75:
      ++v50;
    }
    while ( v50 < v51 );
  }
  if ( v5->fields.customDataType1 )
  {
    this = (ParticleAttatchMesh_o *)v5->fields.targetPS;
    if ( !this )
      goto LABEL_83;
    UnityEngine_ParticleSystem__SetCustomParticleData(
      (UnityEngine_ParticleSystem_o *)this,
      v5->fields.customData1,
      0,
      0LL);
  }
  if ( v5->fields.customDataType2 )
  {
    this = (ParticleAttatchMesh_o *)v5->fields.targetPS;
    if ( this )
    {
      UnityEngine_ParticleSystem__SetCustomParticleData(
        (UnityEngine_ParticleSystem_o *)this,
        v5->fields.customData2,
        1,
        0LL);
      return;
    }
LABEL_83:
    sub_B5D69C(this, *(_QWORD *)&particleNum);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ParticleAttatchMesh__UpdateParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *targetPS; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v16; // x1
  UnityEngine_ParticleSystem_o *Particles_51305888; // x0
  struct System_Collections_Generic_List_int__o *useVertexIndices; // x8
  int size; // w8
  int32_t v20; // w20
  const MethodInfo *v21; // x2
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *nodeTransform; // x23
  UnityEngine_Transform_o *v25; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v27; // x24
  char v28; // w24
  float v29; // s8
  unsigned int lossyScale; // s0
  float x; // s13
  float v32; // s9
  float y; // s10
  float v34; // s14
  float v35; // s11
  float z; // s12
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s9
  float v41; // s10
  float v42; // s11
  float v43; // s12
  float v44; // s0
  float v45; // s1
  float v46; // s2
  float v47; // s8
  float v48; // s9
  float v49; // s10
  float v50; // s0
  float v51; // s1
  float v52; // s2
  unsigned __int64 v53; // x21
  __int64 v54; // x23
  struct System_Collections_Generic_List_int__o *v55; // x26
  struct UnityEngine_ParticleSystem_Particle_array *particles; // x25
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // x27
  __int64 v58; // x26
  __int64 v59; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v61; // 0:x0.8
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E639E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E639E = 1;
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
  Particles_51305888 = this->fields.targetPS;
  if ( !Particles_51305888 )
    goto LABEL_56;
  Particles_51305888 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__GetParticles_51305888(
                                                         Particles_51305888,
                                                         this->fields.particles,
                                                         0LL);
  if ( (int)Particles_51305888 < 1 )
    return;
  useVertexIndices = this->fields.useVertexIndices;
  if ( !useVertexIndices )
    goto LABEL_56;
  size = useVertexIndices->fields._size;
  v20 = (int)Particles_51305888 <= size ? (int)Particles_51305888 : size;
  ParticleAttatchMesh__BakeMesh(this, v16);
  ParticleAttatchMesh__UpdateCustomData(this, v20, v21);
  Particles_51305888 = this->fields.targetPS;
  if ( !Particles_51305888 )
    goto LABEL_56;
  Particles_51305888 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Particles_51305888,
                                                         0LL);
  if ( !Particles_51305888 )
    goto LABEL_56;
  Particles_51305888 = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Particles_51305888,
                                                         0LL);
  if ( !Particles_51305888 )
    goto LABEL_56;
  v22 = (UnityEngine_Transform_o *)Particles_51305888;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Particles_51305888, 0LL);
  nodeTransform = (UnityEngine_Object_o *)this->fields.nodeTransform;
  v25 = parent;
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
    Particles_51305888 = (UnityEngine_ParticleSystem_o *)this->fields.targetRenderer;
    if ( !Particles_51305888 )
      goto LABEL_56;
    Particles_51305888 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Particles_51305888,
                                                           0LL);
    if ( !Particles_51305888 )
      goto LABEL_56;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Particles_51305888, 0LL);
  }
  v27 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v22, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Particles_51305888 = (UnityEngine_ParticleSystem_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( !transform )
    goto LABEL_56;
  v28 = (char)Particles_51305888;
  LODWORD(v29) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL);
  if ( (v28 & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_56;
    lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale(v25, 0LL);
    x = this->fields.orgParticleScale.fields.x;
    v32 = *(float *)&lossyScale;
    v62 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    y = v62.fields.y;
    v63 = UnityEngine_Transform__get_lossyScale(v25, 0LL);
    v34 = this->fields.orgParticleScale.fields.y;
    v35 = v63.fields.y;
    v64 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    z = v64.fields.z;
    v65 = UnityEngine_Transform__get_lossyScale(v25, 0LL);
    v37 = x * (float)(v29 / v32);
    v38 = v34 * (float)(y / v35);
    v39 = this->fields.orgParticleScale.fields.z * (float)(z / v65.fields.z);
  }
  else
  {
    v40 = COERCE_FLOAT(UnityEngine_Transform__get_lossyScale(v22, 0LL));
    v66 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    v41 = v66.fields.y;
    v67 = UnityEngine_Transform__get_lossyScale(v22, 0LL);
    v42 = v67.fields.y;
    v68 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    v43 = v68.fields.z;
    v69 = UnityEngine_Transform__get_lossyScale(v22, 0LL);
    v37 = v29 / v40;
    v38 = v41 / v42;
    v39 = v43 / v69.fields.z;
  }
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v37, 0LL);
  *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Vector3__get_one(0LL);
  Particles_51305888 = this->fields.targetPS;
  if ( !Particles_51305888 )
LABEL_56:
    sub_B5D69C(Particles_51305888, v16);
  v47 = v44;
  v48 = v45;
  v49 = v46;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Particles_51305888, 0LL).fields.m_ParticleSystem;
  v61.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  Particles_51305888 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem_MainModule__get_scalingMode(v61, 0LL);
  if ( (_DWORD)Particles_51305888 == 1 )
  {
    *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Transform__get_localScale(v22, 0LL);
    goto LABEL_41;
  }
  if ( !(_DWORD)Particles_51305888 )
  {
    *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Transform__get_lossyScale(v22, 0LL);
LABEL_41:
    v47 = v50;
    v48 = v51;
    v49 = v52;
  }
  if ( v20 >= 1 )
  {
    v53 = 0LL;
    v54 = 32LL;
    do
    {
      v55 = this->fields.useVertexIndices;
      if ( !v55 )
        goto LABEL_56;
      if ( v53 >= (unsigned int)v55->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      particles = this->fields.particles;
      if ( !particles )
        goto LABEL_56;
      cacheVertices = this->fields.cacheVertices;
      if ( !cacheVertices )
        goto LABEL_56;
      v58 = v55->fields._items->m_Items[v53 + 1];
      if ( cacheVertices->fields._size <= (unsigned int)v58 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( v53 >= particles->max_length )
      {
        v59 = sub_B5D6C8(Particles_51305888);
        sub_B5D668(v59, 0LL);
      }
      v70.fields.y = cacheVertices->fields._items->m_Items[v58].fields.z / v48;
      v70.fields.x = cacheVertices->fields._items->m_Items[v58].fields.y / v47;
      v70.fields.z = cacheVertices->fields._items->m_Items[v58 + 1].fields.x / v49;
      UnityEngine_ParticleSystem_Particle__set_position(
        (UnityEngine_ParticleSystem_Particle_o *)((char *)particles + v54),
        v70,
        0LL);
      ++v53;
      v54 += 132LL;
    }
    while ( (__int64)v53 < v20 );
  }
  Particles_51305888 = this->fields.targetPS;
  if ( !Particles_51305888 )
    goto LABEL_56;
  UnityEngine_ParticleSystem__SetParticles_51305600(Particles_51305888, this->fields.particles, v20, 0LL);
}