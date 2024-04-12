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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *sharedMesh; // x21
  struct UnityEngine_Mesh_o **p_cacheMesh; // x21
  System_Collections_Generic_List_Vector3__o **p_cacheVertices; // x20
  System_Collections_Generic_List_Vector3__o *v21; // x22
  System_Collections_Generic_List_Vector3__o *v22; // x22
  __int64 v23; // x24
  unsigned __int64 v24; // x21
  System_Collections_Generic_List_Vector3__o *v25; // x26
  System_Collections_Generic_List_Vector3__o **v26; // x19
  struct System_Collections_Generic_List_Vector3__o *cacheVertices; // t1
  System_Collections_Generic_List_Vector3__o *v28; // x21
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADC0A & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__set_Item__);
    sub_B52984(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_B52984(&UnityEngine_MeshRenderer_TypeInfo);
    sub_B52984(&UnityEngine_Mesh_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    byte_42ADC0A = 1;
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
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
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
          sub_B52920(&this->fields.cacheMesh);
          p_cacheVertices = &this->fields.cacheVertices;
          if ( !this->fields.cacheVertices )
          {
            v21 = (System_Collections_Generic_List_Vector3__o *)sub_B52A54(System_Collections_Generic_List_Vector3__TypeInfo);
            System_Collections_Generic_List_Vector3____ctor(
              v21,
              (const MethodInfo_302E6A0 *)Method_System_Collections_Generic_List_Vector3___ctor__);
            *p_cacheVertices = v21;
            sub_B52920(&this->fields.cacheVertices);
          }
          gameObject = (UnityEngine_GameObject_o *)*p_cacheMesh;
          if ( !*p_cacheMesh )
            goto LABEL_49;
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *p_cacheVertices, 0LL);
          v22 = *p_cacheVertices;
          if ( !*p_cacheVertices )
            goto LABEL_49;
          v23 = 0LL;
          v24 = 0LL;
          while ( (__int64)v24 < v22->fields._size )
          {
            gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderer;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
                v25 = *p_cacheVertices;
                if ( *p_cacheVertices )
                {
                  if ( v24 >= (unsigned int)v25->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                  if ( gameObject )
                  {
                    v29 = UnityEngine_Transform__TransformPoint(
                            (UnityEngine_Transform_o *)gameObject,
                            *(UnityEngine_Vector3_o *)&v25->fields._items->m_Items[v23].fields.y,
                            0LL);
                    System_Collections_Generic_List_Vector3___set_Item(
                      v22,
                      v24,
                      v29,
                      (const MethodInfo_302F0C8 *)Method_System_Collections_Generic_List_Vector3__set_Item__);
                    v22 = *p_cacheVertices;
                    ++v24;
                    ++v23;
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
          v16 = (UnityEngine_Mesh_o *)sub_B52A54(UnityEngine_Mesh_TypeInfo);
          UnityEngine_Mesh___ctor(v16, 0LL);
          *p_bakedMesh = v16;
          sub_B52920(&this->fields.bakedMesh);
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
        UnityEngine_SkinnedMeshRenderer__BakeMesh_35698320(v13, this->fields.bakedMesh, 1, 0LL);
        this->fields.cacheMesh = this->fields.bakedMesh;
        sub_B52920(&this->fields.cacheMesh);
        cacheVertices = this->fields.cacheVertices;
        v26 = &this->fields.cacheVertices;
        if ( !cacheVertices )
        {
          v28 = (System_Collections_Generic_List_Vector3__o *)sub_B52A54(System_Collections_Generic_List_Vector3__TypeInfo);
          System_Collections_Generic_List_Vector3____ctor(
            v28,
            (const MethodInfo_302E6A0 *)Method_System_Collections_Generic_List_Vector3___ctor__);
          *v26 = v28;
          sub_B52920(v26);
        }
        gameObject = (UnityEngine_GameObject_o *)*p_bakedMesh;
        if ( *p_bakedMesh )
        {
          UnityEngine_Mesh__GetVertices((UnityEngine_Mesh_o *)gameObject, *v26, 0LL);
          return;
        }
LABEL_49:
        sub_B52A5C(gameObject, v11);
      }
    }
  }
}


void __fastcall ParticleAttatchMesh__CleanupCustomData(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  this->fields.customData1 = 0LL;
  sub_B52920(&this->fields.customData1);
  this->fields.customData2 = 0LL;
  sub_B52920(&this->fields.customData2);
  this->fields.meshColors = 0LL;
  sub_B52920(&this->fields.meshColors);
  this->fields.meshUVs1 = 0LL;
  sub_B52920(&this->fields.meshUVs1);
  this->fields.meshUVs2 = 0LL;
  sub_B52920(&this->fields.meshUVs2);
}


void __fastcall ParticleAttatchMesh__CleanupMesh(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Mesh_o **p_bakedMesh; // x20
  UnityEngine_Object_o *bakedMesh; // x21
  UnityEngine_Object_o *v5; // x21

  if ( (byte_42ADC09 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADC09 = 1;
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
    UnityEngine_Object__Destroy_35616956(v5, 0LL);
    *p_bakedMesh = 0LL;
    sub_B52920(&this->fields.bakedMesh);
  }
  this->fields.cacheMesh = 0LL;
  sub_B52920(&this->fields.cacheMesh);
  this->fields.cacheVertices = 0LL;
  sub_B52920(&this->fields.cacheVertices);
  this->fields.useVertexIndices = 0LL;
  sub_B52920(&this->fields.useVertexIndices);
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

  if ( (byte_42ADC06 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADC06 = 1;
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
      sub_B52A5C(gameObject, v5);
    }
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
    v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    UnityEngine_ParticleSystem_MainModule__set_maxParticles(v10, this->fields.orgMaxParticles, 0LL);
    this->fields.targetPS = 0LL;
    sub_B52920(&this->fields.targetPS);
  }
  this->fields.particles = 0LL;
  sub_B52920(&this->fields.particles);
  ParticleAttatchMesh__CleanupCustomData(this, v7);
  ParticleAttatchMesh__CleanupMesh(this, v8);
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

  if ( (byte_42ADC0C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADC0C = 1;
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
                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      }
LABEL_19:
      sub_B52A5C(result, v6);
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
  System_Collections_Generic_HashSet_Vector3__o *v3; // x20
  System_Collections_Generic_List_int__o *v4; // x21
  _BOOL8 v5; // x0
  __int64 v6; // x1
  signed __int64 size; // x8
  __int64 v8; // x23
  unsigned __int64 v9; // x22
  float *v10; // x8
  float v11; // s8
  float v12; // s9
  float v13; // s10
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADC0D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_Vector3__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Vector3__Contains__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Vector3___ctor___68489872);
    sub_B52984(&System_Collections_Generic_HashSet_Vector3__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42ADC0D = 1;
  }
  v3 = (System_Collections_Generic_HashSet_Vector3__o *)sub_B52A54(System_Collections_Generic_HashSet_Vector3__TypeInfo);
  System_Collections_Generic_HashSet_Vector3____ctor(
    v3,
    (const MethodInfo_24E698C *)Method_System_Collections_Generic_HashSet_Vector3___ctor___68489872);
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vertices )
    goto LABEL_14;
  LODWORD(size) = vertices->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v3 )
        break;
      v10 = (float *)((char *)vertices->fields._items + v8);
      v11 = v10[8];
      v12 = v10[9];
      v13 = v10[10];
      v15.fields.x = v11;
      v15.fields.y = v12;
      v15.fields.z = v13;
      v5 = System_Collections_Generic_HashSet_Vector3___Contains(
             v3,
             v15,
             (const MethodInfo_24E7014 *)Method_System_Collections_Generic_HashSet_Vector3__Contains__);
      if ( !v5 )
      {
        v16.fields.x = v11;
        v16.fields.y = v12;
        v16.fields.z = v13;
        v5 = System_Collections_Generic_HashSet_Vector3___Add(
               v3,
               v16,
               (const MethodInfo_24E7BA4 *)Method_System_Collections_Generic_HashSet_Vector3__Add__);
        if ( !v4 )
          break;
        System_Collections_Generic_List_int___Add(
          v4,
          v9,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      size = vertices->fields._size;
      ++v9;
      v8 += 12LL;
      if ( (__int64)v9 >= size )
        return v4;
    }
LABEL_14:
    sub_B52A5C(v5, v6);
  }
  return v4;
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
  struct System_Collections_Generic_List_int__o **p_useVertexIndices; // x19
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42ADC08 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADC08 = 1;
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
      this->fields.useVertexIndices = ParticleAttatchMesh__MergeVertexIndices(cacheVertices, v5);
      p_useVertexIndices = &this->fields.useVertexIndices;
      sub_B52920(p_useVertexIndices);
      if ( !*p_useVertexIndices )
        sub_B52A5C(v8, v9);
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
  UnityEngine_Object_o *TargetParticleSystem; // x22
  const MethodInfo *v8; // x1
  int32_t v9; // w0
  unsigned int v10; // w21
  __int64 v11; // x1
  UnityEngine_ParticleSystem_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v14; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v15; // 0:x0.8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADC05 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_ParticleSystem_Particle___TypeInfo);
    byte_42ADC05 = 1;
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
      TargetParticleSystem = (UnityEngine_Object_o *)ParticleAttatchMesh__GetTargetParticleSystem(this, v6);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(TargetParticleSystem, 0LL, 0LL) )
      {
        v9 = ParticleAttatchMesh__SetupMesh(this, v8);
        if ( v9 >= 1 )
        {
          v10 = v9;
          *p_targetPS = (struct UnityEngine_ParticleSystem_o *)TargetParticleSystem;
          sub_B52920(&this->fields.targetPS);
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
                v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem,
                this->fields.orgParticleScale = localScale,
                this->fields.orgMaxParticles = UnityEngine_ParticleSystem_MainModule__get_maxParticles(v14, 0LL),
                this->fields.particles = (struct UnityEngine_ParticleSystem_Particle_array *)sub_B5299C(
                                                                                               UnityEngine_ParticleSystem_Particle___TypeInfo,
                                                                                               v10),
                sub_B52920(&this->fields.particles),
                (gameObject = this->fields.targetPS) == 0LL) )
          {
LABEL_23:
            sub_B52A5C(gameObject, v11);
          }
          UnityEngine_ParticleSystem__SetParticles_51148844(gameObject, this->fields.particles, v10, 0LL);
          v15.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          UnityEngine_ParticleSystem_MainModule__set_maxParticles(v15, v10, 0LL);
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
  System_Collections_Generic_List_Vector4__o **p_customData1; // x21
  System_Collections_Generic_List_Vector4__o *v6; // x22
  System_Collections_Generic_List_Vector4__o **p_customData2; // x21
  System_Collections_Generic_List_Vector4__o *v8; // x22
  int32_t customDataType1; // w8
  System_Collections_Generic_List_Color__o *v10; // x22
  System_Collections_Generic_List_Vector2__o *v11; // x22
  System_Collections_Generic_List_Vector2__o *v12; // x22
  signed __int64 v13; // x21
  signed __int64 v14; // x22
  struct System_Collections_Generic_List_int__o *useVertexIndices; // x20
  int32_t v16; // w8
  __int64 v17; // x24
  struct System_Collections_Generic_List_Color__o *meshColors; // x25
  int v19; // w8
  System_Collections_Generic_List_Vector4__o *customData1; // x20
  int v21; // s0
  struct System_Collections_Generic_List_Vector2__o *meshUVs1; // x25
  int size; // w8
  int32_t customDataType2; // w8
  struct System_Collections_Generic_List_Color__o *v28; // x25
  int v29; // w8
  System_Collections_Generic_List_Vector4__o *customData2; // x20
  int v31; // s0
  struct System_Collections_Generic_List_Vector2__o *meshUVs2; // x25
  int v36; // w8

  v4 = this;
  if ( (byte_42ADC0B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector4___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Color___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector4__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Color__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Color__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector4__set_Item__);
    sub_B52984(&System_Collections_Generic_List_Vector4__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_Vector2__TypeInfo);
    this = (ParticleAttatchMesh_o *)sub_B52984(&System_Collections_Generic_List_Color__TypeInfo);
    byte_42ADC0B = 1;
  }
  if ( v4->fields.customDataType1 )
  {
    p_customData1 = &v4->fields.customData1;
    if ( !v4->fields.customData1 )
    {
      v6 = (System_Collections_Generic_List_Vector4__o *)sub_B52A54(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v6,
        (const MethodInfo_3031840 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData1 = v6;
      sub_B52920(&v4->fields.customData1);
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
      v8 = (System_Collections_Generic_List_Vector4__o *)sub_B52A54(System_Collections_Generic_List_Vector4__TypeInfo);
      System_Collections_Generic_List_Vector4____ctor(
        v8,
        (const MethodInfo_3031840 *)Method_System_Collections_Generic_List_Vector4___ctor__);
      *p_customData2 = v8;
      sub_B52920(&v4->fields.customData2);
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
      v10 = (System_Collections_Generic_List_Color__o *)sub_B52A54(System_Collections_Generic_List_Color__TypeInfo);
      System_Collections_Generic_List_Color____ctor(
        v10,
        (const MethodInfo_300FC4C *)Method_System_Collections_Generic_List_Color___ctor__);
      v4->fields.meshColors = v10;
      sub_B52920(&v4->fields.meshColors);
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
      v11 = (System_Collections_Generic_List_Vector2__o *)sub_B52A54(System_Collections_Generic_List_Vector2__TypeInfo);
      System_Collections_Generic_List_Vector2____ctor(
        v11,
        (const MethodInfo_302B60C *)Method_System_Collections_Generic_List_Vector2___ctor__);
      v4->fields.meshUVs1 = v11;
      sub_B52920(&v4->fields.meshUVs1);
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
      v4->fields.meshUVs2 = v4->fields.meshUVs1;
      sub_B52920(&v4->fields.meshUVs2);
    }
    else
    {
      if ( !v4->fields.meshUVs2 )
      {
        v12 = (System_Collections_Generic_List_Vector2__o *)sub_B52A54(System_Collections_Generic_List_Vector2__TypeInfo);
        System_Collections_Generic_List_Vector2____ctor(
          v12,
          (const MethodInfo_302B60C *)Method_System_Collections_Generic_List_Vector2___ctor__);
        v4->fields.meshUVs2 = v12;
        sub_B52920(&v4->fields.meshUVs2);
      }
      this = (ParticleAttatchMesh_o *)v4->fields.cacheMesh;
      if ( !this )
        goto LABEL_83;
      UnityEngine_Mesh__GetUVs((UnityEngine_Mesh_o *)this, v4->fields.customDataUVIndex2, v4->fields.meshUVs2, 0LL);
    }
  }
  if ( particleNum >= 1 )
  {
    v13 = 0LL;
    v14 = particleNum;
    do
    {
      useVertexIndices = v4->fields.useVertexIndices;
      if ( !useVertexIndices )
        goto LABEL_83;
      if ( v13 >= (unsigned __int64)(unsigned int)useVertexIndices->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v16 = v4->fields.customDataType1;
      v17 = useVertexIndices->fields._items->m_Items[v13 + 1];
      if ( v16 == 2 )
      {
        if ( (v17 & 0x80000000) == 0 )
        {
          meshUVs1 = v4->fields.meshUVs1;
          if ( !meshUVs1 )
            goto LABEL_83;
          size = meshUVs1->fields._size;
          if ( (int)v17 < size )
          {
            customData1 = v4->fields.customData1;
            if ( !customData1 )
              goto LABEL_83;
            if ( v13 < customData1->fields._size )
            {
              if ( size <= (unsigned int)v17 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              *(UnityEngine_Vector4_o *)&v21 = UnityEngine_Vector4__op_Implicit_50870472(
                                                 *(UnityEngine_Vector2_o *)&meshUVs1->fields._items->m_Items[v17].fields.y,
                                                 0LL);
              goto LABEL_55;
            }
          }
        }
      }
      else if ( v16 == 1 && (v17 & 0x80000000) == 0 )
      {
        meshColors = v4->fields.meshColors;
        if ( !meshColors )
          goto LABEL_83;
        v19 = meshColors->fields._size;
        if ( (int)v17 < v19 )
        {
          customData1 = v4->fields.customData1;
          if ( !customData1 )
            goto LABEL_83;
          if ( v13 < customData1->fields._size )
          {
            if ( v19 <= (unsigned int)v17 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            *(UnityEngine_Vector4_o *)&v21 = UnityEngine_Color__op_Implicit(
                                               *(UnityEngine_Color_o *)&meshColors->fields._items->m_Items[v17].fields.g,
                                               0LL);
LABEL_55:
            System_Collections_Generic_List_Vector4___set_Item(
              customData1,
              v13,
              *(UnityEngine_Vector4_o *)&v21,
              (const MethodInfo_3032260 *)Method_System_Collections_Generic_List_Vector4__set_Item__);
          }
        }
      }
      customDataType2 = v4->fields.customDataType2;
      if ( customDataType2 == 2 )
      {
        if ( (v17 & 0x80000000) != 0 )
          goto LABEL_75;
        meshUVs2 = v4->fields.meshUVs2;
        if ( !meshUVs2 )
          goto LABEL_83;
        v36 = meshUVs2->fields._size;
        if ( (int)v17 >= v36 )
          goto LABEL_75;
        customData2 = v4->fields.customData2;
        if ( !customData2 )
          goto LABEL_83;
        if ( v13 >= customData2->fields._size )
          goto LABEL_75;
        if ( v36 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        *(UnityEngine_Vector4_o *)&v31 = UnityEngine_Vector4__op_Implicit_50870472(
                                           *(UnityEngine_Vector2_o *)&meshUVs2->fields._items->m_Items[v17].fields.y,
                                           0LL);
      }
      else
      {
        if ( customDataType2 != 1 || (v17 & 0x80000000) != 0 )
          goto LABEL_75;
        v28 = v4->fields.meshColors;
        if ( !v28 )
          goto LABEL_83;
        v29 = v28->fields._size;
        if ( (int)v17 >= v29 )
          goto LABEL_75;
        customData2 = v4->fields.customData2;
        if ( !customData2 )
          goto LABEL_83;
        if ( v13 >= customData2->fields._size )
          goto LABEL_75;
        if ( v29 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        *(UnityEngine_Vector4_o *)&v31 = UnityEngine_Color__op_Implicit(
                                           *(UnityEngine_Color_o *)&v28->fields._items->m_Items[v17].fields.g,
                                           0LL);
      }
      System_Collections_Generic_List_Vector4___set_Item(
        customData2,
        v13,
        *(UnityEngine_Vector4_o *)&v31,
        (const MethodInfo_3032260 *)Method_System_Collections_Generic_List_Vector4__set_Item__);
LABEL_75:
      ++v13;
    }
    while ( v13 < v14 );
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
    sub_B52A5C(this, *(_QWORD *)&particleNum);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ParticleAttatchMesh__UpdateParticle(ParticleAttatchMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetPS; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  const MethodInfo *v5; // x1
  UnityEngine_ParticleSystem_o *Particles_51149132; // x0
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

  if ( (byte_42ADC07 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADC07 = 1;
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
  Particles_51149132 = this->fields.targetPS;
  if ( !Particles_51149132 )
    goto LABEL_56;
  Particles_51149132 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__GetParticles_51149132(
                                                         Particles_51149132,
                                                         this->fields.particles,
                                                         0LL);
  if ( (int)Particles_51149132 < 1 )
    return;
  useVertexIndices = this->fields.useVertexIndices;
  if ( !useVertexIndices )
    goto LABEL_56;
  size = useVertexIndices->fields._size;
  v9 = (int)Particles_51149132 <= size ? (int)Particles_51149132 : size;
  ParticleAttatchMesh__BakeMesh(this, v5);
  ParticleAttatchMesh__UpdateCustomData(this, v9, v10);
  Particles_51149132 = this->fields.targetPS;
  if ( !Particles_51149132 )
    goto LABEL_56;
  Particles_51149132 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Particles_51149132,
                                                         0LL);
  if ( !Particles_51149132 )
    goto LABEL_56;
  Particles_51149132 = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Particles_51149132,
                                                         0LL);
  if ( !Particles_51149132 )
    goto LABEL_56;
  v11 = (UnityEngine_Transform_o *)Particles_51149132;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Particles_51149132, 0LL);
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
    Particles_51149132 = (UnityEngine_ParticleSystem_o *)this->fields.targetRenderer;
    if ( !Particles_51149132 )
      goto LABEL_56;
    Particles_51149132 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Particles_51149132,
                                                           0LL);
    if ( !Particles_51149132 )
      goto LABEL_56;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Particles_51149132, 0LL);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v11, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Particles_51149132 = (UnityEngine_ParticleSystem_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
  if ( !transform )
    goto LABEL_56;
  v17 = (char)Particles_51149132;
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
  Particles_51149132 = this->fields.targetPS;
  if ( !Particles_51149132 )
LABEL_56:
    sub_B52A5C(Particles_51149132, v5);
  v36 = v33;
  v37 = v34;
  v38 = v35;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Particles_51149132, 0LL).fields.m_ParticleSystem;
  v50.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  Particles_51149132 = (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem_MainModule__get_scalingMode(v50, 0LL);
  if ( (_DWORD)Particles_51149132 == 1 )
  {
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localScale(v11, 0LL);
    goto LABEL_41;
  }
  if ( !(_DWORD)Particles_51149132 )
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      particles = this->fields.particles;
      if ( !particles )
        goto LABEL_56;
      cacheVertices = this->fields.cacheVertices;
      if ( !cacheVertices )
        goto LABEL_56;
      v47 = v44->fields._items->m_Items[v42 + 1];
      if ( cacheVertices->fields._size <= (unsigned int)v47 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( v42 >= particles->max_length )
      {
        v48 = sub_B52A88(Particles_51149132);
        sub_B52A28(v48, 0LL);
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
  Particles_51149132 = this->fields.targetPS;
  if ( !Particles_51149132 )
    goto LABEL_56;
  UnityEngine_ParticleSystem__SetParticles_51148844(Particles_51149132, this->fields.particles, v9, 0LL);
}