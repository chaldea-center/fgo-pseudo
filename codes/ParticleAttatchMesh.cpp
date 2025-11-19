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
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Vector3__o **p_cacheVertices; // x20
  System_Collections_Generic_List_Vector3__o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_Vector3__o *v24; // x22
  int32_t v25; // w21
  UnityEngine_Transform_o *v26; // x23
  UnityEngine_Mesh_o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UnityEngine_Mesh_o *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  CGThumbnailListItem_o *v33; // x19
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // t1
  System_Collections_Generic_List_Vector3__o *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB9746 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C6BA08(&UnityEngine_MeshRenderer_TypeInfo);
    sub_1C6BA08(&UnityEngine_Mesh_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    byte_4CB9746 = 1;
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
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
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
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cacheMesh, (int32_t)v16, v18, v19);
          p_cacheVertices = &this->fields.cacheVertices;
          if ( !this->fields.cacheVertices )
          {
            v21 = (System_Collections_Generic_List_Vector3__o *)sub_1C6BC54(System_Collections_Generic_List_Vector3__TypeInfo);
            System_Collections_Generic_List_Vector3____ctor(
              v21,
              (const MethodInfo_3882604 *)Method_System_Collections_Generic_List_Vector3___ctor__);
            *p_cacheVertices = v21;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cacheVertices, (int32_t)v21, v22, v23);
          }
          gameObject = (UnityEngine_GameObject_o *)*p_cacheMesh;
          if ( !*p_cacheMesh )
            goto LABEL_44;
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *p_cacheVertices, 0);
          v24 = *p_cacheVertices;
          if ( !*p_cacheVertices )
            goto LABEL_44;
          v25 = 0;
          while ( v25 < v24->fields._size )
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
                  v26 = (UnityEngine_Transform_o *)gameObject;
                  Item = System_Collections_Generic_List_Vector3___get_Item(
                           *p_cacheVertices,
                           v25,
                           (const MethodInfo_3882B68 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
                  if ( v26 )
                  {
                    v39 = UnityEngine_Transform__TransformPoint(v26, Item, 0);
                    System_Collections_Generic_List_Vector3___set_Item(
                      v24,
                      v25,
                      v39,
                      (const MethodInfo_3882BC8 *)Method_System_Collections_Generic_List_Vector3__set_Item__);
                    v24 = *p_cacheVertices;
                    ++v25;
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
            UnityEngine_SkinnedMeshRenderer__BakeMesh_71532296(v12, this->fields.bakedMesh, 1, 0);
            v30 = this->fields.bakedMesh;
            this->fields.cacheMesh = v30;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cacheMesh, (int32_t)v30, v31, v32);
            cacheVertices = this->fields.cacheVertices;
            v33 = (CGThumbnailListItem_o *)&this->fields.cacheVertices;
            if ( !cacheVertices )
            {
              v35 = (System_Collections_Generic_List_Vector3__o *)sub_1C6BC54(System_Collections_Generic_List_Vector3__TypeInfo);
              System_Collections_Generic_List_Vector3____ctor(
                v35,
                (const MethodInfo_3882604 *)Method_System_Collections_Generic_List_Vector3___ctor__);
              v33->klass = (CGThumbnailListItem_c *)v35;
              sub_1C6B9AC(v33, (int32_t)v35, v36, v37);
            }
            gameObject = (UnityEngine_GameObject_o *)*p_bakedMesh;
            if ( *p_bakedMesh )
            {
              UnityEngine_Mesh__GetVertices(
                (UnityEngine_Mesh_o *)gameObject,
                (System_Collections_Generic_List_Vector3__o *)v33->klass,
                0);
              return;
            }
LABEL_44:
            sub_1C6BC60(gameObject, v11);
          }
        }
        else if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          goto LABEL_12;
        }
        v27 = (UnityEngine_Mesh_o *)sub_1C6BC54(UnityEngine_Mesh_TypeInfo);
        UnityEngine_Mesh___ctor(v27, 0);
        *p_bakedMesh = v27;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bakedMesh, (int32_t)v27, v28, v29);
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
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  this->fields.customData1 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.customData1, 0, v2, v3);
  this->fields.customData2 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.customData2, 0, v5, v6);
  this->fields.meshColors = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshColors, 0, v7, v8);
  this->fields.meshUVs1 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshUVs1, 0, v9, v10);
  this->fields.meshUVs2 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshUVs2, 0, v11, v12);
}


