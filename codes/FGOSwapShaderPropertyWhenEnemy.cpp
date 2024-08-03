void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FB300 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_Renderer__TypeInfo, v3);
    sub_1B640C8(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, v4);
    sub_1B640C8(&StringLiteral_16118/*"_CullMode"*/, v5);
    byte_49FB300 = 1;
  }
  v6 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_1B64170(
                                                                     FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                     1LL);
  if ( !v6 )
    sub_1B64324(0LL);
  if ( !v6->max_length )
    sub_1B6432C(v6, v6);
  v6->m_Items[1] = 1;
  this->fields.targetRendererTypes = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetRendererTypes, (int32_t)v6, v7, v8);
  v9 = StringLiteral_16118/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16118/*"_CullMode"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.propertyName, v9, v10, v11);
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetRenderers, (int32_t)v14, v15, v16);
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
  UnityEngine_Material_array *materials; // x0
  __int64 v11; // x1
  UnityEngine_Material_array *v12; // x20
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  UnityEngine_Object_o *v15; // x21
  uint32_t cctor_finished; // w8
  struct System_Collections_Generic_List_Renderer__o *v17; // x8
  int32_t size; // w2
  int v19; // w9
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB2FF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Count__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FB2FF = 1;
  }
  memset(&v21, 0, sizeof(v21));
  targetRenderers = (System_Collections_Generic_List_object__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        targetRenderers,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v21 = v20;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v21,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v21.fields._current )
          sub_1B64324(0LL);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21.fields._current, 0LL);
        v12 = materials;
        if ( !materials )
          sub_1B64324(0LL);
        v13 = *(_QWORD *)&materials->max_length;
        if ( (int)v13 >= 1 )
        {
          v14 = 0LL;
          do
          {
            if ( v14 >= (unsigned int)v13 )
              sub_1B6432C(materials, v11);
            v15 = (UnityEngine_Object_o *)v12->m_Items[v14];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
              if ( this->fields.isDestroyImmediate )
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__DestroyImmediate_69127924(v15, 0LL);
              }
              else
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__Destroy_69127736(v15, 0LL);
              }
            }
            LODWORD(v13) = v12->max_length;
            ++v14;
          }
          while ( (__int64)v14 < (int)v13 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v21,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v17 = this->fields.targetRenderers;
    if ( !v17 )
      sub_1B64324(targetRenderers);
    size = v17->fields._size;
    v19 = v17->fields._version + 1;
    v17->fields._size = 0;
    v17->fields._version = v19;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v17->fields._items, 0, size, 0LL);
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
  UnityEngine_Object_o *klass; // x21
  Il2CppObject *Component_object; // x20
  const MethodInfo *v18; // x1
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct UnityEngine_GameObject_array *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x28
  __int64 v30; // x8
  unsigned __int64 v31; // x29
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_c *v33; // x8
  UnityEngine_GameObject_o *v34; // x21
  unsigned __int64 v35; // x23
  void **p_monitor; // x24
  Il2CppObject *v37; // x22
  __int64 methodPtr_low; // x9
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 klass_low; // x10
  __int64 v44; // x8
  void *materials; // x0
  __int64 v46; // x1
  _DWORD *v47; // x20
  int v48; // w8
  int i; // w24
  char *v50; // x8
  UnityEngine_Material_o *v51; // x21
  float Float; // s0
  float x; // s9
  float v54; // s8
  float equivalentRange; // s0
  float y; // s9
  struct UnityEngine_GameObject_array *v57; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v58; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_49FB2FE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__Contains__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v9);
    sub_1B640C8(&System_Math_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Renderer_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v13);
    byte_49FB2FE = 1;
  }
  memset(&v60, 0, sizeof(v60));
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_68;
    klass = (UnityEngine_Object_o *)Instance[4].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)Instance[4].klass;
      if ( !gameObject )
        goto LABEL_68;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
          if ( !LOBYTE(Component_object[30].klass) )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( *(_QWORD *)&targetObjects->max_length )
              goto LABEL_77;
          }
          v21 = (struct UnityEngine_GameObject_array *)sub_1B64170(UnityEngine_GameObject___TypeInfo, 1LL);
          this->fields.targetObjects = v21;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetObjects, (int32_t)v21, v22, v23);
          v24 = this->fields.targetObjects;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v24 )
          {
            if ( !v24->max_length )
              goto LABEL_70;
            v24->m_Items[0] = gameObject;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)v24->m_Items, (int32_t)gameObject, v25, v26);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_77:
              v27 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v27 >= 1 )
              {
                v28 = 0LL;
                v57 = targetObjects;
                while ( 1 )
                {
                  if ( v28 >= (unsigned int)v27 )
                    goto LABEL_70;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v58 = v28;
                  if ( !targetRendererTypes )
                    goto LABEL_68;
                  v30 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v30 >= 1 )
                    break;
LABEL_45:
                  LODWORD(v27) = v57->max_length;
                  v28 = v58 + 1;
                  if ( (__int64)(v58 + 1) >= (int)v27 )
                    goto LABEL_46;
                }
                v31 = 0LL;
                v32 = v57->m_Items[v28];
                while ( 1 )
                {
                  if ( v31 >= (unsigned int)v30 )
                    goto LABEL_70;
                  gameObject = (UnityEngine_GameObject_o *)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                                             targetRendererTypes->m_Items[v31 + 1],
                                                             v18);
                  if ( !v32 )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren(
                                                             v32,
                                                             (System_Type_o *)gameObject,
                                                             0LL);
                  if ( gameObject )
                  {
                    v33 = gameObject[1].klass;
                    v34 = gameObject;
                    if ( (int)v33 >= 1 )
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
                  if ( v35 >= (unsigned int)v33 )
                    goto LABEL_70;
                  p_monitor = &v34[1].monitor;
                  v37 = (Il2CppObject *)*((_QWORD *)&v34[1].monitor + v35);
                  if ( v37 )
                  {
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
                                                             (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( ((unsigned __int8)gameObject & 1) == 0 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_68;
                    v41 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
                    v42 = Method_System_Collections_Generic_List_Renderer__Add__;
                    ++HIDWORD(gameObject[1].klass);
                    if ( !v41 )
                      goto LABEL_68;
                    klass_low = SLODWORD(gameObject[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v41 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)gameObject,
                        v37,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v44 = v41 + 8 * klass_low;
                      LODWORD(gameObject[1].klass) = klass_low + 1;
                      *(_QWORD *)(v44 + 32) = v37;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 32), (int32_t)v37, v39, v40);
                    }
                  }
                  LODWORD(v33) = v34[1].klass;
                  if ( (__int64)++v35 >= (int)v33 )
                    goto LABEL_44;
                }
                sub_1B645E4(p_monitor[v35]);
LABEL_70:
                sub_1B6432C(gameObject, v18);
              }
LABEL_46:
              gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v59,
                  (System_Collections_Generic_List_object__o *)gameObject,
                  (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v60 = v59;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v60,
                          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v60.fields._current )
                    sub_1B64324(0LL);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v60.fields._current, 0LL);
                  v47 = materials;
                  if ( !materials )
                    sub_1B64324(0LL);
                  v48 = *((_DWORD *)materials + 6);
                  if ( v48 >= 1 )
                  {
                    for ( i = 0; i < v48; ++i )
                    {
                      if ( i >= (unsigned int)v48 )
                        sub_1B6432C(materials, v46);
                      v50 = (char *)&v47[2 * i];
                      v51 = (UnityEngine_Material_o *)*((_QWORD *)v50 + 4);
                      if ( !v51 )
                        sub_1B64324(materials);
                      materials = (void *)UnityEngine_Material__HasProperty_68994004(
                                            *((UnityEngine_Material_o **)v50 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v51, this->fields.propertyName, 0LL);
                        x = this->fields.swapPropertyValue.fields.x;
                        v54 = Float;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v54, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v51,
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
                          if ( vabds_f32(v54, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v51,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v48 = v47[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v60,
                  (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_68:
        sub_1B64324(gameObject);
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

  if ( (byte_49FB2FD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_MeshRenderer_var, method);
    sub_1B640C8(&UnityEngine_ParticleSystemRenderer_var, v3);
    sub_1B640C8(&UnityEngine_Renderer_var, v4);
    sub_1B640C8(&UnityEngine_SkinnedMeshRenderer_var, v5);
    sub_1B640C8(&UnityEngine_SpriteRenderer_var, v6);
    sub_1B640C8(&System_Type_TypeInfo, v7);
    byte_49FB2FD = 1;
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