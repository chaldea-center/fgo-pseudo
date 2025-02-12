void __fastcall ParticleAttatchMesh___ctor(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  unsigned int methodPtr_low; // w9
  __int64 v15; // x11
  __int64 v16; // x11
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_SkinnedMeshRenderer_o *v21; // x22
  __int64 v22; // x10
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *sharedMesh; // x21
  struct UnityEngine_Mesh_o *v25; // x0
  struct UnityEngine_Mesh_o **p_cacheMesh; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_List_Vector3__o **p_cacheVertices; // x20
  System_Collections_Generic_List_Vector3__o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_List_Vector3__o *v41; // x22
  int32_t v42; // w21
  UnityEngine_Transform_o *v43; // x23
  int v44; // s0
  UnityEngine_Mesh_o *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct UnityEngine_Mesh_o *v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  PartyOrganizationUtility_o *v61; // x19
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // t1
  System_Collections_Generic_List_Vector3__o *v63; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB751A & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector3___ctor__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector3__get_Count__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector3__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector3__set_Item__, v6);
    sub_1C13D24(&System_Collections_Generic_List_Vector3__TypeInfo, v7);
    sub_1C13D24(&UnityEngine_MeshRenderer_TypeInfo, v8);
    sub_1C13D24(&UnityEngine_Mesh_TypeInfo, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    sub_1C13D24(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v11);
    byte_4BB751A = 1;
  }
  targetRenderer = this->fields.targetRenderer;
  if ( targetRenderer )
  {
    klass = targetRenderer->klass;
    methodPtr_low = LOBYTE(targetRenderer->klass->vtable._0_Equals.methodPtr);
    v15 = LOBYTE(UnityEngine_MeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
    if ( methodPtr_low >= (unsigned int)v15
      && (UnityEngine_MeshRenderer_c *)klass->_2.typeHierarchy[v15 - 1] == UnityEngine_MeshRenderer_TypeInfo )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.targetRenderer, 0LL);
      if ( !gameObject )
        goto LABEL_44;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_44;
        sharedMesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(
                                               (UnityEngine_MeshFilter_o *)Component_object,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(sharedMesh, 0LL, 0LL) )
        {
          v25 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)Component_object, 0LL);
          this->fields.cacheMesh = v25;
          p_cacheMesh = &this->fields.cacheMesh;
          sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.cacheMesh, (int64_t)v25, v27, v28, v29, v30, v31, v32);
          p_cacheVertices = &this->fields.cacheVertices;
          if ( !this->fields.cacheVertices )
          {
            v34 = (System_Collections_Generic_List_Vector3__o *)sub_1C13F70(System_Collections_Generic_List_Vector3__TypeInfo);
            System_Collections_Generic_List_Vector3____ctor(
              v34,
              (const MethodInfo_3682C94 *)Method_System_Collections_Generic_List_Vector3___ctor__);
            *p_cacheVertices = v34;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&this->fields.cacheVertices,
              (int64_t)v34,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
          gameObject = (UnityEngine_GameObject_o *)*p_cacheMesh;
          if ( !*p_cacheMesh )
            goto LABEL_44;
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *p_cacheVertices, 0LL);
          v41 = *p_cacheVertices;
          if ( !*p_cacheVertices )
            goto LABEL_44;
          v42 = 0;
          while ( v42 < v41->fields._size )
          {
            gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderer;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
                if ( *p_cacheVertices )
                {
                  v43 = (UnityEngine_Transform_o *)gameObject;
                  *(UnityEngine_Vector3_o *)&v44 = System_Collections_Generic_List_Vector3___get_Item(
                                                     *p_cacheVertices,
                                                     v42,
                                                     (const MethodInfo_36831F8 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
                  if ( v43 )
                  {
                    v70 = UnityEngine_Transform__TransformPoint(v43, *(UnityEngine_Vector3_o *)&v44, 0LL);
                    System_Collections_Generic_List_Vector3___set_Item(
                      v41,
                      v42,
                      v70,
                      (const MethodInfo_3683258 *)Method_System_Collections_Generic_List_Vector3__set_Item__);
                    v41 = *p_cacheVertices;
                    ++v42;
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
      v16 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
      if ( methodPtr_low >= (unsigned int)v16
        && (UnityEngine_SkinnedMeshRenderer_c *)klass->_2.typeHierarchy[v16 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
      {
        p_bakedMesh = &this->fields.bakedMesh;
        bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(bakedMesh, 0LL, 0LL);
        v21 = 0LL;
        v22 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(targetRenderer->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v22 )
        {
          if ( (UnityEngine_SkinnedMeshRenderer_c *)targetRenderer->klass->_2.typeHierarchy[v22 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            v21 = (UnityEngine_SkinnedMeshRenderer_o *)targetRenderer;
          else
            v21 = 0LL;
          if ( ((unsigned __int8)gameObject & 1) == 0 )
          {
LABEL_12:
            if ( !v21 )
              goto LABEL_44;
LABEL_40:
            UnityEngine_SkinnedMeshRenderer__BakeMesh_70595216(v21, this->fields.bakedMesh, 1, 0LL);
            v54 = this->fields.bakedMesh;
            this->fields.cacheMesh = v54;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&this->fields.cacheMesh,
              (int64_t)v54,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            cacheVertices = this->fields.cacheVertices;
            v61 = (PartyOrganizationUtility_o *)&this->fields.cacheVertices;
            if ( !cacheVertices )
            {
              v63 = (System_Collections_Generic_List_Vector3__o *)sub_1C13F70(System_Collections_Generic_List_Vector3__TypeInfo);
              System_Collections_Generic_List_Vector3____ctor(
                v63,
                (const MethodInfo_3682C94 *)Method_System_Collections_Generic_List_Vector3___ctor__);
              v61->klass = (PartyOrganizationUtility_c *)v63;
              sub_1C13CC8(v61, (int64_t)v63, v64, v65, v66, v67, v68, v69);
            }
            gameObject = (UnityEngine_GameObject_o *)*p_bakedMesh;
            if ( *p_bakedMesh )
            {
              UnityEngine_Mesh__GetVertices(
                (UnityEngine_Mesh_o *)gameObject,
                (System_Collections_Generic_List_Vector3__o *)v61->klass,
                0LL);
              return;
            }
LABEL_44:
            sub_1C13F80(gameObject, v20);
          }
        }
        else if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          goto LABEL_12;
        }
        v47 = (UnityEngine_Mesh_o *)sub_1C13F70(UnityEngine_Mesh_TypeInfo);
        UnityEngine_Mesh___ctor(v47, 0LL);
        *p_bakedMesh = v47;
        sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bakedMesh, (int64_t)v47, v48, v49, v50, v51, v52, v53);
        if ( !v21 )
          goto LABEL_44;
        goto LABEL_40;
      }
    }
  }
}


void __fastcall ParticleAttatchMesh__CleanupCustomData(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  this->fields.customData1 = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.customData1, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.customData2 = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.customData2, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.meshColors = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.meshColors, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.meshUVs1 = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.meshUVs1, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.meshUVs2 = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.meshUVs2, 0LL, v27, v28, v29, v30, v31, v32);
}


void __fastcall ParticleAttatchMesh__CleanupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UnityEngine_Object_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BB7519 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB7519 = 1;
  }
  p_bakedMesh = &this->fields.bakedMesh;
  bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bakedMesh, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)*p_bakedMesh;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(v11, 0LL);
    *p_bakedMesh = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bakedMesh, 0LL, v12, v13, v14, v15, v16, v17);
  }
  this->fields.cacheMesh = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.cacheMesh, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.cacheVertices = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.cacheVertices, 0LL, v18, v19, v20, v21, v22, v23);
  this->fields.useVertexIndices = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.useVertexIndices, 0LL, v24, v25, v26, v27, v28, v29);
}


