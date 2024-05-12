void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0

  if ( (byte_438B8A8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_B775C4(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_B775C4(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo);
    sub_B775C4(&StringLiteral_16254/*"_CullMode"*/);
    byte_438B8A8 = 1;
  }
  v3 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_B775DC(
                                                                     FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                     1LL);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  if ( !v3->max_length )
  {
    v25 = sub_B776C8(v3);
    sub_B77668(v25, 0LL);
  }
  v3->m_Items[1] = 1;
  this->fields.targetRendererTypes = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetRendererTypes,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Int32_array **)StringLiteral_16254/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16254/*"_CullMode"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.propertyName, v11, v12, v13, v14, v15, v16, v17);
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetRenderers,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__OnDestroy(
        FGOSwapShaderPropertyWhenEnemy_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *targetRenderers; // x0
  UnityEngine_Material_array *materials; // x0
  __int64 v5; // x1
  UnityEngine_Material_array *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1
  struct System_Collections_Generic_List_Renderer__o *v11; // x0
  __int64 v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438B8A7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Renderer__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B8A7 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  targetRenderers = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v13,
        targetRenderers,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v14 = v13;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v14,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v14.fields.current )
          sub_B7769C(0LL, v10);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v14.fields.current, 0LL);
        v6 = materials;
        if ( !materials )
          sub_B7769C(0LL, v5);
        v7 = *(_QWORD *)&materials->max_length;
        if ( (int)v7 >= 1 )
        {
          v8 = 0LL;
          do
          {
            if ( v8 >= (unsigned int)v7 )
            {
              v12 = sub_B776C8(materials);
              sub_B77668(v12, 0LL);
            }
            v9 = (UnityEngine_Object_o *)v6->m_Items[v8];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              if ( this->fields.isDestroyImmediate )
              {
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UnityEngine_Object__DestroyImmediate_36310192(v9, 0LL);
              }
              else
              {
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UnityEngine_Object__Destroy_36309980(v9, 0LL);
              }
            }
            LODWORD(v7) = v6->max_length;
            ++v8;
          }
          while ( (__int64)v8 < (int)v7 );
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v14,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v11 = this->fields.targetRenderers;
    if ( !v11 )
      sub_B7769C(0LL, method);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_Renderer__Clear__);
  }
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__Start(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x20
  __int64 gameObject; // x0
  UnityEngine_Renderer_c *v5; // x1
  UnityEngine_Object_o *webView; // x21
  srcLineSprite_o *Component_srcLineSprite; // x20
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UnityEngine_GameObject_array *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x11
  __int64 v28; // x8
  unsigned __int64 v29; // x23
  UnityEngine_GameObject_o *v30; // x20
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v31; // x28
  __int64 v32; // x8
  __int64 v33; // x21
  unsigned __int64 v34; // x24
  __int64 v35; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x22
  __int64 v37; // x9
  void *materials; // x0
  __int64 v39; // x1
  _DWORD *v40; // x20
  int v41; // w8
  int i; // w24
  char *v43; // x8
  UnityEngine_Material_o *v44; // x21
  float Float; // s0
  float x; // s9
  float v47; // s8
  float equivalentRange; // s0
  float y; // s9
  __int64 v50; // x1
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  struct UnityEngine_GameObject_array *v54; // [xsp+0h] [xbp-B0h]
  unsigned __int64 v55; // [xsp+8h] [xbp-A8h]
  UnityEngine_GameObject_o *v56; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_438B8A6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B775C4(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Renderer_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_438B8A6 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( (gameObject & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_71;
    webView = (UnityEngine_Object_o *)Instance->fields.webView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(webView, 0LL, 0LL) )
    {
      gameObject = (__int64)Instance->fields.webView;
      if ( !gameObject )
        goto LABEL_71;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)gameObject,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
      if ( (gameObject & 1) == 0 )
      {
        if ( Component_srcLineSprite )
        {
          if ( !LOBYTE(Component_srcLineSprite[3].fields.mcTweenScaleP) )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( *(_QWORD *)&targetObjects->max_length )
              goto LABEL_81;
          }
          v10 = (struct UnityEngine_GameObject_array *)sub_B775DC(UnityEngine_GameObject___TypeInfo, 1LL);
          this->fields.targetObjects = v10;
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.targetObjects,
            (System_Int32_array **)v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          v17 = this->fields.targetObjects;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v17 )
          {
            v24 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v17->obj.klass->_1.element_class);
              if ( !gameObject )
              {
                v53 = sub_B776BC(0LL);
                sub_B77668(v53, 0LL);
              }
            }
            if ( !v17->max_length )
              goto LABEL_73;
            v17->m_Items[0] = (UnityEngine_GameObject_o *)v24;
            sub_B77560((BattleServantConfConponent_o *)v17->m_Items, v24, v18, v19, v20, v21, v22, v23);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_81:
              v25 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v25 >= 1 )
              {
                v26 = 0LL;
                v54 = targetObjects;
                while ( 1 )
                {
                  if ( v26 >= (unsigned int)v25 )
                    goto LABEL_73;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v55 = v26;
                  if ( !targetRendererTypes )
                    goto LABEL_71;
                  v28 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v28 >= 1 )
                    break;
LABEL_47:
                  LODWORD(v25) = v54->max_length;
                  v26 = v55 + 1;
                  if ( (__int64)(v55 + 1) >= (int)v25 )
                    goto LABEL_48;
                }
                v29 = 0LL;
                v30 = v54->m_Items[v26];
                v56 = v30;
                while ( 1 )
                {
                  if ( v29 >= (unsigned int)v28 )
                    goto LABEL_73;
                  v31 = targetRendererTypes;
                  gameObject = (__int64)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                          targetRendererTypes->m_Items[v29 + 1],
                                          (const MethodInfo *)v5);
                  if ( !v30 )
                    goto LABEL_71;
                  gameObject = (__int64)UnityEngine_GameObject__GetComponentsInChildren(
                                          v30,
                                          (System_Type_o *)gameObject,
                                          0LL);
                  if ( gameObject )
                  {
                    v32 = *(_QWORD *)(gameObject + 24);
                    v33 = gameObject;
                    if ( (int)v32 >= 1 )
                      break;
                  }
LABEL_46:
                  LODWORD(v28) = v31->max_length;
                  v30 = v56;
                  ++v29;
                  targetRendererTypes = v31;
                  if ( (__int64)v29 >= (int)v28 )
                    goto LABEL_47;
                }
                v34 = 0LL;
                while ( 1 )
                {
                  if ( v34 >= (unsigned int)v32 )
                    goto LABEL_73;
                  v35 = v33 + 32;
                  v36 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v33 + 32 + 8 * v34);
                  if ( v36 )
                  {
                    v5 = UnityEngine_Renderer_TypeInfo;
                    v37 = *(&UnityEngine_Renderer_TypeInfo->_2.bitflags2 + 1);
                    if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v37
                      || (UnityEngine_Renderer_c *)v36->klass->_2.typeHierarchy[v37 - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (__int64)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_71;
                  gameObject = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)gameObject,
                                 *(WarBoardManager_TaskList_o **)(v35 + 8 * v34),
                                 (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( (gameObject & 1) == 0 )
                  {
                    gameObject = (__int64)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_71;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
                      v36,
                      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_Renderer__Add__);
                  }
                  LODWORD(v32) = *(_DWORD *)(v33 + 24);
                  if ( (__int64)++v34 >= (int)v32 )
                    goto LABEL_46;
                }
                gameObject = sub_B77990(*(_QWORD *)(v35 + 8 * v34));
LABEL_73:
                v51 = sub_B776C8(gameObject);
                sub_B77668(v51, 0LL);
              }
LABEL_48:
              gameObject = (__int64)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  &v57,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
                  (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v58 = v57;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v58,
                          (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v58.fields.current )
                    sub_B7769C(0LL, v50);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v58.fields.current, 0LL);
                  v40 = materials;
                  if ( !materials )
                    sub_B7769C(0LL, v39);
                  v41 = *((_DWORD *)materials + 6);
                  if ( v41 >= 1 )
                  {
                    for ( i = 0; i < v41; ++i )
                    {
                      if ( i >= (unsigned int)v41 )
                      {
                        v52 = sub_B776C8(materials);
                        sub_B77668(v52, 0LL);
                      }
                      v43 = (char *)&v40[2 * i];
                      v44 = (UnityEngine_Material_o *)*((_QWORD *)v43 + 4);
                      if ( !v44 )
                        sub_B7769C(materials, v39);
                      materials = (void *)UnityEngine_Material__HasProperty_41467028(
                                            *((UnityEngine_Material_o **)v43 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v44, this->fields.propertyName, 0LL);
                        x = this->fields.swapPropertyValue.fields.x;
                        v47 = Float;
                        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !System_Math_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        }
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v47, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v44,
                            this->fields.propertyName,
                            this->fields.swapPropertyValue.fields.y,
                            0LL);
                        }
                        else
                        {
                          materials = System_Math_TypeInfo;
                          y = this->fields.swapPropertyValue.fields.y;
                          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !System_Math_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            equivalentRange = this->fields.equivalentRange;
                          }
                          if ( vabds_f32(v47, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v44,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v41 = v40[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v58,
                  (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_71:
        sub_B7769C(gameObject, v5);
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

  if ( (byte_438B8A5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_MeshRenderer_var);
    sub_B775C4(&UnityEngine_ParticleSystemRenderer_var);
    sub_B775C4(&UnityEngine_Renderer_var);
    sub_B775C4(&UnityEngine_SkinnedMeshRenderer_var);
    sub_B775C4(&UnityEngine_SpriteRenderer_var);
    sub_B775C4(&System_Type_TypeInfo);
    byte_438B8A5 = 1;
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
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
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