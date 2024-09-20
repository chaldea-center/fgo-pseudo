void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5A030 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1B885B0(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo);
    sub_1B885B0(&StringLiteral_16187/*"_CullMode"*/);
    byte_4A5A030 = 1;
  }
  v3 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_1B88658(
                                                                     FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                     1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  if ( !v3->max_length )
    sub_1B88814(v3, v3);
  v3->m_Items[1] = 1;
  this->fields.targetRendererTypes = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetRendererTypes, (int32_t)v3, v5, v6);
  v7 = StringLiteral_16187/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16187/*"_CullMode"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.propertyName, v7, v8, v9);
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetRenderers, (int32_t)v10, v11, v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__OnDestroy(
        FGOSwapShaderPropertyWhenEnemy_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *targetRenderers; // x0
  __int64 v4; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v6; // x1
  UnityEngine_Material_array *v7; // x20
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  UnityEngine_Object_o *v10; // x21
  uint32_t cctor_finished; // w8
  struct System_Collections_Generic_List_Renderer__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5A02F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A02F = 1;
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
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v16 = v15;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v16.fields._current )
          sub_1B8880C(0LL, v4);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v16.fields._current, 0LL);
        v7 = materials;
        if ( !materials )
          sub_1B8880C(0LL, v6);
        v8 = *(_QWORD *)&materials->max_length;
        if ( (int)v8 >= 1 )
        {
          v9 = 0LL;
          do
          {
            if ( v9 >= (unsigned int)v8 )
              sub_1B88814(materials, v6);
            v10 = (UnityEngine_Object_o *)v7->m_Items[v9];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
              if ( this->fields.isDestroyImmediate )
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__DestroyImmediate_69459568(v10, 0LL);
              }
              else
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__Destroy_69459380(v10, 0LL);
              }
            }
            LODWORD(v8) = v7->max_length;
            ++v9;
          }
          while ( (__int64)v9 < (int)v8 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v12 = this->fields.targetRenderers;
    if ( !v12 )
      sub_1B8880C(targetRenderers, method);
    size = v12->fields._size;
    v14 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
  }
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__Start(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Renderer_c *v5; // x1
  UnityEngine_Object_o *klass; // x21
  Il2CppObject *Component_object; // x20
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct UnityEngine_GameObject_array *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x28
  __int64 v19; // x8
  unsigned __int64 v20; // x29
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x21
  unsigned __int64 v24; // x23
  void **p_monitor; // x24
  Il2CppObject *v26; // x22
  __int64 methodPtr_low; // x9
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  __int64 v33; // x8
  __int64 v34; // x1
  void *materials; // x0
  __int64 v36; // x1
  _DWORD *v37; // x20
  int v38; // w8
  int i; // w24
  char *v40; // x8
  UnityEngine_Material_o *v41; // x21
  float Float; // s0
  float x; // s9
  float v44; // s8
  float equivalentRange; // s0
  float y; // s9
  struct UnityEngine_GameObject_array *v47; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v48; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A5A02E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Renderer_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4A5A02E = 1;
  }
  memset(&v50, 0, sizeof(v50));
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
          v10 = (struct UnityEngine_GameObject_array *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 1LL);
          this->fields.targetObjects = v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObjects, (int32_t)v10, v11, v12);
          v13 = this->fields.targetObjects;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v13 )
          {
            if ( !v13->max_length )
              goto LABEL_70;
            v13->m_Items[0] = gameObject;
            sub_1B88554((ServantStatusBattleListViewItem_o *)v13->m_Items, (int32_t)gameObject, v14, v15);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_77:
              v16 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v16 >= 1 )
              {
                v17 = 0LL;
                v47 = targetObjects;
                while ( 1 )
                {
                  if ( v17 >= (unsigned int)v16 )
                    goto LABEL_70;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v48 = v17;
                  if ( !targetRendererTypes )
                    goto LABEL_68;
                  v19 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v19 >= 1 )
                    break;
LABEL_45:
                  LODWORD(v16) = v47->max_length;
                  v17 = v48 + 1;
                  if ( (__int64)(v48 + 1) >= (int)v16 )
                    goto LABEL_46;
                }
                v20 = 0LL;
                v21 = v47->m_Items[v17];
                while ( 1 )
                {
                  if ( v20 >= (unsigned int)v19 )
                    goto LABEL_70;
                  gameObject = (UnityEngine_GameObject_o *)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                                             targetRendererTypes->m_Items[v20 + 1],
                                                             (const MethodInfo *)v5);
                  if ( !v21 )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren(
                                                             v21,
                                                             (System_Type_o *)gameObject,
                                                             0LL);
                  if ( gameObject )
                  {
                    v22 = gameObject[1].klass;
                    v23 = gameObject;
                    if ( (int)v22 >= 1 )
                      break;
                  }
LABEL_44:
                  LODWORD(v19) = targetRendererTypes->max_length;
                  if ( (__int64)++v20 >= (int)v19 )
                    goto LABEL_45;
                }
                v24 = 0LL;
                while ( 1 )
                {
                  if ( v24 >= (unsigned int)v22 )
                    goto LABEL_70;
                  p_monitor = &v23[1].monitor;
                  v26 = (Il2CppObject *)*((_QWORD *)&v23[1].monitor + v24);
                  if ( v26 )
                  {
                    v5 = UnityEngine_Renderer_TypeInfo;
                    methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( LOBYTE(v26->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
                      || (UnityEngine_Renderer_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Renderer_TypeInfo )
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
                                                             (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( ((unsigned __int8)gameObject & 1) == 0 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_68;
                    v30 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
                    v31 = Method_System_Collections_Generic_List_Renderer__Add__;
                    ++HIDWORD(gameObject[1].klass);
                    if ( !v30 )
                      goto LABEL_68;
                    klass_low = SLODWORD(gameObject[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v30 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)gameObject,
                        v26,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v33 = v30 + 8 * klass_low;
                      LODWORD(gameObject[1].klass) = klass_low + 1;
                      *(_QWORD *)(v33 + 32) = v26;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v26, v28, v29);
                    }
                  }
                  LODWORD(v22) = v23[1].klass;
                  if ( (__int64)++v24 >= (int)v22 )
                    goto LABEL_44;
                }
                sub_1B88ACC(p_monitor[v24]);
LABEL_70:
                sub_1B88814(gameObject, v5);
              }
LABEL_46:
              gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v49,
                  (System_Collections_Generic_List_object__o *)gameObject,
                  (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v50 = v49;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v50,
                          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v50.fields._current )
                    sub_1B8880C(0LL, v34);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v50.fields._current, 0LL);
                  v37 = materials;
                  if ( !materials )
                    sub_1B8880C(0LL, v36);
                  v38 = *((_DWORD *)materials + 6);
                  if ( v38 >= 1 )
                  {
                    for ( i = 0; i < v38; ++i )
                    {
                      if ( i >= (unsigned int)v38 )
                        sub_1B88814(materials, v36);
                      v40 = (char *)&v37[2 * i];
                      v41 = (UnityEngine_Material_o *)*((_QWORD *)v40 + 4);
                      if ( !v41 )
                        sub_1B8880C(materials, v36);
                      materials = (void *)UnityEngine_Material__HasProperty_69325648(
                                            *((UnityEngine_Material_o **)v40 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v41, this->fields.propertyName, 0LL);
                        x = this->fields.swapPropertyValue.fields.x;
                        v44 = Float;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v44, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v41,
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
                          if ( vabds_f32(v44, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v41,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v38 = v37[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v50,
                  (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_68:
        sub_1B8880C(gameObject, v5);
      }
    }
  }
}


System_Type_o *__fastcall FGOSwapShaderPropertyWhenEnemy__ToRendererType(
        int32_t rendererType,
        const MethodInfo *method)
{
  System_Type_c *v3; // x0
  Il2CppType **v4; // x8
  System_Type_o *result; // x0
  Il2CppType *v6; // x19
  System_RuntimeTypeHandle_o v7; // 0:w0.4

  if ( (byte_4A5A02D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_MeshRenderer_var);
    sub_1B885B0(&UnityEngine_ParticleSystemRenderer_var);
    sub_1B885B0(&UnityEngine_Renderer_var);
    sub_1B885B0(&UnityEngine_SkinnedMeshRenderer_var);
    sub_1B885B0(&UnityEngine_SpriteRenderer_var);
    sub_1B885B0(&System_Type_TypeInfo);
    byte_4A5A02D = 1;
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
      v6 = *v4;
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      v7.fields.value = (int)v6;
      result = System_Type__GetTypeFromHandle(v7, 0LL);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}