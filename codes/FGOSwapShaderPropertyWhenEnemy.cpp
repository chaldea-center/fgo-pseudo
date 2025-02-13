void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BDB3BA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C21E38(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo);
    sub_1C21E38(&StringLiteral_16463/*"_CullMode"*/);
    byte_4BDB3BA = 1;
  }
  v3 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_1C21EE0(
                                                                     FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                     1LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  if ( !v3->max_length )
    sub_1C2209C(v3, v3);
  v3->m_Items[1] = 1;
  this->fields.targetRendererTypes = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetRendererTypes, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = StringLiteral_16463/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16463/*"_CullMode"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.propertyName, v11, v12, v13, v14, v15, v16, v17);
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetRenderers, (int64_t)v18, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4BDB3B9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB3B9 = 1;
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
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v16 = v15;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v16.fields._current )
          sub_1C22094(0LL, v4);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v16.fields._current, 0LL);
        v7 = materials;
        if ( !materials )
          sub_1C22094(0LL, v6);
        v8 = *(_QWORD *)&materials->max_length;
        if ( (int)v8 >= 1 )
        {
          v9 = 0LL;
          do
          {
            if ( v9 >= (unsigned int)v8 )
              sub_1C2209C(materials, v6);
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
                UnityEngine_Object__DestroyImmediate_70869800(v10, 0LL);
              }
              else
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__Destroy_70869612(v10, 0LL);
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
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v12 = this->fields.targetRenderers;
    if ( !v12 )
      sub_1C22094(targetRenderers, method);
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
  int64_t gameObject; // x0
  UnityEngine_Renderer_c *v5; // x1
  UnityEngine_Object_o *klass; // x21
  Il2CppObject *Component_object; // x20
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct UnityEngine_GameObject_array *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x28
  __int64 v27; // x8
  unsigned __int64 v28; // x29
  UnityEngine_GameObject_o *v29; // x20
  __int64 v30; // x8
  int64_t v31; // x21
  unsigned __int64 v32; // x23
  int64_t v33; // x24
  Il2CppObject *v34; // x22
  __int64 methodPtr_low; // x9
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
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

  if ( (byte_4BDB3B8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Renderer_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4BDB3B8 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( (gameObject & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_68;
    klass = (UnityEngine_Object_o *)Instance[4].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    {
      gameObject = (int64_t)Instance[4].klass;
      if ( !gameObject )
        goto LABEL_68;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)gameObject,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (gameObject & 1) == 0 )
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
          v10 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(UnityEngine_GameObject___TypeInfo, 1LL);
          this->fields.targetObjects = v10;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.targetObjects,
            (int64_t)v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          v17 = this->fields.targetObjects;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v17 )
          {
            if ( !v17->max_length )
              goto LABEL_70;
            v17->m_Items[0] = (UnityEngine_GameObject_o *)gameObject;
            sub_1C21DDC((PartyOrganizationUtility_o *)v17->m_Items, gameObject, v18, v19, v20, v21, v22, v23);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_77:
              v24 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v24 >= 1 )
              {
                v25 = 0LL;
                v59 = targetObjects;
                while ( 1 )
                {
                  if ( v25 >= (unsigned int)v24 )
                    goto LABEL_70;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v60 = v25;
                  if ( !targetRendererTypes )
                    goto LABEL_68;
                  v27 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v27 >= 1 )
                    break;
LABEL_45:
                  LODWORD(v24) = v59->max_length;
                  v25 = v60 + 1;
                  if ( (__int64)(v60 + 1) >= (int)v24 )
                    goto LABEL_46;
                }
                v28 = 0LL;
                v29 = v59->m_Items[v25];
                while ( 1 )
                {
                  if ( v28 >= (unsigned int)v27 )
                    goto LABEL_70;
                  gameObject = (int64_t)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                          targetRendererTypes->m_Items[v28 + 1],
                                          (const MethodInfo *)v5);
                  if ( !v29 )
                    goto LABEL_68;
                  gameObject = (int64_t)UnityEngine_GameObject__GetComponentsInChildren(
                                          v29,
                                          (System_Type_o *)gameObject,
                                          0LL);
                  if ( gameObject )
                  {
                    v30 = *(_QWORD *)(gameObject + 24);
                    v31 = gameObject;
                    if ( (int)v30 >= 1 )
                      break;
                  }
LABEL_44:
                  LODWORD(v27) = targetRendererTypes->max_length;
                  if ( (__int64)++v28 >= (int)v27 )
                    goto LABEL_45;
                }
                v32 = 0LL;
                while ( 1 )
                {
                  if ( v32 >= (unsigned int)v30 )
                    goto LABEL_70;
                  v33 = v31 + 32;
                  v34 = *(Il2CppObject **)(v31 + 32 + 8 * v32);
                  if ( v34 )
                  {
                    v5 = UnityEngine_Renderer_TypeInfo;
                    methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( LOBYTE(v34->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
                      || (UnityEngine_Renderer_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (int64_t)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_68;
                  gameObject = System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)gameObject,
                                 *(Il2CppObject **)(v33 + 8 * v32),
                                 (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( (gameObject & 1) == 0 )
                  {
                    gameObject = (int64_t)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_68;
                    v42 = *(_QWORD *)(gameObject + 16);
                    v43 = Method_System_Collections_Generic_List_Renderer__Add__;
                    ++*(_DWORD *)(gameObject + 28);
                    if ( !v42 )
                      goto LABEL_68;
                    v44 = *(int *)(gameObject + 24);
                    if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)gameObject,
                        v34,
                        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v45 = v42 + 8 * v44;
                      *(_DWORD *)(gameObject + 24) = v44 + 1;
                      *(_QWORD *)(v45 + 32) = v34;
                      sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 32), (int64_t)v34, v36, v37, v38, v39, v40, v41);
                    }
                  }
                  LODWORD(v30) = *(_DWORD *)(v31 + 24);
                  if ( (__int64)++v32 >= (int)v30 )
                    goto LABEL_44;
                }
                sub_1C22354(*(_QWORD *)(v33 + 8 * v32));
LABEL_70:
                sub_1C2209C(gameObject, v5);
              }
LABEL_46:
              gameObject = (int64_t)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v61,
                  (System_Collections_Generic_List_object__o *)gameObject,
                  (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v62 = v61;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v62,
                          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v62.fields._current )
                    sub_1C22094(0LL, v46);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v62.fields._current, 0LL);
                  v49 = materials;
                  if ( !materials )
                    sub_1C22094(0LL, v48);
                  v50 = *((_DWORD *)materials + 6);
                  if ( v50 >= 1 )
                  {
                    for ( i = 0; i < v50; ++i )
                    {
                      if ( i >= (unsigned int)v50 )
                        sub_1C2209C(materials, v48);
                      v52 = (char *)&v49[2 * i];
                      v53 = (UnityEngine_Material_o *)*((_QWORD *)v52 + 4);
                      if ( !v53 )
                        sub_1C22094(materials, v48);
                      materials = (void *)UnityEngine_Material__HasProperty_70735792(
                                            *((UnityEngine_Material_o **)v52 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v53, this->fields.propertyName, 0LL);
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
                          if ( vabds_f32(v56, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v53,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v50 = v49[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v62,
                  (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_68:
        sub_1C22094(gameObject, v5);
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

  if ( (byte_4BDB3B7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_MeshRenderer_var);
    sub_1C21E38(&UnityEngine_ParticleSystemRenderer_var);
    sub_1C21E38(&UnityEngine_Renderer_var);
    sub_1C21E38(&UnityEngine_SkinnedMeshRenderer_var);
    sub_1C21E38(&UnityEngine_SpriteRenderer_var);
    sub_1C21E38(&System_Type_TypeInfo);
    byte_4BDB3B7 = 1;
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