void __fastcall ParticleAttatchMesh__CleanupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Component_o *gameObject; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v22; // 0:x0.8

  if ( (byte_4BB7516 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB7516 = 1;
  }
  m_ParticleSystem = 0LL;
  p_targetPS = &this->fields.targetPS;
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C13F80(gameObject, v5);
    }
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
    v22.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(v22, this->fields.orgMaxParticles, 0LL);
    this->fields.targetPS = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.targetPS, 0LL, v13, v14, v15, v16, v17, v18);
  }
  this->fields.particles = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.particles, 0LL, v6, v7, v8, v9, v10, v11);
  ParticleAttatchMesh__CleanupCustomData(this, v19);
  ParticleAttatchMesh__CleanupMesh(this, v20);
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

  if ( (byte_4BB751C & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB751C = 1;
  }
  targetParticleSystem = (UnityEngine_Object_o *)this->fields.targetParticleSystem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetParticleSystem, 0LL, 0LL) )
    return this->fields.targetParticleSystem;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.targetParticleSystemPath, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    result = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !result )
      goto LABEL_17;
    result = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)result,
                                               0LL);
    if ( !result )
      goto LABEL_17;
    v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                   (UnityEngine_Transform_o *)result,
                                   this->fields.targetParticleSystemPath,
                                   0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          return (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)result,
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      }
LABEL_17:
      sub_1C13F80(result, v7);
    }
  }
  return result;
}


