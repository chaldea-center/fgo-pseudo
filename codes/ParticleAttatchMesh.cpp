void ParticleAttatchMesh___ctor(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ParticleAttatchMesh__BakeMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Renderer_o *targetRenderer; // x20
  UnityEngine_Renderer_c *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v6; // x11
  __int64 v7; // x11
  struct UnityEngine_Mesh_o **p_bakedMesh; // x21
  UnityEngine_Object_o *bakedMesh; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Renderer_c *v12; // x9
  unsigned int v13; // w11
  __int64 v14; // x10
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *sharedMesh; // x21
  struct UnityEngine_Mesh_o *v19; // x0
  struct UnityEngine_Mesh_o **p_cacheMesh; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_Vector3__o **p_cacheVertices; // x20
  System_Collections_Generic_List_Vector3__o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_List_Vector3__o *v35; // x21
  int32_t v36; // w22
  UnityEngine_Transform_o *v37; // x23
  UnityEngine_Mesh_o *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct UnityEngine_Mesh_o *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  MissionNaviTransitionBoardItem_o *v52; // x19
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // t1
  System_Collections_Generic_List_Vector3__o *v54; // x20
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593BC82 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__set_Item__);
    sub_21FFC50(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_21FFC50(&UnityEngine_MeshRenderer_TypeInfo);
    sub_21FFC50(&UnityEngine_Mesh_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    byte_593BC82 = 1;
  }
  targetRenderer = this->fields.targetRenderer;
  if ( targetRenderer )
  {
    klass = targetRenderer->klass;
    naturalAligment = targetRenderer->klass->_2.naturalAligment;
    v6 = UnityEngine_MeshRenderer_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v6
      && (UnityEngine_MeshRenderer_c *)klass->_2.typeHierarchy[v6 - 1] == UnityEngine_MeshRenderer_TypeInfo )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.targetRenderer, 0);
      if ( !gameObject )
        goto LABEL_32;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_32;
        sharedMesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(
                                               (UnityEngine_MeshFilter_o *)Component_object,
                                               0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
        if ( UnityEngine_Object__op_Inequality(sharedMesh, 0, 0) )
        {
          v19 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)Component_object, 0);
          this->fields.cacheMesh = v19;
          p_cacheMesh = &this->fields.cacheMesh;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.cacheMesh,
            (int32_t)v19,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          p_cacheVertices = &this->fields.cacheVertices;
          if ( !this->fields.cacheVertices )
          {
            v28 = (System_Collections_Generic_List_Vector3__o *)sub_21FFEBC(System_Collections_Generic_List_Vector3__TypeInfo);
            System_Collections_Generic_List_Vector3____ctor(
              v28,
              (const MethodInfo_44AEBA8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
            *p_cacheVertices = v28;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.cacheVertices,
              (int32_t)v28,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
          }
          gameObject = (UnityEngine_GameObject_o *)*p_cacheMesh;
          if ( !*p_cacheMesh )
            goto LABEL_32;
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *p_cacheVertices, 0);
          v35 = *p_cacheVertices;
          if ( !*p_cacheVertices )
            goto LABEL_32;
          v36 = 0;
          while ( v36 < v35->fields._size )
          {
            gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderer;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( gameObject )
              {
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
                if ( *p_cacheVertices )
                {
                  v37 = (UnityEngine_Transform_o *)gameObject;
                  Item = System_Collections_Generic_List_Vector3___get_Item(
                           *p_cacheVertices,
                           v36,
                           (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
                  if ( v37 )
                  {
                    v62 = UnityEngine_Transform__TransformPoint(v37, Item, 0);
                    System_Collections_Generic_List_Vector3___set_Item(
                      v35,
                      v36,
                      v62,
                      (const MethodInfo_44AF19C *)Method_System_Collections_Generic_List_Vector3__set_Item__);
                    v35 = *p_cacheVertices;
                    ++v36;
                    if ( *p_cacheVertices )
                      continue;
                  }
                }
              }
            }
            goto LABEL_32;
          }
        }
      }
    }
    else
    {
      v7 = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
      if ( naturalAligment >= (unsigned int)v7
        && (UnityEngine_SkinnedMeshRenderer_c *)klass->_2.typeHierarchy[v7 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
      {
        p_bakedMesh = &this->fields.bakedMesh;
        bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bakedMesh, 0, 0);
        v12 = targetRenderer->klass;
        v13 = targetRenderer->klass->_2.naturalAligment;
        v14 = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v13 >= (unsigned int)v14 )
          {
            if ( (UnityEngine_SkinnedMeshRenderer_c *)v12->_2.typeHierarchy[v14 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
              targetRenderer = 0;
          }
          else
          {
            targetRenderer = 0;
          }
          v38 = (UnityEngine_Mesh_o *)sub_21FFEBC(UnityEngine_Mesh_TypeInfo);
          UnityEngine_Mesh___ctor(v38, 0);
          *p_bakedMesh = v38;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.bakedMesh,
            (int32_t)v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
          if ( !targetRenderer )
            goto LABEL_32;
        }
        else if ( v13 < (unsigned int)v14
               || (UnityEngine_SkinnedMeshRenderer_c *)v12->_2.typeHierarchy[v14 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
        {
          goto LABEL_32;
        }
        UnityEngine_SkinnedMeshRenderer__BakeMesh_83084388(
          (UnityEngine_SkinnedMeshRenderer_o *)targetRenderer,
          this->fields.bakedMesh,
          1,
          0);
        v45 = this->fields.bakedMesh;
        this->fields.cacheMesh = v45;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.cacheMesh,
          (int32_t)v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        cacheVertices = this->fields.cacheVertices;
        v52 = (MissionNaviTransitionBoardItem_o *)&this->fields.cacheVertices;
        if ( !cacheVertices )
        {
          v54 = (System_Collections_Generic_List_Vector3__o *)sub_21FFEBC(System_Collections_Generic_List_Vector3__TypeInfo);
          System_Collections_Generic_List_Vector3____ctor(
            v54,
            (const MethodInfo_44AEBA8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
          v52->klass = (MissionNaviTransitionBoardItem_c *)v54;
          sub_21FFBF4(v52, (int32_t)v54, v55, v56, v57, v58, v59, v60);
        }
        gameObject = (UnityEngine_GameObject_o *)*p_bakedMesh;
        if ( *p_bakedMesh )
        {
          UnityEngine_Mesh__GetVertices(
            (UnityEngine_Mesh_o *)gameObject,
            (System_Collections_Generic_List_Vector3__o *)v52->klass,
            0);
          return;
        }
LABEL_32:
        sub_21FFECC(gameObject, v11);
      }
    }
  }
}


void ParticleAttatchMesh__CleanupCustomData(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  this->fields.customData1 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.customData1, 0, v2, v3, v4, v5, v6, v7);
  this->fields.customData2 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.customData2, 0, v9, v10, v11, v12, v13, v14);
  this->fields.meshColors = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.meshColors, 0, v15, v16, v17, v18, v19, v20);
  this->fields.meshUVs1 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.meshUVs1, 0, v21, v22, v23, v24, v25, v26);
  this->fields.meshUVs2 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.meshUVs2, 0, v27, v28, v29, v30, v31, v32);
}


