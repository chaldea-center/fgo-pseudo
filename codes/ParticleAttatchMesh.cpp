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
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_Vector3__o **p_cacheVertices; // x20
  System_Collections_Generic_List_Vector3__o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_Vector3__o *v33; // x22
  int32_t v34; // w21
  UnityEngine_Transform_o *v35; // x23
  int v36; // s0
  UnityEngine_Mesh_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  struct UnityEngine_Mesh_o *v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  ServantStatusBattleListViewItem_o *v45; // x19
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // t1
  System_Collections_Generic_List_Vector3__o *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A30C16 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector3___ctor__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector3__get_Count__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector3__get_Item__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector3__set_Item__, v6);
    sub_1B761C0(&System_Collections_Generic_List_Vector3__TypeInfo, v7);
    sub_1B761C0(&UnityEngine_MeshRenderer_TypeInfo, v8);
    sub_1B761C0(&UnityEngine_Mesh_TypeInfo, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    sub_1B761C0(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v11);
    byte_4A30C16 = 1;
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
                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
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
          sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.cacheMesh, (int32_t)v25, v27, v28);
          p_cacheVertices = &this->fields.cacheVertices;
          if ( !this->fields.cacheVertices )
          {
            v30 = (System_Collections_Generic_List_Vector3__o *)sub_1B7640C(System_Collections_Generic_List_Vector3__TypeInfo);
            System_Collections_Generic_List_Vector3____ctor(
              v30,
              (const MethodInfo_352D09C *)Method_System_Collections_Generic_List_Vector3___ctor__);
            *p_cacheVertices = v30;
            sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.cacheVertices, (int32_t)v30, v31, v32);
          }
          gameObject = (UnityEngine_GameObject_o *)*p_cacheMesh;
          if ( !*p_cacheMesh )
            goto LABEL_44;
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *p_cacheVertices, 0LL);
          v33 = *p_cacheVertices;
          if ( !*p_cacheVertices )
            goto LABEL_44;
          v34 = 0;
          while ( v34 < v33->fields._size )
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
                  v35 = (UnityEngine_Transform_o *)gameObject;
                  *(UnityEngine_Vector3_o *)&v36 = System_Collections_Generic_List_Vector3___get_Item(
                                                     *p_cacheVertices,
                                                     v34,
                                                     (const MethodInfo_352D600 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
                  if ( v35 )
                  {
                    v50 = UnityEngine_Transform__TransformPoint(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
                    System_Collections_Generic_List_Vector3___set_Item(
                      v33,
                      v34,
                      v50,
                      (const MethodInfo_352D660 *)Method_System_Collections_Generic_List_Vector3__set_Item__);
                    v33 = *p_cacheVertices;
                    ++v34;
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
            UnityEngine_SkinnedMeshRenderer__BakeMesh_69160724(v21, this->fields.bakedMesh, 1, 0LL);
            v42 = this->fields.bakedMesh;
            this->fields.cacheMesh = v42;
            sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.cacheMesh, (int32_t)v42, v43, v44);
            cacheVertices = this->fields.cacheVertices;
            v45 = (ServantStatusBattleListViewItem_o *)&this->fields.cacheVertices;
            if ( !cacheVertices )
            {
              v47 = (System_Collections_Generic_List_Vector3__o *)sub_1B7640C(System_Collections_Generic_List_Vector3__TypeInfo);
              System_Collections_Generic_List_Vector3____ctor(
                v47,
                (const MethodInfo_352D09C *)Method_System_Collections_Generic_List_Vector3___ctor__);
              v45->klass = (ServantStatusBattleListViewItem_c *)v47;
              sub_1B76164(v45, (int32_t)v47, v48, v49);
            }
            gameObject = (UnityEngine_GameObject_o *)*p_bakedMesh;
            if ( *p_bakedMesh )
            {
              UnityEngine_Mesh__GetVertices(
                (UnityEngine_Mesh_o *)gameObject,
                (System_Collections_Generic_List_Vector3__o *)v45->klass,
                0LL);
              return;
            }
LABEL_44:
            sub_1B7641C(gameObject, v20);
          }
        }
        else if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          goto LABEL_12;
        }
        v39 = (UnityEngine_Mesh_o *)sub_1B7640C(UnityEngine_Mesh_TypeInfo);
        UnityEngine_Mesh___ctor(v39, 0LL);
        *p_bakedMesh = v39;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.bakedMesh, (int32_t)v39, v40, v41);
        if ( !v21 )
          goto LABEL_44;
        goto LABEL_40;
      }
    }
  }
}