// attributes: thunk
void __fastcall ParticleAttatchMesh__LateUpdate(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  ParticleAttatchMesh__UpdateParticle(this, method);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v15; // w22
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s8
  float v20; // s9
  float v21; // s10
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB751D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Vector3__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Vector3__Contains__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Vector3___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_HashSet_Vector3__TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector3__get_Count__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector3__get_Item__, v9);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4BB751D = 1;
  }
  v11 = (System_Collections_Generic_HashSet_Vector3__o *)sub_1C13F70(System_Collections_Generic_HashSet_Vector3__TypeInfo);
  System_Collections_Generic_HashSet_Vector3____ctor(
    v11,
    (const MethodInfo_34EECF4 *)Method_System_Collections_Generic_HashSet_Vector3___ctor__);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vertices )
    goto LABEL_15;
  if ( vertices->fields._size >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      *(UnityEngine_Vector3_o *)&v16 = System_Collections_Generic_List_Vector3___get_Item(
                                         vertices,
                                         v15,
                                         (const MethodInfo_36831F8 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !v11 )
        break;
      v19 = v16;
      v20 = v17;
      v21 = v18;
      if ( !System_Collections_Generic_HashSet_Vector3___Contains(
              v11,
              *(UnityEngine_Vector3_o *)&v16,
              (const MethodInfo_34EF3EC *)Method_System_Collections_Generic_HashSet_Vector3__Contains__) )
      {
        v26.fields.x = v19;
        v26.fields.y = v20;
        v26.fields.z = v21;
        v13 = System_Collections_Generic_HashSet_Vector3___Add(
                v11,
                v26,
                (const MethodInfo_34EFF38 *)Method_System_Collections_Generic_HashSet_Vector3__Add__);
        if ( !v12 )
          break;
        items = v12->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v15,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = v15;
        }
      }
      if ( ++v15 >= vertices->fields._size )
        return v12;
    }