void ParticleAttatchMesh__CleanupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x21
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_Object_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_593BC81 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC81 = 1;
  }
  p_bakedMesh = &this->fields.bakedMesh;
  bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(bakedMesh, 0, 0) )
  {
    v12 = (UnityEngine_Object_o *)*p_bakedMesh;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_83246496(v12, 0);
    *p_bakedMesh = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bakedMesh, 0, v13, v14, v15, v16, v17, v18);
  }
  this->fields.cacheMesh = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cacheMesh, 0, v6, v7, v8, v9, v10, v11);
  this->fields.cacheVertices = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cacheVertices, 0, v19, v20, v21, v22, v23, v24);
  this->fields.useVertexIndices = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.useVertexIndices, 0, v25, v26, v27, v28, v29, v30);
}


void ParticleAttatchMesh__CleanupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_ParticleSystem_MainModule_o v13; // x0
  int32_t orgMaxParticles; // w1
  UnityEngine_ParticleSystem_MainModule_o v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593BC7E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC7E = 1;
  }
  m_ParticleSystem = 0;
  p_targetPS = &this->fields.targetPS;
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetPS, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)*p_targetPS;
    if ( !*p_targetPS
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0)) == 0
      || (UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, this->fields.orgParticleScale, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.targetPS) == 0) )
    {
      sub_21FFECC(gameObject, v5);
    }
    v13.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)gameObject, 0).fields.m_ParticleSystem;
    orgMaxParticles = this->fields.orgMaxParticles;
    m_ParticleSystem = v13.fields.m_ParticleSystem;
    v15.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(v15, orgMaxParticles, 0);
    this->fields.targetPS = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.targetPS, 0, v16, v17, v18, v19, v20, v21);
  }
  this->fields.particles = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.particles, 0, v6, v7, v8, v9, v10, v11);
  ParticleAttatchMesh__CleanupCustomData(this, v22);
  ParticleAttatchMesh__CleanupMesh(this, v23);
}


