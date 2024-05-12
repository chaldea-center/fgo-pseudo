void __fastcall ParticleAttatchMesh___ctor(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ParticleAttatchMesh__BakeMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Renderer_o *targetRenderer; // x21
  UnityEngine_Renderer_c *klass; // x8
  unsigned int v5; // w9
  __int64 v6; // x11
  __int64 v7; // x11
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Renderer_c *v12; // x9
  UnityEngine_SkinnedMeshRenderer_o *v13; // x22
  unsigned int v14; // w11
  __int64 v15; // x10
  UnityEngine_Mesh_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *sharedMesh; // x21
  struct UnityEngine_Mesh_o *v25; // x0
  struct UnityEngine_Mesh_o **p_cacheMesh; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_Vector3__o **p_cacheVertices; // x20
  System_Collections_Generic_List_Vector3__o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_Vector3__o *v41; // x22
  __int64 v42; // x24
  unsigned __int64 v43; // x21
  System_Collections_Generic_List_Vector3__o *v44; // x26
  struct UnityEngine_Mesh_o *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  BattleServantConfConponent_o *v52; // x19
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // t1
  System_Collections_Generic_List_Vector3__o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438A362 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector3__set_Item__);
    sub_B775C4(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_B775C4(&UnityEngine_MeshRenderer_TypeInfo);
    sub_B775C4(&UnityEngine_Mesh_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    byte_438A362 = 1;
  }
  targetRenderer = this->fields.targetRenderer;
  if ( targetRenderer )
  {
    klass = targetRenderer->klass;
    v5 = *(&targetRenderer->klass->_2.bitflags2 + 1);
    v6 = *(&UnityEngine_MeshRenderer_TypeInfo->_2.bitflags2 + 1);
    if ( v5 >= (unsigned int)v6
      && (UnityEngine_MeshRenderer_c *)klass->_2.typeHierarchy[v6 - 1] == UnityEngine_MeshRenderer_TypeInfo )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.targetRenderer, 0LL);
      if ( !gameObject )
        goto LABEL_49;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
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
          v25 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)Component_srcLineSprite, 0LL);
          this->fields.cacheMesh = v25;
          p_cacheMesh = &this->fields.cacheMesh;
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.cacheMesh,
            (System_Int32_array **)v25,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          p_cacheVertices = &this->fields.cacheVertices;
          if ( !this->fields.cacheVertices )
          {
            v34 = (System_Collections_Generic_List_Vector3__o *)sub_B77694(System_Collections_Generic_List_Vector3__TypeInfo);
            System_Collections_Generic_List_Vector3____ctor(
              v34,
              (const MethodInfo_301FA7C *)Method_System_Collections_Generic_List_Vector3___ctor__);
            *p_cacheVertices = v34;
            sub_B77560(
              (BattleServantConfConponent_o *)&this->fields.cacheVertices,
              (System_Int32_array **)v34,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
          gameObject = (UnityEngine_GameObject_o *)*p_cacheMesh;
          if ( !*p_cacheMesh )
            goto LABEL_49;
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *p_cacheVertices, 0LL);
          v41 = *p_cacheVertices;
          if ( !*p_cacheVertices )
            goto LABEL_49;
          v42 = 0LL;
          v43 = 0LL;
          while ( (__int64)v43 < v41->fields._size )
          {
            gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderer;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
                v44 = *p_cacheVertices;
                if ( *p_cacheVertices )
                {
                  if ( v43 >= (unsigned int)v44->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                  if ( gameObject )
                  {
                    v61 = UnityEngine_Transform__TransformPoint(
                            (UnityEngine_Transform_o *)gameObject,
                            *(UnityEngine_Vector3_o *)&v44->fields._items->m_Items[v42].fields.y,
                            0LL);
                    System_Collections_Generic_List_Vector3___set_Item(
                      v41,
                      v43,
                      v61,
                      (const MethodInfo_30204A4 *)Method_System_Collections_Generic_List_Vector3__set_Item__);
                    v41 = *p_cacheVertices;
                    ++v43;
                    ++v42;
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
      v7 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
      if ( v5 >= (unsigned int)v7
        && (UnityEngine_SkinnedMeshRenderer_c *)klass->_2.typeHierarchy[v7 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
      {
        p_bakedMesh = &this->fields.bakedMesh;
        bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bakedMesh, 0LL, 0LL);
        v12 = targetRenderer->klass;
        v13 = 0LL;
        v14 = *(&targetRenderer->klass->_2.bitflags2 + 1);
        v15 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
        if ( v14 >= (unsigned int)v15 )
        {
          if ( (UnityEngine_SkinnedMeshRenderer_c *)v12->_2.typeHierarchy[v15 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            v13 = (UnityEngine_SkinnedMeshRenderer_o *)targetRenderer;
          else
            v13 = 0LL;
        }
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v16 = (UnityEngine_Mesh_o *)sub_B77694(UnityEngine_Mesh_TypeInfo);
          UnityEngine_Mesh___ctor(v16, 0LL);
          *p_bakedMesh = v16;
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.bakedMesh,
            (System_Int32_array **)v16,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          if ( !v13 )
            goto LABEL_49;
        }
        else
        {
          if ( v14 < (unsigned int)v15 )
            goto LABEL_49;
          v13 = (UnityEngine_SkinnedMeshRenderer_o *)targetRenderer;
          if ( (UnityEngine_SkinnedMeshRenderer_c *)v12->_2.typeHierarchy[v15 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
            goto LABEL_49;
        }
        UnityEngine_SkinnedMeshRenderer__BakeMesh_36391408(v13, this->fields.bakedMesh, 1, 0LL);
        v45 = this->fields.bakedMesh;
        this->fields.cacheMesh = v45;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.cacheMesh,
          (System_Int32_array **)v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        cacheVertices = this->fields.cacheVertices;
        v52 = (BattleServantConfConponent_o *)&this->fields.cacheVertices;
        if ( !cacheVertices )
        {
          v54 = (System_Collections_Generic_List_Vector3__o *)sub_B77694(System_Collections_Generic_List_Vector3__TypeInfo);
          System_Collections_Generic_List_Vector3____ctor(
            v54,
            (const MethodInfo_301FA7C *)Method_System_Collections_Generic_List_Vector3___ctor__);
          v52->klass = (BattleServantConfConponent_c *)v54;
          sub_B77560(v52, (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
        }
        gameObject = (UnityEngine_GameObject_o *)*p_bakedMesh;
        if ( *p_bakedMesh )
        {
          UnityEngine_Mesh__GetVertices(
            (UnityEngine_Mesh_o *)gameObject,
            (System_Collections_Generic_List_Vector3__o *)v52->klass,
            0LL);
          return;
        }
LABEL_49:
        sub_B7769C(gameObject, v11);
      }
    }
  }
}


void __fastcall ParticleAttatchMesh__CleanupCustomData(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  this->fields.customData1 = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.customData1, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.customData2 = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.customData2, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.meshColors = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.meshColors, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.meshUVs1 = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.meshUVs1, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.meshUVs2 = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.meshUVs2, 0LL, v27, v28, v29, v30, v31, v32);
}


void __fastcall ParticleAttatchMesh__CleanupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_438A361 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A361 = 1;
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
    v11 = (UnityEngine_Object_o *)*p_bakedMesh;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v11, 0LL);
    *p_bakedMesh = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.bakedMesh, 0LL, v12, v13, v14, v15, v16, v17);
  }
  this->fields.cacheMesh = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.cacheMesh, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.cacheVertices = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.cacheVertices, 0LL, v18, v19, v20, v21, v22, v23);
  this->fields.useVertexIndices = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.useVertexIndices, 0LL, v24, v25, v26, v27, v28, v29);
}


void __fastcall ParticleAttatchMesh__CleanupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Component_o *gameObject; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-18h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v22; // 0:x0.8

  if ( (byte_438A35E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A35E = 1;
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
      sub_B7769C(gameObject, v5);
    }
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
    v22.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(v22, this->fields.orgMaxParticles, 0LL);
    this->fields.targetPS = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.targetPS, 0LL, v13, v14, v15, v16, v17, v18);
  }
  this->fields.particles = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.particles, 0LL, v6, v7, v8, v9, v10, v11);
  ParticleAttatchMesh__CleanupCustomData(this, v19);
  ParticleAttatchMesh__CleanupMesh(this, v20);
}


