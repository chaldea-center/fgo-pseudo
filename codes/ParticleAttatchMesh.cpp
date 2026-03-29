void ParticleAttatchMesh___ctor(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ParticleAttatchMesh__BakeMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Renderer_o *targetRenderer; // x21
  UnityEngine_Renderer_c *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v6; // x11
  __int64 v7; // x11
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_SkinnedMeshRenderer_o *v12; // x22
  __int64 v13; // x10
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *sharedMesh; // x21
  struct UnityEngine_Mesh_o *v16; // x0
  struct UnityEngine_Mesh_o **p_cacheMesh; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_Vector3__o **p_cacheVertices; // x20
  System_Collections_Generic_List_Vector3__o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_List_Vector3__o *v32; // x22
  int32_t v33; // w21
  UnityEngine_Transform_o *v34; // x23
  UnityEngine_Mesh_o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct UnityEngine_Mesh_o *v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  GrandQuestFolderBoardItem_o *v49; // x19
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // t1
  System_Collections_Generic_List_Vector3__o *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D33EB0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C93AD4(&UnityEngine_MeshRenderer_TypeInfo);
    sub_1C93AD4(&UnityEngine_Mesh_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    byte_4D33EB0 = 1;
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
        goto LABEL_44;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_44;
        sharedMesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(
                                               (UnityEngine_MeshFilter_o *)Component_object,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(sharedMesh, 0, 0) )
        {
          v16 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)Component_object, 0);
          this->fields.cacheMesh = v16;
          p_cacheMesh = &this->fields.cacheMesh;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.cacheMesh,
            (int32_t)v16,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          p_cacheVertices = &this->fields.cacheVertices;
          if ( !this->fields.cacheVertices )
          {
            v25 = (System_Collections_Generic_List_Vector3__o *)sub_1C93D20(System_Collections_Generic_List_Vector3__TypeInfo);
            System_Collections_Generic_List_Vector3____ctor(
              v25,
              (const MethodInfo_38F90A8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
            *p_cacheVertices = v25;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields.cacheVertices,
              (int32_t)v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
          }
          gameObject = (UnityEngine_GameObject_o *)*p_cacheMesh;
          if ( !*p_cacheMesh )
            goto LABEL_44;
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *p_cacheVertices, 0);
          v32 = *p_cacheVertices;
          if ( !*p_cacheVertices )
            goto LABEL_44;
          v33 = 0;
          while ( v33 < v32->fields._size )
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
                  v34 = (UnityEngine_Transform_o *)gameObject;
                  Item = System_Collections_Generic_List_Vector3___get_Item(
                           *p_cacheVertices,
                           v33,
                           (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
                  if ( v34 )
                  {
                    v59 = UnityEngine_Transform__TransformPoint(v34, Item, 0);
                    System_Collections_Generic_List_Vector3___set_Item(
                      v32,
                      v33,
                      v59,
                      (const MethodInfo_38F966C *)Method_System_Collections_Generic_List_Vector3__set_Item__);
                    v32 = *p_cacheVertices;
                    ++v33;
                    if ( *p_cacheVertices )
                      continue;
                  }
                }
              }
            }
            goto LABEL_44;
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bakedMesh, 0, 0);
        v12 = 0;
        v13 = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
        if ( targetRenderer->klass->_2.naturalAligment >= (unsigned int)v13 )
        {
          if ( (UnityEngine_SkinnedMeshRenderer_c *)targetRenderer->klass->_2.typeHierarchy[v13 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            v12 = (UnityEngine_SkinnedMeshRenderer_o *)targetRenderer;
          else
            v12 = 0;
          if ( ((unsigned __int8)gameObject & 1) == 0 )
          {
LABEL_12:
            if ( !v12 )
              goto LABEL_44;
LABEL_40:
            UnityEngine_SkinnedMeshRenderer__BakeMesh_71992528(v12, this->fields.bakedMesh, 1, 0);
            v42 = this->fields.bakedMesh;
            this->fields.cacheMesh = v42;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields.cacheMesh,
              (int32_t)v42,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
            cacheVertices = this->fields.cacheVertices;
            v49 = (GrandQuestFolderBoardItem_o *)&this->fields.cacheVertices;
            if ( !cacheVertices )
            {
              v51 = (System_Collections_Generic_List_Vector3__o *)sub_1C93D20(System_Collections_Generic_List_Vector3__TypeInfo);
              System_Collections_Generic_List_Vector3____ctor(
                v51,
                (const MethodInfo_38F90A8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
              v49->klass = (GrandQuestFolderBoardItem_c *)v51;
              sub_1C93A78(v49, (int32_t)v51, v52, v53, v54, v55, v56, v57);
            }
            gameObject = (UnityEngine_GameObject_o *)*p_bakedMesh;
            if ( *p_bakedMesh )
            {
              UnityEngine_Mesh__GetVertices(
                (UnityEngine_Mesh_o *)gameObject,
                (System_Collections_Generic_List_Vector3__o *)v49->klass,
                0);
              return;
            }
LABEL_44:
            sub_1C93D2C(gameObject, v11);
          }
        }
        else if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          goto LABEL_12;
        }
        v35 = (UnityEngine_Mesh_o *)sub_1C93D20(UnityEngine_Mesh_TypeInfo);
        UnityEngine_Mesh___ctor(v35, 0);
        *p_bakedMesh = v35;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bakedMesh, (int32_t)v35, v36, v37, v38, v39, v40, v41);
        if ( !v12 )
          goto LABEL_44;
        goto LABEL_40;
      }
    }
  }
}