LABEL_15:
    sub_1C13F80(v13, v14);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4BB7518 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB7518 = 1;
  }
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetRenderer, 0LL, 0LL) )
  {
    ParticleAttatchMesh__BakeMesh(this, v5);
    cacheVertices = this->fields.cacheVertices;
    if ( cacheVertices )
    {
      v8 = ParticleAttatchMesh__MergeVertexIndices(cacheVertices, v6);
      this->fields.useVertexIndices = v8;
      p_useVertexIndices = &this->fields.useVertexIndices;
      sub_1C13CC8((PartyOrganizationUtility_o *)p_useVertexIndices, (int64_t)v8, v10, v11, v12, v13, v14, v15);
      if ( !*p_useVertexIndices )
        sub_1C13F80(v16, v17);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  unsigned int v17; // w21
  __int64 v18; // x1
  UnityEngine_ParticleSystem_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_Particle_array *v20; // x0
  struct UnityEngine_ParticleSystem_Particle_array **p_particles; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v29; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v30; // 0:x0.8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB7515 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&UnityEngine_ParticleSystem_Particle___TypeInfo, v3);
    byte_4BB7515 = 1;
  }
  p_targetPS = &this->fields.targetPS;
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetPS, 0LL, 0LL) )
  {
    targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetRenderer, 0LL, 0LL) )
    {
      TargetParticleSystem = (UnityEngine_Object_o *)ParticleAttatchMesh__GetTargetParticleSystem(this, v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(TargetParticleSystem, 0LL, 0LL) )
      {
        v10 = ParticleAttatchMesh__SetupMesh(this, v9);
        if ( v10 >= 1 )
        {
          v17 = v10;
          *p_targetPS = (struct UnityEngine_ParticleSystem_o *)TargetParticleSystem;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.targetPS,
            (int64_t)TargetParticleSystem,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          gameObject = *p_targetPS;
          if ( !*p_targetPS )
            goto LABEL_20;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(gameObject, 0LL).fields.m_ParticleSystem;
          gameObject = *p_targetPS;
          if ( !*p_targetPS )
            goto LABEL_20;
          gameObject = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
          if ( !gameObject )
            goto LABEL_20;
          gameObject = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)gameObject,
                                                         0LL);
          if ( !gameObject )
            goto LABEL_20;
          localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          v29.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          this->fields.orgParticleScale = localScale;
          this->fields.orgMaxParticles = UnityEngine_ParticleSystem_MainModule__get_maxParticles(v29, 0LL);
          v20 = (struct UnityEngine_ParticleSystem_Particle_array *)sub_1C13DCC(
                                                                      UnityEngine_ParticleSystem_Particle___TypeInfo,
                                                                      v17);
          this->fields.particles = v20;
          p_particles = &this->fields.particles;
          sub_1C13CC8((PartyOrganizationUtility_o *)p_particles, (int64_t)v20, v22, v23, v24, v25, v26, v27);
          gameObject = (UnityEngine_ParticleSystem_o *)*(p_particles - 1);
          if ( !gameObject )
LABEL_20:
            sub_1C13F80(gameObject, v18);
          UnityEngine_ParticleSystem__SetParticles_71001280(gameObject, *p_particles, v17, 0LL);
          v30.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          UnityEngine_ParticleSystem_MainModule__set_maxParticles(v30, v17, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_Vector4__o **p_customData1; // x21
  System_Collections_Generic_List_Vector4__o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_ParticleSystem_o *targetPS; // x0
  System_Collections_Generic_List_Vector4__o **p_customData2; // x21
  System_Collections_Generic_List_Vector4__o *v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t customDataType1; // w8
  System_Collections_Generic_List_Color__o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_List_Vector2__o *v47; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Collections_Generic_List_Vector2__o *meshUVs1; // x1
  System_Collections_Generic_List_Vector2__o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int32_t i; // w21
  int32_t Item; // w0
  int32_t v64; // w8
  int32_t v65; // w22
  struct System_Collections_Generic_List_Vector4__o *customData1; // x23
  float x; // s0
  float y; // s1
  int v69; // s2
  int v70; // s3
  const MethodInfo_3685BFC *v71; // x2
  UnityEngine_Vector2_o v72; // kr00_8
  int32_t customDataType2; // w8
  struct System_Collections_Generic_List_Vector4__o *customData2; // x23
  float v75; // s0
  float v76; // s1
  int v77; // s2
  int v78; // s3
  const MethodInfo_3685BFC *v79; // x2
  UnityEngine_Vector2_o v80; // kr08_8

  if ( (byte_4BB751B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector4___ctor__, *(_QWORD *)&particleNum);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector2___ctor__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Color___ctor__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector4__get_Count__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Color__get_Count__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector2__get_Count__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector2__get_Item__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_Color__get_Item__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector4__set_Item__, v18);
    sub_1C13D24(&System_Collections_Generic_List_Color__TypeInfo, v19);
    sub_1C13D24(&System_Collections_Generic_List_Vector2__TypeInfo, v20);
    sub_1C13D24(&System_Collections_Generic_List_Vector4__TypeInfo, v21);
    byte_4BB751B = 1;
  }
  if ( this->fields.customDataType1 )
  {
    p_customData1 = &this->fields.customData1;
    if ( !this->fields.customData1 )
    {
      v23 = (System_Collections_Generic_List_Vector4__o *)sub_1C13F70(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v23,
        (const MethodInfo_368563C *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData1 = v23;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.customData1, (int64_t)v23, v24, v25, v26, v27, v28, v29);
    }
    targetPS = this->fields.targetPS;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_ParticleSystem__GetCustomParticleData(targetPS, *p_customData1, 0, 0LL);
  }
  if ( this->fields.customDataType2 )
  {
    p_customData2 = &this->fields.customData2;
    if ( !this->fields.customData2 )
    {
      v32 = (System_Collections_Generic_List_Vector4__o *)sub_1C13F70(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v32,
        (const MethodInfo_368563C *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData2 = v32;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.customData2, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    }
    targetPS = this->fields.targetPS;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_ParticleSystem__GetCustomParticleData(targetPS, *p_customData2, 1, 0LL);
  }
  customDataType1 = this->fields.customDataType1;
  if ( customDataType1 == 1 || this->fields.customDataType2 == 1 )
  {
    if ( !this->fields.meshColors )
    {
      v40 = (System_Collections_Generic_List_Color__o *)sub_1C13F70(System_Collections_Generic_List_Color__TypeInfo);
      System_Collections_Generic_List_Color____ctor(
        v40,
        (const MethodInfo_35EDE60 *)Method_System_Collections_Generic_List_Color___ctor__);
      this->fields.meshColors = v40;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.meshColors, (int64_t)v40, v41, v42, v43, v44, v45, v46);
    }
    targetPS = (UnityEngine_ParticleSystem_o *)this->fields.cacheMesh;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_Mesh__GetColors((UnityEngine_Mesh_o *)targetPS, this->fields.meshColors, 0LL);
    customDataType1 = this->fields.customDataType1;
  }
  if ( customDataType1 == 2 )
  {
    if ( !this->fields.meshUVs1 )
    {
      v47 = (System_Collections_Generic_List_Vector2__o *)sub_1C13F70(System_Collections_Generic_List_Vector2__TypeInfo);
      System_Collections_Generic_List_Vector2____ctor(
        v47,
        (const MethodInfo_36803E8 *)Method_System_Collections_Generic_List_Vector2___ctor__);
      this->fields.meshUVs1 = v47;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.meshUVs1, (int64_t)v47, v48, v49, v50, v51, v52, v53);
    }
    targetPS = (UnityEngine_ParticleSystem_o *)this->fields.cacheMesh;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_Mesh__GetUVs(
      (UnityEngine_Mesh_o *)targetPS,
      this->fields.customDataUVIndex1,
      this->fields.meshUVs1,
      0LL);
  }
  if ( this->fields.customDataType2 == 2 )
  {
    if ( this->fields.customDataType1 == 2 && this->fields.customDataUVIndex2 == this->fields.customDataUVIndex1 )
    {
      meshUVs1 = this->fields.meshUVs1;
      this->fields.meshUVs2 = meshUVs1;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.meshUVs2,
        (int64_t)meshUVs1,
        (int64_t)method,
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
        v55 = (System_Collections_Generic_List_Vector2__o *)sub_1C13F70(System_Collections_Generic_List_Vector2__TypeInfo);
        System_Collections_Generic_List_Vector2____ctor(
          v55,
          (const MethodInfo_36803E8 *)Method_System_Collections_Generic_List_Vector2___ctor__);
        this->fields.meshUVs2 = v55;
        sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.meshUVs2, (int64_t)v55, v56, v57, v58, v59, v60, v61);
      }
      targetPS = (UnityEngine_ParticleSystem_o *)this->fields.cacheMesh;
      if ( !targetPS )
        goto LABEL_73;
      UnityEngine_Mesh__GetUVs(
        (UnityEngine_Mesh_o *)targetPS,
        this->fields.customDataUVIndex2,
        this->fields.meshUVs2,
        0LL);
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
               (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
      v64 = this->fields.customDataType1;
      v65 = Item;
      if ( v64 == 2 )
      {
        if ( (Item & 0x80000000) == 0 )
        {
          targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshUVs1;
          if ( !targetPS )
            goto LABEL_73;
          if ( v65 < SLODWORD(targetPS[1].klass) )
          {
            customData1 = this->fields.customData1;
            if ( !customData1 )
              goto LABEL_73;
            if ( i < customData1->fields._size )
            {
              v72 = System_Collections_Generic_List_Vector2___get_Item(
                      (System_Collections_Generic_List_Vector2__o *)targetPS,
                      v65,
                      (const MethodInfo_368094C *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              y = v72.fields.y;
              x = v72.fields.x;
              v71 = (const MethodInfo_3685BFC *)Method_System_Collections_Generic_List_Vector4__set_Item__;
              v69 = 0;
              v70 = 0;
              goto LABEL_49;
            }
          }
        }
      }
      else if ( v64 == 1 && (Item & 0x80000000) == 0 )
      {
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshColors;
        if ( !targetPS )
          goto LABEL_73;
        if ( v65 < SLODWORD(targetPS[1].klass) )
        {
          customData1 = this->fields.customData1;
          if ( !customData1 )
            goto LABEL_73;
          if ( i < customData1->fields._size )
          {
            *(UnityEngine_Color_o *)&x = System_Collections_Generic_List_Color___get_Item(
                                           (System_Collections_Generic_List_Color__o *)targetPS,
                                           v65,
                                           (const MethodInfo_35EE3C4 *)Method_System_Collections_Generic_List_Color__get_Item__);
            v71 = (const MethodInfo_3685BFC *)Method_System_Collections_Generic_List_Vector4__set_Item__;
LABEL_49:
            System_Collections_Generic_List_Vector4___set_Item(customData1, i, *(UnityEngine_Vector4_o *)&x, v71);
          }
        }
      }
      customDataType2 = this->fields.customDataType2;
      if ( customDataType2 == 2 )
      {
        if ( (v65 & 0x80000000) != 0 )
          continue;
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshUVs2;
        if ( !targetPS )
          goto LABEL_73;
        if ( v65 >= SLODWORD(targetPS[1].klass) )
          continue;
        customData2 = this->fields.customData2;
        if ( !customData2 )
          goto LABEL_73;
        if ( i >= customData2->fields._size )
          continue;
        v80 = System_Collections_Generic_List_Vector2___get_Item(
                (System_Collections_Generic_List_Vector2__o *)targetPS,
                v65,
                (const MethodInfo_368094C *)Method_System_Collections_Generic_List_Vector2__get_Item__);
        v76 = v80.fields.y;
        v75 = v80.fields.x;
        v79 = (const MethodInfo_3685BFC *)Method_System_Collections_Generic_List_Vector4__set_Item__;
        v77 = 0;
        v78 = 0;
      }
      else
      {
        if ( customDataType2 != 1 || (v65 & 0x80000000) != 0 )
          continue;
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshColors;
        if ( !targetPS )
          goto LABEL_73;
        if ( v65 >= SLODWORD(targetPS[1].klass) )
          continue;
        customData2 = this->fields.customData2;
        if ( !customData2 )
          goto LABEL_73;
        if ( i >= customData2->fields._size )
          continue;
        *(UnityEngine_Color_o *)&v75 = System_Collections_Generic_List_Color___get_Item(
                                         (System_Collections_Generic_List_Color__o *)targetPS,
                                         v65,
                                         (const MethodInfo_35EE3C4 *)Method_System_Collections_Generic_List_Color__get_Item__);
        v79 = (const MethodInfo_3685BFC *)Method_System_Collections_Generic_List_Vector4__set_Item__;
      }
      System_Collections_Generic_List_Vector4___set_Item(customData2, i, *(UnityEngine_Vector4_o *)&v75, v79);
    }
  }
  if ( this->fields.customDataType1 )
  {
    targetPS = this->fields.targetPS;
    if ( !targetPS )
      goto LABEL_73;
    UnityEngine_ParticleSystem__SetCustomParticleData(targetPS, this->fields.customData1, 0, 0LL);
  }
  if ( this->fields.customDataType2 )
  {
    targetPS = this->fields.targetPS;
    if ( targetPS )
    {
      UnityEngine_ParticleSystem__SetCustomParticleData(targetPS, this->fields.customData2, 1, 0LL);
      return;
    }
LABEL_73:
    sub_1C13F80(targetPS, *(_QWORD *)&particleNum);
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
  UnityEngine_ParticleSystem_o *Particles_71001548; // x0
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v37; // s8
  float v38; // s9
  float v39; // s10
  int32_t scalingMode; // w0
  float v41; // s0
  float v42; // s1
  float v43; // s2
  unsigned __int64 v44; // x21
  __int64 v45; // x24
  struct UnityEngine_ParticleSystem_Particle_array *particles; // x27
  int32_t v47; // w22
  unsigned int Item; // s0
  float v49; // s11
  float v50; // s1
  float v51; // s12
  __int64 v52; // x0
  __int64 v53; // x1
  float v54; // s2
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v56; // 0:x0.8
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB7517 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector3__get_Item__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB7517 = 1;
  }
  targetPS = (UnityEngine_Object_o *)this->fields.targetPS;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetPS, 0LL, 0LL) )
    return;
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetRenderer, 0LL, 0LL) )
    return;
  Particles_71001548 = this->fields.targetPS;
  if ( !Particles_71001548 )
    goto LABEL_52;
  Particles_71001548 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__GetParticles_71001548(
                                                         Particles_71001548,
                                                         this->fields.particles,
                                                         0LL);
  if ( (int)Particles_71001548 < 1 )
    return;
  useVertexIndices = this->fields.useVertexIndices;
  if ( !useVertexIndices )
    goto LABEL_52;
  size = useVertexIndices->fields._size;
  v12 = (int)Particles_71001548 <= size ? (int)Particles_71001548 : size;
  ParticleAttatchMesh__BakeMesh(this, v8);
  ParticleAttatchMesh__UpdateCustomData(this, v12, v13);
  Particles_71001548 = this->fields.targetPS;
  if ( !Particles_71001548 )
    goto LABEL_52;
  Particles_71001548 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Particles_71001548,
                                                         0LL);
  if ( !Particles_71001548 )
    goto LABEL_52;
  Particles_71001548 = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Particles_71001548,
                                                         0LL);
  if ( !Particles_71001548 )
    goto LABEL_52;
  v14 = (UnityEngine_Transform_o *)Particles_71001548;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Particles_71001548, 0LL);
  nodeTransform = (UnityEngine_Object_o *)this->fields.nodeTransform;
  v17 = parent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nodeTransform, 0LL, 0LL) )
  {
    transform = this->fields.nodeTransform;
  }
  else
  {
    Particles_71001548 = (UnityEngine_ParticleSystem_o *)this->fields.targetRenderer;
    if ( !Particles_71001548 )
      goto LABEL_52;
    Particles_71001548 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Particles_71001548,
                                                           0LL);
    if ( !Particles_71001548 )
      goto LABEL_52;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Particles_71001548, 0LL);
  }
  v19 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v14, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Particles_71001548 = (UnityEngine_ParticleSystem_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  if ( !transform )
    goto LABEL_52;
  v20 = (char)Particles_71001548;
  LODWORD(v21) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL);
  if ( (v20 & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_52;
    lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale(v17, 0LL);
    x = this->fields.orgParticleScale.fields.x;
    v24 = *(float *)&lossyScale;
    v57 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    y = v57.fields.y;
    v58 = UnityEngine_Transform__get_lossyScale(v17, 0LL);
    v26 = this->fields.orgParticleScale.fields.y;
    v27 = v58.fields.y;
    v59 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    z = v59.fields.z;
    v60 = UnityEngine_Transform__get_lossyScale(v17, 0LL);
    v29 = x * (float)(v21 / v24);
    v30 = v26 * (float)(y / v27);
    v31 = this->fields.orgParticleScale.fields.z * (float)(z / v60.fields.z);
  }
  else
  {
    v32 = COERCE_FLOAT(UnityEngine_Transform__get_lossyScale(v14, 0LL));
    v61 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    v33 = v61.fields.y;
    v62 = UnityEngine_Transform__get_lossyScale(v14, 0LL);
    v34 = v62.fields.y;
    v63 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
    v35 = v63.fields.z;
    v64 = UnityEngine_Transform__get_lossyScale(v14, 0LL);
    v29 = v21 / v32;
    v30 = v33 / v34;
    v31 = v35 / v64.fields.z;
  }
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v29, 0LL);
  if ( !byte_4BAEDA6 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v8);
    byte_4BAEDA6 = 1;
  }
  Particles_71001548 = this->fields.targetPS;
  if ( !Particles_71001548 )