UnityEngine_ParticleSystem_o *__fastcall ParticleAttatchMesh__GetTargetParticleSystem(
        ParticleAttatchMesh_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetParticleSystem; // x20
  UnityEngine_ParticleSystem_o *result; // x0
  bool IsNullOrEmpty; // w8
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19
  bool v8; // w8

  if ( (byte_438A364 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A364 = 1;
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
    v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                   (UnityEngine_Transform_o *)result,
                                   this->fields.targetParticleSystemPath,
                                   0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
    result = 0LL;
    if ( v8 )
    {
      if ( v7 )
      {
        result = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v7,
                                                   0LL);
        if ( result )
          return (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)result,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      }
LABEL_19:
      sub_B7769C(result, v6);
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
  if ( (byte_438A365 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Vector3__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Vector3__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Vector3___ctor___69374208);
    sub_B775C4(&System_Collections_Generic_HashSet_Vector3__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438A365 = 1;
  }
  sub_B77694(System_Collections_Generic_HashSet_Vector3__TypeInfo);
  JUMPOUT(0x169B114LL);
}


// attributes: thunk
void __fastcall ParticleAttatchMesh__OnDisable(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  ParticleAttatchMesh__CleanupParticle(this, method);
}


int32_t __fastcall ParticleAttatchMesh__SetupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Vector3__o *cacheVertices; // x0
  struct System_Collections_Generic_List_int__o *v7; // x0
  struct System_Collections_Generic_List_int__o **p_useVertexIndices; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_438A360 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A360 = 1;
  }
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetRenderer, 0LL, 0LL) )
  {
    ParticleAttatchMesh__BakeMesh(this, v4);
    cacheVertices = this->fields.cacheVertices;
    if ( cacheVertices )
    {
      v7 = ParticleAttatchMesh__MergeVertexIndices(cacheVertices, v5);
      this->fields.useVertexIndices = v7;
      p_useVertexIndices = &this->fields.useVertexIndices;
      sub_B77560(
        (BattleServantConfConponent_o *)p_useVertexIndices,
        (System_Int32_array **)v7,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      if ( !*p_useVertexIndices )
        sub_B7769C(v15, v16);
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
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  UnityEngine_Object_o *targetRenderer; // x21
  const MethodInfo *v6; // x1
  System_Int32_array **TargetParticleSystem; // x22
  const MethodInfo *v8; // x1
  int32_t v9; // w0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  unsigned int v16; // w21
  __int64 v17; // x1
  UnityEngine_ParticleSystem_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_Particle_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v27; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v28; // 0:x0.8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438A35D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_ParticleSystem_Particle___TypeInfo);
    byte_438A35D = 1;
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
      TargetParticleSystem = (System_Int32_array **)ParticleAttatchMesh__GetTargetParticleSystem(this, v6);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)TargetParticleSystem, 0LL, 0LL) )
      {
        v9 = ParticleAttatchMesh__SetupMesh(this, v8);
        if ( v9 >= 1 )
        {
          v16 = v9;
          *p_targetPS = (struct UnityEngine_ParticleSystem_o *)TargetParticleSystem;
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.targetPS,
            TargetParticleSystem,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
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
          v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          this->fields.orgParticleScale = localScale;
          this->fields.orgMaxParticles = UnityEngine_ParticleSystem_MainModule__get_maxParticles(v27, 0LL);
          v19 = (struct UnityEngine_ParticleSystem_Particle_array *)sub_B775DC(
                                                                      UnityEngine_ParticleSystem_Particle___TypeInfo,
                                                                      v16);
          this->fields.particles = v19;
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.particles,
            (System_Int32_array **)v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          gameObject = this->fields.targetPS;
          if ( !gameObject )
LABEL_23:
            sub_B7769C(gameObject, v17);
          UnityEngine_ParticleSystem__SetParticles_51806548(gameObject, this->fields.particles, v16, 0LL);
          v28.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          UnityEngine_ParticleSystem_MainModule__set_maxParticles(v28, v16, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ParticleAttatchMesh_o *v9; // x19
  System_Collections_Generic_List_Vector4__o **p_customData1; // x21
  System_Collections_Generic_List_Vector4__o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_Vector4__o **p_customData2; // x21
  System_Collections_Generic_List_Vector4__o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t customDataType1; // w8
  System_Collections_Generic_List_Color__o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_Vector2__o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **meshUVs1; // x1
  System_Collections_Generic_List_Vector2__o *v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  signed __int64 v49; // x21
  signed __int64 v50; // x22
  struct System_Collections_Generic_List_int__o *useVertexIndices; // x20
  int32_t v52; // w8
  __int64 v53; // x24
  struct System_Collections_Generic_List_Color__o *meshColors; // x25
  int v55; // w8
  System_Collections_Generic_List_Vector4__o *customData1; // x20
  int v57; // s0
  struct System_Collections_Generic_List_Vector2__o *v61; // x25
  int size; // w8
  int32_t customDataType2; // w8
  struct System_Collections_Generic_List_Color__o *v64; // x25
  int v65; // w8
  System_Collections_Generic_List_Vector4__o *customData2; // x20
  int v67; // s0
  struct System_Collections_Generic_List_Vector2__o *meshUVs2; // x25
  int v72; // w8

  v9 = this;
  if ( (byte_438A363 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector4___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_Color___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector4__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Color__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_Color__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector4__set_Item__);
    sub_B775C4(&System_Collections_Generic_List_Vector4__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_Vector2__TypeInfo);
    this = (ParticleAttatchMesh_o *)sub_B775C4(&System_Collections_Generic_List_Color__TypeInfo);
    byte_438A363 = 1;
  }
  if ( v9->fields.customDataType1 )
  {
    p_customData1 = &v9->fields.customData1;
    if ( !v9->fields.customData1 )
    {
      v11 = (System_Collections_Generic_List_Vector4__o *)sub_B77694(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v11,
        (const MethodInfo_3022C1C *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData1 = v11;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->fields.customData1,
        (System_Int32_array **)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    this = (ParticleAttatchMesh_o *)v9->fields.targetPS;
    if ( !this )
      goto LABEL_83;
    this = (ParticleAttatchMesh_o *)UnityEngine_ParticleSystem__GetCustomParticleData(
                                      (UnityEngine_ParticleSystem_o *)this,
                                      *p_customData1,
                                      0,
                                      0LL);
  }
  if ( v9->fields.customDataType2 )
  {
    p_customData2 = &v9->fields.customData2;
    if ( !v9->fields.customData2 )
    {
      v19 = (System_Collections_Generic_List_Vector4__o *)sub_B77694(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v19,
        (const MethodInfo_3022C1C *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData2 = v19;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->fields.customData2,
        (System_Int32_array **)v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    this = (ParticleAttatchMesh_o *)v9->fields.targetPS;
    if ( !this )
      goto LABEL_83;
    this = (ParticleAttatchMesh_o *)UnityEngine_ParticleSystem__GetCustomParticleData(
                                      (UnityEngine_ParticleSystem_o *)this,
                                      *p_customData2,
                                      1,
                                      0LL);
  }
  customDataType1 = v9->fields.customDataType1;
  if ( customDataType1 == 1 || v9->fields.customDataType2 == 1 )
  {
    if ( !v9->fields.meshColors )
    {
      v27 = (System_Collections_Generic_List_Color__o *)sub_B77694(System_Collections_Generic_List_Color__TypeInfo);
      System_Collections_Generic_List_Color____ctor(
        v27,
        (const MethodInfo_30AB624 *)Method_System_Collections_Generic_List_Color___ctor__);
      v9->fields.meshColors = v27;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->fields.meshColors,
        (System_Int32_array **)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    this = (ParticleAttatchMesh_o *)v9->fields.cacheMesh;
    if ( !this )
      goto LABEL_83;
    UnityEngine_Mesh__GetColors((UnityEngine_Mesh_o *)this, v9->fields.meshColors, 0LL);
    customDataType1 = v9->fields.customDataType1;
  }
  if ( customDataType1 == 2 )
  {
    if ( !v9->fields.meshUVs1 )
    {
      v34 = (System_Collections_Generic_List_Vector2__o *)sub_B77694(System_Collections_Generic_List_Vector2__TypeInfo);
      System_Collections_Generic_List_Vector2____ctor(
        v34,
        (const MethodInfo_301C9E8 *)Method_System_Collections_Generic_List_Vector2___ctor__);
      v9->fields.meshUVs1 = v34;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->fields.meshUVs1,
        (System_Int32_array **)v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    this = (ParticleAttatchMesh_o *)v9->fields.cacheMesh;
    if ( !this )
      goto LABEL_83;
    UnityEngine_Mesh__GetUVs((UnityEngine_Mesh_o *)this, v9->fields.customDataUVIndex1, v9->fields.meshUVs1, 0LL);
  }
  if ( v9->fields.customDataType2 == 2 )
  {
    if ( v9->fields.customDataType1 == 2 && v9->fields.customDataUVIndex2 == v9->fields.customDataUVIndex1 )
    {
      meshUVs1 = (System_Int32_array **)v9->fields.meshUVs1;
      v9->fields.meshUVs2 = (struct System_Collections_Generic_List_Vector2__o *)meshUVs1;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->fields.meshUVs2,
        meshUVs1,
        (System_String_array **)method,
        v3,
        v4,
        v5,
        v6,
        v7);
    }
    else
    {
      if ( !v9->fields.meshUVs2 )
      {
        v42 = (System_Collections_Generic_List_Vector2__o *)sub_B77694(System_Collections_Generic_List_Vector2__TypeInfo);
        System_Collections_Generic_List_Vector2____ctor(
          v42,
          (const MethodInfo_301C9E8 *)Method_System_Collections_Generic_List_Vector2___ctor__);
        v9->fields.meshUVs2 = v42;
        sub_B77560(
          (BattleServantConfConponent_o *)&v9->fields.meshUVs2,
          (System_Int32_array **)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      this = (ParticleAttatchMesh_o *)v9->fields.cacheMesh;
      if ( !this )
        goto LABEL_83;
      UnityEngine_Mesh__GetUVs((UnityEngine_Mesh_o *)this, v9->fields.customDataUVIndex2, v9->fields.meshUVs2, 0LL);
    }
  }
  if ( particleNum >= 1 )
  {
    v49 = 0LL;
    v50 = particleNum;
    do
    {
      useVertexIndices = v9->fields.useVertexIndices;
      if ( !useVertexIndices )
        goto LABEL_83;
      if ( v49 >= (unsigned __int64)(unsigned int)useVertexIndices->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v52 = v9->fields.customDataType1;
      v53 = useVertexIndices->fields._items->m_Items[v49 + 1];
      if ( v52 == 2 )
      {
        if ( (v53 & 0x80000000) == 0 )
        {
          v61 = v9->fields.meshUVs1;
          if ( !v61 )
            goto LABEL_83;
          size = v61->fields._size;
          if ( (int)v53 < size )
          {
            customData1 = v9->fields.customData1;
            if ( !customData1 )
              goto LABEL_83;
            if ( v49 < customData1->fields._size )
            {
              if ( size <= (unsigned int)v53 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              *(UnityEngine_Vector4_o *)&v57 = UnityEngine_Vector4__op_Implicit_51512152(
                                                 *(UnityEngine_Vector2_o *)&v61->fields._items->m_Items[v53].fields.y,
                                                 0LL);
              goto LABEL_55;
            }
          }
        }
      }
      else if ( v52 == 1 && (v53 & 0x80000000) == 0 )
      {
        meshColors = v9->fields.meshColors;
        if ( !meshColors )
          goto LABEL_83;
        v55 = meshColors->fields._size;
        if ( (int)v53 < v55 )
        {
          customData1 = v9->fields.customData1;
          if ( !customData1 )
            goto LABEL_83;
          if ( v49 < customData1->fields._size )
          {
            if ( v55 <= (unsigned int)v53 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            *(UnityEngine_Vector4_o *)&v57 = UnityEngine_Color__op_Implicit(
                                               *(UnityEngine_Color_o *)&meshColors->fields._items->m_Items[v53].fields.g,
                                               0LL);
LABEL_55:
            System_Collections_Generic_List_Vector4___set_Item(
              customData1,
              v49,
              *(UnityEngine_Vector4_o *)&v57,
              (const MethodInfo_302363C *)Method_System_Collections_Generic_List_Vector4__set_Item__);
          }
        }
      }
      customDataType2 = v9->fields.customDataType2;
      if ( customDataType2 == 2 )
      {
        if ( (v53 & 0x80000000) != 0 )
          goto LABEL_75;
        meshUVs2 = v9->fields.meshUVs2;
        if ( !meshUVs2 )
          goto LABEL_83;
        v72 = meshUVs2->fields._size;
        if ( (int)v53 >= v72 )
          goto LABEL_75;
        customData2 = v9->fields.customData2;
        if ( !customData2 )
          goto LABEL_83;
        if ( v49 >= customData2->fields._size )
          goto LABEL_75;
        if ( v72 <= (unsigned int)v53 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        *(UnityEngine_Vector4_o *)&v67 = UnityEngine_Vector4__op_Implicit_51512152(
                                           *(UnityEngine_Vector2_o *)&meshUVs2->fields._items->m_Items[v53].fields.y,
                                           0LL);
      }
      else
      {
        if ( customDataType2 != 1 || (v53 & 0x80000000) != 0 )
          goto LABEL_75;
        v64 = v9->fields.meshColors;
        if ( !v64 )
          goto LABEL_83;
        v65 = v64->fields._size;
        if ( (int)v53 >= v65 )
          goto LABEL_75;
        customData2 = v9->fields.customData2;
        if ( !customData2 )
          goto LABEL_83;
        if ( v49 >= customData2->fields._size )
          goto LABEL_75;
        if ( v65 <= (unsigned int)v53 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        *(UnityEngine_Vector4_o *)&v67 = UnityEngine_Color__op_Implicit(
                                           *(UnityEngine_Color_o *)&v64->fields._items->m_Items[v53].fields.g,
                                           0LL);
      }
      System_Collections_Generic_List_Vector4___set_Item(
        customData2,
        v49,
        *(UnityEngine_Vector4_o *)&v67,
        (const MethodInfo_302363C *)Method_System_Collections_Generic_List_Vector4__set_Item__);
LABEL_75:
      ++v49;
    }
    while ( v49 < v50 );
  }
  if ( v9->fields.customDataType1 )
  {
    this = (ParticleAttatchMesh_o *)v9->fields.targetPS;
    if ( !this )
      goto LABEL_83;
    UnityEngine_ParticleSystem__SetCustomParticleData(
      (UnityEngine_ParticleSystem_o *)this,
      v9->fields.customData1,
      0,
      0LL);
  }
  if ( v9->fields.customDataType2 )
  {
    this = (ParticleAttatchMesh_o *)v9->fields.targetPS;
    if ( this )
    {
      UnityEngine_ParticleSystem__SetCustomParticleData(
        (UnityEngine_ParticleSystem_o *)this,
        v9->fields.customData2,
        1,
        0LL);
      return;
    }
LABEL_83:
    sub_B7769C(this, *(_QWORD *)&particleNum);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ParticleAttatchMesh__UpdateParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetPS; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v5; // x1
  UnityEngine_ParticleSystem_o *Particles_51806836; // x0
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
  unsigned int lossyScale; // s0
  float x; // s13
  float v21; // s9
  float y; // s10
  float v23; // s14
  float v24; // s11
  float z; // s12
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s9
  float v30; // s10
  float v31; // s11
  float v32; // s12
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s8
  float v37; // s9
  float v38; // s10
  float v39; // s0
  float v40; // s1
  float v41; // s2
  unsigned __int64 v42; // x21
  __int64 v43; // x23
  struct System_Collections_Generic_List_int__o *v44; // x26
  struct UnityEngine_ParticleSystem_Particle_array *particles; // x25
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // x27
  __int64 v47; // x26
  __int64 v48; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v50; // 0:x0.8
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438A35F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A35F = 1;
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
  Particles_51806836 = this->fields.targetPS;
  if ( !Particles_51806836 )
    goto LABEL_56;
  Particles_51806836 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__GetParticles_51806836(
                                                         Particles_51806836,
                                                         this->fields.particles,
                                                         0LL);
  if ( (int)Particles_51806836 < 1 )
    return;
  useVertexIndices = this->fields.useVertexIndices;
  if ( !useVertexIndices )
    goto LABEL_56;
  size = useVertexIndices->fields._size;
  v9 = (int)Particles_51806836 <= size ? (int)Particles_51806836 : size;
  ParticleAttatchMesh__BakeMesh(this, v5);
  ParticleAttatchMesh__UpdateCustomData(this, v9, v10);
  Particles_51806836 = this->fields.targetPS;
  if ( !Particles_51806836 )
    goto LABEL_56;
  Particles_51806836 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Particles_51806836,
                                                         0LL);
  if ( !Particles_51806836 )
    goto LABEL_56;
  Particles_51806836 = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Particles_51806836,
                                                         0LL);
  if ( !Particles_51806836 )
    goto LABEL_56;
  v11 = (UnityEngine_Transform_o *)Particles_51806836;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Particles_51806836, 0LL);
  nodeTransform = (UnityEngine_Object_o *)this->fields.nodeTransform;
  v14 = parent;
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
    Particles_51806836 = (UnityEngine_ParticleSystem_o *)this->fields.targetRenderer;
    if ( !Particles_51806836 )
      goto LABEL_56;
    Particles_51806836 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Particles_51806836,
                                                           0LL);
    if ( !Particles_51806836 )
      goto LABEL_56;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Particles_51806836, 0LL);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v11, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Particles_51806836 = (UnityEngine_ParticleSystem_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
  if ( !transform )
    goto LABEL_56;
  v17 = (char)Particles_51806836;
  LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL);
  if ( (v17 & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_56;
    lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale(v14, 0LL);
    x = this->fields.orgParticleScale.fields.x;
    v21 = *(float *)&lossyScale;
    v51 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    y = v51.fields.y;
    v52 = UnityEngine_Transform__get_lossyScale(v14, 0LL);
    v23 = this->fields.orgParticleScale.fields.y;
    v24 = v52.fields.y;
    v53 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    z = v53.fields.z;
    v54 = UnityEngine_Transform__get_lossyScale(v14, 0LL);
    v26 = x * (float)(v18 / v21);
    v27 = v23 * (float)(y / v24);
    v28 = this->fields.orgParticleScale.fields.z * (float)(z / v54.fields.z);
  }
  else
  {
    v29 = COERCE_FLOAT(UnityEngine_Transform__get_lossyScale(v11, 0LL));
    v55 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    v30 = v55.fields.y;
    v56 = UnityEngine_Transform__get_lossyScale(v11, 0LL);
    v31 = v56.fields.y;
    v57 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    v32 = v57.fields.z;
    v58 = UnityEngine_Transform__get_lossyScale(v11, 0LL);
    v26 = v18 / v29;
    v27 = v30 / v31;
    v28 = v32 / v58.fields.z;
  }
  UnityEngine_Transform__set_localScale(v11, *(UnityEngine_Vector3_o *)&v26, 0LL);
  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL);
  Particles_51806836 = this->fields.targetPS;
  if ( !Particles_51806836 )
LABEL_56:
    sub_B7769C(Particles_51806836, v5);
  v36 = v33;
  v37 = v34;
  v38 = v35;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Particles_51806836, 0LL).fields.m_ParticleSystem;
  v50.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  Particles_51806836 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem_MainModule__get_scalingMode(v50, 0LL);
  if ( (_DWORD)Particles_51806836 == 1 )
  {
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localScale(v11, 0LL);
    goto LABEL_41;
  }
  if ( !(_DWORD)Particles_51806836 )
  {
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_lossyScale(v11, 0LL);
LABEL_41:
    v36 = v39;
    v37 = v40;
    v38 = v41;
  }
  if ( v9 >= 1 )
  {
    v42 = 0LL;
    v43 = 32LL;
    do
    {
      v44 = this->fields.useVertexIndices;
      if ( !v44 )
        goto LABEL_56;
      if ( v42 >= (unsigned int)v44->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      particles = this->fields.particles;
      if ( !particles )
        goto LABEL_56;
      cacheVertices = this->fields.cacheVertices;
      if ( !cacheVertices )
        goto LABEL_56;
      v47 = v44->fields._items->m_Items[v42 + 1];
      if ( cacheVertices->fields._size <= (unsigned int)v47 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( v42 >= particles->max_length )
      {
        v48 = sub_B776C8(Particles_51806836);
        sub_B77668(v48, 0LL);
      }
      v59.fields.y = cacheVertices->fields._items->m_Items[v47].fields.z / v37;
      v59.fields.x = cacheVertices->fields._items->m_Items[v47].fields.y / v36;
      v59.fields.z = cacheVertices->fields._items->m_Items[v47 + 1].fields.x / v38;
      UnityEngine_ParticleSystem_Particle__set_position(
        (UnityEngine_ParticleSystem_Particle_o *)((char *)particles + v43),
        v59,
        0LL);
      ++v42;
      v43 += 132LL;
    }
    while ( (__int64)v42 < v9 );
  }
  Particles_51806836 = this->fields.targetPS;
  if ( !Particles_51806836 )
    goto LABEL_56;
  UnityEngine_ParticleSystem__SetParticles_51806548(Particles_51806836, this->fields.particles, v9, 0LL);
}