UnityEngine_ParticleSystem_o *ParticleAttatchMesh__GetTargetParticleSystem(
        ParticleAttatchMesh_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetParticleSystem; // x20
  UnityEngine_ParticleSystem_o *result; // x0
  bool IsNullOrEmpty; // w8
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x19
  bool v9; // w8

  if ( (byte_593BC84 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC84 = 1;
  }
  targetParticleSystem = (UnityEngine_Object_o *)this->fields.targetParticleSystem;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetParticleSystem, 0, 0) )
    return this->fields.targetParticleSystem;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.targetParticleSystemPath, 0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    result = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !result )
      goto LABEL_17;
    result = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)result,
                                               0);
    if ( !result )
      goto LABEL_17;
    v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                   (UnityEngine_Transform_o *)result,
                                   this->fields.targetParticleSystemPath,
                                   0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__op_Inequality(v8, 0, 0);
    result = 0;
    if ( v9 )
    {
      if ( v8 )
      {
        result = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
        if ( result )
          return (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)result,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      }
LABEL_17:
      sub_21FFECC(result, v6);
    }
  }
  return result;
}


// attributes: thunk
void ParticleAttatchMesh__LateUpdate(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  ParticleAttatchMesh__UpdateParticle(this, method);
}


System_Collections_Generic_List_int__o *ParticleAttatchMesh__MergeVertexIndices(
        System_Collections_Generic_List_Vector3__o *vertices,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_Vector3__o *v3; // x20
  System_Collections_Generic_List_int__o *v4; // x21
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w22
  float x; // s8
  float y; // s9
  float z; // s10
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593BC85 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Vector3__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Vector3__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Vector3___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_Vector3__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593BC85 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_Vector3__o *)sub_21FFEBC(System_Collections_Generic_HashSet_Vector3__TypeInfo);
  System_Collections_Generic_HashSet_Vector3____ctor(
    v3,
    (const MethodInfo_42936EC *)Method_System_Collections_Generic_HashSet_Vector3___ctor__);
  v4 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vertices )
    goto LABEL_15;
  if ( vertices->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_Vector3___get_Item(
               vertices,
               v7,
               (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !v3 )
        break;
      x = Item.fields.x;
      y = Item.fields.y;
      z = Item.fields.z;
      if ( !System_Collections_Generic_HashSet_Vector3___Contains(
              v3,
              Item,
              (const MethodInfo_4293DF4 *)Method_System_Collections_Generic_HashSet_Vector3__Contains__) )
      {
        v16.fields.x = x;
        v16.fields.y = y;
        v16.fields.z = z;
        v5 = System_Collections_Generic_HashSet_Vector3___Add(
               v3,
               v16,
               (const MethodInfo_4294954 *)Method_System_Collections_Generic_HashSet_Vector3__Add__);
        if ( !v4 )
          break;
        items = v4->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            v7,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
      }
      if ( ++v7 >= vertices->fields._size )
        return v4;
    }
LABEL_15:
    sub_21FFECC(v5, v6);
  }
  return v4;
}


// attributes: thunk
void ParticleAttatchMesh__OnDisable(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  ParticleAttatchMesh__CleanupParticle(this, method);
}


int32_t ParticleAttatchMesh__SetupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Vector3__o *cacheVertices; // x0
  struct System_Collections_Generic_List_int__o *v7; // x0
  struct System_Collections_Generic_List_int__o **p_useVertexIndices; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_593BC80 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC80 = 1;
  }
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetRenderer, 0, 0) )
  {
    ParticleAttatchMesh__BakeMesh(this, v4);
    cacheVertices = this->fields.cacheVertices;
    if ( cacheVertices )
    {
      v7 = ParticleAttatchMesh__MergeVertexIndices(cacheVertices, v5);
      this->fields.useVertexIndices = v7;
      p_useVertexIndices = &this->fields.useVertexIndices;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_useVertexIndices, (int32_t)v7, v9, v10, v11, v12, v13, v14);
      if ( !*p_useVertexIndices )
        sub_21FFECC(v15, v16);
      LODWORD(cacheVertices) = (*p_useVertexIndices)->fields._size;
    }
  }
  else
  {
    LODWORD(cacheVertices) = 0;
  }
  return (int)cacheVertices;
}