LABEL_52:
    sub_1C13F80(Particles_71001548, v8);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v37 = static_fields->oneVector.fields.x;
  v38 = static_fields->oneVector.fields.y;
  v39 = static_fields->oneVector.fields.z;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Particles_71001548, 0LL).fields.m_ParticleSystem;
  v56.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  scalingMode = UnityEngine_ParticleSystem_MainModule__get_scalingMode(v56, 0LL);
  if ( scalingMode == 1 )
  {
    *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Transform__get_localScale(v14, 0LL);
    goto LABEL_39;
  }
  if ( !scalingMode )
  {
    *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Transform__get_lossyScale(v14, 0LL);
LABEL_39:
    v37 = v41;
    v38 = v42;
    v39 = v43;
  }
  if ( v12 >= 1 )
  {
    v44 = 0LL;
    v45 = 32LL;
    do
    {
      Particles_71001548 = (UnityEngine_ParticleSystem_o *)this->fields.useVertexIndices;
      if ( !Particles_71001548 )
        goto LABEL_52;
      Particles_71001548 = (UnityEngine_ParticleSystem_o *)System_Collections_Generic_List_int___get_Item(
                                                             (System_Collections_Generic_List_int__o *)Particles_71001548,
                                                             v44,
                                                             (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
      particles = this->fields.particles;
      if ( !particles )
        goto LABEL_52;
      v47 = (int)Particles_71001548;
      Particles_71001548 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_71001548 )
        goto LABEL_52;
      Item = (unsigned int)System_Collections_Generic_List_Vector3___get_Item(
                             (System_Collections_Generic_List_Vector3__o *)Particles_71001548,
                             v47,
                             (const MethodInfo_36831F8 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      Particles_71001548 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_71001548 )
        goto LABEL_52;
      v49 = *(float *)&Item;
      *(UnityEngine_Vector3_o *)(&v50 - 1) = System_Collections_Generic_List_Vector3___get_Item(
                                               (System_Collections_Generic_List_Vector3__o *)Particles_71001548,
                                               v47,
                                               (const MethodInfo_36831F8 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      Particles_71001548 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_71001548 )
        goto LABEL_52;
      v51 = v50;
      *(UnityEngine_Vector3_o *)(&v54 - 2) = System_Collections_Generic_List_Vector3___get_Item(
                                               (System_Collections_Generic_List_Vector3__o *)Particles_71001548,
                                               v47,
                                               (const MethodInfo_36831F8 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( v44 >= particles->max_length )
        sub_1C13F88(v52, v53);
      v65.fields.z = v54 / v39;
      v65.fields.y = v51 / v38;
      v65.fields.x = v49 / v37;
      UnityEngine_ParticleSystem_Particle__set_position(
        (UnityEngine_ParticleSystem_Particle_o *)((char *)particles + v45),
        v65,
        0LL);
      ++v44;
      v45 += 132LL;
    }
    while ( v12 != v44 );
  }
  Particles_71001548 = this->fields.targetPS;
  if ( !Particles_71001548 )
    goto LABEL_52;
  UnityEngine_ParticleSystem__SetParticles_71001280(Particles_71001548, this->fields.particles, v12, 0LL);
}