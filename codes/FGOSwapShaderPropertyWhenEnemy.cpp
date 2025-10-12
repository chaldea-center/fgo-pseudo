void FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C36759 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C32C20(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo);
    sub_1C32C20(&StringLiteral_16180/*"_CullMode"*/);
    byte_4C36759 = 1;
  }
  v3 = sub_1C32CC8(FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, 1);
  if ( !v3 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C32E84(v3);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.targetRendererTypes = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetRendererTypes, v3, v4, v5);
  v6 = StringLiteral_16180/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16180/*"_CullMode"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.propertyName, v6, v7, v8);
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetRenderers, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGOSwapShaderPropertyWhenEnemy__OnDestroy(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *targetRenderers; // x0
  UnityEngine_Material_array *materials; // x0
  UnityEngine_Material_array *v5; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x24
  UnityEngine_Object_o *v8; // x21
  uint32_t cctor_finished; // w8
  struct System_Collections_Generic_List_Renderer__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C36758 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36758 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  targetRenderers = (System_Collections_Generic_List_object__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        targetRenderers,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v14 = v13;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v14.fields._current )
          sub_1C32E7C(0);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v14.fields._current, 0);
        v5 = materials;
        if ( !materials )
          sub_1C32E7C(0);
        max_length = materials->max_length;
        if ( (int)max_length >= 1 )
        {
          v7 = 0;
          do
          {
            if ( v7 >= (unsigned int)max_length )
              sub_1C32E84(materials);
            v8 = (UnityEngine_Object_o *)v5->m_Items[v7];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v8, 0, 0);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
              if ( this->fields.isDestroyImmediate )
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__DestroyImmediate_71223828(v8, 0);
              }
              else
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__Destroy_71223640(v8, 0);
              }
            }
            LODWORD(max_length) = v5->max_length;
            ++v7;
          }
          while ( (__int64)v7 < (int)max_length );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v10 = this->fields.targetRenderers;
    if ( !v10 )
      sub_1C32E7C(targetRenderers);
    size = v10->fields._size;
    v12 = v10->fields._version + 1;
    v10->fields._size = 0;
    v10->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
  }
}


void FGOSwapShaderPropertyWhenEnemy__Start(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *monitor; // x21
  Il2CppObject *Component_object; // x20
  const MethodInfo *v7; // x1
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_GameObject_array *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x28
  il2cpp_array_size_t v19; // x8
  unsigned __int64 v20; // x29
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v23; // x21
  unsigned __int64 v24; // x23
  void **p_monitor; // x24
  Il2CppObject *v26; // x22
  __int64 naturalAligment; // x9
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  intptr_t v33; // x8
  void *materials; // x0
  _DWORD *v35; // x20
  int v36; // w8
  int i; // w24
  char *v38; // x8
  UnityEngine_Material_o *v39; // x21
  float Float; // s0
  float x; // s9
  float v42; // s8
  float equivalentRange; // s0
  float y; // s9
  struct UnityEngine_GameObject_array *v45; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v46; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C36757 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C32C20(&UnityEngine_GameObject___TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_Renderer_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C36757 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_68;
    monitor = (UnityEngine_Object_o *)Instance[3].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(monitor, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)Instance[3].monitor;
      if ( !gameObject )
        goto LABEL_68;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( Component_object )
        {
          if ( !LOBYTE(Component_object[34].monitor) )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( targetObjects->max_length )
              goto LABEL_77;
          }
          v10 = (struct UnityEngine_GameObject_array *)sub_1C32CC8(UnityEngine_GameObject___TypeInfo, 1);
          this->fields.targetObjects = v10;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetObjects, (int32_t)v10, v11, v12);
          v13 = this->fields.targetObjects;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( v13 )
          {
            if ( !LODWORD(v13->max_length) )
              goto LABEL_70;
            v13->m_Items[0] = gameObject;
            sub_1C32BC4((CGThumbnailListItem_o *)v13->m_Items, (int32_t)gameObject, v14, v15);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_77:
              max_length = targetObjects->max_length;
              if ( (int)max_length >= 1 )
              {
                v17 = 0;
                v45 = targetObjects;
                while ( 1 )
                {
                  if ( v17 >= (unsigned int)max_length )
                    goto LABEL_70;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v46 = v17;
                  if ( !targetRendererTypes )
                    goto LABEL_68;
                  v19 = targetRendererTypes->max_length;
                  if ( (int)v19 >= 1 )
                    break;
LABEL_45:
                  LODWORD(max_length) = v45->max_length;
                  v17 = v46 + 1;
                  if ( (__int64)(v46 + 1) >= (int)max_length )
                    goto LABEL_46;
                }
                v20 = 0;
                v21 = v45->m_Items[v17];
                while ( 1 )
                {
                  if ( v20 >= (unsigned int)v19 )
                    goto LABEL_70;
                  gameObject = (UnityEngine_GameObject_o *)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                                             targetRendererTypes->m_Items[v20],
                                                             v7);
                  if ( !v21 )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren(
                                                             v21,
                                                             (System_Type_o *)gameObject,
                                                             0);
                  if ( gameObject )
                  {
                    klass = gameObject[1].klass;
                    v23 = gameObject;
                    if ( (int)klass >= 1 )
                      break;
                  }
LABEL_44:
                  LODWORD(v19) = targetRendererTypes->max_length;
                  if ( (__int64)++v20 >= (int)v19 )
                    goto LABEL_45;
                }
                v24 = 0;
                while ( 1 )
                {
                  if ( v24 >= (unsigned int)klass )
                    goto LABEL_70;
                  p_monitor = &v23[1].monitor;
                  v26 = (Il2CppObject *)*((_QWORD *)&v23[1].monitor + v24);
                  if ( v26 )
                  {
                    naturalAligment = UnityEngine_Renderer_TypeInfo->_2.naturalAligment;
                    if ( v26->klass->_2.naturalAligment < (unsigned int)naturalAligment
                      || (UnityEngine_Renderer_c *)v26->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___Contains(
                                                             (System_Collections_Generic_List_object__o *)gameObject,
                                                             (Il2CppObject *)p_monitor[v24],
                                                             (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( ((unsigned __int8)gameObject & 1) == 0 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_68;
                    m_CachedPtr = gameObject->fields.m_CachedPtr;
                    v31 = Method_System_Collections_Generic_List_Renderer__Add__;
                    ++HIDWORD(gameObject[1].klass);
                    if ( !m_CachedPtr )
                      goto LABEL_68;
                    klass_low = SLODWORD(gameObject[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)gameObject,
                        v26,
                        *(const MethodInfo_37987BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v33 = m_CachedPtr + 8 * klass_low;
                      LODWORD(gameObject[1].klass) = klass_low + 1;
                      *(_QWORD *)(v33 + 32) = v26;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v33 + 32), (int32_t)v26, v28, v29);
                    }
                  }
                  LODWORD(klass) = v23[1].klass;
                  if ( (__int64)++v24 >= (int)klass )
                    goto LABEL_44;
                }
                sub_1C3313C(p_monitor[v24]);
LABEL_70:
                sub_1C32E84(gameObject);
              }
LABEL_46:
              gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v47,
                  (System_Collections_Generic_List_object__o *)gameObject,
                  (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v48 = v47;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v48,
                          (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v48.fields._current )
                    sub_1C32E7C(0);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v48.fields._current, 0);
                  v35 = materials;
                  if ( !materials )
                    sub_1C32E7C(0);
                  v36 = *((_DWORD *)materials + 6);
                  if ( v36 >= 1 )
                  {
                    for ( i = 0; i < v36; ++i )
                    {
                      if ( i >= (unsigned int)v36 )
                        sub_1C32E84(materials);
                      v38 = (char *)&v35[2 * i];
                      v39 = (UnityEngine_Material_o *)*((_QWORD *)v38 + 4);
                      if ( !v39 )
                        sub_1C32E7C(materials);
                      materials = (void *)UnityEngine_Material__HasProperty_71089776(
                                            *((UnityEngine_Material_o **)v38 + 4),
                                            this->fields.propertyName,
                                            0);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v39, this->fields.propertyName, 0);
                        x = this->fields.swapPropertyValue.fields.x;
                        v42 = Float;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v42, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v39,
                            this->fields.propertyName,
                            this->fields.swapPropertyValue.fields.y,
                            0);
                        }
                        else
                        {
                          materials = System_Math_TypeInfo;
                          y = this->fields.swapPropertyValue.fields.y;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            equivalentRange = this->fields.equivalentRange;
                          }
                          if ( vabds_f32(v42, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v39,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0);
                        }
                      }
                      v36 = v35[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v48,
                  (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_68:
        sub_1C32E7C(gameObject);
      }
    }
  }
}


System_Type_o *FGOSwapShaderPropertyWhenEnemy__ToRendererType(int32_t rendererType, const MethodInfo *method)
{
  System_Type_c *v3; // x0
  Il2CppType **v4; // x8
  System_Type_o *result; // x0
  intptr_t v6; // x19
  System_RuntimeTypeHandle_o v7; // x0

  if ( (byte_4C36756 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_MeshRenderer_var);
    sub_1C32C20(&UnityEngine_ParticleSystemRenderer_var);
    sub_1C32C20(&UnityEngine_Renderer_var);
    sub_1C32C20(&UnityEngine_SkinnedMeshRenderer_var);
    sub_1C32C20(&UnityEngine_SpriteRenderer_var);
    sub_1C32C20(&System_Type_TypeInfo);
    byte_4C36756 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      v3 = System_Type_TypeInfo;
      v4 = &UnityEngine_Renderer_var;
      goto LABEL_10;
    case 1:
      v3 = System_Type_TypeInfo;
      v4 = &UnityEngine_ParticleSystemRenderer_var;
      goto LABEL_10;
    case 2:
      v3 = System_Type_TypeInfo;
      v4 = &UnityEngine_MeshRenderer_var;
      goto LABEL_10;
    case 3:
      v3 = System_Type_TypeInfo;
      v4 = &UnityEngine_SkinnedMeshRenderer_var;
      goto LABEL_10;
    case 4:
      v3 = System_Type_TypeInfo;
      v4 = &UnityEngine_SpriteRenderer_var;
LABEL_10:
      v6 = (intptr_t)*v4;
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      v7.fields.value = v6;
      result = System_Type__GetTypeFromHandle(v7, 0);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}