void ParticleAttatchMesh__SetupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetPS; // x20
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *TargetParticleSystem; // x22
  const MethodInfo *v10; // x1
  int32_t v11; // w0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  unsigned int v18; // w20
  __int64 v19; // x1
  UnityEngine_ParticleSystem_o *m_ParticleSystem; // x0
  UnityEngine_Component_o *v21; // x8
  UnityEngine_ParticleSystem_MainModule_o v22; // x0
  struct UnityEngine_ParticleSystem_Particle_array *v23; // x0
  struct UnityEngine_ParticleSystem_Particle_array **p_particles; // x19
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UnityEngine_ParticleSystem_MainModule_o v31; // x0
  UnityEngine_ParticleSystem_o *v32; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593BC7D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_ParticleSystem_Particle___TypeInfo);
    byte_593BC7D = 1;
  }
  v32 = 0;
  p_targetPS = &this->fields.targetPS;
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(targetPS, 0, 0) )
  {
    targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Equality(targetRenderer, 0, 0) )
    {
      TargetParticleSystem = (UnityEngine_Object_o *)ParticleAttatchMesh__GetTargetParticleSystem(this, v7);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( !UnityEngine_Object__op_Equality(TargetParticleSystem, 0, 0) )
      {
        v11 = ParticleAttatchMesh__SetupMesh(this, v10);
        if ( v11 >= 1 )
        {
          v18 = v11;
          *p_targetPS = (struct UnityEngine_ParticleSystem_o *)TargetParticleSystem;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.targetPS,
            (int32_t)TargetParticleSystem,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          m_ParticleSystem = *p_targetPS;
          if ( !*p_targetPS )
            goto LABEL_20;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(m_ParticleSystem, 0).fields.m_ParticleSystem;
          v21 = (UnityEngine_Component_o *)*p_targetPS;
          v32 = m_ParticleSystem;
          if ( !v21 )
            goto LABEL_20;
          m_ParticleSystem = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(v21, 0);
          if ( !m_ParticleSystem )
            goto LABEL_20;
          m_ParticleSystem = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)m_ParticleSystem,
                                                               0);
          if ( !m_ParticleSystem )
            goto LABEL_20;
          localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)m_ParticleSystem, 0);
          v22.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v32;
          this->fields.orgParticleScale = localScale;
          this->fields.orgMaxParticles = UnityEngine_ParticleSystem_MainModule__get_maxParticles(v22, 0);
          v23 = (struct UnityEngine_ParticleSystem_Particle_array *)sub_21FFD10(
                                                                      UnityEngine_ParticleSystem_Particle___TypeInfo,
                                                                      v18);
          this->fields.particles = v23;
          p_particles = &this->fields.particles;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_particles, (int32_t)v23, v25, v26, v27, v28, v29, v30);
          m_ParticleSystem = (UnityEngine_ParticleSystem_o *)*(p_particles - 1);
          if ( !m_ParticleSystem )
LABEL_20:
            sub_21FFECC(m_ParticleSystem, v19);
          UnityEngine_ParticleSystem__SetParticles_83621420(m_ParticleSystem, *p_particles, v18, 0);
          v31.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v32;
          UnityEngine_ParticleSystem_MainModule__set_maxParticles(v31, v18, 0);
        }
      }
    }
  }
}


// attributes: thunk
void ParticleAttatchMesh__Start(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  ParticleAttatchMesh__SetupParticle(this, method);
}