void ParticleAttatchMesh__CleanupCustomData(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  this->fields.customData1 = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.customData1, 0, v2, v3, v4, v5, v6, v7);
  this->fields.customData2 = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.customData2, 0, v9, v10, v11, v12, v13, v14);
  this->fields.meshColors = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.meshColors, 0, v15, v16, v17, v18, v19, v20);
  this->fields.meshUVs1 = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.meshUVs1, 0, v21, v22, v23, v24, v25, v26);
  this->fields.meshUVs2 = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.meshUVs2, 0, v27, v28, v29, v30, v31, v32);
}


void ParticleAttatchMesh__CleanupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D33EAF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33EAF = 1;
  }
  p_bakedMesh = &this->fields.bakedMesh;
  bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bakedMesh, 0, 0) )
  {
    v11 = (UnityEngine_Object_o *)*p_bakedMesh;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v11, 0);
    *p_bakedMesh = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bakedMesh, 0, v12, v13, v14, v15, v16, v17);
  }
  this->fields.cacheMesh = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cacheMesh, 0, v5, v6, v7, v8, v9, v10);
  this->fields.cacheVertices = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cacheVertices, 0, v18, v19, v20, v21, v22, v23);
  this->fields.useVertexIndices = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.useVertexIndices, 0, v24, v25, v26, v27, v28, v29);
}


void ParticleAttatchMesh__CleanupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Component_o *gameObject; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D33EAC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33EAC = 1;
  }
  m_ParticleSystem = 0;
  p_targetPS = &this->fields.targetPS;
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C93D2C(gameObject, v5);
    }
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)gameObject, 0).fields.m_ParticleSystem;
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(
      (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
      this->fields.orgMaxParticles,
      0);
    this->fields.targetPS = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.targetPS, 0, v13, v14, v15, v16, v17, v18);
  }
  this->fields.particles = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.particles, 0, v6, v7, v8, v9, v10, v11);
  ParticleAttatchMesh__CleanupCustomData(this, v19);
  ParticleAttatchMesh__CleanupMesh(this, v20);
}


