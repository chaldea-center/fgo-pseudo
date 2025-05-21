void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B43879 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_Renderer__TypeInfo, v3);
    sub_1BDB878(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, v4);
    sub_1BDB878(&StringLiteral_16161/*"_CullMode"*/, v5);
    byte_4B43879 = 1;
  }
  v6 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_1BDB920(
                                                                     FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                     1LL);
  if ( !v6 )
    sub_1BDBAD4(0LL, v7);
  if ( !v6->max_length )
    sub_1BDBADC(v6, v6, v8);
  v6->m_Items[1] = 1;
  this->fields.targetRendererTypes = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetRendererTypes, (int32_t)v6, v8, v9);
  v10 = StringLiteral_16161/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16161/*"_CullMode"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.propertyName, v10, v11, v12);
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  v13 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetRenderers, (int32_t)v13, v14, v15);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__OnDestroy(
        FGOSwapShaderPropertyWhenEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *targetRenderers; // x0
  __int64 v10; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Material_array *v14; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x24
  UnityEngine_Object_o *v17; // x21
  uint32_t cctor_finished; // w8
  struct System_Collections_Generic_List_Renderer__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B43878 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Renderer__Clear__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Renderer__get_Count__, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B43878 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  targetRenderers = (System_Collections_Generic_List_object__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        targetRenderers,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v23 = v22;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v23.fields._current )
          sub_1BDBAD4(0LL, v10);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v23.fields._current, 0LL);
        v14 = materials;
        if ( !materials )
          sub_1BDBAD4(0LL, v12);
        v15 = *(_QWORD *)&materials->max_length;
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v15 )
              sub_1BDBADC(materials, v12, v13);
            v17 = (UnityEngine_Object_o *)v14->m_Items[v16];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
              if ( this->fields.isDestroyImmediate )
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__DestroyImmediate_70284388(v17, 0LL);
              }
              else
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__Destroy_70284200(v17, 0LL);
              }
            }
            LODWORD(v15) = v14->max_length;
            ++v16;
          }
          while ( (__int64)v16 < (int)v15 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v19 = this->fields.targetRenderers;
    if ( !v19 )
      sub_1BDBAD4(targetRenderers, method);
    size = v19->fields._size;
    v21 = v19->fields._version + 1;
    v19->fields._size = 0;
    v19->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
  }
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__Start(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Renderer_c *v16; // x1
  UnityEngine_Object_o *monitor; // x21
  Il2CppObject *Component_object; // x20
  __int64 v19; // x2
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UnityEngine_GameObject_array *v25; // x21
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x28
  __int64 v30; // x8
  unsigned __int64 v31; // x29
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v34; // x21
  unsigned __int64 v35; // x23
  void **p_monitor; // x24
  Il2CppObject *v37; // x22
  __int64 methodPtr_low; // x9
  const MethodInfo *v39; // x3
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 klass_low; // x10
  __int64 v43; // x8
  __int64 v44; // x1
  void *materials; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  _DWORD *v48; // x20
  int v49; // w8
  int i; // w24
  char *v51; // x8
  UnityEngine_Material_o *v52; // x21
  float Float; // s0
  float x; // s9
  float v55; // s8
  float equivalentRange; // s0
  float y; // s9
  struct UnityEngine_GameObject_array *v58; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v59; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B43877 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1BDB878(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Renderer__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Renderer__Contains__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v9);
    sub_1BDB878(&System_Math_TypeInfo, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&UnityEngine_Renderer_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v13);
    byte_4B43877 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_68;
    monitor = (UnityEngine_Object_o *)Instance[3].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)Instance[3].monitor;
      if ( !gameObject )
        goto LABEL_68;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( Component_object )
        {
          if ( !LOBYTE(Component_object[33].monitor) )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( *(_QWORD *)&targetObjects->max_length )
              goto LABEL_77;
          }
          v22 = (struct UnityEngine_GameObject_array *)sub_1BDB920(UnityEngine_GameObject___TypeInfo, 1LL);
          this->fields.targetObjects = v22;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetObjects, (int32_t)v22, v23, v24);
          v25 = this->fields.targetObjects;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v25 )
          {
            if ( !v25->max_length )
              goto LABEL_70;
            v25->m_Items[0] = gameObject;
            sub_1BDB81C((CGThumbnailListItem_o *)v25->m_Items, (int32_t)gameObject, v19, v26);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_77:
              v27 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v27 >= 1 )
              {
                v28 = 0LL;
                v58 = targetObjects;
                while ( 1 )
                {
                  if ( v28 >= (unsigned int)v27 )
                    goto LABEL_70;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v59 = v28;
                  if ( !targetRendererTypes )
                    goto LABEL_68;
                  v30 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v30 >= 1 )
                    break;
LABEL_45:
                  LODWORD(v27) = v58->max_length;
                  v28 = v59 + 1;
                  if ( (__int64)(v59 + 1) >= (int)v27 )
                    goto LABEL_46;
                }
                v31 = 0LL;
                v32 = v58->m_Items[v28];
                while ( 1 )
                {
                  if ( v31 >= (unsigned int)v30 )
                    goto LABEL_70;
                  gameObject = (UnityEngine_GameObject_o *)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                                             targetRendererTypes->m_Items[v31 + 1],
                                                             (const MethodInfo *)v16);
                  if ( !v32 )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren(
                                                             v32,
                                                             (System_Type_o *)gameObject,
                                                             0LL);
                  if ( gameObject )
                  {
                    klass = gameObject[1].klass;
                    v34 = gameObject;
                    if ( (int)klass >= 1 )
                      break;
                  }
LABEL_44:
                  LODWORD(v30) = targetRendererTypes->max_length;
                  if ( (__int64)++v31 >= (int)v30 )
                    goto LABEL_45;
                }
                v35 = 0LL;
                while ( 1 )
                {
                  if ( v35 >= (unsigned int)klass )
                    goto LABEL_70;
                  p_monitor = &v34[1].monitor;
                  v37 = (Il2CppObject *)*((_QWORD *)&v34[1].monitor + v35);
                  if ( v37 )
                  {
                    v16 = UnityEngine_Renderer_TypeInfo;
                    methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( LOBYTE(v37->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
                      || (UnityEngine_Renderer_c *)v37->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___Contains(
                                                             (System_Collections_Generic_List_object__o *)gameObject,
                                                             (Il2CppObject *)p_monitor[v35],
                                                             (const MethodInfo_36D6154 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( ((unsigned __int8)gameObject & 1) == 0 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_68;
                    v40 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
                    v41 = Method_System_Collections_Generic_List_Renderer__Add__;
                    ++HIDWORD(gameObject[1].klass);
                    if ( !v40 )
                      goto LABEL_68;
                    klass_low = SLODWORD(gameObject[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v40 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)gameObject,
                        v37,
                        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v43 = v40 + 8 * klass_low;
                      LODWORD(gameObject[1].klass) = klass_low + 1;
                      *(_QWORD *)(v43 + 32) = v37;
                      sub_1BDB81C((CGThumbnailListItem_o *)(v43 + 32), (int32_t)v37, v19, v39);
                    }
                  }
                  LODWORD(klass) = v34[1].klass;
                  if ( (__int64)++v35 >= (int)klass )
                    goto LABEL_44;
                }
                sub_1BDBD94(p_monitor[v35]);
LABEL_70:
                sub_1BDBADC(gameObject, v16, v19);
              }
LABEL_46:
              gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v60,
                  (System_Collections_Generic_List_object__o *)gameObject,
                  (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v61 = v60;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v61,
                          (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v61.fields._current )
                    sub_1BDBAD4(0LL, v44);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v61.fields._current, 0LL);
                  v48 = materials;
                  if ( !materials )
                    sub_1BDBAD4(0LL, v46);
                  v49 = *((_DWORD *)materials + 6);
                  if ( v49 >= 1 )
                  {
                    for ( i = 0; i < v49; ++i )
                    {
                      if ( i >= (unsigned int)v49 )
                        sub_1BDBADC(materials, v46, v47);
                      v51 = (char *)&v48[2 * i];
                      v52 = (UnityEngine_Material_o *)*((_QWORD *)v51 + 4);
                      if ( !v52 )
                        sub_1BDBAD4(materials, v46);
                      materials = (void *)UnityEngine_Material__HasProperty_70150152(
                                            *((UnityEngine_Material_o **)v51 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v52, this->fields.propertyName, 0LL);
                        x = this->fields.swapPropertyValue.fields.x;
                        v55 = Float;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v55, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v52,
                            this->fields.propertyName,
                            this->fields.swapPropertyValue.fields.y,
                            0LL);
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
                          if ( vabds_f32(v55, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v52,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v49 = v48[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v61,
                  (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_68:
        sub_1BDBAD4(gameObject, v16);
      }
    }
  }
}


System_Type_o *__fastcall FGOSwapShaderPropertyWhenEnemy__ToRendererType(
        int32_t rendererType,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Type_c *v8; // x0
  Il2CppType **v9; // x8
  System_Type_o *result; // x0
  Il2CppType *v11; // x19
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_4B43876 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_MeshRenderer_var, method);
    sub_1BDB878(&UnityEngine_ParticleSystemRenderer_var, v3);
    sub_1BDB878(&UnityEngine_Renderer_var, v4);
    sub_1BDB878(&UnityEngine_SkinnedMeshRenderer_var, v5);
    sub_1BDB878(&UnityEngine_SpriteRenderer_var, v6);
    sub_1BDB878(&System_Type_TypeInfo, v7);
    byte_4B43876 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_Renderer_var;
      goto LABEL_10;
    case 1:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_ParticleSystemRenderer_var;
      goto LABEL_10;
    case 2:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_MeshRenderer_var;
      goto LABEL_10;
    case 3:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_SkinnedMeshRenderer_var;
      goto LABEL_10;
    case 4:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_SpriteRenderer_var;
LABEL_10:
      v11 = *v9;
      if ( !v8->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v8);
      v12.fields.value = (int)v11;
      result = System_Type__GetTypeFromHandle(v12, 0LL);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}