// local variable allocation has failed, the output may be wrong!
void ParticleAttatchMesh__UpdateCustomData(ParticleAttatchMesh_o *this, int32_t particleNum, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_Vector4__o **p_customData1; // x21
  System_Collections_Generic_List_Vector4__o *v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_ParticleSystem_o *targetPS; // x0
  System_Collections_Generic_List_Vector4__o **p_customData2; // x21
  System_Collections_Generic_List_Vector4__o *v20; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t customDataType1; // w8
  System_Collections_Generic_List_Color__o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_List_Vector2__o *v35; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Collections_Generic_List_Vector2__o *meshUVs1; // x1
  System_Collections_Generic_List_Vector2__o *v43; // x22
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t i; // w21
  int32_t Item; // w0
  int32_t v52; // w8
  int32_t v53; // w22
  struct System_Collections_Generic_List_Vector4__o *customData1; // x23
  int32_t customDataType2; // w8
  struct System_Collections_Generic_List_Vector4__o *customData2; // x23
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593BC83 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector4___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Color___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector4__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Color__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Color__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector4__set_Item__);
    sub_21FFC50(&System_Collections_Generic_List_Color__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Vector4__TypeInfo);
    byte_593BC83 = 1;
  }
  if ( this->fields.customDataType1 )
  {
    p_customData1 = &this->fields.customData1;
    if ( !this->fields.customData1 )
    {
      v11 = (System_Collections_Generic_List_Vector4__o *)sub_21FFEBC(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v11,
        (const MethodInfo_44B151C *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData1 = v11;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.customData1,
        (int32_t)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    targetPS = this->fields.targetPS;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_ParticleSystem__GetCustomParticleData(targetPS, *p_customData1, 0, 0);
  }
  if ( this->fields.customDataType2 )
  {
    p_customData2 = &this->fields.customData2;
    if ( !this->fields.customData2 )
    {
      v20 = (System_Collections_Generic_List_Vector4__o *)sub_21FFEBC(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v20,
        (const MethodInfo_44B151C *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData2 = v20;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.customData2,
        (int32_t)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    targetPS = this->fields.targetPS;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_ParticleSystem__GetCustomParticleData(targetPS, *p_customData2, 1, 0);
  }
  customDataType1 = this->fields.customDataType1;
  if ( customDataType1 == 1 || this->fields.customDataType2 == 1 )
  {
    if ( !this->fields.meshColors )
    {
      v28 = (System_Collections_Generic_List_Color__o *)sub_21FFEBC(System_Collections_Generic_List_Color__TypeInfo);
      System_Collections_Generic_List_Color____ctor(
        v28,
        (const MethodInfo_43E465C *)Method_System_Collections_Generic_List_Color___ctor__);
      this->fields.meshColors = v28;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.meshColors,
        (int32_t)v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    targetPS = (UnityEngine_ParticleSystem_o *)this->fields.cacheMesh;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_Mesh__GetColors((UnityEngine_Mesh_o *)targetPS, this->fields.meshColors, 0);
    customDataType1 = this->fields.customDataType1;
  }
  if ( customDataType1 == 2 )
  {
    if ( !this->fields.meshUVs1 )
    {
      v35 = (System_Collections_Generic_List_Vector2__o *)sub_21FFEBC(System_Collections_Generic_List_Vector2__TypeInfo);
      System_Collections_Generic_List_Vector2____ctor(
        v35,
        (const MethodInfo_44AC32C *)Method_System_Collections_Generic_List_Vector2___ctor__);
      this->fields.meshUVs1 = v35;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.meshUVs1,
        (int32_t)v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    targetPS = (UnityEngine_ParticleSystem_o *)this->fields.cacheMesh;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_Mesh__GetUVs((UnityEngine_Mesh_o *)targetPS, this->fields.customDataUVIndex1, this->fields.meshUVs1, 0);
  }
  if ( this->fields.customDataType2 == 2 )
  {
    if ( this->fields.customDataType1 == 2 && this->fields.customDataUVIndex2 == this->fields.customDataUVIndex1 )
    {
      meshUVs1 = this->fields.meshUVs1;
      this->fields.meshUVs2 = meshUVs1;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.meshUVs2,
        (int32_t)meshUVs1,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
    }
    else
    {
      if ( !this->fields.meshUVs2 )
      {
        v43 = (System_Collections_Generic_List_Vector2__o *)sub_21FFEBC(System_Collections_Generic_List_Vector2__TypeInfo);
        System_Collections_Generic_List_Vector2____ctor(
          v43,
          (const MethodInfo_44AC32C *)Method_System_Collections_Generic_List_Vector2___ctor__);
        this->fields.meshUVs2 = v43;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.meshUVs2,
          (int32_t)v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      targetPS = (UnityEngine_ParticleSystem_o *)this->fields.cacheMesh;
      if ( !targetPS )
        goto LABEL_73;
      UnityEngine_Mesh__GetUVs(
        (UnityEngine_Mesh_o *)targetPS,
        this->fields.customDataUVIndex2,
        this->fields.meshUVs2,
        0);
    }
  }
  if ( particleNum >= 1 )
  {
    for ( i = 0; particleNum != i; ++i )
    {
      targetPS = (UnityEngine_ParticleSystem_o *)this->fields.useVertexIndices;
      if ( !targetPS )
        goto LABEL_73;
      Item = System_Collections_Generic_List_int___get_Item(
               (System_Collections_Generic_List_int__o *)targetPS,
               i,
               (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      v52 = this->fields.customDataType1;
      v53 = Item;
      if ( v52 == 2 )
      {
        if ( (Item & 0x80000000) == 0 )
        {
          targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshUVs1;
          if ( !targetPS )
            goto LABEL_73;
          if ( v53 < SLODWORD(targetPS[1].klass) )
          {
            customData1 = this->fields.customData1;
            if ( !customData1 )
              goto LABEL_73;
            if ( i < customData1->fields._size )
            {
              *(UnityEngine_Vector2_o *)&v57.fields.r = System_Collections_Generic_List_Vector2___get_Item(
                                                          (System_Collections_Generic_List_Vector2__o *)targetPS,
                                                          v53,
                                                          (const MethodInfo_44AC8C4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              v57.fields.b = 0.0;
              v57.fields.a = 0.0;
              goto LABEL_49;
            }
          }
        }
      }
      else if ( v52 == 1 && (Item & 0x80000000) == 0 )
      {
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshColors;
        if ( !targetPS )
          goto LABEL_73;
        if ( v53 < SLODWORD(targetPS[1].klass) )
        {
          customData1 = this->fields.customData1;
          if ( !customData1 )
            goto LABEL_73;
          if ( i < customData1->fields._size )
          {
            v57 = System_Collections_Generic_List_Color___get_Item(
                    (System_Collections_Generic_List_Color__o *)targetPS,
                    v53,
                    (const MethodInfo_43E4BF4 *)Method_System_Collections_Generic_List_Color__get_Item__);
LABEL_49:
            System_Collections_Generic_List_Vector4___set_Item(
              customData1,
              i,
              (UnityEngine_Vector4_o)v57,
              (const MethodInfo_44B1B0C *)Method_System_Collections_Generic_List_Vector4__set_Item__);
          }
        }
      }
      customDataType2 = this->fields.customDataType2;
      if ( customDataType2 == 2 )
      {
        if ( v53 < 0 )
          continue;
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshUVs2;
        if ( !targetPS )
          goto LABEL_73;
        if ( v53 >= SLODWORD(targetPS[1].klass) )
          continue;
        customData2 = this->fields.customData2;
        if ( !customData2 )
          goto LABEL_73;
        if ( i >= customData2->fields._size )
          continue;
        *(UnityEngine_Vector2_o *)&v58.fields.r = System_Collections_Generic_List_Vector2___get_Item(
                                                    (System_Collections_Generic_List_Vector2__o *)targetPS,
                                                    v53,
                                                    (const MethodInfo_44AC8C4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
        v58.fields.b = 0.0;
        v58.fields.a = 0.0;
      }
      else
      {
        if ( customDataType2 != 1 || v53 < 0 )
          continue;
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshColors;
        if ( !targetPS )
          goto LABEL_73;
        if ( v53 >= SLODWORD(targetPS[1].klass) )
          continue;
        customData2 = this->fields.customData2;
        if ( !customData2 )
          goto LABEL_73;
        if ( i >= customData2->fields._size )
          continue;
        v58 = System_Collections_Generic_List_Color___get_Item(
                (System_Collections_Generic_List_Color__o *)targetPS,
                v53,
                (const MethodInfo_43E4BF4 *)Method_System_Collections_Generic_List_Color__get_Item__);
      }
      System_Collections_Generic_List_Vector4___set_Item(
        customData2,
        i,
        (UnityEngine_Vector4_o)v58,
        (const MethodInfo_44B1B0C *)Method_System_Collections_Generic_List_Vector4__set_Item__);
    }
  }
  if ( this->fields.customDataType1 )
  {
    targetPS = this->fields.targetPS;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_ParticleSystem__SetCustomParticleData(targetPS, this->fields.customData1, 0, 0);
  }
  if ( this->fields.customDataType2 )
  {
    targetPS = this->fields.targetPS;
    if ( targetPS )
    {
      UnityEngine_ParticleSystem__SetCustomParticleData(targetPS, this->fields.customData2, 1, 0);
      return;
    }
LABEL_73:
    sub_21FFECC(targetPS, *(_QWORD *)&particleNum);
  }
}


// local variable allocation has failed, the output may be wrong!
void ParticleAttatchMesh__UpdateParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetPS; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v6; // x1
  UnityEngine_ParticleSystem_o *Particles_83621944; // x0
  struct System_Collections_Generic_List_int__o *useVertexIndices; // x8
  int size; // w25
  int32_t v10; // w20
  const MethodInfo *v11; // x2
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *parent; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *nodeTransform; // x23
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_Transform_o *transform; // x23
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x24
  unsigned int lossyScale; // s0
  float v21; // s8
  unsigned int v22; // s0
  float x; // s13
  float v24; // s9
  float y; // s10
  float v26; // s14
  float v27; // s11
  float z; // s12
  float v29; // s0 OVERLAPPED
  float v30; // s1
  float v31; // s2
  float v32; // s8
  float v33; // s9
  float v34; // s10
  float v35; // s11
  float v36; // s12
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v38; // s8
  float v39; // s9
  float v40; // s10
  UnityEngine_ParticleSystem_MainModule_o v41; // x0
  int32_t scalingMode; // w0
  unsigned __int64 v43; // x21
  __int64 v44; // x25
  __int64 v45; // x26
  struct UnityEngine_ParticleSystem_Particle_array *particles; // x27
  int32_t v47; // w22
  unsigned int Item; // s0
  float v49; // s11
  float v50; // s12
  __int64 v51; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593BC7F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC7F = 1;
  }
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  m_ParticleSystem = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(targetPS, 0, 0) )
    return;
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(targetRenderer, 0, 0) )
    return;
  Particles_83621944 = this->fields.targetPS;
  if ( !Particles_83621944 )
    goto LABEL_56;
  Particles_83621944 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__GetParticles_83621944(
                                                         Particles_83621944,
                                                         this->fields.particles,
                                                         0);
  if ( (int)Particles_83621944 < 1 )
    return;
  useVertexIndices = this->fields.useVertexIndices;
  if ( !useVertexIndices )
    goto LABEL_56;
  size = useVertexIndices->fields._size;
  v10 = (int)Particles_83621944 >= size ? useVertexIndices->fields._size : (int)Particles_83621944;
  ParticleAttatchMesh__BakeMesh(this, v6);
  ParticleAttatchMesh__UpdateCustomData(this, v10, v11);
  Particles_83621944 = this->fields.targetPS;
  if ( !Particles_83621944 )
    goto LABEL_56;
  Particles_83621944 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Particles_83621944,
                                                         0);
  if ( !Particles_83621944 )
    goto LABEL_56;
  Particles_83621944 = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Particles_83621944,
                                                         0);
  if ( !Particles_83621944 )
    goto LABEL_56;
  v12 = (UnityEngine_Transform_o *)Particles_83621944;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Particles_83621944, 0);
  nodeTransform = (UnityEngine_Object_o *)this->fields.nodeTransform;
  v16 = parent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(nodeTransform, 0, 0) )
  {
    transform = this->fields.nodeTransform;
  }
  else
  {
    Particles_83621944 = (UnityEngine_ParticleSystem_o *)this->fields.targetRenderer;
    if ( !Particles_83621944 )
      goto LABEL_56;
    Particles_83621944 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Particles_83621944,
                                                           0);
    if ( !Particles_83621944 )
      goto LABEL_56;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Particles_83621944, 0);
  }
  v19 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v12, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  Particles_83621944 = (UnityEngine_ParticleSystem_o *)UnityEngine_Object__op_Inequality(v19, 0, 0);
  if ( ((unsigned __int8)Particles_83621944 & 1) != 0 )
  {
    if ( !transform )
      goto LABEL_56;
    lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0);
    if ( !v16 )
      goto LABEL_56;
    v21 = *(float *)&lossyScale;
    v22 = (unsigned int)UnityEngine_Transform__get_lossyScale(v16, 0);
    x = this->fields.orgParticleScale.fields.x;
    v24 = *(float *)&v22;
    v53 = UnityEngine_Transform__get_lossyScale(transform, 0);
    y = v53.fields.y;
    v54 = UnityEngine_Transform__get_lossyScale(v16, 0);
    v26 = this->fields.orgParticleScale.fields.y;
    v27 = v54.fields.y;
    v55 = UnityEngine_Transform__get_lossyScale(transform, 0);
    z = v55.fields.z;
    v56 = UnityEngine_Transform__get_lossyScale(v16, 0);
    v29 = x * (float)(v21 / v24);
    v30 = v26 * (float)(y / v27);
    v31 = this->fields.orgParticleScale.fields.z * (float)(z / v56.fields.z);
  }
  else
  {
    if ( !transform )
      goto LABEL_56;
    v32 = COERCE_FLOAT(UnityEngine_Transform__get_lossyScale(transform, 0));
    v33 = COERCE_FLOAT(UnityEngine_Transform__get_lossyScale(v12, 0));
    v57 = UnityEngine_Transform__get_lossyScale(transform, 0);
    v34 = v57.fields.y;
    v58 = UnityEngine_Transform__get_lossyScale(v12, 0);
    v35 = v58.fields.y;
    v59 = UnityEngine_Transform__get_lossyScale(transform, 0);
    v36 = v59.fields.z;
    v60 = UnityEngine_Transform__get_lossyScale(v12, 0);
    v29 = v32 / v33;
    v30 = v34 / v35;
    v31 = v36 / v60.fields.z;
  }
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v29, 0);
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  Particles_83621944 = this->fields.targetPS;
  if ( !Particles_83621944 )
LABEL_56:
    sub_21FFECC(Particles_83621944, v6);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v38 = static_fields->oneVector.fields.x;
  v39 = static_fields->oneVector.fields.y;
  v40 = static_fields->oneVector.fields.z;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Particles_83621944, 0).fields.m_ParticleSystem;
  v41.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  scalingMode = UnityEngine_ParticleSystem_MainModule__get_scalingMode(v41, 0);
  if ( scalingMode == 1 )
  {
    localScale = UnityEngine_Transform__get_localScale(v12, 0);
    goto LABEL_40;
  }
  if ( !scalingMode )
  {
    localScale = UnityEngine_Transform__get_lossyScale(v12, 0);
LABEL_40:
    v38 = localScale.fields.x;
    v39 = localScale.fields.y;
    v40 = localScale.fields.z;
  }
  if ( size >= 1 )
  {
    v43 = 0;
    if ( v10 <= 1 )
      v44 = 1;
    else
      v44 = (unsigned int)v10;
    v45 = 32;
    do
    {
      Particles_83621944 = (UnityEngine_ParticleSystem_o *)this->fields.useVertexIndices;
      if ( !Particles_83621944 )
        goto LABEL_56;
      Particles_83621944 = (UnityEngine_ParticleSystem_o *)System_Collections_Generic_List_int___get_Item(
                                                             (System_Collections_Generic_List_int__o *)Particles_83621944,
                                                             v43,
                                                             (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      particles = this->fields.particles;
      if ( !particles )
        goto LABEL_56;
      v47 = (int)Particles_83621944;
      Particles_83621944 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_83621944 )
        goto LABEL_56;
      Item = (unsigned int)System_Collections_Generic_List_Vector3___get_Item(
                             (System_Collections_Generic_List_Vector3__o *)Particles_83621944,
                             v47,
                             (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      Particles_83621944 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_83621944 )
        goto LABEL_56;
      v49 = *(float *)&Item;
      v62 = System_Collections_Generic_List_Vector3___get_Item(
              (System_Collections_Generic_List_Vector3__o *)Particles_83621944,
              v47,
              (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      Particles_83621944 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_83621944 )
        goto LABEL_56;
      v50 = v62.fields.y;
      v63 = System_Collections_Generic_List_Vector3___get_Item(
              (System_Collections_Generic_List_Vector3__o *)Particles_83621944,
              v47,
              (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( v43 >= LODWORD(particles->max_length) )
        sub_21FFED4(v51);
      v64.fields.z = v63.fields.z / v40;
      v64.fields.y = v50 / v39;
      v64.fields.x = v49 / v38;
      UnityEngine_ParticleSystem_Particle__set_position(
        (UnityEngine_ParticleSystem_Particle_o *)((char *)particles + v45),
        v64,
        0);
      ++v43;
      v45 += 132;
    }
    while ( v44 != v43 );
  }
  Particles_83621944 = this->fields.targetPS;
  if ( !Particles_83621944 )
    goto LABEL_56;
  UnityEngine_ParticleSystem__SetParticles_83621420(Particles_83621944, this->fields.particles, v10, 0);
}