void __fastcall ParticleAttatchMesh__CleanupCustomData(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  this->fields.customData1 = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.customData1, 0, v2, v3);
  this->fields.customData2 = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.customData2, 0, v5, v6);
  this->fields.meshColors = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.meshColors, 0, v7, v8);
  this->fields.meshUVs1 = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.meshUVs1, 0, v9, v10);
  this->fields.meshUVs2 = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.meshUVs2, 0, v11, v12);
}


void __fastcall ParticleAttatchMesh__CleanupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A30C15 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A30C15 = 1;
  }
  p_bakedMesh = &this->fields.bakedMesh;
  bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bakedMesh, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_bakedMesh;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69287408(v7, 0LL);
    *p_bakedMesh = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.bakedMesh, 0, v8, v9);
  }
  this->fields.cacheMesh = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.cacheMesh, 0, v5, v6);
  this->fields.cacheVertices = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.cacheVertices, 0, v10, v11);
  this->fields.useVertexIndices = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.useVertexIndices, 0, v12, v13);
}


void __fastcall ParticleAttatchMesh__CleanupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Component_o *gameObject; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v14; // 0:x0.8

  if ( (byte_4A30C12 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A30C12 = 1;
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
      sub_1B7641C(gameObject, v5);
    }
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
    v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(v14, this->fields.orgMaxParticles, 0LL);
    this->fields.targetPS = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.targetPS, 0, v9, v10);
  }
  this->fields.particles = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.particles, 0, v6, v7);
  ParticleAttatchMesh__CleanupCustomData(this, v11);
  ParticleAttatchMesh__CleanupMesh(this, v12);
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

  if ( (byte_4A30C18 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    byte_4A30C18 = 1;
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
                                                   (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      }
LABEL_17:
      sub_1B7641C(result, v7);
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

  if ( (byte_4A30C19 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_Vector3__Add__, method);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_Vector3__Contains__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_Vector3___ctor__, v4);
    sub_1B761C0(&System_Collections_Generic_HashSet_Vector3__TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector3__get_Count__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector3__get_Item__, v9);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4A30C19 = 1;
  }
  v11 = (System_Collections_Generic_HashSet_Vector3__o *)sub_1B7640C(System_Collections_Generic_HashSet_Vector3__TypeInfo);
  System_Collections_Generic_HashSet_Vector3____ctor(
    v11,
    (const MethodInfo_339E6F8 *)Method_System_Collections_Generic_HashSet_Vector3___ctor__);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
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
                                         (const MethodInfo_352D600 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !v11 )
        break;
      v19 = v16;
      v20 = v17;
      v21 = v18;
      if ( !System_Collections_Generic_HashSet_Vector3___Contains(
              v11,
              *(UnityEngine_Vector3_o *)&v16,
              (const MethodInfo_339EDF0 *)Method_System_Collections_Generic_HashSet_Vector3__Contains__) )
      {
        v26.fields.x = v19;
        v26.fields.y = v20;
        v26.fields.z = v21;
        v13 = System_Collections_Generic_HashSet_Vector3___Add(
                v11,
                v26,
                (const MethodInfo_339F93C *)Method_System_Collections_Generic_HashSet_Vector3__Add__);
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
            *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
    sub_1B7641C(v13, v14);
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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A30C14 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    byte_4A30C14 = 1;
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
      sub_1B76164((ServantStatusBattleListViewItem_o *)p_useVertexIndices, (int32_t)v8, v10, v11);
      if ( !*p_useVertexIndices )
        sub_1B7641C(v12, v13);
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
  int32_t v11; // w2
  int32_t v12; // w3
  unsigned int v13; // w21
  __int64 v14; // x1
  UnityEngine_ParticleSystem_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_Particle_array *v16; // x0
  struct UnityEngine_ParticleSystem_Particle_array **p_particles; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v21; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v22; // 0:x0.8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A30C11 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&UnityEngine_ParticleSystem_Particle___TypeInfo, v3);
    byte_4A30C11 = 1;
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
          v13 = v10;
          *p_targetPS = (struct UnityEngine_ParticleSystem_o *)TargetParticleSystem;
          sub_1B76164(
            (ServantStatusBattleListViewItem_o *)&this->fields.targetPS,
            (int32_t)TargetParticleSystem,
            v11,
            v12);
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
          v21.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          this->fields.orgParticleScale = localScale;
          this->fields.orgMaxParticles = UnityEngine_ParticleSystem_MainModule__get_maxParticles(v21, 0LL);
          v16 = (struct UnityEngine_ParticleSystem_Particle_array *)sub_1B76268(
                                                                      UnityEngine_ParticleSystem_Particle___TypeInfo,
                                                                      v13);
          this->fields.particles = v16;
          p_particles = &this->fields.particles;
          sub_1B76164((ServantStatusBattleListViewItem_o *)p_particles, (int32_t)v16, v18, v19);
          gameObject = (UnityEngine_ParticleSystem_o *)*(p_particles - 1);
          if ( !gameObject )
LABEL_20:
            sub_1B7641C(gameObject, v14);
          UnityEngine_ParticleSystem__SetParticles_69566572(gameObject, *p_particles, v13, 0LL);
          v22.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          UnityEngine_ParticleSystem_MainModule__set_maxParticles(v22, v13, 0LL);
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
  __int64 v17; // x1
  System_Collections_Generic_List_Vector4__o **p_customData1; // x21
  System_Collections_Generic_List_Vector4__o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_ParticleSystem_o *targetPS; // x0
  System_Collections_Generic_List_Vector4__o **p_customData2; // x21
  System_Collections_Generic_List_Vector4__o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t customDataType1; // w8
  System_Collections_Generic_List_Color__o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_List_Vector2__o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Collections_Generic_List_Vector2__o *meshUVs1; // x1
  System_Collections_Generic_List_Vector2__o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t i; // w21
  int32_t Item; // w0
  int32_t v40; // w8
  int32_t v41; // w22
  struct System_Collections_Generic_List_Vector4__o *customData1; // x23
  float x; // s0
  float y; // s1
  int v45; // s2
  int v46; // s3
  const MethodInfo_3530004 *v47; // x2
  UnityEngine_Vector2_o v48; // kr00_8
  int32_t customDataType2; // w8
  struct System_Collections_Generic_List_Vector4__o *customData2; // x23
  float v51; // s0
  float v52; // s1
  int v53; // s2
  int v54; // s3
  const MethodInfo_3530004 *v55; // x2
  UnityEngine_Vector2_o v56; // kr08_8

  if ( (byte_4A30C17 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector4___ctor__, *(_QWORD *)&particleNum);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector2___ctor__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_Color___ctor__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector4__get_Count__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_Color__get_Count__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector2__get_Count__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector2__get_Item__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_Color__get_Item__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector4__set_Item__, v14);
    sub_1B761C0(&System_Collections_Generic_List_Color__TypeInfo, v15);
    sub_1B761C0(&System_Collections_Generic_List_Vector2__TypeInfo, v16);
    sub_1B761C0(&System_Collections_Generic_List_Vector4__TypeInfo, v17);
    byte_4A30C17 = 1;
  }
  if ( this->fields.customDataType1 )
  {
    p_customData1 = &this->fields.customData1;
    if ( !this->fields.customData1 )
    {
      v19 = (System_Collections_Generic_List_Vector4__o *)sub_1B7640C(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v19,
        (const MethodInfo_352FA44 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData1 = v19;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.customData1, (int32_t)v19, v20, v21);
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
      v24 = (System_Collections_Generic_List_Vector4__o *)sub_1B7640C(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v24,
        (const MethodInfo_352FA44 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData2 = v24;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.customData2, (int32_t)v24, v25, v26);
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
      v28 = (System_Collections_Generic_List_Color__o *)sub_1B7640C(System_Collections_Generic_List_Color__TypeInfo);
      System_Collections_Generic_List_Color____ctor(
        v28,
        (const MethodInfo_3498268 *)Method_System_Collections_Generic_List_Color___ctor__);
      this->fields.meshColors = v28;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.meshColors, (int32_t)v28, v29, v30);
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
      v31 = (System_Collections_Generic_List_Vector2__o *)sub_1B7640C(System_Collections_Generic_List_Vector2__TypeInfo);
      System_Collections_Generic_List_Vector2____ctor(
        v31,
        (const MethodInfo_352A7F0 *)Method_System_Collections_Generic_List_Vector2___ctor__);
      this->fields.meshUVs1 = v31;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.meshUVs1, (int32_t)v31, v32, v33);
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
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.meshUVs2, (int32_t)meshUVs1, (int32_t)method, v3);
    }
    else
    {
      if ( !this->fields.meshUVs2 )
      {
        v35 = (System_Collections_Generic_List_Vector2__o *)sub_1B7640C(System_Collections_Generic_List_Vector2__TypeInfo);
        System_Collections_Generic_List_Vector2____ctor(
          v35,
          (const MethodInfo_352A7F0 *)Method_System_Collections_Generic_List_Vector2___ctor__);
        this->fields.meshUVs2 = v35;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.meshUVs2, (int32_t)v35, v36, v37);
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
               (const MethodInfo_34BA2C0 *)Method_System_Collections_Generic_List_int__get_Item__);
      v40 = this->fields.customDataType1;
      v41 = Item;
      if ( v40 == 2 )
      {
        if ( (Item & 0x80000000) == 0 )
        {
          targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshUVs1;
          if ( !targetPS )
            goto LABEL_73;
          if ( v41 < SLODWORD(targetPS[1].klass) )
          {
            customData1 = this->fields.customData1;
            if ( !customData1 )
              goto LABEL_73;
            if ( i < customData1->fields._size )
            {
              v48 = System_Collections_Generic_List_Vector2___get_Item(
                      (System_Collections_Generic_List_Vector2__o *)targetPS,
                      v41,
                      (const MethodInfo_352AD54 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              y = v48.fields.y;
              x = v48.fields.x;
              v47 = (const MethodInfo_3530004 *)Method_System_Collections_Generic_List_Vector4__set_Item__;
              v45 = 0;
              v46 = 0;
              goto LABEL_49;
            }
          }
        }
      }
      else if ( v40 == 1 && (Item & 0x80000000) == 0 )
      {
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshColors;
        if ( !targetPS )
          goto LABEL_73;
        if ( v41 < SLODWORD(targetPS[1].klass) )
        {
          customData1 = this->fields.customData1;
          if ( !customData1 )
            goto LABEL_73;
          if ( i < customData1->fields._size )
          {
            *(UnityEngine_Color_o *)&x = System_Collections_Generic_List_Color___get_Item(
                                           (System_Collections_Generic_List_Color__o *)targetPS,
                                           v41,
                                           (const MethodInfo_34987CC *)Method_System_Collections_Generic_List_Color__get_Item__);
            v47 = (const MethodInfo_3530004 *)Method_System_Collections_Generic_List_Vector4__set_Item__;
LABEL_49:
            System_Collections_Generic_List_Vector4___set_Item(customData1, i, *(UnityEngine_Vector4_o *)&x, v47);
          }
        }
      }
      customDataType2 = this->fields.customDataType2;
      if ( customDataType2 == 2 )
      {
        if ( (v41 & 0x80000000) != 0 )
          continue;
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshUVs2;
        if ( !targetPS )
          goto LABEL_73;
        if ( v41 >= SLODWORD(targetPS[1].klass) )
          continue;
        customData2 = this->fields.customData2;
        if ( !customData2 )
          goto LABEL_73;
        if ( i >= customData2->fields._size )
          continue;
        v56 = System_Collections_Generic_List_Vector2___get_Item(
                (System_Collections_Generic_List_Vector2__o *)targetPS,
                v41,
                (const MethodInfo_352AD54 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
        v52 = v56.fields.y;
        v51 = v56.fields.x;
        v55 = (const MethodInfo_3530004 *)Method_System_Collections_Generic_List_Vector4__set_Item__;
        v53 = 0;
        v54 = 0;
      }
      else
      {
        if ( customDataType2 != 1 || (v41 & 0x80000000) != 0 )
          continue;
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshColors;
        if ( !targetPS )
          goto LABEL_73;
        if ( v41 >= SLODWORD(targetPS[1].klass) )
          continue;
        customData2 = this->fields.customData2;
        if ( !customData2 )
          goto LABEL_73;
        if ( i >= customData2->fields._size )
          continue;
        *(UnityEngine_Color_o *)&v51 = System_Collections_Generic_List_Color___get_Item(
                                         (System_Collections_Generic_List_Color__o *)targetPS,
                                         v41,
                                         (const MethodInfo_34987CC *)Method_System_Collections_Generic_List_Color__get_Item__);
        v55 = (const MethodInfo_3530004 *)Method_System_Collections_Generic_List_Vector4__set_Item__;
      }
      System_Collections_Generic_List_Vector4___set_Item(customData2, i, *(UnityEngine_Vector4_o *)&v51, v55);
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
    sub_1B7641C(targetPS, *(_QWORD *)&particleNum);
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
  UnityEngine_ParticleSystem_o *Particles_69566840; // x0
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

  if ( (byte_4A30C13 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Vector3__get_Item__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    byte_4A30C13 = 1;
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
  Particles_69566840 = this->fields.targetPS;
  if ( !Particles_69566840 )
    goto LABEL_52;
  Particles_69566840 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__GetParticles_69566840(
                                                         Particles_69566840,
                                                         this->fields.particles,
                                                         0LL);
  if ( (int)Particles_69566840 < 1 )
    return;
  useVertexIndices = this->fields.useVertexIndices;
  if ( !useVertexIndices )
    goto LABEL_52;
  size = useVertexIndices->fields._size;
  v12 = (int)Particles_69566840 <= size ? (int)Particles_69566840 : size;
  ParticleAttatchMesh__BakeMesh(this, v8);
  ParticleAttatchMesh__UpdateCustomData(this, v12, v13);
  Particles_69566840 = this->fields.targetPS;
  if ( !Particles_69566840 )
    goto LABEL_52;
  Particles_69566840 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Particles_69566840,
                                                         0LL);
  if ( !Particles_69566840 )
    goto LABEL_52;
  Particles_69566840 = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Particles_69566840,
                                                         0LL);
  if ( !Particles_69566840 )
    goto LABEL_52;
  v14 = (UnityEngine_Transform_o *)Particles_69566840;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Particles_69566840, 0LL);
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
    Particles_69566840 = (UnityEngine_ParticleSystem_o *)this->fields.targetRenderer;
    if ( !Particles_69566840 )
      goto LABEL_52;
    Particles_69566840 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Particles_69566840,
                                                           0LL);
    if ( !Particles_69566840 )
      goto LABEL_52;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Particles_69566840, 0LL);
  }
  v19 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v14, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Particles_69566840 = (UnityEngine_ParticleSystem_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  if ( !transform )
    goto LABEL_52;
  v20 = (char)Particles_69566840;
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
  if ( !byte_4A28BB6 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v8);
    byte_4A28BB6 = 1;
  }
  Particles_69566840 = this->fields.targetPS;
  if ( !Particles_69566840 )
LABEL_52:
    sub_1B7641C(Particles_69566840, v8);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v37 = static_fields->oneVector.fields.x;
  v38 = static_fields->oneVector.fields.y;
  v39 = static_fields->oneVector.fields.z;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Particles_69566840, 0LL).fields.m_ParticleSystem;
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
      Particles_69566840 = (UnityEngine_ParticleSystem_o *)this->fields.useVertexIndices;
      if ( !Particles_69566840 )
        goto LABEL_52;
      Particles_69566840 = (UnityEngine_ParticleSystem_o *)System_Collections_Generic_List_int___get_Item(
                                                             (System_Collections_Generic_List_int__o *)Particles_69566840,
                                                             v44,
                                                             (const MethodInfo_34BA2C0 *)Method_System_Collections_Generic_List_int__get_Item__);
      particles = this->fields.particles;
      if ( !particles )
        goto LABEL_52;
      v47 = (int)Particles_69566840;
      Particles_69566840 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_69566840 )
        goto LABEL_52;
      Item = (unsigned int)System_Collections_Generic_List_Vector3___get_Item(
                             (System_Collections_Generic_List_Vector3__o *)Particles_69566840,
                             v47,
                             (const MethodInfo_352D600 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      Particles_69566840 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_69566840 )
        goto LABEL_52;
      v49 = *(float *)&Item;
      *(UnityEngine_Vector3_o *)(&v50 - 1) = System_Collections_Generic_List_Vector3___get_Item(
                                               (System_Collections_Generic_List_Vector3__o *)Particles_69566840,
                                               v47,
                                               (const MethodInfo_352D600 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      Particles_69566840 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_69566840 )
        goto LABEL_52;
      v51 = v50;
      *(UnityEngine_Vector3_o *)(&v54 - 2) = System_Collections_Generic_List_Vector3___get_Item(
                                               (System_Collections_Generic_List_Vector3__o *)Particles_69566840,
                                               v47,
                                               (const MethodInfo_352D600 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( v44 >= particles->max_length )
        sub_1B76424(v52, v53);
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
  Particles_69566840 = this->fields.targetPS;
  if ( !Particles_69566840 )
    goto LABEL_52;
  UnityEngine_ParticleSystem__SetParticles_69566572(Particles_69566840, this->fields.particles, v12, 0LL);
}