void ParticleAttatchMesh__CleanupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB9745 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9745 = 1;
  }
  p_bakedMesh = &this->fields.bakedMesh;
  bakedMesh = (UnityEngine_Object_o *)this->fields.bakedMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bakedMesh, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)*p_bakedMesh;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v7, 0);
    *p_bakedMesh = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bakedMesh, 0, v8, v9);
  }
  this->fields.cacheMesh = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cacheMesh, 0, v5, v6);
  this->fields.cacheVertices = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cacheVertices, 0, v10, v11);
  this->fields.useVertexIndices = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.useVertexIndices, 0, v12, v13);
}


void ParticleAttatchMesh__CleanupParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_o **p_targetPS; // x20
  UnityEngine_Object_o *targetPS; // x21
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_ParticleSystem_MainModule_o v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB9742 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9742 = 1;
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
      sub_1C6BC60(gameObject, v5);
    }
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)gameObject, 0).fields.m_ParticleSystem;
    v9.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(v9, this->fields.orgMaxParticles, 0);
    this->fields.targetPS = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetPS, 0, v10, v11);
  }
  this->fields.particles = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.particles, 0, v6, v7);
  ParticleAttatchMesh__CleanupCustomData(this, v12);
  ParticleAttatchMesh__CleanupMesh(this, v13);
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

  if ( (byte_4CB9748 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9748 = 1;
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
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      }
LABEL_17:
      sub_1C6BC60(result, v6);
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

  if ( (byte_4CB9749 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Vector3__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Vector3__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Vector3___ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_Vector3__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB9749 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_Vector3__o *)sub_1C6BC54(System_Collections_Generic_HashSet_Vector3__TypeInfo);
  System_Collections_Generic_HashSet_Vector3____ctor(
    v3,
    (const MethodInfo_36BF9D8 *)Method_System_Collections_Generic_HashSet_Vector3___ctor__);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
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
               (const MethodInfo_3882B68 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !v3 )
        break;
      x = Item.fields.x;
      y = Item.fields.y;
      z = Item.fields.z;
      if ( !System_Collections_Generic_HashSet_Vector3___Contains(
              v3,
              Item,
              (const MethodInfo_36C00D0 *)Method_System_Collections_Generic_HashSet_Vector3__Contains__) )
      {
        v16.fields.x = x;
        v16.fields.y = y;
        v16.fields.z = z;
        v5 = System_Collections_Generic_HashSet_Vector3___Add(
               v3,
               v16,
               (const MethodInfo_36C0C1C *)Method_System_Collections_Generic_HashSet_Vector3__Add__);
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
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C6BC60(v5, v6);
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
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4CB9744 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9744 = 1;
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
      sub_1C6B9AC((CGThumbnailListItem_o *)p_useVertexIndices, (int32_t)v7, v9, v10);
      if ( !*p_useVertexIndices )
        sub_1C6BC60(v11, v12);
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
  const MethodInfo *v11; // x3
  unsigned int v12; // w21
  __int64 v13; // x1
  UnityEngine_ParticleSystem_o *gameObject; // x0
  UnityEngine_ParticleSystem_MainModule_o v15; // x0
  struct UnityEngine_ParticleSystem_Particle_array *v16; // x0
  struct UnityEngine_ParticleSystem_Particle_array **p_particles; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_ParticleSystem_MainModule_o v20; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB9741 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UnityEngine_ParticleSystem_Particle___TypeInfo);
    byte_4CB9741 = 1;
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
          v12 = v9;
          *p_targetPS = (struct UnityEngine_ParticleSystem_o *)TargetParticleSystem;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetPS, (int32_t)TargetParticleSystem, v10, v11);
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
          if ( !gameObject )
            goto LABEL_20;
          localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          v15.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          this->fields.orgParticleScale = localScale;
          this->fields.orgMaxParticles = UnityEngine_ParticleSystem_MainModule__get_maxParticles(v15, 0);
          v16 = (struct UnityEngine_ParticleSystem_Particle_array *)sub_1C6BAB0(
                                                                      UnityEngine_ParticleSystem_Particle___TypeInfo,
                                                                      v12);
          this->fields.particles = v16;
          p_particles = &this->fields.particles;
          sub_1C6B9AC((CGThumbnailListItem_o *)p_particles, (int32_t)v16, v18, v19);
          gameObject = (UnityEngine_ParticleSystem_o *)*(p_particles - 1);
          if ( !gameObject )
LABEL_20:
            sub_1C6BC60(gameObject, v13);
          UnityEngine_ParticleSystem__SetParticles_71944400(gameObject, *p_particles, v12, 0);
          v20.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          UnityEngine_ParticleSystem_MainModule__set_maxParticles(v20, v12, 0);
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
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_Vector4__o **p_customData1; // x21
  System_Collections_Generic_List_Vector4__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_ParticleSystem_o *targetPS; // x0
  System_Collections_Generic_List_Vector4__o **p_customData2; // x21
  System_Collections_Generic_List_Vector4__o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t customDataType1; // w8
  System_Collections_Generic_List_Color__o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Vector2__o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_Vector2__o *meshUVs1; // x1
  System_Collections_Generic_List_Vector2__o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t i; // w21
  int32_t Item; // w0
  int32_t v28; // w8
  int32_t v29; // w22
  struct System_Collections_Generic_List_Vector4__o *customData1; // x23
  const MethodInfo_388556C *v31; // x2
  int32_t customDataType2; // w8
  struct System_Collections_Generic_List_Vector4__o *customData2; // x23
  const MethodInfo_388556C *v34; // x2
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB9747 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector4___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Color___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector4__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Color__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Color__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector4__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_Color__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_Vector4__TypeInfo);
    byte_4CB9747 = 1;
  }
  if ( this->fields.customDataType1 )
  {
    p_customData1 = &this->fields.customData1;
    if ( !this->fields.customData1 )
    {
      v7 = (System_Collections_Generic_List_Vector4__o *)sub_1C6BC54(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v7,
        (const MethodInfo_3884FAC *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData1 = v7;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.customData1, (int32_t)v7, v8, v9);
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
      v12 = (System_Collections_Generic_List_Vector4__o *)sub_1C6BC54(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v12,
        (const MethodInfo_3884FAC *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData2 = v12;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.customData2, (int32_t)v12, v13, v14);
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
      v16 = (System_Collections_Generic_List_Color__o *)sub_1C6BC54(System_Collections_Generic_List_Color__TypeInfo);
      System_Collections_Generic_List_Color____ctor(
        v16,
        (const MethodInfo_37C1608 *)Method_System_Collections_Generic_List_Color___ctor__);
      this->fields.meshColors = v16;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshColors, (int32_t)v16, v17, v18);
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
      v19 = (System_Collections_Generic_List_Vector2__o *)sub_1C6BC54(System_Collections_Generic_List_Vector2__TypeInfo);
      System_Collections_Generic_List_Vector2____ctor(
        v19,
        (const MethodInfo_387FD58 *)Method_System_Collections_Generic_List_Vector2___ctor__);
      this->fields.meshUVs1 = v19;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshUVs1, (int32_t)v19, v20, v21);
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
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshUVs2, (int32_t)meshUVs1, (int32_t)method, v3);
    }
    else
    {
      if ( !this->fields.meshUVs2 )
      {
        v23 = (System_Collections_Generic_List_Vector2__o *)sub_1C6BC54(System_Collections_Generic_List_Vector2__TypeInfo);
        System_Collections_Generic_List_Vector2____ctor(
          v23,
          (const MethodInfo_387FD58 *)Method_System_Collections_Generic_List_Vector2___ctor__);
        this->fields.meshUVs2 = v23;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshUVs2, (int32_t)v23, v24, v25);
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
               (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
      v28 = this->fields.customDataType1;
      v29 = Item;
      if ( v28 == 2 )
      {
        if ( (Item & 0x80000000) == 0 )
        {
          targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshUVs1;
          if ( !targetPS )
            goto LABEL_73;
          if ( v29 < SLODWORD(targetPS[1].klass) )
          {
            customData1 = this->fields.customData1;
            if ( !customData1 )
              goto LABEL_73;
            if ( i < customData1->fields._size )
            {
              *(UnityEngine_Vector2_o *)&v35.fields.r = System_Collections_Generic_List_Vector2___get_Item(
                                                          (System_Collections_Generic_List_Vector2__o *)targetPS,
                                                          v29,
                                                          (const MethodInfo_38802BC *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              v31 = (const MethodInfo_388556C *)Method_System_Collections_Generic_List_Vector4__set_Item__;
              v35.fields.b = 0.0;
              v35.fields.a = 0.0;
              goto LABEL_49;
            }
          }
        }
      }
      else if ( v28 == 1 && (Item & 0x80000000) == 0 )
      {
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshColors;
        if ( !targetPS )
          goto LABEL_73;
        if ( v29 < SLODWORD(targetPS[1].klass) )
        {
          customData1 = this->fields.customData1;
          if ( !customData1 )
            goto LABEL_73;
          if ( i < customData1->fields._size )
          {
            v35 = System_Collections_Generic_List_Color___get_Item(
                    (System_Collections_Generic_List_Color__o *)targetPS,
                    v29,
                    (const MethodInfo_37C1B6C *)Method_System_Collections_Generic_List_Color__get_Item__);
            v31 = (const MethodInfo_388556C *)Method_System_Collections_Generic_List_Vector4__set_Item__;
LABEL_49:
            System_Collections_Generic_List_Vector4___set_Item(customData1, i, (UnityEngine_Vector4_o)v35, v31);
          }
        }
      }
      customDataType2 = this->fields.customDataType2;
      if ( customDataType2 == 2 )
      {
        if ( v29 < 0 )
          continue;
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshUVs2;
        if ( !targetPS )
          goto LABEL_73;
        if ( v29 >= SLODWORD(targetPS[1].klass) )
          continue;
        customData2 = this->fields.customData2;
        if ( !customData2 )
          goto LABEL_73;
        if ( i >= customData2->fields._size )
          continue;
        *(UnityEngine_Vector2_o *)&v36.fields.r = System_Collections_Generic_List_Vector2___get_Item(
                                                    (System_Collections_Generic_List_Vector2__o *)targetPS,
                                                    v29,
                                                    (const MethodInfo_38802BC *)Method_System_Collections_Generic_List_Vector2__get_Item__);
        v34 = (const MethodInfo_388556C *)Method_System_Collections_Generic_List_Vector4__set_Item__;
        v36.fields.b = 0.0;
        v36.fields.a = 0.0;
      }
      else
      {
        if ( customDataType2 != 1 || v29 < 0 )
          continue;
        targetPS = (UnityEngine_ParticleSystem_o *)this->fields.meshColors;
        if ( !targetPS )
          goto LABEL_73;
        if ( v29 >= SLODWORD(targetPS[1].klass) )
          continue;
        customData2 = this->fields.customData2;
        if ( !customData2 )
          goto LABEL_73;
        if ( i >= customData2->fields._size )
          continue;
        v36 = System_Collections_Generic_List_Color___get_Item(
                (System_Collections_Generic_List_Color__o *)targetPS,
                v29,
                (const MethodInfo_37C1B6C *)Method_System_Collections_Generic_List_Color__get_Item__);
        v34 = (const MethodInfo_388556C *)Method_System_Collections_Generic_List_Vector4__set_Item__;
      }
      System_Collections_Generic_List_Vector4___set_Item(customData2, i, (UnityEngine_Vector4_o)v36, v34);
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
    sub_1C6BC60(targetPS, *(_QWORD *)&particleNum);
  }
}


// local variable allocation has failed, the output may be wrong!
void ParticleAttatchMesh__UpdateParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetPS; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v5; // x1
  UnityEngine_ParticleSystem_o *Particles_71944668; // x0
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
  float v26; // s0 OVERLAPPED
  float v27; // s1
  float v28; // s2
  float v29; // s9
  float v30; // s10
  float v31; // s11
  float v32; // s12
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v34; // s8
  float v35; // s9
  float v36; // s10
  UnityEngine_ParticleSystem_MainModule_o v37; // x0
  int32_t scalingMode; // w0
  unsigned __int64 v39; // x21
  __int64 v40; // x24
  struct UnityEngine_ParticleSystem_Particle_array *particles; // x27
  int32_t v42; // w22
  unsigned int Item; // s0
  float v44; // s11
  float v45; // s12
  __int64 v46; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB9743 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9743 = 1;
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
  Particles_71944668 = this->fields.targetPS;
  if ( !Particles_71944668 )
    goto LABEL_52;
  Particles_71944668 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__GetParticles_71944668(
                                                         Particles_71944668,
                                                         this->fields.particles,
                                                         0);
  if ( (int)Particles_71944668 < 1 )
    return;
  useVertexIndices = this->fields.useVertexIndices;
  if ( !useVertexIndices )
    goto LABEL_52;
  size = useVertexIndices->fields._size;
  v9 = (int)Particles_71944668 <= size ? (int)Particles_71944668 : size;
  ParticleAttatchMesh__BakeMesh(this, v5);
  ParticleAttatchMesh__UpdateCustomData(this, v9, v10);
  Particles_71944668 = this->fields.targetPS;
  if ( !Particles_71944668 )
    goto LABEL_52;
  Particles_71944668 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Particles_71944668,
                                                         0);
  if ( !Particles_71944668 )
    goto LABEL_52;
  Particles_71944668 = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Particles_71944668,
                                                         0);
  if ( !Particles_71944668 )
    goto LABEL_52;
  v11 = (UnityEngine_Transform_o *)Particles_71944668;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Particles_71944668, 0);
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
    Particles_71944668 = (UnityEngine_ParticleSystem_o *)this->fields.targetRenderer;
    if ( !Particles_71944668 )
      goto LABEL_52;
    Particles_71944668 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Particles_71944668,
                                                           0);
    if ( !Particles_71944668 )
      goto LABEL_52;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Particles_71944668, 0);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v11, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Particles_71944668 = (UnityEngine_ParticleSystem_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
  if ( !transform )
    goto LABEL_52;
  v17 = (char)Particles_71944668;
  LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0);
  if ( (v17 & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_52;
    lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale(v14, 0);
    x = this->fields.orgParticleScale.fields.x;
    v21 = *(float *)&lossyScale;
    v48 = UnityEngine_Transform__get_lossyScale(transform, 0);
    y = v48.fields.y;
    v49 = UnityEngine_Transform__get_lossyScale(v14, 0);
    v23 = this->fields.orgParticleScale.fields.y;
    v24 = v49.fields.y;
    v50 = UnityEngine_Transform__get_lossyScale(transform, 0);
    z = v50.fields.z;
    v51 = UnityEngine_Transform__get_lossyScale(v14, 0);
    v26 = x * (float)(v18 / v21);
    v27 = v23 * (float)(y / v24);
    v28 = this->fields.orgParticleScale.fields.z * (float)(z / v51.fields.z);
  }
  else
  {
    v29 = COERCE_FLOAT(UnityEngine_Transform__get_lossyScale(v11, 0));
    v52 = UnityEngine_Transform__get_lossyScale(transform, 0);
    v30 = v52.fields.y;
    v53 = UnityEngine_Transform__get_lossyScale(v11, 0);
    v31 = v53.fields.y;
    v54 = UnityEngine_Transform__get_lossyScale(transform, 0);
    v32 = v54.fields.z;
    v55 = UnityEngine_Transform__get_lossyScale(v11, 0);
    v26 = v18 / v29;
    v27 = v30 / v31;
    v28 = v32 / v55.fields.z;
  }
  UnityEngine_Transform__set_localScale(v11, *(UnityEngine_Vector3_o *)&v26, 0);
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  Particles_71944668 = this->fields.targetPS;
  if ( !Particles_71944668 )
LABEL_52:
    sub_1C6BC60(Particles_71944668, v5);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v34 = static_fields->oneVector.fields.x;
  v35 = static_fields->oneVector.fields.y;
  v36 = static_fields->oneVector.fields.z;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Particles_71944668, 0).fields.m_ParticleSystem;
  v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  scalingMode = UnityEngine_ParticleSystem_MainModule__get_scalingMode(v37, 0);
  if ( scalingMode == 1 )
  {
    localScale = UnityEngine_Transform__get_localScale(v11, 0);
    goto LABEL_39;
  }
  if ( !scalingMode )
  {
    localScale = UnityEngine_Transform__get_lossyScale(v11, 0);
LABEL_39:
    v34 = localScale.fields.x;
    v35 = localScale.fields.y;
    v36 = localScale.fields.z;
  }
  if ( v9 >= 1 )
  {
    v39 = 0;
    v40 = 32;
    do
    {
      Particles_71944668 = (UnityEngine_ParticleSystem_o *)this->fields.useVertexIndices;
      if ( !Particles_71944668 )
        goto LABEL_52;
      Particles_71944668 = (UnityEngine_ParticleSystem_o *)System_Collections_Generic_List_int___get_Item(
                                                             (System_Collections_Generic_List_int__o *)Particles_71944668,
                                                             v39,
                                                             (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
      particles = this->fields.particles;
      if ( !particles )
        goto LABEL_52;
      v42 = (int)Particles_71944668;
      Particles_71944668 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_71944668 )
        goto LABEL_52;
      Item = (unsigned int)System_Collections_Generic_List_Vector3___get_Item(
                             (System_Collections_Generic_List_Vector3__o *)Particles_71944668,
                             v42,
                             (const MethodInfo_3882B68 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      Particles_71944668 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_71944668 )
        goto LABEL_52;
      v44 = *(float *)&Item;
      v57 = System_Collections_Generic_List_Vector3___get_Item(
              (System_Collections_Generic_List_Vector3__o *)Particles_71944668,
              v42,
              (const MethodInfo_3882B68 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      Particles_71944668 = (UnityEngine_ParticleSystem_o *)this->fields.cacheVertices;
      if ( !Particles_71944668 )
        goto LABEL_52;
      v45 = v57.fields.y;
      v58 = System_Collections_Generic_List_Vector3___get_Item(
              (System_Collections_Generic_List_Vector3__o *)Particles_71944668,
              v42,
              (const MethodInfo_3882B68 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( v39 >= LODWORD(particles->max_length) )
        sub_1C6BC68(v46);
      v59.fields.z = v58.fields.z / v36;
      v59.fields.y = v45 / v35;
      v59.fields.x = v44 / v34;
      UnityEngine_ParticleSystem_Particle__set_position(
        (UnityEngine_ParticleSystem_Particle_o *)((char *)particles + v40),
        v59,
        0);
      ++v39;
      v40 += 132;
    }
    while ( v9 != v39 );
  }
  Particles_71944668 = this->fields.targetPS;
  if ( !Particles_71944668 )
    goto LABEL_52;
  UnityEngine_ParticleSystem__SetParticles_71944400(Particles_71944668, this->fields.particles, v9, 0);
}