UnityEngine_ParticleSystem_o *ParticleAttatchMesh__GetTargetParticleSystem(
        ParticleAttatchMesh_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetParticleSystem; // x20
  UnityEngine_ParticleSystem_o *result; // x0
  bool IsNullOrEmpty; // w8
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19
  bool v8; // w8

  if ( (byte_4D33EB2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33EB2 = 1;
  }
  targetParticleSystem = (UnityEngine_Object_o *)this->fields.targetParticleSystem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                   (UnityEngine_Transform_o *)result,
                                   this->fields.targetParticleSystemPath,
                                   0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality(v7, 0, 0);
    result = 0;
    if ( v8 )
    {
      if ( v7 )
      {
        result = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
        if ( result )
          return (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)result,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      }
LABEL_17:
      sub_1C93D2C(result, v6);
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
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  UnityEngine_Vector3_o Item; // 0:kr00_12.12

  if ( (byte_4D33EB3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Vector3__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Vector3__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Vector3___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_Vector3__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D33EB3 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_Vector3__o *)sub_1C93D20(System_Collections_Generic_HashSet_Vector3__TypeInfo);
  System_Collections_Generic_HashSet_Vector3____ctor(
    v3,
    (const MethodInfo_3734078 *)Method_System_Collections_Generic_HashSet_Vector3___ctor__);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
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
               (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !v3 )
        break;
      if ( !System_Collections_Generic_HashSet_Vector3___Contains(
              v3,
              Item,
              (const MethodInfo_3734770 *)Method_System_Collections_Generic_HashSet_Vector3__Contains__) )
      {
        v5 = System_Collections_Generic_HashSet_Vector3___Add(
               v3,
               Item,
               (const MethodInfo_37352BC *)Method_System_Collections_Generic_HashSet_Vector3__Add__);
        if ( !v4 )
          break;
        items = v4->fields._items;
        v9 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            v7,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
    sub_1C93D2C(v5, v6);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4D33EAE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33EAE = 1;
  }
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetRenderer, 0, 0) )
  {
    ParticleAttatchMesh__BakeMesh(this, v4);
    cacheVertices = this->fields.cacheVertices;
    if ( cacheVertices )
    {
      v7 = ParticleAttatchMesh__MergeVertexIndices(cacheVertices, v5);
      this->fields.useVertexIndices = v7;
      p_useVertexIndices = &this->fields.useVertexIndices;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p_useVertexIndices, (int32_t)v7, v9, v10, v11, v12, v13, v14);
      if ( !*p_useVertexIndices )
        sub_1C93D2C(v15, v16);
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
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  UnityEngine_Object_o *targetRenderer; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *TargetParticleSystem; // x22
  const MethodInfo *v8; // x1
  int32_t v9; // w0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  unsigned int v16; // w21
  __int64 v17; // x1
  UnityEngine_ParticleSystem_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_Particle_array *v19; // x0
  struct UnityEngine_ParticleSystem_Particle_array **p_particles; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D33EAB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_ParticleSystem_Particle___TypeInfo);
    byte_4D33EAB = 1;
  }
  p_targetPS = &this->fields.targetPS;
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetPS, 0, 0) )
  {
    targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetRenderer, 0, 0) )
    {
      TargetParticleSystem = (UnityEngine_Object_o *)ParticleAttatchMesh__GetTargetParticleSystem(this, v6);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(TargetParticleSystem, 0, 0) )
      {
        v9 = ParticleAttatchMesh__SetupMesh(this, v8);
        if ( v9 >= 1 )
        {
          v16 = v9;
          *p_targetPS = (struct UnityEngine_ParticleSystem_o *)TargetParticleSystem;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.targetPS,
            (int32_t)TargetParticleSystem,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
          gameObject = *p_targetPS;
          if ( !*p_targetPS )
            goto LABEL_20;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(gameObject, 0).fields.m_ParticleSystem;
          gameObject = *p_targetPS;
          if ( !*p_targetPS )
            goto LABEL_20;
          gameObject = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0);
          if ( !gameObject )
            goto LABEL_20;
          gameObject = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)gameObject,
                                                         0);
          if ( !gameObject
            || (this->fields.orgParticleScale = UnityEngine_Transform__get_localScale(
                                                  (UnityEngine_Transform_o *)gameObject,
                                                  0),
                this->fields.orgMaxParticles = UnityEngine_ParticleSystem_MainModule__get_maxParticles(
                                                 (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
                                                 0),
                v19 = (struct UnityEngine_ParticleSystem_Particle_array *)sub_1C93B7C(
                                                                            UnityEngine_ParticleSystem_Particle___TypeInfo,
                                                                            v16),
                this->fields.particles = v19,
                p_particles = &this->fields.particles,
                sub_1C93A78((GrandQuestFolderBoardItem_o *)p_particles, (int32_t)v19, v21, v22, v23, v24, v25, v26),
                (gameObject = (UnityEngine_ParticleSystem_o *)*(p_particles - 1)) == 0) )
          {
LABEL_20:
            sub_1C93D2C(gameObject, v17);
          }
          UnityEngine_ParticleSystem__SetParticles_72404632(gameObject, *p_particles, v16, 0);
          UnityEngine_ParticleSystem_MainModule__set_maxParticles(
            (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
            v16,
            0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_Vector4__o **p_customData1; // x21
  System_Collections_Generic_List_Vector4__o *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_ParticleSystem_o *targetPS; // x0
  System_Collections_Generic_List_Vector4__o **p_customData2; // x21
  System_Collections_Generic_List_Vector4__o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t customDataType1; // w8
  System_Collections_Generic_List_Color__o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_List_Vector2__o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Collections_Generic_List_Vector2__o *meshUVs1; // x1
  System_Collections_Generic_List_Vector2__o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t i; // w21
  int32_t Item; // w0
  int32_t v52; // w8
  int32_t v53; // w22
  struct System_Collections_Generic_List_Vector4__o *customData1; // x23
  const MethodInfo_38FC010 *v55; // x2
  int32_t customDataType2; // w8
  struct System_Collections_Generic_List_Vector4__o *customData2; // x23
  const MethodInfo_38FC010 *v58; // x2
  UnityEngine_Vector4_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D33EB1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector4___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Color___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector4__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Color__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Color__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector4__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_Color__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Vector4__TypeInfo);
    byte_4D33EB1 = 1;
  }
  if ( this->fields.customDataType1 )
  {
    p_customData1 = &this->fields.customData1;
    if ( !this->fields.customData1 )
    {
      v11 = (System_Collections_Generic_List_Vector4__o *)sub_1C93D20(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v11,
        (const MethodInfo_38FBA50 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData1 = v11;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.customData1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
      v20 = (System_Collections_Generic_List_Vector4__o *)sub_1C93D20(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v20,
        (const MethodInfo_38FBA50 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData2 = v20;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.customData2, (int32_t)v20, v21, v22, v23, v24, v25, v26);
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
      v28 = (System_Collections_Generic_List_Color__o *)sub_1C93D20(System_Collections_Generic_List_Color__TypeInfo);
      System_Collections_Generic_List_Color____ctor(
        v28,
        (const MethodInfo_383A630 *)Method_System_Collections_Generic_List_Color___ctor__);
      this->fields.meshColors = v28;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.meshColors, (int32_t)v28, v29, v30, v31, v32, v33, v34);
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
      v35 = (System_Collections_Generic_List_Vector2__o *)sub_1C93D20(System_Collections_Generic_List_Vector2__TypeInfo);
      System_Collections_Generic_List_Vector2____ctor(
        v35,
        (const MethodInfo_38F67FC *)Method_System_Collections_Generic_List_Vector2___ctor__);
      this->fields.meshUVs1 = v35;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.meshUVs1, (int32_t)v35, v36, v37, v38, v39, v40, v41);
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.meshUVs2,
        (int32_t)meshUVs1,
        (int32_t)method,
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
        v43 = (System_Collections_Generic_List_Vector2__o *)sub_1C93D20(System_Collections_Generic_List_Vector2__TypeInfo);
        System_Collections_Generic_List_Vector2____ctor(
          v43,
          (const MethodInfo_38F67FC *)Method_System_Collections_Generic_List_Vector2___ctor__);
        this->fields.meshUVs2 = v43;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.meshUVs2, (int32_t)v43, v44, v45, v46, v47, v48, v49);
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
               (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
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
              *(UnityEngine_Vector2_o *)&v59.fields.x = System_Collections_Generic_List_Vector2___get_Item(
                                                          (System_Collections_Generic_List_Vector2__o *)targetPS,
                                                          v53,
                                                          (const MethodInfo_38F6D60 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              v55 = (const MethodInfo_38FC010 *)Method_System_Collections_Generic_List_Vector4__set_Item__;
              v59.fields.z = 0.0;
              v59.fields.w = 0.0;
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
            v59 = (UnityEngine_Vector4_o)System_Collections_Generic_List_Color___get_Item(
                                           (System_Collections_Generic_List_Color__o *)targetPS,
                                           v53,
                                           (const MethodInfo_383AB94 *)Method_System_Collections_Generic_List_Color__get_Item__);
            v55 = (const MethodInfo_38FC010 *)Method_System_Collections_Generic_List_Vector4__set_Item__;
LABEL_49:
            System_Collections_Generic_List_Vector4___set_Item(customData1, i, v59, v55);
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
        *(UnityEngine_Vector2_o *)&v60.fields.x = System_Collections_Generic_List_Vector2___get_Item(
                                                    (System_Collections_Generic_List_Vector2__o *)targetPS,
                                                    v53,
                                                    (const MethodInfo_38F6D60 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
        v58 = (const MethodInfo_38FC010 *)Method_System_Collections_Generic_List_Vector4__set_Item__;
        v60.fields.z = 0.0;
        v60.fields.w = 0.0;
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
        v60 = (UnityEngine_Vector4_o)System_Collections_Generic_List_Color___get_Item(
                                       (System_Collections_Generic_List_Color__o *)targetPS,
                                       v53,
                                       (const MethodInfo_383AB94 *)Method_System_Collections_Generic_List_Color__get_Item__);
        v58 = (const MethodInfo_38FC010 *)Method_System_Collections_Generic_List_Vector4__set_Item__;
      }
      System_Collections_Generic_List_Vector4___set_Item(customData2, i, v60, v58);
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
    sub_1C93D2C(targetPS, *(_QWORD *)&particleNum);
  }
}


void ParticleAttatchMesh__UpdateParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetPS; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v5; // x1
  UnityEngine_ParticleSystem_o *Particles_72404900; // x0
  struct System_Collections_Generic_List_int__o *useVertexIndices; // x8
  int size; // w8
  int32_t v9; // w20
  const MethodInfo *v10; // x2
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *nodeTransform; // x23
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v16; // x24
  char v17; // w24
  float v18; // s8
  float x; // s13
  float v20; // s9
  float v21; // s10
  float v22; // s14
  float v23; // s11
  float z; // s12
  float v27; // s9
  float v28; // s10
  float v29; // s11
  float v30; // s12
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v32; // s8
  float v33; // s9
  float v34; // s10
  int32_t scalingMode; // w0
  unsigned __int64 v36; // x21
  __int64 v37; // x24
  struct UnityEngine_ParticleSystem_Particle_array *particles; // x27
  int32_t v39; // w22
  float v40; // s11
  float v41; // s12
  unsigned int lossyScale; // s0
  float y; // s1
  float v44; // s2
  float v45; // s2
  float v46; // s0
  float v47; // s1
  float v48; // s2
  unsigned int Item; // s0
  float v50; // s1
  __int64 v51; // x0
  float v52; // s2
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v54; // 0:krB4_12.12
  UnityEngine_Vector3_o localScale; // 0:krC0_12.12
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D33EAD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33EAD = 1;
  }
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetPS, 0, 0) )
    return;
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetRenderer, 0, 0) )
    return;
  Particles_72404900 = this->fields.targetPS;
  if ( !Particles_72404900 )
    goto LABEL_52;
  Particles_72404900 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__GetParticles_72404900(
                                                         Particles_72404900,
                                                         this->fields.particles,
                                                         0);
  if ( (int)Particles_72404900 < 1 )
    return;
  useVertexIndices = this->fields.useVertexIndices;
  if ( !useVertexIndices )
    goto LABEL_52;
  size = useVertexIndices->fields._size;
  v9 = (int)Particles_72404900 <= size ? (int)Particles_72404900 : size;
  ParticleAttatchMesh__BakeMesh(this, v5);
  ParticleAttatchMesh__UpdateCustomData(this, v9, v10);
  Particles_72404900 = this->fields.targetPS;
  if ( !Particles_72404900 )
    goto LABEL_52;
  Particles_72404900 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Particles_72404900,
                                                         0);
  if ( !Particles_72404900 )
    goto LABEL_52;
  Particles_72404900 = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Particles_72404900,
                                                         0);
  if ( !Particles_72404900 )
    goto LABEL_52;
  v11 = (UnityEngine_Transform_o *)Particles_72404900;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Particles_72404900, 0);
  nodeTransform = (UnityEngine_Object_o *)this->fields.nodeTransform;
  v14 = parent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nodeTransform, 0, 0) )
  {
    transform = this->fields.nodeTransform;
  }
  else
  {
    Particles_72404900 = (UnityEngine_ParticleSystem_o *)this->fields.targetRenderer;
    if ( !Particles_72404900 )
      goto LABEL_52;
    Particles_72404900 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Particles_72404900,
                                                           0);
    if ( !Particles_72404900 )
      goto LABEL_52;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Particles_72404900, 0);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v11, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Particles_72404900 = (UnityEngine_ParticleSystem_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
  if ( !transform )
    goto LABEL_52;
  v17 = (char)Particles_72404900;
  LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0);
  if ( (v17 & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_52;
    lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale(v14, 0);
    x = this->fields.orgParticleScale.fields.x;
    v20 = *(float *)&lossyScale;
    v21 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale(transform, 0).fields.y));
    y = UnityEngine_Transform__get_lossyScale(v14, 0).fields.y;
    v22 = this->fields.orgParticleScale.fields.y;
    v23 = y;
    z = UnityEngine_Transform__get_lossyScale(transform, 0).fields.z;
    v44 = UnityEngine_Transform__get_lossyScale(v14, 0).fields.z;
    v56.fields.x = x * (float)(v18 / v20);
    v56.fields.y = v22 * (float)(v21 / v23);
    v56.fields.z = this->fields.orgParticleScale.fields.z * (float)(z / v44);
  }
  else
  {
    v27 = COERCE_FLOAT(UnityEngine_Transform__get_lossyScale(v11, 0));
    v28 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale(transform, 0).fields.y));
    v29 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale(v11, 0).fields.y));
    v30 = UnityEngine_Transform__get_lossyScale(transform, 0).fields.z;
    v45 = UnityEngine_Transform__get_lossyScale(v11, 0).fields.z;
    v56.fields.x = v18 / v27;
    v56.fields.y = v28 / v29;
    v56.fields.z = v30 / v45;
  }
  UnityEngine_Transform__set_localScale(v11, v56, 0);
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  Particles_72404900 = this->fields.targetPS;
  if ( !Particles_72404900 )
