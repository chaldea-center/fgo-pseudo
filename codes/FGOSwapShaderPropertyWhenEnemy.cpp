void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BFC5B7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_List_Renderer__TypeInfo, v3);
    sub_1C2E12C(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_16474/*"_CullMode"*/, v5);
    byte_4BFC5B7 = 1;
  }
  v6 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_1C2E1D4(
                                                                     FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                     1LL);
  if ( !v6 )
    sub_1C2E388(0LL, v7);
  if ( !v6->max_length )
    sub_1C2E390(v6, v6);
  v6->m_Items[1] = 1;
  this->fields.targetRendererTypes = v6;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.targetRendererTypes, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  v14 = StringLiteral_16474/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16474/*"_CullMode"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.propertyName, v14, v15, v16, v17, v18, v19, v20);
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  v21 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v21;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.targetRenderers, (int64_t)v21, v22, v23, v24, v25, v26, v27);
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
  UnityEngine_Material_array *v13; // x20
  __int64 v14; // x8
  unsigned __int64 v15; // x24
  UnityEngine_Object_o *v16; // x21
  uint32_t cctor_finished; // w8
  struct System_Collections_Generic_List_Renderer__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BFC5B6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer__Clear__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer__get_Count__, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    byte_4BFC5B6 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  targetRenderers = (System_Collections_Generic_List_object__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        targetRenderers,
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v22 = v21;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v22.fields._current )
          sub_1C2E388(0LL, v10);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v22.fields._current, 0LL);
        v13 = materials;
        if ( !materials )
          sub_1C2E388(0LL, v12);
        v14 = *(_QWORD *)&materials->max_length;
        if ( (int)v14 >= 1 )
        {
          v15 = 0LL;
          do
          {
            if ( v15 >= (unsigned int)v14 )
              sub_1C2E390(materials, v12);
            v16 = (UnityEngine_Object_o *)v13->m_Items[v15];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
              if ( this->fields.isDestroyImmediate )
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__DestroyImmediate_70989908(v16, 0LL);
              }
              else
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UnityEngine_Object__Destroy_70989720(v16, 0LL);
              }
            }
            LODWORD(v14) = v13->max_length;
            ++v15;
          }
          while ( (__int64)v15 < (int)v14 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v18 = this->fields.targetRenderers;
    if ( !v18 )
      sub_1C2E388(targetRenderers, method);
    size = v18->fields._size;
    v20 = v18->fields._version + 1;
    v18->fields._size = 0;
    v18->fields._version = v20;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
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
  int64_t gameObject; // x0
  UnityEngine_Renderer_c *v16; // x1
  UnityEngine_Object_o *klass; // x21
  Il2CppObject *Component_object; // x20
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UnityEngine_GameObject_array *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x28
  __int64 v38; // x8
  unsigned __int64 v39; // x29
  UnityEngine_GameObject_o *v40; // x20
  __int64 v41; // x8
  int64_t v42; // x21
  unsigned __int64 v43; // x23
  int64_t v44; // x24
  Il2CppObject *v45; // x22
  __int64 methodPtr_low; // x9
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  __int64 v57; // x1
  void *materials; // x0
  __int64 v59; // x1
  _DWORD *v60; // x20
  int v61; // w8
  int i; // w24
  char *v63; // x8
  UnityEngine_Material_o *v64; // x21
  float Float; // s0
  float x; // s9
  float v67; // s8
  float equivalentRange; // s0
  float y; // s9
  struct UnityEngine_GameObject_array *v70; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v71; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BFC5B5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_1C2E12C(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer__Contains__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v9);
    sub_1C2E12C(&System_Math_TypeInfo, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&UnityEngine_Renderer_TypeInfo, v12);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v13);
    byte_4BFC5B5 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (gameObject & 1) == 0 )
      {
        if ( Component_object )
        {
          if ( !LOBYTE(Component_object[32].monitor) )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( *(_QWORD *)&targetObjects->max_length )
              goto LABEL_77;
          }
          v21 = (struct UnityEngine_GameObject_array *)sub_1C2E1D4(UnityEngine_GameObject___TypeInfo, 1LL);
          this->fields.targetObjects = v21;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields.targetObjects,
            (int64_t)v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          v28 = this->fields.targetObjects;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v28 )
          {
            if ( !v28->max_length )
              goto LABEL_70;
            v28->m_Items[0] = (UnityEngine_GameObject_o *)gameObject;
            sub_1C2E0D0((PartyOrganizationUtility_o *)v28->m_Items, gameObject, v29, v30, v31, v32, v33, v34);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_77:
              v35 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v35 >= 1 )
              {
                v36 = 0LL;
                v70 = targetObjects;
                while ( 1 )
                {
                  if ( v36 >= (unsigned int)v35 )
                    goto LABEL_70;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v71 = v36;
                  if ( !targetRendererTypes )
                    goto LABEL_68;
                  v38 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v38 >= 1 )
                    break;
LABEL_45:
                  LODWORD(v35) = v70->max_length;
                  v36 = v71 + 1;
                  if ( (__int64)(v71 + 1) >= (int)v35 )
                    goto LABEL_46;
                }
                v39 = 0LL;
                v40 = v70->m_Items[v36];
                while ( 1 )
                {
                  if ( v39 >= (unsigned int)v38 )
                    goto LABEL_70;
                  gameObject = (int64_t)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                          targetRendererTypes->m_Items[v39 + 1],
                                          (const MethodInfo *)v16);
                  if ( !v40 )
                    goto LABEL_68;
                  gameObject = (int64_t)UnityEngine_GameObject__GetComponentsInChildren(
                                          v40,
                                          (System_Type_o *)gameObject,
                                          0LL);
                  if ( gameObject )
                  {
                    v41 = *(_QWORD *)(gameObject + 24);
                    v42 = gameObject;
                    if ( (int)v41 >= 1 )
                      break;
                  }
LABEL_44:
                  LODWORD(v38) = targetRendererTypes->max_length;
                  if ( (__int64)++v39 >= (int)v38 )
                    goto LABEL_45;
                }
                v43 = 0LL;
                while ( 1 )
                {
                  if ( v43 >= (unsigned int)v41 )
                    goto LABEL_70;
                  v44 = v42 + 32;
                  v45 = *(Il2CppObject **)(v42 + 32 + 8 * v43);
                  if ( v45 )
                  {
                    v16 = UnityEngine_Renderer_TypeInfo;
                    methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( LOBYTE(v45->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
                      || (UnityEngine_Renderer_c *)v45->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (int64_t)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_68;
                  gameObject = System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)gameObject,
                                 *(Il2CppObject **)(v44 + 8 * v43),
                                 (const MethodInfo_366BC3C *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( (gameObject & 1) == 0 )
                  {
                    gameObject = (int64_t)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_68;
                    v53 = *(_QWORD *)(gameObject + 16);
                    v54 = Method_System_Collections_Generic_List_Renderer__Add__;
                    ++*(_DWORD *)(gameObject + 28);
                    if ( !v53 )
                      goto LABEL_68;
                    v55 = *(int *)(gameObject + 24);
                    if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)gameObject,
                        v45,
                        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v56 = v53 + 8 * v55;
                      *(_DWORD *)(gameObject + 24) = v55 + 1;
                      *(_QWORD *)(v56 + 32) = v45;
                      sub_1C2E0D0((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)v45, v47, v48, v49, v50, v51, v52);
                    }
                  }
                  LODWORD(v41) = *(_DWORD *)(v42 + 24);
                  if ( (__int64)++v43 >= (int)v41 )
                    goto LABEL_44;
                }
                sub_1C2E648(*(_QWORD *)(v44 + 8 * v43));
LABEL_70:
                sub_1C2E390(gameObject, v16);
              }
LABEL_46:
              gameObject = (int64_t)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v72,
                  (System_Collections_Generic_List_object__o *)gameObject,
                  (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v73 = v72;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v73,
                          (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v73.fields._current )
                    sub_1C2E388(0LL, v57);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v73.fields._current, 0LL);
                  v60 = materials;
                  if ( !materials )
                    sub_1C2E388(0LL, v59);
                  v61 = *((_DWORD *)materials + 6);
                  if ( v61 >= 1 )
                  {
                    for ( i = 0; i < v61; ++i )
                    {
                      if ( i >= (unsigned int)v61 )
                        sub_1C2E390(materials, v59);
                      v63 = (char *)&v60[2 * i];
                      v64 = (UnityEngine_Material_o *)*((_QWORD *)v63 + 4);
                      if ( !v64 )
                        sub_1C2E388(materials, v59);
                      materials = (void *)UnityEngine_Material__HasProperty_70855900(
                                            *((UnityEngine_Material_o **)v63 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v64, this->fields.propertyName, 0LL);
                        x = this->fields.swapPropertyValue.fields.x;
                        v67 = Float;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v67, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v64,
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
                          if ( vabds_f32(v67, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v64,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v61 = v60[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v73,
                  (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_68:
        sub_1C2E388(gameObject, v16);
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

  if ( (byte_4BFC5B4 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_MeshRenderer_var, method);
    sub_1C2E12C(&UnityEngine_ParticleSystemRenderer_var, v3);
    sub_1C2E12C(&UnityEngine_Renderer_var, v4);
    sub_1C2E12C(&UnityEngine_SkinnedMeshRenderer_var, v5);
    sub_1C2E12C(&UnityEngine_SpriteRenderer_var, v6);
    sub_1C2E12C(&System_Type_TypeInfo, v7);
    byte_4BFC5B4 = 1;
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