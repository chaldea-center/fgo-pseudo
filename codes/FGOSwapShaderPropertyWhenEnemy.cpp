void FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D2B5C6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C94098(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C94098(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo);
    sub_1C94098(&StringLiteral_16238/*"_CullMode"*/);
    byte_4D2B5C6 = 1;
  }
  v3 = sub_1C94140(FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, 1);
  if ( !v3 )
    sub_1C942F0(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C942F8(v3);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.targetRendererTypes = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.targetRendererTypes, v3, v5, v6, v7, v8, v9, v10);
  v11 = StringLiteral_16238/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16238/*"_CullMode"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.propertyName, v11, v12, v13, v14, v15, v16, v17);
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.targetRenderers, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGOSwapShaderPropertyWhenEnemy__OnDestroy(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *targetRenderers; // x0
  __int64 v4; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v6; // x1
  UnityEngine_Material_array *v7; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x24
  UnityEngine_Object_o *v10; // x21
  uint32_t cctor_finished; // w8
  struct System_Collections_Generic_List_Renderer__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B5C5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B5C5 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  targetRenderers = (System_Collections_Generic_List_object__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        targetRenderers,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v16 = v15;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v16.fields._current )
          sub_1C942F0(0, v4);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v16.fields._current, 0);
        v7 = materials;
        if ( !materials )
          sub_1C942F0(0, v6);
        max_length = materials->max_length;
        if ( (int)max_length >= 1 )
        {
          v9 = 0;
          do
          {
            if ( v9 >= (unsigned int)max_length )
              sub_1C942F8(materials);
            v10 = (UnityEngine_Object_o *)v7->m_Items[v9];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v10, 0, 0);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
              if ( this->fields.isDestroyImmediate )
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__DestroyImmediate_72111160(v10, 0);
              }
              else
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__Destroy_72110972(v10, 0);
              }
            }
            LODWORD(max_length) = v7->max_length;
            ++v9;
          }
          while ( (__int64)v9 < (int)max_length );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v12 = this->fields.targetRenderers;
    if ( !v12 )
      sub_1C942F0(targetRenderers, method);
    size = v12->fields._size;
    v14 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0);
  }
}


void FGOSwapShaderPropertyWhenEnemy__Start(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Renderer_c *v5; // x1
  UnityEngine_Object_o *monitor; // x21
  Il2CppObject *Component_object; // x20
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_GameObject_array *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v25; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x28
  il2cpp_array_size_t v27; // x8
  unsigned __int64 v28; // x29
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v31; // x21
  unsigned __int64 v32; // x23
  void **p_monitor; // x24
  Il2CppObject *v34; // x22
  __int64 naturalAligment; // x9
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v43; // x9
  __int64 klass_low; // x10
  intptr_t v45; // x8
  __int64 v46; // x1
  void *materials; // x0
  __int64 v48; // x1
  _DWORD *v49; // x20
  int v50; // w8
  int i; // w24
  char *v52; // x8
  UnityEngine_Material_o *v53; // x21
  float Float; // s0
  float x; // s9
  float v56; // s8
  float equivalentRange; // s0
  float y; // s9
  struct UnityEngine_GameObject_array *v59; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v60; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D2B5C4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C94098(&UnityEngine_GameObject___TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UnityEngine_Renderer_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4D2B5C4 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
          if ( !LOBYTE(Component_object[35].klass) )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( targetObjects->max_length )
              goto LABEL_77;
          }
          v10 = (struct UnityEngine_GameObject_array *)sub_1C94140(UnityEngine_GameObject___TypeInfo, 1);
          this->fields.targetObjects = v10;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.targetObjects,
            (int32_t)v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          v17 = this->fields.targetObjects;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( v17 )
          {
            if ( !LODWORD(v17->max_length) )
              goto LABEL_70;
            v17->m_Items[0] = gameObject;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)v17->m_Items, (int32_t)gameObject, v18, v19, v20, v21, v22, v23);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_77:
              max_length = targetObjects->max_length;
              if ( (int)max_length >= 1 )
              {
                v25 = 0;
                v59 = targetObjects;
                while ( 1 )
                {
                  if ( v25 >= (unsigned int)max_length )
                    goto LABEL_70;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v60 = v25;
                  if ( !targetRendererTypes )
                    goto LABEL_68;
                  v27 = targetRendererTypes->max_length;
                  if ( (int)v27 >= 1 )
                    break;
LABEL_45:
                  LODWORD(max_length) = v59->max_length;
                  v25 = v60 + 1;
                  if ( (__int64)(v60 + 1) >= (int)max_length )
                    goto LABEL_46;
                }
                v28 = 0;
                v29 = v59->m_Items[v25];
                while ( 1 )
                {
                  if ( v28 >= (unsigned int)v27 )
                    goto LABEL_70;
                  gameObject = (UnityEngine_GameObject_o *)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                                             targetRendererTypes->m_Items[v28],
                                                             (const MethodInfo *)v5);
                  if ( !v29 )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren(
                                                             v29,
                                                             (System_Type_o *)gameObject,
                                                             0);
                  if ( gameObject )
                  {
                    klass = gameObject[1].klass;
                    v31 = gameObject;
                    if ( (int)klass >= 1 )
                      break;
                  }
LABEL_44:
                  LODWORD(v27) = targetRendererTypes->max_length;
                  if ( (__int64)++v28 >= (int)v27 )
                    goto LABEL_45;
                }
                v32 = 0;
                while ( 1 )
                {
                  if ( v32 >= (unsigned int)klass )
                    goto LABEL_70;
                  p_monitor = &v31[1].monitor;
                  v34 = (Il2CppObject *)*((_QWORD *)&v31[1].monitor + v32);
                  if ( v34 )
                  {
                    v5 = UnityEngine_Renderer_TypeInfo;
                    naturalAligment = UnityEngine_Renderer_TypeInfo->_2.naturalAligment;
                    if ( v34->klass->_2.naturalAligment < (unsigned int)naturalAligment
                      || (UnityEngine_Renderer_c *)v34->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___Contains(
                                                             (System_Collections_Generic_List_object__o *)gameObject,
                                                             (Il2CppObject *)p_monitor[v32],
                                                             (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( ((unsigned __int8)gameObject & 1) == 0 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_68;
                    m_CachedPtr = gameObject->fields.m_CachedPtr;
                    v43 = Method_System_Collections_Generic_List_Renderer__Add__;
                    ++HIDWORD(gameObject[1].klass);
                    if ( !m_CachedPtr )
                      goto LABEL_68;
                    klass_low = SLODWORD(gameObject[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)gameObject,
                        v34,
                        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v45 = m_CachedPtr + 8 * klass_low;
                      LODWORD(gameObject[1].klass) = klass_low + 1;
                      *(_QWORD *)(v45 + 32) = v34;
                      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v45 + 32), (int32_t)v34, v36, v37, v38, v39, v40, v41);
                    }
                  }
                  LODWORD(klass) = v31[1].klass;
                  if ( (__int64)++v32 >= (int)klass )
                    goto LABEL_44;
                }
                sub_1C9468C(p_monitor[v32]);
LABEL_70:
                sub_1C942F8(gameObject);
              }
LABEL_46:
              gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v61,
                  (System_Collections_Generic_List_object__o *)gameObject,
                  (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v62 = v61;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v62,
                          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v62.fields._current )
                    sub_1C942F0(0, v46);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v62.fields._current, 0);
                  v49 = materials;
                  if ( !materials )
                    sub_1C942F0(0, v48);
                  v50 = *((_DWORD *)materials + 6);
                  if ( v50 >= 1 )
                  {
                    for ( i = 0; i < v50; ++i )
                    {
                      if ( i >= (unsigned int)v50 )
                        sub_1C942F8(materials);
                      v52 = (char *)&v49[2 * i];
                      v53 = (UnityEngine_Material_o *)*((_QWORD *)v52 + 4);
                      if ( !v53 )
                        sub_1C942F0(materials, v48);
                      materials = (void *)UnityEngine_Material__HasProperty_71976444(
                                            *((UnityEngine_Material_o **)v52 + 4),
                                            this->fields.propertyName,
                                            0);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v53, this->fields.propertyName, 0);
                        x = this->fields.swapPropertyValue.fields.x;
                        v56 = Float;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v56, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v53,
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
                          if ( vabds_f32(v56, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v53,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0);
                        }
                      }
                      v50 = v49[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v62,
                  (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_68:
        sub_1C942F0(gameObject, v5);
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

  if ( (byte_4D2B5C3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_MeshRenderer_var);
    sub_1C94098(&UnityEngine_ParticleSystemRenderer_var);
    sub_1C94098(&UnityEngine_Renderer_var);
    sub_1C94098(&UnityEngine_SkinnedMeshRenderer_var);
    sub_1C94098(&UnityEngine_SpriteRenderer_var);
    sub_1C94098(&System_Type_TypeInfo);
    byte_4D2B5C3 = 1;
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