LABEL_52:
    sub_1C93D2C(Particles_72404900, v5);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v32 = static_fields->oneVector.fields.x;
  v33 = static_fields->oneVector.fields.y;
  v34 = static_fields->oneVector.fields.z;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Particles_72404900, 0).fields.m_ParticleSystem;
  scalingMode = UnityEngine_ParticleSystem_MainModule__get_scalingMode(
                  (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
                  0);
  if ( scalingMode == 1 )
  {
    localScale = UnityEngine_Transform__get_localScale(v11, 0);
    v46 = localScale.fields.x;
    v47 = localScale.fields.y;
    v48 = localScale.fields.z;
    goto LABEL_39;
  }
  if ( !scalingMode )
  {
    v54 = UnityEngine_Transform__get_lossyScale(v11, 0);
    v46 = v54.fields.x;
    v47 = v54.fields.y;
    v48 = v54.fields.z;
LABEL_39:
    v32 = v46;
    v33 = v47;
    v34 = v48;
  }
  if ( v9 >= 1 )
  {
    v36 = 0;
    v37 = 32;
    do
    {
      Particles_72404900 = (UnityEngine_ParticleSystem_o *)this->fields.useVertexIndices;
      if ( !Particles_72404900 )
        goto LABEL_52;
      Particles_72404900 = (UnityEngine_ParticleSystem_o *)System_Collections_Generic_List_int___get_Item(
                                                             (System_Collections_Generic_List_int__o *)Particles_72404900,
                                                             v36,
                                                             (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      particles = this->fields.particles;
      if ( !particles )
        goto LABEL_52;
      v39 = (int)Particles_72404900;
      Particles_72404900 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_72404900 )
        goto LABEL_52;
      Item = (unsigned int)System_Collections_Generic_List_Vector3___get_Item(
                             (System_Collections_Generic_List_Vector3__o *)Particles_72404900,
                             v39,
                             (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      Particles_72404900 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_72404900 )
        goto LABEL_52;
      v40 = *(float *)&Item;
      v50 = System_Collections_Generic_List_Vector3___get_Item(
              (System_Collections_Generic_List_Vector3__o *)Particles_72404900,
              v39,
              (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__).fields.y;
      Particles_72404900 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_72404900 )
        goto LABEL_52;
      v41 = v50;
      v52 = System_Collections_Generic_List_Vector3___get_Item(
              (System_Collections_Generic_List_Vector3__o *)Particles_72404900,
              v39,
              (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__).fields.z;
      if ( v36 >= LODWORD(particles->max_length) )
        sub_1C93D34(v51);
      v57.fields.z = v52 / v34;
      v57.fields.y = v41 / v33;
      v57.fields.x = v40 / v32;
      UnityEngine_ParticleSystem_Particle__set_position(
        (UnityEngine_ParticleSystem_Particle_o *)((char *)particles + v37),
        v57,
        0);
      ++v36;
      v37 += 132;
    }
    while ( v9 != v36 );
  }
  Particles_72404900 = this->fields.targetPS;
  if ( !Particles_72404900 )
    goto LABEL_52;
  UnityEngine_ParticleSystem__SetParticles_72404632(Particles_72404900, this->fields.particles, v9, 0);
}